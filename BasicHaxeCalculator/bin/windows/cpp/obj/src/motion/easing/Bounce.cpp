#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Bounce
#include <motion/easing/Bounce.h>
#endif
#ifndef INCLUDED_motion_easing_BounceEaseIn
#include <motion/easing/BounceEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_BounceEaseInOut
#include <motion/easing/BounceEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_BounceEaseOut
#include <motion/easing/BounceEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void Bounce_obj::__construct()
{
	return null();
}

//Bounce_obj::~Bounce_obj() { }

Dynamic Bounce_obj::__CreateEmpty() { return  new Bounce_obj; }
hx::ObjectPtr< Bounce_obj > Bounce_obj::__new()
{  hx::ObjectPtr< Bounce_obj > _result_ = new Bounce_obj();
	_result_->__construct();
	return _result_;}

Dynamic Bounce_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bounce_obj > _result_ = new Bounce_obj();
	_result_->__construct();
	return _result_;}

::motion::easing::IEasing Bounce_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Bounce","get_easeIn",0x75d900f7,"motion.easing.Bounce.get_easeIn","motion/easing/Bounce.hx",18,0xc6b45fab)
	HX_STACK_LINE(20)
	::motion::easing::BounceEaseIn tmp = ::motion::easing::BounceEaseIn_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bounce_obj,get_easeIn,return )

::motion::easing::IEasing Bounce_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Bounce","get_easeInOut",0x9b470bd7,"motion.easing.Bounce.get_easeInOut","motion/easing/Bounce.hx",25,0xc6b45fab)
	HX_STACK_LINE(27)
	::motion::easing::BounceEaseInOut tmp = ::motion::easing::BounceEaseInOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bounce_obj,get_easeInOut,return )

::motion::easing::IEasing Bounce_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Bounce","get_easeOut",0xa80c6b3c,"motion.easing.Bounce.get_easeOut","motion/easing/Bounce.hx",32,0xc6b45fab)
	HX_STACK_LINE(34)
	::motion::easing::BounceEaseOut tmp = ::motion::easing::BounceEaseOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Bounce_obj,get_easeOut,return )


Bounce_obj::Bounce_obj()
{
}

bool Bounce_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Bounce_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bounce_obj::__mClass,"__mClass");
};

#endif

hx::Class Bounce_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_easeIn","\x3c","\x93","\xc1","\x78"),
	HX_HCSTRING("get_easeInOut","\xb2","\x72","\x21","\x08"),
	HX_HCSTRING("get_easeOut","\x57","\xd5","\xa3","\x30"),
	::String(null()) };

void Bounce_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.Bounce","\xd3","\x72","\x78","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bounce_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Bounce_obj >;
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
