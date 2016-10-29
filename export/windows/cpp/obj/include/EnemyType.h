#ifndef INCLUDED_EnemyType
#define INCLUDED_EnemyType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EnemyType)


class EnemyType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EnemyType_obj OBJ_;

	public:
		EnemyType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("EnemyType","\x02","\xd5","\xfa","\x4e"); }
		::String __ToString() const { return HX_HCSTRING("EnemyType.","\xec","\x8c","\x7f","\xcc") + tag; }

		static ::EnemyType NAZI_SHEEP;
		static inline ::EnemyType NAZI_SHEEP_dyn() { return NAZI_SHEEP; }
		static ::EnemyType NAZI_SHEEP_FLYING;
		static inline ::EnemyType NAZI_SHEEP_FLYING_dyn() { return NAZI_SHEEP_FLYING; }
};


#endif /* INCLUDED_EnemyType */ 
