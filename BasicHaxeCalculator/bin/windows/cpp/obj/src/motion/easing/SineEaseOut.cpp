#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseOut
#include <motion/easing/SineEaseOut.h>
#endif
namespace motion{
namespace easing{

Void SineEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.SineEaseOut","new",0xf528023a,"motion.easing.SineEaseOut.new","motion/easing/Sine.hx",99,0xc8f9a0c6)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SineEaseOut_obj::~SineEaseOut_obj() { }

Dynamic SineEaseOut_obj::__CreateEmpty() { return  new SineEaseOut_obj; }
hx::ObjectPtr< SineEaseOut_obj > SineEaseOut_obj::__new()
{  hx::ObjectPtr< SineEaseOut_obj > _result_ = new SineEaseOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic SineEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SineEaseOut_obj > _result_ = new SineEaseOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *SineEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

SineEaseOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< SineEaseOut_obj >(this); }
Float SineEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.SineEaseOut","calculate",0x5640a6c0,"motion.easing.SineEaseOut.calculate","motion/easing/Sine.hx",106,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(108)
	Float tmp = k;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(108)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(108)
	Float tmp4 = ::Math_obj::sin(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(108)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(SineEaseOut_obj,calculate,return )

Float SineEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.SineEaseOut","ease",0x87e3f8d4,"motion.easing.SineEaseOut.ease","motion/easing/Sine.hx",113,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(115)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	Float tmp1 = (Float(t) / Float(d));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	Float tmp2 = ::Math_obj::PI;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	Float tmp4 = (tmp1 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	Float tmp5 = ::Math_obj::sin(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(115)
	Float tmp6 = (tmp * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(115)
	Float tmp7 = b;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(115)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(115)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC4(SineEaseOut_obj,ease,return )


SineEaseOut_obj::SineEaseOut_obj()
{
}

Dynamic SineEaseOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(SineEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineEaseOut_obj::__mClass,"__mClass");
};

#endif

hx::Class SineEaseOut_obj::__mClass;

void SineEaseOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.SineEaseOut","\x48","\x1d","\xc0","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SineEaseOut_obj >;
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
