#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BackEaseIn
#include <motion/easing/BackEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BackEaseIn_obj::__construct(Float s)
{
HX_STACK_FRAME("motion.easing.BackEaseIn","new",0xaa9a5f37,"motion.easing.BackEaseIn.new","motion/easing/Back.hx",51,0x81c0c12c)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(51)
	this->s = s;
}
;
	return null();
}

//BackEaseIn_obj::~BackEaseIn_obj() { }

Dynamic BackEaseIn_obj::__CreateEmpty() { return  new BackEaseIn_obj; }
hx::ObjectPtr< BackEaseIn_obj > BackEaseIn_obj::__new(Float s)
{  hx::ObjectPtr< BackEaseIn_obj > _result_ = new BackEaseIn_obj();
	_result_->__construct(s);
	return _result_;}

Dynamic BackEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackEaseIn_obj > _result_ = new BackEaseIn_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *BackEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

BackEaseIn_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< BackEaseIn_obj >(this); }
Float BackEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BackEaseIn","calculate",0x7c965f7d,"motion.easing.BackEaseIn.calculate","motion/easing/Back.hx",56,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(58)
	Float tmp = (k * k);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	Float tmp1 = this->s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	Float tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	Float tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(58)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(58)
	Float tmp5 = this->s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(58)
	Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	Float tmp7 = (tmp * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(58)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BackEaseIn_obj,calculate,return )

Float BackEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BackEaseIn","ease",0x9682f937,"motion.easing.BackEaseIn.ease","motion/easing/Back.hx",63,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(65)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Float tmp1 = hx::DivEq(t,d);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(65)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(65)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	Float tmp5 = this->s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	Float tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(65)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(65)
	Float tmp9 = this->s;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(65)
	Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(65)
	Float tmp11 = (tmp4 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(65)
	Float tmp12 = b;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(65)
	Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(65)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC4(BackEaseIn_obj,ease,return )


BackEaseIn_obj::BackEaseIn_obj()
{
}

Dynamic BackEaseIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BackEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackEaseIn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BackEaseIn_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BackEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackEaseIn_obj::__mClass,"__mClass");
};

#endif

hx::Class BackEaseIn_obj::__mClass;

void BackEaseIn_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.BackEaseIn","\xc5","\xf7","\xa6","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BackEaseIn_obj >;
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
