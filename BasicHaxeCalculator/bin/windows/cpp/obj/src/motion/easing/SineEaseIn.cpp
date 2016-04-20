#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseIn
#include <motion/easing/SineEaseIn.h>
#endif
namespace motion{
namespace easing{

Void SineEaseIn_obj::__construct()
{
HX_STACK_FRAME("motion.easing.SineEaseIn","new",0x942406dd,"motion.easing.SineEaseIn.new","motion/easing/Sine.hx",45,0xc8f9a0c6)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SineEaseIn_obj::~SineEaseIn_obj() { }

Dynamic SineEaseIn_obj::__CreateEmpty() { return  new SineEaseIn_obj; }
hx::ObjectPtr< SineEaseIn_obj > SineEaseIn_obj::__new()
{  hx::ObjectPtr< SineEaseIn_obj > _result_ = new SineEaseIn_obj();
	_result_->__construct();
	return _result_;}

Dynamic SineEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SineEaseIn_obj > _result_ = new SineEaseIn_obj();
	_result_->__construct();
	return _result_;}

hx::Object *SineEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

SineEaseIn_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< SineEaseIn_obj >(this); }
Float SineEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.SineEaseIn","calculate",0x2a4247a3,"motion.easing.SineEaseIn.calculate","motion/easing/Sine.hx",52,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(54)
	Float tmp = k;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	Float tmp1 = ::Math_obj::PI;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(54)
	Float tmp4 = ::Math_obj::cos(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(54)
	Float tmp5 = ((int)1 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(54)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(SineEaseIn_obj,calculate,return )

Float SineEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.SineEaseIn","ease",0x056c02d1,"motion.easing.SineEaseIn.ease","motion/easing/Sine.hx",59,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(61)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	Float tmp2 = (Float(t) / Float(d));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	Float tmp4 = (Float(tmp3) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(61)
	Float tmp5 = (tmp2 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(61)
	Float tmp6 = ::Math_obj::cos(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(61)
	Float tmp7 = (tmp1 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(61)
	Float tmp8 = c;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(61)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(61)
	Float tmp10 = b;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(61)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(61)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC4(SineEaseIn_obj,ease,return )


SineEaseIn_obj::SineEaseIn_obj()
{
}

Dynamic SineEaseIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(SineEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineEaseIn_obj::__mClass,"__mClass");
};

#endif

hx::Class SineEaseIn_obj::__mClass;

void SineEaseIn_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.SineEaseIn","\x6b","\x54","\xce","\x31");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SineEaseIn_obj >;
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
