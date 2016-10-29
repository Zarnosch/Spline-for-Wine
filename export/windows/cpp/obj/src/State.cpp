#include <hxcpp.h>

#ifndef INCLUDED_State
#include <State.h>
#endif

::State State_obj::Attacking;

::State State_obj::Running;

::State State_obj::Standing;

HX_DEFINE_CREATE_ENUM(State_obj)

int State_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Attacking","\xfa","\x7d","\x34","\x62")) return 2;
	if (inName==HX_HCSTRING("Running","\xdf","\x95","\xba","\xb8")) return 0;
	if (inName==HX_HCSTRING("Standing","\xec","\x01","\x30","\xc4")) return 1;
	return super::__FindIndex(inName);
}

int State_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Attacking","\xfa","\x7d","\x34","\x62")) return 0;
	if (inName==HX_HCSTRING("Running","\xdf","\x95","\xba","\xb8")) return 0;
	if (inName==HX_HCSTRING("Standing","\xec","\x01","\x30","\xc4")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic State_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Attacking","\xfa","\x7d","\x34","\x62")) return Attacking;
	if (inName==HX_HCSTRING("Running","\xdf","\x95","\xba","\xb8")) return Running;
	if (inName==HX_HCSTRING("Standing","\xec","\x01","\x30","\xc4")) return Standing;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Running","\xdf","\x95","\xba","\xb8"),
	HX_HCSTRING("Standing","\xec","\x01","\x30","\xc4"),
	HX_HCSTRING("Attacking","\xfa","\x7d","\x34","\x62"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(State_obj::Attacking,"Attacking");
	HX_MARK_MEMBER_NAME(State_obj::Running,"Running");
	HX_MARK_MEMBER_NAME(State_obj::Standing,"Standing");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(State_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(State_obj::Attacking,"Attacking");
	HX_VISIT_MEMBER_NAME(State_obj::Running,"Running");
	HX_VISIT_MEMBER_NAME(State_obj::Standing,"Standing");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class State_obj::__mClass;

Dynamic __Create_State_obj() { return new State_obj; }

void State_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("State","\xf1","\xe5","\x38","\x17"), hx::TCanCast< State_obj >,sStaticFields,sMemberFields,
	&__Create_State_obj, &__Create,
	&super::__SGetClass(), &CreateState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void State_obj::__boot()
{
hx::Static(Attacking) = hx::CreateEnum< State_obj >(HX_HCSTRING("Attacking","\xfa","\x7d","\x34","\x62"),2);
hx::Static(Running) = hx::CreateEnum< State_obj >(HX_HCSTRING("Running","\xdf","\x95","\xba","\xb8"),0);
hx::Static(Standing) = hx::CreateEnum< State_obj >(HX_HCSTRING("Standing","\xec","\x01","\x30","\xc4"),1);
}


