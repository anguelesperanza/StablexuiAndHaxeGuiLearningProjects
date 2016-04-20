#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Cubic
#include <motion/easing/Cubic.h>
#endif
#ifndef INCLUDED_motion_easing_CubicEaseIn
#include <motion/easing/CubicEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_CubicEaseInOut
#include <motion/easing/CubicEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_CubicEaseOut
#include <motion/easing/CubicEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void Cubic_obj::__construct()
{
	return null();
}

//Cubic_obj::~Cubic_obj() { }

Dynamic Cubic_obj::__CreateEmpty() { return  new Cubic_obj; }
hx::ObjectPtr< Cubic_obj > Cubic_obj::__new()
{  hx::ObjectPtr< Cubic_obj > _result_ = new Cubic_obj();
	_result_->__construct();
	return _result_;}

Dynamic Cubic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cubic_obj > _result_ = new Cubic_obj();
	_result_->__construct();
	return _result_;}

::motion::easing::IEasing Cubic_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Cubic","get_easeIn",0x24fc24eb,"motion.easing.Cubic.get_easeIn","motion/easing/Cubic.hx",19,0x157bb7df)
	HX_STACK_LINE(21)
	::motion::easing::CubicEaseIn tmp = ::motion::easing::CubicEaseIn_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cubic_obj,get_easeIn,return )

::motion::easing::IEasing Cubic_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Cubic","get_easeInOut",0x87c3d863,"motion.easing.Cubic.get_easeInOut","motion/easing/Cubic.hx",26,0x157bb7df)
	HX_STACK_LINE(28)
	::motion::easing::CubicEaseInOut tmp = ::motion::easing::CubicEaseInOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cubic_obj,get_easeInOut,return )

::motion::easing::IEasing Cubic_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Cubic","get_easeOut",0x37a8bcc8,"motion.easing.Cubic.get_easeOut","motion/easing/Cubic.hx",33,0x157bb7df)
	HX_STACK_LINE(35)
	::motion::easing::CubicEaseOut tmp = ::motion::easing::CubicEaseOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Cubic_obj,get_easeOut,return )


Cubic_obj::Cubic_obj()
{
}

bool Cubic_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Cubic_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cubic_obj::__mClass,"__mClass");
};

#endif

hx::Class Cubic_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_easeIn","\x3c","\x93","\xc1","\x78"),
	HX_HCSTRING("get_easeInOut","\xb2","\x72","\x21","\x08"),
	HX_HCSTRING("get_easeOut","\x57","\xd5","\xa3","\x30"),
	::String(null()) };

void Cubic_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.Cubic","\x5f","\xa2","\x45","\x31");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Cubic_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Cubic_obj >;
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
