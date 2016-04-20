#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_LinearEaseNone
#include <motion/easing/LinearEaseNone.h>
#endif
namespace motion{
namespace easing{

Void LinearEaseNone_obj::__construct()
{
HX_STACK_FRAME("motion.easing.LinearEaseNone","new",0x81a9e908,"motion.easing.LinearEaseNone.new","motion/easing/Linear.hx",30,0xd271eb6e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//LinearEaseNone_obj::~LinearEaseNone_obj() { }

Dynamic LinearEaseNone_obj::__CreateEmpty() { return  new LinearEaseNone_obj; }
hx::ObjectPtr< LinearEaseNone_obj > LinearEaseNone_obj::__new()
{  hx::ObjectPtr< LinearEaseNone_obj > _result_ = new LinearEaseNone_obj();
	_result_->__construct();
	return _result_;}

Dynamic LinearEaseNone_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinearEaseNone_obj > _result_ = new LinearEaseNone_obj();
	_result_->__construct();
	return _result_;}

hx::Object *LinearEaseNone_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

LinearEaseNone_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< LinearEaseNone_obj >(this); }
Float LinearEaseNone_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.LinearEaseNone","calculate",0x78789c0e,"motion.easing.LinearEaseNone.calculate","motion/easing/Linear.hx",37,0xd271eb6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(39)
	Float tmp = k;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(LinearEaseNone_obj,calculate,return )

Float LinearEaseNone_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.LinearEaseNone","ease",0xed0c0646,"motion.easing.LinearEaseNone.ease","motion/easing/Linear.hx",44,0xd271eb6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(46)
	Float tmp = (c * t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	Float tmp1 = d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	Float tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(46)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC4(LinearEaseNone_obj,ease,return )


LinearEaseNone_obj::LinearEaseNone_obj()
{
}

Dynamic LinearEaseNone_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(LinearEaseNone_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearEaseNone_obj::__mClass,"__mClass");
};

#endif

hx::Class LinearEaseNone_obj::__mClass;

void LinearEaseNone_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.LinearEaseNone","\x16","\x05","\xb7","\x0f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LinearEaseNone_obj >;
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
