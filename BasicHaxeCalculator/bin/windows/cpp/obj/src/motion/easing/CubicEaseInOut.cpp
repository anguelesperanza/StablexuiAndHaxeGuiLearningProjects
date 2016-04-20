#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_CubicEaseInOut
#include <motion/easing/CubicEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void CubicEaseInOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.CubicEaseInOut","new",0x4d00a76e,"motion.easing.CubicEaseInOut.new","motion/easing/Cubic.hx",73,0x157bb7df)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CubicEaseInOut_obj::~CubicEaseInOut_obj() { }

Dynamic CubicEaseInOut_obj::__CreateEmpty() { return  new CubicEaseInOut_obj; }
hx::ObjectPtr< CubicEaseInOut_obj > CubicEaseInOut_obj::__new()
{  hx::ObjectPtr< CubicEaseInOut_obj > _result_ = new CubicEaseInOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic CubicEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubicEaseInOut_obj > _result_ = new CubicEaseInOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *CubicEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

CubicEaseInOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< CubicEaseInOut_obj >(this); }
Float CubicEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.CubicEaseInOut","calculate",0xe7ff2af4,"motion.easing.CubicEaseInOut.calculate","motion/easing/Cubic.hx",80,0x157bb7df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(82)
	Float tmp = ((Float)0.5);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	Float tmp1 = hx::DivEq(k,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	bool tmp2 = (tmp1 < (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	if ((tmp2)){
		HX_STACK_LINE(82)
		Float tmp4 = (((Float)0.5) * k);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		Float tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		Float tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		tmp3 = (tmp6 * tmp7);
	}
	else{
		HX_STACK_LINE(82)
		Float tmp4 = hx::SubEq(k,(int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		Float tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		Float tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(82)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(82)
		Float tmp9 = (tmp8 + (int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(82)
		tmp3 = (((Float)0.5) * tmp9);
	}
	HX_STACK_LINE(82)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(CubicEaseInOut_obj,calculate,return )

Float CubicEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.CubicEaseInOut","ease",0x0d9be120,"motion.easing.CubicEaseInOut.ease","motion/easing/Cubic.hx",87,0x157bb7df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(89)
	Float tmp = (Float(d) / Float((int)2));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	Float tmp1 = hx::DivEq(t,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	bool tmp2 = (tmp1 < (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	if ((tmp2)){
		HX_STACK_LINE(89)
		Float tmp4 = (Float(c) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(89)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(89)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(89)
		Float tmp11 = b;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(89)
		tmp3 = (tmp10 + tmp11);
	}
	else{
		HX_STACK_LINE(89)
		Float tmp4 = (Float(c) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(89)
		Float tmp5 = hx::SubEq(t,(int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(89)
		Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(89)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(89)
		Float tmp10 = (tmp9 + (int)2);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(89)
		Float tmp11 = (tmp4 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(89)
		Float tmp12 = b;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(89)
		tmp3 = (tmp11 + tmp12);
	}
	HX_STACK_LINE(89)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC4(CubicEaseInOut_obj,ease,return )


CubicEaseInOut_obj::CubicEaseInOut_obj()
{
}

Dynamic CubicEaseInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(CubicEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubicEaseInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class CubicEaseInOut_obj::__mClass;

void CubicEaseInOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.CubicEaseInOut","\x7c","\x18","\x29","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubicEaseInOut_obj >;
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
