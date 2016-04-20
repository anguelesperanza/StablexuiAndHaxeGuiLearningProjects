#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion__Actuate_EffectsOptions
#include <motion/_Actuate/EffectsOptions.h>
#endif
#ifndef INCLUDED_motion__Actuate_TransformOptions
#include <motion/_Actuate/TransformOptions.h>
#endif
#ifndef INCLUDED_motion__Actuate_TweenTimer
#include <motion/_Actuate/TweenTimer.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MethodActuator
#include <motion/actuators/MethodActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MotionPathActuator
#include <motion/actuators/MotionPathActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_easing_Expo
#include <motion/easing/Expo.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace motion{

Void Actuate_obj::__construct()
{
	return null();
}

//Actuate_obj::~Actuate_obj() { }

Dynamic Actuate_obj::__CreateEmpty() { return  new Actuate_obj; }
hx::ObjectPtr< Actuate_obj > Actuate_obj::__new()
{  hx::ObjectPtr< Actuate_obj > _result_ = new Actuate_obj();
	_result_->__construct();
	return _result_;}

Dynamic Actuate_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Actuate_obj > _result_ = new Actuate_obj();
	_result_->__construct();
	return _result_;}

::hx::Class Actuate_obj::defaultActuator;

::motion::easing::IEasing Actuate_obj::defaultEase;

::haxe::ds::ObjectMap Actuate_obj::targetLibraries;

