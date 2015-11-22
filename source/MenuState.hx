package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxColor;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{

    var startButton: FlxButton;
    var scoreButton: FlxButton;
    var title: FlxText;
    var subTitle: FlxText;
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
        FlxG.camera.bgColor = FlxColor.GRAY;

        title = new FlxText((FlxG.width / 2) - 150, 30, 400, "LIBERATION", 40);
        add(title);

        subTitle =  new FlxText((FlxG.width / 2) - 100, 80, 400, "SHEEP", 20);
        add(subTitle);

        startButton = new FlxButton((FlxG.width / 2) - 40, 120, "START", startGame); 
        add(startButton);

        scoreButton = new FlxButton((FlxG.width/2) - 40, 120, "SCORE", goScore);
        //add(scoreButton);

		super.create();
	}

    function startGame()
    {
        FlxG.switchState(new PlayState());
    }

    function goScore()
    {
        FlxG.switchState(new GameOver());

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
