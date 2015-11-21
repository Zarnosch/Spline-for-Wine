package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxColor;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	/**
	 * Function that is called up when to state is created to set it up. 
	 */

	var sheep:Sheep;
	var weapons:Weapon;

	var w = 1;
	public var map:MapGen;

	override public function create():Void
	{
		FlxG.camera.bgColor = FlxColor.HOT_PINK;
		super.create();
		
		// map gen
		map = new MapGen();	
        add(map);
		
		add(map.collGrounds);

		for (val in map.visGrounds){
			//trace(val + " test");
			add(val);
		}

        // create Player
		sheep = new Sheep();
		add(sheep);
        
        // create Weapons
		weapons = new Weapon();
		add(weapons);
        
        
		/*for (val in map.collGrounds){
			//trace(val + " test");
			add(val);
		}*/

	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
		//map.update();
		sheep.map = map;
		FlxG.collide(sheep, map.collGrounds, sheep.setLanded);
	
		weapons.setPos(sheep.x, sheep.y);
		weapons.flipPos(sheep.flipX);
		//weapons.update();

		if (FlxG.keys.justPressed.RIGHT) {
			w++;
		}
		if (FlxG.keys.justPressed.LEFT) {
			w--;
		}
		weapons.setWeaponNumber(w);
	}	
}
