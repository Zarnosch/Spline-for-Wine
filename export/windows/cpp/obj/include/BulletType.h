#ifndef INCLUDED_BulletType
#define INCLUDED_BulletType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(BulletType)


class BulletType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BulletType_obj OBJ_;

	public:
		BulletType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("BulletType","\x3c","\xfe","\x46","\x0c"); }
		::String __ToString() const { return HX_HCSTRING("BulletType.","\x72","\x76","\xd7","\xb1") + tag; }

		static ::BulletType GATLING;
		static inline ::BulletType GATLING_dyn() { return GATLING; }
		static ::BulletType PISTOL;
		static inline ::BulletType PISTOL_dyn() { return PISTOL; }
		static ::BulletType ROCKET;
		static inline ::BulletType ROCKET_dyn() { return ROCKET; }
		static ::BulletType TESLA;
		static inline ::BulletType TESLA_dyn() { return TESLA; }
};


#endif /* INCLUDED_BulletType */ 
