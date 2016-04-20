#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BackEaseOut
#include <motion/easing/BackEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BackEaseOut_obj::__construct(Float s)
{
HX_STACK_FRAME("motion.easing.BackEaseOut","new",0x863ef8a0,"motion.easing.BackEaseOut.new","motion/easing/Back.hx",113,0x81c0c12c)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(113)
	this->s = s;
}
;
	return null();
}

//BackEaseOut_obj::~BackEaseOut_obj() { }

Dynamic BackEaseOut_obj::__CreateEmpty() { return  new BackEaseOut_obj; }
hx::ObjectPtr< BackEaseOut_obj > BackEaseOut_obj::__new(Float s)
{  hx::ObjectPtr< BackEaseOut_obj > _result_ = new BackEaseOut_obj();
	_result_->__construct(s);
	return _result_;}

Dynamic BackEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BackEaseOut_obj > _result_ = new BackEaseOut_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *BackEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

BackEaseOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< BackEaseOut_obj >(this); }
Float BackEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BackEaseOut","calculate",0x0d816da6,"motion.easing.BackEaseOut.calculate","motion/easing/Back.hx",118,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(120)
	Float tmp = (k - (int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	Float tmp1 = k = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	Float tmp2 = k;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(120)
	Float tmp4 = this->s;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(120)
	Float tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(120)
	Float tmp6 = k;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(120)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(120)
	Float tmp8 = this->s;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(120)
	Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(120)
	Float tmp10 = (tmp3 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(120)
	Float tmp11 = (tmp10 + (int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(120)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(BackEaseOut_obj,calculate,return )

Float BackEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BackEaseOut","ease",0xeae49bae,"motion.easing.BackEaseOut.ease","motion/easing/Back.hx",125,0x81c0c12c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(127)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	Float tmp1 = (Float(t) / Float(d));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	Float tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	Float tmp3 = t = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(127)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(127)
	Float tmp6 = this->s;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(127)
	Float tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(127)
	Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(127)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(127)
	Float tmp10 = this->s;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(127)
	Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(127)
	Float tmp12 = (tmp5 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(127)
	Float tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(127)
	Float tmp14 = (tmp * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(127)
	Float tmp15 = b;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(127)
	Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(127)
	return tmp16;
}


HX_DEFINE_DYNAMIC_FUNC4(BackEaseOut_obj,ease,return )


BackEaseOut_obj::BackEaseOut_obj()
{
}

Dynamic BackEaseOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic BackEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BackEaseOut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BackEaseOut_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
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
	HX_MARK_MEMBER_NAME(BackEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BackEaseOut_obj::__mClass,"__mClass");
};

#endif

hx::Class BackEaseOut_obj::__mClass;

void BackEaseOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.BackEaseOut","\xae","\x68","\x76","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BackEaseOut_obj >;
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
