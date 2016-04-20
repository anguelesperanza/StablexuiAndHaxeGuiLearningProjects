#ifndef INCLUDED_ru_stablex_ui_layouts_Layout
#define INCLUDED_ru_stablex_ui_layouts_Layout

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
HX_DECLARE_CLASS4(ru,stablex,ui,layouts,Layout)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{
namespace layouts{


class HXCPP_CLASS_ATTRIBUTES  Layout_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Layout_obj OBJ_;
		Layout_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ru.stablex.ui.layouts.Layout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Layout_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Layout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Layout","\xca","\x22","\x4d","\x8d"); }

		virtual Void arrangeChildren( ::ru::stablex::ui::widgets::Widget Widget);
		Dynamic arrangeChildren_dyn();

		virtual Dynamic as( ::hx::Class cls);
		Dynamic as_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace layouts

#endif /* INCLUDED_ru_stablex_ui_layouts_Layout */ 
