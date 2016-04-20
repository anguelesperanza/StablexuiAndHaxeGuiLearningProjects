#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_motion_actuators_TransformActuator
#include <motion/actuators/TransformActuator.h>
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
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
namespace motion{
namespace actuators{

Void TransformActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("motion.actuators.TransformActuator","new",0x47f6a58b,"motion.actuators.TransformActuator.new","motion/actuators/TransformActuator.hx",21,0x0795ec87)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(23)
	Dynamic tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	super::__construct(tmp,tmp1,tmp2);
}
;
	return null();
}

//TransformActuator_obj::~TransformActuator_obj() { }

Dynamic TransformActuator_obj::__CreateEmpty() { return  new TransformActuator_obj; }
hx::ObjectPtr< TransformActuator_obj > TransformActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< TransformActuator_obj > _result_ = new TransformActuator_obj();
	_result_->__construct(target,duration,properties);
	return _result_;}

Dynamic TransformActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TransformActuator_obj > _result_ = new TransformActuator_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void TransformActuator_obj::apply( ){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","apply",0xba1e3b59,"motion.actuators.TransformActuator.apply","motion/actuators/TransformActuator.hx",28,0x0795ec87)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->initialize();
		HX_STACK_LINE(32)
		::openfl::geom::ColorTransform tmp = this->endColorTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		if ((tmp1)){
			HX_STACK_LINE(34)
			Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				Dynamic tmp3 = this->target;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(34)
				Dynamic target = tmp3;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(34)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(34)
				Dynamic tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(34)
				bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(34)
				if ((tmp5)){
					HX_STACK_LINE(34)
					Dynamic tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(34)
					Dynamic tmp7 = ::Reflect_obj::field(tmp6,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(34)
					value = tmp7;
				}
				else{
					HX_STACK_LINE(34)
					Dynamic tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(34)
					Dynamic tmp7 = ::Reflect_obj::getProperty(tmp6,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(34)
					value = tmp7;
				}
				HX_STACK_LINE(34)
				tmp2 = value;
			}
			HX_STACK_LINE(34)
			::openfl::geom::Transform transform = tmp2;		HX_STACK_VAR(transform,"transform");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::openfl::geom::ColorTransform tmp3 = this->endColorTransform;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(35)
				Dynamic value = tmp3;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(35)
				::openfl::geom::Transform tmp4 = transform;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(35)
				bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(35)
				if ((tmp5)){
					HX_STACK_LINE(35)
					::openfl::geom::Transform tmp6 = transform;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(35)
					Dynamic tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(35)
					::Reflect_obj::setField(tmp6,HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),tmp7);
				}
				else{
					HX_STACK_LINE(35)
					::openfl::geom::Transform tmp6 = transform;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(35)
					Dynamic tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(35)
					::Reflect_obj::setProperty(tmp6,HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),tmp7);
				}
			}
		}
		HX_STACK_LINE(39)
		::openfl::media::SoundTransform tmp2 = this->endSoundTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(39)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(39)
		if ((tmp3)){
			HX_STACK_LINE(41)
			Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			Dynamic target = tmp4;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(41)
			::openfl::media::SoundTransform tmp5 = this->endSoundTransform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(41)
			Dynamic value = tmp5;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(41)
			Dynamic tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(41)
			bool tmp7 = ::Reflect_obj::hasField(tmp6,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(41)
			if ((tmp7)){
				HX_STACK_LINE(41)
				Dynamic tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(41)
				Dynamic tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(41)
				::Reflect_obj::setField(tmp8,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"),tmp9);
			}
			else{
				HX_STACK_LINE(41)
				Dynamic tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(41)
				Dynamic tmp9 = value;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(41)
				::Reflect_obj::setProperty(tmp8,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"),tmp9);
			}
		}
	}
return null();
}


Void TransformActuator_obj::initialize( ){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","initialize",0x51c62785,"motion.actuators.TransformActuator.initialize","motion/actuators/TransformActuator.hx",48,0x0795ec87)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		bool tmp2 = ::Reflect_obj::hasField(tmp1,HX_HCSTRING("colorValue","\x0e","\x97","\x24","\x56"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		if ((tmp2)){
			HX_STACK_LINE(50)
			Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(50)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(50)
			tmp3 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display::DisplayObject >());
		}
		else{
			HX_STACK_LINE(50)
			tmp3 = false;
		}
		HX_STACK_LINE(50)
		if ((tmp3)){
			HX_STACK_LINE(52)
			this->initializeColor();
		}
		HX_STACK_LINE(56)
		Dynamic tmp4 = this->properties;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(56)
		bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("soundVolume","\x09","\x30","\x80","\x12"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(56)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(56)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(56)
		if ((tmp7)){
			HX_STACK_LINE(56)
			Dynamic tmp9 = this->properties;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(56)
			Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(56)
			Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(56)
			tmp8 = ::Reflect_obj::hasField(tmp11,HX_HCSTRING("soundPan","\xce","\x27","\xa3","\x19"));
		}
		else{
			HX_STACK_LINE(56)
			tmp8 = true;
		}
		HX_STACK_LINE(56)
		if ((tmp8)){
			HX_STACK_LINE(58)
			this->initializeSound();
		}
		HX_STACK_LINE(62)
		int tmp9 = this->propertyDetails->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		this->detailsLength = tmp9;
		HX_STACK_LINE(63)
		this->initialized = true;
	}
