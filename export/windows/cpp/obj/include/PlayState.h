#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Bullet)
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(MapGen)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Sheep)
HX_DECLARE_CLASS0(Weapon)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"); }

		::Sheep sheep;
		::Weapon weapons;
		::flixel::group::FlxTypedGroup enemies;
		::flixel::group::FlxTypedGroup enemieShots;
		int w;
		::MapGen map;
		::flixel::FlxSprite live1;
		::flixel::FlxSprite live2;
		::flixel::FlxSprite live3;
		::flixel::FlxSprite dead1;
		::flixel::FlxSprite dead2;
		::flixel::FlxSprite dead3;
		::flixel::FlxSprite scoreBoard;
		::flixel::FlxSprite ammoClip;
		Float ammoClipMaxY;
		int score;
		::flixel::text::FlxText scoreText;
		int kills;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void hurtPlayer( ::Sheep player,::Bullet bullet);
		Dynamic hurtPlayer_dyn();

		virtual Void hurtEnemy( ::Enemy enemy,::Bullet bullet);
		Dynamic hurtEnemy_dyn();

		virtual Void explode( ::flixel::FlxSprite ground,::Bullet b);
		Dynamic explode_dyn();

};


#endif /* INCLUDED_PlayState */ 
