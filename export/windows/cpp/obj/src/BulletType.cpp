#include <hxcpp.h>

#ifndef INCLUDED_BulletType
#include <BulletType.h>
#endif

::BulletType BulletType_obj::GATLING;

::BulletType BulletType_obj::PISTOL;

::BulletType BulletType_obj::ROCKET;

::BulletType BulletType_obj::TESLA;

HX_DEFINE_CREATE_ENUM(BulletType_obj)

int BulletType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("GATLING","\xf0","\xfd","\xc2","\x15")) return 1;
	if (inName==HX_HCSTRING("PISTOL","\x77","\xee","\xe9","\x3b")) return 0;
	if (inName==HX_HCSTRING("ROCKET","\x54","\xdb","\x6d","\x72")) return 3;
	if (inName==HX_HCSTRING("TESLA","\xb7","\xb0","\x83","\x8b")) return 2;
	return super::__FindIndex(inName);
}

int BulletType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("GATLING","\xf0","\xfd","\xc2","\x15")) return 0;
	if (inName==HX_HCSTRING("PISTOL","\x77","\xee","\xe9","\x3b")) return 0;
	if (inName==HX_HCSTRING("ROCKET","\x54","\xdb","\x6d","\x72")) return 0;
	if (inName==HX_HCSTRING("TESLA","\xb7","\xb0","\x83","\x8b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic BulletType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("GATLING","\xf0","\xfd","\xc2","\x15")) return GATLING;
	if (inName==HX_HCSTRING("PISTOL","\x77","\xee","\xe9","\x3b")) return PISTOL;
	if (inName==HX_HCSTRING("ROCKET","\x54","\xdb","\x6d","\x72")) return ROCKET;
	if (inName==HX_HCSTRING("TESLA","\xb7","\xb0","\x83","\x8b")) return TESLA;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("PISTOL","\x77","\xee","\xe9","\x3b"),
	HX_HCSTRING("GATLING","\xf0","\xfd","\xc2","\x15"),
	HX_HCSTRING("TESLA","\xb7","\xb0","\x83","\x8b"),
	HX_HCSTRING("ROCKET","\x54","\xdb","\x6d","\x72"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BulletType_obj::GATLING,"GATLING");
	HX_MARK_MEMBER_NAME(BulletType_obj::PISTOL,"PISTOL");
	HX_MARK_MEMBER_NAME(BulletType_obj::ROCKET,"ROCKET");
	HX_MARK_MEMBER_NAME(BulletType_obj::TESLA,"TESLA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BulletType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BulletType_obj::GATLING,"GATLING");
	HX_VISIT_MEMBER_NAME(BulletType_obj::PISTOL,"PISTOL");
	HX_VISIT_MEMBER_NAME(BulletType_obj::ROCKET,"ROCKET");
	HX_VISIT_MEMBER_NAME(BulletType_obj::TESLA,"TESLA");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class BulletType_obj::__mClass;

Dynamic __Create_BulletType_obj() { return new BulletType_obj; }

void BulletType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("BulletType","\x3c","\xfe","\x46","\x0c"), hx::TCanCast< BulletType_obj >,sStaticFields,sMemberFields,
	&__Create_BulletType_obj, &__Create,
	&super::__SGetClass(), &CreateBulletType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void BulletType_obj::__boot()
{
hx::Static(GATLING) = hx::CreateEnum< BulletType_obj >(HX_HCSTRING("GATLING","\xf0","\xfd","\xc2","\x15"),1);
hx::Static(PISTOL) = hx::CreateEnum< BulletType_obj >(HX_HCSTRING("PISTOL","\x77","\xee","\xe9","\x3b"),0);
hx::Static(ROCKET) = hx::CreateEnum< BulletType_obj >(HX_HCSTRING("ROCKET","\x54","\xdb","\x6d","\x72"),3);
hx::Static(TESLA) = hx::CreateEnum< BulletType_obj >(HX_HCSTRING("TESLA","\xb7","\xb0","\x83","\x8b"),2);
}


