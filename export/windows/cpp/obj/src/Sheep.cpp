#include <hxcpp.h>

#ifndef INCLUDED_GameOver
#include <GameOver.h>
#endif
#ifndef INCLUDED_MapGen
#include <MapGen.h>
#endif
#ifndef INCLUDED_Sheep
#include <Sheep.h>
#endif
#ifndef INCLUDED_State
#include <State.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void Sheep_obj::__construct(int x,int y)
{
HX_STACK_FRAME("Sheep","new",0x06634ced,"Sheep.new","Sheep.hx",16,0x43c26f23)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(51)
	this->lives = (int)3;
	HX_STACK_LINE(49)
	this->jumpStart = Array_obj< Float >::__new();
	HX_STACK_LINE(40)
	this->lastPosition = Array_obj< Float >::__new();
	HX_STACK_LINE(39)
	this->position = Array_obj< Float >::__new();
	HX_STACK_LINE(55)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(57)
	this->loadGraphic(HX_HCSTRING("assets/images/sheep_flying.png","\x19","\x6b","\x4d","\x43"),true,(int)32,(int)32,null(),null());
	HX_STACK_LINE(58)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	tmp2->add(HX_HCSTRING("flying","\x4f","\x52","\xf8","\x47"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6),(int)5,true);
	HX_STACK_LINE(59)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	tmp3->play(HX_HCSTRING("flying","\x4f","\x52","\xf8","\x47"),null(),null());
	HX_STACK_LINE(60)
	this->lastPosition[(int)0] = (int)0;
	HX_STACK_LINE(61)
	this->lastPosition[(int)1] = (int)0;
	HX_STACK_LINE(62)
	this->position[(int)0] = (int)0;
	HX_STACK_LINE(63)
	this->position[(int)1] = (int)0;
	HX_STACK_LINE(64)
	this->beschleunigung = ((Float)0.05);
	HX_STACK_LINE(65)
	this->activeGravity = ((Float)0.6);
	HX_STACK_LINE(66)
	this->maxGravity = (int)4;
	HX_STACK_LINE(67)
	this->isJumping = false;
	HX_STACK_LINE(68)
	this->activeSheepSate = ::State_obj::Standing;
	HX_STACK_LINE(69)
	this->lastSheepState = ::State_obj::Standing;
	HX_STACK_LINE(70)
	this->activeMoveDirection = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
	HX_STACK_LINE(71)
	this->lastMoveDirection = HX_HCSTRING("none","\xb8","\x12","\x0a","\x49");
	HX_STACK_LINE(72)
	this->maxJumpHeight = (int)50;
	HX_STACK_LINE(73)
	this->maxJumpSpeed = (int)4;
	HX_STACK_LINE(74)
	Float tmp4 = this->maxJumpSpeed;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	this->activeJumpSpeed = tmp4;
	HX_STACK_LINE(75)
	this->minJumpSpeed = ((Float)0.2);
	HX_STACK_LINE(76)
	this->maxSpeed = (int)2;
	HX_STACK_LINE(77)
	this->activeSpeed = (int)0;
	HX_STACK_LINE(78)
	this->jumpStart[(int)0] = (int)0;
	HX_STACK_LINE(79)
	this->jumpStart[(int)1] = (int)0;
	HX_STACK_LINE(80)
	this->isOnGround = false;
	HX_STACK_LINE(81)
	this->doubbleJump = true;
}
;
	return null();
}

//Sheep_obj::~Sheep_obj() { }

