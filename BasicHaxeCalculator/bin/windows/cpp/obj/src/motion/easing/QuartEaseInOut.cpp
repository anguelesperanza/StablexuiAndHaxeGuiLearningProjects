#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseInOut
#include <motion/easing/QuartEaseInOut.h>
#endif
namespace motion{
namespace easing{

Void QuartEaseInOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.QuartEaseInOut","new",0xb1a2b599,"motion.easing.QuartEaseInOut.new","motion/easing/Quart.hx",73,0x09ba724a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuartEaseInOut_obj::~QuartEaseInOut_obj() { }

Dynamic QuartEaseInOut_obj::__CreateEmpty() { return  new QuartEaseInOut_obj; }
hx::ObjectPtr< QuartEaseInOut_obj > QuartEaseInOut_obj::__new()
{  hx::ObjectPtr< QuartEaseInOut_obj > _result_ = new QuartEaseInOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic QuartEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuartEaseInOut_obj > _result_ = new QuartEaseInOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *QuartEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

QuartEaseInOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< QuartEaseInOut_obj >(this); }
Float QuartEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.QuartEaseInOut","calculate",0x9abaab5f,"motion.easing.QuartEaseInOut.calculate","motion/easing/Quart.hx",80,0x09ba724a)
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
		return tmp8;
	}
	HX_STACK_LINE(83)
	Float tmp2 = ((Float)-0.5);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	Float tmp3 = hx::SubEq(k,(int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(83)
	Float tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	Float tmp6 = k;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(83)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(83)
	Float tmp8 = k;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(83)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(83)
	Float tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(83)
	Float tmp11 = (tmp2 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(83)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(QuartEaseInOut_obj,calculate,return )

Float QuartEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.QuartEaseInOut","ease",0xb6c63895,"motion.easing.QuartEaseInOut.ease","motion/easing/Quart.hx",88,0x09ba724a)
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
		Float tmp12 = b;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(91)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(91)
		return tmp13;
	}
	HX_STACK_LINE(93)
	Float tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(93)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(93)
	Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	Float tmp6 = hx::SubEq(t,(int)2);		HX_STACK_VAR(tmp6,"tmp6");
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
	Float tmp13 = (tmp12 - (int)2);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(93)
	Float tmp14 = (tmp5 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(93)
	Float tmp15 = b;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(93)
	Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(93)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC4(QuartEaseInOut_obj,ease,return )


QuartEaseInOut_obj::QuartEaseInOut_obj()
{
}

Dynamic QuartEaseInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(QuartEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuartEaseInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class QuartEaseInOut_obj::__mClass;

void QuartEaseInOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.QuartEaseInOut","\x27","\xf5","\xa7","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuartEaseInOut_obj >;
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
