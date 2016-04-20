#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace actuators{

Void GenericActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("motion.actuators.GenericActuator","new",0x9a3981b6,"motion.actuators.GenericActuator.new","motion/actuators/GenericActuator.hx",38,0x3c110a3c)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(40)
	this->_autoVisible = true;
	HX_STACK_LINE(41)
	this->_delay = (int)0;
	HX_STACK_LINE(42)
	this->_reflect = false;
	HX_STACK_LINE(43)
	this->_repeat = (int)0;
	HX_STACK_LINE(44)
	this->_reverse = false;
	HX_STACK_LINE(45)
	this->_smartRotation = false;
	HX_STACK_LINE(46)
	this->_snapping = false;
	HX_STACK_LINE(47)
	this->special = false;
	HX_STACK_LINE(49)
	this->target = target;
	HX_STACK_LINE(50)
	this->properties = properties;
	HX_STACK_LINE(51)
	this->duration = duration;
	HX_STACK_LINE(53)
	::motion::easing::IEasing tmp = ::motion::Actuate_obj::defaultEase;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	this->_ease = tmp;
}
;
	return null();
}

//GenericActuator_obj::~GenericActuator_obj() { }

Dynamic GenericActuator_obj::__CreateEmpty() { return  new GenericActuator_obj; }
hx::ObjectPtr< GenericActuator_obj > GenericActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< GenericActuator_obj > _result_ = new GenericActuator_obj();
	_result_->__construct(target,duration,properties);
	return _result_;}

Dynamic GenericActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GenericActuator_obj > _result_ = new GenericActuator_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *GenericActuator_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::actuators::IGenericActuator_obj)) return operator ::motion::actuators::IGenericActuator_obj *();
	return super::__ToInterface(inType);
}

GenericActuator_obj::operator ::motion::actuators::IGenericActuator_obj *()
	{ return new ::motion::actuators::IGenericActuator_delegate_< GenericActuator_obj >(this); }