Dynamic Sheep_obj::__CreateEmpty() { return  new Sheep_obj; }
hx::ObjectPtr< Sheep_obj > Sheep_obj::__new(int x,int y)
{  hx::ObjectPtr< Sheep_obj > _result_ = new Sheep_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Sheep_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sheep_obj > _result_ = new Sheep_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Sheep_obj::update( ){
{
		HX_STACK_FRAME("Sheep","update",0xc7fe9f9c,"Sheep.update","Sheep.hx",86,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->super::update();
		HX_STACK_LINE(88)
		this->updateMovement();
		HX_STACK_LINE(89)
		this->checkGravity();
		HX_STACK_LINE(90)
		this->checkSpeed();
	}
return null();
}


Void Sheep_obj::destroy( ){
{
		HX_STACK_FRAME("Sheep","destroy",0xbd837407,"Sheep.destroy","Sheep.hx",95,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		this->super::destroy();
	}
return null();
}


Void Sheep_obj::updateMovement( ){
{
		HX_STACK_FRAME("Sheep","updateMovement",0x4b3adceb,"Sheep.updateMovement","Sheep.hx",99,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		::flixel::input::keyboard::FlxKeyboard tmp1 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		int tmp2 = tmp1->pressed->checkStatus;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		bool tmp3 = tmp->checkStatus((int)65,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		if ((tmp3)){
			HX_STACK_LINE(102)
			this->moveLeft();
			HX_STACK_LINE(103)
			this->set_flipX(true);
		}
		HX_STACK_LINE(105)
		::flixel::input::keyboard::FlxKeyboard tmp4 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(105)
		::flixel::input::keyboard::FlxKeyboard tmp5 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(105)
		int tmp6 = tmp5->pressed->checkStatus;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(105)
		bool tmp7 = tmp4->checkStatus((int)68,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(105)
		if ((tmp7)){
			HX_STACK_LINE(107)
			this->moveRight();
			HX_STACK_LINE(108)
			this->set_flipX(false);
		}
		HX_STACK_LINE(110)
		::flixel::input::keyboard::FlxKeyboard tmp8 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(110)
		::flixel::input::keyboard::FlxKeyboard tmp9 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(110)
		int tmp10 = tmp9->justPressed->checkStatus;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(110)
		bool tmp11 = tmp8->checkStatus((int)32,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(110)
		if ((tmp11)){
			HX_STACK_LINE(112)
			this->jump();
		}
		HX_STACK_LINE(114)
		this->checkSpeed();
		HX_STACK_LINE(115)
		this->checkJump();
		HX_STACK_LINE(116)
		this->checkCollsision();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sheep_obj,updateMovement,(void))

Void Sheep_obj::moveLeft( ){
{
		HX_STACK_FRAME("Sheep","moveLeft",0x2f08580b,"Sheep.moveLeft","Sheep.hx",122,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(123)
		::State tmp = this->activeSheepSate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		this->lastSheepState = tmp;
		HX_STACK_LINE(124)
		this->activeSheepSate = ::State_obj::Running;
		HX_STACK_LINE(125)
		::String tmp1 = this->activeMoveDirection;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		this->lastMoveDirection = tmp1;
		HX_STACK_LINE(126)
		this->activeMoveDirection = HX_HCSTRING("left","\x07","\x08","\xb0","\x47");
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::Sheep _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(127)
			Float tmp2 = _g->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(127)
			Float tmp3 = this->activeSpeed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(127)
			_g->set_x(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sheep_obj,moveLeft,(void))

Void Sheep_obj::moveRight( ){
{
		HX_STACK_FRAME("Sheep","moveRight",0x6f51bf58,"Sheep.moveRight","Sheep.hx",131,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(132)
		::State tmp = this->activeSheepSate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		this->lastSheepState = tmp;
		HX_STACK_LINE(133)
		this->activeSheepSate = ::State_obj::Running;
		HX_STACK_LINE(134)
		::String tmp1 = this->activeMoveDirection;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		this->lastMoveDirection = tmp1;
		HX_STACK_LINE(135)
		this->activeMoveDirection = HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9");
		HX_STACK_LINE(136)
		{
			HX_STACK_LINE(136)
			::Sheep _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(136)
			Float tmp2 = _g->x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(136)
			Float tmp3 = this->activeSpeed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(136)
			_g->set_x(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sheep_obj,moveRight,(void))

Void Sheep_obj::jump( ){
{
		HX_STACK_FRAME("Sheep","jump",0x8de743c1,"Sheep.jump","Sheep.hx",140,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		bool tmp = this->isJumping;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(142)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		if ((tmp2)){
			HX_STACK_LINE(142)
			tmp3 = this->isOnGround;
		}
		else{
			HX_STACK_LINE(142)
			tmp3 = false;
		}
		HX_STACK_LINE(142)
		if ((tmp3)){
			HX_STACK_LINE(144)
			Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			this->jumpStart[(int)0] = tmp4;
			HX_STACK_LINE(145)
			Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			this->jumpStart[(int)1] = tmp5;
			HX_STACK_LINE(146)
			this->isJumping = true;
			HX_STACK_LINE(147)
			this->isOnGround = false;
		}
		else{
			HX_STACK_LINE(149)
			bool tmp4 = this->doubbleJump;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			if ((tmp5)){
				HX_STACK_LINE(149)
				bool tmp7 = this->isJumping;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(149)
				bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(149)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(149)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(149)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(149)
				tmp6 = !(tmp11);
			}
			else{
				HX_STACK_LINE(149)
				tmp6 = false;
			}
			HX_STACK_LINE(149)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			if ((tmp6)){
				HX_STACK_LINE(149)
				bool tmp8 = this->isOnGround;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(149)
				bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(149)
				bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(149)
				tmp7 = !(tmp10);
			}
			else{
				HX_STACK_LINE(149)
				tmp7 = false;
			}
			HX_STACK_LINE(149)
			if ((tmp7)){
				HX_STACK_LINE(150)
				this->doubbleJump = false;
				HX_STACK_LINE(151)
				Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(151)
				this->jumpStart[(int)0] = tmp8;
				HX_STACK_LINE(152)
				Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(152)
				this->jumpStart[(int)1] = tmp9;
				HX_STACK_LINE(153)
				this->isJumping = true;
				HX_STACK_LINE(154)
				this->isOnGround = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sheep_obj,jump,(void))

Void Sheep_obj::checkSpeed( ){
{
		HX_STACK_FRAME("Sheep","checkSpeed",0xeb3a78b2,"Sheep.checkSpeed","Sheep.hx",159,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		Float tmp = this->activeSpeed;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		Float tmp1 = this->maxSpeed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		if ((tmp2)){
			HX_STACK_LINE(162)
			Float tmp3 = this->maxSpeed;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(162)
			this->activeSpeed = tmp3;
		}
		HX_STACK_LINE(164)
		::String tmp3 = this->activeMoveDirection;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		::String tmp4 = this->lastMoveDirection;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		bool tmp5 = (tmp3 != tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(164)
		if ((tmp5)){
			HX_STACK_LINE(165)
			this->activeSpeed = (int)0;
		}
		else{
			HX_STACK_LINE(168)
			Float tmp6 = this->beschleunigung;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			Float tmp7 = this->activeSpeed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			Float tmp8 = (tmp7 * ((Float)1.05));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(168)
			Float tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(168)
			this->activeSpeed = tmp9;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sheep_obj,checkSpeed,(void))

Void Sheep_obj::checkJump( ){
{
		HX_STACK_FRAME("Sheep","checkJump",0x62707223,"Sheep.checkJump","Sheep.hx",173,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(175)
		bool tmp = this->isJumping;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		if ((tmp)){
			HX_STACK_LINE(176)
			Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			Float tmp2 = this->jumpStart->__get((int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			Float tmp3 = this->maxJumpHeight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			bool tmp5 = (tmp1 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			if ((tmp5)){
				HX_STACK_LINE(176)
				Float tmp7 = this->y;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(176)
				Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				tmp6 = (tmp8 >= (int)0);
			}
			else{
				HX_STACK_LINE(176)
				tmp6 = false;
			}
			HX_STACK_LINE(176)
			if ((tmp6)){
				HX_STACK_LINE(177)
				Float tmp7 = this->activeJumpSpeed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(177)
				Float tmp8 = (tmp7 * ((Float)0.005));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(177)
				hx::SubEq(this->activeJumpSpeed,tmp8);
				HX_STACK_LINE(178)
				Float tmp9 = this->activeJumpSpeed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(178)
				Float tmp10 = this->maxJumpSpeed;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(178)
				bool tmp11 = (tmp9 > tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(178)
				if ((tmp11)){
					HX_STACK_LINE(179)
					Float tmp12 = this->maxJumpSpeed;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(179)
					this->activeJumpSpeed = tmp12;
				}
				else{
					HX_STACK_LINE(181)
					Float tmp12 = this->activeJumpSpeed;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(181)
					Float tmp13 = this->minJumpSpeed;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(181)
					bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(181)
					if ((tmp14)){
						HX_STACK_LINE(182)
						Float tmp15 = this->minJumpSpeed;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(182)
						this->activeJumpSpeed = tmp15;
					}
				}
				HX_STACK_LINE(184)
				{
					HX_STACK_LINE(184)
					::Sheep _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(184)
					Float tmp12 = _g->y;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(184)
					Float tmp13 = this->activeJumpSpeed;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(184)
					Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(184)
					_g->set_y(tmp14);
				}
			}
			else{
				HX_STACK_LINE(187)
				this->isJumping = false;
				HX_STACK_LINE(188)
				Float tmp7 = this->maxJumpSpeed;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(188)
				this->activeJumpSpeed = tmp7;
				HX_STACK_LINE(189)
				this->activeGravity = ((Float)0.6);
			}
		}
		else{
			HX_STACK_LINE(193)
			::Sheep _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			Float tmp1 = _g->y;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(193)
			Float tmp2 = this->activeGravity;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(193)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			_g->set_y(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sheep_obj,checkJump,(void))

Void Sheep_obj::setLanded( ::flixel::FlxSprite obj1,::flixel::FlxSprite obj2){
{
		HX_STACK_FRAME("Sheep","setLanded",0x79394899,"Sheep.setLanded","Sheep.hx",198,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj1,"obj1")
		HX_STACK_ARG(obj2,"obj2")
		HX_STACK_LINE(199)
		this->isJumping = false;
		HX_STACK_LINE(200)
		this->activeGravity = ((Float)0.6);
		HX_STACK_LINE(201)
		this->isOnGround = true;
		HX_STACK_LINE(202)
		this->doubbleJump = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sheep_obj,setLanded,(void))

Void Sheep_obj::checkGravity( ){
{
		HX_STACK_FRAME("Sheep","checkGravity",0xa0ab3039,"Sheep.checkGravity","Sheep.hx",206,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(207)
		Float tmp = this->activeGravity;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(207)
		Float tmp1 = (tmp * ((Float)1.05));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(207)
		this->activeGravity = tmp1;
		HX_STACK_LINE(208)
		Float tmp2 = this->activeGravity;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(208)
		Float tmp3 = this->maxGravity;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(208)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(208)
		if ((tmp4)){
			HX_STACK_LINE(209)
			Float tmp5 = this->maxGravity;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			this->activeGravity = tmp5;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sheep_obj,checkGravity,(void))

Void Sheep_obj::checkCollsision( ){
{
		HX_STACK_FRAME("Sheep","checkCollsision",0xbdf822ec,"Sheep.checkCollsision","Sheep.hx",223,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(223)
		this->lastPosition = this->position;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sheep_obj,checkCollsision,(void))

Void Sheep_obj::collision( ::flixel::FlxSprite obj1,::flixel::FlxSprite obj2){
{
		HX_STACK_FRAME("Sheep","collision",0xa3618cbf,"Sheep.collision","Sheep.hx",228,0x43c26f23)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj1,"obj1")
		HX_STACK_ARG(obj2,"obj2")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sheep_obj,collision,(void))

bool Sheep_obj::damage( ){
	HX_STACK_FRAME("Sheep","damage",0x5eddaa02,"Sheep.damage","Sheep.hx",255,0x43c26f23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(256)
	(this->lives)--;
	HX_STACK_LINE(257)
	::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(257)
	tmp->shake(((Float)0.05),((Float)0.2),null(),null(),null());
	HX_STACK_LINE(258)
	int tmp1 = this->lives;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(258)
	if ((tmp2)){
		HX_STACK_LINE(259)
		this->destroy();
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			::GameOver tmp3 = ::GameOver_obj::__new(null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(260)
			::flixel::FlxState State = tmp3;		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(260)
			::flixel::FlxGame tmp4 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(260)
			tmp4->_requestedState = State;
		}
	}
	HX_STACK_LINE(262)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(Sheep_obj,damage,return )


Sheep_obj::Sheep_obj()
{
}

void Sheep_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sheep);
	HX_MARK_MEMBER_NAME(maxSpeed,"maxSpeed");
	HX_MARK_MEMBER_NAME(activeSpeed,"activeSpeed");
	HX_MARK_MEMBER_NAME(beschleunigung,"beschleunigung");
	HX_MARK_MEMBER_NAME(activeMoveDirection,"activeMoveDirection");
	HX_MARK_MEMBER_NAME(lastMoveDirection,"lastMoveDirection");
	HX_MARK_MEMBER_NAME(maxJumpHeight,"maxJumpHeight");
	HX_MARK_MEMBER_NAME(activeJumpSpeed,"activeJumpSpeed");
	HX_MARK_MEMBER_NAME(minJumpSpeed,"minJumpSpeed");
	HX_MARK_MEMBER_NAME(maxJumpSpeed,"maxJumpSpeed");
	HX_MARK_MEMBER_NAME(activeGravity,"activeGravity");
	HX_MARK_MEMBER_NAME(maxGravity,"maxGravity");
	HX_MARK_MEMBER_NAME(doubbleJump,"doubbleJump");
	HX_MARK_MEMBER_NAME(isOnGround,"isOnGround");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(lastPosition,"lastPosition");
	HX_MARK_MEMBER_NAME(activeSheepSate,"activeSheepSate");
	HX_MARK_MEMBER_NAME(lastSheepState,"lastSheepState");
	HX_MARK_MEMBER_NAME(isJumping,"isJumping");
	HX_MARK_MEMBER_NAME(jumpStart,"jumpStart");
	HX_MARK_MEMBER_NAME(lives,"lives");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sheep_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maxSpeed,"maxSpeed");
	HX_VISIT_MEMBER_NAME(activeSpeed,"activeSpeed");
	HX_VISIT_MEMBER_NAME(beschleunigung,"beschleunigung");
	HX_VISIT_MEMBER_NAME(activeMoveDirection,"activeMoveDirection");
	HX_VISIT_MEMBER_NAME(lastMoveDirection,"lastMoveDirection");
	HX_VISIT_MEMBER_NAME(maxJumpHeight,"maxJumpHeight");
	HX_VISIT_MEMBER_NAME(activeJumpSpeed,"activeJumpSpeed");
	HX_VISIT_MEMBER_NAME(minJumpSpeed,"minJumpSpeed");
	HX_VISIT_MEMBER_NAME(maxJumpSpeed,"maxJumpSpeed");
	HX_VISIT_MEMBER_NAME(activeGravity,"activeGravity");
	HX_VISIT_MEMBER_NAME(maxGravity,"maxGravity");
	HX_VISIT_MEMBER_NAME(doubbleJump,"doubbleJump");
	HX_VISIT_MEMBER_NAME(isOnGround,"isOnGround");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(lastPosition,"lastPosition");
	HX_VISIT_MEMBER_NAME(activeSheepSate,"activeSheepSate");
	HX_VISIT_MEMBER_NAME(lastSheepState,"lastSheepState");
	HX_VISIT_MEMBER_NAME(isJumping,"isJumping");
	HX_VISIT_MEMBER_NAME(jumpStart,"jumpStart");
	HX_VISIT_MEMBER_NAME(lives,"lives");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sheep_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"jump") ) { return jump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lives") ) { return lives; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"damage") ) { return damage_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxSpeed") ) { return maxSpeed; }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"moveLeft") ) { return moveLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isJumping") ) { return isJumping; }
		if (HX_FIELD_EQ(inName,"jumpStart") ) { return jumpStart; }
		if (HX_FIELD_EQ(inName,"moveRight") ) { return moveRight_dyn(); }
		if (HX_FIELD_EQ(inName,"checkJump") ) { return checkJump_dyn(); }
		if (HX_FIELD_EQ(inName,"setLanded") ) { return setLanded_dyn(); }
		if (HX_FIELD_EQ(inName,"collision") ) { return collision_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxGravity") ) { return maxGravity; }
		if (HX_FIELD_EQ(inName,"isOnGround") ) { return isOnGround; }
		if (HX_FIELD_EQ(inName,"checkSpeed") ) { return checkSpeed_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeSpeed") ) { return activeSpeed; }
		if (HX_FIELD_EQ(inName,"doubbleJump") ) { return doubbleJump; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minJumpSpeed") ) { return minJumpSpeed; }
		if (HX_FIELD_EQ(inName,"maxJumpSpeed") ) { return maxJumpSpeed; }
		if (HX_FIELD_EQ(inName,"lastPosition") ) { return lastPosition; }
		if (HX_FIELD_EQ(inName,"checkGravity") ) { return checkGravity_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"maxJumpHeight") ) { return maxJumpHeight; }
		if (HX_FIELD_EQ(inName,"activeGravity") ) { return activeGravity; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"beschleunigung") ) { return beschleunigung; }
		if (HX_FIELD_EQ(inName,"lastSheepState") ) { return lastSheepState; }
		if (HX_FIELD_EQ(inName,"updateMovement") ) { return updateMovement_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activeJumpSpeed") ) { return activeJumpSpeed; }
		if (HX_FIELD_EQ(inName,"activeSheepSate") ) { return activeSheepSate; }
		if (HX_FIELD_EQ(inName,"checkCollsision") ) { return checkCollsision_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastMoveDirection") ) { return lastMoveDirection; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"activeMoveDirection") ) { return activeMoveDirection; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sheep_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::MapGen >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lives") ) { lives=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxSpeed") ) { maxSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isJumping") ) { isJumping=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpStart") ) { jumpStart=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxGravity") ) { maxGravity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isOnGround") ) { isOnGround=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"activeSpeed") ) { activeSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doubbleJump") ) { doubbleJump=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"minJumpSpeed") ) { minJumpSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxJumpSpeed") ) { maxJumpSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastPosition") ) { lastPosition=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"maxJumpHeight") ) { maxJumpHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeGravity") ) { activeGravity=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"beschleunigung") ) { beschleunigung=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSheepState") ) { lastSheepState=inValue.Cast< ::State >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"activeJumpSpeed") ) { activeJumpSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeSheepSate") ) { activeSheepSate=inValue.Cast< ::State >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lastMoveDirection") ) { lastMoveDirection=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"activeMoveDirection") ) { activeMoveDirection=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sheep_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("maxSpeed","\x43","\xea","\x86","\x2b"));
	outFields->push(HX_HCSTRING("activeSpeed","\xe1","\x97","\xae","\xdd"));
	outFields->push(HX_HCSTRING("beschleunigung","\xe9","\x2d","\x5f","\xcd"));
	outFields->push(HX_HCSTRING("activeMoveDirection","\x48","\xdf","\x13","\xfd"));
	outFields->push(HX_HCSTRING("lastMoveDirection","\xb8","\xfc","\x8e","\x4e"));
	outFields->push(HX_HCSTRING("maxJumpHeight","\x39","\xeb","\x5a","\xc5"));
	outFields->push(HX_HCSTRING("activeJumpSpeed","\x13","\xd9","\x0b","\x42"));
	outFields->push(HX_HCSTRING("minJumpSpeed","\xc7","\xaf","\xc4","\x28"));
	outFields->push(HX_HCSTRING("maxJumpSpeed","\x75","\x04","\xba","\xa4"));
	outFields->push(HX_HCSTRING("activeGravity","\x28","\xb9","\xc8","\x2f"));
	outFields->push(HX_HCSTRING("maxGravity","\x0a","\xe8","\x23","\xe2"));
	outFields->push(HX_HCSTRING("doubbleJump","\x51","\x82","\x4e","\x77"));
	outFields->push(HX_HCSTRING("isOnGround","\x10","\x2b","\x84","\x76"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("lastPosition","\x1f","\xad","\x8c","\x2c"));
	outFields->push(HX_HCSTRING("activeSheepSate","\x14","\xb7","\xd0","\xb1"));
	outFields->push(HX_HCSTRING("lastSheepState","\x6c","\x47","\x1d","\x5f"));
	outFields->push(HX_HCSTRING("isJumping","\xea","\x0d","\xa8","\x10"));
	outFields->push(HX_HCSTRING("jumpStart","\x94","\x80","\xd8","\x0f"));
	outFields->push(HX_HCSTRING("lives","\x07","\xf0","\x07","\x75"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Sheep_obj,maxSpeed),HX_HCSTRING("maxSpeed","\x43","\xea","\x86","\x2b")},
	{hx::fsFloat,(int)offsetof(Sheep_obj,activeSpeed),HX_HCSTRING("activeSpeed","\xe1","\x97","\xae","\xdd")},
	{hx::fsFloat,(int)offsetof(Sheep_obj,beschleunigung),HX_HCSTRING("beschleunigung","\xe9","\x2d","\x5f","\xcd")},
	{hx::fsString,(int)offsetof(Sheep_obj,activeMoveDirection),HX_HCSTRING("activeMoveDirection","\x48","\xdf","\x13","\xfd")},
	{hx::fsString,(int)offsetof(Sheep_obj,lastMoveDirection),HX_HCSTRING("lastMoveDirection","\xb8","\xfc","\x8e","\x4e")},
	{hx::fsFloat,(int)offsetof(Sheep_obj,maxJumpHeight),HX_HCSTRING("maxJumpHeight","\x39","\xeb","\x5a","\xc5")},
	{hx::fsFloat,(int)offsetof(Sheep_obj,activeJumpSpeed),HX_HCSTRING("activeJumpSpeed","\x13","\xd9","\x0b","\x42")},
	{hx::fsFloat,(int)offsetof(Sheep_obj,minJumpSpeed),HX_HCSTRING("minJumpSpeed","\xc7","\xaf","\xc4","\x28")},
	{hx::fsFloat,(int)offsetof(Sheep_obj,maxJumpSpeed),HX_HCSTRING("maxJumpSpeed","\x75","\x04","\xba","\xa4")},
	{hx::fsFloat,(int)offsetof(Sheep_obj,activeGravity),HX_HCSTRING("activeGravity","\x28","\xb9","\xc8","\x2f")},
	{hx::fsFloat,(int)offsetof(Sheep_obj,maxGravity),HX_HCSTRING("maxGravity","\x0a","\xe8","\x23","\xe2")},
	{hx::fsBool,(int)offsetof(Sheep_obj,doubbleJump),HX_HCSTRING("doubbleJump","\x51","\x82","\x4e","\x77")},
	{hx::fsBool,(int)offsetof(Sheep_obj,isOnGround),HX_HCSTRING("isOnGround","\x10","\x2b","\x84","\x76")},
	{hx::fsObject /*::MapGen*/ ,(int)offsetof(Sheep_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Sheep_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Sheep_obj,lastPosition),HX_HCSTRING("lastPosition","\x1f","\xad","\x8c","\x2c")},
	{hx::fsObject /*::State*/ ,(int)offsetof(Sheep_obj,activeSheepSate),HX_HCSTRING("activeSheepSate","\x14","\xb7","\xd0","\xb1")},
	{hx::fsObject /*::State*/ ,(int)offsetof(Sheep_obj,lastSheepState),HX_HCSTRING("lastSheepState","\x6c","\x47","\x1d","\x5f")},
	{hx::fsBool,(int)offsetof(Sheep_obj,isJumping),HX_HCSTRING("isJumping","\xea","\x0d","\xa8","\x10")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Sheep_obj,jumpStart),HX_HCSTRING("jumpStart","\x94","\x80","\xd8","\x0f")},
	{hx::fsInt,(int)offsetof(Sheep_obj,lives),HX_HCSTRING("lives","\x07","\xf0","\x07","\x75")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("maxSpeed","\x43","\xea","\x86","\x2b"),
	HX_HCSTRING("activeSpeed","\xe1","\x97","\xae","\xdd"),
	HX_HCSTRING("beschleunigung","\xe9","\x2d","\x5f","\xcd"),
	HX_HCSTRING("activeMoveDirection","\x48","\xdf","\x13","\xfd"),
	HX_HCSTRING("lastMoveDirection","\xb8","\xfc","\x8e","\x4e"),
	HX_HCSTRING("maxJumpHeight","\x39","\xeb","\x5a","\xc5"),
	HX_HCSTRING("activeJumpSpeed","\x13","\xd9","\x0b","\x42"),
	HX_HCSTRING("minJumpSpeed","\xc7","\xaf","\xc4","\x28"),
	HX_HCSTRING("maxJumpSpeed","\x75","\x04","\xba","\xa4"),
	HX_HCSTRING("activeGravity","\x28","\xb9","\xc8","\x2f"),
	HX_HCSTRING("maxGravity","\x0a","\xe8","\x23","\xe2"),
	HX_HCSTRING("doubbleJump","\x51","\x82","\x4e","\x77"),
	HX_HCSTRING("isOnGround","\x10","\x2b","\x84","\x76"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("lastPosition","\x1f","\xad","\x8c","\x2c"),
	HX_HCSTRING("activeSheepSate","\x14","\xb7","\xd0","\xb1"),
	HX_HCSTRING("lastSheepState","\x6c","\x47","\x1d","\x5f"),
	HX_HCSTRING("isJumping","\xea","\x0d","\xa8","\x10"),
	HX_HCSTRING("jumpStart","\x94","\x80","\xd8","\x0f"),
	HX_HCSTRING("lives","\x07","\xf0","\x07","\x75"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("updateMovement","\x58","\x78","\x61","\x35"),
	HX_HCSTRING("moveLeft","\xb8","\x73","\x67","\xea"),
	HX_HCSTRING("moveRight","\x0b","\xdb","\x2a","\xa7"),
	HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"),
	HX_HCSTRING("checkSpeed","\x9f","\x99","\x59","\x91"),
	HX_HCSTRING("checkJump","\xd6","\x8d","\x49","\x9a"),
	HX_HCSTRING("setLanded","\x4c","\x64","\x12","\xb1"),
	HX_HCSTRING("checkGravity","\x66","\x26","\x86","\x65"),
	HX_HCSTRING("checkCollsision","\xdf","\x86","\x99","\xb5"),
	HX_HCSTRING("collision","\x72","\xa8","\x3a","\xdb"),
	HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sheep_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sheep_obj::__mClass,"__mClass");
};

#endif

hx::Class Sheep_obj::__mClass;

void Sheep_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sheep","\x7b","\x52","\x4d","\x0f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sheep_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

