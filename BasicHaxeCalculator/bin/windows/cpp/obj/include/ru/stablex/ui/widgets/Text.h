#ifndef INCLUDED_ru_stablex_ui_widgets_Text
#define INCLUDED_ru_stablex_ui_widgets_Text

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
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Box)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Text)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES  Text_obj : public ::ru::stablex::ui::widgets::Box_obj{
	public:
		typedef ::ru::stablex::ui::widgets::Box_obj super;
		typedef Text_obj OBJ_;
		Text_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.widgets.Text")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Text_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Text_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Text","\xcd","\xf8","\xd2","\x37"); }

		::openfl::text::TextField label;
		::openfl::text::TextFormat format;
		::openfl::text::TextFormat _hightlightFormat;
		bool highlighted;
		virtual ::openfl::text::TextFormat get_highlightFormat( );
		Dynamic get_highlightFormat_dyn();

		virtual ::openfl::text::TextFormat set_highlightFormat( ::openfl::text::TextFormat hl);
		Dynamic set_highlightFormat_dyn();

		virtual Void refresh( );

		virtual Void highlight( );
		Dynamic highlight_dyn();

		virtual Void unhighlight( );
		Dynamic unhighlight_dyn();

		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String txt);
		Dynamic set_text_dyn();

		virtual Void html5TextFieldSizeWorkaround( );
		Dynamic html5TextFieldSizeWorkaround_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets

#endif /* INCLUDED_ru_stablex_ui_widgets_Text */ 