Void GenericActuator_obj::apply( ){
{
		HX_STACK_FRAME("motion.actuators.GenericActuator","apply",0x47f0b844,"motion.actuators.GenericActuator.apply","motion/actuators/GenericActuator.hx",60,0x3c110a3c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		Dynamic tmp = this->properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(60)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			if ((tmp2)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(60)
			::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(60)
			::String i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(60)
			++(_g);
			HX_STACK_LINE(64)
			Dynamic tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			::String tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			bool tmp6 = ::Reflect_obj::hasField(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			if ((tmp6)){
				HX_STACK_LINE(66)
				Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(66)
				::String tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(66)
				Dynamic tmp9 = this->properties;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(66)
				::String tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(66)
				Dynamic tmp11 = ::Reflect_obj::field(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(66)
				::Reflect_obj::setField(tmp7,tmp8,tmp11);
			}
			else{
				HX_STACK_LINE(70)
				Dynamic tmp7 = this->target;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(70)
				::String tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(70)
				Dynamic tmp9 = this->properties;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(70)
				::String tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(70)
				Dynamic tmp11 = ::Reflect_obj::field(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(70)
				::Reflect_obj::setProperty(tmp7,tmp8,tmp11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,apply,(void))

::motion::actuators::GenericActuator GenericActuator_obj::autoVisible( Dynamic value){
	HX_STACK_FRAME("motion.actuators.GenericActuator","autoVisible",0xd6a01419,"motion.actuators.GenericActuator.autoVisible","motion/actuators/GenericActuator.hx",90,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(92)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	if ((tmp)){
		HX_STACK_LINE(94)
		value = true;
	}
	HX_STACK_LINE(98)
	this->_autoVisible = value;
	HX_STACK_LINE(100)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,autoVisible,return )

Dynamic GenericActuator_obj::callMethod( Dynamic method,cpp::ArrayBase params){
	HX_STACK_FRAME("motion.actuators.GenericActuator","callMethod",0xe91f9389,"motion.actuators.GenericActuator.callMethod","motion/actuators/GenericActuator.hx",105,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(107)
	bool tmp = (params == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	if ((tmp)){
		HX_STACK_LINE(109)
		params = cpp::ArrayBase_obj::__new();
	}
	HX_STACK_LINE(131)
	Dynamic tmp1 = method;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(131)
	Dynamic tmp2 = method;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(131)
	Dynamic tmp3 = ::Reflect_obj::callMethod(tmp1,tmp2,params);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(131)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,callMethod,return )

Void GenericActuator_obj::change( ){
{
		HX_STACK_FRAME("motion.actuators.GenericActuator","change",0xd249d9da,"motion.actuators.GenericActuator.change","motion/actuators/GenericActuator.hx",136,0x3c110a3c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic tmp = this->_onUpdate;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		if ((tmp1)){
			HX_STACK_LINE(140)
			Dynamic tmp2 = this->_onUpdate;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			Dynamic method = tmp2;		HX_STACK_VAR(method,"method");
			HX_STACK_LINE(140)
			cpp::ArrayBase params = this->_onUpdateParams;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(140)
			bool tmp3 = (params == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			if ((tmp3)){
				HX_STACK_LINE(140)
				params = cpp::ArrayBase_obj::__new();
			}
			HX_STACK_LINE(140)
			Dynamic tmp4 = method;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			Dynamic tmp5 = method;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			::Reflect_obj::callMethod(tmp4,tmp5,params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,change,(void))

Void GenericActuator_obj::complete( hx::Null< bool >  __o_sendEvent){
bool sendEvent = __o_sendEvent.Default(true);
	HX_STACK_FRAME("motion.actuators.GenericActuator","complete",0x7551b7a3,"motion.actuators.GenericActuator.complete","motion/actuators/GenericActuator.hx",147,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sendEvent,"sendEvent")
{
		HX_STACK_LINE(149)
		bool tmp = sendEvent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(149)
		if ((tmp)){
			HX_STACK_LINE(151)
			this->change();
			HX_STACK_LINE(153)
			Dynamic tmp1 = this->_onComplete;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(153)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(153)
			if ((tmp2)){
				HX_STACK_LINE(155)
				Dynamic tmp3 = this->_onComplete;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(155)
				Dynamic method = tmp3;		HX_STACK_VAR(method,"method");
				HX_STACK_LINE(155)
				cpp::ArrayBase params = this->_onCompleteParams;		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(155)
				bool tmp4 = (params == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(155)
				if ((tmp4)){
					HX_STACK_LINE(155)
					params = cpp::ArrayBase_obj::__new();
				}
				HX_STACK_LINE(155)
				Dynamic tmp5 = method;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(155)
				Dynamic tmp6 = method;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(155)
				::Reflect_obj::callMethod(tmp5,tmp6,params);
			}
		}
		HX_STACK_LINE(161)
		::motion::Actuate_obj::unload(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,complete,(void))

::motion::actuators::GenericActuator GenericActuator_obj::delay( Float duration){
	HX_STACK_FRAME("motion.actuators.GenericActuator","delay",0xfadc0a59,"motion.actuators.GenericActuator.delay","motion/actuators/GenericActuator.hx",171,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_LINE(173)
	this->_delay = duration;
	HX_STACK_LINE(175)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,delay,return )

::motion::actuators::GenericActuator GenericActuator_obj::ease( ::motion::easing::IEasing easing){
	HX_STACK_FRAME("motion.actuators.GenericActuator","ease",0x522205d8,"motion.actuators.GenericActuator.ease","motion/actuators/GenericActuator.hx",185,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(easing,"easing")
	HX_STACK_LINE(187)
	this->_ease = easing;
	HX_STACK_LINE(189)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,ease,return )

Void GenericActuator_obj::move( ){
{
		HX_STACK_FRAME("motion.actuators.GenericActuator","move",0x57765cfb,"motion.actuators.GenericActuator.move","motion/actuators/GenericActuator.hx",194,0x3c110a3c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,move,(void))

::motion::actuators::GenericActuator GenericActuator_obj::onComplete( Dynamic handler,cpp::ArrayBase parameters){
	HX_STACK_FRAME("motion.actuators.GenericActuator","onComplete",0x12139a62,"motion.actuators.GenericActuator.onComplete","motion/actuators/GenericActuator.hx",207,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(209)
	this->_onComplete = handler;
	HX_STACK_LINE(211)
	bool tmp = (parameters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	if ((tmp)){
		HX_STACK_LINE(213)
		this->_onCompleteParams = cpp::ArrayBase_obj::__new();
	}
	else{
		HX_STACK_LINE(217)
		this->_onCompleteParams = parameters;
	}
	HX_STACK_LINE(221)
	Float tmp1 = this->duration;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(221)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(221)
	if ((tmp2)){
		HX_STACK_LINE(223)
		this->complete(null());
	}
	HX_STACK_LINE(227)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onComplete,return )

::motion::actuators::GenericActuator GenericActuator_obj::onRepeat( Dynamic handler,cpp::ArrayBase parameters){
	HX_STACK_FRAME("motion.actuators.GenericActuator","onRepeat",0xdbb344c4,"motion.actuators.GenericActuator.onRepeat","motion/actuators/GenericActuator.hx",238,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(240)
	this->_onRepeat = handler;
	HX_STACK_LINE(242)
	bool tmp = (parameters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	if ((tmp)){
		HX_STACK_LINE(244)
		this->_onRepeatParams = cpp::ArrayBase_obj::__new();
	}
	else{
		HX_STACK_LINE(248)
		this->_onRepeatParams = parameters;
	}
	HX_STACK_LINE(252)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onRepeat,return )

::motion::actuators::GenericActuator GenericActuator_obj::onUpdate( Dynamic handler,cpp::ArrayBase parameters){
	HX_STACK_FRAME("motion.actuators.GenericActuator","onUpdate",0x5c3c3372,"motion.actuators.GenericActuator.onUpdate","motion/actuators/GenericActuator.hx",263,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(265)
	this->_onUpdate = handler;
	HX_STACK_LINE(267)
	bool tmp = (parameters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	if ((tmp)){
		HX_STACK_LINE(269)
		this->_onUpdateParams = cpp::ArrayBase_obj::__new();
	}
	else{
		HX_STACK_LINE(273)
		this->_onUpdateParams = parameters;
	}
	HX_STACK_LINE(277)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onUpdate,return )

::motion::actuators::GenericActuator GenericActuator_obj::onPause( Dynamic handler,cpp::ArrayBase parameters){
	HX_STACK_FRAME("motion.actuators.GenericActuator","onPause",0xb51d89ad,"motion.actuators.GenericActuator.onPause","motion/actuators/GenericActuator.hx",287,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(289)
	this->_onPause = handler;
	HX_STACK_LINE(291)
	bool tmp = (parameters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	if ((tmp)){
		HX_STACK_LINE(293)
		this->_onPauseParams = cpp::ArrayBase_obj::__new();
	}
	else{
		HX_STACK_LINE(297)
		this->_onPauseParams = parameters;
	}
	HX_STACK_LINE(301)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onPause,return )

::motion::actuators::GenericActuator GenericActuator_obj::onResume( Dynamic handler,cpp::ArrayBase parameters){
	HX_STACK_FRAME("motion.actuators.GenericActuator","onResume",0xddbb1716,"motion.actuators.GenericActuator.onResume","motion/actuators/GenericActuator.hx",311,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(parameters,"parameters")
	HX_STACK_LINE(313)
	this->_onResume = handler;
	HX_STACK_LINE(315)
	bool tmp = (parameters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	if ((tmp)){
		HX_STACK_LINE(317)
		this->_onResumeParams = cpp::ArrayBase_obj::__new();
	}
	else{
		HX_STACK_LINE(321)
		this->_onResumeParams = parameters;
	}
	HX_STACK_LINE(325)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(GenericActuator_obj,onResume,return )

Void GenericActuator_obj::pause( ){
{
		HX_STACK_FRAME("motion.actuators.GenericActuator","pause",0xe10d09cc,"motion.actuators.GenericActuator.pause","motion/actuators/GenericActuator.hx",330,0x3c110a3c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(332)
		Dynamic tmp = this->_onPause;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(332)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(332)
		if ((tmp1)){
			HX_STACK_LINE(333)
			Dynamic tmp2 = this->_onPause;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(333)
			Dynamic method = tmp2;		HX_STACK_VAR(method,"method");
			HX_STACK_LINE(333)
			cpp::ArrayBase params = this->_onPauseParams;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(333)
			bool tmp3 = (params == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(333)
			if ((tmp3)){
				HX_STACK_LINE(333)
				params = cpp::ArrayBase_obj::__new();
			}
			HX_STACK_LINE(333)
			Dynamic tmp4 = method;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(333)
			Dynamic tmp5 = method;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(333)
			::Reflect_obj::callMethod(tmp4,tmp5,params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,pause,(void))

::motion::actuators::GenericActuator GenericActuator_obj::reflect( Dynamic value){
	HX_STACK_FRAME("motion.actuators.GenericActuator","reflect",0x4ab19893,"motion.actuators.GenericActuator.reflect","motion/actuators/GenericActuator.hx",343,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(345)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	if ((tmp)){
		HX_STACK_LINE(347)
		value = true;
	}
	HX_STACK_LINE(351)
	this->_reflect = value;
	HX_STACK_LINE(352)
	this->special = true;
	HX_STACK_LINE(354)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,reflect,return )

::motion::actuators::GenericActuator GenericActuator_obj::repeat( Dynamic times){
	HX_STACK_FRAME("motion.actuators.GenericActuator","repeat",0x2153dfc5,"motion.actuators.GenericActuator.repeat","motion/actuators/GenericActuator.hx",364,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(times,"times")
	HX_STACK_LINE(366)
	bool tmp = (times == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(366)
	if ((tmp)){
		HX_STACK_LINE(368)
		times = (int)-1;
	}
	HX_STACK_LINE(372)
	this->_repeat = times;
	HX_STACK_LINE(374)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,repeat,return )

Void GenericActuator_obj::resume( ){
{
		HX_STACK_FRAME("motion.actuators.GenericActuator","resume",0x235bb217,"motion.actuators.GenericActuator.resume","motion/actuators/GenericActuator.hx",379,0x3c110a3c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(381)
		Dynamic tmp = this->_onResume;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(381)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(381)
		if ((tmp1)){
			HX_STACK_LINE(382)
			Dynamic tmp2 = this->_onResume;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(382)
			Dynamic method = tmp2;		HX_STACK_VAR(method,"method");
			HX_STACK_LINE(382)
			cpp::ArrayBase params = this->_onResumeParams;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(382)
			bool tmp3 = (params == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(382)
			if ((tmp3)){
				HX_STACK_LINE(382)
				params = cpp::ArrayBase_obj::__new();
			}
			HX_STACK_LINE(382)
			Dynamic tmp4 = method;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(382)
			Dynamic tmp5 = method;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(382)
			::Reflect_obj::callMethod(tmp4,tmp5,params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericActuator_obj,resume,(void))

::motion::actuators::GenericActuator GenericActuator_obj::reverse( Dynamic value){
	HX_STACK_FRAME("motion.actuators.GenericActuator","reverse",0x7c844d78,"motion.actuators.GenericActuator.reverse","motion/actuators/GenericActuator.hx",392,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(394)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(394)
	if ((tmp)){
		HX_STACK_LINE(396)
		value = true;
	}
	HX_STACK_LINE(400)
	this->_reverse = value;
	HX_STACK_LINE(401)
	this->special = true;
	HX_STACK_LINE(403)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,reverse,return )

::motion::actuators::GenericActuator GenericActuator_obj::smartRotation( Dynamic value){
	HX_STACK_FRAME("motion.actuators.GenericActuator","smartRotation",0x1e0a993d,"motion.actuators.GenericActuator.smartRotation","motion/actuators/GenericActuator.hx",413,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(415)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(415)
	if ((tmp)){
		HX_STACK_LINE(417)
		value = true;
	}
	HX_STACK_LINE(421)
	this->_smartRotation = value;
	HX_STACK_LINE(422)
	this->special = true;
	HX_STACK_LINE(424)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,smartRotation,return )

::motion::actuators::GenericActuator GenericActuator_obj::snapping( Dynamic value){
	HX_STACK_FRAME("motion.actuators.GenericActuator","snapping",0x1542eca6,"motion.actuators.GenericActuator.snapping","motion/actuators/GenericActuator.hx",434,0x3c110a3c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(436)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(436)
	if ((tmp)){
		HX_STACK_LINE(438)
		value = true;
	}
	HX_STACK_LINE(442)
	this->_snapping = value;
	HX_STACK_LINE(443)
	this->special = true;
	HX_STACK_LINE(445)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(GenericActuator_obj,snapping,return )

Void GenericActuator_obj::stop( Dynamic properties,bool complete,bool sendEvent){
{
		HX_STACK_FRAME("motion.actuators.GenericActuator","stop",0x5b7169ec,"motion.actuators.GenericActuator.stop","motion/actuators/GenericActuator.hx",450,0x3c110a3c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(properties,"properties")
		HX_STACK_ARG(complete,"complete")
		HX_STACK_ARG(sendEvent,"sendEvent")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GenericActuator_obj,stop,(void))


GenericActuator_obj::GenericActuator_obj()
{
}

void GenericActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericActuator);
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(_autoVisible,"_autoVisible");
	HX_MARK_MEMBER_NAME(_delay,"_delay");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_onComplete,"_onComplete");
	HX_MARK_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	HX_MARK_MEMBER_NAME(_onRepeat,"_onRepeat");
	HX_MARK_MEMBER_NAME(_onRepeatParams,"_onRepeatParams");
	HX_MARK_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_MARK_MEMBER_NAME(_onUpdateParams,"_onUpdateParams");
	HX_MARK_MEMBER_NAME(_onResume,"_onResume");
	HX_MARK_MEMBER_NAME(_onResumeParams,"_onResumeParams");
	HX_MARK_MEMBER_NAME(_onPause,"_onPause");
	HX_MARK_MEMBER_NAME(_onPauseParams,"_onPauseParams");
	HX_MARK_MEMBER_NAME(_reflect,"_reflect");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_reverse,"_reverse");
	HX_MARK_MEMBER_NAME(_smartRotation,"_smartRotation");
	HX_MARK_MEMBER_NAME(_snapping,"_snapping");
	HX_MARK_MEMBER_NAME(special,"special");
	HX_MARK_END_CLASS();
}

void GenericActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(_autoVisible,"_autoVisible");
	HX_VISIT_MEMBER_NAME(_delay,"_delay");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_onComplete,"_onComplete");
	HX_VISIT_MEMBER_NAME(_onCompleteParams,"_onCompleteParams");
	HX_VISIT_MEMBER_NAME(_onRepeat,"_onRepeat");
	HX_VISIT_MEMBER_NAME(_onRepeatParams,"_onRepeatParams");
	HX_VISIT_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_VISIT_MEMBER_NAME(_onUpdateParams,"_onUpdateParams");
	HX_VISIT_MEMBER_NAME(_onResume,"_onResume");
	HX_VISIT_MEMBER_NAME(_onResumeParams,"_onResumeParams");
	HX_VISIT_MEMBER_NAME(_onPause,"_onPause");
	HX_VISIT_MEMBER_NAME(_onPauseParams,"_onPauseParams");
	HX_VISIT_MEMBER_NAME(_reflect,"_reflect");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_reverse,"_reverse");
	HX_VISIT_MEMBER_NAME(_smartRotation,"_smartRotation");
	HX_VISIT_MEMBER_NAME(_snapping,"_snapping");
	HX_VISIT_MEMBER_NAME(special,"special");
}

Dynamic GenericActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { return _ease; }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"_delay") ) { return _delay; }
		if (HX_FIELD_EQ(inName,"change") ) { return change_dyn(); }
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_repeat") ) { return _repeat; }
		if (HX_FIELD_EQ(inName,"special") ) { return special; }
		if (HX_FIELD_EQ(inName,"onPause") ) { return onPause_dyn(); }
		if (HX_FIELD_EQ(inName,"reflect") ) { return reflect_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"_onPause") ) { return _onPause; }
		if (HX_FIELD_EQ(inName,"_reflect") ) { return _reflect; }
		if (HX_FIELD_EQ(inName,"_reverse") ) { return _reverse; }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		if (HX_FIELD_EQ(inName,"onRepeat") ) { return onRepeat_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"onResume") ) { return onResume_dyn(); }
		if (HX_FIELD_EQ(inName,"snapping") ) { return snapping_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onRepeat") ) { return _onRepeat; }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { return _onUpdate; }
		if (HX_FIELD_EQ(inName,"_onResume") ) { return _onResume; }
		if (HX_FIELD_EQ(inName,"_snapping") ) { return _snapping; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		if (HX_FIELD_EQ(inName,"callMethod") ) { return callMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { return _onComplete; }
		if (HX_FIELD_EQ(inName,"autoVisible") ) { return autoVisible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_autoVisible") ) { return _autoVisible; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"smartRotation") ) { return smartRotation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onPauseParams") ) { return _onPauseParams; }
		if (HX_FIELD_EQ(inName,"_smartRotation") ) { return _smartRotation; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onRepeatParams") ) { return _onRepeatParams; }
		if (HX_FIELD_EQ(inName,"_onUpdateParams") ) { return _onUpdateParams; }
		if (HX_FIELD_EQ(inName,"_onResumeParams") ) { return _onResumeParams; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { return _onCompleteParams; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GenericActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< ::motion::easing::IEasing >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delay") ) { _delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"special") ) { special=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onPause") ) { _onPause=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reflect") ) { _reflect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reverse") ) { _reverse=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_onRepeat") ) { _onRepeat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { _onUpdate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onResume") ) { _onResume=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_snapping") ) { _snapping=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onComplete") ) { _onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_autoVisible") ) { _autoVisible=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onPauseParams") ) { _onPauseParams=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smartRotation") ) { _smartRotation=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onRepeatParams") ) { _onRepeatParams=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdateParams") ) { _onUpdateParams=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onResumeParams") ) { _onResumeParams=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onCompleteParams") ) { _onCompleteParams=inValue.Cast< cpp::ArrayBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("_autoVisible","\xc4","\xca","\x11","\xef"));
	outFields->push(HX_HCSTRING("_delay","\xc4","\x1e","\x0e","\xd3"));
	outFields->push(HX_HCSTRING("_ease","\xcd","\xa7","\x1d","\xf6"));
	outFields->push(HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30"));
	outFields->push(HX_HCSTRING("_onCompleteParams","\xbd","\x3c","\xab","\x59"));
	outFields->push(HX_HCSTRING("_onRepeat","\x39","\x85","\xbf","\x2d"));
	outFields->push(HX_HCSTRING("_onRepeatParams","\x5f","\x25","\x08","\x92"));
	outFields->push(HX_HCSTRING("_onUpdate","\xe7","\x73","\x48","\xae"));
	outFields->push(HX_HCSTRING("_onUpdateParams","\x8d","\x4a","\x8e","\x60"));
	outFields->push(HX_HCSTRING("_onResume","\x8b","\x57","\xc7","\x2f"));
	outFields->push(HX_HCSTRING("_onResumeParams","\x31","\x81","\x99","\x40"));
	outFields->push(HX_HCSTRING("_onPause","\xd8","\xce","\x4d","\x8d"));
	outFields->push(HX_HCSTRING("_onPauseParams","\x3e","\xf0","\xc7","\x82"));
	outFields->push(HX_HCSTRING("_reflect","\xbe","\xdd","\xe1","\x22"));
	outFields->push(HX_HCSTRING("_repeat","\xfa","\xa8","\xf3","\x74"));
	outFields->push(HX_HCSTRING("_reverse","\xa3","\x92","\xb4","\x54"));
	outFields->push(HX_HCSTRING("_smartRotation","\xa8","\x90","\x57","\x7f"));
	outFields->push(HX_HCSTRING("_snapping","\x1b","\x2d","\x4f","\x67"));
	outFields->push(HX_HCSTRING("special","\x39","\x7a","\x55","\xdf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GenericActuator_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsString,(int)offsetof(GenericActuator_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,properties),HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_autoVisible),HX_HCSTRING("_autoVisible","\xc4","\xca","\x11","\xef")},
	{hx::fsFloat,(int)offsetof(GenericActuator_obj,_delay),HX_HCSTRING("_delay","\xc4","\x1e","\x0e","\xd3")},
	{hx::fsObject /*::motion::easing::IEasing*/ ,(int)offsetof(GenericActuator_obj,_ease),HX_HCSTRING("_ease","\xcd","\xa7","\x1d","\xf6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onComplete),HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(GenericActuator_obj,_onCompleteParams),HX_HCSTRING("_onCompleteParams","\xbd","\x3c","\xab","\x59")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onRepeat),HX_HCSTRING("_onRepeat","\x39","\x85","\xbf","\x2d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(GenericActuator_obj,_onRepeatParams),HX_HCSTRING("_onRepeatParams","\x5f","\x25","\x08","\x92")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onUpdate),HX_HCSTRING("_onUpdate","\xe7","\x73","\x48","\xae")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(GenericActuator_obj,_onUpdateParams),HX_HCSTRING("_onUpdateParams","\x8d","\x4a","\x8e","\x60")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onResume),HX_HCSTRING("_onResume","\x8b","\x57","\xc7","\x2f")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(GenericActuator_obj,_onResumeParams),HX_HCSTRING("_onResumeParams","\x31","\x81","\x99","\x40")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GenericActuator_obj,_onPause),HX_HCSTRING("_onPause","\xd8","\xce","\x4d","\x8d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(GenericActuator_obj,_onPauseParams),HX_HCSTRING("_onPauseParams","\x3e","\xf0","\xc7","\x82")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_reflect),HX_HCSTRING("_reflect","\xbe","\xdd","\xe1","\x22")},
	{hx::fsInt,(int)offsetof(GenericActuator_obj,_repeat),HX_HCSTRING("_repeat","\xfa","\xa8","\xf3","\x74")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_reverse),HX_HCSTRING("_reverse","\xa3","\x92","\xb4","\x54")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_smartRotation),HX_HCSTRING("_smartRotation","\xa8","\x90","\x57","\x7f")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,_snapping),HX_HCSTRING("_snapping","\x1b","\x2d","\x4f","\x67")},
	{hx::fsBool,(int)offsetof(GenericActuator_obj,special),HX_HCSTRING("special","\x39","\x7a","\x55","\xdf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("properties","\xf3","\xfb","\x0e","\x61"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("_autoVisible","\xc4","\xca","\x11","\xef"),
	HX_HCSTRING("_delay","\xc4","\x1e","\x0e","\xd3"),
	HX_HCSTRING("_ease","\xcd","\xa7","\x1d","\xf6"),
	HX_HCSTRING("_onComplete","\x17","\xa2","\x08","\x30"),
	HX_HCSTRING("_onCompleteParams","\xbd","\x3c","\xab","\x59"),
	HX_HCSTRING("_onRepeat","\x39","\x85","\xbf","\x2d"),
	HX_HCSTRING("_onRepeatParams","\x5f","\x25","\x08","\x92"),
	HX_HCSTRING("_onUpdate","\xe7","\x73","\x48","\xae"),
	HX_HCSTRING("_onUpdateParams","\x8d","\x4a","\x8e","\x60"),
	HX_HCSTRING("_onResume","\x8b","\x57","\xc7","\x2f"),
	HX_HCSTRING("_onResumeParams","\x31","\x81","\x99","\x40"),
	HX_HCSTRING("_onPause","\xd8","\xce","\x4d","\x8d"),
	HX_HCSTRING("_onPauseParams","\x3e","\xf0","\xc7","\x82"),
	HX_HCSTRING("_reflect","\xbe","\xdd","\xe1","\x22"),
	HX_HCSTRING("_repeat","\xfa","\xa8","\xf3","\x74"),
	HX_HCSTRING("_reverse","\xa3","\x92","\xb4","\x54"),
	HX_HCSTRING("_smartRotation","\xa8","\x90","\x57","\x7f"),
	HX_HCSTRING("_snapping","\x1b","\x2d","\x4f","\x67"),
	HX_HCSTRING("special","\x39","\x7a","\x55","\xdf"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("autoVisible","\xc3","\x1c","\x08","\x89"),
	HX_HCSTRING("callMethod","\x1f","\xce","\x8a","\x34"),
	HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onRepeat","\xda","\x8d","\x29","\xe6"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("onPause","\x57","\x75","\x95","\x53"),
	HX_HCSTRING("onResume","\x2c","\x60","\x31","\xe8"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("reflect","\x3d","\x84","\x29","\xe9"),
	HX_HCSTRING("repeat","\x5b","\x97","\x7c","\x06"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("smartRotation","\x67","\xa0","\x05","\x41"),
	HX_HCSTRING("snapping","\xbc","\x35","\xb9","\x1f"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class GenericActuator_obj::__mClass;

void GenericActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.actuators.GenericActuator","\xc4","\x2e","\xc5","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GenericActuator_obj >;
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
