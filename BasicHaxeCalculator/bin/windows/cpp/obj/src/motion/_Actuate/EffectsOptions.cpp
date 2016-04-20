#include <hxcpp.h>

#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion__Actuate_EffectsOptions
#include <motion/_Actuate/EffectsOptions.h>
#endif
#ifndef INCLUDED_motion_actuators_FilterActuator
#include <motion/actuators/FilterActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace motion{
namespace _Actuate{

Void EffectsOptions_obj::__construct(::openfl::display::DisplayObject target,Float duration,bool overwrite)
{
HX_STACK_FRAME("motion._Actuate.EffectsOptions","new",0xd8cd76d4,"motion._Actuate.EffectsOptions.new","motion/Actuate.hx",535,0xcac92ba8)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(overwrite,"overwrite")
{
	HX_STACK_LINE(537)
	this->target = target;
	HX_STACK_LINE(538)
	this->duration = duration;
	HX_STACK_LINE(539)
	this->overwrite = overwrite;
}
;
	return null();
}

//EffectsOptions_obj::~EffectsOptions_obj() { }

Dynamic EffectsOptions_obj::__CreateEmpty() { return  new EffectsOptions_obj; }
hx::ObjectPtr< EffectsOptions_obj > EffectsOptions_obj::__new(::openfl::display::DisplayObject target,Float duration,bool overwrite)
{  hx::ObjectPtr< EffectsOptions_obj > _result_ = new EffectsOptions_obj();
	_result_->__construct(target,duration,overwrite);
	return _result_;}

Dynamic EffectsOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EffectsOptions_obj > _result_ = new EffectsOptions_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::motion::actuators::IGenericActuator EffectsOptions_obj::filter( Dynamic reference,Dynamic properties){
	HX_STACK_FRAME("motion._Actuate.EffectsOptions","filter",0x8473f9c4,"motion._Actuate.EffectsOptions.filter","motion/Actuate.hx",550,0xcac92ba8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(reference,"reference")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(552)
	properties->__FieldRef(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")) = reference;
	HX_STACK_LINE(554)
	::openfl::display::DisplayObject tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(554)
	Float tmp1 = this->duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(554)
	Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(554)
	bool tmp3 = this->overwrite;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(554)
	::motion::actuators::GenericActuator tmp4 = ::motion::Actuate_obj::tween(tmp,tmp1,tmp2,tmp3,hx::ClassOf< ::motion::actuators::FilterActuator >());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(554)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(EffectsOptions_obj,filter,return )


EffectsOptions_obj::EffectsOptions_obj()
{
}

void EffectsOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EffectsOptions);
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(overwrite,"overwrite");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void EffectsOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(overwrite,"overwrite");
	HX_VISIT_MEMBER_NAME(target,"target");
}

Dynamic EffectsOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { return overwrite; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EffectsOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { overwrite=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EffectsOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("overwrite","\x0b","\x8b","\xed","\xa0"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(EffectsOptions_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsBool,(int)offsetof(EffectsOptions_obj,overwrite),HX_HCSTRING("overwrite","\x0b","\x8b","\xed","\xa0")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(EffectsOptions_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("overwrite","\x0b","\x8b","\xed","\xa0"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EffectsOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EffectsOptions_obj::__mClass,"__mClass");
};

#endif

hx::Class EffectsOptions_obj::__mClass;

void EffectsOptions_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion._Actuate.EffectsOptions","\xe2","\xbc","\x74","\xfa");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EffectsOptions_obj >;
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
} // end namespace _Actuate
