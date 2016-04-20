#ifndef INCLUDED_motion_actuators_IGenericActuator
#define INCLUDED_motion_actuators_IGenericActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,easing,IEasing)
namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  IGenericActuator_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IGenericActuator_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::motion::actuators::IGenericActuator autoVisible( Dynamic value)=0;
virtual Dynamic autoVisible_dyn()=0;
		virtual ::motion::actuators::IGenericActuator delay( Float duration)=0;
virtual Dynamic delay_dyn()=0;
		virtual ::motion::actuators::IGenericActuator ease( ::motion::easing::IEasing easing)=0;
virtual Dynamic ease_dyn()=0;
		virtual ::motion::actuators::IGenericActuator onComplete( Dynamic handler,cpp::ArrayBase parameters)=0;
virtual Dynamic onComplete_dyn()=0;
		virtual ::motion::actuators::IGenericActuator onRepeat( Dynamic handler,cpp::ArrayBase parameters)=0;
virtual Dynamic onRepeat_dyn()=0;
		virtual ::motion::actuators::IGenericActuator onUpdate( Dynamic handler,cpp::ArrayBase parameters)=0;
virtual Dynamic onUpdate_dyn()=0;
		virtual ::motion::actuators::IGenericActuator reflect( Dynamic value)=0;
virtual Dynamic reflect_dyn()=0;
		virtual ::motion::actuators::IGenericActuator repeat( Dynamic times)=0;
virtual Dynamic repeat_dyn()=0;
		virtual ::motion::actuators::IGenericActuator reverse( Dynamic value)=0;
virtual Dynamic reverse_dyn()=0;
		virtual ::motion::actuators::IGenericActuator smartRotation( Dynamic value)=0;
virtual Dynamic smartRotation_dyn()=0;
		virtual ::motion::actuators::IGenericActuator snapping( Dynamic value)=0;
virtual Dynamic snapping_dyn()=0;
		virtual ::motion::actuators::IGenericActuator onPause( Dynamic handler,cpp::ArrayBase parameters)=0;
virtual Dynamic onPause_dyn()=0;
		virtual ::motion::actuators::IGenericActuator onResume( Dynamic handler,cpp::ArrayBase parameters)=0;
virtual Dynamic onResume_dyn()=0;
		virtual Void apply( )=0;
virtual Dynamic apply_dyn()=0;
		virtual Void move( )=0;
virtual Dynamic move_dyn()=0;
		virtual Void pause( )=0;
virtual Dynamic pause_dyn()=0;
		virtual Void resume( )=0;
virtual Dynamic resume_dyn()=0;
		virtual Void stop( Dynamic properties,bool complete,bool sendEvent)=0;
virtual Dynamic stop_dyn()=0;
};



template<typename IMPL>
class IGenericActuator_delegate_ : public IGenericActuator_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IGenericActuator_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		::motion::actuators::IGenericActuator autoVisible( Dynamic value) { return mDelegate->autoVisible(value);}
		Dynamic autoVisible_dyn() { return mDelegate->autoVisible_dyn();}
		::motion::actuators::IGenericActuator delay( Float duration) { return mDelegate->delay(duration);}
		Dynamic delay_dyn() { return mDelegate->delay_dyn();}
		::motion::actuators::IGenericActuator ease( ::motion::easing::IEasing easing) { return mDelegate->ease(easing);}
		Dynamic ease_dyn() { return mDelegate->ease_dyn();}
		::motion::actuators::IGenericActuator onComplete( Dynamic handler,cpp::ArrayBase parameters) { return mDelegate->onComplete(handler,parameters);}
		Dynamic onComplete_dyn() { return mDelegate->onComplete_dyn();}
		::motion::actuators::IGenericActuator onRepeat( Dynamic handler,cpp::ArrayBase parameters) { return mDelegate->onRepeat(handler,parameters);}
		Dynamic onRepeat_dyn() { return mDelegate->onRepeat_dyn();}
		::motion::actuators::IGenericActuator onUpdate( Dynamic handler,cpp::ArrayBase parameters) { return mDelegate->onUpdate(handler,parameters);}
		Dynamic onUpdate_dyn() { return mDelegate->onUpdate_dyn();}
		::motion::actuators::IGenericActuator reflect( Dynamic value) { return mDelegate->reflect(value);}
		Dynamic reflect_dyn() { return mDelegate->reflect_dyn();}
		::motion::actuators::IGenericActuator repeat( Dynamic times) { return mDelegate->repeat(times);}
		Dynamic repeat_dyn() { return mDelegate->repeat_dyn();}
		::motion::actuators::IGenericActuator reverse( Dynamic value) { return mDelegate->reverse(value);}
		Dynamic reverse_dyn() { return mDelegate->reverse_dyn();}
		::motion::actuators::IGenericActuator smartRotation( Dynamic value) { return mDelegate->smartRotation(value);}
		Dynamic smartRotation_dyn() { return mDelegate->smartRotation_dyn();}
		::motion::actuators::IGenericActuator snapping( Dynamic value) { return mDelegate->snapping(value);}
		Dynamic snapping_dyn() { return mDelegate->snapping_dyn();}
		::motion::actuators::IGenericActuator onPause( Dynamic handler,cpp::ArrayBase parameters) { return mDelegate->onPause(handler,parameters);}
		Dynamic onPause_dyn() { return mDelegate->onPause_dyn();}
		::motion::actuators::IGenericActuator onResume( Dynamic handler,cpp::ArrayBase parameters) { return mDelegate->onResume(handler,parameters);}
		Dynamic onResume_dyn() { return mDelegate->onResume_dyn();}
		Void apply( ) { return mDelegate->apply();}
		Dynamic apply_dyn() { return mDelegate->apply_dyn();}
		Void move( ) { return mDelegate->move();}
		Dynamic move_dyn() { return mDelegate->move_dyn();}
		Void pause( ) { return mDelegate->pause();}
		Dynamic pause_dyn() { return mDelegate->pause_dyn();}
		Void resume( ) { return mDelegate->resume();}
		Dynamic resume_dyn() { return mDelegate->resume_dyn();}
		Void stop( Dynamic properties,bool complete,bool sendEvent) { return mDelegate->stop(properties,complete,sendEvent);}
		Dynamic stop_dyn() { return mDelegate->stop_dyn();}
};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_IGenericActuator */ 
