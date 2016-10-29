#include <hxcpp.h>

#ifndef INCLUDED_Bullet
#include <Bullet.h>
#endif
#ifndef INCLUDED_BulletType
#include <BulletType.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif

Void Bullet_obj::__construct(Float x,Float y,::BulletType bt,bool f,Dynamic enemy)
{
HX_STACK_FRAME("Bullet","new",0xf3208054,"Bullet.new","Bullet.hx",13,0xb42ce59c)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(bt,"bt")
HX_STACK_ARG(f,"f")
HX_STACK_ARG(enemy,"enemy")
{
	HX_STACK_LINE(19)
	this->fromEnemy = false;
	HX_STACK_LINE(17)
	this->flipped = false;
	HX_STACK_LINE(24)
	Float tmp = (x + (int)5);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	Float tmp1 = (y + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(25)
	this->bulletType = bt;
	HX_STACK_LINE(27)
	this->loadGraphic(HX_HCSTRING("assets/images/shots.png","\xe9","\xae","\xc8","\x65"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(28)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	tmp2->add(HX_HCSTRING("pistol","\x77","\x42","\x67","\x89"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3),(int)15,true);
	HX_STACK_LINE(29)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	tmp3->add(HX_HCSTRING("gatling","\x10","\x2a","\xef","\x95"),Array_obj< int >::__new().Add((int)4).Add((int)5).Add((int)6).Add((int)7),(int)15,true);
	HX_STACK_LINE(30)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(30)
	tmp4->add(HX_HCSTRING("tesla","\xd7","\x78","\x95","\x0d"),Array_obj< int >::__new().Add((int)28).Add((int)9).Add((int)10).Add((int)11),(int)15,true);
	HX_STACK_LINE(31)
	::flixel::animation::FlxAnimationController tmp5 = this->animation;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(31)
	tmp5->add(HX_HCSTRING("rocket","\x54","\x2f","\xeb","\xbf"),Array_obj< int >::__new().Add((int)12).Add((int)13).Add((int)14).Add((int)15),(int)15,true);
	HX_STACK_LINE(32)
	this->xstart = x;
	HX_STACK_LINE(33)
	this->flipped = f;
	HX_STACK_LINE(34)
	bool tmp6 = this->flipped;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	this->set_flipX(tmp6);
	HX_STACK_LINE(36)
	this->fromEnemy = enemy;
	HX_STACK_LINE(38)
	switch( (int)(bt->__Index())){
		case (int)0: {
			HX_STACK_LINE(40)
			::flixel::animation::FlxAnimationController tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(40)
			tmp7->play(HX_HCSTRING("pistol","\x77","\x42","\x67","\x89"),null(),null());
			HX_STACK_LINE(41)
			this->speed = ((Float)2.0);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(43)
			::flixel::animation::FlxAnimationController tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(43)
			tmp7->play(HX_HCSTRING("gatling","\x10","\x2a","\xef","\x95"),null(),null());
			HX_STACK_LINE(44)
			this->speed = ((Float)3.0);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(46)
			::flixel::animation::FlxAnimationController tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(46)
			tmp7->play(HX_HCSTRING("tesla","\xd7","\x78","\x95","\x0d"),null(),null());
			HX_STACK_LINE(47)
			this->speed = ((Float)5.0);
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(49)
			::flixel::animation::FlxAnimationController tmp7 = this->animation;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(49)
			tmp7->play(HX_HCSTRING("rocket","\x54","\x2f","\xeb","\xbf"),null(),null());
			HX_STACK_LINE(50)
			this->speed = ((Float)1.5);
		}
		;break;
	}
}
;
	return null();
}

//Bullet_obj::~Bullet_obj() { }

Dynamic Bullet_obj::__CreateEmpty() { return  new Bullet_obj; }
hx::ObjectPtr< Bullet_obj > Bullet_obj::__new(Float x,Float y,::BulletType bt,bool f,Dynamic enemy)
{  hx::ObjectPtr< Bullet_obj > _result_ = new Bullet_obj();
	_result_->__construct(x,y,bt,f,enemy);
	return _result_;}

Dynamic Bullet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bullet_obj > _result_ = new Bullet_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Bullet_obj::update( ){
{
		HX_STACK_FRAME("Bullet","update",0xa9584695,"Bullet.update","Bullet.hx",55,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->super::update();
		HX_STACK_LINE(57)
		bool tmp = this->fromEnemy;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		if ((tmp1)){
			HX_STACK_LINE(58)
			bool tmp2 = this->flipped;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(58)
			if ((tmp2)){
				HX_STACK_LINE(59)
				::Bullet _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(59)
				Float tmp3 = _g->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(59)
				Float tmp4 = this->speed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(59)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(59)
				_g->set_x(tmp5);
			}
			else{
				HX_STACK_LINE(61)
				::Bullet _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(61)
				Float tmp3 = _g->x;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(61)
				Float tmp4 = this->speed;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				_g->set_x(tmp5);
			}
		}
		else{
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::Bullet _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(64)
				Float tmp2 = _g->y;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(64)
				Float tmp3 = this->speed;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(64)
				Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(64)
				_g->set_y(tmp4);
			}
			HX_STACK_LINE(65)
			this->set_angle((int)90);
		}
		HX_STACK_LINE(68)
		Float tmp2 = this->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		Float tmp3 = this->xstart;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		Float tmp4 = (tmp3 + (int)400);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		if ((tmp5)){
			HX_STACK_LINE(69)
			this->destroy();
		}
	}
return null();
}


Void Bullet_obj::destroy( ){
{
		HX_STACK_FRAME("Bullet","destroy",0x0a9be6ee,"Bullet.destroy","Bullet.hx",74,0xb42ce59c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		this->super::destroy();
		HX_STACK_LINE(76)
		this->bulletType = null();
	}
return null();
}



Bullet_obj::Bullet_obj()
{
}

void Bullet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bullet);
	HX_MARK_MEMBER_NAME(bulletType,"bulletType");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(flipped,"flipped");
	HX_MARK_MEMBER_NAME(fromEnemy,"fromEnemy");
	HX_MARK_MEMBER_NAME(xstart,"xstart");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bullet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bulletType,"bulletType");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(flipped,"flipped");
	HX_VISIT_MEMBER_NAME(fromEnemy,"fromEnemy");
	HX_VISIT_MEMBER_NAME(xstart,"xstart");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bullet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xstart") ) { return xstart; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { return flipped; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromEnemy") ) { return fromEnemy; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletType") ) { return bulletType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bullet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xstart") ) { xstart=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromEnemy") ) { fromEnemy=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bulletType") ) { bulletType=inValue.Cast< ::BulletType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bullet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f"));
	outFields->push(HX_HCSTRING("fromEnemy","\x7e","\xfc","\x03","\x25"));
	outFields->push(HX_HCSTRING("xstart","\xea","\xc0","\xde","\x7e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::BulletType*/ ,(int)offsetof(Bullet_obj,bulletType),HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15")},
	{hx::fsFloat,(int)offsetof(Bullet_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsBool,(int)offsetof(Bullet_obj,flipped),HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f")},
	{hx::fsBool,(int)offsetof(Bullet_obj,fromEnemy),HX_HCSTRING("fromEnemy","\x7e","\xfc","\x03","\x25")},
	{hx::fsFloat,(int)offsetof(Bullet_obj,xstart),HX_HCSTRING("xstart","\xea","\xc0","\xde","\x7e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f"),
	HX_HCSTRING("fromEnemy","\x7e","\xfc","\x03","\x25"),
	HX_HCSTRING("xstart","\xea","\xc0","\xde","\x7e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bullet_obj::__mClass,"__mClass");
};

#endif

hx::Class Bullet_obj::__mClass;

void Bullet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Bullet","\x62","\x06","\x25","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bullet_obj >;
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

