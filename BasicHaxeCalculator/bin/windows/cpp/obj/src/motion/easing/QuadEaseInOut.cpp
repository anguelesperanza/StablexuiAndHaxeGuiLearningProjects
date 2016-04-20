#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuadEaseInOut
#include <motion/easing/QuadEaseInOut.h>
#endif
namespace motion{
namespace easing{

Void QuadEaseInOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.QuadEaseInOut","new",0xbc77809b,"motion.easing.QuadEaseInOut.new","motion/easing/Quad.hx",73,0xc538468c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuadEaseInOut_obj::~QuadEaseInOut_obj() { }

Dynamic QuadEaseInOut_obj::__CreateEmpty() { return  new QuadEaseInOut_obj; }
hx::ObjectPtr< QuadEaseInOut_obj > QuadEaseInOut_obj::__new()
{  hx::ObjectPtr< QuadEaseInOut_obj > _result_ = new QuadEaseInOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic QuadEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadEaseInOut_obj > _result_ = new QuadEaseInOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *QuadEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

QuadEaseInOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< QuadEaseInOut_obj >(this); }
Float QuadEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.QuadEaseInOut","calculate",0x54e4a3e1,"motion.easing.QuadEaseInOut.calculate","motion/easing/Quad.hx",80,0xc538468c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(82)
	Float tmp = hx::MultEq(k,(int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	bool tmp1 = (tmp < (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	if ((tmp1)){
		HX_STACK_LINE(83)
		Float tmp2 = ((Float)0.5);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		Float tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(83)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(83)
		Float tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		return tmp6;
	}
	HX_STACK_LINE(85)
	int tmp2 = (int)-1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	Float tmp3 = (Float(tmp2) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(85)
	Float tmp4 = (k - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(85)
	Float tmp5 = (k - (int)3);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(85)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(85)
	Float tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(85)
	Float tmp8 = (tmp3 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(85)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadEaseInOut_obj,calculate,return )

Float QuadEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.QuadEaseInOut","ease",0x26230f53,"motion.easing.QuadEaseInOut.ease","motion/easing/Quad.hx",90,0xc538468c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(92)
	Float tmp = (Float(d) / Float((int)2));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	Float tmp1 = hx::DivEq(t,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	bool tmp2 = (tmp1 < (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	if ((tmp2)){
		HX_STACK_LINE(93)
		Float tmp3 = (Float(c) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(93)
		Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		Float tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		return tmp9;
	}
	HX_STACK_LINE(95)
	Float tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	Float tmp5 = (Float(tmp4) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	Float tmp6 = (t - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	Float tmp7 = (t - (int)3);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(95)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(95)
	Float tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(95)
	Float tmp10 = (tmp5 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(95)
	Float tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(95)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(95)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC4(QuadEaseInOut_obj,ease,return )


QuadEaseInOut_obj::QuadEaseInOut_obj()
{
}

Dynamic QuadEaseInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(QuadEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadEaseInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadEaseInOut_obj::__mClass;

void QuadEaseInOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.QuadEaseInOut","\x29","\x97","\xb6","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadEaseInOut_obj >;
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
