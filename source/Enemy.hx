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

    var sheepType: EnemyType;
    var moveSpeed: Float;

    var attack: Float = 0;
    var attackTimer: Float;

    public var enemyShots = new FlxTypedGroup();

    public function new(x: Float, y: Float, enemyType: EnemyType) 
    {
        super(x,y);
        loadGraphic("assets/images/nazi_sheep_map.png", true, 32, 32);

	    animation.add("nazi_tank", [0, 1, 2, 3, 4, 5, 6, 7], 5, true);
        animation.add("nazi_air", [8, 9, 10, 11, 12, 13, 14, 15], 10, true);

        sheepType = enemyType;

        switch(sheepType) {
            case EnemyType.NAZI_SHEEP: 
                animation.play("nazi_tank");
                moveSpeed = 0.5;
                attackTimer = 10;
            case EnemyType.NAZI_SHEEP_FLYING: 
                animation.play("nazi_air");
                moveSpeed = 0.8;
                attackTimer = 40;
        }
    }

    override public function update()
    {
        x += moveSpeed;
        super.update();

        attack++;

        if (attack > attackTimer) {
            dropBomb();
            attack = 0;
        }
    }

    function dropBomb() 
    {
        switch(sheepType) {
            case EnemyType.NAZI_SHEEP: 
                enemyShots.add(new Bullet((x+4), (y+5), Bullet.BulletType.GATLING, false));
            case EnemyType.NAZI_SHEEP_FLYING:
                enemyShots.add(new Bullet(x, (y+5), Bullet.BulletType.ROCKET, false, true));
        }
    }

    override public function destroy()
    {
        super.destroy();
    }
}
