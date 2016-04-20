#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_CubicEaseOut
#include <motion/easing/CubicEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void CubicEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.CubicEaseOut","new",0xf5de9a13,"motion.easing.CubicEaseOut.new","motion/easing/Cubic.hx",100,0x157bb7df)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CubicEaseOut_obj::~CubicEaseOut_obj() { }

Dynamic CubicEaseOut_obj::__CreateEmpty() { return  new CubicEaseOut_obj; }
hx::ObjectPtr< CubicEaseOut_obj > CubicEaseOut_obj::__new()
{  hx::ObjectPtr< CubicEaseOut_obj > _result_ = new CubicEaseOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic CubicEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubicEaseOut_obj > _result_ = new CubicEaseOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *CubicEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

CubicEaseOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< CubicEaseOut_obj >(this); }
Float CubicEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.CubicEaseOut","calculate",0x2c342759,"motion.easing.CubicEaseOut.calculate","motion/easing/Cubic.hx",107,0x157bb7df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(109)
	Float tmp = --(k);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	Float tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(109)
	Float tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(109)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(109)
	Float tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(109)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(CubicEaseOut_obj,calculate,return )

Float CubicEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.CubicEaseOut","ease",0x26f23edb,"motion.easing.CubicEaseOut.ease","motion/easing/Cubic.hx",114,0x157bb7df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(116)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	Float tmp1 = (Float(t) / Float(d));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	Float tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(116)
	Float tmp3 = t = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(116)
	Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(116)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(116)
	Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(116)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(116)
	Float tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(116)
	Float tmp9 = (tmp * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(116)
	Float tmp10 = b;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(116)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(116)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC4(CubicEaseOut_obj,ease,return )


CubicEaseOut_obj::CubicEaseOut_obj()
{
}

Dynamic CubicEaseOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(CubicEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubicEaseOut_obj::__mClass,"__mClass");
};

#endif

hx::Class CubicEaseOut_obj::__mClass;

void CubicEaseOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.CubicEaseOut","\xa1","\x94","\x45","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubicEaseOut_obj >;
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
