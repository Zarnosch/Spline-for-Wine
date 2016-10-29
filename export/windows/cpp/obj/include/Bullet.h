#ifndef INCLUDED_Bullet
#define INCLUDED_Bullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Bullet)
HX_DECLARE_CLASS0(BulletType)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Bullet_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Bullet_obj OBJ_;
		Bullet_obj();
		Void __construct(Float x,Float y,::BulletType bt,bool f,Dynamic enemy);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Bullet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bullet_obj > __new(Float x,Float y,::BulletType bt,bool f,Dynamic enemy);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bullet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bullet","\x62","\x06","\x25","\x09"); }

		::BulletType bulletType;
		Float speed;
		bool flipped;
		bool fromEnemy;
		Float xstart;
		virtual Void update( );

		virtual Void destroy( );

};


#endif /* INCLUDED_Bullet */ 
