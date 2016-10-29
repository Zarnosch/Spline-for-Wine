#include <hxcpp.h>

#ifndef INCLUDED_Explosion
#include <Explosion.h>
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

Void Explosion_obj::__construct(Float x,Float y)
{
HX_STACK_FRAME("Explosion","new",0x2c66b2e7,"Explosion.new","Explosion.hx",9,0xe8176669)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(10)
	Float tmp = (x - (int)8);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	Float tmp1 = (y - (int)16);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(11)
	this->loadGraphic(HX_HCSTRING("assets/images/explosion.png","\xc5","\xf8","\xb2","\x1d"),true,(int)32,(int)32,null(),null());
	HX_STACK_LINE(12)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	tmp2->add(HX_HCSTRING("explode","\xe1","\xbb","\x63","\x27"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6),(int)8,false);
	HX_STACK_LINE(13)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(13)
	tmp3->play(HX_HCSTRING("explode","\xe1","\xbb","\x63","\x27"),null(),null());
}
;
	return null();
}

//Explosion_obj::~Explosion_obj() { }

Dynamic Explosion_obj::__CreateEmpty() { return  new Explosion_obj; }
hx::ObjectPtr< Explosion_obj > Explosion_obj::__new(Float x,Float y)
{  hx::ObjectPtr< Explosion_obj > _result_ = new Explosion_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic Explosion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Explosion_obj > _result_ = new Explosion_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Explosion_obj::update( ){
{
		HX_STACK_FRAME("Explosion","update",0x6da7b1e2,"Explosion.update","Explosion.hx",18,0xe8176669)
		HX_STACK_THIS(this)
		HX_STACK_LINE(18)
		this->super::update();
	}
return null();
}


Void Explosion_obj::destroy( ){
{
		HX_STACK_FRAME("Explosion","destroy",0x0bca5f01,"Explosion.destroy","Explosion.hx",23,0xe8176669)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->super::destroy();
	}
return null();
}



Explosion_obj::Explosion_obj()
{
}

Dynamic Explosion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Explosion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Explosion_obj::__mClass,"__mClass");
};

#endif

hx::Class Explosion_obj::__mClass;

void Explosion_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Explosion","\x75","\xb3","\x73","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Explosion_obj >;
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

