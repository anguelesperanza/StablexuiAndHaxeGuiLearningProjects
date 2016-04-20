#ifndef INCLUDED_ru_stablex_ui_widgets_Bmp
#define INCLUDED_ru_stablex_ui_widgets_Bmp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Bmp)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES  Bmp_obj : public ::ru::stablex::ui::widgets::Widget_obj{
	public:
		typedef ::ru::stablex::ui::widgets::Widget_obj super;
		typedef Bmp_obj OBJ_;
		Bmp_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.widgets.Bmp")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bmp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bmp_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bmp","\x25","\x74","\x32","\x00"); }

		static Void _applyScalingToMx( ::openfl::geom::Matrix mx,::openfl::display::BitmapData bmp,::ru::stablex::ui::widgets::Bmp widget);
		static Dynamic _applyScalingToMx_dyn();

		::String _src;
		bool smooth;
		bool stretch;
		bool keepAspect;
		bool autoWidth;
		bool autoHeight;
		::openfl::display::BitmapData _bitmapData;
		int xOffset;
		int yOffset;
		bool drawPortion;
		virtual Void refresh( );

		virtual Void _draw( ::openfl::display::BitmapData bmp);
		Dynamic _draw_dyn();

		virtual ::String get_src( );
		Dynamic get_src_dyn();

		virtual ::String set_src( ::String src);
		Dynamic set_src_dyn();

		virtual ::openfl::display::BitmapData get_bitmapData( );
		Dynamic get_bitmapData_dyn();

		virtual ::openfl::display::BitmapData set_bitmapData( ::openfl::display::BitmapData bitmapData);
		Dynamic set_bitmapData_dyn();

		virtual bool set_autoSize( bool as);
		Dynamic set_autoSize_dyn();

		virtual int set_xOffset( int x);
		Dynamic set_xOffset_dyn();

		virtual int set_yOffset( int y);
		Dynamic set_yOffset_dyn();

		virtual Float set_w( Float w);

		virtual Float set_widthPt( Float wp);

		virtual Float set_heightPt( Float hp);

		virtual Float set_h( Float h);

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets

#endif /* INCLUDED_ru_stablex_ui_widgets_Bmp */ 
