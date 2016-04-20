#ifndef INCLUDED_ru_stablex_ui_skins_Skin
#define INCLUDED_ru_stablex_ui_skins_Skin

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
HX_DECLARE_CLASS4(ru,stablex,ui,skins,Skin)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace skins{


class HXCPP_CLASS_ATTRIBUTES  Skin_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Skin_obj OBJ_;
		Skin_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ru.stablex.ui.skins.Skin")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Skin_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Skin_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Skin","\x9d","\x42","\x2e","\x37"); }

		bool clear;
		virtual Void apply( ::ru::stablex::ui::widgets::Widget w);
		Dynamic apply_dyn();

		virtual Void draw( ::ru::stablex::ui::widgets::Widget w);
		Dynamic draw_dyn();

		virtual Void unDraw( ::ru::stablex::ui::widgets::Widget w);
		Dynamic unDraw_dyn();

		virtual Void reDraw( ::ru::stablex::ui::widgets::Widget w);
		Dynamic reDraw_dyn();

		virtual Dynamic as( ::hx::Class cls);
		Dynamic as_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace skins

#endif /* INCLUDED_ru_stablex_ui_skins_Skin */ 
