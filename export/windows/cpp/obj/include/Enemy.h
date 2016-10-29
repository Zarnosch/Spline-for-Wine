#ifndef INCLUDED_Enemy
#define INCLUDED_Enemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(EnemyType)
HX_DECLARE_CLASS0(Sheep)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Enemy_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Enemy_obj OBJ_;
		Enemy_obj();
		Void __construct(Float x,Float y,::EnemyType enemyType,Dynamic bounds,Dynamic left,Dynamic right);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Enemy")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Enemy_obj > __new(Float x,Float y,::EnemyType enemyType,Dynamic bounds,Dynamic left,Dynamic right);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Enemy_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Enemy","\x28","\x82","\xa8","\x03"); }

		::Sheep sheep;
		::EnemyType sheepType;
		Float moveSpeed;
		Float attack;
		Float attackTimer;
		Float leftBound;
		Float rightBound;
		bool moveInBounds;
		bool flipped;
		int lives;
		::flixel::group::FlxTypedGroup enemyShots;
		virtual Void update( );

		virtual Void dropBomb( );
		Dynamic dropBomb_dyn();

		virtual Void destroy( );

		virtual Void damage( );
		Dynamic damage_dyn();

};


#endif /* INCLUDED_Enemy */ 
