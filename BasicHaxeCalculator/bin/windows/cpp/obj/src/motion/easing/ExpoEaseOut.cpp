#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_easing_ExpoEaseOut
#include <motion/easing/ExpoEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ExpoEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.ExpoEaseOut","new",0x54886b75,"motion.easing.ExpoEaseOut.new","motion/easing/Expo.hx",114,0xaf90d701)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ExpoEaseOut_obj::~ExpoEaseOut_obj() { }

Dynamic ExpoEaseOut_obj::__CreateEmpty() { return  new ExpoEaseOut_obj; }
hx::ObjectPtr< ExpoEaseOut_obj > ExpoEaseOut_obj::__new()
{  hx::ObjectPtr< ExpoEaseOut_obj > _result_ = new ExpoEaseOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExpoEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExpoEaseOut_obj > _result_ = new ExpoEaseOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ExpoEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

ExpoEaseOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< ExpoEaseOut_obj >(this); }
Float ExpoEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.ExpoEaseOut","calculate",0x60c82e3b,"motion.easing.ExpoEaseOut.calculate","motion/easing/Expo.hx",121,0xaf90d701)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(123)
	bool tmp = (k == (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	if ((tmp)){
		HX_STACK_LINE(123)
		tmp1 = (int)1;
	}
	else{
		HX_STACK_LINE(123)
		int tmp2 = (int)-10;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		Float tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		Float tmp5 = ::Math_obj::pow((int)2,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		tmp1 = ((int)1 - tmp5);
	}
	HX_STACK_LINE(123)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ExpoEaseOut_obj,calculate,return )

Float ExpoEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.ExpoEaseOut","ease",0x9cdfa339,"motion.easing.ExpoEaseOut.ease","motion/easing/Expo.hx",128,0xaf90d701)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(130)
	bool tmp = (t == d);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	if ((tmp)){
		HX_STACK_LINE(130)
		tmp1 = (b + c);
	}
	else{
		HX_STACK_LINE(130)
		Float tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		int tmp3 = (int)-10;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		Float tmp6 = d;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		Float tmp8 = ::Math_obj::pow((int)2,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		Float tmp9 = ((int)1 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(130)
		Float tmp10 = (tmp2 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(130)
		Float tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(130)
		tmp1 = (tmp10 + tmp11);
	}
	HX_STACK_LINE(130)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC4(ExpoEaseOut_obj,ease,return )


ExpoEaseOut_obj::ExpoEaseOut_obj()
{
}

Dynamic ExpoEaseOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(ExpoEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpoEaseOut_obj::__mClass,"__mClass");
};

#endif

hx::Class ExpoEaseOut_obj::__mClass;

void ExpoEaseOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.ExpoEaseOut","\x03","\x8d","\xce","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExpoEaseOut_obj >;
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
