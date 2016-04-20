#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BackEaseInOut
#include <motion/easing/BackEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BackEaseInOut_obj::__construct(Float s)
{
HX_STACK_FRAME("motion.easing.BackEaseInOut","new",0xfd1f833b,"motion.easing.BackEaseInOut.new","motion/easing/Back.hx",81,0x81c0c12c)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(81)
	this->s = s;
}
;
	return null();
}

//BackEaseInOut_obj::~BackEaseInOut_obj() { }

Dynamic BackEaseInOut_obj::__CreateEmpty() { return  new BackEaseInOut_obj; }
hx::ObjectPtr< BackEaseInOut_obj > BackEaseInOut_obj::__new(Float s)
{  hx::ObjectPtr< BackEaseInOut_obj > _result_ = new BackEaseInOut_obj();
	_result_->__construct(s);
	return _result_;}

Dynamic BackEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackEaseInOut_obj > _result_ = new BackEaseInOut_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *BackEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

BackEaseInOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< BackEaseInOut_obj >(this); }
Float BackEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BackEaseInOut","calculate",0xabe45e81,"motion.easing.BackEaseInOut.calculate","motion/easing/Back.hx",86,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(88)
	Float tmp = hx::DivEq(k,((Float)0.5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	bool tmp1 = (tmp < (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	if ((tmp1)){
		HX_STACK_LINE(88)
		Float tmp2 = (k * k);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		Float tmp3 = hx::MultEq(this->s,((Float)1.525));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		Float tmp4 = (tmp3 + (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(88)
		Float tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(88)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		Float tmp7 = this->s;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(88)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(88)
		Float tmp9 = (tmp2 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(88)
		Float tmp10 = (((Float)0.5) * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(88)
		return tmp10;
	}
	HX_STACK_LINE(89)
	Float tmp2 = hx::SubEq(k,(int)2);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	Float tmp3 = k;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(89)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	Float tmp5 = hx::MultEq(this->s,((Float)1.525));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(89)
	Float tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(89)
	Float tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(89)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(89)
	Float tmp9 = this->s;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(89)
	Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(89)
	Float tmp11 = (tmp4 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(89)
	Float tmp12 = (tmp11 + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(89)
	Float tmp13 = (((Float)0.5) * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(89)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(BackEaseInOut_obj,calculate,return )

Float BackEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BackEaseInOut","ease",0x787d58b3,"motion.easing.BackEaseInOut.ease","motion/easing/Back.hx",94,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(96)
	Float tmp = (Float(d) / Float((int)2));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	Float tmp1 = hx::DivEq(t,tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	bool tmp2 = (tmp1 < (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	if ((tmp2)){
		HX_STACK_LINE(96)
		Float tmp3 = (Float(c) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		Float tmp4 = (t * t);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		Float tmp5 = hx::MultEq(this->s,((Float)1.525));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		Float tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		Float tmp9 = this->s;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(96)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(96)
		Float tmp11 = (tmp4 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(96)
		Float tmp12 = (tmp3 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(96)
		Float tmp13 = b;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(96)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(96)
		return tmp14;
	}
	HX_STACK_LINE(97)
	Float tmp3 = (Float(c) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	Float tmp4 = hx::SubEq(t,(int)2);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(97)
	Float tmp7 = hx::MultEq(this->s,((Float)1.525));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(97)
	Float tmp8 = (tmp7 + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(97)
	Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(97)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(97)
	Float tmp11 = this->s;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(97)
	Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(97)
	Float tmp13 = (tmp6 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(97)
	Float tmp14 = (tmp13 + (int)2);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(97)
	Float tmp15 = (tmp3 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(97)
	Float tmp16 = b;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(97)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(97)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC4(BackEaseInOut_obj,ease,return )


BackEaseInOut_obj::BackEaseInOut_obj()
{
}

Dynamic BackEaseInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic BackEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackEaseInOut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BackEaseInOut_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
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
	HX_MARK_MEMBER_NAME(BackEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackEaseInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class BackEaseInOut_obj::__mClass;

void BackEaseInOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.BackEaseInOut","\xc9","\xc9","\x40","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BackEaseInOut_obj >;
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
