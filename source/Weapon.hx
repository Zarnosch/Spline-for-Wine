package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.group.FlxTypedGroup;
import flixel.FlxCamera;
import flixel.util.FlxColor;

class Weapon extends FlxSprite {

	var xPos:Float = 0;
	var yPos:Float = 0;

    var shotTimer: Float = 10.0;
    var timer: Float = 0;

	var currentEquippedWeapon = 1;

    public var ammo = 10;
    public var shotsFired = 0;

	public var bullets = new FlxTypedGroup<Bullet>();

	public function new():Void
	{
		super(0,0);
		loadGraphic("assets/images/weapons.png", true, 16, 16);
	    animation.add("pistol_lame", [0], 0, false);
	    animation.add("pistol_better", [1], 0, false);
	    animation.add("pistol_cool", [2], 0, false);
	    animation.add("pistol_awesome", [3], 0, false);
	    animation.add("gatling_lame", [4], 0, false);
	    animation.add("gatling_better", [5], 0, false);
	    animation.add("gatling_cool", [6], 0, false);
	    animation.add("gatling_awesome", [7], 0, false);
	    animation.add("tesla_lame", [8], 0, false);
	    animation.add("tesla_better", [9], 0, false);
	    animation.add("tesla_cool", [10], 0, false);
	    animation.add("tesla_awesome", [11], 0, false);
	    animation.add("rocket_lame", [12], 0, false);
	    animation.add("rocket_better", [13], 0, false);
	    animation.add("rocket_cool", [14], 0, false);
	    animation.add("rocket_awesome", [15], 0, false);

	    animation.play("gatling_awesome");
	}

	public function setPos(xPos:Float, yPos:Float):Void
	{
	    this.xPos = xPos + 23;
	    this.yPos = yPos + 12;
	}

	public function setWeaponNumber(weaponNumber:Int):Void
	{
		switch (weaponNumber) {
			case 1:
				animation.play("pistol_lame");
                ammo = 10;
			case 2:
				animation.play("pistol_better");
                ammo = 20;
			case 3:
				animation.play("pistol_cool");
                ammo = 30;
			case 4:
				animation.play("pistol_awesome");
                ammo = 40;
			case 5:
				animation.play("gatling_lame");
                ammo = 100;
			case 6:
				animation.play("gatling_better");
                ammo = 200;
			case 7:
				animation.play("gatling_cool");
                ammo = 300;
			case 8:
				animation.play("gatling_awesome");
                ammo = 400;
			case 9:
				animation.play("tesla_lame");
                ammo = 500;
			case 10:
				animation.play("tesla_better");
                ammo = 1000;
			case 11:
				animation.play("tesla_cool");
                ammo = 1500;
			case 12:
				animation.play("tesla_awesome");
                ammo = 2000;
			case 13:
				animation.play("rocket_lame");
                ammo = 5;
			case 14:
				animation.play("rocket_better");
                ammo = 10;
			case 15:
				animation.play("rocket_cool");
                ammo = 15;
			case 16:
				animation.play("rocket_awesome");
                ammo = 20;
		}
		
		currentEquippedWeapon = weaponNumber;

        if (currentEquippedWeapon <= 4) {
            shotTimer = 10.0;
        } else if(currentEquippedWeapon > 4 && currentEquippedWeapon <= 8) {
            shotTimer = 5.0;
        } else if(currentEquippedWeapon > 8 && currentEquippedWeapon <= 12) {
            shotTimer = 8.0;
        } else if(currentEquippedWeapon > 12) {
            shotTimer = 20.0; 
        }

	}

	public function flipPos(isFlipped:Bool):Void
	{
	    flipX = isFlipped;
	    if (isFlipped) {
	    	xPos -= 30;
	    }
	}

	override public function update():Void
	{
	    super.update();
	    x = xPos;
	    y = yPos;

        timer++;

	    if (timer > shotTimer && FlxG.mouse.pressed) {
            FlxG.camera.shake(0.01, 0.05, true, FlxCamera.SHAKE_HORIZONTAL_ONLY);
            shotsFired++;
            if (shotsFired < ammo) {
                if (currentEquippedWeapon <= 4) {
                    bullets.add(new Bullet(x, y, Bullet.BulletType.PISTOL, flipX));
                } else if(currentEquippedWeapon > 4 && currentEquippedWeapon <= 8) {
                    bullets.add(new Bullet(x, y, Bullet.BulletType.GATLING, flipX));
                } else if(currentEquippedWeapon > 8 && currentEquippedWeapon <= 12) {
                    bullets.add(new Bullet(x, y, Bullet.BulletType.TESLA, flipX));
                } else if(currentEquippedWeapon > 12) {
                    bullets.add(new Bullet(x, y, Bullet.BulletType.ROCKET, flipX));
                }
            } else {
                FlxG.camera.flash(FlxColor.WHITE, 0.05);
                shotsFired = 0;
            }
            timer = 0;
	    }
	}

	override public function destroy():Void
	{
	    super.destroy();
	}

}
