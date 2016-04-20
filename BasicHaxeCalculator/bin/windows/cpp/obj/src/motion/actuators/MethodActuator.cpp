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
#ifndef INCLUDED_motion_actuators_MethodActuator
#include <motion/actuators/MethodActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
namespace motion{
namespace actuators{

Void MethodActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("motion.actuators.MethodActuator","new",0xc04e9758,"motion.actuators.MethodActuator.new","motion/actuators/MethodActuator.hx",11,0xd19a6596)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(13)
	this->currentParameters = Dynamic( Array_obj<Dynamic>::__new() );
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/actuators/MethodActuator.hx",14,0xd19a6596)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(14)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	this->tweenProperties = tmp;
	HX_STACK_LINE(16)
	Dynamic tmp1 = target;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	Float tmp2 = duration;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	Dynamic tmp3 = properties;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(16)
	super::__construct(tmp1,tmp2,tmp3);
	HX_STACK_LINE(18)
	Dynamic tmp4 = properties;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(18)
	bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(18)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(18)
	if ((tmp6)){
		HX_STACK_LINE(20)
		Dynamic tmp7 = this->properties;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(20)
		tmp7->__FieldRef(HX_HCSTRING("start","\x62","\x74","\x0b","\x84")) = Dynamic( Array_obj<Dynamic>::__new() );
	}
	HX_STACK_LINE(24)
	Dynamic tmp7 = properties;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(24)
	bool tmp8 = ::Reflect_obj::hasField(tmp7,HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(24)
	bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(24)
	if ((tmp9)){
		HX_STACK_LINE(26)
		Dynamic tmp10 = this->properties;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(26)
		Dynamic tmp11 = this->properties;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(26)
		tmp11->__FieldRef(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")) = tmp10->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic );
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		Dynamic tmp10 = this->properties;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(30)
		int _g = ((int)(tmp10->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		while((true)){
			HX_STACK_LINE(30)
			bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(30)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(30)
			if ((tmp12)){
				HX_STACK_LINE(30)
				break;
			}
			HX_STACK_LINE(30)
			int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(30)
			int i = tmp13;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(32)
			Dynamic tmp14 = this->properties;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(32)
			Dynamic tmp15 = tmp14->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(32)
			this->currentParameters->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp15);
		}
	}
}
;
	return null();
}

//MethodActuator_obj::~MethodActuator_obj() { }

Dynamic MethodActuator_obj::__CreateEmpty() { return  new MethodActuator_obj; }
hx::ObjectPtr< MethodActuator_obj > MethodActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< MethodActuator_obj > _result_ = new MethodActuator_obj();
	_result_->__construct(target,duration,properties);
	return _result_;}

Dynamic MethodActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MethodActuator_obj > _result_ = new MethodActuator_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void MethodActuator_obj::apply( ){
{
		HX_STACK_FRAME("motion.actuators.MethodActuator","apply",0xedaffa66,"motion.actuators.MethodActuator.apply","motion/actuators/MethodActuator.hx",40,0xd19a6596)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		Dynamic tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		Dynamic method = tmp;		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(40)
		Dynamic tmp1 = this->properties;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		cpp::ArrayBase params = tmp1->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic );		HX_STACK_VAR(params,"params");
		HX_STACK_LINE(40)
		bool tmp2 = (params == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		if ((tmp2)){
			HX_STACK_LINE(40)
			params = cpp::ArrayBase_obj::__new();
		}
		HX_STACK_LINE(40)
		Dynamic tmp3 = method;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		Dynamic tmp4 = method;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(40)
		::Reflect_obj::callMethod(tmp3,tmp4,params);
	}
return null();
}


Void MethodActuator_obj::complete( hx::Null< bool >  __o_sendEvent){
bool sendEvent = __o_sendEvent.Default(true);
	HX_STACK_FRAME("motion.actuators.MethodActuator","complete",0x6780f6c1,"motion.actuators.MethodActuator.complete","motion/actuators/MethodActuator.hx",45,0xd19a6596)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sendEvent,"sendEvent")
{
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(47)
			Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(47)
			int _g = ((int)(tmp->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(47)
			while((true)){
				HX_STACK_LINE(47)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(47)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(47)
				if ((tmp2)){
					HX_STACK_LINE(47)
					break;
				}
				HX_STACK_LINE(47)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(47)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(49)
				Dynamic tmp4 = this->tweenProperties;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(49)
				::String tmp5 = (HX_HCSTRING("param","\x8d","\x80","\x55","\xbd") + i);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(49)
				Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(49)
				hx::IndexRef((this->currentParameters).mPtr,i) = tmp6;
			}
		}
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			Dynamic tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(53)
			Dynamic method = tmp;		HX_STACK_VAR(method,"method");
			HX_STACK_LINE(53)
			cpp::ArrayBase params = this->currentParameters;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(53)
			bool tmp1 = (params == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(53)
			if ((tmp1)){
				HX_STACK_LINE(53)
				params = cpp::ArrayBase_obj::__new();
			}
			HX_STACK_LINE(53)
			Dynamic tmp2 = method;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			Dynamic tmp3 = method;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(53)
			::Reflect_obj::callMethod(tmp2,tmp3,params);
		}
		HX_STACK_LINE(55)
		bool tmp = sendEvent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		this->super::complete(tmp);
	}
return null();
}


Void MethodActuator_obj::initialize( ){
{
		HX_STACK_FRAME("motion.actuators.MethodActuator","initialize",0xed23b958,"motion.actuators.MethodActuator.initialize","motion/actuators/MethodActuator.hx",60,0xd19a6596)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(63)
		::String propertyName;		HX_STACK_VAR(propertyName,"propertyName");
		HX_STACK_LINE(64)
		Dynamic start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(66)
			Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(66)
			int _g = ((int)(tmp->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			while((true)){
				HX_STACK_LINE(66)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(66)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(66)
				if ((tmp2)){
					HX_STACK_LINE(66)
					break;
				}
				HX_STACK_LINE(66)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(66)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(68)
				::String tmp4 = (HX_HCSTRING("param","\x8d","\x80","\x55","\xbd") + i);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(68)
				propertyName = tmp4;
				HX_STACK_LINE(69)
				Dynamic tmp5 = this->properties;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(69)
				Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(69)
				start = tmp6;
				HX_STACK_LINE(71)
				Dynamic tmp7 = this->tweenProperties;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(71)
				::String tmp8 = propertyName;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(71)
				Dynamic tmp9 = start;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(71)
				::Reflect_obj::setField(tmp7,tmp8,tmp9);
				HX_STACK_LINE(73)
				Dynamic tmp10 = start;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(73)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(73)
				bool tmp12 = ::Std_obj::is(tmp11,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(73)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(73)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(73)
				if ((tmp13)){
					HX_STACK_LINE(73)
					Dynamic tmp15 = start;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(73)
					Dynamic tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(73)
					tmp14 = ::Std_obj::is(tmp16,hx::ClassOf< ::Int >());
				}
				else{
					HX_STACK_LINE(73)
					tmp14 = true;
				}
				HX_STACK_LINE(73)
				if ((tmp14)){
					HX_STACK_LINE(75)
					Dynamic tmp15 = this->tweenProperties;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(75)
					::String tmp16 = propertyName;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(75)
					Dynamic tmp17 = start;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(75)
					Dynamic tmp18 = this->properties;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(75)
					Float tmp19 = tmp18->__Field(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"), hx::paccDynamic )->__GetItem(i);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(75)
					Dynamic tmp20 = start;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(75)
					Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(75)
					::motion::actuators::PropertyDetails tmp22 = ::motion::actuators::PropertyDetails_obj::__new(tmp15,tmp16,tmp17,tmp21,null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(75)
					details = tmp22;
					HX_STACK_LINE(76)
					::motion::actuators::PropertyDetails tmp23 = details;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(76)
					this->propertyDetails->push(tmp23);
				}
			}
		}
		HX_STACK_LINE(82)
		int tmp = this->propertyDetails->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		this->detailsLength = tmp;
		HX_STACK_LINE(83)
		this->initialized = true;
	}
return null();
}


Void MethodActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("motion.actuators.MethodActuator","update",0x03776a11,"motion.actuators.MethodActuator.update","motion/actuators/MethodActuator.hx",88,0xd19a6596)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(90)
		Float tmp = currentTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		this->super::update(tmp);
		HX_STACK_LINE(92)
		bool tmp1 = this->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		if ((tmp1)){
			HX_STACK_LINE(92)
			bool tmp3 = this->paused;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(92)
			tmp2 = !(tmp5);
		}
		else{
			HX_STACK_LINE(92)
			tmp2 = false;
		}
		HX_STACK_LINE(92)
		if ((tmp2)){
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(94)
				Dynamic tmp3 = this->properties;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(94)
				int _g = ((int)(tmp3->__Field(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic )));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(94)
				while((true)){
					HX_STACK_LINE(94)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(94)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(94)
					if ((tmp5)){
						HX_STACK_LINE(94)
						break;
					}
					HX_STACK_LINE(94)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(94)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(96)
					Dynamic tmp7 = this->tweenProperties;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(96)
					::String tmp8 = (HX_HCSTRING("param","\x8d","\x80","\x55","\xbd") + i);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(96)
					Dynamic tmp9 = ::Reflect_obj::field(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(96)
					hx::IndexRef((this->currentParameters).mPtr,i) = tmp9;
				}
			}
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				Dynamic tmp3 = this->target;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(100)
				Dynamic method = tmp3;		HX_STACK_VAR(method,"method");
				HX_STACK_LINE(100)
				cpp::ArrayBase params = this->currentParameters;		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(100)
				bool tmp4 = (params == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(100)
				if ((tmp4)){
					HX_STACK_LINE(100)
					params = cpp::ArrayBase_obj::__new();
				}
				HX_STACK_LINE(100)
				Dynamic tmp5 = method;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(100)
				Dynamic tmp6 = method;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(100)
				::Reflect_obj::callMethod(tmp5,tmp6,params);
			}
		}
	}
return null();
}



MethodActuator_obj::MethodActuator_obj()
{
}

void MethodActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MethodActuator);
	HX_MARK_MEMBER_NAME(currentParameters,"currentParameters");
	HX_MARK_MEMBER_NAME(tweenProperties,"tweenProperties");
	::motion::actuators::SimpleActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MethodActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentParameters,"currentParameters");
	HX_VISIT_MEMBER_NAME(tweenProperties,"tweenProperties");
	::motion::actuators::SimpleActuator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MethodActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tweenProperties") ) { return tweenProperties; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentParameters") ) { return currentParameters; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MethodActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"tweenProperties") ) { tweenProperties=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentParameters") ) { currentParameters=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MethodActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentParameters","\x43","\x40","\xb4","\x28"));
	outFields->push(HX_HCSTRING("tweenProperties","\x3e","\xfe","\x5f","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(MethodActuator_obj,currentParameters),HX_HCSTRING("currentParameters","\x43","\x40","\xb4","\x28")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MethodActuator_obj,tweenProperties),HX_HCSTRING("tweenProperties","\x3e","\xfe","\x5f","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentParameters","\x43","\x40","\xb4","\x28"),
	HX_HCSTRING("tweenProperties","\x3e","\xfe","\x5f","\x2d"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MethodActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MethodActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class MethodActuator_obj::__mClass;

void MethodActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.actuators.MethodActuator","\x66","\x4b","\x32","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MethodActuator_obj >;
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
