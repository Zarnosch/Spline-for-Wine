#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_BulletType
#include <BulletType.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_EnemyType
#include <EnemyType.h>
#endif
#ifndef INCLUDED_Sheep
#include <Sheep.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif

Void Enemy_obj::__construct(Float x,Float y,::EnemyType enemyType,Dynamic bounds,Dynamic left,Dynamic right)
{
HX_STACK_FRAME("Enemy","new",0x35d4571a,"Enemy.new","Enemy.hx",15,0xbda88996)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(enemyType,"enemyType")
HX_STACK_ARG(bounds,"bounds")
HX_STACK_ARG(left,"left")
HX_STACK_ARG(right,"right")
{
	HX_STACK_LINE(32)
	this->enemyShots = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(30)
	this->lives = (int)1;
	HX_STACK_LINE(28)
	this->flipped = true;
	HX_STACK_LINE(27)
	this->moveInBounds = false;
	HX_STACK_LINE(26)
	this->rightBound = ((Float)100);
	HX_STACK_LINE(25)
	this->leftBound = ((Float)0);
	HX_STACK_LINE(22)
	this->attack = ((Float)0);
	HX_STACK_LINE(36)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(36)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(37)
	this->loadGraphic(HX_HCSTRING("assets/images/nazi_sheep_map.png","\xc1","\x58","\x47","\x97"),true,(int)32,(int)32,null(),null());
	HX_STACK_LINE(39)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	tmp2->add(HX_HCSTRING("nazi_tank","\xe7","\xad","\x93","\x1c"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7),(int)5,true);
	HX_STACK_LINE(40)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	tmp3->add(HX_HCSTRING("nazi_air","\x2d","\x32","\x01","\xd1"),Array_obj< int >::__new().Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)12).Add((int)13).Add((int)14).Add((int)15),(int)10,true);
	HX_STACK_LINE(42)
	this->sheepType = enemyType;
	HX_STACK_LINE(44)
	this->leftBound = left;
	HX_STACK_LINE(45)
	this->rightBound = right;
	HX_STACK_LINE(46)
	this->moveInBounds = bounds;
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		::EnemyType tmp4 = this->sheepType;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		::EnemyType _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(50)
				::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(50)
				tmp5->play(HX_HCSTRING("nazi_tank","\xe7","\xad","\x93","\x1c"),null(),null());
				HX_STACK_LINE(51)
				this->moveSpeed = ((Float)0.5);
				HX_STACK_LINE(52)
				this->attackTimer = (int)40;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(54)
				::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(54)
				tmp5->play(HX_HCSTRING("nazi_air","\x2d","\x32","\x01","\xd1"),null(),null());
				HX_STACK_LINE(55)
				this->moveSpeed = ((Float)0.8);
				HX_STACK_LINE(56)
				this->attackTimer = (int)80;
				HX_STACK_LINE(57)
				this->lives = (int)2;
			}
			;break;
		}
	}
}
;
	return null();
}

//Enemy_obj::~Enemy_obj() { }

Dynamic Enemy_obj::__CreateEmpty() { return  new Enemy_obj; }
hx::ObjectPtr< Enemy_obj > Enemy_obj::__new(Float x,Float y,::EnemyType enemyType,Dynamic bounds,Dynamic left,Dynamic right)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(x,y,enemyType,bounds,left,right);
	return _result_;}

