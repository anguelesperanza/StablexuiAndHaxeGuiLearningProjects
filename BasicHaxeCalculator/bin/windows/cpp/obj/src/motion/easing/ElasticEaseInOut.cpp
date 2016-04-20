#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_easing_ElasticEaseInOut
#include <motion/easing/ElasticEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ElasticEaseInOut_obj::__construct(Float a,Float p)
{
HX_STACK_FRAME("motion.easing.ElasticEaseInOut","new",0x6a75d0c3,"motion.easing.ElasticEaseInOut.new","motion/easing/Elastic.hx",101,0x73ac9cf4)
HX_STACK_THIS(this)
HX_STACK_ARG(a,"a")
HX_STACK_ARG(p,"p")
{
	HX_STACK_LINE(103)
	this->a = a;
	HX_STACK_LINE(104)
	this->p = p;
}
;
	return null();
}

//ElasticEaseInOut_obj::~ElasticEaseInOut_obj() { }

Dynamic ElasticEaseInOut_obj::__CreateEmpty() { return  new ElasticEaseInOut_obj; }
hx::ObjectPtr< ElasticEaseInOut_obj > ElasticEaseInOut_obj::__new(Float a,Float p)
{  hx::ObjectPtr< ElasticEaseInOut_obj > _result_ = new ElasticEaseInOut_obj();
	_result_->__construct(a,p);
	return _result_;}

Dynamic ElasticEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ElasticEaseInOut_obj > _result_ = new ElasticEaseInOut_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *ElasticEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

ElasticEaseInOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< ElasticEaseInOut_obj >(this); }
Float ElasticEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.ElasticEaseInOut","calculate",0xc9d98209,"motion.easing.ElasticEaseInOut.calculate","motion/easing/Elastic.hx",108,0x73ac9cf4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(110)
	bool tmp = (k == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	if ((tmp)){
		HX_STACK_LINE(111)
		return (int)0;
	}
	HX_STACK_LINE(113)
	Float tmp1 = ((Float)0.5);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	Float tmp2 = hx::DivEq(k,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	bool tmp3 = (tmp2 == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	if ((tmp3)){
		HX_STACK_LINE(114)
		return (int)1;
	}
	HX_STACK_LINE(117)
	Float tmp4 = ((Float)0.44999999999999996);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(117)
	Float p = tmp4;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(118)
	Float a = (int)1;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(119)
	Float tmp5 = (Float(p) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(119)
	Float s = tmp5;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(121)
	bool tmp6 = (k < (int)1);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(121)
	if ((tmp6)){
		HX_STACK_LINE(122)
		Float tmp7 = ((Float)-0.5);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		Float tmp8 = hx::SubEq(k,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(122)
		Float tmp9 = ((int)10 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(122)
		Float tmp10 = ::Math_obj::pow((int)2,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(122)
		Float tmp11 = (k - s);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(122)
		Float tmp12 = ::Math_obj::PI;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(122)
		Float tmp13 = ((int)2 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(122)
		Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(122)
		Float tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(122)
		Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(122)
		Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(122)
		Float tmp18 = (tmp10 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(122)
		Float tmp19 = (tmp7 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(122)
		return tmp19;
	}
	HX_STACK_LINE(124)
	int tmp7 = (int)-10;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(124)
	Float tmp8 = hx::SubEq(k,(int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(124)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(124)
	Float tmp10 = ::Math_obj::pow((int)2,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(124)
	Float tmp11 = (k - s);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(124)
	Float tmp12 = ::Math_obj::PI;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(124)
	Float tmp13 = ((int)2 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(124)
	Float tmp14 = (tmp11 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(124)
	Float tmp15 = p;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(124)
	Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(124)
	Float tmp17 = ::Math_obj::sin(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(124)
	Float tmp18 = (tmp10 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(124)
	Float tmp19 = (tmp18 * ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(124)
	Float tmp20 = (tmp19 + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(124)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC1(ElasticEaseInOut_obj,calculate,return )

Float ElasticEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.ElasticEaseInOut","ease",0xb6aae22b,"motion.easing.ElasticEaseInOut.ease","motion/easing/Elastic.hx",129,0x73ac9cf4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(131)
	bool tmp = (t == (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(131)
	if ((tmp)){
		HX_STACK_LINE(132)
		Float tmp1 = b;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		return tmp1;
	}
	HX_STACK_LINE(134)
	Float tmp1 = (Float(d) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(134)
	Float tmp2 = hx::DivEq(t,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(134)
	bool tmp3 = (tmp2 == (int)2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(134)
	if ((tmp3)){
		HX_STACK_LINE(135)
		Float tmp4 = (b + c);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		return tmp4;
	}
	HX_STACK_LINE(137)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(138)
	Float tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(138)
	Float tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(138)
	Float tmp6 = ::Math_obj::abs(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(138)
	bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(138)
	if ((tmp7)){
		HX_STACK_LINE(139)
		this->a = c;
		HX_STACK_LINE(140)
		Float tmp8 = this->p;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		Float tmp9 = (Float(tmp8) / Float((int)4));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(140)
		s = tmp9;
	}
	else{
		HX_STACK_LINE(143)
		Float tmp8 = this->p;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(143)
		Float tmp9 = ::Math_obj::PI;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(143)
		Float tmp10 = ((int)2 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(143)
		Float tmp11 = (Float(tmp8) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(143)
		Float tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(143)
		Float tmp13 = this->a;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(143)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(143)
		Float tmp15 = ::Math_obj::asin(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(143)
		Float tmp16 = (tmp11 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(143)
		s = tmp16;
	}
	HX_STACK_LINE(145)
	bool tmp8 = (t < (int)1);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(145)
	if ((tmp8)){
		HX_STACK_LINE(146)
		Float tmp9 = ((Float)-0.5);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(146)
		Float tmp10 = this->a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(146)
		Float tmp11 = hx::SubEq(t,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(146)
		Float tmp12 = ((int)10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(146)
		Float tmp13 = ::Math_obj::pow((int)2,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(146)
		Float tmp14 = (tmp10 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(146)
		Float tmp15 = (t * d);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(146)
		Float tmp16 = s;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(146)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(146)
		Float tmp18 = ::Math_obj::PI;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(146)
		Float tmp19 = ((int)2 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(146)
		Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(146)
		Float tmp21 = this->p;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(146)
		Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(146)
		Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(146)
		Float tmp24 = (tmp14 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(146)
		Float tmp25 = (tmp9 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(146)
		Float tmp26 = b;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(146)
		Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(146)
		return tmp27;
	}
	HX_STACK_LINE(148)
	Float tmp9 = this->a;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(148)
	int tmp10 = (int)-10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(148)
	Float tmp11 = hx::SubEq(t,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(148)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(148)
	Float tmp13 = ::Math_obj::pow((int)2,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(148)
	Float tmp14 = (tmp9 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(148)
	Float tmp15 = (t * d);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(148)
	Float tmp16 = s;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(148)
	Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(148)
	Float tmp18 = ::Math_obj::PI;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(148)
	Float tmp19 = ((int)2 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(148)
	Float tmp20 = (tmp17 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(148)
	Float tmp21 = this->p;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(148)
	Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(148)
	Float tmp23 = ::Math_obj::sin(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(148)
	Float tmp24 = (tmp14 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(148)
	Float tmp25 = (tmp24 * ((Float)0.5));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(148)
	Float tmp26 = c;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(148)
	Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(148)
	Float tmp28 = b;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(148)
	Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(148)
	return tmp29;
}


HX_DEFINE_DYNAMIC_FUNC4(ElasticEaseInOut_obj,ease,return )


ElasticEaseInOut_obj::ElasticEaseInOut_obj()
{
}

Dynamic ElasticEaseInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

Dynamic ElasticEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElasticEaseInOut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ElasticEaseInOut_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ElasticEaseInOut_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
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
	HX_MARK_MEMBER_NAME(ElasticEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElasticEaseInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class ElasticEaseInOut_obj::__mClass;

void ElasticEaseInOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.ElasticEaseInOut","\x51","\xb3","\xef","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ElasticEaseInOut_obj >;
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
