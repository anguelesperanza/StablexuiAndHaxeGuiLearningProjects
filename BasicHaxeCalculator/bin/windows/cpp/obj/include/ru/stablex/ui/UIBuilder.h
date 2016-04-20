#ifndef INCLUDED_ru_stablex_ui_UIBuilder
#define INCLUDED_ru_stablex_ui_UIBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
HX_DECLARE_CLASS3(ru,stablex,ui,UIBuilder)
HX_DECLARE_CLASS4(ru,stablex,ui,skins,Skin)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)
namespace ru{
namespace stablex{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  UIBuilder_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UIBuilder_obj OBJ_;
		UIBuilder_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ru.stablex.ui.UIBuilder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UIBuilder_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIBuilder_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("UIBuilder","\x27","\x6b","\x96","\x96"); }

		static void __boot();
		static ::haxe::ds::StringMap defaults;
		static ::openfl::events::EventDispatcher dispatcher;
		static ::haxe::ds::StringMap _objects;
		static ::haxe::ds::StringMap skins;
		static int _nextId;
		static ::List _skinQueue;
		static ::String pos( Dynamic pos);
		static Dynamic pos_dyn();

		static ::String createId( );
		static Dynamic createId_dyn();

		static Dynamic create( ::hx::Class cls,Dynamic properties);
		static Dynamic create_dyn();

		static Void apply( Dynamic obj,Dynamic properties);
		static Dynamic apply_dyn();

		static Void applyDefaults( Dynamic _obj);
		static Dynamic applyDefaults_dyn();

		static Void initCreatedWidget( Dynamic maybeWidget);
		static Dynamic initCreatedWidget_dyn();

		static Dynamic skin( ::String skinName);
		static Dynamic skin_dyn();

		static ::ru::stablex::ui::widgets::Widget get( ::String id);
		static Dynamic get_dyn();

		static Dynamic getAs( ::String id,::hx::Class cls);
		static Dynamic getAs_dyn();

		static Void save( ::ru::stablex::ui::widgets::Widget obj);
		static Dynamic save_dyn();

		static Void forget( ::String id);
		static Dynamic forget_dyn();

		static Void queueSkin( ::ru::stablex::ui::widgets::Widget w);
		static Dynamic queueSkin_dyn();

		static Void skinQueue( ::openfl::events::Event e);
		static Dynamic skinQueue_dyn();

		static Dynamic customStringReplace;
		static inline Dynamic &customStringReplace_dyn() {return customStringReplace; }

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui

#endif /* INCLUDED_ru_stablex_ui_UIBuilder */ 
