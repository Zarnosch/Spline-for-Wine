#include <hxcpp.h>

#ifndef INCLUDED_GameOver
#include <GameOver.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
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

Void GameOver_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("GameOver","new",0x1f3caa78,"GameOver.new","GameOver.hx",9,0x71ca4bf8)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(9)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	super::__construct(tmp);
}
;
	return null();
}

//GameOver_obj::~GameOver_obj() { }

Dynamic GameOver_obj::__CreateEmpty() { return  new GameOver_obj; }
hx::ObjectPtr< GameOver_obj > GameOver_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< GameOver_obj > _result_ = new GameOver_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic GameOver_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameOver_obj > _result_ = new GameOver_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void GameOver_obj::create( ){
{
		HX_STACK_FRAME("GameOver","create",0xc687ebe4,"GameOver.create","GameOver.hx",15,0x71ca4bf8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		tmp->bgColor = (int)-8355712;
		HX_STACK_LINE(17)
		this->super::create();
		HX_STACK_LINE(18)
		int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		Float tmp3 = (tmp2 - (int)50);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		::flixel::text::FlxText tmp4 = ::flixel::text::FlxText_obj::__new(tmp3,(int)50,(int)200,HX_HCSTRING("You died in honor!","\x97","\xfc","\x4d","\xe0"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(18)
		this->goText = tmp4;
		HX_STACK_LINE(19)
		::flixel::text::FlxText tmp5 = this->goText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(19)
		this->add(tmp5);
		HX_STACK_LINE(22)
		int tmp6 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(22)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(22)
		Float tmp8 = (tmp7 - (int)40);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(22)
		Dynamic tmp9 = this->startGame_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(22)
		::flixel::ui::FlxButton tmp10 = ::flixel::ui::FlxButton_obj::__new(tmp8,(int)100,HX_HCSTRING("PLAY AGAIN","\x14","\xde","\x4c","\x19"),tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(22)
		this->playAgain = tmp10;
		HX_STACK_LINE(23)
		::flixel::ui::FlxButton tmp11 = this->playAgain;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(23)
		this->add(tmp11);
	}
return null();
}


Void GameOver_obj::startGame( ){
{
		HX_STACK_FRAME("GameOver","startGame",0x675de98c,"GameOver.startGame","GameOver.hx",29,0x71ca4bf8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::PlayState tmp = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::flixel::FlxState State = tmp;		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(29)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		tmp1->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameOver_obj,startGame,(void))

Void GameOver_obj::update( ){
{
		HX_STACK_FRAME("GameOver","update",0xd17e0af1,"GameOver.update","GameOver.hx",34,0x71ca4bf8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		this->super::update();
	}
return null();
}


Void GameOver_obj::destroy( ){
{
		HX_STACK_FRAME("GameOver","destroy",0x0381f312,"GameOver.destroy","GameOver.hx",39,0x71ca4bf8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		this->super::destroy();
	}
return null();
}



GameOver_obj::GameOver_obj()
{
}

void GameOver_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOver);
	HX_MARK_MEMBER_NAME(goText,"goText");
	HX_MARK_MEMBER_NAME(playAgain,"playAgain");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOver_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(goText,"goText");
	HX_VISIT_MEMBER_NAME(playAgain,"playAgain");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameOver_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"goText") ) { return goText; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playAgain") ) { return playAgain; }
		if (HX_FIELD_EQ(inName,"startGame") ) { return startGame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameOver_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"goText") ) { goText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playAgain") ) { playAgain=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOver_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("goText","\xf5","\x86","\x0f","\x50"));
	outFields->push(HX_HCSTRING("playAgain","\xcc","\x62","\x21","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOver_obj,goText),HX_HCSTRING("goText","\xf5","\x86","\x0f","\x50")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(GameOver_obj,playAgain),HX_HCSTRING("playAgain","\xcc","\x62","\x21","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("goText","\xf5","\x86","\x0f","\x50"),
	HX_HCSTRING("playAgain","\xcc","\x62","\x21","\x3f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("startGame","\x74","\x6d","\x52","\xfd"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOver_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOver_obj::__mClass,"__mClass");
};

#endif

hx::Class GameOver_obj::__mClass;

void GameOver_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("GameOver","\x86","\x4e","\x90","\x8f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameOver_obj >;
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

