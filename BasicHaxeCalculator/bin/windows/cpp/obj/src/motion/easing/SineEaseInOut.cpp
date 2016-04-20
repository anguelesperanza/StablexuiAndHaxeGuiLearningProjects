#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseInOut
#include <motion/easing/SineEaseInOut.h>
#endif
namespace motion{
namespace easing{

Void SineEaseInOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.SineEaseInOut","new",0xbf91a755,"motion.easing.SineEaseInOut.new","motion/easing/Sine.hx",72,0xc8f9a0c6)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SineEaseInOut_obj::~SineEaseInOut_obj() { }

Dynamic SineEaseInOut_obj::__CreateEmpty() { return  new SineEaseInOut_obj; }
hx::ObjectPtr< SineEaseInOut_obj > SineEaseInOut_obj::__new()
{  hx::ObjectPtr< SineEaseInOut_obj > _result_ = new SineEaseInOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic SineEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SineEaseInOut_obj > _result_ = new SineEaseInOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *SineEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

SineEaseInOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< SineEaseInOut_obj >(this); }
Float SineEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.SineEaseInOut","calculate",0x0db7921b,"motion.easing.SineEaseInOut.calculate","motion/easing/Sine.hx",79,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(81)
	Float tmp = ::Math_obj::PI;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	Float tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(81)
	Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(81)
	Float tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(81)
	Float tmp5 = -(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(81)
	Float tmp6 = (Float(tmp5) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(81)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(SineEaseInOut_obj,calculate,return )

Float SineEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.SineEaseInOut","ease",0xd9eacb59,"motion.easing.SineEaseInOut.ease","motion/easing/Sine.hx",86,0xc8f9a0c6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(88)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	Float tmp2 = (Float(tmp1) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(88)
	Float tmp3 = ::Math_obj::PI;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(88)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(88)
	Float tmp6 = d;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(88)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(88)
	Float tmp8 = ::Math_obj::cos(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(88)
	Float tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(88)
	Float tmp10 = (tmp2 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(88)
	Float tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(88)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(88)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC4(SineEaseInOut_obj,ease,return )


SineEaseInOut_obj::SineEaseInOut_obj()
{
}

Dynamic SineEaseInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(SineEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineEaseInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class SineEaseInOut_obj::__mClass;

void SineEaseInOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.SineEaseInOut","\xe3","\x58","\xd4","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SineEaseInOut_obj >;
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
