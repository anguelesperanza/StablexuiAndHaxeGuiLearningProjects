#include <hxcpp.h>

#ifndef INCLUDED_ru_stablex_Err
#include <ru/stablex/Err.h>
#endif
namespace ru{
namespace stablex{

Void Err_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.Err","new",0x8132f7fb,"ru.stablex.Err.new","ru/stablex/Err.hx",33,0x52167657)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Err_obj::~Err_obj() { }

Dynamic Err_obj::__CreateEmpty() { return  new Err_obj; }
hx::ObjectPtr< Err_obj > Err_obj::__new()
{  hx::ObjectPtr< Err_obj > _result_ = new Err_obj();
	_result_->__construct();
	return _result_;}

Dynamic Err_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Err_obj > _result_ = new Err_obj();
	_result_->__construct();
	return _result_;}

Void Err_obj::trigger( ::String msg){
{
		HX_STACK_FRAME("ru.stablex.Err","trigger",0xe1f9e653,"ru.stablex.Err.trigger","ru/stablex/Err.hx",16,0x52167657)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(23)
		::String tmp = msg;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		HX_STACK_DO_THROW(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Err_obj,trigger,(void))


Err_obj::Err_obj()
{
}

bool Err_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"trigger") ) { outValue = trigger_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Err_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Err_obj::__mClass,"__mClass");
};

#endif

hx::Class Err_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("trigger","\x38","\x55","\xdf","\x25"),
	::String(null()) };

void Err_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.Err","\x89","\xde","\xca","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Err_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Err_obj >;
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

} // end namespace ru
} // end namespace stablex
