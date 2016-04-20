#ifndef INCLUDED_ru_stablex_TweenSprite
#define INCLUDED_ru_stablex_TweenSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
namespace ru{
namespace stablex{


class HXCPP_CLASS_ATTRIBUTES  TweenSprite_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef TweenSprite_obj OBJ_;
		TweenSprite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="ru.stablex.TweenSprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TweenSprite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TweenSprite_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TweenSprite","\xb0","\xb4","\x21","\x4c"); }

		::haxe::ds::StringMap _listeners;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		virtual bool addUniqueListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);
		Dynamic addUniqueListener_dyn();

		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture);

		virtual Void clearEvent( ::String type);
		Dynamic clearEvent_dyn();

		virtual bool hasListener( ::String event,Dynamic listener);
		Dynamic hasListener_dyn();

		virtual ::motion::actuators::GenericActuator tween( Float duration,Dynamic properties,::String easing,hx::Null< bool >  overwrite,::hx::Class customActuator);
		Dynamic tween_dyn();

		virtual Void tweenStop( Dynamic properties,hx::Null< bool >  complete,hx::Null< bool >  sendEvent);
		Dynamic tweenStop_dyn();

		virtual Void free( hx::Null< bool >  recursive);
		Dynamic free_dyn();

		virtual Void freeChildren( hx::Null< bool >  recursive);
		Dynamic freeChildren_dyn();

};

} // end namespace ru
} // end namespace stablex

#endif /* INCLUDED_ru_stablex_TweenSprite */ 
