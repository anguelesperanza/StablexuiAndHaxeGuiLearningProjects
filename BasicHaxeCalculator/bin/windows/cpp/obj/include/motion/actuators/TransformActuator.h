#ifndef INCLUDED_motion_actuators_TransformActuator
#define INCLUDED_motion_actuators_TransformActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
HX_DECLARE_CLASS2(motion,actuators,TransformActuator)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)
namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  TransformActuator_obj : public ::motion::actuators::SimpleActuator_obj{
	public:
		typedef ::motion::actuators::SimpleActuator_obj super;
		typedef TransformActuator_obj OBJ_;
		TransformActuator_obj();
		Void __construct(Dynamic target,Float duration,Dynamic properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="motion.actuators.TransformActuator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TransformActuator_obj > __new(Dynamic target,Float duration,Dynamic properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TransformActuator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TransformActuator","\xa5","\xf2","\xbf","\x39"); }

		::openfl::geom::ColorTransform endColorTransform;
		::openfl::media::SoundTransform endSoundTransform;
		::openfl::geom::ColorTransform tweenColorTransform;
		::openfl::media::SoundTransform tweenSoundTransform;
		virtual Void apply( );

		virtual Void initialize( );

		virtual Void initializeColor( );
		Dynamic initializeColor_dyn();

		virtual Void initializeSound( );
		Dynamic initializeSound_dyn();

		virtual Void update( Float currentTime);

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_TransformActuator */ 
