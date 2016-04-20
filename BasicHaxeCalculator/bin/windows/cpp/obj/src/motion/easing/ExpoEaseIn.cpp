#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_easing_ExpoEaseIn
#include <motion/easing/ExpoEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ExpoEaseIn_obj::__construct()
{
HX_STACK_FRAME("motion.easing.ExpoEaseIn","new",0x911fde02,"motion.easing.ExpoEaseIn.new","motion/easing/Expo.hx",46,0xaf90d701)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ExpoEaseIn_obj::~ExpoEaseIn_obj() { }

Dynamic ExpoEaseIn_obj::__CreateEmpty() { return  new ExpoEaseIn_obj; }
hx::ObjectPtr< ExpoEaseIn_obj > ExpoEaseIn_obj::__new()
{  hx::ObjectPtr< ExpoEaseIn_obj > _result_ = new ExpoEaseIn_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExpoEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExpoEaseIn_obj > _result_ = new ExpoEaseIn_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ExpoEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

ExpoEaseIn_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< ExpoEaseIn_obj >(this); }
Float ExpoEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.ExpoEaseIn","calculate",0x1ed38888,"motion.easing.ExpoEaseIn.calculate","motion/easing/Expo.hx",53,0xaf90d701)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(55)
	bool tmp = (k == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	if ((tmp)){
		HX_STACK_LINE(55)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(55)
		Float tmp2 = (k - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		Float tmp3 = ((int)10 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		tmp1 = ::Math_obj::pow((int)2,tmp3);
	}
	HX_STACK_LINE(55)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ExpoEaseIn_obj,calculate,return )

Float ExpoEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.ExpoEaseIn","ease",0x64cc6c0c,"motion.easing.ExpoEaseIn.ease","motion/easing/Expo.hx",60,0xaf90d701)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(62)
	bool tmp = (t == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	if ((tmp)){
		HX_STACK_LINE(62)
		tmp1 = b;
	}
	else{
		HX_STACK_LINE(62)
		Float tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		Float tmp3 = (Float(t) / Float(d));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		Float tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		Float tmp5 = ((int)10 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		Float tmp6 = ::Math_obj::pow((int)2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		Float tmp7 = (tmp2 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		Float tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		tmp1 = (tmp7 + tmp8);
	}
	HX_STACK_LINE(62)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC4(ExpoEaseIn_obj,ease,return )


ExpoEaseIn_obj::ExpoEaseIn_obj()
{
}

Dynamic ExpoEaseIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExpoEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpoEaseIn_obj::__mClass,"__mClass");
};

#endif

hx::Class ExpoEaseIn_obj::__mClass;

void ExpoEaseIn_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.ExpoEaseIn","\x10","\x75","\x1c","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExpoEaseIn_obj >;
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
