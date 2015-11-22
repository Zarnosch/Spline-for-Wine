package;

import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

class GameOver extends FlxState {

    var goText: FlxText; 
    var playAgain: FlxButton;

    override public function create()
    {
        FlxG.camera.bgColor = FlxColor.GRAY;
        super.create();
        goText = new FlxText((FlxG.width / 2) - 50, 50, 200, "You died in honor!");
        add(goText);


        playAgain = new FlxButton((FlxG.width / 2) - 40, 100, "PLAY AGAIN", startGame); 
        add(playAgain);

    }

    function startGame()
    {
        FlxG.switchState(new PlayState());
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