Dynamic Enemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enemy_obj > _result_ = new Enemy_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void Enemy_obj::update( ){
{
		HX_STACK_FRAME("Enemy","update",0xcf0e6f8f,"Enemy.update","Enemy.hx",62,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		this->super::update();
		HX_STACK_LINE(64)
		bool tmp = this->moveInBounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		if ((tmp)){
			HX_STACK_LINE(65)
			Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(65)
			Float tmp2 = this->leftBound;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			bool tmp3 = (tmp1 <= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			if ((tmp3)){
				HX_STACK_LINE(66)
				this->flipped = false;
			}
			else{
				HX_STACK_LINE(67)
				Float tmp4 = this->x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(67)
				Float tmp5 = this->rightBound;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(67)
				bool tmp6 = (tmp4 >= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(67)
				if ((tmp6)){
					HX_STACK_LINE(68)
					this->flipped = true;
				}
			}
			HX_STACK_LINE(70)
			bool tmp4 = this->flipped;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(70)
			if ((tmp4)){
				HX_STACK_LINE(71)
				::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(71)
				Float tmp5 = _g->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(71)
				Float tmp6 = this->moveSpeed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(71)
				Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(71)
				_g->set_x(tmp7);
			}
			else{
				HX_STACK_LINE(73)
				::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(73)
				Float tmp5 = _g->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(73)
				Float tmp6 = this->moveSpeed;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(73)
				Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(73)
				_g->set_x(tmp7);
			}
		}
		else{
			HX_STACK_LINE(77)
			::Enemy _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			Float tmp1 = _g->x;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(77)
			Float tmp2 = this->moveSpeed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			_g->set_x(tmp3);
		}
		HX_STACK_LINE(79)
		bool tmp1 = this->flipped;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		this->set_flipX(tmp1);
		HX_STACK_LINE(81)
		(this->attack)++;
		HX_STACK_LINE(83)
		Float tmp2 = this->attack;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		Float tmp3 = this->attackTimer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		if ((tmp4)){
			HX_STACK_LINE(83)
			Float tmp6 = this->x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(83)
			::Sheep tmp8 = this->sheep;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(83)
			::Sheep tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(83)
			Float tmp10 = tmp9->x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			Float tmp11 = (tmp7 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			Float tmp14 = ::Math_obj::abs(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(83)
			Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(83)
			tmp5 = (tmp15 < (int)150);
		}
		else{
			HX_STACK_LINE(83)
			tmp5 = false;
		}
		HX_STACK_LINE(83)
		if ((tmp5)){
			HX_STACK_LINE(84)
			this->dropBomb();
			HX_STACK_LINE(85)
			this->attack = (int)0;
		}
	}
return null();
}


Void Enemy_obj::dropBomb( ){
{
		HX_STACK_FRAME("Enemy","dropBomb",0xf1f10137,"Enemy.dropBomb","Enemy.hx",91,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		::EnemyType tmp = this->sheepType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		::EnemyType _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(93)
				::flixel::group::FlxTypedGroup tmp1 = this->enemyShots;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(93)
				Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(93)
				Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(93)
				Float tmp4 = (tmp3 + (int)5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(93)
				bool tmp5 = this->flipped;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(93)
				::Bullet tmp6 = ::Bullet_obj::__new(tmp2,tmp4,::BulletType_obj::GATLING,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(93)
				tmp1->add(tmp6);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(95)
				::flixel::group::FlxTypedGroup tmp1 = this->enemyShots;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(95)
				Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(95)
				Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(95)
				Float tmp4 = (tmp3 + (int)5);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(95)
				::Bullet tmp5 = ::Bullet_obj::__new(tmp2,tmp4,::BulletType_obj::ROCKET,false,true);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(95)
				tmp1->add(tmp5);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,dropBomb,(void))

Void Enemy_obj::destroy( ){
{
		HX_STACK_FRAME("Enemy","destroy",0xe44998b4,"Enemy.destroy","Enemy.hx",101,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		this->super::destroy();
	}
return null();
}


Void Enemy_obj::damage( ){
{
		HX_STACK_FRAME("Enemy","damage",0x65ed79f5,"Enemy.damage","Enemy.hx",105,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		(this->lives)--;
		HX_STACK_LINE(107)
		int tmp = this->lives;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		if ((tmp1)){
			HX_STACK_LINE(108)
			this->destroy();
			HX_STACK_LINE(109)
			::flixel::FlxCamera tmp2 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(109)
			tmp2->shake(((Float)0.01),((Float)0.1),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,damage,(void))


Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(sheep,"sheep");
	HX_MARK_MEMBER_NAME(sheepType,"sheepType");
	HX_MARK_MEMBER_NAME(moveSpeed,"moveSpeed");
	HX_MARK_MEMBER_NAME(attack,"attack");
	HX_MARK_MEMBER_NAME(attackTimer,"attackTimer");
	HX_MARK_MEMBER_NAME(leftBound,"leftBound");
	HX_MARK_MEMBER_NAME(rightBound,"rightBound");
	HX_MARK_MEMBER_NAME(moveInBounds,"moveInBounds");
	HX_MARK_MEMBER_NAME(flipped,"flipped");
	HX_MARK_MEMBER_NAME(lives,"lives");
	HX_MARK_MEMBER_NAME(enemyShots,"enemyShots");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sheep,"sheep");
	HX_VISIT_MEMBER_NAME(sheepType,"sheepType");
	HX_VISIT_MEMBER_NAME(moveSpeed,"moveSpeed");
	HX_VISIT_MEMBER_NAME(attack,"attack");
	HX_VISIT_MEMBER_NAME(attackTimer,"attackTimer");
	HX_VISIT_MEMBER_NAME(leftBound,"leftBound");
	HX_VISIT_MEMBER_NAME(rightBound,"rightBound");
	HX_VISIT_MEMBER_NAME(moveInBounds,"moveInBounds");
	HX_VISIT_MEMBER_NAME(flipped,"flipped");
	HX_VISIT_MEMBER_NAME(lives,"lives");
	HX_VISIT_MEMBER_NAME(enemyShots,"enemyShots");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Enemy_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sheep") ) { return sheep; }
		if (HX_FIELD_EQ(inName,"lives") ) { return lives; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attack") ) { return attack; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"damage") ) { return damage_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { return flipped; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dropBomb") ) { return dropBomb_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sheepType") ) { return sheepType; }
		if (HX_FIELD_EQ(inName,"moveSpeed") ) { return moveSpeed; }
		if (HX_FIELD_EQ(inName,"leftBound") ) { return leftBound; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightBound") ) { return rightBound; }
		if (HX_FIELD_EQ(inName,"enemyShots") ) { return enemyShots; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"attackTimer") ) { return attackTimer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moveInBounds") ) { return moveInBounds; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Enemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sheep") ) { sheep=inValue.Cast< ::Sheep >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lives") ) { lives=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attack") ) { attack=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sheepType") ) { sheepType=inValue.Cast< ::EnemyType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moveSpeed") ) { moveSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftBound") ) { leftBound=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightBound") ) { rightBound=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemyShots") ) { enemyShots=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"attackTimer") ) { attackTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"moveInBounds") ) { moveInBounds=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sheep","\x9b","\xe2","\x1f","\x7c"));
	outFields->push(HX_HCSTRING("sheepType","\xf5","\xea","\xb6","\x7d"));
	outFields->push(HX_HCSTRING("moveSpeed","\xb6","\x66","\x30","\x3f"));
	outFields->push(HX_HCSTRING("attack","\xc8","\xfb","\x0f","\xe0"));
	outFields->push(HX_HCSTRING("attackTimer","\xdd","\x7e","\xe5","\xb7"));
	outFields->push(HX_HCSTRING("leftBound","\xb7","\x9e","\xdc","\xcb"));
	outFields->push(HX_HCSTRING("rightBound","\xc2","\x96","\xc1","\xb9"));
	outFields->push(HX_HCSTRING("moveInBounds","\x6b","\x68","\xd1","\x82"));
	outFields->push(HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f"));
	outFields->push(HX_HCSTRING("lives","\x07","\xf0","\x07","\x75"));
	outFields->push(HX_HCSTRING("enemyShots","\xd1","\x9e","\x2a","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Sheep*/ ,(int)offsetof(Enemy_obj,sheep),HX_HCSTRING("sheep","\x9b","\xe2","\x1f","\x7c")},
	{hx::fsObject /*::EnemyType*/ ,(int)offsetof(Enemy_obj,sheepType),HX_HCSTRING("sheepType","\xf5","\xea","\xb6","\x7d")},
	{hx::fsFloat,(int)offsetof(Enemy_obj,moveSpeed),HX_HCSTRING("moveSpeed","\xb6","\x66","\x30","\x3f")},
	{hx::fsFloat,(int)offsetof(Enemy_obj,attack),HX_HCSTRING("attack","\xc8","\xfb","\x0f","\xe0")},
	{hx::fsFloat,(int)offsetof(Enemy_obj,attackTimer),HX_HCSTRING("attackTimer","\xdd","\x7e","\xe5","\xb7")},
	{hx::fsFloat,(int)offsetof(Enemy_obj,leftBound),HX_HCSTRING("leftBound","\xb7","\x9e","\xdc","\xcb")},
	{hx::fsFloat,(int)offsetof(Enemy_obj,rightBound),HX_HCSTRING("rightBound","\xc2","\x96","\xc1","\xb9")},
	{hx::fsBool,(int)offsetof(Enemy_obj,moveInBounds),HX_HCSTRING("moveInBounds","\x6b","\x68","\xd1","\x82")},
	{hx::fsBool,(int)offsetof(Enemy_obj,flipped),HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f")},
	{hx::fsInt,(int)offsetof(Enemy_obj,lives),HX_HCSTRING("lives","\x07","\xf0","\x07","\x75")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(Enemy_obj,enemyShots),HX_HCSTRING("enemyShots","\xd1","\x9e","\x2a","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("sheep","\x9b","\xe2","\x1f","\x7c"),
	HX_HCSTRING("sheepType","\xf5","\xea","\xb6","\x7d"),
	HX_HCSTRING("moveSpeed","\xb6","\x66","\x30","\x3f"),
	HX_HCSTRING("attack","\xc8","\xfb","\x0f","\xe0"),
	HX_HCSTRING("attackTimer","\xdd","\x7e","\xe5","\xb7"),
	HX_HCSTRING("leftBound","\xb7","\x9e","\xdc","\xcb"),
	HX_HCSTRING("rightBound","\xc2","\x96","\xc1","\xb9"),
	HX_HCSTRING("moveInBounds","\x6b","\x68","\xd1","\x82"),
	HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f"),
	HX_HCSTRING("lives","\x07","\xf0","\x07","\x75"),
	HX_HCSTRING("enemyShots","\xd1","\x9e","\x2a","\x37"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("dropBomb","\x31","\x2a","\xb6","\xe6"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("damage","\x6f","\x90","\xe4","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#endif

hx::Class Enemy_obj::__mClass;

void Enemy_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Enemy_obj >;
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

