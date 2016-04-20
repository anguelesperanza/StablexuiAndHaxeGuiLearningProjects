#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Quart
#include <motion/easing/Quart.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseIn
#include <motion/easing/QuartEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseInOut
#include <motion/easing/QuartEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseOut
#include <motion/easing/QuartEaseOut.h>
#endif
namespace motion{
namespace easing{

Void Quart_obj::__construct()
{
	return null();
}

//Quart_obj::~Quart_obj() { }

Dynamic Quart_obj::__CreateEmpty() { return  new Quart_obj; }
hx::ObjectPtr< Quart_obj > Quart_obj::__new()
{  hx::ObjectPtr< Quart_obj > _result_ = new Quart_obj();
	_result_->__construct();
	return _result_;}

Dynamic Quart_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quart_obj > _result_ = new Quart_obj();
	_result_->__construct();
	return _result_;}

::motion::easing::IEasing Quart_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Quart","get_easeIn",0x186bc256,"motion.easing.Quart.get_easeIn","motion/easing/Quart.hx",19,0x09ba724a)
	HX_STACK_LINE(21)
	::motion::easing::QuartEaseIn tmp = ::motion::easing::QuartEaseIn_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quart_obj,get_easeIn,return )

::motion::easing::IEasing Quart_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Quart","get_easeInOut",0x30ee2fd8,"motion.easing.Quart.get_easeInOut","motion/easing/Quart.hx",26,0x09ba724a)
	HX_STACK_LINE(28)
	::motion::easing::QuartEaseInOut tmp = ::motion::easing::QuartEaseInOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quart_obj,get_easeInOut,return )

::motion::easing::IEasing Quart_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Quart","get_easeOut",0x45e2dcfd,"motion.easing.Quart.get_easeOut","motion/easing/Quart.hx",33,0x09ba724a)
	HX_STACK_LINE(35)
	::motion::easing::QuartEaseOut tmp = ::motion::easing::QuartEaseOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quart_obj,get_easeOut,return )


Quart_obj::Quart_obj()
{
}

bool Quart_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Quart_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quart_obj::__mClass,"__mClass");
};

#endif

hx::Class Quart_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_easeIn","\x3c","\x93","\xc1","\x78"),
	HX_HCSTRING("get_easeInOut","\xb2","\x72","\x21","\x08"),
	HX_HCSTRING("get_easeOut","\x57","\xd5","\xa3","\x30"),
	::String(null()) };

void Quart_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.Quart","\x14","\x07","\xe1","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Quart_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Quart_obj >;
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
