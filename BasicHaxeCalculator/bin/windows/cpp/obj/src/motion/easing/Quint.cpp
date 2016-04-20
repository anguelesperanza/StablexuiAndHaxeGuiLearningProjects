#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Quint
#include <motion/easing/Quint.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseIn
#include <motion/easing/QuintEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseInOut
#include <motion/easing/QuintEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseOut
#include <motion/easing/QuintEaseOut.h>
#endif
namespace motion{
namespace easing{

Void Quint_obj::__construct()
{
	return null();
}

//Quint_obj::~Quint_obj() { }

Dynamic Quint_obj::__CreateEmpty() { return  new Quint_obj; }
hx::ObjectPtr< Quint_obj > Quint_obj::__new()
{  hx::ObjectPtr< Quint_obj > _result_ = new Quint_obj();
	_result_->__construct();
	return _result_;}

Dynamic Quint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Quint_obj > _result_ = new Quint_obj();
	_result_->__construct();
	return _result_;}

::motion::easing::IEasing Quint_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Quint","get_easeIn",0x16d4674a,"motion.easing.Quint.get_easeIn","motion/easing/Quint.hx",19,0xeefb033e)
	HX_STACK_LINE(21)
	::motion::easing::QuintEaseIn tmp = ::motion::easing::QuintEaseIn_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quint_obj,get_easeIn,return )

::motion::easing::IEasing Quint_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Quint","get_easeInOut",0x2bcc1b64,"motion.easing.Quint.get_easeInOut","motion/easing/Quint.hx",26,0xeefb033e)
	HX_STACK_LINE(28)
	::motion::easing::QuintEaseInOut tmp = ::motion::easing::QuintEaseInOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quint_obj,get_easeInOut,return )

::motion::easing::IEasing Quint_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Quint","get_easeOut",0xe30a8d89,"motion.easing.Quint.get_easeOut","motion/easing/Quint.hx",33,0xeefb033e)
	HX_STACK_LINE(35)
	::motion::easing::QuintEaseOut tmp = ::motion::easing::QuintEaseOut_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Quint_obj,get_easeOut,return )


Quint_obj::Quint_obj()
{
}

bool Quint_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(Quint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quint_obj::__mClass,"__mClass");
};

#endif

hx::Class Quint_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_easeIn","\x3c","\x93","\xc1","\x78"),
	HX_HCSTRING("get_easeInOut","\xb2","\x72","\x21","\x08"),
	HX_HCSTRING("get_easeOut","\x57","\xd5","\xa3","\x30"),
	::String(null()) };

void Quint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.Quint","\xa0","\x15","\xe7","\x40");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Quint_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Quint_obj >;
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
