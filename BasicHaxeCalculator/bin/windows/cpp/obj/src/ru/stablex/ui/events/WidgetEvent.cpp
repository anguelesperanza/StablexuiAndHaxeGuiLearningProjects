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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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
#ifndef INCLUDED_ru_stablex_ui_events_WidgetEvent
#include <ru/stablex/ui/events/WidgetEvent.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
namespace ru{
namespace stablex{
namespace ui{
namespace events{

Void WidgetEvent_obj::__construct(::String type,::ru::stablex::ui::widgets::Widget widget)
{
HX_STACK_FRAME("ru.stablex.ui.events.WidgetEvent","new",0x8a097b51,"ru.stablex.ui.events.WidgetEvent.new","ru/stablex/ui/events/WidgetEvent.hx",40,0x896de261)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(widget,"widget")
{
	HX_STACK_LINE(41)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	super::__construct(tmp,null(),null());
	HX_STACK_LINE(42)
	this->_widget = widget;
}
;
	return null();
}

//WidgetEvent_obj::~WidgetEvent_obj() { }

Dynamic WidgetEvent_obj::__CreateEmpty() { return  new WidgetEvent_obj; }
hx::ObjectPtr< WidgetEvent_obj > WidgetEvent_obj::__new(::String type,::ru::stablex::ui::widgets::Widget widget)
{  hx::ObjectPtr< WidgetEvent_obj > _result_ = new WidgetEvent_obj();
	_result_->__construct(type,widget);
	return _result_;}

Dynamic WidgetEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WidgetEvent_obj > _result_ = new WidgetEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::ru::stablex::ui::widgets::Widget WidgetEvent_obj::get_widget( ){
	HX_STACK_FRAME("ru.stablex.ui.events.WidgetEvent","get_widget",0xdbab24bc,"ru.stablex.ui.events.WidgetEvent.get_widget","ru/stablex/ui/events/WidgetEvent.hx",50,0x896de261)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::ru::stablex::ui::widgets::Widget tmp = this->_widget;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	if ((tmp1)){
		HX_STACK_LINE(51)
		Dynamic tmp3 = this->currentTarget;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		tmp2 = ::Std_obj::is(tmp5,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());
	}
	else{
		HX_STACK_LINE(51)
		tmp2 = false;
	}
	HX_STACK_LINE(51)
	if ((tmp2)){
		HX_STACK_LINE(52)
		Dynamic tmp3 = this->currentTarget;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		this->_widget = ((::ru::stablex::ui::widgets::Widget)(tmp3));
	}
	HX_STACK_LINE(55)
	::ru::stablex::ui::widgets::Widget tmp3 = this->_widget;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(55)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(WidgetEvent_obj,get_widget,return )

::String WidgetEvent_obj::CREATE;

::String WidgetEvent_obj::FREE;

::String WidgetEvent_obj::RESIZE;

::String WidgetEvent_obj::INITIAL_RESIZE;

::String WidgetEvent_obj::CHANGE;

::String WidgetEvent_obj::SCROLL_START;

::String WidgetEvent_obj::SCROLL_STOP;

::String WidgetEvent_obj::ADDED;

::String WidgetEvent_obj::REMOVED;


WidgetEvent_obj::WidgetEvent_obj()
{
}

void WidgetEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WidgetEvent);
	HX_MARK_MEMBER_NAME(_widget,"_widget");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WidgetEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_widget,"_widget");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic WidgetEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"widget") ) { if (inCallProp == hx::paccAlways) return get_widget(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_widget") ) { return _widget; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_widget") ) { return get_widget_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WidgetEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_widget") ) { _widget=inValue.Cast< ::ru::stablex::ui::widgets::Widget >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WidgetEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("widget","\xc4","\xaf","\xf2","\x4b"));
	outFields->push(HX_HCSTRING("_widget","\x63","\xc1","\x69","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::ru::stablex::ui::widgets::Widget*/ ,(int)offsetof(WidgetEvent_obj,_widget),HX_HCSTRING("_widget","\x63","\xc1","\x69","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &WidgetEvent_obj::CREATE,HX_HCSTRING("CREATE","\xfc","\x12","\x92","\x2e")},
	{hx::fsString,(void *) &WidgetEvent_obj::FREE,HX_HCSTRING("FREE","\xac","\x64","\x83","\x2e")},
	{hx::fsString,(void *) &WidgetEvent_obj::RESIZE,HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba")},
	{hx::fsString,(void *) &WidgetEvent_obj::INITIAL_RESIZE,HX_HCSTRING("INITIAL_RESIZE","\xaf","\x47","\x9b","\x55")},
	{hx::fsString,(void *) &WidgetEvent_obj::CHANGE,HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69")},
	{hx::fsString,(void *) &WidgetEvent_obj::SCROLL_START,HX_HCSTRING("SCROLL_START","\x50","\x7f","\xda","\x0c")},
	{hx::fsString,(void *) &WidgetEvent_obj::SCROLL_STOP,HX_HCSTRING("SCROLL_STOP","\xb4","\x80","\x2b","\xf9")},
	{hx::fsString,(void *) &WidgetEvent_obj::ADDED,HX_HCSTRING("ADDED","\xa0","\x0c","\x32","\x9a")},
	{hx::fsString,(void *) &WidgetEvent_obj::REMOVED,HX_HCSTRING("REMOVED","\x80","\xf3","\xd3","\x72")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_widget","\x63","\xc1","\x69","\xba"),
	HX_HCSTRING("get_widget","\x8d","\x1f","\x7a","\x3c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WidgetEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WidgetEvent_obj::CREATE,"CREATE");
	HX_MARK_MEMBER_NAME(WidgetEvent_obj::FREE,"FREE");
	HX_MARK_MEMBER_NAME(WidgetEvent_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(WidgetEvent_obj::INITIAL_RESIZE,"INITIAL_RESIZE");
	HX_MARK_MEMBER_NAME(WidgetEvent_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(WidgetEvent_obj::SCROLL_START,"SCROLL_START");
	HX_MARK_MEMBER_NAME(WidgetEvent_obj::SCROLL_STOP,"SCROLL_STOP");
	HX_MARK_MEMBER_NAME(WidgetEvent_obj::ADDED,"ADDED");
	HX_MARK_MEMBER_NAME(WidgetEvent_obj::REMOVED,"REMOVED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WidgetEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WidgetEvent_obj::CREATE,"CREATE");
	HX_VISIT_MEMBER_NAME(WidgetEvent_obj::FREE,"FREE");
	HX_VISIT_MEMBER_NAME(WidgetEvent_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(WidgetEvent_obj::INITIAL_RESIZE,"INITIAL_RESIZE");
	HX_VISIT_MEMBER_NAME(WidgetEvent_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(WidgetEvent_obj::SCROLL_START,"SCROLL_START");
	HX_VISIT_MEMBER_NAME(WidgetEvent_obj::SCROLL_STOP,"SCROLL_STOP");
	HX_VISIT_MEMBER_NAME(WidgetEvent_obj::ADDED,"ADDED");
	HX_VISIT_MEMBER_NAME(WidgetEvent_obj::REMOVED,"REMOVED");
};

#endif

hx::Class WidgetEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CREATE","\xfc","\x12","\x92","\x2e"),
	HX_HCSTRING("FREE","\xac","\x64","\x83","\x2e"),
	HX_HCSTRING("RESIZE","\xf4","\x05","\xfe","\xba"),
	HX_HCSTRING("INITIAL_RESIZE","\xaf","\x47","\x9b","\x55"),
	HX_HCSTRING("CHANGE","\x70","\x3d","\xf5","\x69"),
	HX_HCSTRING("SCROLL_START","\x50","\x7f","\xda","\x0c"),
	HX_HCSTRING("SCROLL_STOP","\xb4","\x80","\x2b","\xf9"),
	HX_HCSTRING("ADDED","\xa0","\x0c","\x32","\x9a"),
	HX_HCSTRING("REMOVED","\x80","\xf3","\xd3","\x72"),
	::String(null()) };

void WidgetEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.events.WidgetEvent","\xdf","\x7e","\x5b","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WidgetEvent_obj >;
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

void WidgetEvent_obj::__boot()
{
	CREATE= HX_HCSTRING("widgetCreate","\xe0","\xb5","\xb2","\x80");
	FREE= HX_HCSTRING("widgetFree","\x90","\xaa","\x9b","\x55");
	RESIZE= HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d");
	INITIAL_RESIZE= HX_HCSTRING("widgetInitialResize","\x34","\x2f","\xdc","\x47");
	CHANGE= HX_HCSTRING("widgetChange","\x54","\xe0","\x15","\xbc");
	SCROLL_START= HX_HCSTRING("widgetScrollStart","\xb1","\xf3","\xe8","\x19");
	SCROLL_STOP= HX_HCSTRING("widgetScrollStop","\x93","\x0f","\xda","\x24");
	ADDED= HX_HCSTRING("widgetAdded","\x5c","\xee","\x56","\xa8");
	REMOVED= HX_HCSTRING("widgetRemoved","\x3c","\xd8","\x41","\xfd");
}

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace events
