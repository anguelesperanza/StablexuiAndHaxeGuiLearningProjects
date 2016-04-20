#include <hxcpp.h>

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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_UIBuilder
#include <ru/stablex/ui/UIBuilder.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_events_WidgetEvent
#include <ru/stablex/ui/events/WidgetEvent.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Box
#include <ru/stablex/ui/widgets/Box.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Floating
#include <ru/stablex/ui/widgets/Floating.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Text
#include <ru/stablex/ui/widgets/Text.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Tip
#include <ru/stablex/ui/widgets/Tip.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{

Void Tip_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","new",0x2caab790,"ru.stablex.ui.widgets.Tip.new","ru/stablex/ui/widgets/Tip.hx",28,0x1937d520)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(32)
	::ru::stablex::ui::widgets::Text tmp = ::ru::stablex::ui::UIBuilder_obj::create(hx::ClassOf< ::ru::stablex::ui::widgets::Text >(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	this->label = tmp;
	HX_STACK_LINE(33)
	::ru::stablex::ui::widgets::Text tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	this->addChild(tmp1);
	HX_STACK_LINE(36)
	this->mouseEnabled = false;
	HX_STACK_LINE(37)
	this->mouseChildren = false;
}
;
	return null();
}

//Tip_obj::~Tip_obj() { }

Dynamic Tip_obj::__CreateEmpty() { return  new Tip_obj; }
hx::ObjectPtr< Tip_obj > Tip_obj::__new()
{  hx::ObjectPtr< Tip_obj > _result_ = new Tip_obj();
	_result_->__construct();
	return _result_;}

Dynamic Tip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tip_obj > _result_ = new Tip_obj();
	_result_->__construct();
	return _result_;}

