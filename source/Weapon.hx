package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.group.FlxTypedGroup;

class Weapon extends FlxSprite {

	var xPos:Float = 0;
	var yPos:Float = 0;

	var currentEquippedWeapon = 1;

	var poolSize = 500;
	//var bullets = new FlxTypedGroup<Bullet>(poolSize);


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

	/*public function setWeapon(weaponName:String):Void
	{
		animation.play(weaponName);
	}*/

	public function setWeaponNumber(weaponNumber:Int):Void
	{
		switch (weaponNumber) {
			case 1:
				animation.play("pistol_lame");
			case 2:
				animation.play("pistol_better");
			case 3:
				animation.play("pistol_cool");
			case 4:
				animation.play("pistol_awesome");
			case 5:
				animation.play("gatling_lame");
			case 6:
				animation.play("gatling_better");
			case 7:
				animation.play("gatling_cool");
			case 8:
				animation.play("gatling_awesome");
			case 9:
				animation.play("tesla_lame");
			case 10:
				animation.play("tesla_better");
			case 11:
				animation.play("tesla_cool");
			case 12:
				animation.play("tesla_awesome");
			case 13:
				animation.play("rocket_lame");
			case 14:
				animation.play("rocket_better");
			case 15:
				animation.play("rocket_cool");
			case 16:
				animation.play("rocket_awesome");
		}
		
		currentEquippedWeapon = weaponNumber;
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

	    if (FlxG.mouse.pressed) {
	    	
	    }
	}

	override public function destroy():Void
	{
	    super.destroy();
	}

}
