#ifndef INCLUDED_GameOver
#define INCLUDED_GameOver

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(GameOver)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)


class HXCPP_CLASS_ATTRIBUTES  GameOver_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef GameOver_obj OBJ_;
		GameOver_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="GameOver")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameOver_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameOver_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GameOver","\x86","\x4e","\x90","\x8f"); }

		::flixel::text::FlxText goText;
		::flixel::ui::FlxButton playAgain;
		virtual Void create( );

		virtual Void startGame( );
		Dynamic startGame_dyn();

		virtual Void update( );

		virtual Void destroy( );

};


#endif /* INCLUDED_GameOver */ 
