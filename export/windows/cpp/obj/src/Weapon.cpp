#include <hxcpp.h>

#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_BulletType
#include <BulletType.h>
#endif
#ifndef INCLUDED_Weapon
#include <Weapon.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Weapon_obj::__construct()
{
HX_STACK_FRAME("Weapon","new",0x467ad9ee,"Weapon.new","Weapon.hx",9,0xfcdf3d42)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	this->bullets = ::flixel::group::FlxTypedGroup_obj::__new(null());
	HX_STACK_LINE(20)
	this->shotsFired = (int)0;
	HX_STACK_LINE(19)
	this->ammo = (int)10;
	HX_STACK_LINE(17)
	this->currentEquippedWeapon = (int)1;
	HX_STACK_LINE(15)
	this->timer = ((Float)0);
	HX_STACK_LINE(14)
	this->shotTimer = ((Float)10.0);
	HX_STACK_LINE(12)
	this->yPos = ((Float)0);
	HX_STACK_LINE(11)
	this->xPos = ((Float)0);
	HX_STACK_LINE(26)
	super::__construct((int)0,(int)0,null());
	HX_STACK_LINE(27)
	this->loadGraphic(HX_HCSTRING("assets/images/weapons.png","\x07","\x41","\x8c","\xc1"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(28)
	::flixel::animation::FlxAnimationController tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	tmp->add(HX_HCSTRING("pistol_lame","\x15","\x8f","\x3f","\x1e"),Array_obj< int >::__new().Add((int)0),(int)0,false);
	HX_STACK_LINE(29)
	::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	tmp1->add(HX_HCSTRING("pistol_better","\x38","\x2d","\x46","\x2b"),Array_obj< int >::__new().Add((int)1),(int)0,false);
	HX_STACK_LINE(30)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	tmp2->add(HX_HCSTRING("pistol_cool","\xd1","\x44","\x57","\x18"),Array_obj< int >::__new().Add((int)2),(int)0,false);
	HX_STACK_LINE(31)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	tmp3->add(HX_HCSTRING("pistol_awesome","\x1b","\x14","\x54","\x17"),Array_obj< int >::__new().Add((int)3),(int)0,false);
	HX_STACK_LINE(32)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	tmp4->add(HX_HCSTRING("gatling_lame","\xdc","\x7c","\x4c","\xe5"),Array_obj< int >::__new().Add((int)4),(int)0,false);
	HX_STACK_LINE(33)
	::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	tmp5->add(HX_HCSTRING("gatling_better","\xbf","\x5a","\xbf","\x81"),Array_obj< int >::__new().Add((int)5),(int)0,false);
	HX_STACK_LINE(34)
	::flixel::animation::FlxAnimationController tmp6 = this->animation;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	tmp6->add(HX_HCSTRING("gatling_cool","\x98","\x32","\x64","\xdf"),Array_obj< int >::__new().Add((int)6),(int)0,false);
	HX_STACK_LINE(35)
	::flixel::animation::FlxAnimationController tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(35)
	tmp7->add(HX_HCSTRING("gatling_awesome","\xb4","\xbc","\xe2","\x6a"),Array_obj< int >::__new().Add((int)7),(int)0,false);
	HX_STACK_LINE(36)
	::flixel::animation::FlxAnimationController tmp8 = this->animation;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(36)
	tmp8->add(HX_HCSTRING("tesla_lame","\xb5","\x3c","\x10","\x5b"),Array_obj< int >::__new().Add((int)8),(int)0,false);
	HX_STACK_LINE(37)
	::flixel::animation::FlxAnimationController tmp9 = this->animation;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(37)
	tmp9->add(HX_HCSTRING("tesla_better","\xd8","\x82","\xd5","\xbf"),Array_obj< int >::__new().Add((int)9),(int)0,false);
	HX_STACK_LINE(38)
	::flixel::animation::FlxAnimationController tmp10 = this->animation;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(38)
	tmp10->add(HX_HCSTRING("tesla_cool","\x71","\xf2","\x27","\x55"),Array_obj< int >::__new().Add((int)10),(int)0,false);
	HX_STACK_LINE(39)
	::flixel::animation::FlxAnimationController tmp11 = this->animation;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(39)
	tmp11->add(HX_HCSTRING("tesla_awesome","\x7b","\xaa","\x2f","\x80"),Array_obj< int >::__new().Add((int)11),(int)0,false);
	HX_STACK_LINE(40)
	::flixel::animation::FlxAnimationController tmp12 = this->animation;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(40)
	tmp12->add(HX_HCSTRING("rocket_lame","\x18","\xe1","\xe2","\x02"),Array_obj< int >::__new().Add((int)12),(int)0,false);
	HX_STACK_LINE(41)
	::flixel::animation::FlxAnimationController tmp13 = this->animation;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(41)
	tmp13->add(HX_HCSTRING("rocket_better","\xfb","\x45","\xe4","\xfc"),Array_obj< int >::__new().Add((int)13),(int)0,false);
	HX_STACK_LINE(42)
	::flixel::animation::FlxAnimationController tmp14 = this->animation;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(42)
	tmp14->add(HX_HCSTRING("rocket_cool","\xd4","\x96","\xfa","\xfc"),Array_obj< int >::__new().Add((int)14),(int)0,false);
	HX_STACK_LINE(43)
	::flixel::animation::FlxAnimationController tmp15 = this->animation;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(43)
	tmp15->add(HX_HCSTRING("rocket_awesome","\xf8","\xa5","\x0b","\xb0"),Array_obj< int >::__new().Add((int)15),(int)0,false);
	HX_STACK_LINE(45)
	::flixel::animation::FlxAnimationController tmp16 = this->animation;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(45)
	tmp16->play(HX_HCSTRING("gatling_awesome","\xb4","\xbc","\xe2","\x6a"),null(),null());
}
;
	return null();
}

//Weapon_obj::~Weapon_obj() { }

Dynamic Weapon_obj::__CreateEmpty() { return  new Weapon_obj; }
hx::ObjectPtr< Weapon_obj > Weapon_obj::__new()
{  hx::ObjectPtr< Weapon_obj > _result_ = new Weapon_obj();
	_result_->__construct();
	return _result_;}

Dynamic Weapon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Weapon_obj > _result_ = new Weapon_obj();
	_result_->__construct();
	return _result_;}

