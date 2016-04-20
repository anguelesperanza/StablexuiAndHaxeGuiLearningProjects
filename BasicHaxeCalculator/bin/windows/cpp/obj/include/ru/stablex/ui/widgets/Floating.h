#ifndef INCLUDED_ru_stablex_ui_widgets_Floating
#define INCLUDED_ru_stablex_ui_widgets_Floating

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ru_stablex_ui_widgets_Box
#include <ru/stablex/ui/widgets/Box.h>
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
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Box)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Floating)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES  Floating_obj : public ::ru::stablex::ui::widgets::Box_obj{
	public:
		typedef ::ru::stablex::ui::widgets::Box_obj super;
		typedef Floating_obj OBJ_;
		Floating_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.widgets.Floating")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Floating_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Floating_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Floating","\xe6","\x6c","\x51","\xb7"); }

		bool shown;
		::String renderTo;
		Float scaleContent;
		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual bool _usingParentSize( );
		Dynamic _usingParentSize_dyn();

		virtual Void _onStageResize( ::openfl::events::Event e);
		Dynamic _onStageResize_dyn();

		virtual ::openfl::display::DisplayObject getRenderTarget( );
		Dynamic getRenderTarget_dyn();

		virtual Void free( hx::Null< bool >  recursive);

		virtual Float set_scaleContent( Float scaleContent);
		Dynamic set_scaleContent_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets

#endif /* INCLUDED_ru_stablex_ui_widgets_Floating */ 
