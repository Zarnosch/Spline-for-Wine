package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxColor;
import flixel.FlxCamera;
import flixel.util.FlxRect;
import flixel.group.FlxTypedGroup;


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

    var enemies = new FlxTypedGroup<Enemy>();

	var w = 1;
	public var map:MapGen;

	override public function create():Void
	{
		FlxG.camera.bgColor = FlxColor.HOT_PINK;
		super.create();
		
		// map gen
		map = new MapGen(1000, 0);
        add(map);
		
		add(map.collGrounds);
		add(map.visGrounds);
		add(map.debugFus);

		for (val in map.visGrounds){
			//trace(val + " test");
			add(val);
		}

        // create Player
		sheep = new Sheep(0, 900);
		add(sheep);
        
        // create Weapons
		weapons = new Weapon();
		add(weapons);
        add(weapons.bullets);

        var enemy =  new Enemy(300, 850, Enemy.EnemyType.NAZI_SHEEP_FLYING);
        add(enemy.enemyShots);
        enemies.add(enemy);
        add(enemies);

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
		FlxG.camera.follow(sheep, FlxCamera.STYLE_TOPDOWN, 1);
		FlxG.worldBounds.set(sheep.x, sheep.y, 2000, 2000);
		map.cameraX = sheep.x;
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
