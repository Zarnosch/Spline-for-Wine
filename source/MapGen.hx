package;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxBasic;
import flixel.util.FlxPoint;
import flixel.group.FlxTypedGroup;
import flixel.util.FlxRandom;

class MapGen extends FlxBasic {
	
	public var collGrounds = new FlxTypedGroup<FlxSprite>();
	public var visGrounds = new FlxTypedGroup<FlxSprite>();
	public var debugFus = new FlxTypedGroup<FlxSprite>();
	
	private var activeX:Int = 0;
	private var activeY:Int = 0;
	private var minHeight:Int = 1000;
	private var maxHeight:Int = 0;
	private var Range:Float = 800;
	private var maxRange:Int = 150;
	
	public var cameraX:Float = 0;
	
	public var enemies = new FlxTypedGroup<Enemy>();
    public var enemieShots = new FlxTypedGroup<FlxTypedGroup<Bullet>>();
	public var sheep:Sheep;

	public function new(minHeight:Int, maxHeight:Int)
    {
    	super();
		activeX = 0;
		activeY = minHeight - 50;
    	//createGround(activeX, activeY, maxRange, minHeight - activeY, 35);		
    }

    override public function update():Void
    {
        super.update();
		updateWorld();
    }

    override public function destroy():Void
    {
        super.destroy();
    }
	
	function updateWorld():Void
	{
		if (activeX < cameraX + Range) {
			activeY = minHeight - FlxRandom.intRanged( -10, 30);
			var length:Int = FlxRandom.intRanged(20, maxRange);
			createGround(activeX, activeY, length, 1000 - activeY, 15);
			if (activeX > 400 && FlxRandom.chanceRoll(50)) {
				addDownEnemy(activeX, activeY - 35, activeX-10, activeX + length -10);
			}			
			minHeight = activeY;
			activeX += maxRange + FlxRandom.intRanged(10, 130);
		}
	}

    function createGround(x:Int, y:Int, w:Int, h:Int, depth:Int)
    {
    	var ground = new FlxSprite();
    	ground.makeGraphic(w, depth+1, FlxColor.CHARCOAL);
    	ground.x = x;
    	ground.y = y-depth;

        //ground.updateHitbox();
        visGrounds.add(ground);
    	var collGround = new FlxSprite();
    	collGround.makeGraphic(w, h, FlxColor.BROWN + FlxRandom.colorExt(-15, 15, -15, 15, -15, 15, -1, -1));
		collGround.setPosition(x, y);
		collGround.immovable = true;

		//collGround.updateHitbox();
    	collGrounds.add(collGround);
		//DebugFu
		/*
		debugFu(x, y);
		debugFu(x + w, y);
		debugFu(x, y + h);
		debugFu(x + w, y + h);
		*/
		createRandomVis_(x, y, w, h);
    }
	
	function debugFu(x:Int, y:Int):Void
	{
		var fu = new FlxSprite();
		fu.makeGraphic(4, 4, FlxColor.GREEN);
		fu.setPosition(x, y);
		debugFus.add(fu);
	}
	
	function createRandomVis_(x:Int, y:Int, w:Int, h:Int):Void
	{	
		var i = x;
		while (i < (x+w) && y < 980) {
			var ground = new FlxSprite();
			ground.makeGraphic(4, 4, FlxColor.CHARCOAL);
			ground.setPosition(i, y+1);
			visGrounds.add(ground);
			createRandomVisRec(i, y+5, 50);
			i += 4;
		}
	}
	function createRandomVisRec(x:Int, y:Int, op:Int):Void
	{	
		//trace(x + " : " + y);
		var ground = new FlxSprite();
		ground.makeGraphic(4, 4, FlxColor.CHARCOAL - FlxRandom.colorExt(0, 0, 0, 0, 0, 0, op, op+30));
		op += 20;
		ground.setPosition(x, y);
		visGrounds.add(ground);
		var spread:Bool = FlxRandom.chanceRoll(70);
		if (spread && y < 980) {
			createRandomVisRec(x, y + 4, op);
		}
	}
	
	function addDownEnemy(x:Int, y:Int, xb:Int, yb:Int):Void
	{
		var enemy =  new Enemy(x, y, Enemy.EnemyType.NAZI_SHEEP, true, xb, yb);
		enemy.sheep = sheep;
        enemieShots.add(enemy.enemyShots);
        enemies.add(enemy);
	}
}
