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
#ifndef INCLUDED_motion_actuators_FilterActuator
#include <motion/actuators/FilterActuator.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
namespace motion{
namespace actuators{

Void FilterActuator_obj::__construct(::openfl::display::DisplayObject target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("motion.actuators.FilterActuator","new",0x436e26af,"motion.actuators.FilterActuator.new","motion/actuators/FilterActuator.hx",17,0xb0e64e1f)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(19)
	this->filterIndex = (int)-1;
	HX_STACK_LINE(21)
	::openfl::display::DisplayObject tmp = target;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(23)
	bool tmp3 = ::Std_obj::is(properties->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic ),hx::ClassOf< ::hx::Class >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	if ((tmp3)){
		HX_STACK_LINE(25)
		this->filterClass = properties->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic );
		HX_STACK_LINE(27)
		int tmp4 = target->get_filters()->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(27)
		if ((tmp5)){
			HX_STACK_LINE(28)
			::hx::Class tmp6 = this->filterClass;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(28)
			::openfl::filters::BitmapFilter tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(28)
			target->set_filters(Array_obj< ::Dynamic >::__new().Add(tmp7));
		}
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(31)
			Array< ::Dynamic > _g1 = target->get_filters();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(31)
			while((true)){
				HX_STACK_LINE(31)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(31)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(31)
				if ((tmp7)){
					HX_STACK_LINE(31)
					break;
				}
				HX_STACK_LINE(31)
				::openfl::filters::BitmapFilter tmp8 = _g1->__get(_g).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(31)
				::openfl::filters::BitmapFilter filter = tmp8;		HX_STACK_VAR(filter,"filter");
				HX_STACK_LINE(31)
				++(_g);
				HX_STACK_LINE(33)
				::openfl::filters::BitmapFilter tmp9 = filter;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(33)
				::hx::Class tmp10 = this->filterClass;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(33)
				bool tmp11 = ::Std_obj::is(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(33)
				if ((tmp11)){
					HX_STACK_LINE(35)
					this->filter = filter;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(43)
		this->filterIndex = properties->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic );
		HX_STACK_LINE(44)
		int tmp4 = this->filterIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		::openfl::filters::BitmapFilter tmp5 = target->get_filters()->__get(tmp4).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		this->filter = tmp5;
	}
}
;
	return null();
}

//FilterActuator_obj::~FilterActuator_obj() { }

Dynamic FilterActuator_obj::__CreateEmpty() { return  new FilterActuator_obj; }
hx::ObjectPtr< FilterActuator_obj > FilterActuator_obj::__new(::openfl::display::DisplayObject target,Float duration,Dynamic properties)
{  hx::ObjectPtr< FilterActuator_obj > _result_ = new FilterActuator_obj();
	_result_->__construct(target,duration,properties);
	return _result_;}

Dynamic FilterActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilterActuator_obj > _result_ = new FilterActuator_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void FilterActuator_obj::apply( ){
{
		HX_STACK_FRAME("motion.actuators.FilterActuator","apply",0x23534d7d,"motion.actuators.FilterActuator.apply","motion/actuators/FilterActuator.hx",51,0xb0e64e1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(53)
			Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(53)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(53)
			while((true)){
				HX_STACK_LINE(53)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(53)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(53)
				if ((tmp2)){
					HX_STACK_LINE(53)
					break;
				}
				HX_STACK_LINE(53)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(53)
				::String propertyName = tmp3;		HX_STACK_VAR(propertyName,"propertyName");
				HX_STACK_LINE(53)
				++(_g);
				HX_STACK_LINE(55)
				bool tmp4 = (propertyName != HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(55)
				if ((tmp4)){
					HX_STACK_LINE(57)
					::openfl::filters::BitmapFilter tmp5 = this->filter;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(57)
					::String tmp6 = propertyName;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(57)
					Dynamic tmp7 = this->properties;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(57)
					::String tmp8 = propertyName;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(57)
					Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(57)
					::Reflect_obj::setField(tmp5,tmp6,tmp9);
				}
			}
		}
		HX_STACK_LINE(63)
		Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			::openfl::display::DisplayObject tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(63)
			::openfl::display::DisplayObject target = tmp1;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(63)
			Dynamic value = null();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(63)
			::openfl::display::DisplayObject tmp2 = target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			bool tmp3 = ::Reflect_obj::hasField(tmp2,HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			if ((tmp3)){
				HX_STACK_LINE(63)
				::openfl::display::DisplayObject tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				Dynamic tmp5 = ::Reflect_obj::field(tmp4,HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(63)
				value = tmp5;
			}
			else{
				HX_STACK_LINE(63)
				::openfl::display::DisplayObject tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				Dynamic tmp5 = ::Reflect_obj::getProperty(tmp4,HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(63)
				value = tmp5;
			}
			HX_STACK_LINE(63)
			tmp = value;
		}
		HX_STACK_LINE(63)
		Array< ::Dynamic > filters = tmp;		HX_STACK_VAR(filters,"filters");
		HX_STACK_LINE(64)
		Dynamic tmp1 = this->properties;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		::openfl::filters::BitmapFilter tmp2 = this->filter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::Reflect_obj::setField(filters,tmp1->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic ),tmp2);
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::openfl::display::DisplayObject tmp3 = this->target;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			::openfl::display::DisplayObject target = tmp3;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(65)
			::openfl::display::DisplayObject tmp4 = target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			if ((tmp5)){
				HX_STACK_LINE(65)
				::openfl::display::DisplayObject tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(65)
				::Reflect_obj::setField(tmp6,HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"),filters);
			}
			else{
				HX_STACK_LINE(65)
				::openfl::display::DisplayObject tmp6 = target;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(65)
				::Reflect_obj::setProperty(tmp6,HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"),filters);
			}
		}
	}
return null();
}


Void FilterActuator_obj::initialize( ){
{
		HX_STACK_FRAME("motion.actuators.FilterActuator","initialize",0x39c8d2e1,"motion.actuators.FilterActuator.initialize","motion/actuators/FilterActuator.hx",70,0xb0e64e1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(73)
		Float start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(75)
			Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(75)
			while((true)){
				HX_STACK_LINE(75)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(75)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(75)
				if ((tmp2)){
					HX_STACK_LINE(75)
					break;
				}
				HX_STACK_LINE(75)
				::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(75)
				::String propertyName = tmp3;		HX_STACK_VAR(propertyName,"propertyName");
				HX_STACK_LINE(75)
				++(_g);
				HX_STACK_LINE(77)
				bool tmp4 = (propertyName != HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(77)
				if ((tmp4)){
					HX_STACK_LINE(79)
					Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						::openfl::filters::BitmapFilter tmp6 = this->filter;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(79)
						::openfl::filters::BitmapFilter target = tmp6;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(79)
						Dynamic value = null();		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(79)
						::openfl::filters::BitmapFilter tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(79)
						::String tmp8 = propertyName;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(79)
						bool tmp9 = ::Reflect_obj::hasField(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(79)
						if ((tmp9)){
							HX_STACK_LINE(79)
							::openfl::filters::BitmapFilter tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(79)
							::String tmp11 = propertyName;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(79)
							Dynamic tmp12 = ::Reflect_obj::field(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(79)
							value = tmp12;
						}
						else{
							HX_STACK_LINE(79)
							::openfl::filters::BitmapFilter tmp10 = target;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(79)
							::String tmp11 = propertyName;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(79)
							Dynamic tmp12 = ::Reflect_obj::getProperty(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(79)
							value = tmp12;
						}
						HX_STACK_LINE(79)
						tmp5 = value;
					}
					HX_STACK_LINE(79)
					start = tmp5;
					HX_STACK_LINE(80)
					::openfl::filters::BitmapFilter tmp6 = this->filter;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(80)
					::String tmp7 = propertyName;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					Float tmp8 = start;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(80)
					Dynamic tmp9 = this->properties;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(80)
					::String tmp10 = propertyName;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(80)
					Dynamic tmp11 = ::Reflect_obj::field(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(80)
					Float tmp12 = start;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(80)
					Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(80)
					::motion::actuators::PropertyDetails tmp14 = ::motion::actuators::PropertyDetails_obj::__new(tmp6,tmp7,tmp8,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(80)
					details = tmp14;
					HX_STACK_LINE(81)
					::motion::actuators::PropertyDetails tmp15 = details;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(81)
					this->propertyDetails->push(tmp15);
				}
			}
		}
		HX_STACK_LINE(87)
		int tmp = this->propertyDetails->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		this->detailsLength = tmp;
		HX_STACK_LINE(88)
		this->initialized = true;
	}
return null();
}


Void FilterActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("motion.actuators.FilterActuator","update",0xbcbccb1a,"motion.actuators.FilterActuator.update","motion/actuators/FilterActuator.hx",93,0xb0e64e1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(95)
		Float tmp = currentTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		this->super::update(tmp);
		HX_STACK_LINE(97)
		::openfl::display::DisplayObject tmp1 = this->target;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		Array< ::Dynamic > filters = tmp1->get_filters();		HX_STACK_VAR(filters,"filters");
		HX_STACK_LINE(99)
		int tmp2 = this->filterIndex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		bool tmp3 = (tmp2 > (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		if ((tmp3)){
			HX_STACK_LINE(101)
			Dynamic tmp4 = this->properties;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			::openfl::filters::BitmapFilter tmp5 = this->filter;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(101)
			::Reflect_obj::setField(filters,tmp4->__Field(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"), hx::paccDynamic ),tmp5);
		}
		else{
			HX_STACK_LINE(105)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			int _g = filters->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(105)
				if ((tmp5)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(105)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				::openfl::filters::BitmapFilter tmp7 = filters->__get(i).StaticCast< ::openfl::filters::BitmapFilter >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(107)
				::hx::Class tmp8 = this->filterClass;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(107)
				bool tmp9 = ::Std_obj::is(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(107)
				if ((tmp9)){
					HX_STACK_LINE(109)
					::openfl::filters::BitmapFilter tmp10 = this->filter;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(109)
					filters[i] = tmp10;
				}
			}
		}
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			::openfl::display::DisplayObject tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(117)
			::openfl::display::DisplayObject target = tmp4;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(117)
			::openfl::display::DisplayObject tmp5 = target;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(117)
			bool tmp6 = ::Reflect_obj::hasField(tmp5,HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(117)
			if ((tmp6)){
				HX_STACK_LINE(117)
				::openfl::display::DisplayObject tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(117)
				::Reflect_obj::setField(tmp7,HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"),filters);
			}
			else{
				HX_STACK_LINE(117)
				::openfl::display::DisplayObject tmp7 = target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(117)
				::Reflect_obj::setProperty(tmp7,HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"),filters);
			}
		}
	}
return null();
}



FilterActuator_obj::FilterActuator_obj()
{
}

void FilterActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilterActuator);
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(filterClass,"filterClass");
	HX_MARK_MEMBER_NAME(filterIndex,"filterIndex");
	::motion::actuators::SimpleActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FilterActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(filterClass,"filterClass");
	HX_VISIT_MEMBER_NAME(filterIndex,"filterIndex");
	::motion::actuators::SimpleActuator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FilterActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterClass") ) { return filterClass; }
		if (HX_FIELD_EQ(inName,"filterIndex") ) { return filterIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FilterActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::openfl::filters::BitmapFilter >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterClass") ) { filterClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterIndex") ) { filterIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FilterActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"));
	outFields->push(HX_HCSTRING("filterClass","\x60","\xcd","\x0a","\xf8"));
	outFields->push(HX_HCSTRING("filterIndex","\x3a","\xf0","\xc6","\x6d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::filters::BitmapFilter*/ ,(int)offsetof(FilterActuator_obj,filter),HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85")},
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(FilterActuator_obj,filterClass),HX_HCSTRING("filterClass","\x60","\xcd","\x0a","\xf8")},
	{hx::fsInt,(int)offsetof(FilterActuator_obj,filterIndex),HX_HCSTRING("filterIndex","\x3a","\xf0","\xc6","\x6d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("filter","\xb8","\x1f","\x35","\x85"),
	HX_HCSTRING("filterClass","\x60","\xcd","\x0a","\xf8"),
	HX_HCSTRING("filterIndex","\x3a","\xf0","\xc6","\x6d"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class FilterActuator_obj::__mClass;

void FilterActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.actuators.FilterActuator","\x3d","\xa3","\x33","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FilterActuator_obj >;
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
