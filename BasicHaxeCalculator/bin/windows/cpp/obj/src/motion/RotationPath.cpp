#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_ComponentPath
#include <motion/ComponentPath.h>
#endif
#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
#ifndef INCLUDED_motion_RotationPath
#include <motion/RotationPath.h>
#endif
namespace motion{

Void RotationPath_obj::__construct(::motion::ComponentPath x,::motion::ComponentPath y)
{
HX_STACK_FRAME("motion.RotationPath","new",0x0c20d9cd,"motion.RotationPath.new","motion/MotionPath.hx",243,0x95e57daa)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(250)
	this->step = ((Float)0.01);
	HX_STACK_LINE(257)
	this->_x = x;
	HX_STACK_LINE(258)
	this->_y = y;
	HX_STACK_LINE(260)
	this->offset = (int)0;
	HX_STACK_LINE(262)
	Float tmp = this->calculate(((Float)0.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(262)
	this->start = tmp;
}
;
	return null();
}

//RotationPath_obj::~RotationPath_obj() { }

Dynamic RotationPath_obj::__CreateEmpty() { return  new RotationPath_obj; }
hx::ObjectPtr< RotationPath_obj > RotationPath_obj::__new(::motion::ComponentPath x,::motion::ComponentPath y)
{  hx::ObjectPtr< RotationPath_obj > _result_ = new RotationPath_obj();
	_result_->__construct(x,y);
	return _result_;}

Dynamic RotationPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RotationPath_obj > _result_ = new RotationPath_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *RotationPath_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::IComponentPath_obj)) return operator ::motion::IComponentPath_obj *();
	return super::__ToInterface(inType);
}

RotationPath_obj::operator ::motion::IComponentPath_obj *()
	{ return new ::motion::IComponentPath_delegate_< RotationPath_obj >(this); }
Float RotationPath_obj::calculate( Float k){
	HX_STACK_FRAME("motion.RotationPath","calculate",0x5ec7ee93,"motion.RotationPath.calculate","motion/MotionPath.hx",267,0x95e57daa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(269)
	::motion::ComponentPath tmp = this->_x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(269)
	Float tmp1 = k;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(269)
	Float tmp2 = tmp->calculate(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(269)
	::motion::ComponentPath tmp3 = this->_x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(269)
	Float tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(269)
	Float tmp5 = this->step;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(269)
	Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(269)
	Float tmp7 = tmp3->calculate(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(269)
	Float tmp8 = (tmp2 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(269)
	Float dX = tmp8;		HX_STACK_VAR(dX,"dX");
	HX_STACK_LINE(270)
	::motion::ComponentPath tmp9 = this->_y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(270)
	Float tmp10 = k;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(270)
	Float tmp11 = tmp9->calculate(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(270)
	::motion::ComponentPath tmp12 = this->_y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(270)
	Float tmp13 = k;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(270)
	Float tmp14 = this->step;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(270)
	Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(270)
	Float tmp16 = tmp12->calculate(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(270)
	Float tmp17 = (tmp11 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(270)
	Float dY = tmp17;		HX_STACK_VAR(dY,"dY");
	HX_STACK_LINE(272)
	Float tmp18 = dY;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(272)
	Float tmp19 = dX;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(272)
	Float tmp20 = ::Math_obj::atan2(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(272)
	Float tmp21 = ::Math_obj::PI;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(272)
	Float tmp22 = (Float((int)180) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(272)
	Float tmp23 = (tmp20 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(272)
	Float angle = tmp23;		HX_STACK_VAR(angle,"angle");
	HX_STACK_LINE(273)
	Float tmp24 = angle;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(273)
	Float tmp25 = this->offset;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(273)
	Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(273)
	Float tmp27 = hx::Mod(tmp26,(int)360);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(273)
	angle = tmp27;
	HX_STACK_LINE(275)
	Float tmp28 = angle;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(275)
	return tmp28;
}


HX_DEFINE_DYNAMIC_FUNC1(RotationPath_obj,calculate,return )

Float RotationPath_obj::get_end( ){
	HX_STACK_FRAME("motion.RotationPath","get_end",0xfaf4905f,"motion.RotationPath.get_end","motion/MotionPath.hx",287,0x95e57daa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(289)
	Float tmp = this->calculate(((Float)1.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(RotationPath_obj,get_end,return )


RotationPath_obj::RotationPath_obj()
{
}

void RotationPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RotationPath);
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(step,"step");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_END_CLASS();
}

void RotationPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(step,"step");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_y,"_y");
}

Dynamic RotationPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return inCallProp == hx::paccAlways ? get_end() : end; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_end") ) { return get_end_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RotationPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< ::motion::ComponentPath >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< ::motion::ComponentPath >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { step=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RotationPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"));
	outFields->push(HX_HCSTRING("_x","\x39","\x53","\x00","\x00"));
	outFields->push(HX_HCSTRING("_y","\x3a","\x53","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(RotationPath_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsFloat,(int)offsetof(RotationPath_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{hx::fsFloat,(int)offsetof(RotationPath_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsFloat,(int)offsetof(RotationPath_obj,step),HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c")},
	{hx::fsObject /*::motion::ComponentPath*/ ,(int)offsetof(RotationPath_obj,_x),HX_HCSTRING("_x","\x39","\x53","\x00","\x00")},
	{hx::fsObject /*::motion::ComponentPath*/ ,(int)offsetof(RotationPath_obj,_y),HX_HCSTRING("_y","\x3a","\x53","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("step","\x4c","\xe7","\x5b","\x4c"),
	HX_HCSTRING("_x","\x39","\x53","\x00","\x00"),
	HX_HCSTRING("_y","\x3a","\x53","\x00","\x00"),
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("get_end","\x72","\xcc","\xc1","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RotationPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RotationPath_obj::__mClass,"__mClass");
};

#endif

hx::Class RotationPath_obj::__mClass;

void RotationPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.RotationPath","\x5b","\xef","\x4a","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RotationPath_obj >;
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
