#ifndef INCLUDED_ru_stablex_ui_events_WidgetEvent
#define INCLUDED_ru_stablex_ui_events_WidgetEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
HX_DECLARE_CLASS4(ru,stablex,ui,events,WidgetEvent)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  WidgetEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef WidgetEvent_obj OBJ_;
		WidgetEvent_obj();
		Void __construct(::String type,::ru::stablex::ui::widgets::Widget widget);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.events.WidgetEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WidgetEvent_obj > __new(::String type,::ru::stablex::ui::widgets::Widget widget);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WidgetEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("WidgetEvent","\x96","\x79","\x0a","\xe6"); }

		static void __boot();
		static ::String CREATE;
		static ::String FREE;
		static ::String RESIZE;
		static ::String INITIAL_RESIZE;
		static ::String CHANGE;
		static ::String SCROLL_START;
		static ::String SCROLL_STOP;
		static ::String ADDED;
		static ::String REMOVED;
		::ru::stablex::ui::widgets::Widget _widget;
		virtual ::ru::stablex::ui::widgets::Widget get_widget( );
		Dynamic get_widget_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_ru_stablex_ui_events_WidgetEvent */ 
