#include <hxcpp.h>

#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace actuators{


static ::String sMemberFields[] = {
	HX_HCSTRING("autoVisible","\xc3","\x1c","\x08","\x89"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onRepeat","\xda","\x8d","\x29","\xe6"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("reflect","\x3d","\x84","\x29","\xe9"),
	HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("smartRotation","\x67","\xa0","\x05","\x41"),
	HX_HCSTRING("snapping","\xbc","\x35","\xb9","\x1f"),
	HX_HCSTRING("onPause","\x57","\x75","\x95","\x53"),
	HX_HCSTRING("onResume","\x2c","\x60","\x31","\xe8"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IGenericActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IGenericActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class IGenericActuator_obj::__mClass;

void IGenericActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.actuators.IGenericActuator","\x33","\xb5","\xb8","\x01");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IGenericActuator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace actuators
