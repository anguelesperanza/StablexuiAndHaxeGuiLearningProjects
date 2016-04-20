#ifndef INCLUDED_motion_actuators_SimpleActuator
#define INCLUDED_motion_actuators_SimpleActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,PropertyDetails)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Transform)
namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  SimpleActuator_obj : public ::motion::actuators::GenericActuator_obj{
	public:
		typedef ::motion::actuators::GenericActuator_obj super;
		typedef SimpleActuator_obj OBJ_;
		SimpleActuator_obj();
		Void __construct(Dynamic target,Float duration,Dynamic properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="motion.actuators.SimpleActuator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SimpleActuator_obj > __new(Dynamic target,Float duration,Dynamic properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleActuator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SimpleActuator","\xab","\xd3","\xf8","\x0c"); }

		static void __boot();
		static Array< ::Dynamic > actuators;
		static int actuatorsLength;
		static bool addedEvent;
		static Void stage_onEnterFrame( ::openfl::events::Event event);
		static Dynamic stage_onEnterFrame_dyn();

		virtual Void setField_openfl_geom_Transform( ::openfl::geom::Transform target,::String propertyName,Dynamic value);
		Dynamic setField_openfl_geom_Transform_dyn();

		virtual Void setField_motion_actuators_TransformActuator_T( Dynamic target,::String propertyName,Dynamic value);
		Dynamic setField_motion_actuators_TransformActuator_T_dyn();

		virtual Void setField_motion_actuators_MotionPathActuator_T( Dynamic target,::String propertyName,Dynamic value);
		Dynamic setField_motion_actuators_MotionPathActuator_T_dyn();

		virtual Void setField_openfl_display_DisplayObject( ::openfl::display::DisplayObject target,::String propertyName,Dynamic value);
		Dynamic setField_openfl_display_DisplayObject_dyn();

		virtual Void setField_motion_actuators_SimpleActuator_T( Dynamic target,::String propertyName,Dynamic value);
		Dynamic setField_motion_actuators_SimpleActuator_T_dyn();

		Float timeOffset;
		bool active;
		bool cacheVisible;
		int detailsLength;
		bool initialized;
		bool paused;
		Float pauseTime;
		Array< ::Dynamic > propertyDetails;
		bool sendChange;
		bool setVisible;
		Float startTime;
		bool toggleVisible;
		virtual ::motion::actuators::GenericActuator autoVisible( Dynamic value);

		virtual ::motion::actuators::GenericActuator delay( Float duration);

		virtual Dynamic getField( Dynamic target,::String propertyName);
		Dynamic getField_dyn();

		virtual Void initialize( );
		Dynamic initialize_dyn();

		virtual Void move( );

		virtual ::motion::actuators::GenericActuator onUpdate( Dynamic handler,cpp::ArrayBase parameters);

		virtual Void pause( );

		virtual Void resume( );

		virtual Void setProperty( ::motion::actuators::PropertyDetails details,Dynamic value);
		Dynamic setProperty_dyn();

		virtual Void stop( Dynamic properties,bool complete,bool sendEvent);

		virtual Void update( Float currentTime);
		Dynamic update_dyn();

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_SimpleActuator */ 
