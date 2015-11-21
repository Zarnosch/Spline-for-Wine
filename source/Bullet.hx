package;

import flixel.FlxSprite;
import flixel.FlxG;

enum BulletType {
    PISTOL;
    GATLING;
    TESLA;
    ROCKET;
}

class Bullet extends FlxSprite{
    
    var bulletType: BulletType;
    var speed: Float;
    var flipped: Bool = false;

    var fromEnemy: Bool = false;

    public function new(x: Float, y: Float, bt: BulletType, f: Bool, ?enemy: Bool):Void
    {
        super((x + 5), (y + 1));
        bulletType = bt;

        loadGraphic("assets/images/shots.png", true, 16, 16);
	    animation.add("pistol", [0, 1, 2, 3], 15, true);
	    animation.add("gatling", [4, 5, 6, 7], 15, true);
	    animation.add("tesla", [28, 9, 10, 11], 15, true);
	    animation.add("rocket", [12, 13, 14, 15], 15, true);

        flipped = f;
        flipX = flipped;

        fromEnemy = enemy;

        switch(bt) {
            case BulletType.PISTOL: 
                animation.play("pistol");
                speed = 2.0;
            case BulletType.GATLING: 
                animation.play("gatling");
                speed = 3.0;
            case BulletType.TESLA: 
                animation.play("tesla");
                speed = 5.0;
            case BulletType.ROCKET: 
                animation.play("rocket");
                speed = 1.5;
        }
    } 

    override public function update():Void
    {
        super.update();
        if (!fromEnemy) {
            if(flipped) {
                x -= speed;
            } else {
                x += speed;
            }
        } else {
            y += speed;
            angle = 90;
        }
        
        if (x > FlxG.camera.x + FlxG.camera.width + 200) {
            this.destroy();
        }
    }

    override public function destroy():Void
    {
        super.destroy();
        bulletType = null;
    }
}
