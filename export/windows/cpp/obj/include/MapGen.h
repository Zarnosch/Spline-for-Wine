#ifndef INCLUDED_MapGen
#define INCLUDED_MapGen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS0(MapGen)
HX_DECLARE_CLASS0(Sheep)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  MapGen_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef MapGen_obj OBJ_;
		MapGen_obj();
		Void __construct(int minHeight,int maxHeight);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="MapGen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapGen_obj > __new(int minHeight,int maxHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapGen_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapGen","\x74","\x2b","\x97","\xed"); }

		::flixel::group::FlxTypedGroup collGrounds;
		::flixel::group::FlxTypedGroup visGrounds;
		::flixel::group::FlxTypedGroup debugFus;
		int activeX;
		int activeY;
		int minHeight;
		int maxHeight;
		Float Range;
		int maxRange;
		Float cameraX;
		::flixel::group::FlxTypedGroup enemies;
		::flixel::group::FlxTypedGroup enemieShots;
		::Sheep sheep;
		virtual Void update( );

		virtual Void destroy( );

		virtual Void updateWorld( );
		Dynamic updateWorld_dyn();

		virtual Void createGround( int x,int y,int w,int h,int depth);
		Dynamic createGround_dyn();

		virtual Void debugFu( int x,int y);
		Dynamic debugFu_dyn();

		virtual Void createRandomVis_( int x,int y,int w,int h);
		Dynamic createRandomVis__dyn();

		virtual Void createRandomVisRec( int x,int y,int op);
		Dynamic createRandomVisRec_dyn();

		virtual Void addDownEnemy( int x,int y,int xb,int yb);
		Dynamic addDownEnemy_dyn();

		virtual Void addFlyEnemy( int x,int y);
		Dynamic addFlyEnemy_dyn();

};


#endif /* INCLUDED_MapGen */ 
