#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_UIBuilder
#include <ru/stablex/ui/UIBuilder.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Box
#include <ru/stablex/ui/widgets/Box.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Floating
#include <ru/stablex/ui/widgets/Floating.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{

Void Floating_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.ui.widgets.Floating","new",0x8ec23e15,"ru.stablex.ui.widgets.Floating.new","ru/stablex/ui/widgets/Floating.hx",15,0x4373a7bb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	this->scaleContent = ((Float)1);
	HX_STACK_LINE(20)
	this->renderTo = null();
	HX_STACK_LINE(18)
	this->shown = false;
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(31)
	this->set_visible(false);
}
;
	return null();
}

//Floating_obj::~Floating_obj() { }

Dynamic Floating_obj::__CreateEmpty() { return  new Floating_obj; }
hx::ObjectPtr< Floating_obj > Floating_obj::__new()
{  hx::ObjectPtr< Floating_obj > _result_ = new Floating_obj();
	_result_->__construct();
	return _result_;}

Dynamic Floating_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Floating_obj > _result_ = new Floating_obj();
	_result_->__construct();
	return _result_;}

Void Floating_obj::show( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Floating","show",0x5e8465a8,"ru.stablex.ui.widgets.Floating.show","ru/stablex/ui/widgets/Floating.hx",39,0x4373a7bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::String tmp = this->renderTo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		if ((tmp1)){
			HX_STACK_LINE(42)
			bool tmp2 = this->shown = true;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			this->set_visible(tmp2);
			HX_STACK_LINE(45)
			bool tmp3 = this->_widthUsePercent;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(45)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(45)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(45)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			if ((tmp5)){
				HX_STACK_LINE(45)
				tmp6 = this->_heightUsePercent;
			}
			else{
				HX_STACK_LINE(45)
				tmp6 = true;
			}
			HX_STACK_LINE(45)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			if ((tmp8)){
				HX_STACK_LINE(45)
				int tmp10 = this->_xUse;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(45)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(45)
				int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(45)
				tmp9 = (tmp12 == (int)2);
			}
			else{
				HX_STACK_LINE(45)
				tmp9 = true;
			}
			HX_STACK_LINE(45)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(45)
			if ((tmp11)){
				HX_STACK_LINE(45)
				int tmp13 = this->_xUse;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(45)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(45)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(45)
				tmp12 = (tmp15 == (int)4);
			}
			else{
				HX_STACK_LINE(45)
				tmp12 = true;
			}
			HX_STACK_LINE(45)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(45)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(45)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(45)
			if ((tmp14)){
				HX_STACK_LINE(45)
				int tmp16 = this->_xUse;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(45)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(45)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(45)
				tmp15 = (tmp18 == (int)3);
			}
			else{
				HX_STACK_LINE(45)
				tmp15 = true;
			}
			HX_STACK_LINE(45)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(45)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(45)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(45)
			if ((tmp17)){
				HX_STACK_LINE(45)
				int tmp19 = this->_yUse;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(45)
				int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(45)
				int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(45)
				tmp18 = (tmp21 == (int)6);
			}
			else{
				HX_STACK_LINE(45)
				tmp18 = true;
			}
			HX_STACK_LINE(45)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(45)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(45)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(45)
			if ((tmp20)){
				HX_STACK_LINE(45)
				int tmp22 = this->_yUse;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(45)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(45)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(45)
				tmp21 = (tmp24 == (int)8);
			}
			else{
				HX_STACK_LINE(45)
				tmp21 = true;
			}
			HX_STACK_LINE(45)
			bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(45)
			bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(45)
			if ((tmp22)){
				HX_STACK_LINE(45)
				int tmp24 = this->_yUse;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(45)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(45)
				tmp23 = (tmp25 == (int)7);
			}
			else{
				HX_STACK_LINE(45)
				tmp23 = true;
			}
			HX_STACK_LINE(45)
			if ((tmp23)){
				HX_STACK_LINE(46)
				::openfl::display::MovieClip tmp24 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(46)
				Dynamic tmp25 = this->_onStageResize_dyn();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(46)
				tmp24->stage->removeEventListener(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),tmp25,null());
				HX_STACK_LINE(47)
				::openfl::display::MovieClip tmp26 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(47)
				Dynamic tmp27 = this->_onStageResize_dyn();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(47)
				tmp26->stage->addEventListener(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),tmp27,null(),null(),null());
			}
			HX_STACK_LINE(50)
			::openfl::display::DisplayObjectContainer tmp24 = this->parent;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(50)
			::openfl::display::MovieClip tmp25 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(50)
			::openfl::display::Stage tmp26 = tmp25->stage;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(50)
			bool tmp27 = (tmp24 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(50)
			if ((tmp27)){
				HX_STACK_LINE(51)
				::openfl::display::MovieClip tmp28 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(51)
				::openfl::display::MovieClip tmp29 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(51)
				int tmp30 = tmp29->stage->get_numChildren();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(51)
				int tmp31 = (tmp30 - (int)1);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(51)
				tmp28->stage->setChildIndex(hx::ObjectPtr<OBJ_>(this),tmp31);
			}
			else{
				HX_STACK_LINE(53)
				::openfl::display::DisplayObjectContainer tmp28 = this->parent;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(53)
				bool tmp29 = (tmp28 != null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(53)
				if ((tmp29)){
					HX_STACK_LINE(53)
					::openfl::display::DisplayObjectContainer tmp30 = this->parent;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(53)
					tmp30->removeChild(hx::ObjectPtr<OBJ_>(this));
				}
				HX_STACK_LINE(54)
				::openfl::display::MovieClip tmp30 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(54)
				tmp30->stage->addChild(hx::ObjectPtr<OBJ_>(this));
			}
			HX_STACK_LINE(57)
			this->_onStageResize(null());
		}
		else{
			HX_STACK_LINE(61)
			::haxe::ds::StringMap tmp2 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			::String tmp3 = this->renderTo;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			::ru::stablex::ui::widgets::Widget tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(61)
			::ru::stablex::ui::widgets::Widget to = tmp4;		HX_STACK_VAR(to,"to");
			HX_STACK_LINE(62)
			bool tmp5 = (to != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			if ((tmp5)){
				HX_STACK_LINE(63)
				bool tmp6 = this->shown = true;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(63)
				this->set_visible(tmp6);
				HX_STACK_LINE(64)
				::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(64)
				::ru::stablex::ui::widgets::Widget tmp8 = to;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(64)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(64)
				if ((tmp9)){
					HX_STACK_LINE(65)
					int tmp10 = to->get_numChildren();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					int tmp11 = (tmp10 - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(65)
					to->setChildIndex(hx::ObjectPtr<OBJ_>(this),tmp11);
				}
				else{
					HX_STACK_LINE(67)
					::openfl::display::DisplayObjectContainer tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(67)
					bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(67)
					if ((tmp11)){
						HX_STACK_LINE(67)
						::openfl::display::DisplayObjectContainer tmp12 = this->parent;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(67)
						tmp12->removeChild(hx::ObjectPtr<OBJ_>(this));
					}
					HX_STACK_LINE(68)
					to->addChild(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Floating_obj,show,(void))

Void Floating_obj::hide( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Floating","hide",0x573fc56d,"ru.stablex.ui.widgets.Floating.hide","ru/stablex/ui/widgets/Floating.hx",79,0x4373a7bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(80)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		Dynamic tmp1 = this->_onStageResize_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		tmp->stage->removeEventListener(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),tmp1,null());
		HX_STACK_LINE(82)
		::openfl::display::DisplayObjectContainer tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		if ((tmp3)){
			HX_STACK_LINE(83)
			::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(83)
			tmp4->removeChild(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(86)
		bool tmp4 = this->shown = false;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		this->set_visible(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Floating_obj,hide,(void))

bool Floating_obj::_usingParentSize( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Floating","_usingParentSize",0x03618d1b,"ru.stablex.ui.widgets.Floating._usingParentSize","ru/stablex/ui/widgets/Floating.hx",94,0x4373a7bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	bool tmp = this->_widthUsePercent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	if ((tmp2)){
		HX_STACK_LINE(96)
		tmp3 = this->_heightUsePercent;
	}
	else{
		HX_STACK_LINE(96)
		tmp3 = true;
	}
	HX_STACK_LINE(96)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(96)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(96)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(96)
	if ((tmp5)){
		HX_STACK_LINE(97)
		int tmp7 = this->_xUse;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(97)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(97)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(97)
		tmp6 = (tmp9 == (int)2);
	}
	else{
		HX_STACK_LINE(96)
		tmp6 = true;
	}
	HX_STACK_LINE(96)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(96)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(96)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(96)
	if ((tmp8)){
		HX_STACK_LINE(97)
		int tmp10 = this->_xUse;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(97)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(97)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(97)
		tmp9 = (tmp12 == (int)4);
	}
	else{
		HX_STACK_LINE(96)
		tmp9 = true;
	}
	HX_STACK_LINE(96)
	bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(96)
	bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(96)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(96)
	if ((tmp11)){
		HX_STACK_LINE(97)
		int tmp13 = this->_xUse;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(97)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(97)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(97)
		tmp12 = (tmp15 == (int)3);
	}
	else{
		HX_STACK_LINE(96)
		tmp12 = true;
	}
	HX_STACK_LINE(96)
	bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(96)
	bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(96)
	bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(96)
	if ((tmp14)){
		HX_STACK_LINE(98)
		int tmp16 = this->_yUse;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(98)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(98)
		int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(98)
		tmp15 = (tmp18 == (int)6);
	}
	else{
		HX_STACK_LINE(96)
		tmp15 = true;
	}
	HX_STACK_LINE(96)
	bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(96)
	bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(96)
	bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(96)
	if ((tmp17)){
		HX_STACK_LINE(98)
		int tmp19 = this->_yUse;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(98)
		int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(98)
		int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(98)
		tmp18 = (tmp21 == (int)8);
	}
	else{
		HX_STACK_LINE(96)
		tmp18 = true;
	}
	HX_STACK_LINE(96)
	bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(95)
	bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(96)
	if ((tmp19)){
		HX_STACK_LINE(98)
		int tmp21 = this->_yUse;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(98)
		int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(98)
		tmp20 = (tmp22 == (int)7);
	}
	else{
		HX_STACK_LINE(96)
		tmp20 = true;
	}
	HX_STACK_LINE(95)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC0(Floating_obj,_usingParentSize,return )

Void Floating_obj::_onStageResize( ::openfl::events::Event e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Floating","_onStageResize",0x87081d1f,"ru.stablex.ui.widgets.Floating._onStageResize","ru/stablex/ui/widgets/Floating.hx",107,0x4373a7bb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(108)
		::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		::openfl::display::Stage tmp2 = tmp1->stage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		if ((tmp3)){
			HX_STACK_LINE(108)
			return null();
		}
		HX_STACK_LINE(110)
		Float tmp4 = this->scaleContent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(110)
		bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(110)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(110)
		if ((tmp5)){
			HX_STACK_LINE(110)
			tmp6 = ((Float)0.001);
		}
		else{
			HX_STACK_LINE(110)
			tmp6 = this->scaleContent;
		}
		HX_STACK_LINE(110)
		Float scale = tmp6;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(111)
		::openfl::display::MovieClip tmp7 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(111)
		int tmp8 = tmp7->stage->stageWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(111)
		Float tmp9 = scale;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(111)
		Float tmp10 = (Float(tmp8) / Float(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(111)
		Float width = tmp10;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(112)
		::openfl::display::MovieClip tmp11 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(112)
		int tmp12 = tmp11->stage->stageHeight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(112)
		Float tmp13 = scale;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(112)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(112)
		Float height = tmp14;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(116)
		bool tmp15 = this->_widthUsePercent;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(116)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(116)
		if ((tmp15)){
			HX_STACK_LINE(116)
			tmp16 = this->_heightUsePercent;
		}
		else{
			HX_STACK_LINE(116)
			tmp16 = false;
		}
		HX_STACK_LINE(116)
		if ((tmp16)){
			HX_STACK_LINE(117)
			Float tmp17 = width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(117)
			Float tmp18 = this->_widthPercent;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(117)
			Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(117)
			Float tmp20 = (Float(tmp19) / Float((int)100));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(117)
			Float tmp21 = height;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(117)
			Float tmp22 = this->_heightPercent;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(117)
			Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(117)
			Float tmp24 = (Float(tmp23) / Float((int)100));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(117)
			this->resize(tmp20,tmp24,true);
		}
		else{
			HX_STACK_LINE(120)
			bool tmp17 = this->_widthUsePercent;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(120)
			if ((tmp17)){
				HX_STACK_LINE(121)
				Float tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(121)
				Float tmp19 = this->_widthPercent;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(121)
				Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(121)
				Float tmp21 = (Float(tmp20) / Float((int)100));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(121)
				Float tmp22 = this->_height;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(121)
				this->resize(tmp21,tmp22,true);
			}
			else{
				HX_STACK_LINE(124)
				bool tmp18 = this->_heightUsePercent;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(124)
				if ((tmp18)){
					HX_STACK_LINE(125)
					Float tmp19 = this->_width;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(125)
					Float tmp20 = height;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(125)
					Float tmp21 = this->_heightPercent;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(125)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(125)
					Float tmp23 = (Float(tmp22) / Float((int)100));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(125)
					this->resize(tmp19,tmp23,true);
				}
			}
		}
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			int tmp17 = this->_xUse;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(130)
			int _g = tmp17;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			int tmp18 = _g;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(130)
			switch( (int)(tmp18)){
				case (int)3: {
					HX_STACK_LINE(132)
					Float tmp19 = width;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(132)
					Float tmp20 = this->_right;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(132)
					Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(132)
					Float tmp22 = this->_width;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(132)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(132)
					this->set_x(tmp23);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(134)
					Float tmp19 = width;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(134)
					Float tmp20 = width;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(134)
					Float tmp21 = this->_rightPercent;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(134)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(134)
					Float tmp23 = (Float(tmp22) / Float((int)100));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(134)
					Float tmp24 = (tmp19 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(134)
					Float tmp25 = this->get_w();		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(134)
					Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(134)
					this->set_x(tmp26);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(136)
					Float tmp19 = width;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(136)
					Float tmp20 = this->_leftPercent;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(136)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(136)
					Float tmp22 = (Float(tmp21) / Float((int)100));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(136)
					this->set_x(tmp22);
				}
				;break;
			}
		}
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			int tmp17 = this->_yUse;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(139)
			int _g = tmp17;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(139)
			int tmp18 = _g;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(139)
			switch( (int)(tmp18)){
				case (int)7: {
					HX_STACK_LINE(141)
					Float tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(141)
					Float tmp20 = this->_bottom;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(141)
					Float tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(141)
					Float tmp22 = this->_height;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(141)
					Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(141)
					this->set_y(tmp23);
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(143)
					Float tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(143)
					Float tmp20 = height;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(143)
					Float tmp21 = this->_bottomPercent;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(143)
					Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(143)
					Float tmp23 = (Float(tmp22) / Float((int)100));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(143)
					Float tmp24 = (tmp19 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(143)
					Float tmp25 = this->_height;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(143)
					Float tmp26 = (tmp24 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(143)
					this->set_y(tmp26);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(145)
					Float tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(145)
					Float tmp20 = this->_topPercent;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(145)
					Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(145)
					Float tmp22 = (Float(tmp21) / Float((int)100));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(145)
					this->set_y(tmp22);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Floating_obj,_onStageResize,(void))

::openfl::display::DisplayObject Floating_obj::getRenderTarget( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Floating","getRenderTarget",0xdb23f632,"ru.stablex.ui.widgets.Floating.getRenderTarget","ru/stablex/ui/widgets/Floating.hx",155,0x4373a7bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	::String tmp = this->renderTo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(156)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(156)
	::openfl::display::DisplayObject tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	if ((tmp1)){
		HX_STACK_LINE(156)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		tmp2 = tmp3->stage;
	}
	else{
		HX_STACK_LINE(156)
		::haxe::ds::StringMap tmp3 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		::String tmp4 = this->renderTo;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		::ru::stablex::ui::widgets::Widget tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		tmp2 = tmp5;
	}
	HX_STACK_LINE(156)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Floating_obj,getRenderTarget,return )

Void Floating_obj::free( hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("ru.stablex.ui.widgets.Floating","free",0x55f42d57,"ru.stablex.ui.widgets.Floating.free","ru/stablex/ui/widgets/Floating.hx",164,0x4373a7bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(165)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		Dynamic tmp1 = this->_onStageResize_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		tmp->stage->removeEventListener(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),tmp1,null());
		HX_STACK_LINE(166)
		bool tmp2 = recursive;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(166)
		this->super::free(tmp2);
	}
return null();
}


Float Floating_obj::set_scaleContent( Float scaleContent){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Floating","set_scaleContent",0x017f6af7,"ru.stablex.ui.widgets.Floating.set_scaleContent","ru/stablex/ui/widgets/Floating.hx",174,0x4373a7bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scaleContent,"scaleContent")
	HX_STACK_LINE(175)
	Float tmp = scaleContent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	Float tmp1 = this->set_scaleY(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	this->set_scaleX(tmp1);
	HX_STACK_LINE(176)
	this->scaleContent = scaleContent;
	HX_STACK_LINE(178)
	::String tmp2 = this->renderTo;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(178)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(178)
	if ((tmp4)){
		HX_STACK_LINE(178)
		tmp5 = this->created;
	}
	else{
		HX_STACK_LINE(178)
		tmp5 = false;
	}
	HX_STACK_LINE(178)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(178)
	if ((tmp5)){
		HX_STACK_LINE(178)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(178)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(178)
		tmp6 = (tmp8 != null());
	}
	else{
		HX_STACK_LINE(178)
		tmp6 = false;
	}
	HX_STACK_LINE(178)
	if ((tmp6)){
		HX_STACK_LINE(179)
		this->_onStageResize(null());
	}
	HX_STACK_LINE(182)
	Float tmp7 = scaleContent;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(182)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Floating_obj,set_scaleContent,return )


Floating_obj::Floating_obj()
{
}

void Floating_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Floating);
	HX_MARK_MEMBER_NAME(shown,"shown");
	HX_MARK_MEMBER_NAME(renderTo,"renderTo");
	HX_MARK_MEMBER_NAME(scaleContent,"scaleContent");
	::ru::stablex::ui::widgets::Box_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Floating_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shown,"shown");
	HX_VISIT_MEMBER_NAME(renderTo,"renderTo");
	HX_VISIT_MEMBER_NAME(scaleContent,"scaleContent");
	::ru::stablex::ui::widgets::Box_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Floating_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shown") ) { return shown; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderTo") ) { return renderTo; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scaleContent") ) { return scaleContent; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onStageResize") ) { return _onStageResize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getRenderTarget") ) { return getRenderTarget_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_usingParentSize") ) { return _usingParentSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleContent") ) { return set_scaleContent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Floating_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"shown") ) { shown=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderTo") ) { renderTo=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scaleContent") ) { if (inCallProp == hx::paccAlways) return set_scaleContent(inValue);scaleContent=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Floating_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("shown","\xd1","\x88","\x27","\x7c"));
	outFields->push(HX_HCSTRING("renderTo","\x71","\xb6","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("scaleContent","\xcf","\x2b","\xc1","\xb0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Floating_obj,shown),HX_HCSTRING("shown","\xd1","\x88","\x27","\x7c")},
	{hx::fsString,(int)offsetof(Floating_obj,renderTo),HX_HCSTRING("renderTo","\x71","\xb6","\xdb","\xb2")},
	{hx::fsFloat,(int)offsetof(Floating_obj,scaleContent),HX_HCSTRING("scaleContent","\xcf","\x2b","\xc1","\xb0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("shown","\xd1","\x88","\x27","\x7c"),
	HX_HCSTRING("renderTo","\x71","\xb6","\xdb","\xb2"),
	HX_HCSTRING("scaleContent","\xcf","\x2b","\xc1","\xb0"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("_usingParentSize","\xf0","\x27","\x84","\x0d"),
	HX_HCSTRING("_onStageResize","\xb4","\xe8","\xb0","\x3c"),
	HX_HCSTRING("getRenderTarget","\xfd","\x4c","\x2d","\x19"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("set_scaleContent","\xcc","\x05","\xa2","\x0b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Floating_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Floating_obj::__mClass,"__mClass");
};

#endif

hx::Class Floating_obj::__mClass;

void Floating_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.widgets.Floating","\xa3","\x8f","\xc2","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Floating_obj >;
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
} // end namespace ui
} // end namespace widgets
