#ifndef INCLUDED_ru_stablex_ui_widgets_Tip
#define INCLUDED_ru_stablex_ui_widgets_Tip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ru_stablex_ui_widgets_Floating
#include <ru/stablex/ui/widgets/Floating.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
HX_DECLARE_CLASS4(ru,stablex,ui,events,WidgetEvent)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Box)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Floating)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Text)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Tip)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES  Tip_obj : public ::ru::stablex::ui::widgets::Floating_obj{
	public:
		typedef ::ru::stablex::ui::widgets::Floating_obj super;
		typedef Tip_obj OBJ_;
		Tip_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.widgets.Tip")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tip_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tip_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tip","\x3b","\x19","\x40","\x00"); }

		::ru::stablex::ui::widgets::Widget target;
		::ru::stablex::ui::widgets::Text label;
		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String s);
		Dynamic set_text_dyn();

		virtual Void bindTo( ::ru::stablex::ui::widgets::Widget w);
		Dynamic bindTo_dyn();

		virtual Void showTooltip( ::openfl::events::MouseEvent e);
		Dynamic showTooltip_dyn();

		virtual Void moveTooltip( ::openfl::events::MouseEvent e);
		Dynamic moveTooltip_dyn();

		virtual Void hideTooltip( ::openfl::events::MouseEvent e);
		Dynamic hideTooltip_dyn();

		virtual Void _adjustPosition( );
		Dynamic _adjustPosition_dyn();

		virtual Void freeTooltip( ::ru::stablex::ui::events::WidgetEvent e);
		Dynamic freeTooltip_dyn();

		virtual Void _removeTargetListeners( );
		Dynamic _removeTargetListeners_dyn();

		virtual Void free( hx::Null< bool >  recursive);

		virtual Void refresh( );

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets

#endif /* INCLUDED_ru_stablex_ui_widgets_Tip */ 
