#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_ru_stablex_ui_skins_Paint
#include <ru/stablex/ui/skins/Paint.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_skins_Rect
#include <ru/stablex/ui/skins/Rect.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_skins_Skin
#include <ru/stablex/ui/skins/Skin.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
namespace ru{
namespace stablex{
namespace ui{
namespace skins{

Void Paint_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.ui.skins.Paint","new",0x4393a77a,"ru.stablex.ui.skins.Paint.new","ru/stablex/ui/skins/Paint.hx",10,0xa846c2b6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	this->alpha = ((Float)1);
	HX_STACK_LINE(13)
	this->color = (int)-1;
	HX_STACK_LINE(10)
	super::__construct();
}
;
	return null();
}

//Paint_obj::~Paint_obj() { }

Dynamic Paint_obj::__CreateEmpty() { return  new Paint_obj; }
hx::ObjectPtr< Paint_obj > Paint_obj::__new()
{  hx::ObjectPtr< Paint_obj > _result_ = new Paint_obj();
	_result_->__construct();
	return _result_;}

Dynamic Paint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Paint_obj > _result_ = new Paint_obj();
	_result_->__construct();
	return _result_;}

Void Paint_obj::draw( ::ru::stablex::ui::widgets::Widget w){
{
		HX_STACK_FRAME("ru.stablex.ui.skins.Paint","draw",0xd70c8baa,"ru.stablex.ui.skins.Paint.draw","ru/stablex/ui/skins/Paint.hx",22,0xa846c2b6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(23)
		int tmp = this->color;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		bool tmp1 = (tmp >= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		if ((tmp1)){
			HX_STACK_LINE(24)
			::openfl::display::Graphics tmp2 = w->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			int tmp3 = this->color;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(24)
			Float tmp4 = this->alpha;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			tmp2->beginFill(tmp3,tmp4);
		}
		HX_STACK_LINE(27)
		::ru::stablex::ui::widgets::Widget tmp2 = w;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		this->super::draw(tmp2);
		HX_STACK_LINE(29)
		int tmp3 = this->color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(29)
		bool tmp4 = (tmp3 >= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		if ((tmp4)){
			HX_STACK_LINE(30)
			::openfl::display::Graphics tmp5 = w->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(30)
			tmp5->endFill();
		}
	}
return null();
}



Paint_obj::Paint_obj()
{
}

Dynamic Paint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Paint_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Paint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Paint_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsFloat,(int)offsetof(Paint_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paint_obj::__mClass,"__mClass");
};

#endif

hx::Class Paint_obj::__mClass;

void Paint_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.skins.Paint","\x88","\x22","\xa0","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Paint_obj >;
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
} // end namespace skins
