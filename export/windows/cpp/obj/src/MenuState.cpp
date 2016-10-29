#include <hxcpp.h>

#ifndef INCLUDED_GameOver
#include <GameOver.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
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

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",14,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(14)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	super::__construct(tmp);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > _result_ = new MenuState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",25,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		::flixel::FlxCamera tmp = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		tmp->bgColor = (int)-8355712;
		HX_STACK_LINE(28)
		int tmp1 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(28)
		Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		Float tmp3 = (tmp2 - (int)150);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		::flixel::text::FlxText tmp4 = ::flixel::text::FlxText_obj::__new(tmp3,(int)30,(int)400,HX_HCSTRING("LIBERATION","\x83","\xd6","\x49","\x9f"),(int)40,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		this->title = tmp4;
		HX_STACK_LINE(29)
		::flixel::text::FlxText tmp5 = this->title;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(29)
		this->add(tmp5);
		HX_STACK_LINE(31)
		int tmp6 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		Float tmp7 = (Float(tmp6) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		Float tmp8 = (tmp7 - (int)100);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		::flixel::text::FlxText tmp9 = ::flixel::text::FlxText_obj::__new(tmp8,(int)80,(int)400,HX_HCSTRING("SHEEP","\x7b","\x1a","\x0e","\xfa"),(int)20,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(31)
		this->subTitle = tmp9;
		HX_STACK_LINE(32)
		::flixel::text::FlxText tmp10 = this->subTitle;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(32)
		this->add(tmp10);
		HX_STACK_LINE(34)
		int tmp11 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(34)
		Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(34)
		Float tmp13 = (tmp12 - (int)40);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(34)
		Dynamic tmp14 = this->startGame_dyn();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(34)
		::flixel::ui::FlxButton tmp15 = ::flixel::ui::FlxButton_obj::__new(tmp13,(int)120,HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(34)
		this->startButton = tmp15;
		HX_STACK_LINE(35)
		::flixel::ui::FlxButton tmp16 = this->startButton;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(35)
		this->add(tmp16);
		HX_STACK_LINE(37)
		int tmp17 = ::flixel::FlxG_obj::width;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(37)
		Float tmp18 = (Float(tmp17) / Float((int)2));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(37)
		Float tmp19 = (tmp18 - (int)40);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(37)
		Dynamic tmp20 = this->goScore_dyn();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(37)
		::flixel::ui::FlxButton tmp21 = ::flixel::ui::FlxButton_obj::__new(tmp19,(int)120,HX_HCSTRING("SCORE","\x32","\xab","\xc7","\xf6"),tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(37)
		this->scoreButton = tmp21;
		HX_STACK_LINE(40)
		this->super::create();
	}
return null();
}


Void MenuState_obj::startGame( ){
{
		HX_STACK_FRAME("MenuState","startGame",0x336371d8,"MenuState.startGame","MenuState.hx",45,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::PlayState tmp = ::PlayState_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::flixel::FlxState State = tmp;		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(45)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		tmp1->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,startGame,(void))

Void MenuState_obj::goScore( ){
{
		HX_STACK_FRAME("MenuState","goScore",0xfded1b6e,"MenuState.goScore","MenuState.hx",50,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		::GameOver tmp = ::GameOver_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::flixel::FlxState State = tmp;		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(50)
		::flixel::FlxGame tmp1 = ::flixel::FlxG_obj::game;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		tmp1->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,goScore,(void))

Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",60,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",68,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		this->super::update();
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(startButton,"startButton");
	HX_MARK_MEMBER_NAME(scoreButton,"scoreButton");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(subTitle,"subTitle");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(startButton,"startButton");
	HX_VISIT_MEMBER_NAME(scoreButton,"scoreButton");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(subTitle,"subTitle");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"goScore") ) { return goScore_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subTitle") ) { return subTitle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startGame") ) { return startGame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startButton") ) { return startButton; }
		if (HX_FIELD_EQ(inName,"scoreButton") ) { return scoreButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"subTitle") ) { subTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startButton") ) { startButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreButton") ) { scoreButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("startButton","\xf4","\xbf","\xc6","\x51"));
	outFields->push(HX_HCSTRING("scoreButton","\xe4","\x92","\x46","\xa6"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("subTitle","\xf8","\x6b","\x5a","\x85"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,startButton),HX_HCSTRING("startButton","\xf4","\xbf","\xc6","\x51")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,scoreButton),HX_HCSTRING("scoreButton","\xe4","\x92","\x46","\xa6")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,subTitle),HX_HCSTRING("subTitle","\xf8","\x6b","\x5a","\x85")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("startButton","\xf4","\xbf","\xc6","\x51"),
	HX_HCSTRING("scoreButton","\xe4","\x92","\x46","\xa6"),
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("subTitle","\xf8","\x6b","\x5a","\x85"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("startGame","\x74","\x6d","\x52","\xfd"),
	HX_HCSTRING("goScore","\x0a","\xb8","\xc6","\x28"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

hx::Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("MenuState","\xd2","\xbf","\xb6","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MenuState_obj >;
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