Void Weapon_obj::setPos( Float xPos,Float yPos){
{
		HX_STACK_FRAME("Weapon","setPos",0x8c6dce44,"Weapon.setPos","Weapon.hx",49,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xPos,"xPos")
		HX_STACK_ARG(yPos,"yPos")
		HX_STACK_LINE(50)
		Float tmp = (xPos + (int)23);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		this->xPos = tmp;
		HX_STACK_LINE(51)
		Float tmp1 = (yPos + (int)12);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		this->yPos = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Weapon_obj,setPos,(void))

Void Weapon_obj::setWeaponNumber( int weaponNumber){
{
		HX_STACK_FRAME("Weapon","setWeaponNumber",0x07451815,"Weapon.setWeaponNumber","Weapon.hx",55,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(weaponNumber,"weaponNumber")
		HX_STACK_LINE(56)
		int tmp = weaponNumber;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(58)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(58)
				tmp1->play(HX_HCSTRING("pistol_lame","\x15","\x8f","\x3f","\x1e"),null(),null());
				HX_STACK_LINE(59)
				this->ammo = (int)10;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(61)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(61)
				tmp1->play(HX_HCSTRING("pistol_better","\x38","\x2d","\x46","\x2b"),null(),null());
				HX_STACK_LINE(62)
				this->ammo = (int)20;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(64)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(64)
				tmp1->play(HX_HCSTRING("pistol_cool","\xd1","\x44","\x57","\x18"),null(),null());
				HX_STACK_LINE(65)
				this->ammo = (int)30;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(67)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(67)
				tmp1->play(HX_HCSTRING("pistol_awesome","\x1b","\x14","\x54","\x17"),null(),null());
				HX_STACK_LINE(68)
				this->ammo = (int)40;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(70)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(70)
				tmp1->play(HX_HCSTRING("gatling_lame","\xdc","\x7c","\x4c","\xe5"),null(),null());
				HX_STACK_LINE(71)
				this->ammo = (int)100;
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(73)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(73)
				tmp1->play(HX_HCSTRING("gatling_better","\xbf","\x5a","\xbf","\x81"),null(),null());
				HX_STACK_LINE(74)
				this->ammo = (int)200;
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(76)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(76)
				tmp1->play(HX_HCSTRING("gatling_cool","\x98","\x32","\x64","\xdf"),null(),null());
				HX_STACK_LINE(77)
				this->ammo = (int)300;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(79)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(79)
				tmp1->play(HX_HCSTRING("gatling_awesome","\xb4","\xbc","\xe2","\x6a"),null(),null());
				HX_STACK_LINE(80)
				this->ammo = (int)400;
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(82)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(82)
				tmp1->play(HX_HCSTRING("tesla_lame","\xb5","\x3c","\x10","\x5b"),null(),null());
				HX_STACK_LINE(83)
				this->ammo = (int)500;
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(85)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(85)
				tmp1->play(HX_HCSTRING("tesla_better","\xd8","\x82","\xd5","\xbf"),null(),null());
				HX_STACK_LINE(86)
				this->ammo = (int)1000;
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(88)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(88)
				tmp1->play(HX_HCSTRING("tesla_cool","\x71","\xf2","\x27","\x55"),null(),null());
				HX_STACK_LINE(89)
				this->ammo = (int)1500;
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(91)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(91)
				tmp1->play(HX_HCSTRING("tesla_awesome","\x7b","\xaa","\x2f","\x80"),null(),null());
				HX_STACK_LINE(92)
				this->ammo = (int)2000;
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(94)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(94)
				tmp1->play(HX_HCSTRING("rocket_lame","\x18","\xe1","\xe2","\x02"),null(),null());
				HX_STACK_LINE(95)
				this->ammo = (int)5;
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(97)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(97)
				tmp1->play(HX_HCSTRING("rocket_better","\xfb","\x45","\xe4","\xfc"),null(),null());
				HX_STACK_LINE(98)
				this->ammo = (int)10;
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(100)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(100)
				tmp1->play(HX_HCSTRING("rocket_cool","\xd4","\x96","\xfa","\xfc"),null(),null());
				HX_STACK_LINE(101)
				this->ammo = (int)15;
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(103)
				::flixel::animation::FlxAnimationController tmp1 = this->animation;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(103)
				tmp1->play(HX_HCSTRING("rocket_awesome","\xf8","\xa5","\x0b","\xb0"),null(),null());
				HX_STACK_LINE(104)
				this->ammo = (int)20;
			}
			;break;
		}
		HX_STACK_LINE(107)
		this->currentEquippedWeapon = weaponNumber;
		HX_STACK_LINE(109)
		int tmp1 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		bool tmp2 = (tmp1 <= (int)4);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		if ((tmp2)){
			HX_STACK_LINE(110)
			this->shotTimer = ((Float)10.0);
		}
		else{
			HX_STACK_LINE(111)
			int tmp3 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			bool tmp4 = (tmp3 > (int)4);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			if ((tmp4)){
				HX_STACK_LINE(111)
				int tmp6 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(111)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(111)
				tmp5 = (tmp7 <= (int)8);
			}
			else{
				HX_STACK_LINE(111)
				tmp5 = false;
			}
			HX_STACK_LINE(111)
			if ((tmp5)){
				HX_STACK_LINE(112)
				this->shotTimer = ((Float)5.0);
			}
			else{
				HX_STACK_LINE(113)
				int tmp6 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(113)
				bool tmp7 = (tmp6 > (int)8);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(113)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(113)
				if ((tmp7)){
					HX_STACK_LINE(113)
					int tmp9 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(113)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(113)
					tmp8 = (tmp10 <= (int)12);
				}
				else{
					HX_STACK_LINE(113)
					tmp8 = false;
				}
				HX_STACK_LINE(113)
				if ((tmp8)){
					HX_STACK_LINE(114)
					this->shotTimer = ((Float)8.0);
				}
				else{
					HX_STACK_LINE(115)
					int tmp9 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(115)
					bool tmp10 = (tmp9 > (int)12);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(115)
					if ((tmp10)){
						HX_STACK_LINE(116)
						this->shotTimer = ((Float)20.0);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Weapon_obj,setWeaponNumber,(void))

Void Weapon_obj::flipPos( bool isFlipped){
{
		HX_STACK_FRAME("Weapon","flipPos",0xc3361575,"Weapon.flipPos","Weapon.hx",122,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_ARG(isFlipped,"isFlipped")
		HX_STACK_LINE(123)
		bool tmp = isFlipped;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		this->set_flipX(tmp);
		HX_STACK_LINE(124)
		bool tmp1 = isFlipped;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		if ((tmp1)){
			HX_STACK_LINE(125)
			hx::SubEq(this->xPos,(int)30);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Weapon_obj,flipPos,(void))

Void Weapon_obj::update( ){
{
		HX_STACK_FRAME("Weapon","update",0xa406693b,"Weapon.update","Weapon.hx",130,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		this->super::update();
		HX_STACK_LINE(132)
		Float tmp = this->xPos;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(132)
		this->set_x(tmp);
		HX_STACK_LINE(133)
		Float tmp1 = this->yPos;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		this->set_y(tmp1);
		HX_STACK_LINE(135)
		(this->timer)++;
		HX_STACK_LINE(137)
		Float tmp2 = this->timer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		Float tmp3 = this->shotTimer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(137)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(137)
		if ((tmp4)){
			HX_STACK_LINE(137)
			::flixel::input::mouse::FlxMouse tmp6 = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			::flixel::input::mouse::FlxMouse tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(137)
			int tmp8 = tmp7->_leftButton->current;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(137)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(137)
			tmp5 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(137)
			tmp5 = false;
		}
		HX_STACK_LINE(137)
		if ((tmp5)){
			HX_STACK_LINE(138)
			::flixel::FlxCamera tmp6 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			tmp6->shake(((Float)0.01),((Float)0.05),null(),true,(int)1);
			HX_STACK_LINE(139)
			(this->shotsFired)++;
			HX_STACK_LINE(140)
			int tmp7 = this->shotsFired;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			int tmp8 = this->ammo;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(140)
			bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(140)
			if ((tmp9)){
				HX_STACK_LINE(141)
				int tmp10 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(141)
				bool tmp11 = (tmp10 <= (int)4);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(141)
				if ((tmp11)){
					HX_STACK_LINE(142)
					::flixel::group::FlxTypedGroup tmp12 = this->bullets;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(142)
					Float tmp13 = this->x;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(142)
					Float tmp14 = this->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(142)
					bool tmp15 = this->flipX;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(142)
					::Bullet tmp16 = ::Bullet_obj::__new(tmp13,tmp14,::BulletType_obj::PISTOL,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(142)
					tmp12->add(tmp16);
				}
				else{
					HX_STACK_LINE(143)
					int tmp12 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(143)
					bool tmp13 = (tmp12 > (int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(143)
					bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(143)
					if ((tmp13)){
						HX_STACK_LINE(143)
						int tmp15 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(143)
						int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(143)
						tmp14 = (tmp16 <= (int)8);
					}
					else{
						HX_STACK_LINE(143)
						tmp14 = false;
					}
					HX_STACK_LINE(143)
					if ((tmp14)){
						HX_STACK_LINE(144)
						::flixel::group::FlxTypedGroup tmp15 = this->bullets;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(144)
						Float tmp16 = this->x;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(144)
						Float tmp17 = this->y;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(144)
						bool tmp18 = this->flipX;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(144)
						::Bullet tmp19 = ::Bullet_obj::__new(tmp16,tmp17,::BulletType_obj::GATLING,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(144)
						tmp15->add(tmp19);
					}
					else{
						HX_STACK_LINE(145)
						int tmp15 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(145)
						bool tmp16 = (tmp15 > (int)8);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(145)
						bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(145)
						if ((tmp16)){
							HX_STACK_LINE(145)
							int tmp18 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(145)
							int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(145)
							tmp17 = (tmp19 <= (int)12);
						}
						else{
							HX_STACK_LINE(145)
							tmp17 = false;
						}
						HX_STACK_LINE(145)
						if ((tmp17)){
							HX_STACK_LINE(146)
							::flixel::group::FlxTypedGroup tmp18 = this->bullets;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(146)
							Float tmp19 = this->x;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(146)
							Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(146)
							bool tmp21 = this->flipX;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(146)
							::Bullet tmp22 = ::Bullet_obj::__new(tmp19,tmp20,::BulletType_obj::TESLA,tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(146)
							tmp18->add(tmp22);
						}
						else{
							HX_STACK_LINE(147)
							int tmp18 = this->currentEquippedWeapon;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(147)
							bool tmp19 = (tmp18 > (int)12);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(147)
							if ((tmp19)){
								HX_STACK_LINE(148)
								::flixel::group::FlxTypedGroup tmp20 = this->bullets;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(148)
								Float tmp21 = this->x;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(148)
								Float tmp22 = this->y;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(148)
								bool tmp23 = this->flipX;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(148)
								::Bullet tmp24 = ::Bullet_obj::__new(tmp21,tmp22,::BulletType_obj::ROCKET,tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(148)
								tmp20->add(tmp24);
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(151)
				::flixel::FlxCamera tmp10 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(151)
				tmp10->flash((int)-1,((Float)0.05),null(),null());
				HX_STACK_LINE(152)
				this->shotsFired = (int)0;
			}
			HX_STACK_LINE(154)
			this->timer = (int)0;
		}
	}
return null();
}


Void Weapon_obj::destroy( ){
{
		HX_STACK_FRAME("Weapon","destroy",0x684c1588,"Weapon.destroy","Weapon.hx",160,0xfcdf3d42)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		this->super::destroy();
	}
return null();
}



Weapon_obj::Weapon_obj()
{
}

void Weapon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Weapon);
	HX_MARK_MEMBER_NAME(xPos,"xPos");
	HX_MARK_MEMBER_NAME(yPos,"yPos");
	HX_MARK_MEMBER_NAME(shotTimer,"shotTimer");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(currentEquippedWeapon,"currentEquippedWeapon");
	HX_MARK_MEMBER_NAME(ammo,"ammo");
	HX_MARK_MEMBER_NAME(shotsFired,"shotsFired");
	HX_MARK_MEMBER_NAME(bullets,"bullets");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Weapon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(xPos,"xPos");
	HX_VISIT_MEMBER_NAME(yPos,"yPos");
	HX_VISIT_MEMBER_NAME(shotTimer,"shotTimer");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(currentEquippedWeapon,"currentEquippedWeapon");
	HX_VISIT_MEMBER_NAME(ammo,"ammo");
	HX_VISIT_MEMBER_NAME(shotsFired,"shotsFired");
	HX_VISIT_MEMBER_NAME(bullets,"bullets");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Weapon_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xPos") ) { return xPos; }
		if (HX_FIELD_EQ(inName,"yPos") ) { return yPos; }
		if (HX_FIELD_EQ(inName,"ammo") ) { return ammo; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setPos") ) { return setPos_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bullets") ) { return bullets; }
		if (HX_FIELD_EQ(inName,"flipPos") ) { return flipPos_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shotTimer") ) { return shotTimer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shotsFired") ) { return shotsFired; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setWeaponNumber") ) { return setWeaponNumber_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"currentEquippedWeapon") ) { return currentEquippedWeapon; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Weapon_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xPos") ) { xPos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yPos") ) { yPos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ammo") ) { ammo=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bullets") ) { bullets=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shotTimer") ) { shotTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shotsFired") ) { shotsFired=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"currentEquippedWeapon") ) { currentEquippedWeapon=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Weapon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("xPos","\xfc","\xaf","\x8e","\x4f"));
	outFields->push(HX_HCSTRING("yPos","\x9b","\xe6","\x37","\x50"));
	outFields->push(HX_HCSTRING("shotTimer","\x6b","\x10","\x88","\x0b"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("currentEquippedWeapon","\x74","\xfa","\x5c","\xc9"));
	outFields->push(HX_HCSTRING("ammo","\x4e","\xc7","\x70","\x40"));
	outFields->push(HX_HCSTRING("shotsFired","\xf5","\x26","\xf5","\x46"));
	outFields->push(HX_HCSTRING("bullets","\xf1","\x67","\xef","\x29"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Weapon_obj,xPos),HX_HCSTRING("xPos","\xfc","\xaf","\x8e","\x4f")},
	{hx::fsFloat,(int)offsetof(Weapon_obj,yPos),HX_HCSTRING("yPos","\x9b","\xe6","\x37","\x50")},
	{hx::fsFloat,(int)offsetof(Weapon_obj,shotTimer),HX_HCSTRING("shotTimer","\x6b","\x10","\x88","\x0b")},
	{hx::fsFloat,(int)offsetof(Weapon_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsInt,(int)offsetof(Weapon_obj,currentEquippedWeapon),HX_HCSTRING("currentEquippedWeapon","\x74","\xfa","\x5c","\xc9")},
	{hx::fsInt,(int)offsetof(Weapon_obj,ammo),HX_HCSTRING("ammo","\x4e","\xc7","\x70","\x40")},
	{hx::fsInt,(int)offsetof(Weapon_obj,shotsFired),HX_HCSTRING("shotsFired","\xf5","\x26","\xf5","\x46")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(Weapon_obj,bullets),HX_HCSTRING("bullets","\xf1","\x67","\xef","\x29")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("xPos","\xfc","\xaf","\x8e","\x4f"),
	HX_HCSTRING("yPos","\x9b","\xe6","\x37","\x50"),
	HX_HCSTRING("shotTimer","\x6b","\x10","\x88","\x0b"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("currentEquippedWeapon","\x74","\xfa","\x5c","\xc9"),
	HX_HCSTRING("ammo","\x4e","\xc7","\x70","\x40"),
	HX_HCSTRING("shotsFired","\xf5","\x26","\xf5","\x46"),
	HX_HCSTRING("bullets","\xf1","\x67","\xef","\x29"),
	HX_HCSTRING("setPos","\x12","\xeb","\x6c","\x6f"),
	HX_HCSTRING("setWeaponNumber","\x87","\xf1","\x6e","\x2d"),
	HX_HCSTRING("flipPos","\xe7","\x2c","\x70","\x7f"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Weapon_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Weapon_obj::__mClass,"__mClass");
};

#endif

hx::Class Weapon_obj::__mClass;

void Weapon_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Weapon","\xfc","\x0a","\xf8","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Weapon_obj >;
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

