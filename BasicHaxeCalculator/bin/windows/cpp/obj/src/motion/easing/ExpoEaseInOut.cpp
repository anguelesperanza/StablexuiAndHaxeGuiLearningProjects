#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_easing_ExpoEaseInOut
#include <motion/easing/ExpoEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ExpoEaseInOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.ExpoEaseInOut","new",0x06cb1550,"motion.easing.ExpoEaseInOut.new","motion/easing/Expo.hx",73,0xaf90d701)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ExpoEaseInOut_obj::~ExpoEaseInOut_obj() { }

Dynamic ExpoEaseInOut_obj::__CreateEmpty() { return  new ExpoEaseInOut_obj; }
hx::ObjectPtr< ExpoEaseInOut_obj > ExpoEaseInOut_obj::__new()
{  hx::ObjectPtr< ExpoEaseInOut_obj > _result_ = new ExpoEaseInOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExpoEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExpoEaseInOut_obj > _result_ = new ExpoEaseInOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ExpoEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

ExpoEaseInOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< ExpoEaseInOut_obj >(this); }
Float ExpoEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.ExpoEaseInOut","calculate",0x6ecc2e56,"motion.easing.ExpoEaseInOut.calculate","motion/easing/Expo.hx",80,0xaf90d701)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(82)
	bool tmp = (k == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(82)
		return (int)0;
	}
	HX_STACK_LINE(83)
	bool tmp1 = (k == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	if ((tmp1)){
		HX_STACK_LINE(83)
		return (int)1;
	}
	HX_STACK_LINE(84)
	Float tmp2 = ((Float)0.5);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(84)
	Float tmp3 = hx::DivEq(k,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(84)
	bool tmp4 = (tmp3 < ((Float)1.0));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	if ((tmp4)){
		HX_STACK_LINE(85)
		Float tmp5 = (k - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		Float tmp6 = ((int)10 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(85)
		Float tmp7 = ::Math_obj::pow((int)2,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(85)
		Float tmp8 = (((Float)0.5) * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(85)
		return tmp8;
	}
	HX_STACK_LINE(87)
	int tmp5 = (int)-10;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(87)
	Float tmp6 = --(k);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(87)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(87)
	Float tmp8 = ::Math_obj::pow((int)2,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(87)
	Float tmp9 = ((int)2 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(87)
	Float tmp10 = (((Float)0.5) * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(87)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC1(ExpoEaseInOut_obj,calculate,return )

Float ExpoEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.ExpoEaseInOut","ease",0xe4f198fe,"motion.easing.ExpoEaseInOut.ease","motion/easing/Expo.hx",92,0xaf90d701)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(94)
	bool tmp = (t == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	if ((tmp)){
		HX_STACK_LINE(95)
		Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		return tmp1;
	}
	HX_STACK_LINE(97)
	bool tmp1 = (t == d);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	if ((tmp1)){
		HX_STACK_LINE(98)
		Float tmp2 = (b + c);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		return tmp2;
	}
	HX_STACK_LINE(100)
	Float tmp2 = (Float(d) / Float(((Float)2.0)));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	Float tmp3 = hx::DivEq(t,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	bool tmp4 = (tmp3 < ((Float)1.0));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(100)
	if ((tmp4)){
		HX_STACK_LINE(101)
		Float tmp5 = (Float(c) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(101)
		Float tmp6 = (t - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(101)
		Float tmp7 = ((int)10 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		Float tmp8 = ::Math_obj::pow((int)2,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(101)
		Float tmp9 = (tmp5 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(101)
		Float tmp10 = b;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(101)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(101)
		return tmp11;
	}
	HX_STACK_LINE(103)
	Float tmp5 = (Float(c) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(103)
	int tmp6 = (int)-10;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(103)
	Float tmp7 = --(t);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(103)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(103)
	Float tmp9 = ::Math_obj::pow((int)2,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(103)
	Float tmp10 = ((int)2 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(103)
	Float tmp11 = (tmp5 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(103)
	Float tmp12 = b;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(103)
	Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(103)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC4(ExpoEaseInOut_obj,ease,return )


ExpoEaseInOut_obj::ExpoEaseInOut_obj()
{
}

Dynamic ExpoEaseInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(ExpoEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpoEaseInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class ExpoEaseInOut_obj::__mClass;

void ExpoEaseInOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.ExpoEaseInOut","\x5e","\x6d","\x2a","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExpoEaseInOut_obj >;
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
