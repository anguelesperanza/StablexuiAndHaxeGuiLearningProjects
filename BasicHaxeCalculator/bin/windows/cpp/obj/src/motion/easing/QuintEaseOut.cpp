#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuintEaseOut
#include <motion/easing/QuintEaseOut.h>
#endif
namespace motion{
namespace easing{

Void QuintEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.QuintEaseOut","new",0xe7b6dc72,"motion.easing.QuintEaseOut.new","motion/easing/Quint.hx",104,0xeefb033e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuintEaseOut_obj::~QuintEaseOut_obj() { }

Dynamic QuintEaseOut_obj::__CreateEmpty() { return  new QuintEaseOut_obj; }
hx::ObjectPtr< QuintEaseOut_obj > QuintEaseOut_obj::__new()
{  hx::ObjectPtr< QuintEaseOut_obj > _result_ = new QuintEaseOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic QuintEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuintEaseOut_obj > _result_ = new QuintEaseOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *QuintEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

QuintEaseOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< QuintEaseOut_obj >(this); }
Float QuintEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.QuintEaseOut","calculate",0x0720faf8,"motion.easing.QuintEaseOut.calculate","motion/easing/Quint.hx",111,0xeefb033e)
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
	Float tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(113)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(113)
	Float tmp9 = (tmp8 + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(113)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(QuintEaseOut_obj,calculate,return )

Float QuintEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.QuintEaseOut","ease",0xd2540f9c,"motion.easing.QuintEaseOut.ease","motion/easing/Quint.hx",118,0xeefb033e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(120)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	Float tmp1 = (Float(t) / Float(d));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	Float tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	Float tmp3 = t = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(120)
	Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(120)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(120)
	Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(120)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(120)
	Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(120)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(120)
	Float tmp12 = (tmp11 + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(120)
	Float tmp13 = (tmp * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(120)
	Float tmp14 = b;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(120)
	Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(120)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC4(QuintEaseOut_obj,ease,return )


QuintEaseOut_obj::QuintEaseOut_obj()
{
}

Dynamic QuintEaseOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(QuintEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuintEaseOut_obj::__mClass,"__mClass");
};

#endif

hx::Class QuintEaseOut_obj::__mClass;

void QuintEaseOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.QuintEaseOut","\x80","\x7b","\xd7","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuintEaseOut_obj >;
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
