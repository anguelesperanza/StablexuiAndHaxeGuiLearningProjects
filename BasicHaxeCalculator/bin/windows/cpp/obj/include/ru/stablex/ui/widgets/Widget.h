#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#define INCLUDED_ru_stablex_ui_widgets_Widget

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
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
HX_DECLARE_CLASS4(ru,stablex,ui,layouts,Layout)
HX_DECLARE_CLASS4(ru,stablex,ui,skins,Skin)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Box)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Floating)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Tip)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES  Widget_obj : public ::ru::stablex::TweenSprite_obj{
	public:
		typedef ::ru::stablex::TweenSprite_obj super;
		typedef Widget_obj OBJ_;
		Widget_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.widgets.Widget")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Widget_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Widget_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Widget","\xe4","\x23","\x87","\x80"); }

		static void __boot();
		static int _X_USE_LEFT;
		static int _X_USE_LEFT_PERCENT;
		static int _X_USE_RIGHT;
		static int _X_USE_RIGHT_PERCENT;
		static int _Y_USE_TOP;
		static int _Y_USE_TOP_PERCENT;
		static int _Y_USE_BOTTOM;
		static int _Y_USE_BOTTOM_PERCENT;
		::String defaults;
		bool initialized;
		bool created;
		bool destroyed;
		Float contentWidth;
		Float _width;
		Float _widthPercent;
		bool _widthUsePercent;
		bool minWidthByContent;
		bool minHeightByContent;
		Float contentHeight;
		Float _height;
		Float _heightPercent;
		bool _heightUsePercent;
		bool _silentResize;
		bool _resizing;
		::String id;
		Float _left;
		Float _leftPercent;
		Float _right;
		Float _rightPercent;
		int _xUse;
		int _yUse;
		Float _top;
		Float _topPercent;
		Float _bottom;
		Float _bottomPercent;
		::ru::stablex::ui::skins::Skin skin;
		::ru::stablex::ui::skins::Skin _appliedSkin;
		bool _skinQueued;
		::String skinName;
		bool overflow;
		::ru::stablex::ui::widgets::Tip tip;
		::ru::stablex::ui::layouts::Layout layout;
		virtual Void _onInitialize( );
		Dynamic _onInitialize_dyn();

		virtual Void onInitialize( );
		Dynamic onInitialize_dyn();

		virtual Void _onCreate( );
		Dynamic _onCreate_dyn();

		virtual Void onCreate( );
		Dynamic onCreate_dyn();

		virtual Void free( hx::Null< bool >  recursive);

		virtual Void applySkin( );
		Dynamic applySkin_dyn();

		virtual Void applyLayout( );
		Dynamic applyLayout_dyn();

		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void _newParent( ::ru::stablex::ui::widgets::Widget newParent);
		Dynamic _newParent_dyn();

		virtual Void _resizeWithPercent( ::ru::stablex::ui::widgets::Widget parent);
		Dynamic _resizeWithPercent_dyn();

		virtual Void onNewParent( ::ru::stablex::ui::widgets::Widget newParent);
		Dynamic onNewParent_dyn();

		virtual Void _onParentResize( ::ru::stablex::ui::events::WidgetEvent e);
		Dynamic _onParentResize_dyn();

		virtual Void resize( Float width,Float height,hx::Null< bool >  keepPercentage);
		Dynamic resize_dyn();

		virtual Void _onResize( );
		Dynamic _onResize_dyn();

		virtual Void onResize( );
		Dynamic onResize_dyn();

		virtual ::openfl::display::DisplayObject addChild( ::openfl::display::DisplayObject child);

		virtual ::openfl::display::DisplayObject addChildAt( ::openfl::display::DisplayObject child,int idx);

		virtual ::openfl::display::DisplayObject removeChild( ::openfl::display::DisplayObject child);

		virtual ::openfl::display::DisplayObject removeChildAt( int idx);

		virtual Dynamic getChildAs( ::String name,::hx::Class cls);
		Dynamic getChildAs_dyn();

		virtual ::ru::stablex::ui::widgets::Widget getChild( ::String name);
		Dynamic getChild_dyn();

		virtual ::ru::stablex::ui::widgets::Widget _findChildWidget( ::String name);
		Dynamic _findChildWidget_dyn();

		virtual ::ru::stablex::ui::widgets::Widget getParent( ::String name);
		Dynamic getParent_dyn();

		virtual Dynamic getParentAs( ::String name,::hx::Class cls);
		Dynamic getParentAs_dyn();

		virtual Dynamic getNearestParent( ::hx::Class cls);
		Dynamic getNearestParent_dyn();

		virtual Dynamic as( ::hx::Class cls);
		Dynamic as_dyn();

		virtual bool set_overflow( bool o);
		Dynamic set_overflow_dyn();

		virtual ::String set_skinName( ::String sn);
		Dynamic set_skinName_dyn();

		virtual ::ru::stablex::ui::widgets::Widget get_wparent( );
		Dynamic get_wparent_dyn();

		virtual Float set_left( Float l);
		Dynamic set_left_dyn();

		virtual Float get_left( );
		Dynamic get_left_dyn();

		virtual Float set_right( Float r);
		Dynamic set_right_dyn();

		virtual Float get_right( );
		Dynamic get_right_dyn();

		virtual Float set_leftPt( Float lp);
		Dynamic set_leftPt_dyn();

		virtual Float get_leftPt( );
		Dynamic get_leftPt_dyn();

		virtual Float set_rightPt( Float rp);
		Dynamic set_rightPt_dyn();

		virtual Float get_rightPt( );
		Dynamic get_rightPt_dyn();

		virtual Float set_top( Float t);
		Dynamic set_top_dyn();

		virtual Float get_top( );
		Dynamic get_top_dyn();

		virtual Float set_bottom( Float b);
		Dynamic set_bottom_dyn();

		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual Float set_topPt( Float tp);
		Dynamic set_topPt_dyn();

		virtual Float get_topPt( );
		Dynamic get_topPt_dyn();

		virtual Float set_bottomPt( Float bp);
		Dynamic set_bottomPt_dyn();

		virtual Float get_bottomPt( );
		Dynamic get_bottomPt_dyn();

		virtual Float set_w( Float w);
		Dynamic set_w_dyn();

		virtual Float get_w( );
		Dynamic get_w_dyn();

		virtual Float set_h( Float h);
		Dynamic set_h_dyn();

		virtual Float get_h( );
		Dynamic get_h_dyn();

		virtual Float get_contentHeight( );
		Dynamic get_contentHeight_dyn();

		virtual Float get_contentWidth( );
		Dynamic get_contentWidth_dyn();

		virtual Float set_widthPt( Float wp);
		Dynamic set_widthPt_dyn();

		virtual Float get_widthPt( );
		Dynamic get_widthPt_dyn();

		virtual Float set_heightPt( Float hp);
		Dynamic set_heightPt_dyn();

		virtual Float get_heightPt( );
		Dynamic get_heightPt_dyn();

		virtual ::String set_id( ::String id);
		Dynamic set_id_dyn();

		virtual ::ru::stablex::ui::widgets::Tip set_tip( ::ru::stablex::ui::widgets::Tip tip);
		Dynamic set_tip_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets

#endif /* INCLUDED_ru_stablex_ui_widgets_Widget */ 
