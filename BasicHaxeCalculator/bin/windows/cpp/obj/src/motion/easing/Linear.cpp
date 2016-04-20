#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_motion_easing_LinearEaseNone
#include <motion/easing/LinearEaseNone.h>
#endif
namespace motion{
namespace easing{

Void Linear_obj::__construct()
{
	return null();
}

//Linear_obj::~Linear_obj() { }

Dynamic Linear_obj::__CreateEmpty() { return  new Linear_obj; }
hx::ObjectPtr< Linear_obj > Linear_obj::__new()
{  hx::ObjectPtr< Linear_obj > _result_ = new Linear_obj();
	_result_->__construct();
	return _result_;}

Dynamic Linear_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Linear_obj > _result_ = new Linear_obj();
	_result_->__construct();
	return _result_;}

::motion::easing::IEasing Linear_obj::get_easeNone( ){
	HX_STACK_FRAME("motion.easing.Linear","get_easeNone",0x49c89dcd,"motion.easing.Linear.get_easeNone","motion/easing/Linear.hx",17,0xd271eb6e)
	HX_STACK_LINE(19)
	::motion::easing::LinearEaseNone tmp = ::motion::easing::LinearEaseNone_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Linear_obj,get_easeNone,return )


Linear_obj::Linear_obj()
{
}

bool Linear_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"easeNone") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeNone(); return true; } }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_easeNone") ) { outValue = get_easeNone_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Linear_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Linear_obj::__mClass,"__mClass");
};

#endif

hx::Class Linear_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_easeNone","\xcf","\x0d","\x09","\x5e"),
	::String(null()) };

void Linear_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.Linear","\x30","\x3f","\xfb","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Linear_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Linear_obj >;
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
