#ifndef INCLUDED_Sheep
#define INCLUDED_Sheep

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(MapGen)
HX_DECLARE_CLASS0(Sheep)
HX_DECLARE_CLASS0(State)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Sheep_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Sheep_obj OBJ_;
		Sheep_obj();
		Void __construct(int x,int y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Sheep")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sheep_obj > __new(int x,int y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sheep_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sheep","\x7b","\x52","\x4d","\x0f"); }

		Float maxSpeed;
		Float activeSpeed;
		Float beschleunigung;
		::String activeMoveDirection;
		::String lastMoveDirection;
		Float maxJumpHeight;
		Float activeJumpSpeed;
		Float minJumpSpeed;
		Float maxJumpSpeed;
		Float activeGravity;
		Float maxGravity;
		bool doubbleJump;
		bool isOnGround;
		::MapGen map;
		Array< Float > position;
		Array< Float > lastPosition;
		::State activeSheepSate;
		::State lastSheepState;
		bool isJumping;
		Array< Float > jumpStart;
		int lives;
		virtual Void update( );

		virtual Void destroy( );

		virtual Void updateMovement( );
		Dynamic updateMovement_dyn();

		virtual Void moveLeft( );
		Dynamic moveLeft_dyn();

		virtual Void moveRight( );
		Dynamic moveRight_dyn();

		virtual Void jump( );
		Dynamic jump_dyn();

		virtual Void checkSpeed( );
		Dynamic checkSpeed_dyn();

		virtual Void checkJump( );
		Dynamic checkJump_dyn();

		virtual Void setLanded( ::flixel::FlxSprite obj1,::flixel::FlxSprite obj2);
		Dynamic setLanded_dyn();

		virtual Void checkGravity( );
		Dynamic checkGravity_dyn();

		virtual Void checkCollsision( );
		Dynamic checkCollsision_dyn();

		virtual Void collision( ::flixel::FlxSprite obj1,::flixel::FlxSprite obj2);
		Dynamic collision_dyn();

		virtual bool damage( );
		Dynamic damage_dyn();

};


#endif /* INCLUDED_Sheep */ 