::String Tip_obj::get_text( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","get_text",0xca199306,"ru.stablex.ui.widgets.Tip.get_text","ru/stablex/ui/widgets/Tip.hx",45,0x1937d520)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	::ru::stablex::ui::widgets::Text tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(46)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Tip_obj,get_text,return )

::String Tip_obj::set_text( ::String s){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","set_text",0x7876ec7a,"ru.stablex.ui.widgets.Tip.set_text","ru/stablex/ui/widgets/Tip.hx",54,0x1937d520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(55)
	::ru::stablex::ui::widgets::Text tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(55)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(55)
	::String tmp2 = tmp->set_text(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,set_text,return )

Void Tip_obj::bindTo( ::ru::stablex::ui::widgets::Widget w){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","bindTo",0x6a7b9f68,"ru.stablex.ui.widgets.Tip.bindTo","ru/stablex/ui/widgets/Tip.hx",63,0x1937d520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(65)
		this->_removeTargetListeners();
		HX_STACK_LINE(67)
		this->target = w;
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Widget tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		Dynamic tmp1 = this->showTooltip_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		tmp->addUniqueListener(HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6"),tmp1,null(),null(),null());
		HX_STACK_LINE(70)
		::ru::stablex::ui::widgets::Widget tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		Dynamic tmp3 = this->freeTooltip_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		tmp2->addUniqueListener(HX_HCSTRING("widgetFree","\x90","\xaa","\x9b","\x55"),tmp3,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,bindTo,(void))

Void Tip_obj::showTooltip( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","showTooltip",0x1c81e0b6,"ru.stablex.ui.widgets.Tip.showTooltip","ru/stablex/ui/widgets/Tip.hx",78,0x1937d520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(79)
		::ru::stablex::ui::widgets::Widget tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		Dynamic tmp1 = this->hideTooltip_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		tmp->addUniqueListener(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"),tmp1,null(),null(),null());
		HX_STACK_LINE(80)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		Dynamic tmp3 = this->moveTooltip_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		tmp2->stage->removeEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp3,null());
		HX_STACK_LINE(81)
		::openfl::display::MovieClip tmp4 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		Dynamic tmp5 = this->moveTooltip_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(81)
		tmp4->stage->addEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp5,null(),null(),null());
		HX_STACK_LINE(84)
		this->renderTo = null();
		HX_STACK_LINE(86)
		this->refresh();
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(87)
			Float tmp7 = tmp6->get_mouseX();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(87)
			Float tmp8 = (tmp7 + (int)10);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(87)
			Float tmp9 = this->get_w();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(87)
			::openfl::display::MovieClip tmp11 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(87)
			int tmp12 = tmp11->stage->stageWidth;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(87)
			bool tmp13 = (tmp10 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(87)
			Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(87)
			if ((tmp13)){
				HX_STACK_LINE(87)
				::openfl::display::MovieClip tmp15 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(87)
				Float tmp16 = tmp15->get_mouseX();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(87)
				tmp14 = (tmp16 + (int)10);
			}
			else{
				HX_STACK_LINE(87)
				::openfl::display::MovieClip tmp15 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(87)
				int tmp16 = tmp15->stage->stageWidth;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(87)
				Float tmp17 = this->get_w();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(87)
				tmp14 = (tmp16 - tmp17);
			}
			HX_STACK_LINE(87)
			this->set_left(tmp14);
			HX_STACK_LINE(87)
			::openfl::display::MovieClip tmp15 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(87)
			Float tmp16 = tmp15->get_mouseY();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(87)
			Float tmp17 = (tmp16 + (int)10);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(87)
			Float tmp18 = this->get_h();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(87)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(87)
			::openfl::display::MovieClip tmp20 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(87)
			int tmp21 = tmp20->stage->stageHeight;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(87)
			bool tmp22 = (tmp19 <= tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(87)
			Float tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(87)
			if ((tmp22)){
				HX_STACK_LINE(87)
				::openfl::display::MovieClip tmp24 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(87)
				Float tmp25 = tmp24->get_mouseY();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(87)
				tmp23 = (tmp25 + (int)10);
			}
			else{
				HX_STACK_LINE(87)
				::openfl::display::MovieClip tmp24 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(87)
				Float tmp25 = tmp24->get_mouseY();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(87)
				Float tmp26 = (tmp25 - (int)10);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(87)
				Float tmp27 = this->get_h();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(87)
				tmp23 = (tmp26 - tmp27);
			}
			HX_STACK_LINE(87)
			this->set_top(tmp23);
		}
		HX_STACK_LINE(89)
		this->show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,showTooltip,(void))

Void Tip_obj::moveTooltip( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","moveTooltip",0x18627d22,"ru.stablex.ui.widgets.Tip.moveTooltip","ru/stablex/ui/widgets/Tip.hx",98,0x1937d520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(98)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		Float tmp1 = tmp->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		Float tmp2 = (tmp1 + (int)10);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		Float tmp3 = this->get_w();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		::openfl::display::MovieClip tmp5 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		int tmp6 = tmp5->stage->stageWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		bool tmp7 = (tmp4 <= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(98)
		if ((tmp7)){
			HX_STACK_LINE(98)
			::openfl::display::MovieClip tmp9 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(98)
			Float tmp10 = tmp9->get_mouseX();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(98)
			tmp8 = (tmp10 + (int)10);
		}
		else{
			HX_STACK_LINE(98)
			::openfl::display::MovieClip tmp9 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(98)
			int tmp10 = tmp9->stage->stageWidth;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(98)
			Float tmp11 = this->get_w();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(98)
			tmp8 = (tmp10 - tmp11);
		}
		HX_STACK_LINE(98)
		this->set_left(tmp8);
		HX_STACK_LINE(98)
		::openfl::display::MovieClip tmp9 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(98)
		Float tmp10 = tmp9->get_mouseY();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(98)
		Float tmp11 = (tmp10 + (int)10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(98)
		Float tmp12 = this->get_h();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(98)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(98)
		::openfl::display::MovieClip tmp14 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(98)
		int tmp15 = tmp14->stage->stageHeight;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(98)
		bool tmp16 = (tmp13 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(98)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(98)
		if ((tmp16)){
			HX_STACK_LINE(98)
			::openfl::display::MovieClip tmp18 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(98)
			Float tmp19 = tmp18->get_mouseY();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(98)
			tmp17 = (tmp19 + (int)10);
		}
		else{
			HX_STACK_LINE(98)
			::openfl::display::MovieClip tmp18 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(98)
			Float tmp19 = tmp18->get_mouseY();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(98)
			Float tmp20 = (tmp19 - (int)10);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(98)
			Float tmp21 = this->get_h();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(98)
			tmp17 = (tmp20 - tmp21);
		}
		HX_STACK_LINE(98)
		this->set_top(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,moveTooltip,(void))

Void Tip_obj::hideTooltip( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","hideTooltip",0x3d523391,"ru.stablex.ui.widgets.Tip.hideTooltip","ru/stablex/ui/widgets/Tip.hx",106,0x1937d520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(107)
		::ru::stablex::ui::widgets::Widget tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		Dynamic tmp1 = this->hideTooltip_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		tmp->removeEventListener(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"),tmp1,null());
		HX_STACK_LINE(108)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(108)
		Dynamic tmp3 = this->moveTooltip_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(108)
		tmp2->stage->removeEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp3,null());
		HX_STACK_LINE(109)
		this->hide();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,hideTooltip,(void))

Void Tip_obj::_adjustPosition( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","_adjustPosition",0x21590827,"ru.stablex.ui.widgets.Tip._adjustPosition","ru/stablex/ui/widgets/Tip.hx",117,0x1937d520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		Float tmp1 = tmp->get_mouseX();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		Float tmp2 = (tmp1 + (int)10);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		Float tmp3 = this->get_w();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		::openfl::display::MovieClip tmp5 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		int tmp6 = tmp5->stage->stageWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(119)
		bool tmp7 = (tmp4 <= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		Float tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(119)
		if ((tmp7)){
			HX_STACK_LINE(120)
			::openfl::display::MovieClip tmp9 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(120)
			Float tmp10 = tmp9->get_mouseX();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(120)
			tmp8 = (tmp10 + (int)10);
		}
		else{
			HX_STACK_LINE(121)
			::openfl::display::MovieClip tmp9 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(121)
			int tmp10 = tmp9->stage->stageWidth;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(121)
			Float tmp11 = this->get_w();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(121)
			tmp8 = (tmp10 - tmp11);
		}
		HX_STACK_LINE(118)
		this->set_left(tmp8);
		HX_STACK_LINE(124)
		::openfl::display::MovieClip tmp9 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(124)
		Float tmp10 = tmp9->get_mouseY();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(124)
		Float tmp11 = (tmp10 + (int)10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(124)
		Float tmp12 = this->get_h();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(124)
		Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(124)
		::openfl::display::MovieClip tmp14 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(124)
		int tmp15 = tmp14->stage->stageHeight;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(124)
		bool tmp16 = (tmp13 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(123)
		Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(124)
		if ((tmp16)){
			HX_STACK_LINE(125)
			::openfl::display::MovieClip tmp18 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(125)
			Float tmp19 = tmp18->get_mouseY();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(125)
			tmp17 = (tmp19 + (int)10);
		}
		else{
			HX_STACK_LINE(126)
			::openfl::display::MovieClip tmp18 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(126)
			Float tmp19 = tmp18->get_mouseY();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(126)
			Float tmp20 = (tmp19 - (int)10);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(126)
			Float tmp21 = this->get_h();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(126)
			tmp17 = (tmp20 - tmp21);
		}
		HX_STACK_LINE(123)
		this->set_top(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tip_obj,_adjustPosition,(void))

Void Tip_obj::freeTooltip( ::ru::stablex::ui::events::WidgetEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","freeTooltip",0xd124fce7,"ru.stablex.ui.widgets.Tip.freeTooltip","ru/stablex/ui/widgets/Tip.hx",136,0x1937d520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(136)
		this->free(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tip_obj,freeTooltip,(void))

Void Tip_obj::_removeTargetListeners( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","_removeTargetListeners",0x4d0da81b,"ru.stablex.ui.widgets.Tip._removeTargetListeners","ru/stablex/ui/widgets/Tip.hx",144,0x1937d520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		::ru::stablex::ui::widgets::Widget tmp = this->target;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		if ((tmp1)){
			HX_STACK_LINE(146)
			::ru::stablex::ui::widgets::Widget tmp2 = this->target;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(146)
			Dynamic tmp3 = this->hideTooltip_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(146)
			tmp2->removeEventListener(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"),tmp3,null());
			HX_STACK_LINE(147)
			::ru::stablex::ui::widgets::Widget tmp4 = this->target;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			Dynamic tmp5 = this->showTooltip_dyn();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			tmp4->removeEventListener(HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6"),tmp5,null());
			HX_STACK_LINE(148)
			::ru::stablex::ui::widgets::Widget tmp6 = this->target;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			Dynamic tmp7 = this->freeTooltip_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			tmp6->removeEventListener(HX_HCSTRING("widgetFree","\x90","\xaa","\x9b","\x55"),tmp7,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tip_obj,_removeTargetListeners,(void))

Void Tip_obj::free( hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","free",0xe375ff7c,"ru.stablex.ui.widgets.Tip.free","ru/stablex/ui/widgets/Tip.hx",157,0x1937d520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(158)
		this->_removeTargetListeners();
		HX_STACK_LINE(159)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		Dynamic tmp1 = this->moveTooltip_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(159)
		tmp->stage->removeEventListener(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp1,null());
		HX_STACK_LINE(161)
		bool tmp2 = recursive;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		this->super::free(tmp2);
	}
return null();
}


Void Tip_obj::refresh( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Tip","refresh",0x2fb3190b,"ru.stablex.ui.widgets.Tip.refresh","ru/stablex/ui/widgets/Tip.hx",169,0x1937d520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		::ru::stablex::ui::widgets::Text tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(170)
		tmp->refresh();
		HX_STACK_LINE(171)
		this->super::refresh();
	}
return null();
}



Tip_obj::Tip_obj()
{
}

void Tip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tip);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(label,"label");
	::ru::stablex::ui::widgets::Floating_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(label,"label");
	::ru::stablex::ui::widgets::Floating_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tip_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"bindTo") ) { return bindTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showTooltip") ) { return showTooltip_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTooltip") ) { return moveTooltip_dyn(); }
		if (HX_FIELD_EQ(inName,"hideTooltip") ) { return hideTooltip_dyn(); }
		if (HX_FIELD_EQ(inName,"freeTooltip") ) { return freeTooltip_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_adjustPosition") ) { return _adjustPosition_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_removeTargetListeners") ) { return _removeTargetListeners_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tip_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::ru::stablex::ui::widgets::Text >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::ru::stablex::ui::widgets::Widget >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::ru::stablex::ui::widgets::Widget*/ ,(int)offsetof(Tip_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*::ru::stablex::ui::widgets::Text*/ ,(int)offsetof(Tip_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("bindTo","\x98","\xe8","\x0d","\xed"),
	HX_HCSTRING("showTooltip","\x86","\x49","\x28","\x47"),
	HX_HCSTRING("moveTooltip","\xf2","\xe5","\x08","\x43"),
	HX_HCSTRING("hideTooltip","\x61","\x9c","\xf8","\x67"),
	HX_HCSTRING("_adjustPosition","\xf7","\x18","\xac","\x06"),
	HX_HCSTRING("freeTooltip","\xb7","\x65","\xcb","\xfb"),
	HX_HCSTRING("_removeTargetListeners","\x4b","\x51","\x39","\xa8"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tip_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tip_obj::__mClass,"__mClass");
};

#endif

hx::Class Tip_obj::__mClass;

void Tip_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.widgets.Tip","\x9e","\xef","\x7b","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tip_obj >;
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
