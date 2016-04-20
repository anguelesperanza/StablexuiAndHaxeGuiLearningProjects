#ifndef INCLUDED_motion_actuators_GenericActuator
#define INCLUDED_motion_actuators_GenericActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)
namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  GenericActuator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GenericActuator_obj OBJ_;
		GenericActuator_obj();
		Void __construct(Dynamic target,Float duration,Dynamic properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="motion.actuators.GenericActuator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GenericActuator_obj > __new(Dynamic target,Float duration,Dynamic properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GenericActuator_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::motion::actuators::IGenericActuator_obj *();
		::String __ToString() const { return HX_HCSTRING("GenericActuator","\x50","\xa2","\xb3","\x78"); }

		Float duration;
		::String id;
		Dynamic properties;
		Dynamic target;
		bool _autoVisible;
		Float _delay;
		::motion::easing::IEasing _ease;
		Dynamic _onComplete;
		cpp::ArrayBase _onCompleteParams;
		Dynamic _onRepeat;
		cpp::ArrayBase _onRepeatParams;
		Dynamic _onUpdate;
		cpp::ArrayBase _onUpdateParams;
		Dynamic _onResume;
		cpp::ArrayBase _onResumeParams;
		Dynamic _onPause;
		cpp::ArrayBase _onPauseParams;
		bool _reflect;
		int _repeat;
		bool _reverse;
		bool _smartRotation;
		bool _snapping;
		bool special;
		virtual Void apply( );
		Dynamic apply_dyn();

		virtual ::motion::actuators::GenericActuator autoVisible( Dynamic value);
		Dynamic autoVisible_dyn();

		virtual Dynamic callMethod( Dynamic method,cpp::ArrayBase params);
		Dynamic callMethod_dyn();

		virtual Void change( );
		Dynamic change_dyn();

		virtual Void complete( hx::Null< bool >  sendEvent);
		Dynamic complete_dyn();

		virtual ::motion::actuators::GenericActuator delay( Float duration);
		Dynamic delay_dyn();

		virtual ::motion::actuators::GenericActuator ease( ::motion::easing::IEasing easing);
		Dynamic ease_dyn();

		virtual Void move( );
		Dynamic move_dyn();

		virtual ::motion::actuators::GenericActuator onComplete( Dynamic handler,cpp::ArrayBase parameters);
		Dynamic onComplete_dyn();

		virtual ::motion::actuators::GenericActuator onRepeat( Dynamic handler,cpp::ArrayBase parameters);
		Dynamic onRepeat_dyn();

		virtual ::motion::actuators::GenericActuator onUpdate( Dynamic handler,cpp::ArrayBase parameters);
		Dynamic onUpdate_dyn();

		virtual ::motion::actuators::GenericActuator onPause( Dynamic handler,cpp::ArrayBase parameters);
		Dynamic onPause_dyn();

		virtual ::motion::actuators::GenericActuator onResume( Dynamic handler,cpp::ArrayBase parameters);
		Dynamic onResume_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual ::motion::actuators::GenericActuator reflect( Dynamic value);
		Dynamic reflect_dyn();

		virtual ::motion::actuators::GenericActuator repeat( Dynamic times);
		Dynamic repeat_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual ::motion::actuators::GenericActuator reverse( Dynamic value);
		Dynamic reverse_dyn();

		virtual ::motion::actuators::GenericActuator smartRotation( Dynamic value);
		Dynamic smartRotation_dyn();

		virtual ::motion::actuators::GenericActuator snapping( Dynamic value);
		Dynamic snapping_dyn();

		virtual Void stop( Dynamic properties,bool complete,bool sendEvent);
		Dynamic stop_dyn();

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_GenericActuator */ 
