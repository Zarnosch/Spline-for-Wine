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
	private var maxRange:Int = 100;
	
	public var cameraX:Float = 0;

	public function new(minHeight:Int, maxHeight:Int)
    {
    	super();
		activeX = 0;
		activeY = minHeight - 15;
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
			activeY = minHeight - FlxRandom.intRanged(-10, 30);			
			createGround(activeX, activeY, FlxRandom.intRanged(20, maxRange), 1000 - activeY, 35);
			minHeight = activeY;
			activeX += maxRange + FlxRandom.intRanged(10, 150);
		}
	}

    function createGround(x:Int, y:Int, w:Int, h:Int, depth:Int)
    {
    	var ground = new FlxSprite();
    	ground.makeGraphic(w, depth, FlxColor.KHAKI);
    	ground.x = x;
    	ground.y = y-depth;

        //ground.updateHitbox();
        visGrounds.add(ground);
    	var collGround = new FlxSprite();
    	collGround.makeGraphic(w, h, FlxColor.BROWN);
		collGround.setPosition(x, y);
		collGround.immovable = true;

		//collGround.updateHitbox();
    	collGrounds.add(collGround);
		//DebugFu
		debugFu(x, y);
		debugFu(x + w, y);
		debugFu(x, y + h);
		debugFu(x + w, y + h);
    }
	
	function debugFu(x:Int, y:Int):Void
	{
		var fu = new FlxSprite();
		fu.makeGraphic(4, 4, FlxColor.GREEN);
		fu.setPosition(x, y);
		debugFus.add(fu);
	}
}
