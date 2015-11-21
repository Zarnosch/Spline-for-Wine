package;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxBasic;
import flixel.util.FlxPoint;

class MapGen extends FlxBasic {
	
	public var collGrounds = new Array<FlxSprite>();
	public var visGrounds = new Array<FlxSprite>();

	public function new()
    {
    	super();
    	createGround(0, 400, 400, 15, 35);
    }

    override public function update():Void
    {
        super.update();
    }

    override public function destroy():Void
    {
        super.destroy();
    }

    function createGround(x:Int, y:Int, w:Int, h:Int, depth:Int)
    {
    	var ground = new FlxSprite();
    	ground.makeGraphic(w, depth, FlxColor.KHAKI);
    	ground.x = x;
    	ground.y = y-depth;
    	var collGround = new FlxSprite();
    	collGround.makeGraphic(w, h, FlxColor.BROWN);
    	collGround.x = x;
    	collGround.y = y;
		collGround.immovable = true;
		ground.updateHitbox();
		collGround.updateHitbox();
    	visGrounds.push(ground);
    	collGrounds.push(collGround);
    }
}