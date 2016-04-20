#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MotionPathActuator
#include <motion/actuators/MotionPathActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyPathDetails
#include <motion/actuators/PropertyPathDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace actuators{

Void MotionPathActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("motion.actuators.MotionPathActuator","new",0x45f2d072,"motion.actuators.MotionPathActuator.new","motion/actuators/MotionPathActuator.hx",10,0x51ab64bc)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(12)
	Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(12)
	Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(12)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//MotionPathActuator_obj::~MotionPathActuator_obj() { }

Dynamic MotionPathActuator_obj::__CreateEmpty() { return  new MotionPathActuator_obj; }
hx::ObjectPtr< MotionPathActuator_obj > MotionPathActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< MotionPathActuator_obj > _result_ = new MotionPathActuator_obj();
	_result_->__construct(target,duration,properties);
	return _result_;}

Dynamic MotionPathActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MotionPathActuator_obj > _result_ = new MotionPathActuator_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void MotionPathActuator_obj::apply( ){
{
		HX_STACK_FRAME("motion.actuators.MotionPathActuator","apply",0x4fa82e00,"motion.actuators.MotionPathActuator.apply","motion/actuators/MotionPathActuator.hx",19,0x51ab64bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(19)
		Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(19)
		while((true)){
			HX_STACK_LINE(19)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(19)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(19)
			if ((tmp2)){
				HX_STACK_LINE(19)
				break;
			}
			HX_STACK_LINE(19)
			::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(19)
			::String propertyName = tmp3;		HX_STACK_VAR(propertyName,"propertyName");
			HX_STACK_LINE(19)
			++(_g);
			HX_STACK_LINE(23)
			Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(23)
			::String tmp5 = propertyName;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(23)
			bool tmp6 = ::Reflect_obj::hasField(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(23)
			if ((tmp6)){
				HX_STACK_LINE(25)
				Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(25)
				::String tmp8 = propertyName;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(25)
				Dynamic tmp9 = this->properties;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(25)
				::String tmp10 = propertyName;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(25)
				Dynamic tmp11 = ::Reflect_obj::field(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(25)
				::motion::IComponentPath tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(25)
				tmp12 = hx::TCast< ::motion::IComponentPath >::cast(tmp11);
				HX_STACK_LINE(25)
				Float tmp13 = tmp12->get_end();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(25)
				::Reflect_obj::setField(tmp7,tmp8,tmp13);
			}
			else{
				HX_STACK_LINE(29)
				Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(29)
				::String tmp8 = propertyName;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(29)
				Dynamic tmp9 = this->properties;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(29)
				::String tmp10 = propertyName;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(29)
				Dynamic tmp11 = ::Reflect_obj::field(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(29)
				::motion::IComponentPath tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(29)
				tmp12 = hx::TCast< ::motion::IComponentPath >::cast(tmp11);
				HX_STACK_LINE(29)
				Float tmp13 = tmp12->get_end();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(29)
				::Reflect_obj::setProperty(tmp7,tmp8,tmp13);
			}
		}
	}
return null();
}


Void MotionPathActuator_obj::initialize( ){
{
		HX_STACK_FRAME("motion.actuators.MotionPathActuator","initialize",0x2e88377e,"motion.actuators.MotionPathActuator.initialize","motion/actuators/MotionPathActuator.hx",44,0x51ab64bc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		::motion::actuators::PropertyPathDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(47)
		::motion::IComponentPath path;		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(49)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(49)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(49)
				if ((tmp2)){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				::String propertyName = tmp3;		HX_STACK_VAR(propertyName,"propertyName");
				HX_STACK_LINE(49)
				++(_g);
				HX_STACK_LINE(51)
				Dynamic tmp4 = this->properties;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(51)
				::String tmp5 = propertyName;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(51)
				Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(51)
				::motion::IComponentPath tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(51)
				tmp7 = hx::TCast< ::motion::IComponentPath >::cast(tmp6);
				HX_STACK_LINE(51)
				path = tmp7;
				HX_STACK_LINE(53)
				bool tmp8 = (path != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(53)
				if ((tmp8)){
					HX_STACK_LINE(55)
					bool isField = true;		HX_STACK_VAR(isField,"isField");
					HX_STACK_LINE(59)
					Dynamic tmp9 = this->target;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(59)
					::String tmp10 = propertyName;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(59)
					bool tmp11 = ::Reflect_obj::hasField(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(59)
					if ((tmp11)){
						HX_STACK_LINE(61)
						Dynamic tmp12 = this->target;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(61)
						::String tmp13 = propertyName;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(61)
						Dynamic tmp14 = ::Reflect_obj::field(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(61)
						path->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp14;
					}
					else{
						HX_STACK_LINE(65)
						isField = false;
						HX_STACK_LINE(66)
						Dynamic tmp12 = this->target;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(66)
						::String tmp13 = propertyName;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(66)
						Dynamic tmp14 = ::Reflect_obj::getProperty(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(66)
						path->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = tmp14;
					}
					HX_STACK_LINE(76)
					Dynamic tmp12 = this->target;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(76)
					::String tmp13 = propertyName;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(76)
					::motion::IComponentPath tmp14 = path;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(76)
					bool tmp15 = isField;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(76)
					::motion::actuators::PropertyPathDetails tmp16 = ::motion::actuators::PropertyPathDetails_obj::__new(tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(76)
					details = tmp16;
					HX_STACK_LINE(77)
					::motion::actuators::PropertyPathDetails tmp17 = details;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(77)
					this->propertyDetails->push(tmp17);
				}
			}
		}
		HX_STACK_LINE(83)
		int tmp = this->propertyDetails->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		this->detailsLength = tmp;
		HX_STACK_LINE(84)
		this->initialized = true;
	}
return null();
}


Void MotionPathActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("motion.actuators.MotionPathActuator","update",0x5aac5d37,"motion.actuators.MotionPathActuator.update","motion/actuators/MotionPathActuator.hx",89,0x51ab64bc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(91)
		bool tmp = this->paused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		if ((tmp1)){
			HX_STACK_LINE(93)
			::motion::actuators::PropertyPathDetails details;		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(94)
			Float easing;		HX_STACK_VAR(easing,"easing");
			HX_STACK_LINE(96)
			Float tmp2 = currentTime;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			Float tmp3 = this->timeOffset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			Float tmp5 = this->duration;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			Float tweenPosition = tmp6;		HX_STACK_VAR(tweenPosition,"tweenPosition");
			HX_STACK_LINE(98)
			bool tmp7 = (tweenPosition > (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			if ((tmp7)){
				HX_STACK_LINE(100)
				tweenPosition = (int)1;
			}
			HX_STACK_LINE(104)
			bool tmp8 = this->initialized;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			if ((tmp9)){
				HX_STACK_LINE(106)
				this->initialize();
			}
			HX_STACK_LINE(110)
			bool tmp10 = this->special;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(110)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(110)
			if ((tmp11)){
				HX_STACK_LINE(112)
				::motion::easing::IEasing tmp12 = this->_ease;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(112)
				Float tmp13 = tweenPosition;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(112)
				Float tmp14 = tmp12->calculate(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(112)
				easing = tmp14;
				HX_STACK_LINE(114)
				{
					HX_STACK_LINE(114)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(114)
					Array< ::Dynamic > _g1 = this->propertyDetails;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(114)
					while((true)){
						HX_STACK_LINE(114)
						bool tmp15 = (_g < _g1->length);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(114)
						bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(114)
						if ((tmp16)){
							HX_STACK_LINE(114)
							break;
						}
						HX_STACK_LINE(114)
						::motion::actuators::PropertyDetails tmp17 = _g1->__get(_g).StaticCast< ::motion::actuators::PropertyDetails >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(114)
						::motion::actuators::PropertyDetails details1 = tmp17;		HX_STACK_VAR(details1,"details1");
						HX_STACK_LINE(114)
						++(_g);
						HX_STACK_LINE(116)
						bool tmp18 = details1->isField;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(116)
						if ((tmp18)){
							HX_STACK_LINE(118)
							Dynamic tmp19 = details1->target;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(118)
							::String tmp20 = details1->propertyName;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(118)
							::motion::actuators::PropertyPathDetails tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(118)
							tmp21 = hx::TCast< ::motion::actuators::PropertyPathDetails >::cast(details1);
							HX_STACK_LINE(118)
							Float tmp22 = easing;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(118)
							Float tmp23 = tmp21->path->calculate(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(118)
							::Reflect_obj::setField(tmp19,tmp20,tmp23);
						}
						else{
							HX_STACK_LINE(123)
							Dynamic tmp19 = details1->target;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(123)
							::String tmp20 = details1->propertyName;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(123)
							::motion::actuators::PropertyPathDetails tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(123)
							tmp21 = hx::TCast< ::motion::actuators::PropertyPathDetails >::cast(details1);
							HX_STACK_LINE(123)
							Float tmp22 = easing;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(123)
							Float tmp23 = tmp21->path->calculate(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(123)
							::Reflect_obj::setProperty(tmp19,tmp20,tmp23);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(132)
				bool tmp12 = this->_reverse;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(132)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(132)
				if ((tmp13)){
					HX_STACK_LINE(134)
					::motion::easing::IEasing tmp14 = this->_ease;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(134)
					Float tmp15 = tweenPosition;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(134)
					Float tmp16 = tmp14->calculate(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(134)
					easing = tmp16;
				}
				else{
					HX_STACK_LINE(138)
					::motion::easing::IEasing tmp14 = this->_ease;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(138)
					Float tmp15 = ((int)1 - tweenPosition);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(138)
					Float tmp16 = tmp14->calculate(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(138)
					easing = tmp16;
				}
				HX_STACK_LINE(142)
				Float endValue;		HX_STACK_VAR(endValue,"endValue");
				HX_STACK_LINE(144)
				{
					HX_STACK_LINE(144)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(144)
					Array< ::Dynamic > _g1 = this->propertyDetails;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(144)
					while((true)){
						HX_STACK_LINE(144)
						bool tmp14 = (_g < _g1->length);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(144)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(144)
						if ((tmp15)){
							HX_STACK_LINE(144)
							break;
						}
						HX_STACK_LINE(144)
						::motion::actuators::PropertyDetails tmp16 = _g1->__get(_g).StaticCast< ::motion::actuators::PropertyDetails >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(144)
						::motion::actuators::PropertyDetails details1 = tmp16;		HX_STACK_VAR(details1,"details1");
						HX_STACK_LINE(144)
						++(_g);
						HX_STACK_LINE(146)
						bool tmp17 = this->_snapping;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(146)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(146)
						if ((tmp18)){
							HX_STACK_LINE(148)
							bool tmp19 = details1->isField;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(148)
							if ((tmp19)){
								HX_STACK_LINE(150)
								Dynamic tmp20 = details1->target;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(150)
								::String tmp21 = details1->propertyName;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(150)
								::motion::actuators::PropertyPathDetails tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(150)
								tmp22 = hx::TCast< ::motion::actuators::PropertyPathDetails >::cast(details1);
								HX_STACK_LINE(150)
								Float tmp23 = easing;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(150)
								Float tmp24 = tmp22->path->calculate(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(150)
								::Reflect_obj::setField(tmp20,tmp21,tmp24);
							}
							else{
								HX_STACK_LINE(155)
								Dynamic tmp20 = details1->target;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(155)
								::String tmp21 = details1->propertyName;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(155)
								::motion::actuators::PropertyPathDetails tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(155)
								tmp22 = hx::TCast< ::motion::actuators::PropertyPathDetails >::cast(details1);
								HX_STACK_LINE(155)
								Float tmp23 = easing;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(155)
								Float tmp24 = tmp22->path->calculate(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(155)
								::Reflect_obj::setProperty(tmp20,tmp21,tmp24);
							}
						}
						else{
							HX_STACK_LINE(162)
							bool tmp19 = details1->isField;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(162)
							if ((tmp19)){
								HX_STACK_LINE(164)
								Dynamic tmp20 = details1->target;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(164)
								::String tmp21 = details1->propertyName;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(164)
								::motion::actuators::PropertyPathDetails tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(164)
								tmp22 = hx::TCast< ::motion::actuators::PropertyPathDetails >::cast(details1);
								HX_STACK_LINE(164)
								Float tmp23 = easing;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(164)
								Float tmp24 = tmp22->path->calculate(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(164)
								int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(164)
								::Reflect_obj::setField(tmp20,tmp21,tmp25);
							}
							else{
								HX_STACK_LINE(169)
								Dynamic tmp20 = details1->target;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(169)
								::String tmp21 = details1->propertyName;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(169)
								::motion::actuators::PropertyPathDetails tmp22;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(169)
								tmp22 = hx::TCast< ::motion::actuators::PropertyPathDetails >::cast(details1);
								HX_STACK_LINE(169)
								Float tmp23 = easing;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(169)
								Float tmp24 = tmp22->path->calculate(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(169)
								int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(169)
								::Reflect_obj::setProperty(tmp20,tmp21,tmp25);
							}
						}
					}
				}
			}
			HX_STACK_LINE(181)
			bool tmp12 = (tweenPosition == (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(181)
			if ((tmp12)){
				HX_STACK_LINE(183)
				int tmp13 = this->_repeat;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(183)
				bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(183)
				if ((tmp14)){
					HX_STACK_LINE(185)
					this->active = false;
					HX_STACK_LINE(187)
					bool tmp15 = this->toggleVisible;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(187)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(187)
					if ((tmp15)){
						HX_STACK_LINE(187)
						Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(187)
						{
							HX_STACK_LINE(187)
							Dynamic tmp18 = this->target;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(187)
							Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(187)
							Dynamic target = tmp19;		HX_STACK_VAR(target,"target");
							HX_STACK_LINE(187)
							Dynamic value = null();		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(187)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(187)
							Dynamic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(187)
							bool tmp22 = ::Reflect_obj::hasField(tmp21,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(187)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(187)
							bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(187)
							if ((tmp24)){
								HX_STACK_LINE(187)
								Dynamic tmp25 = target;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(187)
								Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(187)
								Dynamic tmp27 = ::Reflect_obj::field(tmp26,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(187)
								Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(187)
								value = tmp28;
							}
							else{
								HX_STACK_LINE(187)
								Dynamic tmp25 = target;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(187)
								Dynamic tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(187)
								Dynamic tmp27 = ::Reflect_obj::getProperty(tmp26,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(187)
								Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(187)
								value = tmp28;
							}
							HX_STACK_LINE(187)
							tmp17 = value;
						}
						HX_STACK_LINE(187)
						tmp16 = (tmp17 == (int)0);
					}
					else{
						HX_STACK_LINE(187)
						tmp16 = false;
					}
					HX_STACK_LINE(187)
					if ((tmp16)){
						HX_STACK_LINE(189)
						Dynamic tmp17 = this->target;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(189)
						Dynamic target = tmp17;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(189)
						Dynamic tmp18 = target;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(189)
						bool tmp19 = ::Reflect_obj::hasField(tmp18,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(189)
						if ((tmp19)){
							HX_STACK_LINE(189)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(189)
							::Reflect_obj::setField(tmp20,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),false);
						}
						else{
							HX_STACK_LINE(189)
							Dynamic tmp20 = target;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(189)
							::Reflect_obj::setProperty(tmp20,HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),false);
						}
					}
					HX_STACK_LINE(193)
					this->complete(true);
					HX_STACK_LINE(194)
					return null();
				}
				else{
					HX_STACK_LINE(198)
					Dynamic tmp15 = this->_onRepeat;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(198)
					bool tmp16 = (tmp15 != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(198)
					if ((tmp16)){
						HX_STACK_LINE(200)
						Dynamic tmp17 = this->_onRepeat;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(200)
						Dynamic method = tmp17;		HX_STACK_VAR(method,"method");
						HX_STACK_LINE(200)
						cpp::ArrayBase params = this->_onRepeatParams;		HX_STACK_VAR(params,"params");
						HX_STACK_LINE(200)
						bool tmp18 = (params == null());		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(200)
						if ((tmp18)){
							HX_STACK_LINE(200)
							params = cpp::ArrayBase_obj::__new();
						}
						HX_STACK_LINE(200)
						Dynamic tmp19 = method;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(200)
						Dynamic tmp20 = method;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(200)
						::Reflect_obj::callMethod(tmp19,tmp20,params);
					}
					HX_STACK_LINE(204)
					bool tmp17 = this->_reflect;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(204)
					if ((tmp17)){
						HX_STACK_LINE(206)
						bool tmp18 = this->_reverse;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(206)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(206)
						this->_reverse = tmp19;
					}
					HX_STACK_LINE(210)
					this->startTime = currentTime;
					HX_STACK_LINE(211)
					Float tmp18 = this->startTime;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(211)
					Float tmp19 = this->_delay;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(211)
					Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(211)
					this->timeOffset = tmp20;
					HX_STACK_LINE(213)
					int tmp21 = this->_repeat;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(213)
					bool tmp22 = (tmp21 > (int)0);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(213)
					if ((tmp22)){
						HX_STACK_LINE(215)
						(this->_repeat)--;
					}
				}
			}
			HX_STACK_LINE(223)
			bool tmp13 = this->sendChange;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(223)
			if ((tmp13)){
				HX_STACK_LINE(225)
				this->change();
			}
		}
	}
return null();
}



MotionPathActuator_obj::MotionPathActuator_obj()
{
}

Dynamic MotionPathActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MotionPathActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MotionPathActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class MotionPathActuator_obj::__mClass;

void MotionPathActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.actuators.MotionPathActuator","\x80","\x6f","\x09","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MotionPathActuator_obj >;
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

} // end namespace motion
} // end namespace actuators
