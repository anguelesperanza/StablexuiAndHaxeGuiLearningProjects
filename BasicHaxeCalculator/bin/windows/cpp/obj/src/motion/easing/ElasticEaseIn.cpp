#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_easing_ElasticEaseIn
#include <motion/easing/ElasticEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ElasticEaseIn_obj::__construct(Float a,Float p)
{
HX_STACK_FRAME("motion.easing.ElasticEaseIn","new",0x30f7ccaf,"motion.easing.ElasticEaseIn.new","motion/easing/Elastic.hx",51,0x73ac9cf4)
HX_STACK_THIS(this)
HX_STACK_ARG(a,"a")
HX_STACK_ARG(p,"p")
{
	HX_STACK_LINE(53)
	this->a = a;
	HX_STACK_LINE(54)
	this->p = p;
}
;
	return null();
}

//ElasticEaseIn_obj::~ElasticEaseIn_obj() { }

Dynamic ElasticEaseIn_obj::__CreateEmpty() { return  new ElasticEaseIn_obj; }
hx::ObjectPtr< ElasticEaseIn_obj > ElasticEaseIn_obj::__new(Float a,Float p)
{  hx::ObjectPtr< ElasticEaseIn_obj > _result_ = new ElasticEaseIn_obj();
	_result_->__construct(a,p);
	return _result_;}

Dynamic ElasticEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ElasticEaseIn_obj > _result_ = new ElasticEaseIn_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *ElasticEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

ElasticEaseIn_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< ElasticEaseIn_obj >(this); }
Float ElasticEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.ElasticEaseIn","calculate",0xc85336f5,"motion.easing.ElasticEaseIn.calculate","motion/easing/Elastic.hx",59,0x73ac9cf4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(61)
	bool tmp = (k == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	if ((tmp)){
		HX_STACK_LINE(61)
		return (int)0;
	}
	HX_STACK_LINE(61)
	bool tmp1 = (k == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	if ((tmp1)){
		HX_STACK_LINE(61)
		return (int)1;
	}
	HX_STACK_LINE(62)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(63)
	Float tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	bool tmp3 = (tmp2 < (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	if ((tmp3)){
		HX_STACK_LINE(63)
		this->a = (int)1;
		HX_STACK_LINE(63)
		Float tmp4 = this->p;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		Float tmp5 = (Float(tmp4) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		s = tmp5;
	}
	else{
		HX_STACK_LINE(64)
		Float tmp4 = this->p;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		Float tmp5 = ::Math_obj::PI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		Float tmp6 = ((int)2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		Float tmp8 = this->a;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		Float tmp9 = (Float((int)1) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(64)
		Float tmp10 = ::Math_obj::asin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(64)
		Float tmp11 = (tmp7 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(64)
		s = tmp11;
	}
	HX_STACK_LINE(65)
	Float tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	Float tmp5 = hx::SubEq(k,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(65)
	Float tmp6 = ((int)10 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(65)
	Float tmp7 = ::Math_obj::pow((int)2,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(65)
	Float tmp8 = (tmp4 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(65)
	Float tmp9 = (k - s);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(65)
	Float tmp10 = ::Math_obj::PI;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(65)
	Float tmp11 = ((int)2 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(65)
	Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(65)
	Float tmp13 = this->p;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(65)
	Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(65)
	Float tmp15 = ::Math_obj::sin(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(65)
	Float tmp16 = (tmp8 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(65)
	Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(65)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(ElasticEaseIn_obj,calculate,return )

Float ElasticEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.ElasticEaseIn","ease",0xa1e554bf,"motion.easing.ElasticEaseIn.ease","motion/easing/Elastic.hx",70,0x73ac9cf4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(72)
	bool tmp = (t == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	if ((tmp)){
		HX_STACK_LINE(73)
		Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		return tmp1;
	}
	HX_STACK_LINE(75)
	Float tmp1 = hx::DivEq(t,d);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	bool tmp2 = (tmp1 == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(75)
	if ((tmp2)){
		HX_STACK_LINE(76)
		Float tmp3 = (b + c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		return tmp3;
	}
	HX_STACK_LINE(78)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(79)
	Float tmp3 = this->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	Float tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(79)
	Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(79)
	bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	if ((tmp6)){
		HX_STACK_LINE(80)
		this->a = c;
		HX_STACK_LINE(81)
		Float tmp7 = this->p;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(81)
		Float tmp8 = (Float(tmp7) / Float((int)4));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(81)
		s = tmp8;
	}
	else{
		HX_STACK_LINE(84)
		Float tmp7 = this->p;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(84)
		Float tmp9 = ((int)2 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(84)
		Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(84)
		Float tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(84)
		Float tmp12 = this->a;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(84)
		Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(84)
		Float tmp14 = ::Math_obj::asin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(84)
		Float tmp15 = (tmp10 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(84)
		s = tmp15;
	}
	HX_STACK_LINE(86)
	Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(86)
	Float tmp8 = hx::SubEq(t,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(86)
	Float tmp9 = ((int)10 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(86)
	Float tmp10 = ::Math_obj::pow((int)2,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(86)
	Float tmp11 = (tmp7 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(86)
	Float tmp12 = (t * d);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(86)
	Float tmp13 = s;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(86)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(86)
	Float tmp15 = ::Math_obj::PI;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(86)
	Float tmp16 = ((int)2 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(86)
	Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(86)
	Float tmp18 = this->p;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(86)
	Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(86)
	Float tmp20 = ::Math_obj::sin(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(86)
	Float tmp21 = (tmp11 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(86)
	Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(86)
	Float tmp23 = b;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(86)
	Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(86)
	return tmp24;
}


HX_DEFINE_DYNAMIC_FUNC4(ElasticEaseIn_obj,ease,return )


ElasticEaseIn_obj::ElasticEaseIn_obj()
{
}

Dynamic ElasticEaseIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ElasticEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElasticEaseIn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ElasticEaseIn_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ElasticEaseIn_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("p","\x70","\x00","\x00","\x00"),
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ElasticEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElasticEaseIn_obj::__mClass,"__mClass");
};

#endif

hx::Class ElasticEaseIn_obj::__mClass;

void ElasticEaseIn_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.ElasticEaseIn","\x3d","\x49","\x72","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ElasticEaseIn_obj >;
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