return null();
}


Void TransformActuator_obj::initializeColor( ){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","initializeColor",0x768d579e,"motion.actuators.TransformActuator.initializeColor","motion/actuators/TransformActuator.hx",68,0x0795ec87)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::openfl::geom::ColorTransform tmp = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		this->endColorTransform = tmp;
		HX_STACK_LINE(72)
		Dynamic tmp1 = this->properties;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		int color = tmp1->__Field(HX_HCSTRING("colorValue","\x0e","\x97","\x24","\x56"), hx::paccDynamic );		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(73)
		Dynamic tmp2 = this->properties;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		Float strength = tmp2->__Field(HX_HCSTRING("colorStrength","\x04","\x9b","\x51","\x91"), hx::paccDynamic );		HX_STACK_VAR(strength,"strength");
		HX_STACK_LINE(75)
		bool tmp3 = (strength < (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(75)
		if ((tmp3)){
			HX_STACK_LINE(77)
			Float multiplier;		HX_STACK_VAR(multiplier,"multiplier");
			HX_STACK_LINE(78)
			Float offset;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(80)
			bool tmp4 = (strength < ((Float)0.5));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(80)
			if ((tmp4)){
				HX_STACK_LINE(82)
				multiplier = (int)1;
				HX_STACK_LINE(83)
				Float tmp5 = (strength * (int)2);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(83)
				offset = tmp5;
			}
			else{
				HX_STACK_LINE(87)
				Float tmp5 = (strength - ((Float)0.5));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				Float tmp6 = (tmp5 * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				Float tmp7 = ((int)1 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				multiplier = tmp7;
				HX_STACK_LINE(88)
				offset = (int)1;
			}
			HX_STACK_LINE(92)
			::openfl::geom::ColorTransform tmp5 = this->endColorTransform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			tmp5->redMultiplier = multiplier;
			HX_STACK_LINE(93)
			::openfl::geom::ColorTransform tmp6 = this->endColorTransform;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			tmp6->greenMultiplier = multiplier;
			HX_STACK_LINE(94)
			::openfl::geom::ColorTransform tmp7 = this->endColorTransform;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			tmp7->blueMultiplier = multiplier;
			HX_STACK_LINE(96)
			Float tmp8 = offset;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(96)
			int tmp9 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(96)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(96)
			Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(96)
			::openfl::geom::ColorTransform tmp12 = this->endColorTransform;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(96)
			tmp12->redOffset = tmp11;
			HX_STACK_LINE(97)
			Float tmp13 = offset;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(97)
			int tmp14 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(97)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(97)
			Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(97)
			::openfl::geom::ColorTransform tmp17 = this->endColorTransform;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(97)
			tmp17->greenOffset = tmp16;
			HX_STACK_LINE(98)
			Float tmp18 = offset;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(98)
			int tmp19 = (int(color) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(98)
			Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(98)
			::openfl::geom::ColorTransform tmp21 = this->endColorTransform;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(98)
			tmp21->blueOffset = tmp20;
		}
		else{
			HX_STACK_LINE(104)
			::openfl::geom::ColorTransform tmp4 = this->endColorTransform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			tmp4->redMultiplier = (int)0;
			HX_STACK_LINE(105)
			::openfl::geom::ColorTransform tmp5 = this->endColorTransform;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(105)
			tmp5->greenMultiplier = (int)0;
			HX_STACK_LINE(106)
			::openfl::geom::ColorTransform tmp6 = this->endColorTransform;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(106)
			tmp6->blueMultiplier = (int)0;
			HX_STACK_LINE(108)
			int tmp7 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(108)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(108)
			::openfl::geom::ColorTransform tmp9 = this->endColorTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(108)
			tmp9->redOffset = tmp8;
			HX_STACK_LINE(109)
			int tmp10 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(109)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(109)
			::openfl::geom::ColorTransform tmp12 = this->endColorTransform;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(109)
			tmp12->greenOffset = tmp11;
			HX_STACK_LINE(110)
			int tmp13 = (int(color) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(110)
			::openfl::geom::ColorTransform tmp14 = this->endColorTransform;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(110)
			tmp14->blueOffset = tmp13;
		}
		HX_STACK_LINE(114)
		Array< ::String > propertyNames = Array_obj< ::String >::__new().Add(HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e")).Add(HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f")).Add(HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf")).Add(HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53")).Add(HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7")).Add(HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"));		HX_STACK_VAR(propertyNames,"propertyNames");
		HX_STACK_LINE(116)
		Dynamic tmp4 = this->properties;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(116)
		bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("colorAlpha","\xfb","\xbe","\x02","\x46"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(116)
		if ((tmp5)){
			HX_STACK_LINE(118)
			Dynamic tmp6 = this->properties;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(118)
			::openfl::geom::ColorTransform tmp7 = this->endColorTransform;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(118)
			tmp7->alphaMultiplier = tmp6->__Field(HX_HCSTRING("colorAlpha","\xfb","\xbe","\x02","\x46"), hx::paccDynamic );
			HX_STACK_LINE(119)
			propertyNames->push(HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"));
		}
		else{
			HX_STACK_LINE(123)
			Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(123)
				Dynamic target = tmp7;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(123)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(123)
				Dynamic tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(123)
				bool tmp9 = ::Reflect_obj::hasField(tmp8,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(123)
				if ((tmp9)){
					HX_STACK_LINE(123)
					Dynamic tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(123)
					Dynamic tmp11 = ::Reflect_obj::field(tmp10,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(123)
					value = tmp11;
				}
				else{
					HX_STACK_LINE(123)
					Dynamic tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(123)
					Dynamic tmp11 = ::Reflect_obj::getProperty(tmp10,HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(123)
					value = tmp11;
				}
				HX_STACK_LINE(123)
				tmp6 = value;
			}
			HX_STACK_LINE(123)
			::openfl::geom::ColorTransform tmp7 = this->endColorTransform;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			tmp7->alphaMultiplier = tmp6;
		}
		HX_STACK_LINE(127)
		Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(127)
			Dynamic target = tmp7;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(127)
			Dynamic value = null();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(127)
			Dynamic tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			bool tmp9 = ::Reflect_obj::hasField(tmp8,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(127)
			if ((tmp9)){
				HX_STACK_LINE(127)
				Dynamic tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(127)
				Dynamic tmp11 = ::Reflect_obj::field(tmp10,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(127)
				value = tmp11;
			}
			else{
				HX_STACK_LINE(127)
				Dynamic tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(127)
				Dynamic tmp11 = ::Reflect_obj::getProperty(tmp10,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(127)
				value = tmp11;
			}
			HX_STACK_LINE(127)
			tmp6 = value;
		}
		HX_STACK_LINE(127)
		::openfl::geom::Transform transform = tmp6;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(128)
		Dynamic tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		{
			HX_STACK_LINE(128)
			Dynamic value = null();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(128)
			::openfl::geom::Transform tmp8 = transform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(128)
			bool tmp9 = ::Reflect_obj::hasField(tmp8,HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(128)
			if ((tmp9)){
				HX_STACK_LINE(128)
				::openfl::geom::Transform tmp10 = transform;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(128)
				Dynamic tmp11 = ::Reflect_obj::field(tmp10,HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(128)
				value = tmp11;
			}
			else{
				HX_STACK_LINE(128)
				::openfl::geom::Transform tmp10 = transform;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(128)
				Dynamic tmp11 = ::Reflect_obj::getProperty(tmp10,HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(128)
				value = tmp11;
			}
			HX_STACK_LINE(128)
			tmp7 = value;
		}
		HX_STACK_LINE(128)
		::openfl::geom::ColorTransform begin = tmp7;		HX_STACK_VAR(begin,"begin");
		HX_STACK_LINE(129)
		::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(129)
		this->tweenColorTransform = tmp8;
		HX_STACK_LINE(131)
		::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(132)
		Float start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			while((true)){
				HX_STACK_LINE(134)
				bool tmp9 = (_g < propertyNames->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(134)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(134)
				if ((tmp10)){
					HX_STACK_LINE(134)
					break;
				}
				HX_STACK_LINE(134)
				::String tmp11 = propertyNames->__get(_g);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(134)
				::String propertyName = tmp11;		HX_STACK_VAR(propertyName,"propertyName");
				HX_STACK_LINE(134)
				++(_g);
				HX_STACK_LINE(136)
				Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(136)
				{
					HX_STACK_LINE(136)
					Dynamic value = null();		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(136)
					::openfl::geom::ColorTransform tmp13 = begin;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(136)
					::String tmp14 = propertyName;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(136)
					bool tmp15 = ::Reflect_obj::hasField(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(136)
					if ((tmp15)){
						HX_STACK_LINE(136)
						::openfl::geom::ColorTransform tmp16 = begin;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(136)
						::String tmp17 = propertyName;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(136)
						Dynamic tmp18 = ::Reflect_obj::field(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(136)
						value = tmp18;
					}
					else{
						HX_STACK_LINE(136)
						::openfl::geom::ColorTransform tmp16 = begin;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(136)
						::String tmp17 = propertyName;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(136)
						Dynamic tmp18 = ::Reflect_obj::getProperty(tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(136)
						value = tmp18;
					}
					HX_STACK_LINE(136)
					tmp12 = value;
				}
				HX_STACK_LINE(136)
				start = tmp12;
				HX_STACK_LINE(137)
				::openfl::geom::ColorTransform tmp13 = this->tweenColorTransform;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(137)
				::String tmp14 = propertyName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(137)
				Float tmp15 = start;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(137)
				Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(137)
				{
					HX_STACK_LINE(137)
					::openfl::geom::ColorTransform tmp17 = this->endColorTransform;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(137)
					::openfl::geom::ColorTransform target = tmp17;		HX_STACK_VAR(target,"target");
					HX_STACK_LINE(137)
					Dynamic value = null();		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(137)
					::openfl::geom::ColorTransform tmp18 = target;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(137)
					::String tmp19 = propertyName;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(137)
					bool tmp20 = ::Reflect_obj::hasField(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(137)
					if ((tmp20)){
						HX_STACK_LINE(137)
						::openfl::geom::ColorTransform tmp21 = target;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(137)
						::String tmp22 = propertyName;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(137)
						Dynamic tmp23 = ::Reflect_obj::field(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(137)
						value = tmp23;
					}
					else{
						HX_STACK_LINE(137)
						::openfl::geom::ColorTransform tmp21 = target;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(137)
						::String tmp22 = propertyName;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(137)
						Dynamic tmp23 = ::Reflect_obj::getProperty(tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(137)
						value = tmp23;
					}
					HX_STACK_LINE(137)
					tmp16 = value;
				}
				HX_STACK_LINE(137)
				Float tmp17 = start;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(137)
				Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(137)
				::motion::actuators::PropertyDetails tmp19 = ::motion::actuators::PropertyDetails_obj::__new(tmp13,tmp14,tmp15,tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(137)
				details = tmp19;
				HX_STACK_LINE(138)
				::motion::actuators::PropertyDetails tmp20 = details;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(138)
				this->propertyDetails->push(tmp20);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TransformActuator_obj,initializeColor,(void))

Void TransformActuator_obj::initializeSound( ){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","initializeSound",0xacfd730a,"motion.actuators.TransformActuator.initializeSound","motion/actuators/TransformActuator.hx",145,0x0795ec87)
		HX_STACK_THIS(this)
		HX_STACK_LINE(147)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			Dynamic tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(147)
			Dynamic target = tmp1;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(147)
			Dynamic value = null();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(147)
			Dynamic tmp2 = target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(147)
			bool tmp3 = ::Reflect_obj::hasField(tmp2,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			if ((tmp3)){
				HX_STACK_LINE(147)
				Dynamic tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				Dynamic tmp5 = ::Reflect_obj::field(tmp4,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(147)
				value = tmp5;
			}
			else{
				HX_STACK_LINE(147)
				Dynamic tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				Dynamic tmp5 = ::Reflect_obj::getProperty(tmp4,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(147)
				value = tmp5;
			}
			HX_STACK_LINE(147)
			tmp = value;
		}
		HX_STACK_LINE(147)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		if ((tmp1)){
			HX_STACK_LINE(149)
			Dynamic tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			Dynamic target = tmp2;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(149)
			::openfl::media::SoundTransform tmp3 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			Dynamic value = tmp3;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(149)
			Dynamic tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			if ((tmp5)){
				HX_STACK_LINE(149)
				Dynamic tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(149)
				Dynamic tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(149)
				::Reflect_obj::setField(tmp6,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"),tmp7);
			}
			else{
				HX_STACK_LINE(149)
				Dynamic tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(149)
				Dynamic tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(149)
				::Reflect_obj::setProperty(tmp6,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"),tmp7);
			}
		}
		HX_STACK_LINE(153)
		Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			Dynamic tmp3 = this->target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			Dynamic target = tmp3;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(153)
			Dynamic value = null();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(153)
			Dynamic tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			if ((tmp5)){
				HX_STACK_LINE(153)
				Dynamic tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				Dynamic tmp7 = ::Reflect_obj::field(tmp6,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(153)
				value = tmp7;
			}
			else{
				HX_STACK_LINE(153)
				Dynamic tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(153)
				Dynamic tmp7 = ::Reflect_obj::getProperty(tmp6,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(153)
				value = tmp7;
			}
			HX_STACK_LINE(153)
			tmp2 = value;
		}
		HX_STACK_LINE(153)
		::openfl::media::SoundTransform start = tmp2;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(154)
		Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		{
			HX_STACK_LINE(154)
			Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			Dynamic target = tmp4;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(154)
			Dynamic value = null();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(154)
			Dynamic tmp5 = target;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			if ((tmp6)){
				HX_STACK_LINE(154)
				Dynamic tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				Dynamic tmp8 = ::Reflect_obj::field(tmp7,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				value = tmp8;
			}
			else{
				HX_STACK_LINE(154)
				Dynamic tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				Dynamic tmp8 = ::Reflect_obj::getProperty(tmp7,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				value = tmp8;
			}
			HX_STACK_LINE(154)
			tmp3 = value;
		}
		HX_STACK_LINE(154)
		this->endSoundTransform = tmp3;
		HX_STACK_LINE(155)
		::openfl::media::SoundTransform tmp4 = ::openfl::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		this->tweenSoundTransform = tmp4;
		HX_STACK_LINE(157)
		Dynamic tmp5 = this->properties;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(157)
		bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("soundVolume","\x09","\x30","\x80","\x12"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(157)
		if ((tmp6)){
			HX_STACK_LINE(159)
			Dynamic tmp7 = this->properties;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			::openfl::media::SoundTransform tmp8 = this->endSoundTransform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(159)
			tmp8->volume = tmp7->__Field(HX_HCSTRING("soundVolume","\x09","\x30","\x80","\x12"), hx::paccDynamic );
			HX_STACK_LINE(160)
			::openfl::media::SoundTransform tmp9 = this->tweenSoundTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(160)
			Float tmp10 = start->volume;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(160)
			::openfl::media::SoundTransform tmp11 = this->endSoundTransform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(160)
			Float tmp12 = tmp11->volume;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(160)
			Float tmp13 = start->volume;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(160)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(160)
			::motion::actuators::PropertyDetails tmp15 = ::motion::actuators::PropertyDetails_obj::__new(tmp9,HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),tmp10,tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(160)
			this->propertyDetails->push(tmp15);
		}
		HX_STACK_LINE(164)
		Dynamic tmp7 = this->properties;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(164)
		bool tmp8 = ::Reflect_obj::hasField(tmp7,HX_HCSTRING("soundPan","\xce","\x27","\xa3","\x19"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(164)
		if ((tmp8)){
			HX_STACK_LINE(166)
			Dynamic tmp9 = this->properties;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(166)
			::openfl::media::SoundTransform tmp10 = this->endSoundTransform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(166)
			tmp10->pan = tmp9->__Field(HX_HCSTRING("soundPan","\xce","\x27","\xa3","\x19"), hx::paccDynamic );
			HX_STACK_LINE(167)
			::openfl::media::SoundTransform tmp11 = this->tweenSoundTransform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(167)
			Float tmp12 = start->pan;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(167)
			::openfl::media::SoundTransform tmp13 = this->endSoundTransform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(167)
			Float tmp14 = tmp13->pan;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(167)
			Float tmp15 = start->pan;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(167)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(167)
			::motion::actuators::PropertyDetails tmp17 = ::motion::actuators::PropertyDetails_obj::__new(tmp11,HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),tmp12,tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(167)
			this->propertyDetails->push(tmp17);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TransformActuator_obj,initializeSound,(void))

Void TransformActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("motion.actuators.TransformActuator","update",0x1781fdbe,"motion.actuators.TransformActuator.update","motion/actuators/TransformActuator.hx",174,0x0795ec87)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(176)
		Float tmp = currentTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		this->super::update(tmp);
		HX_STACK_LINE(178)
		::openfl::geom::ColorTransform tmp1 = this->endColorTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		if ((tmp2)){
			HX_STACK_LINE(180)
			Dynamic tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			{
				HX_STACK_LINE(180)
				Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(180)
				Dynamic target = tmp4;		HX_STACK_VAR(target,"target");
				HX_STACK_LINE(180)
				Dynamic value = null();		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(180)
				Dynamic tmp5 = target;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(180)
				bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(180)
				if ((tmp6)){
					HX_STACK_LINE(180)
					Dynamic tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(180)
					Dynamic tmp8 = ::Reflect_obj::field(tmp7,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					value = tmp8;
				}
				else{
					HX_STACK_LINE(180)
					Dynamic tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(180)
					Dynamic tmp8 = ::Reflect_obj::getProperty(tmp7,HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(180)
					value = tmp8;
				}
				HX_STACK_LINE(180)
				tmp3 = value;
			}
			HX_STACK_LINE(180)
			::openfl::geom::Transform transform = tmp3;		HX_STACK_VAR(transform,"transform");
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::openfl::geom::ColorTransform tmp4 = this->tweenColorTransform;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(181)
				Dynamic value = tmp4;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(181)
				::openfl::geom::Transform tmp5 = transform;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(181)
				bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(181)
				if ((tmp6)){
					HX_STACK_LINE(181)
					::openfl::geom::Transform tmp7 = transform;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(181)
					Dynamic tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(181)
					::Reflect_obj::setField(tmp7,HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),tmp8);
				}
				else{
					HX_STACK_LINE(181)
					::openfl::geom::Transform tmp7 = transform;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(181)
					Dynamic tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(181)
					::Reflect_obj::setProperty(tmp7,HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),tmp8);
				}
			}
		}
		HX_STACK_LINE(185)
		::openfl::media::SoundTransform tmp3 = this->endSoundTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		if ((tmp4)){
			HX_STACK_LINE(187)
			Dynamic tmp5 = this->target;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(187)
			Dynamic target = tmp5;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(187)
			::openfl::media::SoundTransform tmp6 = this->tweenSoundTransform;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(187)
			Dynamic value = tmp6;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(187)
			Dynamic tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(187)
			bool tmp8 = ::Reflect_obj::hasField(tmp7,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(187)
			if ((tmp8)){
				HX_STACK_LINE(187)
				Dynamic tmp9 = target;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(187)
				Dynamic tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				::Reflect_obj::setField(tmp9,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"),tmp10);
			}
			else{
				HX_STACK_LINE(187)
				Dynamic tmp9 = target;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(187)
				Dynamic tmp10 = value;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(187)
				::Reflect_obj::setProperty(tmp9,HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"),tmp10);
			}
		}
	}
return null();
}



TransformActuator_obj::TransformActuator_obj()
{
}

void TransformActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransformActuator);
	HX_MARK_MEMBER_NAME(endColorTransform,"endColorTransform");
	HX_MARK_MEMBER_NAME(endSoundTransform,"endSoundTransform");
	HX_MARK_MEMBER_NAME(tweenColorTransform,"tweenColorTransform");
	HX_MARK_MEMBER_NAME(tweenSoundTransform,"tweenSoundTransform");
	::motion::actuators::SimpleActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TransformActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(endColorTransform,"endColorTransform");
	HX_VISIT_MEMBER_NAME(endSoundTransform,"endSoundTransform");
	HX_VISIT_MEMBER_NAME(tweenColorTransform,"tweenColorTransform");
	HX_VISIT_MEMBER_NAME(tweenSoundTransform,"tweenSoundTransform");
	::motion::actuators::SimpleActuator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TransformActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"initializeColor") ) { return initializeColor_dyn(); }
		if (HX_FIELD_EQ(inName,"initializeSound") ) { return initializeSound_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"endColorTransform") ) { return endColorTransform; }
		if (HX_FIELD_EQ(inName,"endSoundTransform") ) { return endSoundTransform; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"tweenColorTransform") ) { return tweenColorTransform; }
		if (HX_FIELD_EQ(inName,"tweenSoundTransform") ) { return tweenSoundTransform; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TransformActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"endColorTransform") ) { endColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endSoundTransform") ) { endSoundTransform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"tweenColorTransform") ) { tweenColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweenSoundTransform") ) { tweenSoundTransform=inValue.Cast< ::openfl::media::SoundTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransformActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("endColorTransform","\xc4","\x58","\xc3","\xca"));
	outFields->push(HX_HCSTRING("endSoundTransform","\xd8","\x6f","\x62","\x40"));
	outFields->push(HX_HCSTRING("tweenColorTransform","\x54","\x5b","\x47","\x72"));
	outFields->push(HX_HCSTRING("tweenSoundTransform","\x68","\x72","\xe6","\xe7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(TransformActuator_obj,endColorTransform),HX_HCSTRING("endColorTransform","\xc4","\x58","\xc3","\xca")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(TransformActuator_obj,endSoundTransform),HX_HCSTRING("endSoundTransform","\xd8","\x6f","\x62","\x40")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(TransformActuator_obj,tweenColorTransform),HX_HCSTRING("tweenColorTransform","\x54","\x5b","\x47","\x72")},
	{hx::fsObject /*::openfl::media::SoundTransform*/ ,(int)offsetof(TransformActuator_obj,tweenSoundTransform),HX_HCSTRING("tweenSoundTransform","\x68","\x72","\xe6","\xe7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("endColorTransform","\xc4","\x58","\xc3","\xca"),
	HX_HCSTRING("endSoundTransform","\xd8","\x6f","\x62","\x40"),
	HX_HCSTRING("tweenColorTransform","\x54","\x5b","\x47","\x72"),
	HX_HCSTRING("tweenSoundTransform","\x68","\x72","\xe6","\xe7"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("initializeColor","\xf3","\xed","\x29","\x64"),
	HX_HCSTRING("initializeSound","\x5f","\x09","\x9a","\x9a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TransformActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TransformActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class TransformActuator_obj::__mClass;

void TransformActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.actuators.TransformActuator","\x19","\x84","\xa4","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TransformActuator_obj >;
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
