#include <hxcpp.h>

#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
namespace motion{
namespace actuators{

Void PropertyDetails_obj::__construct(Dynamic target,::String propertyName,Float start,Float change,hx::Null< bool >  __o_isField)
{
HX_STACK_FRAME("motion.actuators.PropertyDetails","new",0xf86c0ab3,"motion.actuators.PropertyDetails.new","motion/actuators/PropertyDetails.hx",14,0xd7776fdf)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(propertyName,"propertyName")
HX_STACK_ARG(start,"start")
HX_STACK_ARG(change,"change")
HX_STACK_ARG(__o_isField,"isField")
bool isField = __o_isField.Default(true);
{
	HX_STACK_LINE(16)
	this->target = target;
	HX_STACK_LINE(17)
	this->propertyName = propertyName;
	HX_STACK_LINE(18)
	this->start = start;
	HX_STACK_LINE(19)
	this->change = change;
	HX_STACK_LINE(20)
	this->isField = isField;
}
;
	return null();
}

//PropertyDetails_obj::~PropertyDetails_obj() { }

Dynamic PropertyDetails_obj::__CreateEmpty() { return  new PropertyDetails_obj; }
hx::ObjectPtr< PropertyDetails_obj > PropertyDetails_obj::__new(Dynamic target,::String propertyName,Float start,Float change,hx::Null< bool >  __o_isField)
{  hx::ObjectPtr< PropertyDetails_obj > _result_ = new PropertyDetails_obj();
	_result_->__construct(target,propertyName,start,change,__o_isField);
	return _result_;}

Dynamic PropertyDetails_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PropertyDetails_obj > _result_ = new PropertyDetails_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}


PropertyDetails_obj::PropertyDetails_obj()
{
}

void PropertyDetails_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyDetails);
	HX_MARK_MEMBER_NAME(change,"change");
	HX_MARK_MEMBER_NAME(isField,"isField");
	HX_MARK_MEMBER_NAME(propertyName,"propertyName");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void PropertyDetails_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(change,"change");
	HX_VISIT_MEMBER_NAME(isField,"isField");
	HX_VISIT_MEMBER_NAME(propertyName,"propertyName");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(target,"target");
}

Dynamic PropertyDetails_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { return change; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isField") ) { return isField; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { return propertyName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PropertyDetails_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { change=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isField") ) { isField=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { propertyName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyDetails_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("change","\x70","\x91","\x72","\xb7"));
	outFields->push(HX_HCSTRING("isField","\x70","\x38","\x19","\x9d"));
	outFields->push(HX_HCSTRING("propertyName","\x40","\x35","\xe4","\x26"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(PropertyDetails_obj,change),HX_HCSTRING("change","\x70","\x91","\x72","\xb7")},
	{hx::fsBool,(int)offsetof(PropertyDetails_obj,isField),HX_HCSTRING("isField","\x70","\x38","\x19","\x9d")},
	{hx::fsString,(int)offsetof(PropertyDetails_obj,propertyName),HX_HCSTRING("propertyName","\x40","\x35","\xe4","\x26")},
	{hx::fsFloat,(int)offsetof(PropertyDetails_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PropertyDetails_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),
	HX_HCSTRING("isField","\x70","\x38","\x19","\x9d"),
	HX_HCSTRING("propertyName","\x40","\x35","\xe4","\x26"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PropertyDetails_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PropertyDetails_obj::__mClass,"__mClass");
};

#endif

hx::Class PropertyDetails_obj::__mClass;

void PropertyDetails_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.actuators.PropertyDetails","\x41","\x35","\xe6","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PropertyDetails_obj >;
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
} // end namespace actuators
