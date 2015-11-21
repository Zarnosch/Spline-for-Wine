package;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.FlxG.collide;

//SheepState
enum State {
	Running;
	Standing;
	Attacking;
}

class Sheep extends FlxSprite{
	//Running
	public var maxSpeed:Float;
	public var activeSpeed:Float;
	public var beschleunigung:Float;
	//moveDirection (use "left" and "right")
	public var activeMoveDirection:String;
	public var lastMoveDirection:String;
	//Jumping
	public var maxJumpHeight:Float;
	public var activeJumpSpeed:Float;
	public var minJumpSpeed:Float;
	public var maxJumpSpeed:Float;
	public var activeGravity:Float;
	public var maxGravity:Float;
	
	//Map reference
	public var map:MapGen;

	//Position
	public var position = new Array<Float>();

	//activeSheepSate
	var activeSheepSate:State;
	//lastSheepState
	var lastSheepState:State;
	//jumpToggel
	var isJumping:Bool;
	//jump startPoint
	var jumpStart = new Array<Float>();

	public function new()
    {
        super(0, 0);
        //makeGraphic(32, 32, FlxColor.WHITE);
        loadGraphic("assets/images/sheep_flying.png", true, 32, 32);
        animation.add("flying", [0, 1, 2, 3, 4, 5, 6], 5, true);
        animation.play("flying");
        position[0] = 0;
        position[1] = 0;
        beschleunigung = 0.1;
        activeGravity = 0.2;
        maxGravity = 1;
        isJumping = false;
        activeSheepSate = State.Standing;
        lastSheepState = State.Standing;
        activeMoveDirection = 'none';
        lastMoveDirection = 'none';
        maxJumpHeight = 120;
        activeJumpSpeed = 1;
        minJumpSpeed = 0.2;
        maxJumpSpeed = 2;
        maxSpeed = 2;
        activeSpeed = 0;
        jumpStart[0] = 0;
        jumpStart[1] = 0;

    }

    override public function update():Void
    {
        super.update();
        updateMovement();
        checkGravity();
        checkSpeed();
    }

    override public function destroy():Void
    {
        super.destroy();
    }

    public function updateMovement():Void
    {
    	if (FlxG.keys.pressed.A)
		{
    		moveLeft();
            flipX = true;
		}
    	if (FlxG.keys.pressed.D)
		{
    		moveRight();
            flipX = false;
		}
    	if (FlxG.keys.pressed.SPACE)
		{
			jump();
		}
		checkSpeed();
		checkJump();
		checkCollsision();
		//trace(isJumping + " " + jumpStart[1]);
		//trace("X: " + this.x + " y: " + this.y);
    }

    private function moveLeft():Void
    {	
    	lastSheepState = activeSheepSate;
    	activeSheepSate = State.Running;
    	lastMoveDirection = activeMoveDirection;
    	activeMoveDirection = 'left';
    	position[0] -= activeSpeed;
    }

    private function moveRight():Void
    {
    	lastSheepState = activeSheepSate;
    	activeSheepSate = State.Running;
    	lastMoveDirection = activeMoveDirection;
    	activeMoveDirection = 'right';
    	position[0] += activeSpeed;
    }

    private function jump():Void
    {
    	//triggers the jump
    	if(!isJumping){
    		//trace("Triggered Jump");
    		jumpStart = position.copy();
    		isJumping = true;
    	}   	
    }

    private function checkSpeed():Void
    {
    	//calculate a smooth movement
    	if (activeSpeed > maxSpeed){
    		activeSpeed = maxSpeed;
    	}
    	if(activeMoveDirection != lastMoveDirection){
    		activeSpeed = 0;
    	}
    	else {
    		activeSpeed = beschleunigung + activeSpeed * 1.05;
    	}    	
    }

    private function checkJump():Void
    {
    	//doing the jump
    	if(isJumping){
    		if(position[1] >= jumpStart[1] - maxJumpHeight && position[1] >= 0){
    			activeJumpSpeed -= (activeJumpSpeed * 0.005);
    			if(activeJumpSpeed > maxJumpSpeed){
    				activeJumpSpeed = maxJumpSpeed;
    			}
    			else if(activeJumpSpeed < minJumpSpeed){
    					activeJumpSpeed = minJumpSpeed;
    			}
    			position[1] -= activeJumpSpeed;
    		}
    		else{
    			isJumping = false;
    			activeJumpSpeed = maxJumpSpeed;
    			activeGravity = 0.2;
    		}
    	}
    	else {
    		position[1] += activeGravity;
    	}
    }

    public function setLanded():Void
    {
    	isJumping = false;
    	activeGravity = 0.2;
    }

    public function checkGravity():Void
    {
    	activeGravity = activeGravity * 1.02;
    	if(activeGravity > maxGravity){
    		activeGravity = maxGravity;
    	}
    }

    public function checkCollsision():Void
    {
    	this.x = position[0];
		this.y = position[1];
    }
}