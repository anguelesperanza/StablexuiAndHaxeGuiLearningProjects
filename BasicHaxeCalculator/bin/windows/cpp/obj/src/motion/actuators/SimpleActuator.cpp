#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace motion{
namespace actuators{

Void SimpleActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("motion.actuators.SimpleActuator","new",0x6db9da29,"motion.actuators.SimpleActuator.new","motion/actuators/SimpleActuator.hx",51,0x731927e5)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(53)
	this->active = true;
	HX_STACK_LINE(54)
	this->propertyDetails = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(55)
	this->sendChange = false;
	HX_STACK_LINE(56)
	this->paused = false;
	HX_STACK_LINE(57)
	this->cacheVisible = false;
	HX_STACK_LINE(58)
	this->initialized = false;
	HX_STACK_LINE(59)
	this->setVisible = false;
	HX_STACK_LINE(60)
	this->toggleVisible = false;
	HX_STACK_LINE(64)
	int tmp = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	Float tmp1 = (Float(tmp) / Float((int)1000));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	this->startTime = tmp1;
	HX_STACK_LINE(74)
	Dynamic tmp2 = target;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	Float tmp3 = duration;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	Dynamic tmp4 = properties;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	super::__construct(tmp2,tmp3,tmp4);
	HX_STACK_LINE(76)
	bool tmp5 = ::motion::actuators::SimpleActuator_obj::addedEvent;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(76)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(76)
	if ((tmp6)){
		HX_STACK_LINE(78)
		::motion::actuators::SimpleActuator_obj::addedEvent = true;
		HX_STACK_LINE(81)
		::openfl::display::MovieClip tmp7 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(81)
		Dynamic tmp8 = ::motion::actuators::SimpleActuator_obj::stage_onEnterFrame_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(81)
		tmp7->stage->addEventListener(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),tmp8,null(),null(),null());
	}
}
;
	return null();
}

//SimpleActuator_obj::~SimpleActuator_obj() { }

Dynamic SimpleActuator_obj::__CreateEmpty() { return  new SimpleActuator_obj; }
hx::ObjectPtr< SimpleActuator_obj > SimpleActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< SimpleActuator_obj > _result_ = new SimpleActuator_obj();
	_result_->__construct(target,duration,properties);
	return _result_;}

