package;

import flixel.FlxSprite;
import flixel.FlxG;

class Explosion extends FlxSprite {

    public function new(x: Float, y: Float) 
    {
        super(x - 8, y - 16);
        loadGraphic("assets/images/explosion.png", true, 32, 32);
	    animation.add("explode", [0, 1, 2, 3, 4, 5, 6], 8, false);
        animation.play("explode");
    }

    override public function update()
    {
        super.update();
    }

    override public function destroy()
    {
        super.destroy();
    }

}
