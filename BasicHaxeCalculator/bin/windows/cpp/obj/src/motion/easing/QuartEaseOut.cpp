#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseOut
#include <motion/easing/QuartEaseOut.h>
#endif
namespace motion{
namespace easing{

Void QuartEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.QuartEaseOut","new",0xe94e377e,"motion.easing.QuartEaseOut.new","motion/easing/Quart.hx",104,0x09ba724a)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuartEaseOut_obj::~QuartEaseOut_obj() { }

Dynamic QuartEaseOut_obj::__CreateEmpty() { return  new QuartEaseOut_obj; }
hx::ObjectPtr< QuartEaseOut_obj > QuartEaseOut_obj::__new()
{  hx::ObjectPtr< QuartEaseOut_obj > _result_ = new QuartEaseOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic QuartEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuartEaseOut_obj > _result_ = new QuartEaseOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *QuartEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

QuartEaseOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< QuartEaseOut_obj >(this); }
Float QuartEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.QuartEaseOut","calculate",0xe8302704,"motion.easing.QuartEaseOut.calculate","motion/easing/Quart.hx",111,0x09ba724a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(113)
	Float tmp = --(k);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	Float tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	Float tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	Float tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(113)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(113)
	Float tmp7 = (tmp6 - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(113)
	Float tmp8 = -(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(113)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(QuartEaseOut_obj,calculate,return )

Float QuartEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.QuartEaseOut","ease",0x352c5f10,"motion.easing.QuartEaseOut.ease","motion/easing/Quart.hx",118,0x09ba724a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(120)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	Float tmp2 = (Float(t) / Float(d));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	Float tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	Float tmp4 = t = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(120)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(120)
	Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(120)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(120)
	Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(120)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(120)
	Float tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(120)
	Float tmp12 = (tmp1 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(120)
	Float tmp13 = b;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(120)
	Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(120)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC4(QuartEaseOut_obj,ease,return )


QuartEaseOut_obj::QuartEaseOut_obj()
{
}

Dynamic QuartEaseOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(QuartEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuartEaseOut_obj::__mClass,"__mClass");
};

#endif

hx::Class QuartEaseOut_obj::__mClass;

void QuartEaseOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.QuartEaseOut","\x8c","\x60","\x49","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuartEaseOut_obj >;
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
