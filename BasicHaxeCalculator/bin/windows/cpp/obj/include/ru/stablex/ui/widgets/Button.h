#ifndef INCLUDED_ru_stablex_ui_widgets_Button
#define INCLUDED_ru_stablex_ui_widgets_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ru_stablex_ui_widgets_Text
#include <ru/stablex/ui/widgets/Text.h>
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
HX_DECLARE_CLASS4(ru,stablex,ui,skins,Skin)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Bmp)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Box)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Button)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Text)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES  Button_obj : public ::ru::stablex::ui::widgets::Text_obj{
	public:
		typedef ::ru::stablex::ui::widgets::Text_obj super;
		typedef Button_obj OBJ_;
		Button_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.widgets.Button")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Button_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Button_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"); }

		static Void _onHover( ::openfl::events::MouseEvent e);
		static Dynamic _onHover_dyn();

		static Void _onHout( ::openfl::events::MouseEvent e);
		static Dynamic _onHout_dyn();

		static Void _onPress( ::openfl::events::MouseEvent e);
		static Dynamic _onPress_dyn();

		static Void _onRelease( ::openfl::events::MouseEvent e);
		static Dynamic _onRelease_dyn();

		bool pressed;
		bool hovered;
		bool disabled;
		bool _mouseChildrenBeforeDisabled;
		::ru::stablex::ui::widgets::Bmp _ico;
		::ru::stablex::ui::widgets::Bmp _icoHovered;
		::ru::stablex::ui::widgets::Bmp _icoPressed;
		::ru::stablex::ui::widgets::Bmp _icoDisabled;
		bool icoBeforeLabel;
		::String skinHoveredName;
		::ru::stablex::ui::skins::Skin skinHovered;
		::String skinPressedName;
		::ru::stablex::ui::skins::Skin skinPressed;
		::String skinDisabledName;
		::ru::stablex::ui::skins::Skin skinDisabled;
		bool apart;
		Dynamic onPress;
		inline Dynamic &onPress_dyn() {return onPress; }

		Dynamic onRelease;
		inline Dynamic &onRelease_dyn() {return onRelease; }

		Dynamic onHover;
		inline Dynamic &onHover_dyn() {return onHover; }

		Dynamic onHout;
		inline Dynamic &onHout_dyn() {return onHout; }

		virtual bool set_disabled( bool disabled);
		Dynamic set_disabled_dyn();

		virtual bool set_icoBeforeLabel( bool ibl);
		Dynamic set_icoBeforeLabel_dyn();

		virtual ::ru::stablex::ui::widgets::Bmp get_ico( );
		Dynamic get_ico_dyn();

		virtual ::ru::stablex::ui::widgets::Bmp set_ico( ::ru::stablex::ui::widgets::Bmp ico);
		Dynamic set_ico_dyn();

		virtual ::ru::stablex::ui::widgets::Bmp get_icoHovered( );
		Dynamic get_icoHovered_dyn();

		virtual ::ru::stablex::ui::widgets::Bmp set_icoHovered( ::ru::stablex::ui::widgets::Bmp ico);
		Dynamic set_icoHovered_dyn();

		virtual ::ru::stablex::ui::widgets::Bmp get_icoPressed( );
		Dynamic get_icoPressed_dyn();

		virtual ::ru::stablex::ui::widgets::Bmp set_icoPressed( ::ru::stablex::ui::widgets::Bmp ico);
		Dynamic set_icoPressed_dyn();

		virtual ::ru::stablex::ui::widgets::Bmp get_icoDisabled( );
		Dynamic get_icoDisabled_dyn();

		virtual ::ru::stablex::ui::widgets::Bmp set_icoDisabled( ::ru::stablex::ui::widgets::Bmp ico);
		Dynamic set_icoDisabled_dyn();

		virtual ::String set_skinHoveredName( ::String s);
		Dynamic set_skinHoveredName_dyn();

		virtual ::String set_skinPressedName( ::String s);
		Dynamic set_skinPressedName_dyn();

		virtual ::String set_skinDisabledName( ::String s);
		Dynamic set_skinDisabledName_dyn();

		virtual Void _addIco( ::ru::stablex::ui::widgets::Bmp ico);
		Dynamic _addIco_dyn();

		virtual Void _switchIco( ::ru::stablex::ui::widgets::Bmp ico);
		Dynamic _switchIco_dyn();

		virtual Void _switchSkin( ::ru::stablex::ui::skins::Skin skin);
		Dynamic _switchSkin_dyn();

		virtual Void refresh( );

		virtual Void applySkin( );

		virtual Void alignElements( );

		virtual Void _moveApart( );
		Dynamic _moveApart_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets

#endif /* INCLUDED_ru_stablex_ui_widgets_Button */ 
