#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_ru_stablex_Assets
#include <ru/stablex/Assets.h>
#endif
namespace ru{
namespace stablex{

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_getBitmapData,Assets_obj)
::openfl::display::BitmapData run(::String src,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
{
		HX_STACK_FRAME("ru.stablex.Assets","getBitmapData",0xc0d9f520,"ru.stablex.Assets.getBitmapData","ru/stablex/Assets.hx",22,0xd2a01efd)
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(useCache,"useCache")
		HX_STACK_LINE(23)
		::String tmp = src;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		bool tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		::openfl::display::BitmapData tmp2 = ::openfl::Assets_obj::getBitmapData(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		return tmp2;
	}
}
HX_END_LOCAL_FUNC2(return )
HX_END_DEFAULT_FUNC

Dynamic Assets_obj::getBitmapData;

HX_BEGIN_DEFAULT_FUNC(__default_getBytes,Assets_obj)
::openfl::utils::ByteArrayData run(::String src){
	HX_STACK_FRAME("ru.stablex.Assets","getBytes",0x16b50264,"ru.stablex.Assets.getBytes","ru/stablex/Assets.hx",31,0xd2a01efd)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(32)
	::String tmp = src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::openfl::utils::ByteArrayData tmp1 = ::openfl::Assets_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	return tmp1;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

Dynamic Assets_obj::getBytes;

::openfl::text::Font Assets_obj::getFont( ::String src){
	HX_STACK_FRAME("ru.stablex.Assets","getFont",0xa80685f6,"ru.stablex.Assets.getFont","ru/stablex/Assets.hx",41,0xd2a01efd)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(42)
	::String tmp = src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::openfl::text::Font tmp1 = ::openfl::Assets_obj::getFont(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

HX_BEGIN_DEFAULT_FUNC(__default_getSound,Assets_obj)
::openfl::media::Sound run(::String src){
	HX_STACK_FRAME("ru.stablex.Assets","getSound",0xd9e986c8,"ru.stablex.Assets.getSound","ru/stablex/Assets.hx",50,0xd2a01efd)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(51)
	::String tmp = src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	::openfl::media::Sound tmp1 = ::openfl::Assets_obj::getSound(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	return tmp1;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

Dynamic Assets_obj::getSound;

HX_BEGIN_DEFAULT_FUNC(__default_getText,Assets_obj)
::String run(::String src){
	HX_STACK_FRAME("ru.stablex.Assets","getText",0xb13ff4d4,"ru.stablex.Assets.getText","ru/stablex/Assets.hx",59,0xd2a01efd)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(60)
	::String tmp = src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	::String tmp1 = ::openfl::Assets_obj::getText(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	return tmp1;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

Dynamic Assets_obj::getText;


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes; return true;  }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData; return true;  }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getText") ) { getText=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { getBytes=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"getSound") ) { getSound=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { getBitmapData=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::getBitmapData,HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::getBytes,HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::getSound,HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::getText,HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::getBitmapData,"getBitmapData");
	HX_MARK_MEMBER_NAME(Assets_obj::getBytes,"getBytes");
	HX_MARK_MEMBER_NAME(Assets_obj::getSound,"getSound");
	HX_MARK_MEMBER_NAME(Assets_obj::getText,"getText");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::getBitmapData,"getBitmapData");
	HX_VISIT_MEMBER_NAME(Assets_obj::getBytes,"getBytes");
	HX_VISIT_MEMBER_NAME(Assets_obj::getSound,"getSound");
	HX_VISIT_MEMBER_NAME(Assets_obj::getText,"getText");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.Assets","\xdf","\x7f","\x51","\x8e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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

void Assets_obj::__boot()
{
	getBitmapData = new __default_getBitmapData;

	getBytes = new __default_getBytes;

	getSound = new __default_getSound;

	getText = new __default_getText;

}

} // end namespace ru
} // end namespace stablex
