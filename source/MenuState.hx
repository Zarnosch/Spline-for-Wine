package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{

    var startButton: FlxButton;
    var scoreButton: FlxButton;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
        startButton = new FlxButton((FlxG.width / 2) - 40, 80, "START", startGame); 
        add(startButton);

        scoreButton = new FlxButton((FlxG.width/2) - 40, 120, "SCORE", goScore);
        add(scoreButton);

		super.create();
	}

    function startGame()
    {
        FlxG.switchState(new PlayState());
    }

    function goScore()
    {
        trace("score");
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
	}	
}
