package;
import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxBasic;
import flixel.util.FlxPoint;
import flixel.group.FlxTypedGroup;

class MapGen extends FlxBasic {
	
	public var collGrounds = new FlxTypedGroup<FlxSprite>();
	public var visGrounds = new Array<FlxSprite>();

	public function new()
    {
    	super();
    	createGround(0, 200, 400, 15, 35);
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

        //ground.updateHitbox();
        visGrounds.push(ground);

    	var collGround = new FlxSprite();
    	collGround.makeGraphic(w, h, FlxColor.BROWN);
    	collGround.x = x;
    	collGround.y = y;

		//collGround.updateHitbox();
    	collGrounds.add(collGround);
    }
}
