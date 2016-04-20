#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuadEaseOut
#include <motion/easing/QuadEaseOut.h>
#endif
namespace motion{
namespace easing{

Void QuadEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.QuadEaseOut","new",0x1ecade00,"motion.easing.QuadEaseOut.new","motion/easing/Quad.hx",106,0xc538468c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuadEaseOut_obj::~QuadEaseOut_obj() { }

Dynamic QuadEaseOut_obj::__CreateEmpty() { return  new QuadEaseOut_obj; }
hx::ObjectPtr< QuadEaseOut_obj > QuadEaseOut_obj::__new()
{  hx::ObjectPtr< QuadEaseOut_obj > _result_ = new QuadEaseOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic QuadEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadEaseOut_obj > _result_ = new QuadEaseOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *QuadEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

QuadEaseOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< QuadEaseOut_obj >(this); }
Float QuadEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.QuadEaseOut","calculate",0x6b939b06,"motion.easing.QuadEaseOut.calculate","motion/easing/Quad.hx",113,0xc538468c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(115)
	Float tmp = k;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	Float tmp2 = (k - (int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(115)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(QuadEaseOut_obj,calculate,return )

Float QuadEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.QuadEaseOut","ease",0xccc16a4e,"motion.easing.QuadEaseOut.ease","motion/easing/Quad.hx",120,0xc538468c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(122)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	Float tmp1 = -(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	Float tmp2 = hx::DivEq(t,d);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(122)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(122)
	Float tmp4 = (t - (int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(122)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(122)
	Float tmp6 = b;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(122)
	Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(122)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC4(QuadEaseOut_obj,ease,return )


QuadEaseOut_obj::QuadEaseOut_obj()
{
}

Dynamic QuadEaseOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(QuadEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadEaseOut_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadEaseOut_obj::__mClass;

void QuadEaseOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.QuadEaseOut","\x0e","\x1e","\x0c","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadEaseOut_obj >;
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
