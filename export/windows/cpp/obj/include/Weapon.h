#ifndef INCLUDED_Weapon
#define INCLUDED_Weapon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Weapon)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Weapon_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Weapon_obj OBJ_;
		Weapon_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Weapon")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Weapon_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Weapon_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Weapon","\xfc","\x0a","\xf8","\x30"); }

		Float xPos;
		Float yPos;
		Float shotTimer;
		Float timer;
		int currentEquippedWeapon;
		int ammo;
		int shotsFired;
		::flixel::group::FlxTypedGroup bullets;
		virtual Void setPos( Float xPos,Float yPos);
		Dynamic setPos_dyn();

		virtual Void setWeaponNumber( int weaponNumber);
		Dynamic setWeaponNumber_dyn();

		virtual Void flipPos( bool isFlipped);
		Dynamic flipPos_dyn();

		virtual Void update( );

		virtual Void destroy( );

};


#endif /* INCLUDED_Weapon */ 
