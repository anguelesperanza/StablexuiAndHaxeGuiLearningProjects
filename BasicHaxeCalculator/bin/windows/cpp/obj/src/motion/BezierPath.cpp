#include <hxcpp.h>

#ifndef INCLUDED_motion_BezierPath
#include <motion/BezierPath.h>
#endif
namespace motion{

Void BezierPath_obj::__construct(Float end,Float control,Float strength)
{
HX_STACK_FRAME("motion.BezierPath","new",0x3a535fae,"motion.BezierPath.new","motion/MotionPath.hx",204,0x95e57daa)
HX_STACK_THIS(this)
HX_STACK_ARG(end,"end")
HX_STACK_ARG(control,"control")
HX_STACK_ARG(strength,"strength")
{
	HX_STACK_LINE(206)
	this->end = end;
	HX_STACK_LINE(207)
	this->control = control;
	HX_STACK_LINE(208)
	this->strength = strength;
}
;
	return null();
}

//BezierPath_obj::~BezierPath_obj() { }

Dynamic BezierPath_obj::__CreateEmpty() { return  new BezierPath_obj; }
hx::ObjectPtr< BezierPath_obj > BezierPath_obj::__new(Float end,Float control,Float strength)
{  hx::ObjectPtr< BezierPath_obj > _result_ = new BezierPath_obj();
	_result_->__construct(end,control,strength);
	return _result_;}

Dynamic BezierPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BezierPath_obj > _result_ = new BezierPath_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Float BezierPath_obj::calculate( Float start,Float k){
	HX_STACK_FRAME("motion.BezierPath","calculate",0x71899334,"motion.BezierPath.calculate","motion/MotionPath.hx",213,0x95e57daa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(215)
	Float tmp = ((int)1 - k);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	Float tmp1 = ((int)1 - k);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(215)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	Float tmp3 = start;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(215)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(215)
	Float tmp5 = ((int)1 - k);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(215)
	Float tmp6 = ((int)2 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(215)
	Float tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(215)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(215)
	Float tmp9 = this->control;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(215)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(215)
	Float tmp11 = (tmp4 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(215)
	Float tmp12 = (k * k);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(215)
	Float tmp13 = this->end;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(215)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(215)
	Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(215)
	return tmp15;
}


HX_DEFINE_DYNAMIC_FUNC2(BezierPath_obj,calculate,return )


BezierPath_obj::BezierPath_obj()
{
}

Dynamic BezierPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"control") ) { return control; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return strength; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BezierPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"control") ) { control=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BezierPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("control","\x5d","\x6b","\x81","\x19"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BezierPath_obj,control),HX_HCSTRING("control","\x5d","\x6b","\x81","\x19")},
	{hx::fsFloat,(int)offsetof(BezierPath_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsFloat,(int)offsetof(BezierPath_obj,strength),HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("control","\x5d","\x6b","\x81","\x19"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("strength","\x81","\xd2","\x8e","\x8e"),
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BezierPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BezierPath_obj::__mClass,"__mClass");
};

#endif

hx::Class BezierPath_obj::__mClass;

void BezierPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.BezierPath","\xbc","\xb0","\x2a","\x79");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BezierPath_obj >;
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
