#ifndef INCLUDED_motion_Actuate
#define INCLUDED_motion_Actuate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS1(motion,Actuate)
HX_DECLARE_CLASS2(motion,_Actuate,EffectsOptions)
HX_DECLARE_CLASS2(motion,_Actuate,TransformOptions)
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  Actuate_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Actuate_obj OBJ_;
		Actuate_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="motion.Actuate")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Actuate_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Actuate_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Actuate","\xef","\x20","\x63","\x3c"); }

		static void __boot();
		static ::hx::Class defaultActuator;
		static ::motion::easing::IEasing defaultEase;
		static ::haxe::ds::ObjectMap targetLibraries;
		static ::motion::actuators::GenericActuator apply( Dynamic target,Dynamic properties,::hx::Class customActuator);
		static Dynamic apply_dyn();

		static ::motion::_Actuate::EffectsOptions effects( ::openfl::display::DisplayObject target,Float duration,hx::Null< bool >  overwrite);
		static Dynamic effects_dyn();

		static Array< ::motion::actuators::IGenericActuator > getLibrary( Dynamic target,hx::Null< bool >  allowCreation);
		static Dynamic getLibrary_dyn();

		static bool isActive( );
		static Dynamic isActive_dyn();

		static ::motion::actuators::GenericActuator motionPath( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  overwrite);
		static Dynamic motionPath_dyn();

		static Void pause( Dynamic target);
		static Dynamic pause_dyn();

		static Void pauseAll( );
		static Dynamic pauseAll_dyn();

		static Void reset( );
		static Dynamic reset_dyn();

		static Void resume( Dynamic target);
		static Dynamic resume_dyn();

		static Void resumeAll( );
		static Dynamic resumeAll_dyn();

		static Void stop( Dynamic target,Dynamic properties,hx::Null< bool >  complete,hx::Null< bool >  sendEvent);
		static Dynamic stop_dyn();

		static ::motion::actuators::GenericActuator timer( Float duration,::hx::Class customActuator);
		static Dynamic timer_dyn();

		static ::motion::_Actuate::TransformOptions transform( Dynamic target,hx::Null< Float >  duration,hx::Null< bool >  overwrite);
		static Dynamic transform_dyn();

		static ::motion::actuators::GenericActuator tween( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  overwrite,::hx::Class customActuator);
		static Dynamic tween_dyn();

		static Void unload( ::motion::actuators::GenericActuator actuator);
		static Dynamic unload_dyn();

		static ::motion::actuators::GenericActuator update( Dynamic target,Float duration,cpp::ArrayBase start,cpp::ArrayBase end,hx::Null< bool >  overwrite);
		static Dynamic update_dyn();

};

} // end namespace motion

#endif /* INCLUDED_motion_Actuate */ 
