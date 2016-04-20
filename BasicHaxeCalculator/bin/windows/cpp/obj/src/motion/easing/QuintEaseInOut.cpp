#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseInOut
#include <motion/easing/QuintEaseInOut.h>
#endif
namespace motion{
namespace easing{

Void QuintEaseInOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.QuintEaseInOut","new",0x97357f8d,"motion.easing.QuintEaseInOut.new","motion/easing/Quint.hx",73,0xeefb033e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuintEaseInOut_obj::~QuintEaseInOut_obj() { }

Dynamic QuintEaseInOut_obj::__CreateEmpty() { return  new QuintEaseInOut_obj; }
hx::ObjectPtr< QuintEaseInOut_obj > QuintEaseInOut_obj::__new()
{  hx::ObjectPtr< QuintEaseInOut_obj > _result_ = new QuintEaseInOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic QuintEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuintEaseInOut_obj > _result_ = new QuintEaseInOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *QuintEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

QuintEaseInOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< QuintEaseInOut_obj >(this); }
Float QuintEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.QuintEaseInOut","calculate",0xf67f6453,"motion.easing.QuintEaseInOut.calculate","motion/easing/Quint.hx",80,0xeefb033e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(82)
	Float tmp = hx::MultEq(k,(int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	bool tmp1 = (tmp < (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	if ((tmp1)){
		HX_STACK_LINE(82)
		Float tmp2 = (((Float)0.5) * k);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		Float tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		Float tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		Float tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		Float tmp9 = k;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(82)
		return tmp10;
	}
	HX_STACK_LINE(83)
	Float tmp2 = hx::SubEq(k,(int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	Float tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	Float tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(83)
	Float tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(83)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(83)
	Float tmp9 = k;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(83)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(83)
	Float tmp11 = (tmp10 + (int)2);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(83)
	Float tmp12 = (((Float)0.5) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(83)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC1(QuintEaseInOut_obj,calculate,return )

Float QuintEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.QuintEaseInOut","ease",0xb1a42421,"motion.easing.QuintEaseInOut.ease","motion/easing/Quint.hx",88,0xeefb033e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(90)
	Float tmp = (Float(d) / Float((int)2));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	Float tmp1 = hx::DivEq(t,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	bool tmp2 = (tmp1 < (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	if ((tmp2)){
		HX_STACK_LINE(91)
		Float tmp3 = (Float(c) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(91)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(91)
		Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(91)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(91)
		Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(91)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(91)
		Float tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(91)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(91)
		Float tmp14 = b;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(91)
		Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(91)
		return tmp15;
	}
	HX_STACK_LINE(93)
	Float tmp3 = (Float(c) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(93)
	Float tmp4 = hx::SubEq(t,(int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(93)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(93)
	Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(93)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(93)
	Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(93)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(93)
	Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(93)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(93)
	Float tmp13 = (tmp12 + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(93)
	Float tmp14 = (tmp3 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(93)
	Float tmp15 = b;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(93)
	Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(93)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC4(QuintEaseInOut_obj,ease,return )


QuintEaseInOut_obj::QuintEaseInOut_obj()
{
}

Dynamic QuintEaseInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(QuintEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuintEaseInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class QuintEaseInOut_obj::__mClass;

void QuintEaseInOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.QuintEaseInOut","\x1b","\xb5","\x29","\x1d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuintEaseInOut_obj >;
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
