#ifndef INCLUDED_ru_stablex_ui_widgets_Box
#define INCLUDED_ru_stablex_ui_widgets_Box

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
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
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Box)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES  Box_obj : public ::ru::stablex::ui::widgets::Widget_obj{
	public:
		typedef ::ru::stablex::ui::widgets::Widget_obj super;
		typedef Box_obj OBJ_;
		Box_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.widgets.Box")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Box_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Box_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Box","\xeb","\x75","\x32","\x00"); }

		bool vertical;
		Float paddingLeft;
		Float paddingRight;
		Float paddingTop;
		Float paddingBottom;
		Float childPadding;
		::String align;
		bool autoWidth;
		bool autoHeight;
		bool unifyChildren;
		bool intPositions;
		virtual Float _objWidth( ::openfl::display::DisplayObject obj);
		Dynamic _objWidth_dyn();

		virtual Float _objHeight( ::openfl::display::DisplayObject obj);
		Dynamic _objHeight_dyn();

		virtual Void _setObjX( ::openfl::display::DisplayObject obj,Float x);
		Dynamic _setObjX_dyn();

		virtual Void _setObjY( ::openfl::display::DisplayObject obj,Float y);
		Dynamic _setObjY_dyn();

		virtual Void refresh( );

		virtual Float _calcWidth( );
		Dynamic _calcWidth_dyn();

		virtual Float _calcHeight( );
		Dynamic _calcHeight_dyn();

		virtual Void _resizeWithPercent( ::ru::stablex::ui::widgets::Widget parent);

		virtual Void alignElements( );
		Dynamic alignElements_dyn();

		virtual Void _unifyChildren( );
		Dynamic _unifyChildren_dyn();

		virtual Void _vAlignTop( );
		Dynamic _vAlignTop_dyn();

		virtual Void _vAlignMiddle( );
		Dynamic _vAlignMiddle_dyn();

		virtual Void _vAlignBottom( );
		Dynamic _vAlignBottom_dyn();

		virtual Void _hAlignLeft( );
		Dynamic _hAlignLeft_dyn();

		virtual Void _hAlignRight( );
		Dynamic _hAlignRight_dyn();

		virtual Void _hAlignCenter( );
		Dynamic _hAlignCenter_dyn();

		virtual ::openfl::display::DisplayObject addChild( ::openfl::display::DisplayObject child);

		virtual ::openfl::display::DisplayObject addChildAt( ::openfl::display::DisplayObject child,int idx);

		virtual ::openfl::display::DisplayObject removeChild( ::openfl::display::DisplayObject child);

		virtual ::openfl::display::DisplayObject removeChildAt( int idx);

		virtual Void _onChildResize( ::ru::stablex::ui::events::WidgetEvent e);
		Dynamic _onChildResize_dyn();

		virtual Float get_contentHeight( );

		virtual Float get_contentWidth( );

		virtual bool set_autoSize( bool as);
		Dynamic set_autoSize_dyn();

		virtual Float set_w( Float w);

		virtual Float set_widthPt( Float wp);

		virtual Float set_heightPt( Float hp);

		virtual Float set_h( Float h);

		virtual Float set_padding( Float p);
		Dynamic set_padding_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets

#endif /* INCLUDED_ru_stablex_ui_widgets_Box */ 
