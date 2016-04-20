#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_motion_easing_Back
#include <motion/easing/Back.h>
#endif
#ifndef INCLUDED_motion_easing_Bounce
#include <motion/easing/Bounce.h>
#endif
#ifndef INCLUDED_motion_easing_Cubic
#include <motion/easing/Cubic.h>
#endif
#ifndef INCLUDED_motion_easing_Elastic
#include <motion/easing/Elastic.h>
#endif
#ifndef INCLUDED_motion_easing_Expo
#include <motion/easing/Expo.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_motion_easing_Quad
#include <motion/easing/Quad.h>
#endif
#ifndef INCLUDED_motion_easing_Quart
#include <motion/easing/Quart.h>
#endif
#ifndef INCLUDED_motion_easing_Quint
#include <motion/easing/Quint.h>
#endif
#ifndef INCLUDED_motion_easing_Sine
#include <motion/easing/Sine.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif
namespace ru{
namespace stablex{

Void TweenSprite_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.TweenSprite","new",0xc43762e6,"ru.stablex.TweenSprite.new","ru/stablex/TweenSprite.hx",25,0x04d763cc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	super::__construct();
}
;
	return null();
}

//TweenSprite_obj::~TweenSprite_obj() { }

Dynamic TweenSprite_obj::__CreateEmpty() { return  new TweenSprite_obj; }
hx::ObjectPtr< TweenSprite_obj > TweenSprite_obj::__new()
{  hx::ObjectPtr< TweenSprite_obj > _result_ = new TweenSprite_obj();
	_result_->__construct();
	return _result_;}

Dynamic TweenSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TweenSprite_obj > _result_ = new TweenSprite_obj();
	_result_->__construct();
	return _result_;}

Void TweenSprite_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("ru.stablex.TweenSprite","addEventListener",0xfbe6dd87,"ru.stablex.TweenSprite.addEventListener","ru/stablex/TweenSprite.hx",39,0x04d763cc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(41)
		::haxe::ds::StringMap tmp = this->_listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		if ((tmp1)){
			HX_STACK_LINE(43)
			::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(43)
				::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(43)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(43)
			this->_listeners = tmp2;
		}
		HX_STACK_LINE(49)
		::haxe::ds::StringMap tmp2 = this->_listeners;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::List tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		::List listeners = tmp4;		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(52)
		bool tmp5 = (listeners == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		if ((tmp5)){
			HX_STACK_LINE(53)
			::List tmp6 = ::List_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			listeners = tmp6;
			HX_STACK_LINE(54)
			Dynamic tmp7 = listener;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(54)
			listeners->add(tmp7);
			HX_STACK_LINE(55)
			::haxe::ds::StringMap tmp8 = this->_listeners;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(55)
			::String tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(55)
			::List tmp10 = listeners;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(55)
			tmp8->set(tmp9,tmp10);
		}
		else{
			HX_STACK_LINE(59)
			Dynamic tmp6 = listener;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(59)
			listeners->add(tmp6);
		}
		HX_STACK_LINE(62)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		Dynamic tmp7 = listener;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		int tmp8 = priority;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		bool tmp9 = useWeakReference;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		this->super::addEventListener(tmp6,tmp7,false,tmp8,tmp9);
	}
return null();
}


