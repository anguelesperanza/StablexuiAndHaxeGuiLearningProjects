#ifndef INCLUDED_ru_stablex_ui_skins_Rect
#define INCLUDED_ru_stablex_ui_skins_Rect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ru_stablex_ui_skins_Skin
#include <ru/stablex/ui/skins/Skin.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
HX_DECLARE_CLASS4(ru,stablex,ui,skins,Rect)
HX_DECLARE_CLASS4(ru,stablex,ui,skins,Skin)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace skins{


class HXCPP_CLASS_ATTRIBUTES  Rect_obj : public ::ru::stablex::ui::skins::Skin_obj{
	public:
		typedef ::ru::stablex::ui::skins::Skin_obj super;
		typedef Rect_obj OBJ_;
		Rect_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.skins.Rect")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Rect_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rect_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Rect","\x44","\x79","\x80","\x36"); }

		Float border;
		int borderColor;
		Float borderAlpha;
		Array< Float > corners;
		Float paddingTop;
		Float paddingRight;
		Float paddingBottom;
		Float paddingLeft;
		virtual Float set_padding( Float p);
		Dynamic set_padding_dyn();

		virtual Void draw( ::ru::stablex::ui::widgets::Widget w);

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace skins

#endif /* INCLUDED_ru_stablex_ui_skins_Rect */ 
