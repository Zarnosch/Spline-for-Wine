package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.group.FlxTypedGroup;

enum EnemyType {
    NAZI_SHEEP;
    NAZI_SHEEP_FLYING;
    //SOVIET_SHEEP;
    //SOVIET_SHEEP_FLYING;
}

class Enemy extends FlxSprite {

	public var sheep:Sheep; 
	
    var sheepType: EnemyType;
    var moveSpeed: Float;

    var attack: Float = 0;
    var attackTimer: Float;

    var leftBound: Float = 0;
    var rightBound: Float = 100;
    var moveInBounds: Bool = false;
    var flipped: Bool = true;

    var lives: Int = 1;

    public var enemyShots = new FlxTypedGroup();

    public function new(x: Float, y: Float, enemyType: EnemyType, ?bounds: Bool, ?left: Float, ?right: Float) 
    {
        super(x,y);
        loadGraphic("assets/images/nazi_sheep_map.png", true, 32, 32);

	    animation.add("nazi_tank", [0, 1, 2, 3, 4, 5, 6, 7], 5, true);
        animation.add("nazi_air", [8, 9, 10, 11, 12, 13, 14, 15], 10, true);

        sheepType = enemyType;

        leftBound = left;
        rightBound = right;
        moveInBounds = bounds;

        switch(sheepType) {
            case EnemyType.NAZI_SHEEP: 
                animation.play("nazi_tank");
                moveSpeed = 0.5;
                attackTimer = 40;
            case EnemyType.NAZI_SHEEP_FLYING: 
                animation.play("nazi_air");
                moveSpeed = 0.8;
                attackTimer = 80;
                lives = 2;
        }
    }

    override public function update()
    {
        super.update();
        if (moveInBounds) {
            if (x <= leftBound) {
                flipped = false;
            } else if (x >= rightBound) {
                flipped = true;
            }
            if (flipped) {
                x -= moveSpeed;
            } else {
                x += moveSpeed;
            }
        }
		else {
			x -= moveSpeed;
		}
        flipX = flipped;

        attack++;

        if (attack > attackTimer && Math.abs(this.x - sheep.x) < 150) {
            dropBomb();
            attack = 0;
        }
    }

    function dropBomb() 
    {
        switch(sheepType) {
            case EnemyType.NAZI_SHEEP: 
                enemyShots.add(new Bullet(x, (y+5), Bullet.BulletType.GATLING, flipped));
            case EnemyType.NAZI_SHEEP_FLYING:
                enemyShots.add(new Bullet(x, (y+5), Bullet.BulletType.ROCKET, false, true));
        }
    }

    override public function destroy()
    {
        super.destroy();
    }

    public function damage()
    {
        lives--;
        if (lives <= 0) {
            this.destroy();
            FlxG.camera.shake(0.01, 0.1);
        }
    }
}