bool TweenSprite_obj::addUniqueListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("ru.stablex.TweenSprite","addUniqueListener",0x6a9097ac,"ru.stablex.TweenSprite.addUniqueListener","ru/stablex/TweenSprite.hx",72,0x04d763cc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(73)
		::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		bool tmp2 = this->hasListener(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		if ((tmp2)){
			HX_STACK_LINE(74)
			return false;
		}
		HX_STACK_LINE(77)
		::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		Dynamic tmp4 = listener;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		bool tmp5 = useCapture;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(77)
		int tmp6 = priority;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(77)
		bool tmp7 = useWeakReference;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(77)
		this->addEventListener(tmp3,tmp4,tmp5,tmp6,tmp7);
		HX_STACK_LINE(78)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(TweenSprite_obj,addUniqueListener,return )

Void TweenSprite_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_FRAME("ru.stablex.TweenSprite","removeEventListener",0xe8bd0650,"ru.stablex.TweenSprite.removeEventListener","ru/stablex/TweenSprite.hx",86,0x04d763cc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
{
		HX_STACK_LINE(88)
		::haxe::ds::StringMap tmp = this->_listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		if ((tmp1)){
			HX_STACK_LINE(89)
			::haxe::ds::StringMap tmp2 = this->_listeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(89)
			bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(89)
			if ((tmp4)){
				HX_STACK_LINE(89)
				::haxe::ds::StringMap tmp5 = this->_listeners;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(89)
				::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(89)
				::List tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(89)
				Dynamic tmp8 = listener;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(89)
				tmp7->remove(tmp8);
			}
		}
		HX_STACK_LINE(92)
		::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		Dynamic tmp3 = listener;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		this->super::removeEventListener(tmp2,tmp3,false);
	}
return null();
}


Void TweenSprite_obj::clearEvent( ::String type){
{
		HX_STACK_FRAME("ru.stablex.TweenSprite","clearEvent",0xcec97187,"ru.stablex.TweenSprite.clearEvent","ru/stablex/TweenSprite.hx",100,0x04d763cc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(101)
		::haxe::ds::StringMap tmp = this->_listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		if ((tmp1)){
			HX_STACK_LINE(102)
			::haxe::ds::StringMap tmp2 = this->_listeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			::List tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			::List listeners = tmp4;		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(103)
			bool tmp5 = (listeners != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			if ((tmp5)){
				HX_STACK_LINE(104)
				while((true)){
					HX_STACK_LINE(104)
					bool tmp6 = (listeners->length > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(104)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(104)
					if ((tmp7)){
						HX_STACK_LINE(104)
						break;
					}
					HX_STACK_LINE(105)
					::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(105)
					Dynamic tmp9 = listeners->first();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(105)
					this->removeEventListener(tmp8,tmp9,null());
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TweenSprite_obj,clearEvent,(void))

bool TweenSprite_obj::hasListener( ::String event,Dynamic listener){
	HX_STACK_FRAME("ru.stablex.TweenSprite","hasListener",0x020b6e74,"ru.stablex.TweenSprite.hasListener","ru/stablex/TweenSprite.hx",116,0x04d763cc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(117)
	::haxe::ds::StringMap tmp = this->_listeners;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	if ((tmp1)){
		HX_STACK_LINE(117)
		return false;
	}
	HX_STACK_LINE(119)
	::haxe::ds::StringMap tmp2 = this->_listeners;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	::String tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(119)
	::List tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(119)
	::List lst = tmp4;		HX_STACK_VAR(lst,"lst");
	HX_STACK_LINE(120)
	bool tmp5 = (lst == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(120)
	if ((tmp5)){
		HX_STACK_LINE(120)
		return false;
	}
	HX_STACK_LINE(122)
	{
		HX_STACK_LINE(122)
		::_List::ListIterator tmp6 = ::_List::ListIterator_obj::__new(lst->h);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(122)
		::_List::ListIterator _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		while((true)){
			HX_STACK_LINE(122)
			bool tmp7 = (_g->head != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(122)
			if ((tmp8)){
				HX_STACK_LINE(122)
				break;
			}
			HX_STACK_LINE(122)
			Dynamic tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(122)
			{
				HX_STACK_LINE(122)
				Dynamic tmp10 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(122)
				_g->val = tmp10;
				HX_STACK_LINE(122)
				Dynamic tmp11 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(122)
				_g->head = tmp11;
				HX_STACK_LINE(122)
				tmp9 = _g->val;
			}
			HX_STACK_LINE(122)
			Dynamic l = tmp9;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(123)
			bool tmp10 = (l == listener);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(123)
			if ((tmp10)){
				HX_STACK_LINE(123)
				return true;
			}
		}
	}
	HX_STACK_LINE(126)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(TweenSprite_obj,hasListener,return )

::motion::actuators::GenericActuator TweenSprite_obj::tween( Float duration,Dynamic properties,::String __o_easing,hx::Null< bool >  __o_overwrite,::hx::Class customActuator){
::String easing = __o_easing.Default(HX_HCSTRING("Linear.easeNone","\x4f","\x09","\xc7","\x02"));
bool overwrite = __o_overwrite.Default(true);
	HX_STACK_FRAME("ru.stablex.TweenSprite","tween",0x4b426a71,"ru.stablex.TweenSprite.tween","ru/stablex/TweenSprite.hx",135,0x04d763cc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(duration,"duration")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(easing,"easing")
	HX_STACK_ARG(overwrite,"overwrite")
	HX_STACK_ARG(customActuator,"customActuator")
{
		HX_STACK_LINE(136)
		::String tmp = easing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("Quad.easeInOut","\x94","\x54","\x5a","\x8e"))){
			HX_STACK_LINE(137)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(137)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(137)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(137)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(137)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(137)
			::motion::easing::IEasing tmp6 = ::motion::easing::Quad_obj::get_easeInOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(137)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Quad.easeOut","\xb9","\x1a","\x77","\xe7"))){
			HX_STACK_LINE(138)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(138)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(138)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(138)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(138)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(138)
			::motion::easing::IEasing tmp6 = ::motion::easing::Quad_obj::get_easeOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(138)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(138)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Quad.easeIn","\x1a","\x90","\xab","\xee"))){
			HX_STACK_LINE(139)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(139)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(139)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(139)
			::motion::easing::IEasing tmp6 = ::motion::easing::Quad_obj::get_easeIn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(139)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(139)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Expo.easeInOut","\xbf","\xec","\x41","\xa3"))){
			HX_STACK_LINE(140)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(140)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(140)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(140)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			::motion::easing::IEasing tmp6 = ::motion::easing::Expo_obj::get_easeInOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(140)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Expo.easeOut","\x24","\xc2","\xd5","\xa9"))){
			HX_STACK_LINE(141)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(141)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(141)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(141)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(141)
			::motion::easing::IEasing tmp6 = ::motion::easing::Expo_obj::get_easeOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(141)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(141)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Expo.easeIn","\x0f","\xff","\x6d","\xf6"))){
			HX_STACK_LINE(142)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(142)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(142)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(142)
			::motion::easing::IEasing tmp6 = ::motion::easing::Expo_obj::get_easeIn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(142)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(142)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Bounce.easeInOut","\x95","\xc4","\x58","\xfe"))){
			HX_STACK_LINE(143)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(143)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(143)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(143)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(143)
			::motion::easing::IEasing tmp6 = ::motion::easing::Bounce_obj::get_easeInOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(143)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(143)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Bounce.easeOut","\x7a","\xd8","\xf9","\x62"))){
			HX_STACK_LINE(144)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(144)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(144)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(144)
			::motion::easing::IEasing tmp6 = ::motion::easing::Bounce_obj::get_easeOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(144)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(144)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Bounce.easeIn","\x79","\x85","\x9f","\x28"))){
			HX_STACK_LINE(145)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(145)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(145)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(145)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(145)
			::motion::easing::IEasing tmp6 = ::motion::easing::Bounce_obj::get_easeIn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(145)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(145)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Quint.easeInOut","\x18","\xfd","\xf0","\x31"))){
			HX_STACK_LINE(146)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(146)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(146)
			::motion::easing::IEasing tmp6 = ::motion::easing::Quint_obj::get_easeInOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(146)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Quint.easeOut","\x3d","\xda","\xbb","\x20"))){
			HX_STACK_LINE(147)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(147)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(147)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			::motion::easing::IEasing tmp6 = ::motion::easing::Quint_obj::get_easeOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Quint.easeIn","\x16","\x2d","\x70","\x21"))){
			HX_STACK_LINE(148)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(148)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(148)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			::motion::easing::IEasing tmp6 = ::motion::easing::Quint_obj::get_easeIn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Elastic.easeInOut","\xe2","\x66","\x1c","\x78"))){
			HX_STACK_LINE(149)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(149)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(149)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			::motion::easing::IEasing tmp6 = ::motion::easing::Elastic_obj::get_easeInOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Elastic.easeOut","\x87","\x5d","\x48","\x08"))){
			HX_STACK_LINE(150)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(150)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			::motion::easing::IEasing tmp6 = ::motion::easing::Elastic_obj::get_easeOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(150)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Elastic.easeIn","\x0c","\x21","\xb9","\x79"))){
			HX_STACK_LINE(151)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(151)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(151)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(151)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(151)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			::motion::easing::IEasing tmp6 = ::motion::easing::Elastic_obj::get_easeIn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(151)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Back.easeInOut","\xf4","\x6d","\xbc","\xbc"))){
			HX_STACK_LINE(152)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(152)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(152)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(152)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			::motion::easing::IEasing tmp6 = ::motion::easing::Back_obj::get_easeInOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(152)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(152)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Back.easeOut","\x19","\x1c","\x0e","\x41"))){
			HX_STACK_LINE(153)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(153)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(153)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(153)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(153)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			::motion::easing::IEasing tmp6 = ::motion::easing::Back_obj::get_easeOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Back.easeIn","\xba","\xda","\x15","\x92"))){
			HX_STACK_LINE(154)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(154)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(154)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(154)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(154)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(154)
			::motion::easing::IEasing tmp6 = ::motion::easing::Back_obj::get_easeIn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(154)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Quart.easeInOut","\x8c","\xc7","\xea","\x0a"))){
			HX_STACK_LINE(155)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(155)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(155)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(155)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(155)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(155)
			::motion::easing::IEasing tmp6 = ::motion::easing::Quart_obj::get_easeInOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(155)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(155)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Quart.easeOut","\xb1","\x5f","\xf2","\x1a"))){
			HX_STACK_LINE(156)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(156)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(156)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(156)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(156)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(156)
			::motion::easing::IEasing tmp6 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(156)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Quart.easeIn","\x22","\x12","\xe2","\x6a"))){
			HX_STACK_LINE(157)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(157)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(157)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(157)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(157)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(157)
			::motion::easing::IEasing tmp6 = ::motion::easing::Quart_obj::get_easeIn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(157)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(157)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Cubic.easeInOut","\x97","\x8e","\x68","\x4c"))){
			HX_STACK_LINE(158)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(158)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(158)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(158)
			::motion::easing::IEasing tmp6 = ::motion::easing::Cubic_obj::get_easeInOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(158)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(158)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Cubic.easeOut","\xfc","\xbd","\xa3","\x06"))){
			HX_STACK_LINE(159)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(159)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(159)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(159)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(159)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(159)
			::motion::easing::IEasing tmp6 = ::motion::easing::Cubic_obj::get_easeOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(159)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(159)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Cubic.easeIn","\x37","\x46","\xde","\x5b"))){
			HX_STACK_LINE(160)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(160)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(160)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(160)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			::motion::easing::IEasing tmp6 = ::motion::easing::Cubic_obj::get_easeIn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(160)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(160)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Sine.easeInOut","\x9a","\x15","\x46","\xa6"))){
			HX_STACK_LINE(161)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(161)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(161)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(161)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			::motion::easing::IEasing tmp6 = ::motion::easing::Sine_obj::get_easeInOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(161)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Sine.easeOut","\x3f","\x6e","\x42","\xf7"))){
			HX_STACK_LINE(162)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(162)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(162)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(162)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(162)
			::motion::easing::IEasing tmp6 = ::motion::easing::Sine_obj::get_easeOut();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(162)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(162)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Sine.easeIn","\x54","\x8f","\x5f","\xdc"))){
			HX_STACK_LINE(163)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(163)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(163)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(163)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(163)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(163)
			::motion::easing::IEasing tmp6 = ::motion::easing::Sine_obj::get_easeIn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(163)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(163)
			return tmp7;
		}
		else if (  ( _switch_1==HX_HCSTRING("Linear.easeNone","\x4f","\x09","\xc7","\x02"))){
			HX_STACK_LINE(165)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(165)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(165)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			::motion::easing::IEasing tmp6 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(165)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(165)
			return tmp7;
		}
		else  {
			HX_STACK_LINE(166)
			Float tmp1 = duration;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(166)
			Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			bool tmp3 = overwrite;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			::hx::Class tmp4 = customActuator;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			::motion::actuators::GenericActuator tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			::motion::easing::IEasing tmp6 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			::motion::actuators::GenericActuator tmp7 = tmp5->ease(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(166)
			return tmp7;
		}
;
;
		HX_STACK_LINE(136)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC5(TweenSprite_obj,tween,return )

Void TweenSprite_obj::tweenStop( Dynamic properties,hx::Null< bool >  __o_complete,hx::Null< bool >  __o_sendEvent){
bool complete = __o_complete.Default(false);
bool sendEvent = __o_sendEvent.Default(false);
	HX_STACK_FRAME("ru.stablex.TweenSprite","tweenStop",0xd53c1313,"ru.stablex.TweenSprite.tweenStop","ru/stablex/TweenSprite.hx",175,0x04d763cc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(properties,"properties")
	HX_STACK_ARG(complete,"complete")
	HX_STACK_ARG(sendEvent,"sendEvent")
{
		HX_STACK_LINE(176)
		Dynamic tmp = properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		bool tmp1 = complete;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		bool tmp2 = sendEvent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		::motion::Actuate_obj::stop(hx::ObjectPtr<OBJ_>(this),tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TweenSprite_obj,tweenStop,(void))

Void TweenSprite_obj::free( hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("ru.stablex.TweenSprite","free",0xe6ff3f66,"ru.stablex.TweenSprite.free","ru/stablex/TweenSprite.hx",184,0x04d763cc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(185)
		this->tweenStop(null(),null(),null());
		HX_STACK_LINE(188)
		::haxe::ds::StringMap tmp = this->_listeners;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(188)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(188)
		if ((tmp1)){
			HX_STACK_LINE(189)
			::haxe::ds::StringMap tmp2 = this->_listeners;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
				::String event = __it->next();
				{
					HX_STACK_LINE(190)
					::haxe::ds::StringMap tmp4 = this->_listeners;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(190)
					::String tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(190)
					::List tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(190)
					::List listeners = tmp6;		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(191)
					while((true)){
						HX_STACK_LINE(191)
						bool tmp7 = listeners->isEmpty();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(191)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(191)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(191)
						if ((tmp9)){
							HX_STACK_LINE(191)
							break;
						}
						HX_STACK_LINE(192)
						::String tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(192)
						Dynamic tmp11 = listeners->first();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(192)
						this->removeEventListener(tmp10,tmp11,null());
					}
				}
;
			}
		}
		HX_STACK_LINE(198)
		bool tmp2 = recursive;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		this->freeChildren(tmp2);
		HX_STACK_LINE(201)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(201)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		if ((tmp4)){
			HX_STACK_LINE(202)
			::openfl::display::DisplayObjectContainer tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			tmp5->removeChild(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TweenSprite_obj,free,(void))

Void TweenSprite_obj::freeChildren( hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("ru.stablex.TweenSprite","freeChildren",0x3d21eac5,"ru.stablex.TweenSprite.freeChildren","ru/stablex/TweenSprite.hx",210,0x04d763cc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(211)
		::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(212)
		while((true)){
			HX_STACK_LINE(212)
			int tmp = this->get_numChildren();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(212)
			bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(212)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(212)
			if ((tmp2)){
				HX_STACK_LINE(212)
				break;
			}
			HX_STACK_LINE(213)
			::openfl::display::DisplayObject tmp3 = this->removeChildAt((int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(213)
			child = tmp3;
			HX_STACK_LINE(215)
			bool tmp4 = recursive;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(215)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(215)
			if ((tmp4)){
				HX_STACK_LINE(215)
				::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(215)
				::openfl::display::DisplayObject tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(215)
				tmp5 = ::Std_obj::is(tmp7,hx::ClassOf< ::ru::stablex::TweenSprite >());
			}
			else{
				HX_STACK_LINE(215)
				tmp5 = false;
			}
			HX_STACK_LINE(215)
			if ((tmp5)){
				HX_STACK_LINE(216)
				::ru::stablex::TweenSprite tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(216)
				tmp6 = hx::TCast< ::ru::stablex::TweenSprite >::cast(child);
				HX_STACK_LINE(216)
				tmp6->free(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TweenSprite_obj,freeChildren,(void))


TweenSprite_obj::TweenSprite_obj()
{
}

void TweenSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TweenSprite);
	HX_MARK_MEMBER_NAME(_listeners,"_listeners");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TweenSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_listeners,"_listeners");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TweenSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tweenStop") ) { return tweenStop_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_listeners") ) { return _listeners; }
		if (HX_FIELD_EQ(inName,"clearEvent") ) { return clearEvent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasListener") ) { return hasListener_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"freeChildren") ) { return freeChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addUniqueListener") ) { return addUniqueListener_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TweenSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_listeners") ) { _listeners=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TweenSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_listeners","\x40","\xe1","\x30","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TweenSprite_obj,_listeners),HX_HCSTRING("_listeners","\x40","\xe1","\x30","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_listeners","\x40","\xe1","\x30","\x4f"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("addUniqueListener","\xa6","\xe6","\x9b","\x42"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("clearEvent","\x4d","\x07","\xcf","\x4a"),
	HX_HCSTRING("hasListener","\xee","\xe5","\xe8","\x0a"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("tweenStop","\x0d","\xd8","\x22","\x83"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("freeChildren","\x0b","\xfe","\x0c","\xf6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TweenSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class TweenSprite_obj::__mClass;

void TweenSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.TweenSprite","\xf4","\xb7","\x8e","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TweenSprite_obj >;
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

} // end namespace ru
} // end namespace stablex
