#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Elastic
#include <motion/easing/Elastic.h>
#endif
#ifndef INCLUDED_motion_easing_ElasticEaseIn
#include <motion/easing/ElasticEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_ElasticEaseInOut
#include <motion/easing/ElasticEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_ElasticEaseOut
#include <motion/easing/ElasticEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void Elastic_obj::__construct()
{
	return null();
}

//Elastic_obj::~Elastic_obj() { }

Dynamic Elastic_obj::__CreateEmpty() { return  new Elastic_obj; }
hx::ObjectPtr< Elastic_obj > Elastic_obj::__new()
{  hx::ObjectPtr< Elastic_obj > _result_ = new Elastic_obj();
	_result_->__construct();
	return _result_;}

Dynamic Elastic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Elastic_obj > _result_ = new Elastic_obj();
	_result_->__construct();
	return _result_;}

::motion::easing::IEasing Elastic_obj::get_easeIn( ){
	HX_STACK_FRAME("motion.easing.Elastic","get_easeIn",0xc0bedf00,"motion.easing.Elastic.get_easeIn","motion/easing/Elastic.hx",20,0x73ac9cf4)
	HX_STACK_LINE(22)
	::motion::easing::ElasticEaseIn tmp = ::motion::easing::ElasticEaseIn_obj::__new(((Float)0.1),((Float)0.4));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Elastic_obj,get_easeIn,return )

::motion::easing::IEasing Elastic_obj::get_easeInOut( ){
	HX_STACK_FRAME("motion.easing.Elastic","get_easeInOut",0x30d2d96e,"motion.easing.Elastic.get_easeInOut","motion/easing/Elastic.hx",27,0x73ac9cf4)
	HX_STACK_LINE(29)
	::motion::easing::ElasticEaseInOut tmp = ::motion::easing::ElasticEaseInOut_obj::__new(((Float)0.1),((Float)0.4));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Elastic_obj,get_easeInOut,return )

::motion::easing::IEasing Elastic_obj::get_easeOut( ){
	HX_STACK_FRAME("motion.easing.Elastic","get_easeOut",0xe648d513,"motion.easing.Elastic.get_easeOut","motion/easing/Elastic.hx",34,0x73ac9cf4)
	HX_STACK_LINE(36)
	::motion::easing::ElasticEaseOut tmp = ::motion::easing::ElasticEaseOut_obj::__new(((Float)0.1),((Float)0.4));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Elastic_obj,get_easeOut,return )


Elastic_obj::Elastic_obj()
{
}

bool Elastic_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeIn(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeOut(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeInOut(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_easeIn") ) { outValue = get_easeIn_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_easeOut") ) { outValue = get_easeOut_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_easeInOut") ) { outValue = get_easeInOut_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Elastic_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Elastic_obj::__mClass,"__mClass");
};

#endif

hx::Class Elastic_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_easeIn","\x3c","\x93","\xc1","\x78"),
	HX_HCSTRING("get_easeInOut","\xb2","\x72","\x21","\x08"),
	HX_HCSTRING("get_easeOut","\x57","\xd5","\xa3","\x30"),
	::String(null()) };

void Elastic_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.Elastic","\x2a","\xb6","\xf1","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Elastic_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Elastic_obj >;
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