::motion::actuators::GenericActuator Actuate_obj::apply( Dynamic target,Dynamic properties,::hx::Class customActuator){
	HX_STACK_FRAME("motion.Actuate","apply",0x649fd077,"motion.Actuate.apply","motion/Actuate.hx",40,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(customActuator,"customActuator")
	HX_STACK_LINE(42)
	Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Dynamic tmp1 = properties;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	::motion::Actuate_obj::stop(tmp,tmp1,null(),null());
	HX_STACK_LINE(44)
	bool tmp2 = (customActuator == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	if ((tmp2)){
		HX_STACK_LINE(46)
		::hx::Class tmp3 = ::motion::Actuate_obj::defaultActuator;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		customActuator = tmp3;
	}
	HX_STACK_LINE(50)
	::hx::Class tmp3 = customActuator;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	::motion::actuators::GenericActuator tmp4 = ::Type_obj::createInstance(tmp3,cpp::ArrayBase_obj::__new().Add(target).Add((int)0).Add(properties));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	::motion::actuators::GenericActuator actuator = tmp4;		HX_STACK_VAR(actuator,"actuator");
	HX_STACK_LINE(51)
	actuator->apply();
	HX_STACK_LINE(53)
	::motion::actuators::GenericActuator tmp5 = actuator;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Actuate_obj,apply,return )

::motion::_Actuate::EffectsOptions Actuate_obj::effects( ::openfl::display::DisplayObject target,Float duration,hx::Null< bool >  __o_overwrite){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("motion.Actuate","effects",0x889fc40b,"motion.Actuate.effects","motion/Actuate.hx",67,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(overwrite,"overwrite")
{
		HX_STACK_LINE(69)
		::motion::_Actuate::EffectsOptions tmp = ::motion::_Actuate::EffectsOptions_obj::__new(target,duration,overwrite);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Actuate_obj,effects,return )

Array< ::motion::actuators::IGenericActuator > Actuate_obj::getLibrary( Dynamic target,hx::Null< bool >  __o_allowCreation){
bool allowCreation = __o_allowCreation.Default(true);
	HX_STACK_FRAME("motion.Actuate","getLibrary",0xc133c15c,"motion.Actuate.getLibrary","motion/Actuate.hx",76,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(allowCreation,"allowCreation")
{
		HX_STACK_LINE(94)
		::haxe::ds::ObjectMap tmp = ::motion::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		Dynamic tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		if ((tmp4)){
			HX_STACK_LINE(94)
			tmp5 = allowCreation;
		}
		else{
			HX_STACK_LINE(94)
			tmp5 = false;
		}
		HX_STACK_LINE(94)
		if ((tmp5)){
			HX_STACK_LINE(96)
			::haxe::ds::ObjectMap tmp6 = ::motion::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			Dynamic tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			tmp6->set(tmp7,Array_obj< ::motion::actuators::IGenericActuator >::__new());
		}
		HX_STACK_LINE(100)
		::haxe::ds::ObjectMap tmp6 = ::motion::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(100)
		Dynamic tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		return tmp6->get(tmp7);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actuate_obj,getLibrary,return )

bool Actuate_obj::isActive( ){
	HX_STACK_FRAME("motion.Actuate","isActive",0x1dbf5de7,"motion.Actuate.isActive","motion/Actuate.hx",109,0xcac92ba8)
	HX_STACK_LINE(111)
	bool result = false;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(113)
	::haxe::ds::ObjectMap tmp = ::motion::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	for(::cpp::FastIterator_obj< Array< ::motion::actuators::IGenericActuator > > *__it = ::cpp::CreateFastIterator< Array< ::motion::actuators::IGenericActuator > >(tmp1);  __it->hasNext(); ){
		Array< ::motion::actuators::IGenericActuator > library = __it->next();
		{
			HX_STACK_LINE(115)
			result = true;
			HX_STACK_LINE(116)
			break;
		}
;
	}
	HX_STACK_LINE(120)
	bool tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(120)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,isActive,return )

::motion::actuators::GenericActuator Actuate_obj::motionPath( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  __o_overwrite){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("motion.Actuate","motionPath",0x6ec8ff52,"motion.Actuate.motionPath","motion/Actuate.hx",133,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(overwrite,"overwrite")
{
		HX_STACK_LINE(135)
		Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		::motion::actuators::GenericActuator tmp4 = ::motion::Actuate_obj::tween(tmp,tmp1,tmp2,tmp3,hx::ClassOf< ::motion::actuators::MotionPathActuator >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuate_obj,motionPath,return )

Void Actuate_obj::pause( Dynamic target){
{
		HX_STACK_FRAME("motion.Actuate","pause",0xfdbc21ff,"motion.Actuate.pause","motion/Actuate.hx",145,0xcac92ba8)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(147)
		Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::motion::actuators::IGenericActuator >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		if ((tmp1)){
			HX_STACK_LINE(149)
			::motion::actuators::IGenericActuator actuator = ((::motion::actuators::IGenericActuator)(target));		HX_STACK_VAR(actuator,"actuator");
			HX_STACK_LINE(150)
			actuator->pause();
		}
		else{
			HX_STACK_LINE(154)
			Dynamic tmp2 = target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			Array< ::motion::actuators::IGenericActuator > library = ::motion::Actuate_obj::getLibrary(tmp2,false);		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(156)
			bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			if ((tmp3)){
				HX_STACK_LINE(158)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(158)
				while((true)){
					HX_STACK_LINE(158)
					bool tmp4 = (_g < library->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(158)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(158)
					if ((tmp5)){
						HX_STACK_LINE(158)
						break;
					}
					HX_STACK_LINE(158)
					::motion::actuators::IGenericActuator tmp6 = library->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(158)
					::motion::actuators::IGenericActuator actuator = tmp6;		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(158)
					++(_g);
					HX_STACK_LINE(160)
					actuator->pause();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,pause,(void))

Void Actuate_obj::pauseAll( ){
{
		HX_STACK_FRAME("motion.Actuate","pauseAll",0xb88d9862,"motion.Actuate.pauseAll","motion/Actuate.hx",171,0xcac92ba8)
		HX_STACK_LINE(187)
		::haxe::ds::ObjectMap tmp = ::motion::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		for(::cpp::FastIterator_obj< Array< ::motion::actuators::IGenericActuator > > *__it = ::cpp::CreateFastIterator< Array< ::motion::actuators::IGenericActuator > >(tmp1);  __it->hasNext(); ){
			Array< ::motion::actuators::IGenericActuator > library = __it->next();
			{
				HX_STACK_LINE(189)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(189)
				while((true)){
					HX_STACK_LINE(189)
					bool tmp2 = (_g < library->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(189)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(189)
					if ((tmp3)){
						HX_STACK_LINE(189)
						break;
					}
					HX_STACK_LINE(189)
					::motion::actuators::IGenericActuator tmp4 = library->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(189)
					::motion::actuators::IGenericActuator actuator = tmp4;		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(189)
					++(_g);
					HX_STACK_LINE(191)
					actuator->pause();
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,pauseAll,(void))

Void Actuate_obj::reset( ){
{
		HX_STACK_FRAME("motion.Actuate","reset",0x272c94d8,"motion.Actuate.reset","motion/Actuate.hx",203,0xcac92ba8)
		HX_STACK_LINE(224)
		::haxe::ds::ObjectMap tmp = ::motion::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		for(::cpp::FastIterator_obj< Array< ::motion::actuators::IGenericActuator > > *__it = ::cpp::CreateFastIterator< Array< ::motion::actuators::IGenericActuator > >(tmp1);  __it->hasNext(); ){
			Array< ::motion::actuators::IGenericActuator > library = __it->next();
			{
				HX_STACK_LINE(226)
				int tmp2 = (library->length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(226)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(228)
				while((true)){
					HX_STACK_LINE(228)
					bool tmp3 = (i >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(228)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(228)
					if ((tmp4)){
						HX_STACK_LINE(228)
						break;
					}
					HX_STACK_LINE(230)
					::motion::actuators::IGenericActuator tmp5 = library->__get(i);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(230)
					tmp5->stop(null(),false,false);
					HX_STACK_LINE(231)
					(i)--;
				}
			}
;
		}
		HX_STACK_LINE(237)
		::haxe::ds::ObjectMap tmp2 = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		::motion::Actuate_obj::targetLibraries = tmp2;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,reset,(void))

Void Actuate_obj::resume( Dynamic target){
{
		HX_STACK_FRAME("motion.Actuate","resume",0x1fe1c684,"motion.Actuate.resume","motion/Actuate.hx",246,0xcac92ba8)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(248)
		Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::motion::actuators::IGenericActuator >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		if ((tmp1)){
			HX_STACK_LINE(250)
			::motion::actuators::IGenericActuator actuator = ((::motion::actuators::IGenericActuator)(target));		HX_STACK_VAR(actuator,"actuator");
			HX_STACK_LINE(251)
			actuator->resume();
		}
		else{
			HX_STACK_LINE(255)
			Dynamic tmp2 = target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(255)
			Array< ::motion::actuators::IGenericActuator > library = ::motion::Actuate_obj::getLibrary(tmp2,false);		HX_STACK_VAR(library,"library");
			HX_STACK_LINE(257)
			bool tmp3 = (library != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			if ((tmp3)){
				HX_STACK_LINE(259)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(259)
				while((true)){
					HX_STACK_LINE(259)
					bool tmp4 = (_g < library->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(259)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(259)
					if ((tmp5)){
						HX_STACK_LINE(259)
						break;
					}
					HX_STACK_LINE(259)
					::motion::actuators::IGenericActuator tmp6 = library->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(259)
					::motion::actuators::IGenericActuator actuator = tmp6;		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(259)
					++(_g);
					HX_STACK_LINE(261)
					actuator->resume();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,resume,(void))

Void Actuate_obj::resumeAll( ){
{
		HX_STACK_FRAME("motion.Actuate","resumeAll",0x7a6fd4fd,"motion.Actuate.resumeAll","motion/Actuate.hx",272,0xcac92ba8)
		HX_STACK_LINE(288)
		::haxe::ds::ObjectMap tmp = ::motion::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(288)
		for(::cpp::FastIterator_obj< Array< ::motion::actuators::IGenericActuator > > *__it = ::cpp::CreateFastIterator< Array< ::motion::actuators::IGenericActuator > >(tmp1);  __it->hasNext(); ){
			Array< ::motion::actuators::IGenericActuator > library = __it->next();
			{
				HX_STACK_LINE(290)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(290)
				while((true)){
					HX_STACK_LINE(290)
					bool tmp2 = (_g < library->length);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(290)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(290)
					if ((tmp3)){
						HX_STACK_LINE(290)
						break;
					}
					HX_STACK_LINE(290)
					::motion::actuators::IGenericActuator tmp4 = library->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(290)
					::motion::actuators::IGenericActuator actuator = tmp4;		HX_STACK_VAR(actuator,"actuator");
					HX_STACK_LINE(290)
					++(_g);
					HX_STACK_LINE(292)
					actuator->resume();
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Actuate_obj,resumeAll,(void))

Void Actuate_obj::stop( Dynamic target,Dynamic properties,hx::Null< bool >  __o_complete,hx::Null< bool >  __o_sendEvent){
bool complete = __o_complete.Default(false);
bool sendEvent = __o_sendEvent.Default(true);
	HX_STACK_FRAME("motion.Actuate","stop",0xb1ab9919,"motion.Actuate.stop","motion/Actuate.hx",308,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(complete,"complete")
	HX_STACK_ARG(sendEvent,"sendEvent")
{
		HX_STACK_LINE(310)
		bool tmp = (target != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		if ((tmp)){
			HX_STACK_LINE(312)
			Dynamic tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(312)
			bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::motion::actuators::IGenericActuator >());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(312)
			if ((tmp2)){
				HX_STACK_LINE(314)
				::motion::actuators::IGenericActuator actuator = ((::motion::actuators::IGenericActuator)(target));		HX_STACK_VAR(actuator,"actuator");
				HX_STACK_LINE(315)
				bool tmp3 = complete;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(315)
				bool tmp4 = sendEvent;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(315)
				actuator->stop(null(),tmp3,tmp4);
			}
			else{
				HX_STACK_LINE(319)
				Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(319)
				Array< ::motion::actuators::IGenericActuator > library = ::motion::Actuate_obj::getLibrary(tmp3,false);		HX_STACK_VAR(library,"library");
				HX_STACK_LINE(321)
				bool tmp4 = (library != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(321)
				if ((tmp4)){
					HX_STACK_LINE(323)
					Dynamic tmp5 = properties;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(323)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(323)
					if ((tmp6)){
						struct _Function_5_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/Actuate.hx",325,0xcac92ba8)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(325)
						Dynamic tmp7 = _Function_5_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(325)
						Dynamic temp = tmp7;		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(326)
						Dynamic tmp8 = temp;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(326)
						Dynamic tmp9 = properties;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(326)
						::Reflect_obj::setField(tmp8,tmp9,null());
						HX_STACK_LINE(327)
						properties = temp;
					}
					else{
						HX_STACK_LINE(329)
						Dynamic tmp7 = properties;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(329)
						bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(329)
						if ((tmp8)){
							struct _Function_6_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/Actuate.hx",331,0xcac92ba8)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(331)
							Dynamic tmp9 = _Function_6_1::Block();		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(331)
							Dynamic temp = tmp9;		HX_STACK_VAR(temp,"temp");
							HX_STACK_LINE(333)
							{
								HX_STACK_LINE(333)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(333)
								cpp::ArrayBase _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(333)
								_g1 = hx::TCastToArray(properties);
								HX_STACK_LINE(333)
								while((true)){
									HX_STACK_LINE(333)
									bool tmp10 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(333)
									bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(333)
									if ((tmp11)){
										HX_STACK_LINE(333)
										break;
									}
									HX_STACK_LINE(333)
									Dynamic tmp12 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(333)
									Dynamic property = tmp12;		HX_STACK_VAR(property,"property");
									HX_STACK_LINE(333)
									++(_g);
									HX_STACK_LINE(335)
									Dynamic tmp13 = temp;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(335)
									Dynamic tmp14 = property;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(335)
									::Reflect_obj::setField(tmp13,tmp14,null());
								}
							}
							HX_STACK_LINE(339)
							properties = temp;
						}
					}
					HX_STACK_LINE(343)
					int tmp7 = (library->length - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(343)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(345)
					while((true)){
						HX_STACK_LINE(345)
						bool tmp8 = (i >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(345)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(345)
						if ((tmp9)){
							HX_STACK_LINE(345)
							break;
						}
						HX_STACK_LINE(347)
						::motion::actuators::IGenericActuator tmp10 = library->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(347)
						Dynamic tmp11 = properties;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(347)
						bool tmp12 = complete;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(347)
						bool tmp13 = sendEvent;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(347)
						tmp10->stop(tmp11,tmp12,tmp13);
						HX_STACK_LINE(348)
						(i)--;
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Actuate_obj,stop,(void))

::motion::actuators::GenericActuator Actuate_obj::timer( Float duration,::hx::Class customActuator){
	HX_STACK_FRAME("motion.Actuate","timer",0x509a0ace,"motion.Actuate.timer","motion/Actuate.hx",368,0xcac92ba8)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(customActuator,"customActuator")
	HX_STACK_LINE(370)
	::motion::_Actuate::TweenTimer tmp = ::motion::_Actuate::TweenTimer_obj::__new((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(370)
	Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(370)
	::motion::_Actuate::TweenTimer tmp2 = ::motion::_Actuate::TweenTimer_obj::__new((int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(370)
	::hx::Class tmp3 = customActuator;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(370)
	::motion::actuators::GenericActuator tmp4 = ::motion::Actuate_obj::tween(tmp,tmp1,tmp2,false,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(370)
	::motion::actuators::GenericActuator tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(370)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Actuate_obj,timer,return )

::motion::_Actuate::TransformOptions Actuate_obj::transform( Dynamic target,hx::Null< Float >  __o_duration,hx::Null< bool >  __o_overwrite){
Float duration = __o_duration.Default(0);
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("motion.Actuate","transform",0xc41430f5,"motion.Actuate.transform","motion/Actuate.hx",385,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(overwrite,"overwrite")
{
		HX_STACK_LINE(387)
		::motion::_Actuate::TransformOptions tmp = ::motion::_Actuate::TransformOptions_obj::__new(target,duration,overwrite);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(387)
		return tmp;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Actuate_obj,transform,return )

::motion::actuators::GenericActuator Actuate_obj::tween( Dynamic target,Float duration,Dynamic properties,hx::Null< bool >  __o_overwrite,::hx::Class customActuator){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("motion.Actuate","tween",0x59d4f574,"motion.Actuate.tween","motion/Actuate.hx",404,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(overwrite,"overwrite")
	HX_STACK_ARG(customActuator,"customActuator")
{
		HX_STACK_LINE(406)
		bool tmp = (target != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(406)
		if ((tmp)){
			HX_STACK_LINE(408)
			bool tmp1 = (duration > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(408)
			if ((tmp1)){
				HX_STACK_LINE(410)
				bool tmp2 = (customActuator == null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(410)
				if ((tmp2)){
					HX_STACK_LINE(412)
					::hx::Class tmp3 = ::motion::Actuate_obj::defaultActuator;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(412)
					customActuator = tmp3;
				}
				HX_STACK_LINE(416)
				::hx::Class tmp3 = customActuator;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(416)
				::motion::actuators::GenericActuator tmp4 = ::Type_obj::createInstance(tmp3,cpp::ArrayBase_obj::__new().Add(target).Add(duration).Add(properties));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(416)
				::motion::actuators::GenericActuator actuator = tmp4;		HX_STACK_VAR(actuator,"actuator");
				HX_STACK_LINE(417)
				Dynamic tmp5 = actuator->target;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(417)
				Array< ::motion::actuators::IGenericActuator > library = ::motion::Actuate_obj::getLibrary(tmp5,null());		HX_STACK_VAR(library,"library");
				HX_STACK_LINE(419)
				bool tmp6 = overwrite;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(419)
				if ((tmp6)){
					HX_STACK_LINE(421)
					int tmp7 = (library->length - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(421)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(423)
					while((true)){
						HX_STACK_LINE(423)
						bool tmp8 = (i >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(423)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(423)
						if ((tmp9)){
							HX_STACK_LINE(423)
							break;
						}
						HX_STACK_LINE(424)
						::motion::actuators::IGenericActuator tmp10 = library->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(424)
						Dynamic tmp11 = actuator->properties;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(424)
						tmp10->stop(tmp11,false,false);
						HX_STACK_LINE(425)
						(i)--;
					}
					HX_STACK_LINE(428)
					Dynamic tmp8 = actuator->target;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(428)
					library = ::motion::Actuate_obj::getLibrary(tmp8,null());
				}
				HX_STACK_LINE(432)
				::motion::actuators::GenericActuator tmp7 = actuator;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(432)
				library->push(tmp7);
				HX_STACK_LINE(433)
				actuator->move();
				HX_STACK_LINE(435)
				::motion::actuators::GenericActuator tmp8 = actuator;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(435)
				return tmp8;
			}
			else{
				HX_STACK_LINE(439)
				Dynamic tmp2 = target;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(439)
				Dynamic tmp3 = properties;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(439)
				::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(439)
				::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::apply(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(439)
				return tmp5;
			}
		}
		HX_STACK_LINE(445)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Actuate_obj,tween,return )

Void Actuate_obj::unload( ::motion::actuators::GenericActuator actuator){
{
		HX_STACK_FRAME("motion.Actuate","unload",0x7ce9fdd6,"motion.Actuate.unload","motion/Actuate.hx",450,0xcac92ba8)
		HX_STACK_ARG(actuator,"actuator")
		HX_STACK_LINE(452)
		Dynamic target = actuator->target;		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(476)
		::haxe::ds::ObjectMap tmp = ::motion::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(476)
		Dynamic tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(476)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(476)
		if ((tmp2)){
			HX_STACK_LINE(478)
			::haxe::ds::ObjectMap tmp3 = ::motion::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(478)
			Dynamic tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(478)
			::motion::actuators::GenericActuator tmp5 = actuator;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(478)
			tmp3->get(tmp4)->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(tmp5);
			HX_STACK_LINE(480)
			::haxe::ds::ObjectMap tmp6 = ::motion::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(480)
			Dynamic tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(480)
			int tmp8 = tmp6->get(tmp7)->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(480)
			bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(480)
			if ((tmp9)){
				HX_STACK_LINE(482)
				::haxe::ds::ObjectMap tmp10 = ::motion::Actuate_obj::targetLibraries;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(482)
				Dynamic tmp11 = target;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(482)
				tmp10->remove(tmp11);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Actuate_obj,unload,(void))

::motion::actuators::GenericActuator Actuate_obj::update( Dynamic target,Float duration,cpp::ArrayBase start,cpp::ArrayBase end,hx::Null< bool >  __o_overwrite){
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("motion.Actuate","update",0x9e62e2e0,"motion.Actuate.update","motion/Actuate.hx",501,0xcac92ba8)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(end,"end")
	HX_STACK_ARG(overwrite,"overwrite")
{
		struct _Function_1_1{
			inline static Dynamic Block( cpp::ArrayBase &end,cpp::ArrayBase &start){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/Actuate.hx",503,0xcac92ba8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("start","\x62","\x74","\x0b","\x84") , start,false);
					__result->Add(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00") , end,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(503)
		Dynamic tmp = _Function_1_1::Block(end,start);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(503)
		Dynamic properties = tmp;		HX_STACK_VAR(properties,"properties");
		HX_STACK_LINE(505)
		Dynamic tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(505)
		Float tmp2 = duration;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(505)
		Dynamic tmp3 = properties;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(505)
		bool tmp4 = overwrite;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(505)
		::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(tmp1,tmp2,tmp3,tmp4,hx::ClassOf< ::motion::actuators::MethodActuator >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(505)
		return tmp5;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Actuate_obj,update,return )


Actuate_obj::Actuate_obj()
{
}

bool Actuate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { outValue = stop_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { outValue = apply_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"timer") ) { outValue = timer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tween") ) { outValue = tween_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unload") ) { outValue = unload_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"effects") ) { outValue = effects_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isActive") ) { outValue = isActive_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pauseAll") ) { outValue = pauseAll_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resumeAll") ) { outValue = resumeAll_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"transform") ) { outValue = transform_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"motionPath") ) { outValue = motionPath_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultEase") ) { outValue = defaultEase; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultActuator") ) { outValue = defaultActuator; return true;  }
		if (HX_FIELD_EQ(inName,"targetLibraries") ) { outValue = targetLibraries; return true;  }
	}
	return false;
}

bool Actuate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"defaultEase") ) { defaultEase=ioValue.Cast< ::motion::easing::IEasing >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultActuator") ) { defaultActuator=ioValue.Cast< ::hx::Class >(); return true; }
		if (HX_FIELD_EQ(inName,"targetLibraries") ) { targetLibraries=ioValue.Cast< ::haxe::ds::ObjectMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(void *) &Actuate_obj::defaultActuator,HX_HCSTRING("defaultActuator","\x1a","\xbb","\xb5","\xe9")},
	{hx::fsObject /*::motion::easing::IEasing*/ ,(void *) &Actuate_obj::defaultEase,HX_HCSTRING("defaultEase","\x4f","\x85","\xcb","\x14")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(void *) &Actuate_obj::targetLibraries,HX_HCSTRING("targetLibraries","\x88","\xca","\xb7","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actuate_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Actuate_obj::defaultActuator,"defaultActuator");
	HX_MARK_MEMBER_NAME(Actuate_obj::defaultEase,"defaultEase");
	HX_MARK_MEMBER_NAME(Actuate_obj::targetLibraries,"targetLibraries");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actuate_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Actuate_obj::defaultActuator,"defaultActuator");
	HX_VISIT_MEMBER_NAME(Actuate_obj::defaultEase,"defaultEase");
	HX_VISIT_MEMBER_NAME(Actuate_obj::targetLibraries,"targetLibraries");
};

#endif

hx::Class Actuate_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaultActuator","\x1a","\xbb","\xb5","\xe9"),
	HX_HCSTRING("defaultEase","\x4f","\x85","\xcb","\x14"),
	HX_HCSTRING("targetLibraries","\x88","\xca","\xb7","\x7d"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("effects","\xc2","\xe4","\x4b","\x2e"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("isActive","\x50","\xdd","\xaf","\x6e"),
	HX_HCSTRING("motionPath","\xfb","\xea","\x66","\x3c"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("pauseAll","\xcb","\x17","\x7e","\x09"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("resumeAll","\x74","\xd1","\xee","\xfb"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

void Actuate_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.Actuate","\xb7","\x4e","\xb3","\x4f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Actuate_obj::__GetStatic;
	__mClass->mSetStaticField = &Actuate_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Actuate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void Actuate_obj::__boot()
{
	defaultActuator= ((::hx::Class)(hx::ClassOf< ::motion::actuators::SimpleActuator >()));
	defaultEase= ::motion::easing::Expo_obj::get_easeOut();
	targetLibraries= ::haxe::ds::ObjectMap_obj::__new();
}

} // end namespace motion
