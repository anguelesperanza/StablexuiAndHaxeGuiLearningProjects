#include <hxcpp.h>

#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion__Actuate_TransformOptions
#include <motion/_Actuate/TransformOptions.h>
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
#ifndef INCLUDED_motion_actuators_TransformActuator
#include <motion/actuators/TransformActuator.h>
#endif
namespace motion{
namespace _Actuate{

Void TransformOptions_obj::__construct(Dynamic target,Float duration,bool overwrite)
{
HX_STACK_FRAME("motion._Actuate.TransformOptions","new",0x91b60fea,"motion._Actuate.TransformOptions.new","motion/Actuate.hx",570,0xcac92ba8)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(overwrite,"overwrite")
{
	HX_STACK_LINE(572)
	this->target = target;
	HX_STACK_LINE(573)
	this->duration = duration;
	HX_STACK_LINE(574)
	this->overwrite = overwrite;
}
;
	return null();
}

//TransformOptions_obj::~TransformOptions_obj() { }

Dynamic TransformOptions_obj::__CreateEmpty() { return  new TransformOptions_obj; }
hx::ObjectPtr< TransformOptions_obj > TransformOptions_obj::__new(Dynamic target,Float duration,bool overwrite)
{  hx::ObjectPtr< TransformOptions_obj > _result_ = new TransformOptions_obj();
	_result_->__construct(target,duration,overwrite);
	return _result_;}

Dynamic TransformOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TransformOptions_obj > _result_ = new TransformOptions_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::motion::actuators::IGenericActuator TransformOptions_obj::color( hx::Null< int >  __o_value,hx::Null< Float >  __o_strength,Dynamic alpha){
int value = __o_value.Default(0);
Float strength = __o_strength.Default(1);
	HX_STACK_FRAME("motion._Actuate.TransformOptions","color",0xa875276d,"motion._Actuate.TransformOptions.color","motion/Actuate.hx",586,0xcac92ba8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(strength,"strength")
	HX_STACK_ARG(alpha,"alpha")
{
		struct _Function_1_1{
			inline static Dynamic Block( int &value,Float &strength){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/Actuate.hx",588,0xcac92ba8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("colorValue","\x0e","\x97","\x24","\x56") , value,false);
					__result->Add(HX_HCSTRING("colorStrength","\x04","\x9b","\x51","\x91") , strength,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(588)
		Dynamic tmp = _Function_1_1::Block(value,strength);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(588)
		Dynamic properties = tmp;		HX_STACK_VAR(properties,"properties");
		HX_STACK_LINE(590)
		bool tmp1 = (alpha != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(590)
		if ((tmp1)){
			HX_STACK_LINE(592)
			properties->__FieldRef(HX_HCSTRING("colorAlpha","\xfb","\xbe","\x02","\x46")) = alpha;
		}
		HX_STACK_LINE(596)
		Dynamic tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(596)
		Float tmp3 = this->duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(596)
		Dynamic tmp4 = properties;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(596)
		bool tmp5 = this->overwrite;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(596)
		::motion::actuators::GenericActuator tmp6 = ::motion::Actuate_obj::tween(tmp2,tmp3,tmp4,tmp5,hx::ClassOf< ::motion::actuators::TransformActuator >());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(596)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(TransformOptions_obj,color,return )

::motion::actuators::IGenericActuator TransformOptions_obj::sound( Dynamic volume,Dynamic pan){
	HX_STACK_FRAME("motion._Actuate.TransformOptions","sound",0xdee542d9,"motion._Actuate.TransformOptions.sound","motion/Actuate.hx",607,0xcac92ba8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(volume,"volume")
	HX_STACK_ARG(pan,"pan")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/Actuate.hx",609,0xcac92ba8)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(609)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(609)
	Dynamic properties = tmp;		HX_STACK_VAR(properties,"properties");
	HX_STACK_LINE(611)
	bool tmp1 = (volume != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(611)
	if ((tmp1)){
		HX_STACK_LINE(613)
		properties->__FieldRef(HX_HCSTRING("soundVolume","\x09","\x30","\x80","\x12")) = volume;
	}
	HX_STACK_LINE(617)
	bool tmp2 = (pan != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(617)
	if ((tmp2)){
		HX_STACK_LINE(619)
		properties->__FieldRef(HX_HCSTRING("soundPan","\xce","\x27","\xa3","\x19")) = pan;
	}
	HX_STACK_LINE(623)
	Dynamic tmp3 = this->target;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(623)
	Float tmp4 = this->duration;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(623)
	Dynamic tmp5 = properties;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(623)
	bool tmp6 = this->overwrite;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(623)
	::motion::actuators::GenericActuator tmp7 = ::motion::Actuate_obj::tween(tmp3,tmp4,tmp5,tmp6,hx::ClassOf< ::motion::actuators::TransformActuator >());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(623)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(TransformOptions_obj,sound,return )


TransformOptions_obj::TransformOptions_obj()
{
}

void TransformOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransformOptions);
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(overwrite,"overwrite");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void TransformOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(overwrite,"overwrite");
	HX_VISIT_MEMBER_NAME(target,"target");
}

Dynamic TransformOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color_dyn(); }
		if (HX_FIELD_EQ(inName,"sound") ) { return sound_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { return overwrite; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TransformOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { overwrite=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransformOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("overwrite","\x0b","\x8b","\xed","\xa0"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TransformOptions_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsBool,(int)offsetof(TransformOptions_obj,overwrite),HX_HCSTRING("overwrite","\x0b","\x8b","\xed","\xa0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TransformOptions_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("overwrite","\x0b","\x8b","\xed","\xa0"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TransformOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TransformOptions_obj::__mClass,"__mClass");
};

#endif

hx::Class TransformOptions_obj::__mClass;

void TransformOptions_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion._Actuate.TransformOptions","\xf8","\x92","\x69","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TransformOptions_obj >;
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
