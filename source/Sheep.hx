package;

import flixel.FlxObject;
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
	public var doubbleJump:Bool;
	// for jumping&shit
	var isOnGround:Bool;
	
	//Map reference
	public var map:MapGen;

	//Position
	public var position = new Array<Float>();
	private var lastPosition = new Array<Float>();

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
		lastPosition[0] = 0;
		lastPosition[1] = 0;
        position[0] = 0;
        position[1] = 0;
        beschleunigung = 0.05;
        activeGravity = 0.6;
        maxGravity = 4;
        isJumping = false;
        activeSheepSate = State.Standing;
        lastSheepState = State.Standing;
        activeMoveDirection = 'none';
        lastMoveDirection = 'none';
        maxJumpHeight = 50;
		maxJumpSpeed = 4;
        activeJumpSpeed = maxJumpSpeed;
        minJumpSpeed = 0.2;
        maxSpeed = 2;
        activeSpeed = 0;
        jumpStart[0] = 0;
        jumpStart[1] = 0;
		isOnGround = false;
		doubbleJump = true;

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
    	if (FlxG.keys.justPressed.SPACE)
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
    	this.x -= activeSpeed;
    }

    private function moveRight():Void
    {
    	lastSheepState = activeSheepSate;
    	activeSheepSate = State.Running;
    	lastMoveDirection = activeMoveDirection;
    	activeMoveDirection = 'right';
    	this.x += activeSpeed;
    }

    private function jump():Void
    {
    	//triggers the jump
    	if(!isJumping && isOnGround){
    		//trace("Triggered Jump");
    		jumpStart[0] = this.x;
			jumpStart[1] = this.y;
    		isJumping = true;
			isOnGround = false;
    	}
		else if ((doubbleJump && !isJumping && !isOnGround)) {
			doubbleJump = false;
			jumpStart[0] = this.x;
			jumpStart[1] = this.y;
    		isJumping = true;
			isOnGround = false;
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
    		if(this.y >= jumpStart[1] - maxJumpHeight && this.y >= 0){
    			activeJumpSpeed -= (activeJumpSpeed * 0.005);
    			if(activeJumpSpeed > maxJumpSpeed){
    				activeJumpSpeed = maxJumpSpeed;
    			}
    			else if(activeJumpSpeed < minJumpSpeed){
    					activeJumpSpeed = minJumpSpeed;
    			}
    			this.y -= activeJumpSpeed;
    		}
    		else {
			    isJumping = false;	
    			activeJumpSpeed = maxJumpSpeed;
    			activeGravity = 0.6;
    		}
    	}
    	else {
    		this.y += activeGravity;
    	}
    }

    public function setLanded(?obj1:FlxSprite, ?obj2:FlxSprite):Void
    {
    	isJumping = false;
    	activeGravity = 0.6;
		isOnGround = true;
		doubbleJump = true;
    }

    public function checkGravity():Void
    {
    	activeGravity = activeGravity * 1.05;
    	if(activeGravity > maxGravity){
    		activeGravity = maxGravity;
    	}
    }

    public function checkCollsision():Void
    {
		/*
		if (FlxG.overlap(this, map.collGrounds, collision)) {
			
		}
		*/
		//else {
			
		//}
		lastPosition = position;
		
    }
	
	private function collision(?obj1:FlxSprite, ?obj2:FlxSprite):Void
	{
		/*
		var temp:FlxSprite = new FlxSprite();
		// Obj1 is the sheep (hopefully) if not, swap!		
		if (obj2 == flixel.FlxSprite) {
			temp = obj2;
			obj2 = obj1;
			obj1 = temp;
			trace("Swapped!");
		}
		var x1:Float = obj1.x;
		var y1:Float = obj1.y;
		var w1:Float = obj1.width;
		var h1:Float = obj1.height;
		var x2:Float = obj2.x;
		var y2:Float = obj2.y;
		var w2:Float = obj2.width;
		var h2:Float = obj2.height;
		if (y1 > y2) {
			trace("Ob1 is over Obj 2");			
		}
		trace(obj1 + " ||||| " + obj2 );
		position = lastPosition;
		*/
	}
}