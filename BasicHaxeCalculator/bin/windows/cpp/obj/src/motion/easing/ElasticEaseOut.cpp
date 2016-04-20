#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_easing_ElasticEaseOut
#include <motion/easing/ElasticEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ElasticEaseOut_obj::__construct(Float a,Float p)
{
HX_STACK_FRAME("motion.easing.ElasticEaseOut","new",0x91a15428,"motion.easing.ElasticEaseOut.new","motion/easing/Elastic.hx",163,0x73ac9cf4)
HX_STACK_THIS(this)
HX_STACK_ARG(a,"a")
HX_STACK_ARG(p,"p")
{
	HX_STACK_LINE(165)
	this->a = a;
	HX_STACK_LINE(166)
	this->p = p;
}
;
	return null();
}

//ElasticEaseOut_obj::~ElasticEaseOut_obj() { }

Dynamic ElasticEaseOut_obj::__CreateEmpty() { return  new ElasticEaseOut_obj; }
hx::ObjectPtr< ElasticEaseOut_obj > ElasticEaseOut_obj::__new(Float a,Float p)
{  hx::ObjectPtr< ElasticEaseOut_obj > _result_ = new ElasticEaseOut_obj();
	_result_->__construct(a,p);
	return _result_;}

Dynamic ElasticEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ElasticEaseOut_obj > _result_ = new ElasticEaseOut_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *ElasticEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

ElasticEaseOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< ElasticEaseOut_obj >(this); }
Float ElasticEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.ElasticEaseOut","calculate",0x07011f2e,"motion.easing.ElasticEaseOut.calculate","motion/easing/Elastic.hx",171,0x73ac9cf4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(173)
	bool tmp = (k == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	if ((tmp)){
		HX_STACK_LINE(173)
		return (int)0;
	}
	HX_STACK_LINE(173)
	bool tmp1 = (k == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	if ((tmp1)){
		HX_STACK_LINE(173)
		return (int)1;
	}
	HX_STACK_LINE(174)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(175)
	Float tmp2 = this->a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(175)
	bool tmp3 = (tmp2 < (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(175)
	if ((tmp3)){
		HX_STACK_LINE(175)
		this->a = (int)1;
		HX_STACK_LINE(175)
		Float tmp4 = this->p;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		Float tmp5 = (Float(tmp4) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(175)
		s = tmp5;
	}
	else{
		HX_STACK_LINE(176)
		Float tmp4 = this->p;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		Float tmp5 = ::Math_obj::PI;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(176)
		Float tmp6 = ((int)2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(176)
		Float tmp7 = (Float(tmp4) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(176)
		Float tmp8 = this->a;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(176)
		Float tmp9 = (Float((int)1) / Float(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(176)
		Float tmp10 = ::Math_obj::asin(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(176)
		Float tmp11 = (tmp7 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(176)
		s = tmp11;
	}
	HX_STACK_LINE(177)
	Float tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(177)
	int tmp5 = (int)-10;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(177)
	Float tmp6 = k;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(177)
	Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(177)
	Float tmp8 = ::Math_obj::pow((int)2,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(177)
	Float tmp9 = (tmp4 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(177)
	Float tmp10 = (k - s);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(177)
	Float tmp11 = ::Math_obj::PI;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(177)
	Float tmp12 = ((int)2 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(177)
	Float tmp13 = (tmp10 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(177)
	Float tmp14 = this->p;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(177)
	Float tmp15 = (Float(tmp13) / Float(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(177)
	Float tmp16 = ::Math_obj::sin(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(177)
	Float tmp17 = (tmp9 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(177)
	Float tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(177)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC1(ElasticEaseOut_obj,calculate,return )

Float ElasticEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.ElasticEaseOut","ease",0xd5925726,"motion.easing.ElasticEaseOut.ease","motion/easing/Elastic.hx",182,0x73ac9cf4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(184)
	bool tmp = (t == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	if ((tmp)){
		HX_STACK_LINE(185)
		Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		return tmp1;
	}
	HX_STACK_LINE(187)
	Float tmp1 = hx::DivEq(t,d);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	bool tmp2 = (tmp1 == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	if ((tmp2)){
		HX_STACK_LINE(188)
		Float tmp3 = (b + c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(188)
		return tmp3;
	}
	HX_STACK_LINE(190)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(191)
	Float tmp3 = this->a;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	Float tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(191)
	Float tmp5 = ::Math_obj::abs(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(191)
	bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(191)
	if ((tmp6)){
		HX_STACK_LINE(192)
		this->a = c;
		HX_STACK_LINE(193)
		Float tmp7 = this->p;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(193)
		Float tmp8 = (Float(tmp7) / Float((int)4));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(193)
		s = tmp8;
	}
	else{
		HX_STACK_LINE(196)
		Float tmp7 = this->p;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(196)
		Float tmp8 = ::Math_obj::PI;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(196)
		Float tmp9 = ((int)2 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(196)
		Float tmp10 = (Float(tmp7) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		Float tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(196)
		Float tmp12 = this->a;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(196)
		Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(196)
		Float tmp14 = ::Math_obj::asin(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(196)
		Float tmp15 = (tmp10 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(196)
		s = tmp15;
	}
	HX_STACK_LINE(198)
	Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(198)
	int tmp8 = (int)-10;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(198)
	Float tmp9 = t;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(198)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(198)
	Float tmp11 = ::Math_obj::pow((int)2,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(198)
	Float tmp12 = (tmp7 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(198)
	Float tmp13 = (t * d);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(198)
	Float tmp14 = s;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(198)
	Float tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(198)
	Float tmp16 = ::Math_obj::PI;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(198)
	Float tmp17 = ((int)2 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(198)
	Float tmp18 = (tmp15 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(198)
	Float tmp19 = this->p;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(198)
	Float tmp20 = (Float(tmp18) / Float(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(198)
	Float tmp21 = ::Math_obj::sin(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(198)
	Float tmp22 = (tmp12 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(198)
	Float tmp23 = c;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(198)
	Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(198)
	Float tmp25 = b;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(198)
	Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(198)
	return tmp26;
}


HX_DEFINE_DYNAMIC_FUNC4(ElasticEaseOut_obj,ease,return )


ElasticEaseOut_obj::ElasticEaseOut_obj()
{
}

Dynamic ElasticEaseOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ElasticEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElasticEaseOut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ElasticEaseOut_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ElasticEaseOut_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
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
	HX_MARK_MEMBER_NAME(ElasticEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElasticEaseOut_obj::__mClass,"__mClass");
};

#endif

hx::Class ElasticEaseOut_obj::__mClass;

void ElasticEaseOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.ElasticEaseOut","\x36","\x60","\x92","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ElasticEaseOut_obj >;
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
