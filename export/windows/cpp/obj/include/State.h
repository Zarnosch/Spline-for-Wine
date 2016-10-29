#ifndef INCLUDED_State
#define INCLUDED_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(State)


class State_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef State_obj OBJ_;

	public:
		State_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("State","\xf1","\xe5","\x38","\x17"); }
		::String __ToString() const { return HX_HCSTRING("State.","\x1d","\x4d","\x90","\x3a") + tag; }

		static ::State Attacking;
		static inline ::State Attacking_dyn() { return Attacking; }
		static ::State Running;
		static inline ::State Running_dyn() { return Running; }
		static ::State Standing;
		static inline ::State Standing_dyn() { return Standing; }
};


#endif /* INCLUDED_State */ 
