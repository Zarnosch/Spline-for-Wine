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
    var enemieShots = new FlxTypedGroup<FlxTypedGroup<Bullet>>();

	var w = 1;
	public var map:MapGen;

	override public function create():Void
	{
		FlxG.camera.bgColor = FlxColor.HOT_PINK;
		super.create();
		
		// map gen
		map = new MapGen(1000, 0);
		enemies = map.enemies;
		enemieShots = map.enemieShots;
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

        add(enemies);
		add(enemieShots);
		map.sheep = sheep;
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
        FlxG.overlap(enemies, weapons.bullets, hurtEnemy);
        FlxG.overlap(sheep, enemieShots, hurtPlayer);
        FlxG.overlap(map.collGrounds, weapons.bullets, explode);
        FlxG.overlap(map.collGrounds, enemieShots, explode);
        //FlxG.collide(weapons.bullets, enemieShots);
	
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
		for (val in map.visGrounds) {
			if (sheep.x - val.x > 600) {
				val.destroy();
			}
		}		
	}	

    function hurtPlayer(player: Sheep, bullet: Bullet) {
        // TODO: explode
		if (FlxG.pixelPerfectOverlap(player, bullet, 255)) {
			bullet.destroy();
			player.damage();
		}
        
    }

    function hurtEnemy(enemy: Enemy, bullet: Bullet) {
        // TODO: explode
		if (FlxG.pixelPerfectOverlap(enemy, bullet, 255)) {
			bullet.destroy();
			enemy.damage();
		}        
    }

    function explode(ground: FlxSprite , b: Bullet) {
        // TODO: explosion
		if (FlxG.pixelPerfectOverlap(ground, b,255)) {
			var explode = new Explosion(b.x, b.y);
			add(explode);
			b.destroy();
		}        
    }
}
