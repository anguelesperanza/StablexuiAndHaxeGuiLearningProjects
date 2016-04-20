#ifndef INCLUDED_ru_stablex_ui_skins_Paint
#define INCLUDED_ru_stablex_ui_skins_Paint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ru_stablex_ui_skins_Rect
#include <ru/stablex/ui/skins/Rect.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
HX_DECLARE_CLASS4(ru,stablex,ui,skins,Paint)
HX_DECLARE_CLASS4(ru,stablex,ui,skins,Rect)
HX_DECLARE_CLASS4(ru,stablex,ui,skins,Skin)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace skins{


class HXCPP_CLASS_ATTRIBUTES  Paint_obj : public ::ru::stablex::ui::skins::Rect_obj{
	public:
		typedef ::ru::stablex::ui::skins::Rect_obj super;
		typedef Paint_obj OBJ_;
		Paint_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.skins.Paint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Paint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Paint_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Paint","\x7e","\x27","\x7c","\x50"); }

		int color;
		Float alpha;
		virtual Void draw( ::ru::stablex::ui::widgets::Widget w);

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace skins

#endif /* INCLUDED_ru_stablex_ui_skins_Paint */ 
