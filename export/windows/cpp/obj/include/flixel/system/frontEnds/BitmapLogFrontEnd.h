#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#define INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_system,frontEnds,BitmapLogFrontEnd)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
namespace flixel{
namespace _system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  BitmapLogFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapLogFrontEnd_obj OBJ_;
		BitmapLogFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="flixel.system.frontEnds.BitmapLogFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapLogFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapLogFrontEnd_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BitmapLogFrontEnd","\x87","\xe7","\x7c","\xbb"); }

		virtual Void add( ::openfl::_legacy::display::BitmapData Data,::String Name);
		Dynamic add_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void clearAt( hx::Null< int >  Index);
		Dynamic clearAt_dyn();

		virtual Void viewCache( );
		Dynamic viewCache_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd */ 
