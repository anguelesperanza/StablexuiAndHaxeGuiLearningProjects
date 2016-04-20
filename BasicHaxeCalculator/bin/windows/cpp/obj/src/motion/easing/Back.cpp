#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Back
#include <motion/easing/Back.h>
#endif
#ifndef INCLUDED_motion_easing_BackEaseIn
#include <motion/easing/BackEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_BackEaseInOut
#include <motion/easing/BackEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_BackEaseOut
#include <motion/easing/BackEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void Back_obj::__construct()
{
	return null();
}

//Back_obj::~Back_obj() { }

Dynamic Back_obj::__CreateEmpty() { return  new Back_obj; }
hx::ObjectPtr< Back_obj > Back_obj::__new()
{  hx::ObjectPtr< Back_obj > _result_ = new Back_obj();
	_result_->__construct();
	return _result_;}

Dynamic Back_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Back_obj > _result_ = new Back_obj();
	_result_->__construct();
	return _result_;}

::motion::easing::IEasing Back_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Back","get_easeIn",0xb55c8378,"motion.easing.Back.get_easeIn","motion/easing/Back.hx",19,0x81c0c12c)
	HX_STACK_LINE(21)
	::motion::easing::BackEaseIn tmp = ::motion::easing::BackEaseIn_obj::__new(((Float)1.70158));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Back_obj,get_easeIn,return )

::motion::easing::IEasing Back_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Back","get_easeInOut",0xf2a54ff6,"motion.easing.Back.get_easeInOut","motion/easing/Back.hx",26,0x81c0c12c)
	HX_STACK_LINE(28)
	::motion::easing::BackEaseInOut tmp = ::motion::easing::BackEaseInOut_obj::__new(((Float)1.70158));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Back_obj,get_easeInOut,return )

::motion::easing::IEasing Back_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Back","get_easeOut",0xfb9b199b,"motion.easing.Back.get_easeOut","motion/easing/Back.hx",33,0x81c0c12c)
	HX_STACK_LINE(35)
	::motion::easing::BackEaseOut tmp = ::motion::easing::BackEaseOut_obj::__new(((Float)1.70158));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Back_obj,get_easeOut,return )


Back_obj::Back_obj()
{
}

bool Back_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Back_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Back_obj::__mClass,"__mClass");
};

#endif

hx::Class Back_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_easeIn","\x3c","\x93","\xc1","\x78"),
	HX_HCSTRING("get_easeInOut","\xb2","\x72","\x21","\x08"),
	HX_HCSTRING("get_easeOut","\x57","\xd5","\xa3","\x30"),
	::String(null()) };

void Back_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.Back","\xb2","\x4e","\xfd","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Back_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Back_obj >;
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
