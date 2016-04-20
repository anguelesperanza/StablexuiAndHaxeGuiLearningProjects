#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Sine
#include <motion/easing/Sine.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseIn
#include <motion/easing/SineEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseInOut
#include <motion/easing/SineEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseOut
#include <motion/easing/SineEaseOut.h>
#endif
namespace motion{
namespace easing{

Void Sine_obj::__construct()
{
	return null();
}

//Sine_obj::~Sine_obj() { }

Dynamic Sine_obj::__CreateEmpty() { return  new Sine_obj; }
hx::ObjectPtr< Sine_obj > Sine_obj::__new()
{  hx::ObjectPtr< Sine_obj > _result_ = new Sine_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sine_obj > _result_ = new Sine_obj();
	_result_->__construct();
	return _result_;}

::motion::easing::IEasing Sine_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Sine","get_easeIn",0x24458d12,"motion.easing.Sine.get_easeIn","motion/easing/Sine.hx",18,0xc8f9a0c6)
	HX_STACK_LINE(20)
	::motion::easing::SineEaseIn tmp = ::motion::easing::SineEaseIn_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sine_obj,get_easeIn,return )

::motion::easing::IEasing Sine_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Sine","get_easeInOut",0x5412c29c,"motion.easing.Sine.get_easeInOut","motion/easing/Sine.hx",25,0xc8f9a0c6)
	HX_STACK_LINE(27)
	::motion::easing::SineEaseInOut tmp = ::motion::easing::SineEaseInOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sine_obj,get_easeInOut,return )

::motion::easing::IEasing Sine_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Sine","get_easeOut",0x989a76c1,"motion.easing.Sine.get_easeOut","motion/easing/Sine.hx",32,0xc8f9a0c6)
	HX_STACK_LINE(34)
	::motion::easing::SineEaseOut tmp = ::motion::easing::SineEaseOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sine_obj,get_easeOut,return )


Sine_obj::Sine_obj()
{
}

bool Sine_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Sine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sine_obj::__mClass,"__mClass");
};

#endif

hx::Class Sine_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_easeIn","\x3c","\x93","\xc1","\x78"),
	HX_HCSTRING("get_easeInOut","\xb2","\x72","\x21","\x08"),
	HX_HCSTRING("get_easeOut","\x57","\xd5","\xa3","\x30"),
	::String(null()) };

void Sine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.Sine","\xd8","\x0a","\x40","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sine_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sine_obj >;
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
