#include <hxcpp.h>

#ifndef INCLUDED_EnemyType
#include <EnemyType.h>
#endif

::EnemyType EnemyType_obj::NAZI_SHEEP;

::EnemyType EnemyType_obj::NAZI_SHEEP_FLYING;

HX_DEFINE_CREATE_ENUM(EnemyType_obj)

int EnemyType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("NAZI_SHEEP","\xde","\x8c","\x4c","\x13")) return 0;
	if (inName==HX_HCSTRING("NAZI_SHEEP_FLYING","\xd0","\xfa","\x4d","\xc7")) return 1;
	return super::__FindIndex(inName);
}

int EnemyType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("NAZI_SHEEP","\xde","\x8c","\x4c","\x13")) return 0;
	if (inName==HX_HCSTRING("NAZI_SHEEP_FLYING","\xd0","\xfa","\x4d","\xc7")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EnemyType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("NAZI_SHEEP","\xde","\x8c","\x4c","\x13")) return NAZI_SHEEP;
	if (inName==HX_HCSTRING("NAZI_SHEEP_FLYING","\xd0","\xfa","\x4d","\xc7")) return NAZI_SHEEP_FLYING;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NAZI_SHEEP","\xde","\x8c","\x4c","\x13"),
	HX_HCSTRING("NAZI_SHEEP_FLYING","\xd0","\xfa","\x4d","\xc7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnemyType_obj::NAZI_SHEEP,"NAZI_SHEEP");
	HX_MARK_MEMBER_NAME(EnemyType_obj::NAZI_SHEEP_FLYING,"NAZI_SHEEP_FLYING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnemyType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnemyType_obj::NAZI_SHEEP,"NAZI_SHEEP");
	HX_VISIT_MEMBER_NAME(EnemyType_obj::NAZI_SHEEP_FLYING,"NAZI_SHEEP_FLYING");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class EnemyType_obj::__mClass;

Dynamic __Create_EnemyType_obj() { return new EnemyType_obj; }

void EnemyType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("EnemyType","\x02","\xd5","\xfa","\x4e"), hx::TCanCast< EnemyType_obj >,sStaticFields,sMemberFields,
	&__Create_EnemyType_obj, &__Create,
	&super::__SGetClass(), &CreateEnemyType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EnemyType_obj::__boot()
{
hx::Static(NAZI_SHEEP) = hx::CreateEnum< EnemyType_obj >(HX_HCSTRING("NAZI_SHEEP","\xde","\x8c","\x4c","\x13"),0);
hx::Static(NAZI_SHEEP_FLYING) = hx::CreateEnum< EnemyType_obj >(HX_HCSTRING("NAZI_SHEEP_FLYING","\xd0","\xfa","\x4d","\xc7"),1);
}


