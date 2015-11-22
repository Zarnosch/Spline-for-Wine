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
import flixel.util.FlxPoint;
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

    var enemies = new FlxTypedGroup<Enemy>();
    var enemieShots = new FlxTypedGroup<FlxTypedGroup<Bullet>>();

	var w = 1;
	public var map:MapGen;

    var live1: FlxSprite;
    var live2: FlxSprite;
    var live3: FlxSprite;
    var dead1: FlxSprite;
    var dead2: FlxSprite;
    var dead3: FlxSprite;
    var scoreBoard: FlxSprite;
    var ammoClip: FlxSprite;
    var ammoClipMaxY: Float = 144;

    var score: Int = 0;
    var scoreText: FlxText;
    var kills: Int = 0;

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

        live1 = new FlxSprite(2, 2, "assets/images/sheep_head.png");
        live1.scrollFactor.set(0,0);
        add(live1);

        live2 = new FlxSprite(34, 2, "assets/images/sheep_head.png");
        live2.scrollFactor.set(0,0);
        add(live2);

        live3 = new FlxSprite(66, 2, "assets/images/sheep_head.png");
        live3.scrollFactor.set(0,0);
        add(live3);

        dead1 = new FlxSprite(2, 2, "assets/images/sheep_head_dead.png");
        dead2 = new FlxSprite(32, 2, "assets/images/sheep_head_dead.png");
        dead3 = new FlxSprite(66, 2, "assets/images/sheep_head_dead.png");
        dead1.scrollFactor.set(0,0);
        dead2.scrollFactor.set(0,0);
        dead3.scrollFactor.set(0,0);
        dead1.visible = false;
        dead2.visible = false;
        dead3.visible = false;
        add(dead1);
        add(dead2);
        add(dead3);

        scoreBoard = new FlxSprite(146, 0, "assets/images/score_board.png");
        scoreBoard.scrollFactor.set(0,0);
        add(scoreBoard);

        scoreText = new FlxText(160, 5, 200, "", 10, true);
        scoreText.scrollFactor.set(0,0);
        scoreText.text = "" + score;
        add(scoreText);

        ammoClip = new FlxSprite(253, ammoClipMaxY, "assets/images/ammo_clip.png");
        ammoClip.scrollFactor.set(0,0);
        add(ammoClip);
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

		/*if (FlxG.keys.justPressed.RIGHT) {
			w++;
		}
		if (FlxG.keys.justPressed.LEFT) {
			w--;
		}*/

        if (score > ((w + 2) * 100)) {
            w++;
        }

		weapons.setWeaponNumber(w);
		/*
		for (val in map.visGrounds) {
			if (sheep.x - val.x > 600) {
				val.destroy();
			}
		}
		*/

        ammoClip.y = ammoClipMaxY + 96 * (weapons.shotsFired/weapons.ammo);
        score = kills * 100;
        scoreText.text = "" + score;
	}	

    function hurtPlayer(player: Sheep, bullet: Bullet) {
        // TODO: explode

        if (FlxG.pixelPerfectOverlap(player, bullet, 255)) {
	        if (player.damage()) {
	            FlxG.camera.flash(FlxColor.RED, 0.1);
	            switch(player.lives) {
	                case 2:
	                    dead3.visible = true;
	                case 1:
	                    dead3.visible = true;
	                    dead2.visible = true;
	                case 0:
	                    dead3.visible = true;
	                    dead2.visible = true;
	                    dead1.visible = true;
	            }
	        }
			bullet.destroy();
		}
        
    }

    function hurtEnemy(enemy: Enemy, bullet: Bullet) {
        // TODO: explode
		if (enemy != null && bullet != null) {
			if (FlxG.pixelPerfectOverlap(enemy, bullet, 255)) {
				bullet.destroy();
				enemy.damage();
				kills++;
			}
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