Dynamic SimpleActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleActuator_obj > _result_ = new SimpleActuator_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void SimpleActuator_obj::setField_openfl_geom_Transform( ::openfl::geom::Transform target,::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","setField_openfl_geom_Transform",0x08c7d9a8,"motion.actuators.SimpleActuator.setField_openfl_geom_Transform","motion/actuators/SimpleActuator.hx",317,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(propertyName,"propertyName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(319)
		::openfl::geom::Transform tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		::String tmp1 = propertyName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		bool tmp2 = ::Reflect_obj::hasField(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		if ((tmp2)){
			HX_STACK_LINE(324)
			::openfl::geom::Transform tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(324)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(324)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(324)
			::Reflect_obj::setField(tmp3,tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(330)
			::openfl::geom::Transform tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(330)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(330)
			::Reflect_obj::setProperty(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_openfl_geom_Transform,(void))

Void SimpleActuator_obj::setField_motion_actuators_TransformActuator_T( Dynamic target,::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","setField_motion_actuators_TransformActuator_T",0x5d31773c,"motion.actuators.SimpleActuator.setField_motion_actuators_TransformActuator_T","motion/actuators/SimpleActuator.hx",317,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(propertyName,"propertyName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(319)
		Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		::String tmp1 = propertyName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		bool tmp2 = ::Reflect_obj::hasField(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		if ((tmp2)){
			HX_STACK_LINE(324)
			Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(324)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(324)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(324)
			::Reflect_obj::setField(tmp3,tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(330)
			Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(330)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(330)
			::Reflect_obj::setProperty(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_motion_actuators_TransformActuator_T,(void))

Void SimpleActuator_obj::setField_motion_actuators_MotionPathActuator_T( Dynamic target,::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","setField_motion_actuators_MotionPathActuator_T",0xa626cf07,"motion.actuators.SimpleActuator.setField_motion_actuators_MotionPathActuator_T","motion/actuators/SimpleActuator.hx",317,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(propertyName,"propertyName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(319)
		Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		::String tmp1 = propertyName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		bool tmp2 = ::Reflect_obj::hasField(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		if ((tmp2)){
			HX_STACK_LINE(324)
			Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(324)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(324)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(324)
			::Reflect_obj::setField(tmp3,tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(330)
			Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(330)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(330)
			::Reflect_obj::setProperty(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_motion_actuators_MotionPathActuator_T,(void))

Void SimpleActuator_obj::setField_openfl_display_DisplayObject( ::openfl::display::DisplayObject target,::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","setField_openfl_display_DisplayObject",0x35356f85,"motion.actuators.SimpleActuator.setField_openfl_display_DisplayObject","motion/actuators/SimpleActuator.hx",317,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(propertyName,"propertyName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(319)
		::openfl::display::DisplayObject tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		::String tmp1 = propertyName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		bool tmp2 = ::Reflect_obj::hasField(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		if ((tmp2)){
			HX_STACK_LINE(324)
			::openfl::display::DisplayObject tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(324)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(324)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(324)
			::Reflect_obj::setField(tmp3,tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(330)
			::openfl::display::DisplayObject tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(330)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(330)
			::Reflect_obj::setProperty(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_openfl_display_DisplayObject,(void))

Void SimpleActuator_obj::setField_motion_actuators_SimpleActuator_T( Dynamic target,::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","setField_motion_actuators_SimpleActuator_T",0xdcd18bfe,"motion.actuators.SimpleActuator.setField_motion_actuators_SimpleActuator_T","motion/actuators/SimpleActuator.hx",317,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(propertyName,"propertyName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(319)
		Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(319)
		::String tmp1 = propertyName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(319)
		bool tmp2 = ::Reflect_obj::hasField(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(319)
		if ((tmp2)){
			HX_STACK_LINE(324)
			Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(324)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(324)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(324)
			::Reflect_obj::setField(tmp3,tmp4,tmp5);
		}
		else{
			HX_STACK_LINE(330)
			Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(330)
			::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			Dynamic tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(330)
			::Reflect_obj::setProperty(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SimpleActuator_obj,setField_motion_actuators_SimpleActuator_T,(void))

::motion::actuators::GenericActuator SimpleActuator_obj::autoVisible( Dynamic value){
	HX_STACK_FRAME("motion.actuators.SimpleActuator","autoVisible",0xe8aa978c,"motion.actuators.SimpleActuator.autoVisible","motion/actuators/SimpleActuator.hx",97,0x731927e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(99)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	if ((tmp)){
		HX_STACK_LINE(101)
		value = true;
	}
	HX_STACK_LINE(105)
	this->_autoVisible = value;
	HX_STACK_LINE(107)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(107)
	if ((tmp2)){
		HX_STACK_LINE(109)
		this->toggleVisible = false;
		HX_STACK_LINE(111)
		bool tmp3 = this->setVisible;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		if ((tmp3)){
			HX_STACK_LINE(113)
			Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			Dynamic target = tmp4;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(113)
			bool tmp5 = this->cacheVisible;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			Dynamic value1 = tmp5;		HX_STACK_VAR(value1,"value1");
			HX_STACK_LINE(113)
			Dynamic tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			bool tmp7 = ::Reflect_obj::hasField(tmp6,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			if ((tmp7)){
				HX_STACK_LINE(113)
				Dynamic tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(113)
				Dynamic tmp9 = value1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(113)
				::Reflect_obj::setField(tmp8,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),tmp9);
			}
			else{
				HX_STACK_LINE(113)
				Dynamic tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(113)
				Dynamic tmp9 = value1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(113)
				::Reflect_obj::setProperty(tmp8,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),tmp9);
			}
		}
	}
	HX_STACK_LINE(119)
	return hx::ObjectPtr<OBJ_>(this);
}


::motion::actuators::GenericActuator SimpleActuator_obj::delay( Float duration){
	HX_STACK_FRAME("motion.actuators.SimpleActuator","delay",0xf179a58c,"motion.actuators.SimpleActuator.delay","motion/actuators/SimpleActuator.hx",127,0x731927e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(129)
	this->_delay = duration;
	HX_STACK_LINE(130)
	Float tmp = this->startTime;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	this->timeOffset = tmp2;
	HX_STACK_LINE(132)
	return hx::ObjectPtr<OBJ_>(this);
}


Dynamic SimpleActuator_obj::getField( Dynamic target,::String propertyName){
	HX_STACK_FRAME("motion.actuators.SimpleActuator","getField",0x353f81db,"motion.actuators.SimpleActuator.getField","motion/actuators/SimpleActuator.hx",137,0x731927e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(propertyName,"propertyName")
	HX_STACK_LINE(141)
	Dynamic value = null();		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(143)
	Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(143)
	::String tmp1 = propertyName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	bool tmp2 = ::Reflect_obj::hasField(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	if ((tmp2)){
		HX_STACK_LINE(148)
		Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(148)
		::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(148)
		Dynamic tmp5 = ::Reflect_obj::field(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(148)
		value = tmp5;
	}
	else{
		HX_STACK_LINE(153)
		Dynamic tmp3 = target;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		::String tmp4 = propertyName;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		Dynamic tmp5 = ::Reflect_obj::getProperty(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		value = tmp5;
	}
	HX_STACK_LINE(157)
	Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(157)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,getField,return )

Void SimpleActuator_obj::initialize( ){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","initialize",0x46b3e2a7,"motion.actuators.SimpleActuator.initialize","motion/actuators/SimpleActuator.hx",168,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(171)
		Dynamic start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(173)
			Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(173)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(173)
			while((true)){
				HX_STACK_LINE(173)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(173)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(173)
				if ((tmp2)){
					HX_STACK_LINE(173)
					break;
				}
				HX_STACK_LINE(173)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(173)
				::String i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(173)
				++(_g);
				HX_STACK_LINE(175)
				bool isField = true;		HX_STACK_VAR(isField,"isField");
				HX_STACK_LINE(179)
				Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(179)
				::String tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(179)
				bool tmp6 = ::Reflect_obj::hasField(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(179)
				if ((tmp6)){
					HX_STACK_LINE(181)
					Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(181)
					::String tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(181)
					Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(181)
					start = tmp9;
				}
				else{
					HX_STACK_LINE(185)
					isField = false;
					HX_STACK_LINE(186)
					Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(186)
					::String tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(186)
					Dynamic tmp9 = ::Reflect_obj::getProperty(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(186)
					start = tmp9;
				}
				HX_STACK_LINE(196)
				Dynamic tmp7 = start;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(196)
				bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(196)
				if ((tmp8)){
					HX_STACK_LINE(198)
					Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(198)
					{
						HX_STACK_LINE(198)
						Dynamic tmp10 = this->properties;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(198)
						Dynamic target = tmp10;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(198)
						Dynamic value = null();		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(198)
						Dynamic tmp11 = target;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(198)
						::String tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(198)
						bool tmp13 = ::Reflect_obj::hasField(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(198)
						if ((tmp13)){
							HX_STACK_LINE(198)
							Dynamic tmp14 = target;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(198)
							::String tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(198)
							Dynamic tmp16 = ::Reflect_obj::field(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(198)
							value = tmp16;
						}
						else{
							HX_STACK_LINE(198)
							Dynamic tmp14 = target;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(198)
							::String tmp15 = i;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(198)
							Dynamic tmp16 = ::Reflect_obj::getProperty(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(198)
							value = tmp16;
						}
						HX_STACK_LINE(198)
						tmp9 = value;
					}
					HX_STACK_LINE(198)
					Dynamic value = tmp9;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(205)
					Dynamic tmp10 = this->target;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(205)
					Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(205)
					::String tmp12 = i;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(205)
					Dynamic tmp13 = start;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(205)
					Float tmp14 = (value - start);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(205)
					bool tmp15 = isField;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(205)
					::motion::actuators::PropertyDetails tmp16 = ::motion::actuators::PropertyDetails_obj::__new(tmp11,tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(205)
					details = tmp16;
					HX_STACK_LINE(206)
					::motion::actuators::PropertyDetails tmp17 = details;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(206)
					this->propertyDetails->push(tmp17);
				}
			}
		}
		HX_STACK_LINE(212)
		int tmp = this->propertyDetails->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		this->detailsLength = tmp;
		HX_STACK_LINE(213)
		this->initialized = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleActuator_obj,initialize,(void))

Void SimpleActuator_obj::move( ){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","move",0x94436928,"motion.actuators.SimpleActuator.move","motion/actuators/SimpleActuator.hx",218,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(221)
		bool tmp2 = ::Reflect_obj::hasField(tmp1,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(221)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		if ((tmp2)){
			HX_STACK_LINE(221)
			Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(221)
			Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(221)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(221)
			tmp3 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display::DisplayObject >());
		}
		else{
			HX_STACK_LINE(221)
			tmp3 = false;
		}
		HX_STACK_LINE(221)
		this->toggleVisible = tmp3;
		HX_STACK_LINE(226)
		bool tmp4 = this->toggleVisible;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(226)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(226)
		if ((tmp5)){
			HX_STACK_LINE(226)
			Dynamic tmp7 = this->properties;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(226)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(226)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(226)
			tmp6 = (tmp9->__Field(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"), hx::paccDynamic ) != (int)0);
		}
		else{
			HX_STACK_LINE(226)
			tmp6 = false;
		}
		HX_STACK_LINE(226)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(226)
		if ((tmp6)){
			HX_STACK_LINE(226)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(226)
			{
				HX_STACK_LINE(226)
				Dynamic tmp9 = this->target;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(226)
				Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(226)
				Dynamic target = tmp10;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(226)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(226)
				Dynamic tmp11 = target;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				Dynamic tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(226)
				bool tmp13 = ::Reflect_obj::hasField(tmp12,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(226)
				bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(226)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(226)
				if ((tmp15)){
					HX_STACK_LINE(226)
					Dynamic tmp16 = target;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(226)
					Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(226)
					Dynamic tmp18 = ::Reflect_obj::field(tmp17,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(226)
					Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(226)
					value = tmp19;
				}
				else{
					HX_STACK_LINE(226)
					Dynamic tmp16 = target;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(226)
					Dynamic tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(226)
					Dynamic tmp18 = ::Reflect_obj::getProperty(tmp17,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(226)
					Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(226)
					value = tmp19;
				}
				HX_STACK_LINE(226)
				tmp8 = value;
			}
			HX_STACK_LINE(226)
			Dynamic tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(226)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(226)
			tmp7 = false;
		}
		HX_STACK_LINE(226)
		if ((tmp7)){
			HX_STACK_LINE(228)
			this->setVisible = true;
			HX_STACK_LINE(229)
			Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(229)
			{
				HX_STACK_LINE(229)
				Dynamic tmp9 = this->target;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(229)
				Dynamic target = tmp9;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(229)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(229)
				Dynamic tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(229)
				bool tmp11 = ::Reflect_obj::hasField(tmp10,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(229)
				if ((tmp11)){
					HX_STACK_LINE(229)
					Dynamic tmp12 = target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(229)
					Dynamic tmp13 = ::Reflect_obj::field(tmp12,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(229)
					value = tmp13;
				}
				else{
					HX_STACK_LINE(229)
					Dynamic tmp12 = target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(229)
					Dynamic tmp13 = ::Reflect_obj::getProperty(tmp12,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(229)
					value = tmp13;
				}
				HX_STACK_LINE(229)
				tmp8 = value;
			}
			HX_STACK_LINE(229)
			this->cacheVisible = tmp8;
			HX_STACK_LINE(230)
			{
				HX_STACK_LINE(230)
				Dynamic tmp9 = this->target;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(230)
				Dynamic target = tmp9;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(230)
				Dynamic tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(230)
				bool tmp11 = ::Reflect_obj::hasField(tmp10,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(230)
				if ((tmp11)){
					HX_STACK_LINE(230)
					Dynamic tmp12 = target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(230)
					::Reflect_obj::setField(tmp12,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),true);
				}
				else{
					HX_STACK_LINE(230)
					Dynamic tmp12 = target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(230)
					::Reflect_obj::setProperty(tmp12,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),true);
				}
			}
		}
		HX_STACK_LINE(234)
		Float tmp8 = this->startTime;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(234)
		this->timeOffset = tmp8;
		HX_STACK_LINE(235)
		::motion::actuators::SimpleActuator_obj::actuators->push(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(236)
		++(::motion::actuators::SimpleActuator_obj::actuatorsLength);
	}
return null();
}


::motion::actuators::GenericActuator SimpleActuator_obj::onUpdate( Dynamic handler,cpp::ArrayBase parameters){
	HX_STACK_FRAME("motion.actuators.SimpleActuator","onUpdate",0x3b875a1f,"motion.actuators.SimpleActuator.onUpdate","motion/actuators/SimpleActuator.hx",244,0x731927e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(246)
	this->_onUpdate = handler;
	HX_STACK_LINE(248)
	bool tmp = (parameters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(248)
	if ((tmp)){
		HX_STACK_LINE(250)
		this->_onUpdateParams = cpp::ArrayBase_obj::__new();
	}
	else{
		HX_STACK_LINE(254)
		this->_onUpdateParams = parameters;
	}
	HX_STACK_LINE(258)
	this->sendChange = true;
	HX_STACK_LINE(260)
	return hx::ObjectPtr<OBJ_>(this);
}


Void SimpleActuator_obj::pause( ){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","pause",0xd7aaa4ff,"motion.actuators.SimpleActuator.pause","motion/actuators/SimpleActuator.hx",265,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(267)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(267)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		if ((tmp1)){
			HX_STACK_LINE(269)
			this->paused = true;
			HX_STACK_LINE(271)
			this->super::pause();
			HX_STACK_LINE(276)
			int tmp2 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(276)
			this->pauseTime = tmp2;
		}
	}
return null();
}


Void SimpleActuator_obj::resume( ){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","resume",0xf6a5e384,"motion.actuators.SimpleActuator.resume","motion/actuators/SimpleActuator.hx",291,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(293)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(293)
		if ((tmp)){
			HX_STACK_LINE(295)
			this->paused = false;
			HX_STACK_LINE(299)
			int tmp1 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(299)
			Float tmp2 = this->pauseTime;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(299)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			Float tmp4 = (Float(tmp3) / Float((int)1000));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(299)
			hx::AddEq(this->timeOffset,tmp4);
			HX_STACK_LINE(309)
			this->super::resume();
		}
	}
return null();
}


Void SimpleActuator_obj::setProperty( ::motion::actuators::PropertyDetails details,Dynamic value){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","setProperty",0x3c3b8ce0,"motion.actuators.SimpleActuator.setProperty","motion/actuators/SimpleActuator.hx",338,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(details,"details")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(340)
		bool tmp = details->isField;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(340)
		if ((tmp)){
			HX_STACK_LINE(345)
			Dynamic tmp1 = details->target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(345)
			::String tmp2 = details->propertyName;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(345)
			Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			::Reflect_obj::setField(tmp1,tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(351)
			Dynamic tmp1 = details->target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(351)
			::String tmp2 = details->propertyName;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(351)
			Dynamic tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(351)
			::Reflect_obj::setProperty(tmp1,tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleActuator_obj,setProperty,(void))

Void SimpleActuator_obj::stop( Dynamic properties,bool complete,bool sendEvent){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","stop",0x983e7619,"motion.actuators.SimpleActuator.stop","motion/actuators/SimpleActuator.hx",359,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(properties,"properties")
		HX_STACK_ARG(complete,"complete")
		HX_STACK_ARG(sendEvent,"sendEvent")
		HX_STACK_LINE(361)
		bool tmp = this->active;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(361)
		if ((tmp)){
			HX_STACK_LINE(363)
			bool tmp1 = (properties == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(363)
			if ((tmp1)){
				HX_STACK_LINE(365)
				this->active = false;
				HX_STACK_LINE(367)
				bool tmp2 = complete;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(367)
				if ((tmp2)){
					HX_STACK_LINE(369)
					this->apply();
				}
				HX_STACK_LINE(373)
				bool tmp3 = sendEvent;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(373)
				this->complete(tmp3);
				HX_STACK_LINE(374)
				return null();
			}
			HX_STACK_LINE(378)
			{
				HX_STACK_LINE(378)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(378)
				Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(378)
				Array< ::String > _g1 = ::Reflect_obj::fields(tmp2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(378)
				while((true)){
					HX_STACK_LINE(378)
					bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(378)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(378)
					if ((tmp4)){
						HX_STACK_LINE(378)
						break;
					}
					HX_STACK_LINE(378)
					::String tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(378)
					::String i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(378)
					++(_g);
					HX_STACK_LINE(380)
					Dynamic tmp6 = this->properties;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(380)
					::String tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(380)
					bool tmp8 = ::Reflect_obj::hasField(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(380)
					if ((tmp8)){
						HX_STACK_LINE(382)
						this->active = false;
						HX_STACK_LINE(384)
						bool tmp9 = complete;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(384)
						if ((tmp9)){
							HX_STACK_LINE(386)
							this->apply();
						}
						HX_STACK_LINE(390)
						bool tmp10 = sendEvent;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(390)
						this->complete(tmp10);
						HX_STACK_LINE(391)
						return null();
					}
				}
			}
		}
	}
return null();
}


Void SimpleActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","update",0x7526ffe0,"motion.actuators.SimpleActuator.update","motion/actuators/SimpleActuator.hx",402,0x731927e5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(404)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(404)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(404)
		if ((tmp1)){
			HX_STACK_LINE(406)
			::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(407)
			Float easing;		HX_STACK_VAR(easing,"easing");
			HX_STACK_LINE(408)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(410)
			Float tmp2 = currentTime;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(410)
			Float tmp3 = this->timeOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(410)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(410)
			Float tmp5 = this->duration;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(410)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(410)
			Float tweenPosition = tmp6;		HX_STACK_VAR(tweenPosition,"tweenPosition");
			HX_STACK_LINE(412)
			bool tmp7 = (tweenPosition > (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(412)
			if ((tmp7)){
				HX_STACK_LINE(414)
				tweenPosition = (int)1;
			}
			HX_STACK_LINE(418)
			bool tmp8 = this->initialized;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(418)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(418)
			if ((tmp9)){
				HX_STACK_LINE(420)
				this->initialize();
			}
			HX_STACK_LINE(424)
			bool tmp10 = this->special;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(424)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(424)
			if ((tmp11)){
				HX_STACK_LINE(426)
				::motion::easing::IEasing tmp12 = this->_ease;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(426)
				Float tmp13 = tweenPosition;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(426)
				Float tmp14 = tmp12->calculate(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(426)
				easing = tmp14;
				HX_STACK_LINE(428)
				{
					HX_STACK_LINE(428)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(428)
					int tmp15 = this->detailsLength;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(428)
					int _g = tmp15;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(428)
					while((true)){
						HX_STACK_LINE(428)
						bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(428)
						bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(428)
						if ((tmp17)){
							HX_STACK_LINE(428)
							break;
						}
						HX_STACK_LINE(428)
						int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(428)
						int i1 = tmp18;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(430)
						::motion::actuators::PropertyDetails tmp19 = this->propertyDetails->__get(i1).StaticCast< ::motion::actuators::PropertyDetails >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(430)
						details = tmp19;
						HX_STACK_LINE(431)
						{
							HX_STACK_LINE(431)
							Float tmp20 = details->start;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(431)
							Float tmp21 = (details->change * easing);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(431)
							Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(431)
							Dynamic value = tmp22;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(431)
							bool tmp23 = details->isField;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(431)
							if ((tmp23)){
								HX_STACK_LINE(431)
								Dynamic tmp24 = details->target;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(431)
								::String tmp25 = details->propertyName;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(431)
								Dynamic tmp26 = value;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(431)
								::Reflect_obj::setField(tmp24,tmp25,tmp26);
							}
							else{
								HX_STACK_LINE(431)
								Dynamic tmp24 = details->target;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(431)
								::String tmp25 = details->propertyName;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(431)
								Dynamic tmp26 = value;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(431)
								::Reflect_obj::setProperty(tmp24,tmp25,tmp26);
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(437)
				bool tmp12 = this->_reverse;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(437)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(437)
				if ((tmp13)){
					HX_STACK_LINE(439)
					::motion::easing::IEasing tmp14 = this->_ease;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(439)
					Float tmp15 = tweenPosition;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(439)
					Float tmp16 = tmp14->calculate(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(439)
					easing = tmp16;
				}
				else{
					HX_STACK_LINE(443)
					::motion::easing::IEasing tmp14 = this->_ease;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(443)
					Float tmp15 = ((int)1 - tweenPosition);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(443)
					Float tmp16 = tmp14->calculate(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(443)
					easing = tmp16;
				}
				HX_STACK_LINE(447)
				Float endValue;		HX_STACK_VAR(endValue,"endValue");
				HX_STACK_LINE(449)
				{
					HX_STACK_LINE(449)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(449)
					int tmp14 = this->detailsLength;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(449)
					int _g = tmp14;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(449)
					while((true)){
						HX_STACK_LINE(449)
						bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(449)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(449)
						if ((tmp16)){
							HX_STACK_LINE(449)
							break;
						}
						HX_STACK_LINE(449)
						int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(449)
						int i1 = tmp17;		HX_STACK_VAR(i1,"i1");
						HX_STACK_LINE(451)
						::motion::actuators::PropertyDetails tmp18 = this->propertyDetails->__get(i1).StaticCast< ::motion::actuators::PropertyDetails >();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(451)
						details = tmp18;
						HX_STACK_LINE(453)
						bool tmp19 = this->_smartRotation;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(453)
						bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(453)
						if ((tmp19)){
							HX_STACK_LINE(453)
							bool tmp21 = (details->propertyName == HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(453)
							bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(453)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(453)
							bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(453)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(453)
							bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(453)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(453)
							bool tmp28 = tmp26;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(453)
							if ((tmp28)){
								HX_STACK_LINE(453)
								bool tmp29 = (details->propertyName == HX_HCSTRING("rotationX","\x5a","\x59","\xef","\x6c"));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(453)
								tmp27 = tmp29;
							}
							else{
								HX_STACK_LINE(453)
								tmp27 = true;
							}
							HX_STACK_LINE(453)
							bool tmp29 = tmp27;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(453)
							bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(453)
							bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(453)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(453)
							bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(453)
							bool tmp34 = tmp32;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(453)
							if ((tmp34)){
								HX_STACK_LINE(453)
								bool tmp35 = (details->propertyName == HX_HCSTRING("rotationY","\x5b","\x59","\xef","\x6c"));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(453)
								tmp33 = tmp35;
							}
							else{
								HX_STACK_LINE(453)
								tmp33 = true;
							}
							HX_STACK_LINE(453)
							bool tmp35 = tmp33;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(453)
							bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(453)
							bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(453)
							bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(453)
							if ((tmp38)){
								HX_STACK_LINE(453)
								tmp20 = (details->propertyName == HX_HCSTRING("rotationZ","\x5c","\x59","\xef","\x6c"));
							}
							else{
								HX_STACK_LINE(453)
								tmp20 = true;
							}
						}
						else{
							HX_STACK_LINE(453)
							tmp20 = false;
						}
						HX_STACK_LINE(453)
						if ((tmp20)){
							HX_STACK_LINE(455)
							Float tmp21 = hx::Mod(details->change,(int)360);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(455)
							Float rotation = tmp21;		HX_STACK_VAR(rotation,"rotation");
							HX_STACK_LINE(457)
							bool tmp22 = (rotation > (int)180);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(457)
							if ((tmp22)){
								HX_STACK_LINE(459)
								hx::SubEq(rotation,(int)360);
							}
							else{
								HX_STACK_LINE(461)
								bool tmp23 = (rotation < (int)-180);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(461)
								if ((tmp23)){
									HX_STACK_LINE(463)
									hx::AddEq(rotation,(int)360);
								}
							}
							HX_STACK_LINE(467)
							Float tmp23 = details->start;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(467)
							Float tmp24 = (rotation * easing);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(467)
							Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(467)
							endValue = tmp25;
						}
						else{
							HX_STACK_LINE(471)
							Float tmp21 = details->start;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(471)
							Float tmp22 = (details->change * easing);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(471)
							Float tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(471)
							endValue = tmp23;
						}
						HX_STACK_LINE(475)
						bool tmp21 = this->_snapping;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(475)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(475)
						if ((tmp22)){
							HX_STACK_LINE(477)
							bool tmp23 = details->isField;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(477)
							if ((tmp23)){
								HX_STACK_LINE(477)
								Dynamic tmp24 = details->target;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(477)
								::String tmp25 = details->propertyName;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(477)
								Float tmp26 = endValue;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(477)
								::Reflect_obj::setField(tmp24,tmp25,tmp26);
							}
							else{
								HX_STACK_LINE(477)
								Dynamic tmp24 = details->target;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(477)
								::String tmp25 = details->propertyName;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(477)
								Float tmp26 = endValue;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(477)
								::Reflect_obj::setProperty(tmp24,tmp25,tmp26);
							}
						}
						else{
							HX_STACK_LINE(481)
							Float tmp23 = endValue;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(481)
							int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(481)
							Dynamic value = tmp24;		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(481)
							bool tmp25 = details->isField;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(481)
							if ((tmp25)){
								HX_STACK_LINE(481)
								Dynamic tmp26 = details->target;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(481)
								::String tmp27 = details->propertyName;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(481)
								Dynamic tmp28 = value;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(481)
								::Reflect_obj::setField(tmp26,tmp27,tmp28);
							}
							else{
								HX_STACK_LINE(481)
								Dynamic tmp26 = details->target;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(481)
								::String tmp27 = details->propertyName;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(481)
								Dynamic tmp28 = value;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(481)
								::Reflect_obj::setProperty(tmp26,tmp27,tmp28);
							}
						}
					}
				}
			}
			HX_STACK_LINE(489)
			bool tmp12 = (tweenPosition == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(489)
			if ((tmp12)){
				HX_STACK_LINE(491)
				int tmp13 = this->_repeat;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(491)
				bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(491)
				if ((tmp14)){
					HX_STACK_LINE(493)
					this->active = false;
					HX_STACK_LINE(495)
					bool tmp15 = this->toggleVisible;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(495)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(495)
					if ((tmp15)){
						HX_STACK_LINE(495)
						Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(495)
						{
							HX_STACK_LINE(495)
							Dynamic tmp18 = this->target;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(495)
							Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(495)
							Dynamic target = tmp19;		HX_STACK_VAR(target,"target");
							HX_STACK_LINE(495)
							Dynamic value = null();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(495)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(495)
							Dynamic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(495)
							bool tmp22 = ::Reflect_obj::hasField(tmp21,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(495)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(495)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(495)
							if ((tmp24)){
								HX_STACK_LINE(495)
								Dynamic tmp25 = target;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(495)
								Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(495)
								Dynamic tmp27 = ::Reflect_obj::field(tmp26,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(495)
								Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(495)
								value = tmp28;
							}
							else{
								HX_STACK_LINE(495)
								Dynamic tmp25 = target;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(495)
								Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(495)
								Dynamic tmp27 = ::Reflect_obj::getProperty(tmp26,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(495)
								Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(495)
								value = tmp28;
							}
							HX_STACK_LINE(495)
							tmp17 = value;
						}
						HX_STACK_LINE(495)
						tmp16 = (tmp17 == (int)0);
					}
					else{
						HX_STACK_LINE(495)
						tmp16 = false;
					}
					HX_STACK_LINE(495)
					if ((tmp16)){
						HX_STACK_LINE(497)
						Dynamic tmp17 = this->target;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(497)
						Dynamic target = tmp17;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(497)
						Dynamic tmp18 = target;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(497)
						bool tmp19 = ::Reflect_obj::hasField(tmp18,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(497)
						if ((tmp19)){
							HX_STACK_LINE(497)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(497)
							::Reflect_obj::setField(tmp20,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),false);
						}
						else{
							HX_STACK_LINE(497)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(497)
							::Reflect_obj::setProperty(tmp20,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),false);
						}
					}
					HX_STACK_LINE(501)
					this->complete(true);
					HX_STACK_LINE(502)
					return null();
				}
				else{
					HX_STACK_LINE(506)
					Dynamic tmp15 = this->_onRepeat;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(506)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(506)
					if ((tmp16)){
						HX_STACK_LINE(508)
						Dynamic tmp17 = this->_onRepeat;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(508)
						Dynamic method = tmp17;		HX_STACK_VAR(method,"method");
						HX_STACK_LINE(508)
						cpp::ArrayBase params = this->_onRepeatParams;		HX_STACK_VAR(params,"params");
						HX_STACK_LINE(508)
						bool tmp18 = (params == null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(508)
						if ((tmp18)){
							HX_STACK_LINE(508)
							params = cpp::ArrayBase_obj::__new();
						}
						HX_STACK_LINE(508)
						Dynamic tmp19 = method;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(508)
						Dynamic tmp20 = method;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(508)
						::Reflect_obj::callMethod(tmp19,tmp20,params);
					}
					HX_STACK_LINE(512)
					bool tmp17 = this->_reflect;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(512)
					if ((tmp17)){
						HX_STACK_LINE(514)
						bool tmp18 = this->_reverse;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(514)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(514)
						this->_reverse = tmp19;
					}
					HX_STACK_LINE(518)
					this->startTime = currentTime;
					HX_STACK_LINE(519)
					Float tmp18 = this->startTime;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(519)
					Float tmp19 = this->_delay;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(519)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(519)
					this->timeOffset = tmp20;
					HX_STACK_LINE(521)
					int tmp21 = this->_repeat;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(521)
					bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(521)
					if ((tmp22)){
						HX_STACK_LINE(523)
						(this->_repeat)--;
					}
				}
			}
			HX_STACK_LINE(531)
			bool tmp13 = this->sendChange;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(531)
			if ((tmp13)){
				HX_STACK_LINE(533)
				this->change();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,update,(void))

Array< ::Dynamic > SimpleActuator_obj::actuators;

int SimpleActuator_obj::actuatorsLength;

bool SimpleActuator_obj::addedEvent;

Void SimpleActuator_obj::stage_onEnterFrame( ::openfl::events::Event event){
{
		HX_STACK_FRAME("motion.actuators.SimpleActuator","stage_onEnterFrame",0x3adccfac,"motion.actuators.SimpleActuator.stage_onEnterFrame","motion/actuators/SimpleActuator.hx",552,0x731927e5)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(556)
		int tmp = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(556)
		Float tmp1 = (Float(tmp) / Float((int)1000));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(556)
		Float currentTime = tmp1;		HX_STACK_VAR(currentTime,"currentTime");
		HX_STACK_LINE(566)
		::motion::actuators::SimpleActuator actuator;		HX_STACK_VAR(actuator,"actuator");
		HX_STACK_LINE(568)
		int j = (int)0;		HX_STACK_VAR(j,"j");
		HX_STACK_LINE(569)
		bool cleanup = false;		HX_STACK_VAR(cleanup,"cleanup");
		HX_STACK_LINE(571)
		{
			HX_STACK_LINE(571)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(571)
			int tmp2 = ::motion::actuators::SimpleActuator_obj::actuatorsLength;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(571)
			int _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(571)
			while((true)){
				HX_STACK_LINE(571)
				bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(571)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(571)
				if ((tmp4)){
					HX_STACK_LINE(571)
					break;
				}
				HX_STACK_LINE(571)
				int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(571)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(573)
				::motion::actuators::SimpleActuator tmp6 = ::motion::actuators::SimpleActuator_obj::actuators->__get(j).StaticCast< ::motion::actuators::SimpleActuator >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(573)
				actuator = tmp6;
				HX_STACK_LINE(575)
				bool tmp7 = (actuator != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(575)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(575)
				if ((tmp7)){
					HX_STACK_LINE(575)
					tmp8 = actuator->active;
				}
				else{
					HX_STACK_LINE(575)
					tmp8 = false;
				}
				HX_STACK_LINE(575)
				if ((tmp8)){
					HX_STACK_LINE(577)
					bool tmp9 = (currentTime >= actuator->timeOffset);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(577)
					if ((tmp9)){
						HX_STACK_LINE(579)
						Float tmp10 = currentTime;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(579)
						actuator->update(tmp10);
					}
					HX_STACK_LINE(583)
					(j)++;
				}
				else{
					HX_STACK_LINE(587)
					int tmp9 = j;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(587)
					::motion::actuators::SimpleActuator_obj::actuators->splice(tmp9,(int)1);
					HX_STACK_LINE(588)
					--(::motion::actuators::SimpleActuator_obj::actuatorsLength);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SimpleActuator_obj,stage_onEnterFrame,(void))


SimpleActuator_obj::SimpleActuator_obj()
{
}

void SimpleActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleActuator);
	HX_MARK_MEMBER_NAME(timeOffset,"timeOffset");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_MARK_MEMBER_NAME(detailsLength,"detailsLength");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(pauseTime,"pauseTime");
	HX_MARK_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_MARK_MEMBER_NAME(sendChange,"sendChange");
	HX_MARK_MEMBER_NAME(setVisible,"setVisible");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(toggleVisible,"toggleVisible");
	::motion::actuators::GenericActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timeOffset,"timeOffset");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(cacheVisible,"cacheVisible");
	HX_VISIT_MEMBER_NAME(detailsLength,"detailsLength");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(pauseTime,"pauseTime");
	HX_VISIT_MEMBER_NAME(propertyDetails,"propertyDetails");
	HX_VISIT_MEMBER_NAME(sendChange,"sendChange");
	HX_VISIT_MEMBER_NAME(setVisible,"setVisible");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(toggleVisible,"toggleVisible");
	::motion::actuators::GenericActuator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimpleActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getField") ) { return getField_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { return pauseTime; }
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timeOffset") ) { return timeOffset; }
		if (HX_FIELD_EQ(inName,"sendChange") ) { return sendChange; }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return setVisible; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"autoVisible") ) { return autoVisible_dyn(); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return setProperty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { return cacheVisible; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detailsLength") ) { return detailsLength; }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return toggleVisible; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { return propertyDetails; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"setField_openfl_geom_Transform") ) { return setField_openfl_geom_Transform_dyn(); }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"setField_openfl_display_DisplayObject") ) { return setField_openfl_display_DisplayObject_dyn(); }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"setField_motion_actuators_SimpleActuator_T") ) { return setField_motion_actuators_SimpleActuator_T_dyn(); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"setField_motion_actuators_TransformActuator_T") ) { return setField_motion_actuators_TransformActuator_T_dyn(); }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"setField_motion_actuators_MotionPathActuator_T") ) { return setField_motion_actuators_MotionPathActuator_T_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SimpleActuator_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { outValue = actuators; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { outValue = addedEvent; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { outValue = actuatorsLength; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stage_onEnterFrame") ) { outValue = stage_onEnterFrame_dyn(); return true;  }
	}
	return false;
}

Dynamic SimpleActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseTime") ) { pauseTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timeOffset") ) { timeOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sendChange") ) { sendChange=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setVisible") ) { setVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cacheVisible") ) { cacheVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"detailsLength") ) { detailsLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { toggleVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"propertyDetails") ) { propertyDetails=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SimpleActuator_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"actuators") ) { actuators=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addedEvent") ) { addedEvent=ioValue.Cast< bool >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actuatorsLength") ) { actuatorsLength=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void SimpleActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("timeOffset","\x80","\xdf","\x08","\xfe"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("cacheVisible","\x50","\xb2","\x89","\x51"));
	outFields->push(HX_HCSTRING("detailsLength","\x48","\xe3","\xc3","\x98"));
	outFields->push(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51"));
	outFields->push(HX_HCSTRING("propertyDetails","\xed","\xa0","\x48","\x71"));
	outFields->push(HX_HCSTRING("sendChange","\xd8","\xb8","\xc8","\x58"));
	outFields->push(HX_HCSTRING("setVisible","\xf0","\x9c","\x03","\xf6"));
	outFields->push(HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"));
	outFields->push(HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,timeOffset),HX_HCSTRING("timeOffset","\x80","\xdf","\x08","\xfe")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,cacheVisible),HX_HCSTRING("cacheVisible","\x50","\xb2","\x89","\x51")},
	{hx::fsInt,(int)offsetof(SimpleActuator_obj,detailsLength),HX_HCSTRING("detailsLength","\x48","\xe3","\xc3","\x98")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,initialized),HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,pauseTime),HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SimpleActuator_obj,propertyDetails),HX_HCSTRING("propertyDetails","\xed","\xa0","\x48","\x71")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,sendChange),HX_HCSTRING("sendChange","\xd8","\xb8","\xc8","\x58")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,setVisible),HX_HCSTRING("setVisible","\xf0","\x9c","\x03","\xf6")},
	{hx::fsFloat,(int)offsetof(SimpleActuator_obj,startTime),HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05")},
	{hx::fsBool,(int)offsetof(SimpleActuator_obj,toggleVisible),HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &SimpleActuator_obj::actuators,HX_HCSTRING("actuators","\x1a","\x95","\x55","\xd2")},
	{hx::fsInt,(void *) &SimpleActuator_obj::actuatorsLength,HX_HCSTRING("actuatorsLength","\xa0","\x6d","\xfd","\xca")},
	{hx::fsBool,(void *) &SimpleActuator_obj::addedEvent,HX_HCSTRING("addedEvent","\x3a","\x2b","\xd3","\x06")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("setField_openfl_geom_Transform","\xd1","\xd2","\xb0","\x7f"),
	HX_HCSTRING("setField_motion_actuators_TransformActuator_T","\x33","\x34","\xff","\xa9"),
	HX_HCSTRING("setField_motion_actuators_MotionPathActuator_T","\x30","\x6a","\x5e","\x8d"),
	HX_HCSTRING("setField_openfl_display_DisplayObject","\x7c","\xdd","\x61","\x25"),
	HX_HCSTRING("setField_motion_actuators_SimpleActuator_T","\xa7","\x1e","\xa0","\x75"),
	HX_HCSTRING("timeOffset","\x80","\xdf","\x08","\xfe"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("cacheVisible","\x50","\xb2","\x89","\x51"),
	HX_HCSTRING("detailsLength","\x48","\xe3","\xc3","\x98"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("pauseTime","\x23","\x82","\x63","\x51"),
	HX_HCSTRING("propertyDetails","\xed","\xa0","\x48","\x71"),
	HX_HCSTRING("sendChange","\xd8","\xb8","\xc8","\x58"),
	HX_HCSTRING("setVisible","\xf0","\x9c","\x03","\xf6"),
	HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"),
	HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53"),
	HX_HCSTRING("autoVisible","\xc3","\x1c","\x08","\x89"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("getField","\x44","\xa4","\x6a","\x60"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("setProperty","\x17","\x12","\x99","\xdc"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_MARK_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuators,"actuators");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::actuatorsLength,"actuatorsLength");
	HX_VISIT_MEMBER_NAME(SimpleActuator_obj::addedEvent,"addedEvent");
};

#endif

hx::Class SimpleActuator_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("actuators","\x1a","\x95","\x55","\xd2"),
	HX_HCSTRING("actuatorsLength","\xa0","\x6d","\xfd","\xca"),
	HX_HCSTRING("addedEvent","\x3a","\x2b","\xd3","\x06"),
	HX_HCSTRING("stage_onEnterFrame","\x55","\x6f","\x40","\x8f"),
	::String(null()) };

void SimpleActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.actuators.SimpleActuator","\xb7","\x91","\x0d","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SimpleActuator_obj::__GetStatic;
	__mClass->mSetStaticField = &SimpleActuator_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SimpleActuator_obj >;
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

void SimpleActuator_obj::__boot()
{
	actuators= Array_obj< ::Dynamic >::__new();
	actuatorsLength= (int)0;
	addedEvent= false;
}

} // end namespace motion
} // end namespace actuators
