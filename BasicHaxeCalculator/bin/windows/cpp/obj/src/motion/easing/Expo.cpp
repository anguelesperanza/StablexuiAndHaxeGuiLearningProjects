#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Expo
#include <motion/easing/Expo.h>
#endif
#ifndef INCLUDED_motion_easing_ExpoEaseIn
#include <motion/easing/ExpoEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_ExpoEaseInOut
#include <motion/easing/ExpoEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_ExpoEaseOut
#include <motion/easing/ExpoEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void Expo_obj::__construct()
{
	return null();
}

//Expo_obj::~Expo_obj() { }

Dynamic Expo_obj::__CreateEmpty() { return  new Expo_obj; }
hx::ObjectPtr< Expo_obj > Expo_obj::__new()
{  hx::ObjectPtr< Expo_obj > _result_ = new Expo_obj();
	_result_->__construct();
	return _result_;}

Dynamic Expo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Expo_obj > _result_ = new Expo_obj();
	_result_->__construct();
	return _result_;}

::motion::easing::IEasing Expo_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Expo","get_easeIn",0x83a5f64d,"motion.easing.Expo.get_easeIn","motion/easing/Expo.hx",19,0xaf90d701)
	HX_STACK_LINE(21)
	::motion::easing::ExpoEaseIn tmp = ::motion::easing::ExpoEaseIn_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Expo_obj,get_easeIn,return )

::motion::easing::IEasing Expo_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Expo","get_easeInOut",0x5f199041,"motion.easing.Expo.get_easeInOut","motion/easing/Expo.hx",26,0xaf90d701)
	HX_STACK_LINE(28)
	::motion::easing::ExpoEaseInOut tmp = ::motion::easing::ExpoEaseInOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Expo_obj,get_easeInOut,return )

::motion::easing::IEasing Expo_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Expo","get_easeOut",0xad962126,"motion.easing.Expo.get_easeOut","motion/easing/Expo.hx",33,0xaf90d701)
	HX_STACK_LINE(35)
	::motion::easing::ExpoEaseOut tmp = ::motion::easing::ExpoEaseOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Expo_obj,get_easeOut,return )


Expo_obj::Expo_obj()
{
}

bool Expo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeIn(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeOut(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeInOut(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_easeIn") ) { outValue = get_easeIn_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_easeOut") ) { outValue = get_easeOut_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_easeInOut") ) { outValue = get_easeInOut_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Expo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Expo_obj::__mClass,"__mClass");
};

#endif

hx::Class Expo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_easeIn","\x3c","\x93","\xc1","\x78"),
	HX_HCSTRING("get_easeInOut","\xb2","\x72","\x21","\x08"),
	HX_HCSTRING("get_easeOut","\x57","\xd5","\xa3","\x30"),
	::String(null()) };

void Expo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.Expo","\xbd","\x71","\x0a","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Expo_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Expo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
