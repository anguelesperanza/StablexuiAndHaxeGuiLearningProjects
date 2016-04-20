#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_layouts_Layout
#include <ru/stablex/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
namespace ru{
namespace stablex{
namespace ui{
namespace layouts{

Void Layout_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.ui.layouts.Layout","new",0x6dfbbc9f,"ru.stablex.ui.layouts.Layout.new","ru/stablex/ui/layouts/Layout.hx",28,0x7ee61871)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Layout_obj::~Layout_obj() { }

Dynamic Layout_obj::__CreateEmpty() { return  new Layout_obj; }
hx::ObjectPtr< Layout_obj > Layout_obj::__new()
{  hx::ObjectPtr< Layout_obj > _result_ = new Layout_obj();
	_result_->__construct();
	return _result_;}

Dynamic Layout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Layout_obj > _result_ = new Layout_obj();
	_result_->__construct();
	return _result_;}

Void Layout_obj::arrangeChildren( ::ru::stablex::ui::widgets::Widget Widget){
{
		HX_STACK_FRAME("ru.stablex.ui.layouts.Layout","arrangeChildren",0xc8e2774a,"ru.stablex.ui.layouts.Layout.arrangeChildren","ru/stablex/ui/layouts/Layout.hx",36,0x7ee61871)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Widget,"Widget")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,arrangeChildren,(void))

Dynamic Layout_obj::as( ::hx::Class cls){
	HX_STACK_FRAME("ru.stablex.ui.layouts.Layout","as",0xaa64f593,"ru.stablex.ui.layouts.Layout.as","ru/stablex/ui/layouts/Layout.hx",46,0x7ee61871)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(47)
	::hx::Class tmp = cls;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	bool tmp1 = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	if ((tmp1)){
		HX_STACK_LINE(47)
		tmp2 = ((Dynamic)(hx::ObjectPtr<OBJ_>(this)));
	}
	else{
		HX_STACK_LINE(47)
		tmp2 = null();
	}
	HX_STACK_LINE(47)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,as,return )


Layout_obj::Layout_obj()
{
}

Dynamic Layout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { return as_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrangeChildren") ) { return arrangeChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("arrangeChildren","\x8b","\xa8","\xa9","\x5e"),
	HX_HCSTRING("as","\xf2","\x54","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
};

#endif

hx::Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.layouts.Layout","\x2d","\x81","\xe3","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Layout_obj >;
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
} // end namespace ui
} // end namespace layouts
