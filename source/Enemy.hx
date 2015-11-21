package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;

//SheepState
enum State {
	Running;
	Standing;
	Attacking;
}

enum EnemyType {
    NAZI_SHEEP;
    NAZI_SHEEP_FLYING;
    SOVIET_SHEEP;
    SOVIET_SHEEP_FLYING;
    SHEEP_BOMBER;
}

class Enemy extends FlxSprite {

    var sheepType: EnemyType;
    var moveSpeed: Float;

    public function new() 
    {
        super(0,0);
        loadGraphic("assets/images/soviet_sheep_running.png", true, 16, 16);
	    animation.add("move_nazi", [0, 1, 2, 3, 4, 5, 6, 7], 5, true);
        animation.play("move_nazi");

        moveSpeed = 0.8;
    }

    override public function update()
    {
        x += moveSpeed;
    }

    override public function destroy()
    {

    }
}
