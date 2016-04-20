#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_UIBuilder
#include <ru/stablex/ui/UIBuilder.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_skins_Skin
#include <ru/stablex/ui/skins/Skin.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Bmp
#include <ru/stablex/ui/widgets/Bmp.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Box
#include <ru/stablex/ui/widgets/Box.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Button
#include <ru/stablex/ui/widgets/Button.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Text
#include <ru/stablex/ui/widgets/Text.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{

Void Button_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.ui.widgets.Button","new",0xf596f401,"ru.stablex.ui.widgets.Button.new","ru/stablex/ui/widgets/Button.hx",13,0xa0cc634f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(53)
	this->apart = false;
	HX_STACK_LINE(39)
	this->icoBeforeLabel = true;
	HX_STACK_LINE(22)
	this->_mouseChildrenBeforeDisabled = false;
	HX_STACK_LINE(20)
	this->disabled = false;
	HX_STACK_LINE(18)
	this->hovered = false;
	HX_STACK_LINE(16)
	this->pressed = false;
	HX_STACK_LINE(172)
	super::__construct();
	HX_STACK_LINE(174)
	this->vertical = false;
	HX_STACK_LINE(176)
	this->set_padding((int)2);
	HX_STACK_LINE(177)
	this->childPadding = (int)5;
	HX_STACK_LINE(178)
	::openfl::text::TextField tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	tmp->set_selectable(false);
	HX_STACK_LINE(180)
	bool tmp1 = this->useHandCursor = true;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	this->buttonMode = tmp1;
	HX_STACK_LINE(181)
	this->mouseChildren = false;
	HX_STACK_LINE(184)
	Dynamic tmp2 = ::ru::stablex::ui::widgets::Button_obj::_onHover_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	this->addEventListener(HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6"),tmp2,null(),null(),null());
	HX_STACK_LINE(185)
	Dynamic tmp3 = ::ru::stablex::ui::widgets::Button_obj::_onHout_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(185)
	this->addEventListener(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"),tmp3,null(),null(),null());
	HX_STACK_LINE(186)
	Dynamic tmp4 = ::ru::stablex::ui::widgets::Button_obj::_onPress_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(186)
	this->addEventListener(HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),tmp4,null(),null(),null());
	HX_STACK_LINE(187)
	Dynamic tmp5 = ::ru::stablex::ui::widgets::Button_obj::_onRelease_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(187)
	this->addEventListener(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"),tmp5,null(),null(),null());
	HX_STACK_LINE(188)
	Dynamic tmp6 = ::ru::stablex::ui::widgets::Button_obj::_onRelease_dyn();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(188)
	this->addEventListener(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),tmp6,null(),null(),null());
	HX_STACK_LINE(194)
	this->pressed = false;
	HX_STACK_LINE(195)
	this->hovered = false;
	HX_STACK_LINE(196)
	this->set_disabled(false);
	HX_STACK_LINE(198)
	this->align = HX_HCSTRING("center,middle","\x4c","\xab","\x0b","\x8f");
}
;
	return null();
}

//Button_obj::~Button_obj() { }

Dynamic Button_obj::__CreateEmpty() { return  new Button_obj; }
hx::ObjectPtr< Button_obj > Button_obj::__new()
{  hx::ObjectPtr< Button_obj > _result_ = new Button_obj();
	_result_->__construct();
	return _result_;}

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Button_obj > _result_ = new Button_obj();
	_result_->__construct();
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_onPress,Button_obj)
Void run(::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","onPress",0x6b59fa05,"ru.stablex.ui.widgets.Button.onPress","ru/stablex/ui/widgets/Button.hx",206,0xa0cc634f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onRelease,Button_obj)
Void run(::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","onRelease",0x905750c9,"ru.stablex.ui.widgets.Button.onRelease","ru/stablex/ui/widgets/Button.hx",217,0xa0cc634f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onHover,Button_obj)
Void run(::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","onHover",0xce368c3e,"ru.stablex.ui.widgets.Button.onHover","ru/stablex/ui/widgets/Button.hx",228,0xa0cc634f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onHout,Button_obj)
Void run(::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","onHout",0xeb1cf0e4,"ru.stablex.ui.widgets.Button.onHout","ru/stablex/ui/widgets/Button.hx",237,0xa0cc634f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

bool Button_obj::set_disabled( bool disabled){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","set_disabled",0x2dacf938,"ru.stablex.ui.widgets.Button.set_disabled","ru/stablex/ui/widgets/Button.hx",246,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(disabled,"disabled")
	HX_STACK_LINE(247)
	bool tmp = disabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(247)
	if ((tmp)){
		HX_STACK_LINE(248)
		bool tmp1 = this->disabled;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(248)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(248)
		if ((tmp2)){
			HX_STACK_LINE(249)
			bool tmp3 = this->mouseChildren;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(249)
			this->_mouseChildrenBeforeDisabled = tmp3;
		}
		HX_STACK_LINE(251)
		this->mouseEnabled = false;
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			::ru::stablex::ui::widgets::Bmp tmp3 = this->_icoDisabled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(252)
			::ru::stablex::ui::widgets::Bmp ico = tmp3;		HX_STACK_VAR(ico,"ico");
			HX_STACK_LINE(252)
			::ru::stablex::ui::widgets::Bmp tmp4 = this->_ico;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(252)
			if ((tmp5)){
				HX_STACK_LINE(252)
				::ru::stablex::ui::widgets::Bmp tmp6 = this->_ico;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(252)
				tmp6->set_visible(false);
			}
			HX_STACK_LINE(252)
			::ru::stablex::ui::widgets::Bmp tmp6 = this->_icoHovered;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(252)
			if ((tmp7)){
				HX_STACK_LINE(252)
				::ru::stablex::ui::widgets::Bmp tmp8 = this->_icoHovered;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(252)
				tmp8->set_visible(false);
			}
			HX_STACK_LINE(252)
			::ru::stablex::ui::widgets::Bmp tmp8 = this->_icoPressed;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(252)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(252)
			if ((tmp9)){
				HX_STACK_LINE(252)
				::ru::stablex::ui::widgets::Bmp tmp10 = this->_icoPressed;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(252)
				tmp10->set_visible(false);
			}
			HX_STACK_LINE(252)
			::ru::stablex::ui::widgets::Bmp tmp10 = this->_icoDisabled;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(252)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(252)
			if ((tmp11)){
				HX_STACK_LINE(252)
				::ru::stablex::ui::widgets::Bmp tmp12 = this->_icoDisabled;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(252)
				tmp12->set_visible(false);
			}
			HX_STACK_LINE(252)
			bool tmp12 = (ico != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(252)
			if ((tmp12)){
				HX_STACK_LINE(252)
				ico->set_visible(true);
			}
			else{
				HX_STACK_LINE(252)
				::ru::stablex::ui::widgets::Bmp tmp13 = this->_ico;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(252)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(252)
				if ((tmp14)){
					HX_STACK_LINE(252)
					::ru::stablex::ui::widgets::Bmp tmp15 = this->_ico;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(252)
					tmp15->set_visible(true);
				}
			}
			HX_STACK_LINE(252)
			this->alignElements();
		}
		HX_STACK_LINE(253)
		{
			HX_STACK_LINE(253)
			::ru::stablex::ui::skins::Skin tmp3 = this->skinDisabled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(253)
			::ru::stablex::ui::skins::Skin skin = tmp3;		HX_STACK_VAR(skin,"skin");
			HX_STACK_LINE(253)
			bool tmp4 = (skin != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(253)
			if ((tmp4)){
				HX_STACK_LINE(253)
				skin->apply(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(253)
				bool tmp5 = (skin == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(253)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(253)
				if ((tmp5)){
					HX_STACK_LINE(253)
					::ru::stablex::ui::skins::Skin tmp7 = this->skin;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(253)
					::ru::stablex::ui::skins::Skin tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(253)
					tmp6 = (tmp8 != null());
				}
				else{
					HX_STACK_LINE(253)
					tmp6 = false;
				}
				HX_STACK_LINE(253)
				if ((tmp6)){
					HX_STACK_LINE(253)
					::ru::stablex::ui::skins::Skin tmp7 = this->skin;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(253)
					tmp7->apply(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	else{
		HX_STACK_LINE(255)
		bool tmp1 = this->disabled;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		if ((tmp1)){
			HX_STACK_LINE(256)
			bool tmp2 = this->_mouseChildrenBeforeDisabled;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			this->mouseChildren = tmp2;
		}
		HX_STACK_LINE(258)
		this->mouseEnabled = true;
		HX_STACK_LINE(259)
		{
			HX_STACK_LINE(259)
			::ru::stablex::ui::widgets::Bmp tmp2 = this->_ico;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(259)
			::ru::stablex::ui::widgets::Bmp ico = tmp2;		HX_STACK_VAR(ico,"ico");
			HX_STACK_LINE(259)
			::ru::stablex::ui::widgets::Bmp tmp3 = this->_ico;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(259)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(259)
			if ((tmp4)){
				HX_STACK_LINE(259)
				::ru::stablex::ui::widgets::Bmp tmp5 = this->_ico;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(259)
				tmp5->set_visible(false);
			}
			HX_STACK_LINE(259)
			::ru::stablex::ui::widgets::Bmp tmp5 = this->_icoHovered;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(259)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(259)
			if ((tmp6)){
				HX_STACK_LINE(259)
				::ru::stablex::ui::widgets::Bmp tmp7 = this->_icoHovered;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(259)
				tmp7->set_visible(false);
			}
			HX_STACK_LINE(259)
			::ru::stablex::ui::widgets::Bmp tmp7 = this->_icoPressed;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(259)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(259)
			if ((tmp8)){
				HX_STACK_LINE(259)
				::ru::stablex::ui::widgets::Bmp tmp9 = this->_icoPressed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(259)
				tmp9->set_visible(false);
			}
			HX_STACK_LINE(259)
			::ru::stablex::ui::widgets::Bmp tmp9 = this->_icoDisabled;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(259)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(259)
			if ((tmp10)){
				HX_STACK_LINE(259)
				::ru::stablex::ui::widgets::Bmp tmp11 = this->_icoDisabled;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(259)
				tmp11->set_visible(false);
			}
			HX_STACK_LINE(259)
			bool tmp11 = (ico != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(259)
			if ((tmp11)){
				HX_STACK_LINE(259)
				ico->set_visible(true);
			}
			else{
				HX_STACK_LINE(259)
				::ru::stablex::ui::widgets::Bmp tmp12 = this->_ico;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(259)
				bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(259)
				if ((tmp13)){
					HX_STACK_LINE(259)
					::ru::stablex::ui::widgets::Bmp tmp14 = this->_ico;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(259)
					tmp14->set_visible(true);
				}
			}
			HX_STACK_LINE(259)
			this->alignElements();
		}
		HX_STACK_LINE(260)
		{
			HX_STACK_LINE(260)
			::ru::stablex::ui::skins::Skin tmp2 = this->skin;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(260)
			::ru::stablex::ui::skins::Skin skin = tmp2;		HX_STACK_VAR(skin,"skin");
			HX_STACK_LINE(260)
			bool tmp3 = (skin != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(260)
			if ((tmp3)){
				HX_STACK_LINE(260)
				skin->apply(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(260)
				bool tmp4 = (skin == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(260)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(260)
				if ((tmp4)){
					HX_STACK_LINE(260)
					::ru::stablex::ui::skins::Skin tmp6 = this->skin;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(260)
					::ru::stablex::ui::skins::Skin tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(260)
					tmp5 = (tmp7 != null());
				}
				else{
					HX_STACK_LINE(260)
					tmp5 = false;
				}
				HX_STACK_LINE(260)
				if ((tmp5)){
					HX_STACK_LINE(260)
					::ru::stablex::ui::skins::Skin tmp6 = this->skin;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(260)
					tmp6->apply(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
	HX_STACK_LINE(263)
	bool tmp1 = this->disabled = disabled;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(263)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_disabled,return )

bool Button_obj::set_icoBeforeLabel( bool ibl){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","set_icoBeforeLabel",0xef16845c,"ru.stablex.ui.widgets.Button.set_icoBeforeLabel","ru/stablex/ui/widgets/Button.hx",271,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ibl,"ibl")
	HX_STACK_LINE(272)
	bool tmp = ibl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	if ((tmp)){
		HX_STACK_LINE(273)
		::openfl::text::TextField tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(273)
		int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		this->setChildIndex(tmp1,tmp3);
	}
	else{
		HX_STACK_LINE(275)
		::openfl::text::TextField tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		this->setChildIndex(tmp1,(int)0);
	}
	HX_STACK_LINE(278)
	bool tmp1 = this->icoBeforeLabel = ibl;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(278)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_icoBeforeLabel,return )

::ru::stablex::ui::widgets::Bmp Button_obj::get_ico( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","get_ico",0x3358d40d,"ru.stablex.ui.widgets.Button.get_ico","ru/stablex/ui/widgets/Button.hx",286,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	::ru::stablex::ui::widgets::Bmp tmp = this->_ico;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(288)
	if ((tmp1)){
		HX_STACK_LINE(289)
		::ru::stablex::ui::widgets::Bmp tmp2 = ::ru::stablex::ui::UIBuilder_obj::create(hx::ClassOf< ::ru::stablex::ui::widgets::Bmp >(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		this->_ico = tmp2;
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			::ru::stablex::ui::widgets::Bmp tmp3 = this->_ico;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(290)
			::ru::stablex::ui::widgets::Bmp ico = tmp3;		HX_STACK_VAR(ico,"ico");
			HX_STACK_LINE(290)
			bool tmp4 = this->icoBeforeLabel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			if ((tmp4)){
				HX_STACK_LINE(290)
				::ru::stablex::ui::widgets::Bmp tmp5 = ico;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(290)
				this->addChildAt(tmp5,(int)0);
			}
			else{
				HX_STACK_LINE(290)
				::ru::stablex::ui::widgets::Bmp tmp5 = ico;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(290)
				this->addChild(tmp5);
			}
		}
	}
	HX_STACK_LINE(293)
	::ru::stablex::ui::widgets::Bmp tmp2 = this->_ico;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(293)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_ico,return )

::ru::stablex::ui::widgets::Bmp Button_obj::set_ico( ::ru::stablex::ui::widgets::Bmp ico){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","set_ico",0x265a6519,"ru.stablex.ui.widgets.Button.set_ico","ru/stablex/ui/widgets/Button.hx",301,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ico,"ico")
	HX_STACK_LINE(303)
	::ru::stablex::ui::widgets::Bmp tmp = this->_ico;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(303)
	if ((tmp1)){
		HX_STACK_LINE(304)
		::ru::stablex::ui::widgets::Bmp tmp2 = this->_ico;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(304)
		tmp2->free(null());
	}
	HX_STACK_LINE(307)
	bool tmp2 = (ico != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(307)
	if ((tmp2)){
		HX_STACK_LINE(308)
		bool tmp3 = this->icoBeforeLabel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(308)
		if ((tmp3)){
			HX_STACK_LINE(308)
			::ru::stablex::ui::widgets::Bmp tmp4 = ico;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			this->addChildAt(tmp4,(int)0);
		}
		else{
			HX_STACK_LINE(308)
			::ru::stablex::ui::widgets::Bmp tmp4 = ico;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			this->addChild(tmp4);
		}
	}
	HX_STACK_LINE(311)
	::ru::stablex::ui::widgets::Bmp tmp3 = this->_ico = ico;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(311)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_ico,return )

::ru::stablex::ui::widgets::Bmp Button_obj::get_icoHovered( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","get_icoHovered",0x5dc1c48e,"ru.stablex.ui.widgets.Button.get_icoHovered","ru/stablex/ui/widgets/Button.hx",319,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(321)
	::ru::stablex::ui::widgets::Bmp tmp = this->_icoHovered;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(321)
	if ((tmp1)){
		HX_STACK_LINE(322)
		::ru::stablex::ui::widgets::Bmp tmp2 = ::ru::stablex::ui::UIBuilder_obj::create(hx::ClassOf< ::ru::stablex::ui::widgets::Bmp >(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(322)
		this->_icoHovered = tmp2;
		HX_STACK_LINE(323)
		::ru::stablex::ui::widgets::Bmp tmp3 = this->_icoHovered;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(323)
		tmp3->set_visible(false);
		HX_STACK_LINE(324)
		{
			HX_STACK_LINE(324)
			::ru::stablex::ui::widgets::Bmp tmp4 = this->_icoHovered;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(324)
			::ru::stablex::ui::widgets::Bmp ico = tmp4;		HX_STACK_VAR(ico,"ico");
			HX_STACK_LINE(324)
			bool tmp5 = this->icoBeforeLabel;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(324)
			if ((tmp5)){
				HX_STACK_LINE(324)
				::ru::stablex::ui::widgets::Bmp tmp6 = ico;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(324)
				this->addChildAt(tmp6,(int)0);
			}
			else{
				HX_STACK_LINE(324)
				::ru::stablex::ui::widgets::Bmp tmp6 = ico;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(324)
				this->addChild(tmp6);
			}
		}
	}
	HX_STACK_LINE(327)
	::ru::stablex::ui::widgets::Bmp tmp2 = this->_icoHovered;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(327)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_icoHovered,return )

::ru::stablex::ui::widgets::Bmp Button_obj::set_icoHovered( ::ru::stablex::ui::widgets::Bmp ico){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","set_icoHovered",0x7de1ad02,"ru.stablex.ui.widgets.Button.set_icoHovered","ru/stablex/ui/widgets/Button.hx",335,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ico,"ico")
	HX_STACK_LINE(337)
	::ru::stablex::ui::widgets::Bmp tmp = this->_icoHovered;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(337)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(337)
	if ((tmp1)){
		HX_STACK_LINE(338)
		::ru::stablex::ui::widgets::Bmp tmp2 = this->_icoHovered;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(338)
		tmp2->free(null());
	}
	HX_STACK_LINE(341)
	bool tmp2 = (ico != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(341)
	if ((tmp2)){
		HX_STACK_LINE(342)
		bool tmp3 = this->icoBeforeLabel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(342)
		if ((tmp3)){
			HX_STACK_LINE(342)
			::ru::stablex::ui::widgets::Bmp tmp4 = ico;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(342)
			this->addChildAt(tmp4,(int)0);
		}
		else{
			HX_STACK_LINE(342)
			::ru::stablex::ui::widgets::Bmp tmp4 = ico;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(342)
			this->addChild(tmp4);
		}
	}
	HX_STACK_LINE(345)
	::ru::stablex::ui::widgets::Bmp tmp3 = this->_icoHovered = ico;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(345)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_icoHovered,return )

::ru::stablex::ui::widgets::Bmp Button_obj::get_icoPressed( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","get_icoPressed",0x1cf17215,"ru.stablex.ui.widgets.Button.get_icoPressed","ru/stablex/ui/widgets/Button.hx",353,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(355)
	::ru::stablex::ui::widgets::Bmp tmp = this->_icoPressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	if ((tmp1)){
		HX_STACK_LINE(356)
		::ru::stablex::ui::widgets::Bmp tmp2 = ::ru::stablex::ui::UIBuilder_obj::create(hx::ClassOf< ::ru::stablex::ui::widgets::Bmp >(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		this->_icoPressed = tmp2;
		HX_STACK_LINE(357)
		::ru::stablex::ui::widgets::Bmp tmp3 = this->_icoPressed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(357)
		tmp3->set_visible(false);
		HX_STACK_LINE(358)
		{
			HX_STACK_LINE(358)
			::ru::stablex::ui::widgets::Bmp tmp4 = this->_icoPressed;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(358)
			::ru::stablex::ui::widgets::Bmp ico = tmp4;		HX_STACK_VAR(ico,"ico");
			HX_STACK_LINE(358)
			bool tmp5 = this->icoBeforeLabel;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(358)
			if ((tmp5)){
				HX_STACK_LINE(358)
				::ru::stablex::ui::widgets::Bmp tmp6 = ico;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(358)
				this->addChildAt(tmp6,(int)0);
			}
			else{
				HX_STACK_LINE(358)
				::ru::stablex::ui::widgets::Bmp tmp6 = ico;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(358)
				this->addChild(tmp6);
			}
		}
	}
	HX_STACK_LINE(361)
	::ru::stablex::ui::widgets::Bmp tmp2 = this->_icoPressed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(361)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_icoPressed,return )

::ru::stablex::ui::widgets::Bmp Button_obj::set_icoPressed( ::ru::stablex::ui::widgets::Bmp ico){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","set_icoPressed",0x3d115a89,"ru.stablex.ui.widgets.Button.set_icoPressed","ru/stablex/ui/widgets/Button.hx",369,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ico,"ico")
	HX_STACK_LINE(371)
	::ru::stablex::ui::widgets::Bmp tmp = this->_icoPressed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(371)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(371)
	if ((tmp1)){
		HX_STACK_LINE(372)
		::ru::stablex::ui::widgets::Bmp tmp2 = this->_icoPressed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(372)
		tmp2->free(null());
	}
	HX_STACK_LINE(375)
	bool tmp2 = (ico != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(375)
	if ((tmp2)){
		HX_STACK_LINE(376)
		bool tmp3 = this->icoBeforeLabel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(376)
		if ((tmp3)){
			HX_STACK_LINE(376)
			::ru::stablex::ui::widgets::Bmp tmp4 = ico;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			this->addChildAt(tmp4,(int)0);
		}
		else{
			HX_STACK_LINE(376)
			::ru::stablex::ui::widgets::Bmp tmp4 = ico;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(376)
			this->addChild(tmp4);
		}
	}
	HX_STACK_LINE(379)
	::ru::stablex::ui::widgets::Bmp tmp3 = this->_icoPressed = ico;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(379)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_icoPressed,return )

::ru::stablex::ui::widgets::Bmp Button_obj::get_icoDisabled( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","get_icoDisabled",0x424526a9,"ru.stablex.ui.widgets.Button.get_icoDisabled","ru/stablex/ui/widgets/Button.hx",387,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(389)
	::ru::stablex::ui::widgets::Bmp tmp = this->_icoDisabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(389)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(389)
	if ((tmp1)){
		HX_STACK_LINE(390)
		::ru::stablex::ui::widgets::Bmp tmp2 = ::ru::stablex::ui::UIBuilder_obj::create(hx::ClassOf< ::ru::stablex::ui::widgets::Bmp >(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(390)
		this->_icoDisabled = tmp2;
		HX_STACK_LINE(391)
		::ru::stablex::ui::widgets::Bmp tmp3 = this->_icoDisabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(391)
		tmp3->set_visible(false);
		HX_STACK_LINE(392)
		{
			HX_STACK_LINE(392)
			::ru::stablex::ui::widgets::Bmp tmp4 = this->_icoDisabled;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(392)
			::ru::stablex::ui::widgets::Bmp ico = tmp4;		HX_STACK_VAR(ico,"ico");
			HX_STACK_LINE(392)
			bool tmp5 = this->icoBeforeLabel;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(392)
			if ((tmp5)){
				HX_STACK_LINE(392)
				::ru::stablex::ui::widgets::Bmp tmp6 = ico;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(392)
				this->addChildAt(tmp6,(int)0);
			}
			else{
				HX_STACK_LINE(392)
				::ru::stablex::ui::widgets::Bmp tmp6 = ico;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(392)
				this->addChild(tmp6);
			}
		}
	}
	HX_STACK_LINE(395)
	::ru::stablex::ui::widgets::Bmp tmp2 = this->_icoDisabled;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(395)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_icoDisabled,return )

::ru::stablex::ui::widgets::Bmp Button_obj::set_icoDisabled( ::ru::stablex::ui::widgets::Bmp ico){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","set_icoDisabled",0x3e10a3b5,"ru.stablex.ui.widgets.Button.set_icoDisabled","ru/stablex/ui/widgets/Button.hx",403,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ico,"ico")
	HX_STACK_LINE(405)
	::ru::stablex::ui::widgets::Bmp tmp = this->_icoDisabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(405)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(405)
	if ((tmp1)){
		HX_STACK_LINE(406)
		::ru::stablex::ui::widgets::Bmp tmp2 = this->_icoDisabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(406)
		tmp2->free(null());
	}
	HX_STACK_LINE(409)
	bool tmp2 = (ico != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(409)
	if ((tmp2)){
		HX_STACK_LINE(410)
		bool tmp3 = this->icoBeforeLabel;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(410)
		if ((tmp3)){
			HX_STACK_LINE(410)
			::ru::stablex::ui::widgets::Bmp tmp4 = ico;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(410)
			this->addChildAt(tmp4,(int)0);
		}
		else{
			HX_STACK_LINE(410)
			::ru::stablex::ui::widgets::Bmp tmp4 = ico;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(410)
			this->addChild(tmp4);
		}
	}
	HX_STACK_LINE(412)
	::ru::stablex::ui::widgets::Bmp tmp3 = this->_icoDisabled = ico;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(412)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_icoDisabled,return )

::String Button_obj::set_skinHoveredName( ::String s){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","set_skinHoveredName",0xa531ad4d,"ru.stablex.ui.widgets.Button.set_skinHoveredName","ru/stablex/ui/widgets/Button.hx",420,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(421)
	::haxe::ds::StringMap tmp = ::ru::stablex::ui::UIBuilder_obj::skins;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(421)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(421)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(421)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(421)
	::ru::stablex::ui::skins::Skin tmp4 = tmp3().Cast< ::ru::stablex::ui::skins::Skin >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(421)
	this->skinHovered = tmp4;
	HX_STACK_LINE(422)
	::String tmp5 = this->skinHoveredName = s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(422)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_skinHoveredName,return )

::String Button_obj::set_skinPressedName( ::String s){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","set_skinPressedName",0x35542a54,"ru.stablex.ui.widgets.Button.set_skinPressedName","ru/stablex/ui/widgets/Button.hx",430,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(431)
	::haxe::ds::StringMap tmp = ::ru::stablex::ui::UIBuilder_obj::skins;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(431)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(431)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(431)
	::ru::stablex::ui::skins::Skin tmp4 = tmp3().Cast< ::ru::stablex::ui::skins::Skin >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(431)
	this->skinPressed = tmp4;
	HX_STACK_LINE(432)
	::String tmp5 = this->skinPressedName = s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(432)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_skinPressedName,return )

::String Button_obj::set_skinDisabledName( ::String s){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Button","set_skinDisabledName",0xe1efcbc0,"ru.stablex.ui.widgets.Button.set_skinDisabledName","ru/stablex/ui/widgets/Button.hx",439,0xa0cc634f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(440)
	::haxe::ds::StringMap tmp = ::ru::stablex::ui::UIBuilder_obj::skins;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(440)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(440)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(440)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(440)
	::ru::stablex::ui::skins::Skin tmp4 = tmp3().Cast< ::ru::stablex::ui::skins::Skin >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(440)
	this->skinDisabled = tmp4;
	HX_STACK_LINE(441)
	::String tmp5 = this->skinDisabledName = s;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(441)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_skinDisabledName,return )

Void Button_obj::_addIco( ::ru::stablex::ui::widgets::Bmp ico){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","_addIco",0x1a0c2d74,"ru.stablex.ui.widgets.Button._addIco","ru/stablex/ui/widgets/Button.hx",448,0xa0cc634f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ico,"ico")
		HX_STACK_LINE(449)
		bool tmp = this->icoBeforeLabel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(449)
		if ((tmp)){
			HX_STACK_LINE(450)
			::ru::stablex::ui::widgets::Bmp tmp1 = ico;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(450)
			this->addChildAt(tmp1,(int)0);
		}
		else{
			HX_STACK_LINE(452)
			::ru::stablex::ui::widgets::Bmp tmp1 = ico;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(452)
			this->addChild(tmp1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_addIco,(void))

Void Button_obj::_switchIco( ::ru::stablex::ui::widgets::Bmp ico){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","_switchIco",0xd14da001,"ru.stablex.ui.widgets.Button._switchIco","ru/stablex/ui/widgets/Button.hx",461,0xa0cc634f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ico,"ico")
		HX_STACK_LINE(462)
		::ru::stablex::ui::widgets::Bmp tmp = this->_ico;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(462)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(462)
		if ((tmp1)){
			HX_STACK_LINE(462)
			::ru::stablex::ui::widgets::Bmp tmp2 = this->_ico;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(462)
			tmp2->set_visible(false);
		}
		HX_STACK_LINE(463)
		::ru::stablex::ui::widgets::Bmp tmp2 = this->_icoHovered;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(463)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(463)
		if ((tmp3)){
			HX_STACK_LINE(463)
			::ru::stablex::ui::widgets::Bmp tmp4 = this->_icoHovered;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(463)
			tmp4->set_visible(false);
		}
		HX_STACK_LINE(464)
		::ru::stablex::ui::widgets::Bmp tmp4 = this->_icoPressed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(464)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(464)
		if ((tmp5)){
			HX_STACK_LINE(464)
			::ru::stablex::ui::widgets::Bmp tmp6 = this->_icoPressed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(464)
			tmp6->set_visible(false);
		}
		HX_STACK_LINE(465)
		::ru::stablex::ui::widgets::Bmp tmp6 = this->_icoDisabled;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(465)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(465)
		if ((tmp7)){
			HX_STACK_LINE(465)
			::ru::stablex::ui::widgets::Bmp tmp8 = this->_icoDisabled;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(465)
			tmp8->set_visible(false);
		}
		HX_STACK_LINE(467)
		bool tmp8 = (ico != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(467)
		if ((tmp8)){
			HX_STACK_LINE(468)
			ico->set_visible(true);
		}
		else{
			HX_STACK_LINE(469)
			::ru::stablex::ui::widgets::Bmp tmp9 = this->_ico;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(469)
			bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(469)
			if ((tmp10)){
				HX_STACK_LINE(470)
				::ru::stablex::ui::widgets::Bmp tmp11 = this->_ico;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(470)
				tmp11->set_visible(true);
			}
		}
		HX_STACK_LINE(473)
		this->alignElements();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_switchIco,(void))

Void Button_obj::_switchSkin( ::ru::stablex::ui::skins::Skin skin){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","_switchSkin",0x59409051,"ru.stablex.ui.widgets.Button._switchSkin","ru/stablex/ui/widgets/Button.hx",481,0xa0cc634f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(skin,"skin")
		HX_STACK_LINE(482)
		bool tmp = (skin != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(482)
		if ((tmp)){
			HX_STACK_LINE(483)
			skin->apply(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(484)
			bool tmp1 = (skin == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(484)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(484)
			if ((tmp1)){
				HX_STACK_LINE(484)
				::ru::stablex::ui::skins::Skin tmp3 = this->skin;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(484)
				::ru::stablex::ui::skins::Skin tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(484)
				tmp2 = (tmp4 != null());
			}
			else{
				HX_STACK_LINE(484)
				tmp2 = false;
			}
			HX_STACK_LINE(484)
			if ((tmp2)){
				HX_STACK_LINE(485)
				::ru::stablex::ui::skins::Skin tmp3 = this->skin;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(485)
				tmp3->apply(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_switchSkin,(void))

Void Button_obj::refresh( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","refresh",0xf9b4e1fc,"ru.stablex.ui.widgets.Button.refresh","ru/stablex/ui/widgets/Button.hx",494,0xa0cc634f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(495)
		::ru::stablex::ui::widgets::Bmp tmp = this->_ico;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(495)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(495)
		if ((tmp1)){
			HX_STACK_LINE(495)
			::ru::stablex::ui::widgets::Bmp tmp2 = this->_ico;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(495)
			tmp2->refresh();
		}
		HX_STACK_LINE(496)
		::ru::stablex::ui::widgets::Bmp tmp2 = this->_icoHovered;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(496)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(496)
		if ((tmp3)){
			HX_STACK_LINE(496)
			::ru::stablex::ui::widgets::Bmp tmp4 = this->_icoHovered;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(496)
			tmp4->refresh();
		}
		HX_STACK_LINE(497)
		::ru::stablex::ui::widgets::Bmp tmp4 = this->_icoPressed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(497)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		if ((tmp5)){
			HX_STACK_LINE(497)
			::ru::stablex::ui::widgets::Bmp tmp6 = this->_icoPressed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(497)
			tmp6->refresh();
		}
		HX_STACK_LINE(498)
		::ru::stablex::ui::widgets::Bmp tmp6 = this->_icoDisabled;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(498)
		if ((tmp7)){
			HX_STACK_LINE(498)
			::ru::stablex::ui::widgets::Bmp tmp8 = this->_icoDisabled;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(498)
			tmp8->refresh();
		}
		HX_STACK_LINE(500)
		this->super::refresh();
	}
return null();
}


Void Button_obj::applySkin( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","applySkin",0x95e3296c,"ru.stablex.ui.widgets.Button.applySkin","ru/stablex/ui/widgets/Button.hx",507,0xa0cc634f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(508)
		bool tmp = this->initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(508)
		if ((tmp)){
			HX_STACK_LINE(509)
			bool tmp1 = this->disabled;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(509)
			if ((tmp1)){
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					::ru::stablex::ui::skins::Skin tmp2 = this->skinDisabled;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(510)
					::ru::stablex::ui::skins::Skin skin = tmp2;		HX_STACK_VAR(skin,"skin");
					HX_STACK_LINE(510)
					bool tmp3 = (skin != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(510)
					if ((tmp3)){
						HX_STACK_LINE(510)
						skin->apply(hx::ObjectPtr<OBJ_>(this));
					}
					else{
						HX_STACK_LINE(510)
						bool tmp4 = (skin == null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(510)
						bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(510)
						if ((tmp4)){
							HX_STACK_LINE(510)
							::ru::stablex::ui::skins::Skin tmp6 = this->skin;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(510)
							::ru::stablex::ui::skins::Skin tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(510)
							tmp5 = (tmp7 != null());
						}
						else{
							HX_STACK_LINE(510)
							tmp5 = false;
						}
						HX_STACK_LINE(510)
						if ((tmp5)){
							HX_STACK_LINE(510)
							::ru::stablex::ui::skins::Skin tmp6 = this->skin;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(510)
							tmp6->apply(hx::ObjectPtr<OBJ_>(this));
						}
					}
				}
				HX_STACK_LINE(511)
				return null();
			}
			HX_STACK_LINE(513)
			bool tmp2 = this->pressed;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(513)
			if ((tmp2)){
				HX_STACK_LINE(514)
				{
					HX_STACK_LINE(514)
					::ru::stablex::ui::skins::Skin tmp3 = this->skinPressed;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(514)
					::ru::stablex::ui::skins::Skin skin = tmp3;		HX_STACK_VAR(skin,"skin");
					HX_STACK_LINE(514)
					bool tmp4 = (skin != null());		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(514)
					if ((tmp4)){
						HX_STACK_LINE(514)
						skin->apply(hx::ObjectPtr<OBJ_>(this));
					}
					else{
						HX_STACK_LINE(514)
						bool tmp5 = (skin == null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(514)
						bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(514)
						if ((tmp5)){
							HX_STACK_LINE(514)
							::ru::stablex::ui::skins::Skin tmp7 = this->skin;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(514)
							::ru::stablex::ui::skins::Skin tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(514)
							tmp6 = (tmp8 != null());
						}
						else{
							HX_STACK_LINE(514)
							tmp6 = false;
						}
						HX_STACK_LINE(514)
						if ((tmp6)){
							HX_STACK_LINE(514)
							::ru::stablex::ui::skins::Skin tmp7 = this->skin;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(514)
							tmp7->apply(hx::ObjectPtr<OBJ_>(this));
						}
					}
				}
				HX_STACK_LINE(515)
				return null();
			}
			HX_STACK_LINE(517)
			bool tmp3 = this->hovered;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(517)
			if ((tmp3)){
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					::ru::stablex::ui::skins::Skin tmp4 = this->skinHovered;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(518)
					::ru::stablex::ui::skins::Skin skin = tmp4;		HX_STACK_VAR(skin,"skin");
					HX_STACK_LINE(518)
					bool tmp5 = (skin != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(518)
					if ((tmp5)){
						HX_STACK_LINE(518)
						skin->apply(hx::ObjectPtr<OBJ_>(this));
					}
					else{
						HX_STACK_LINE(518)
						bool tmp6 = (skin == null());		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(518)
						bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(518)
						if ((tmp6)){
							HX_STACK_LINE(518)
							::ru::stablex::ui::skins::Skin tmp8 = this->skin;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(518)
							::ru::stablex::ui::skins::Skin tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(518)
							tmp7 = (tmp9 != null());
						}
						else{
							HX_STACK_LINE(518)
							tmp7 = false;
						}
						HX_STACK_LINE(518)
						if ((tmp7)){
							HX_STACK_LINE(518)
							::ru::stablex::ui::skins::Skin tmp8 = this->skin;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(518)
							tmp8->apply(hx::ObjectPtr<OBJ_>(this));
						}
					}
				}
				HX_STACK_LINE(519)
				return null();
			}
			HX_STACK_LINE(522)
			this->super::applySkin();
		}
	}
return null();
}


Void Button_obj::alignElements( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","alignElements",0x20a16cfd,"ru.stablex.ui.widgets.Button.alignElements","ru/stablex/ui/widgets/Button.hx",531,0xa0cc634f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(532)
		this->super::alignElements();
		HX_STACK_LINE(534)
		bool tmp = this->apart;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(534)
		if ((tmp)){
			HX_STACK_LINE(535)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(535)
			bool tmp1 = this->icoBeforeLabel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(535)
			if ((tmp1)){
				HX_STACK_LINE(535)
				{
					HX_STACK_LINE(535)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(535)
					int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(535)
					int _g = tmp2;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(535)
					while((true)){
						HX_STACK_LINE(535)
						bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(535)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(535)
						if ((tmp4)){
							HX_STACK_LINE(535)
							break;
						}
						HX_STACK_LINE(535)
						int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(535)
						int i = tmp5;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(535)
						int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(535)
						::openfl::display::DisplayObject tmp7 = this->getChildAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(535)
						child = tmp7;
						HX_STACK_LINE(535)
						::openfl::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(535)
						bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::ru::stablex::ui::widgets::Bmp >());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(535)
						if ((tmp9)){
							HX_STACK_LINE(535)
							::ru::stablex::ui::widgets::Bmp tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(535)
							tmp10 = hx::TCast< ::ru::stablex::ui::widgets::Bmp >::cast(child);
							HX_STACK_LINE(535)
							Float tmp11 = this->paddingLeft;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(535)
							tmp10->set_left(tmp11);
						}
					}
				}
				HX_STACK_LINE(535)
				::openfl::text::TextField tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(535)
				Float tmp3 = this->_width;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(535)
				Float tmp4 = this->paddingRight;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(535)
				Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(535)
				::openfl::text::TextField tmp6 = this->label;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(535)
				Float tmp7 = this->_objWidth(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(535)
				Float tmp8 = (tmp5 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(535)
				this->_setObjX(tmp2,tmp8);
			}
			else{
				HX_STACK_LINE(535)
				{
					HX_STACK_LINE(535)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(535)
					int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(535)
					int _g = tmp2;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(535)
					while((true)){
						HX_STACK_LINE(535)
						bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(535)
						bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(535)
						if ((tmp4)){
							HX_STACK_LINE(535)
							break;
						}
						HX_STACK_LINE(535)
						int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(535)
						int i = tmp5;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(535)
						int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(535)
						::openfl::display::DisplayObject tmp7 = this->getChildAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(535)
						child = tmp7;
						HX_STACK_LINE(535)
						::openfl::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(535)
						bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::ru::stablex::ui::widgets::Bmp >());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(535)
						if ((tmp9)){
							HX_STACK_LINE(535)
							::ru::stablex::ui::widgets::Bmp tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(535)
							tmp10 = hx::TCast< ::ru::stablex::ui::widgets::Bmp >::cast(child);
							HX_STACK_LINE(535)
							Float tmp11 = this->paddingRight;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(535)
							tmp10->set_right(tmp11);
						}
					}
				}
				HX_STACK_LINE(535)
				::openfl::text::TextField tmp2 = this->label;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(535)
				Float tmp3 = this->paddingLeft;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(535)
				this->_setObjX(tmp2,tmp3);
			}
		}
	}
return null();
}


Void Button_obj::_moveApart( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","_moveApart",0xa50a7643,"ru.stablex.ui.widgets.Button._moveApart","ru/stablex/ui/widgets/Button.hx",544,0xa0cc634f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(545)
		::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(548)
		bool tmp = this->icoBeforeLabel;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(548)
		if ((tmp)){
			HX_STACK_LINE(550)
			{
				HX_STACK_LINE(550)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(550)
				int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(550)
				int _g = tmp1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(550)
				while((true)){
					HX_STACK_LINE(550)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(550)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(550)
					if ((tmp3)){
						HX_STACK_LINE(550)
						break;
					}
					HX_STACK_LINE(550)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(550)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(551)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(551)
					::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(551)
					child = tmp6;
					HX_STACK_LINE(553)
					::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(553)
					bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::ru::stablex::ui::widgets::Bmp >());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(553)
					if ((tmp8)){
						HX_STACK_LINE(554)
						::ru::stablex::ui::widgets::Bmp tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(554)
						tmp9 = hx::TCast< ::ru::stablex::ui::widgets::Bmp >::cast(child);
						HX_STACK_LINE(554)
						Float tmp10 = this->paddingLeft;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(554)
						tmp9->set_left(tmp10);
					}
				}
			}
			HX_STACK_LINE(558)
			::openfl::text::TextField tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(558)
			Float tmp2 = this->_width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(558)
			Float tmp3 = this->paddingRight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(558)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(558)
			::openfl::text::TextField tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(558)
			Float tmp6 = this->_objWidth(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(558)
			Float tmp7 = (tmp4 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(558)
			this->_setObjX(tmp1,tmp7);
		}
		else{
			HX_STACK_LINE(563)
			{
				HX_STACK_LINE(563)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(563)
				int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(563)
				int _g = tmp1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(563)
				while((true)){
					HX_STACK_LINE(563)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(563)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(563)
					if ((tmp3)){
						HX_STACK_LINE(563)
						break;
					}
					HX_STACK_LINE(563)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(563)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(564)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(564)
					::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(564)
					child = tmp6;
					HX_STACK_LINE(566)
					::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(566)
					bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::ru::stablex::ui::widgets::Bmp >());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(566)
					if ((tmp8)){
						HX_STACK_LINE(567)
						::ru::stablex::ui::widgets::Bmp tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(567)
						tmp9 = hx::TCast< ::ru::stablex::ui::widgets::Bmp >::cast(child);
						HX_STACK_LINE(567)
						Float tmp10 = this->paddingRight;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(567)
						tmp9->set_right(tmp10);
					}
				}
			}
			HX_STACK_LINE(571)
			::openfl::text::TextField tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(571)
			Float tmp2 = this->paddingLeft;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(571)
			this->_setObjX(tmp1,tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,_moveApart,(void))

Void Button_obj::_onHover( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","_onHover",0xf04df25d,"ru.stablex.ui.widgets.Button._onHover","ru/stablex/ui/widgets/Button.hx",64,0xa0cc634f)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(65)
		::ru::stablex::ui::widgets::Button tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		tmp = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(e->currentTarget);
		HX_STACK_LINE(65)
		::ru::stablex::ui::widgets::Button btn = tmp;		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(66)
		bool tmp1 = btn->disabled;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		if ((tmp1)){
			HX_STACK_LINE(67)
			return null();
		}
		HX_STACK_LINE(71)
		bool tmp2 = btn->hovered;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(71)
			return null();
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			::ru::stablex::ui::widgets::Bmp ico = btn->_icoHovered;		HX_STACK_VAR(ico,"ico");
			HX_STACK_LINE(74)
			bool tmp3 = (btn->_ico != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(74)
			if ((tmp3)){
				HX_STACK_LINE(74)
				btn->_ico->set_visible(false);
			}
			HX_STACK_LINE(74)
			bool tmp4 = (btn->_icoHovered != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			if ((tmp4)){
				HX_STACK_LINE(74)
				btn->_icoHovered->set_visible(false);
			}
			HX_STACK_LINE(74)
			bool tmp5 = (btn->_icoPressed != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			if ((tmp5)){
				HX_STACK_LINE(74)
				btn->_icoPressed->set_visible(false);
			}
			HX_STACK_LINE(74)
			bool tmp6 = (btn->_icoDisabled != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			if ((tmp6)){
				HX_STACK_LINE(74)
				btn->_icoDisabled->set_visible(false);
			}
			HX_STACK_LINE(74)
			bool tmp7 = (ico != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			if ((tmp7)){
				HX_STACK_LINE(74)
				ico->set_visible(true);
			}
			else{
				HX_STACK_LINE(74)
				bool tmp8 = (btn->_ico != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(74)
				if ((tmp8)){
					HX_STACK_LINE(74)
					btn->_ico->set_visible(true);
				}
			}
			HX_STACK_LINE(74)
			btn->alignElements();
		}
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			::ru::stablex::ui::skins::Skin skin = btn->skinHovered;		HX_STACK_VAR(skin,"skin");
			HX_STACK_LINE(77)
			bool tmp3 = (skin != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			if ((tmp3)){
				HX_STACK_LINE(77)
				::ru::stablex::ui::widgets::Button tmp4 = btn;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(77)
				skin->apply(tmp4);
			}
			else{
				HX_STACK_LINE(77)
				bool tmp4 = (skin == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(77)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				if ((tmp4)){
					HX_STACK_LINE(77)
					tmp5 = (btn->skin != null());
				}
				else{
					HX_STACK_LINE(77)
					tmp5 = false;
				}
				HX_STACK_LINE(77)
				if ((tmp5)){
					HX_STACK_LINE(77)
					::ru::stablex::ui::widgets::Button tmp6 = btn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(77)
					btn->skin->apply(tmp6);
				}
			}
		}
		HX_STACK_LINE(79)
		btn->hovered = true;
		HX_STACK_LINE(80)
		::openfl::events::MouseEvent tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		btn->onHover(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onHover,(void))

Void Button_obj::_onHout( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","_onHout",0x62a7f3a5,"ru.stablex.ui.widgets.Button._onHout","ru/stablex/ui/widgets/Button.hx",88,0xa0cc634f)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(89)
		::ru::stablex::ui::widgets::Button tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		tmp = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(e->currentTarget);
		HX_STACK_LINE(89)
		::ru::stablex::ui::widgets::Button btn = tmp;		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(90)
		bool tmp1 = btn->disabled;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		if ((tmp1)){
			HX_STACK_LINE(91)
			return null();
		}
		HX_STACK_LINE(95)
		bool tmp2 = btn->hovered;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		if ((tmp3)){
			HX_STACK_LINE(95)
			return null();
		}
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			::ru::stablex::ui::widgets::Bmp ico = btn->_ico;		HX_STACK_VAR(ico,"ico");
			HX_STACK_LINE(98)
			bool tmp4 = (btn->_ico != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(98)
			if ((tmp4)){
				HX_STACK_LINE(98)
				btn->_ico->set_visible(false);
			}
			HX_STACK_LINE(98)
			bool tmp5 = (btn->_icoHovered != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(98)
			if ((tmp5)){
				HX_STACK_LINE(98)
				btn->_icoHovered->set_visible(false);
			}
			HX_STACK_LINE(98)
			bool tmp6 = (btn->_icoPressed != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(98)
			if ((tmp6)){
				HX_STACK_LINE(98)
				btn->_icoPressed->set_visible(false);
			}
			HX_STACK_LINE(98)
			bool tmp7 = (btn->_icoDisabled != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(98)
			if ((tmp7)){
				HX_STACK_LINE(98)
				btn->_icoDisabled->set_visible(false);
			}
			HX_STACK_LINE(98)
			bool tmp8 = (ico != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			if ((tmp8)){
				HX_STACK_LINE(98)
				ico->set_visible(true);
			}
			else{
				HX_STACK_LINE(98)
				bool tmp9 = (btn->_ico != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(98)
				if ((tmp9)){
					HX_STACK_LINE(98)
					btn->_ico->set_visible(true);
				}
			}
			HX_STACK_LINE(98)
			btn->alignElements();
		}
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			::ru::stablex::ui::skins::Skin skin = btn->skin;		HX_STACK_VAR(skin,"skin");
			HX_STACK_LINE(101)
			bool tmp4 = (skin != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			if ((tmp4)){
				HX_STACK_LINE(101)
				::ru::stablex::ui::widgets::Button tmp5 = btn;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				skin->apply(tmp5);
			}
			else{
				HX_STACK_LINE(101)
				bool tmp5 = (skin == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(101)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(101)
				if ((tmp5)){
					HX_STACK_LINE(101)
					tmp6 = (btn->skin != null());
				}
				else{
					HX_STACK_LINE(101)
					tmp6 = false;
				}
				HX_STACK_LINE(101)
				if ((tmp6)){
					HX_STACK_LINE(101)
					::ru::stablex::ui::widgets::Button tmp7 = btn;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(101)
					btn->skin->apply(tmp7);
				}
			}
		}
		HX_STACK_LINE(103)
		btn->hovered = false;
		HX_STACK_LINE(104)
		::openfl::events::MouseEvent tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(104)
		btn->onHout(tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onHout,(void))

Void Button_obj::_onPress( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","_onPress",0x8d716024,"ru.stablex.ui.widgets.Button._onPress","ru/stablex/ui/widgets/Button.hx",112,0xa0cc634f)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(113)
		::ru::stablex::ui::widgets::Button tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		tmp = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(e->currentTarget);
		HX_STACK_LINE(113)
		::ru::stablex::ui::widgets::Button btn = tmp;		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(114)
		bool tmp1 = btn->disabled;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		if ((tmp1)){
			HX_STACK_LINE(115)
			return null();
		}
		HX_STACK_LINE(119)
		bool tmp2 = btn->pressed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		if ((tmp2)){
			HX_STACK_LINE(119)
			return null();
		}
		HX_STACK_LINE(122)
		{
			HX_STACK_LINE(122)
			::ru::stablex::ui::widgets::Bmp ico = btn->_icoPressed;		HX_STACK_VAR(ico,"ico");
			HX_STACK_LINE(122)
			bool tmp3 = (btn->_ico != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			if ((tmp3)){
				HX_STACK_LINE(122)
				btn->_ico->set_visible(false);
			}
			HX_STACK_LINE(122)
			bool tmp4 = (btn->_icoHovered != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(122)
			if ((tmp4)){
				HX_STACK_LINE(122)
				btn->_icoHovered->set_visible(false);
			}
			HX_STACK_LINE(122)
			bool tmp5 = (btn->_icoPressed != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(122)
			if ((tmp5)){
				HX_STACK_LINE(122)
				btn->_icoPressed->set_visible(false);
			}
			HX_STACK_LINE(122)
			bool tmp6 = (btn->_icoDisabled != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(122)
			if ((tmp6)){
				HX_STACK_LINE(122)
				btn->_icoDisabled->set_visible(false);
			}
			HX_STACK_LINE(122)
			bool tmp7 = (ico != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(122)
			if ((tmp7)){
				HX_STACK_LINE(122)
				ico->set_visible(true);
			}
			else{
				HX_STACK_LINE(122)
				bool tmp8 = (btn->_ico != null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(122)
				if ((tmp8)){
					HX_STACK_LINE(122)
					btn->_ico->set_visible(true);
				}
			}
			HX_STACK_LINE(122)
			btn->alignElements();
		}
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::ru::stablex::ui::skins::Skin skin = btn->skinPressed;		HX_STACK_VAR(skin,"skin");
			HX_STACK_LINE(125)
			bool tmp3 = (skin != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			if ((tmp3)){
				HX_STACK_LINE(125)
				::ru::stablex::ui::widgets::Button tmp4 = btn;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(125)
				skin->apply(tmp4);
			}
			else{
				HX_STACK_LINE(125)
				bool tmp4 = (skin == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(125)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(125)
				if ((tmp4)){
					HX_STACK_LINE(125)
					tmp5 = (btn->skin != null());
				}
				else{
					HX_STACK_LINE(125)
					tmp5 = false;
				}
				HX_STACK_LINE(125)
				if ((tmp5)){
					HX_STACK_LINE(125)
					::ru::stablex::ui::widgets::Button tmp6 = btn;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(125)
					btn->skin->apply(tmp6);
				}
			}
		}
		HX_STACK_LINE(127)
		btn->pressed = true;
		HX_STACK_LINE(128)
		::openfl::events::MouseEvent tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		btn->onPress(tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onPress,(void))

Void Button_obj::_onRelease( ::openfl::events::MouseEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Button","_onRelease",0xf3abbca8,"ru.stablex.ui.widgets.Button._onRelease","ru/stablex/ui/widgets/Button.hx",136,0xa0cc634f)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(137)
		::ru::stablex::ui::widgets::Button tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		tmp = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(e->currentTarget);
		HX_STACK_LINE(137)
		::ru::stablex::ui::widgets::Button btn = tmp;		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(138)
		bool tmp1 = btn->disabled;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		if ((tmp1)){
			HX_STACK_LINE(139)
			return null();
		}
		HX_STACK_LINE(143)
		bool tmp2 = btn->pressed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(143)
		if ((tmp3)){
			HX_STACK_LINE(143)
			return null();
		}
		HX_STACK_LINE(146)
		bool tmp4 = btn->hovered;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		if ((tmp4)){
			HX_STACK_LINE(147)
			::ru::stablex::ui::widgets::Bmp ico = btn->_icoHovered;		HX_STACK_VAR(ico,"ico");
			HX_STACK_LINE(147)
			bool tmp5 = (btn->_ico != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			if ((tmp5)){
				HX_STACK_LINE(147)
				btn->_ico->set_visible(false);
			}
			HX_STACK_LINE(147)
			bool tmp6 = (btn->_icoHovered != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(147)
			if ((tmp6)){
				HX_STACK_LINE(147)
				btn->_icoHovered->set_visible(false);
			}
			HX_STACK_LINE(147)
			bool tmp7 = (btn->_icoPressed != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(147)
			if ((tmp7)){
				HX_STACK_LINE(147)
				btn->_icoPressed->set_visible(false);
			}
			HX_STACK_LINE(147)
			bool tmp8 = (btn->_icoDisabled != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(147)
			if ((tmp8)){
				HX_STACK_LINE(147)
				btn->_icoDisabled->set_visible(false);
			}
			HX_STACK_LINE(147)
			bool tmp9 = (ico != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(147)
			if ((tmp9)){
				HX_STACK_LINE(147)
				ico->set_visible(true);
			}
			else{
				HX_STACK_LINE(147)
				bool tmp10 = (btn->_ico != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(147)
				if ((tmp10)){
					HX_STACK_LINE(147)
					btn->_ico->set_visible(true);
				}
			}
			HX_STACK_LINE(147)
			btn->alignElements();
		}
		else{
			HX_STACK_LINE(149)
			::ru::stablex::ui::widgets::Bmp ico = btn->_ico;		HX_STACK_VAR(ico,"ico");
			HX_STACK_LINE(149)
			bool tmp5 = (btn->_ico != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			if ((tmp5)){
				HX_STACK_LINE(149)
				btn->_ico->set_visible(false);
			}
			HX_STACK_LINE(149)
			bool tmp6 = (btn->_icoHovered != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(149)
			if ((tmp6)){
				HX_STACK_LINE(149)
				btn->_icoHovered->set_visible(false);
			}
			HX_STACK_LINE(149)
			bool tmp7 = (btn->_icoPressed != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(149)
			if ((tmp7)){
				HX_STACK_LINE(149)
				btn->_icoPressed->set_visible(false);
			}
			HX_STACK_LINE(149)
			bool tmp8 = (btn->_icoDisabled != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(149)
			if ((tmp8)){
				HX_STACK_LINE(149)
				btn->_icoDisabled->set_visible(false);
			}
			HX_STACK_LINE(149)
			bool tmp9 = (ico != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(149)
			if ((tmp9)){
				HX_STACK_LINE(149)
				ico->set_visible(true);
			}
			else{
				HX_STACK_LINE(149)
				bool tmp10 = (btn->_ico != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(149)
				if ((tmp10)){
					HX_STACK_LINE(149)
					btn->_ico->set_visible(true);
				}
			}
			HX_STACK_LINE(149)
			btn->alignElements();
		}
		HX_STACK_LINE(153)
		bool tmp5 = btn->hovered;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		if ((tmp5)){
			HX_STACK_LINE(154)
			::ru::stablex::ui::skins::Skin skin = btn->skinHovered;		HX_STACK_VAR(skin,"skin");
			HX_STACK_LINE(154)
			bool tmp6 = (skin != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			if ((tmp6)){
				HX_STACK_LINE(154)
				::ru::stablex::ui::widgets::Button tmp7 = btn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				skin->apply(tmp7);
			}
			else{
				HX_STACK_LINE(154)
				bool tmp7 = (skin == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(154)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				if ((tmp7)){
					HX_STACK_LINE(154)
					tmp8 = (btn->skin != null());
				}
				else{
					HX_STACK_LINE(154)
					tmp8 = false;
				}
				HX_STACK_LINE(154)
				if ((tmp8)){
					HX_STACK_LINE(154)
					::ru::stablex::ui::widgets::Button tmp9 = btn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(154)
					btn->skin->apply(tmp9);
				}
			}
		}
		else{
			HX_STACK_LINE(156)
			::ru::stablex::ui::skins::Skin skin = btn->skin;		HX_STACK_VAR(skin,"skin");
			HX_STACK_LINE(156)
			bool tmp6 = (skin != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(156)
			if ((tmp6)){
				HX_STACK_LINE(156)
				::ru::stablex::ui::widgets::Button tmp7 = btn;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(156)
				skin->apply(tmp7);
			}
			else{
				HX_STACK_LINE(156)
				bool tmp7 = (skin == null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(156)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(156)
				if ((tmp7)){
					HX_STACK_LINE(156)
					tmp8 = (btn->skin != null());
				}
				else{
					HX_STACK_LINE(156)
					tmp8 = false;
				}
				HX_STACK_LINE(156)
				if ((tmp8)){
					HX_STACK_LINE(156)
					::ru::stablex::ui::widgets::Button tmp9 = btn;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(156)
					btn->skin->apply(tmp9);
				}
			}
		}
		HX_STACK_LINE(159)
		btn->pressed = false;
		HX_STACK_LINE(160)
		::openfl::events::MouseEvent tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(160)
		btn->onRelease(tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onRelease,(void))


Button_obj::Button_obj()
{
	onPress = new __default_onPress(this);
	onRelease = new __default_onRelease(this);
	onHover = new __default_onHover(this);
	onHout = new __default_onHout(this);
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(pressed,"pressed");
	HX_MARK_MEMBER_NAME(hovered,"hovered");
	HX_MARK_MEMBER_NAME(disabled,"disabled");
	HX_MARK_MEMBER_NAME(_mouseChildrenBeforeDisabled,"_mouseChildrenBeforeDisabled");
	HX_MARK_MEMBER_NAME(_ico,"_ico");
	HX_MARK_MEMBER_NAME(_icoHovered,"_icoHovered");
	HX_MARK_MEMBER_NAME(_icoPressed,"_icoPressed");
	HX_MARK_MEMBER_NAME(_icoDisabled,"_icoDisabled");
	HX_MARK_MEMBER_NAME(icoBeforeLabel,"icoBeforeLabel");
	HX_MARK_MEMBER_NAME(skinHoveredName,"skinHoveredName");
	HX_MARK_MEMBER_NAME(skinHovered,"skinHovered");
	HX_MARK_MEMBER_NAME(skinPressedName,"skinPressedName");
	HX_MARK_MEMBER_NAME(skinPressed,"skinPressed");
	HX_MARK_MEMBER_NAME(skinDisabledName,"skinDisabledName");
	HX_MARK_MEMBER_NAME(skinDisabled,"skinDisabled");
	HX_MARK_MEMBER_NAME(apart,"apart");
	HX_MARK_MEMBER_NAME(onPress,"onPress");
	HX_MARK_MEMBER_NAME(onRelease,"onRelease");
	HX_MARK_MEMBER_NAME(onHover,"onHover");
	HX_MARK_MEMBER_NAME(onHout,"onHout");
	::ru::stablex::ui::widgets::Text_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pressed,"pressed");
	HX_VISIT_MEMBER_NAME(hovered,"hovered");
	HX_VISIT_MEMBER_NAME(disabled,"disabled");
	HX_VISIT_MEMBER_NAME(_mouseChildrenBeforeDisabled,"_mouseChildrenBeforeDisabled");
	HX_VISIT_MEMBER_NAME(_ico,"_ico");
	HX_VISIT_MEMBER_NAME(_icoHovered,"_icoHovered");
	HX_VISIT_MEMBER_NAME(_icoPressed,"_icoPressed");
	HX_VISIT_MEMBER_NAME(_icoDisabled,"_icoDisabled");
	HX_VISIT_MEMBER_NAME(icoBeforeLabel,"icoBeforeLabel");
	HX_VISIT_MEMBER_NAME(skinHoveredName,"skinHoveredName");
	HX_VISIT_MEMBER_NAME(skinHovered,"skinHovered");
	HX_VISIT_MEMBER_NAME(skinPressedName,"skinPressedName");
	HX_VISIT_MEMBER_NAME(skinPressed,"skinPressed");
	HX_VISIT_MEMBER_NAME(skinDisabledName,"skinDisabledName");
	HX_VISIT_MEMBER_NAME(skinDisabled,"skinDisabled");
	HX_VISIT_MEMBER_NAME(apart,"apart");
	HX_VISIT_MEMBER_NAME(onPress,"onPress");
	HX_VISIT_MEMBER_NAME(onRelease,"onRelease");
	HX_VISIT_MEMBER_NAME(onHover,"onHover");
	HX_VISIT_MEMBER_NAME(onHout,"onHout");
	::ru::stablex::ui::widgets::Text_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Button_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ico") ) { if (inCallProp == hx::paccAlways) return get_ico(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ico") ) { return _ico; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apart") ) { return apart; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onHout") ) { return onHout; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed; }
		if (HX_FIELD_EQ(inName,"hovered") ) { return hovered; }
		if (HX_FIELD_EQ(inName,"onPress") ) { return onPress; }
		if (HX_FIELD_EQ(inName,"onHover") ) { return onHover; }
		if (HX_FIELD_EQ(inName,"get_ico") ) { return get_ico_dyn(); }
		if (HX_FIELD_EQ(inName,"set_ico") ) { return set_ico_dyn(); }
		if (HX_FIELD_EQ(inName,"_addIco") ) { return _addIco_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disabled") ) { return disabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onRelease") ) { return onRelease; }
		if (HX_FIELD_EQ(inName,"applySkin") ) { return applySkin_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"icoHovered") ) { if (inCallProp == hx::paccAlways) return get_icoHovered(); }
		if (HX_FIELD_EQ(inName,"icoPressed") ) { if (inCallProp == hx::paccAlways) return get_icoPressed(); }
		if (HX_FIELD_EQ(inName,"_switchIco") ) { return _switchIco_dyn(); }
		if (HX_FIELD_EQ(inName,"_moveApart") ) { return _moveApart_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_icoHovered") ) { return _icoHovered; }
		if (HX_FIELD_EQ(inName,"_icoPressed") ) { return _icoPressed; }
		if (HX_FIELD_EQ(inName,"icoDisabled") ) { if (inCallProp == hx::paccAlways) return get_icoDisabled(); }
		if (HX_FIELD_EQ(inName,"skinHovered") ) { return skinHovered; }
		if (HX_FIELD_EQ(inName,"skinPressed") ) { return skinPressed; }
		if (HX_FIELD_EQ(inName,"_switchSkin") ) { return _switchSkin_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_icoDisabled") ) { return _icoDisabled; }
		if (HX_FIELD_EQ(inName,"skinDisabled") ) { return skinDisabled; }
		if (HX_FIELD_EQ(inName,"set_disabled") ) { return set_disabled_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"alignElements") ) { return alignElements_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"icoBeforeLabel") ) { return icoBeforeLabel; }
		if (HX_FIELD_EQ(inName,"get_icoHovered") ) { return get_icoHovered_dyn(); }
		if (HX_FIELD_EQ(inName,"set_icoHovered") ) { return set_icoHovered_dyn(); }
		if (HX_FIELD_EQ(inName,"get_icoPressed") ) { return get_icoPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_icoPressed") ) { return set_icoPressed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"skinHoveredName") ) { return skinHoveredName; }
		if (HX_FIELD_EQ(inName,"skinPressedName") ) { return skinPressedName; }
		if (HX_FIELD_EQ(inName,"get_icoDisabled") ) { return get_icoDisabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_icoDisabled") ) { return set_icoDisabled_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skinDisabledName") ) { return skinDisabledName; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_icoBeforeLabel") ) { return set_icoBeforeLabel_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"set_skinHoveredName") ) { return set_skinHoveredName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_skinPressedName") ) { return set_skinPressedName_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skinDisabledName") ) { return set_skinDisabledName_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_mouseChildrenBeforeDisabled") ) { return _mouseChildrenBeforeDisabled; }
	}
	return super::__Field(inName,inCallProp);
}

bool Button_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_onHout") ) { outValue = _onHout_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_onHover") ) { outValue = _onHover_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"_onPress") ) { outValue = _onPress_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_onRelease") ) { outValue = _onRelease_dyn(); return true;  }
	}
	return false;
}

Dynamic Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ico") ) { if (inCallProp == hx::paccAlways) return set_ico(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_ico") ) { _ico=inValue.Cast< ::ru::stablex::ui::widgets::Bmp >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apart") ) { apart=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onHout") ) { onHout=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { pressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hovered") ) { hovered=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onPress") ) { onPress=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onHover") ) { onHover=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disabled") ) { if (inCallProp == hx::paccAlways) return set_disabled(inValue);disabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onRelease") ) { onRelease=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"icoHovered") ) { if (inCallProp == hx::paccAlways) return set_icoHovered(inValue); }
		if (HX_FIELD_EQ(inName,"icoPressed") ) { if (inCallProp == hx::paccAlways) return set_icoPressed(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_icoHovered") ) { _icoHovered=inValue.Cast< ::ru::stablex::ui::widgets::Bmp >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_icoPressed") ) { _icoPressed=inValue.Cast< ::ru::stablex::ui::widgets::Bmp >(); return inValue; }
		if (HX_FIELD_EQ(inName,"icoDisabled") ) { if (inCallProp == hx::paccAlways) return set_icoDisabled(inValue); }
		if (HX_FIELD_EQ(inName,"skinHovered") ) { skinHovered=inValue.Cast< ::ru::stablex::ui::skins::Skin >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skinPressed") ) { skinPressed=inValue.Cast< ::ru::stablex::ui::skins::Skin >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_icoDisabled") ) { _icoDisabled=inValue.Cast< ::ru::stablex::ui::widgets::Bmp >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skinDisabled") ) { skinDisabled=inValue.Cast< ::ru::stablex::ui::skins::Skin >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"icoBeforeLabel") ) { if (inCallProp == hx::paccAlways) return set_icoBeforeLabel(inValue);icoBeforeLabel=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"skinHoveredName") ) { if (inCallProp == hx::paccAlways) return set_skinHoveredName(inValue);skinHoveredName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skinPressedName") ) { if (inCallProp == hx::paccAlways) return set_skinPressedName(inValue);skinPressedName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skinDisabledName") ) { if (inCallProp == hx::paccAlways) return set_skinDisabledName(inValue);skinDisabledName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"_mouseChildrenBeforeDisabled") ) { _mouseChildrenBeforeDisabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"));
	outFields->push(HX_HCSTRING("hovered","\x1b","\x25","\xb7","\x7a"));
	outFields->push(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c"));
	outFields->push(HX_HCSTRING("_mouseChildrenBeforeDisabled","\xc0","\xf4","\x91","\x69"));
	outFields->push(HX_HCSTRING("ico","\x55","\x03","\x50","\x00"));
	outFields->push(HX_HCSTRING("_ico","\x56","\x48","\x1b","\x3f"));
	outFields->push(HX_HCSTRING("icoHovered","\x46","\x8e","\xce","\x86"));
	outFields->push(HX_HCSTRING("_icoHovered","\x65","\x5b","\x58","\x59"));
	outFields->push(HX_HCSTRING("icoPressed","\xcd","\x3b","\xfe","\x45"));
	outFields->push(HX_HCSTRING("_icoPressed","\xec","\x08","\x88","\x18"));
	outFields->push(HX_HCSTRING("icoDisabled","\xf1","\xdd","\x68","\x04"));
	outFields->push(HX_HCSTRING("_icoDisabled","\xf2","\x8b","\x72","\x6a"));
	outFields->push(HX_HCSTRING("icoBeforeLabel","\xa0","\x57","\xc7","\x2d"));
	outFields->push(HX_HCSTRING("skinHoveredName","\x89","\xb5","\x39","\x41"));
	outFields->push(HX_HCSTRING("skinHovered","\x1e","\xb0","\xc3","\xa3"));
	outFields->push(HX_HCSTRING("skinPressedName","\x90","\x32","\x5c","\xd1"));
	outFields->push(HX_HCSTRING("skinPressed","\xa5","\x5d","\xf3","\x62"));
	outFields->push(HX_HCSTRING("skinDisabledName","\x04","\xf8","\xee","\xcc"));
	outFields->push(HX_HCSTRING("skinDisabled","\x19","\x59","\xf1","\x3d"));
	outFields->push(HX_HCSTRING("apart","\xd4","\x28","\x30","\x24"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Button_obj,pressed),HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39")},
	{hx::fsBool,(int)offsetof(Button_obj,hovered),HX_HCSTRING("hovered","\x1b","\x25","\xb7","\x7a")},
	{hx::fsBool,(int)offsetof(Button_obj,disabled),HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c")},
	{hx::fsBool,(int)offsetof(Button_obj,_mouseChildrenBeforeDisabled),HX_HCSTRING("_mouseChildrenBeforeDisabled","\xc0","\xf4","\x91","\x69")},
	{hx::fsObject /*::ru::stablex::ui::widgets::Bmp*/ ,(int)offsetof(Button_obj,_ico),HX_HCSTRING("_ico","\x56","\x48","\x1b","\x3f")},
	{hx::fsObject /*::ru::stablex::ui::widgets::Bmp*/ ,(int)offsetof(Button_obj,_icoHovered),HX_HCSTRING("_icoHovered","\x65","\x5b","\x58","\x59")},
	{hx::fsObject /*::ru::stablex::ui::widgets::Bmp*/ ,(int)offsetof(Button_obj,_icoPressed),HX_HCSTRING("_icoPressed","\xec","\x08","\x88","\x18")},
	{hx::fsObject /*::ru::stablex::ui::widgets::Bmp*/ ,(int)offsetof(Button_obj,_icoDisabled),HX_HCSTRING("_icoDisabled","\xf2","\x8b","\x72","\x6a")},
	{hx::fsBool,(int)offsetof(Button_obj,icoBeforeLabel),HX_HCSTRING("icoBeforeLabel","\xa0","\x57","\xc7","\x2d")},
	{hx::fsString,(int)offsetof(Button_obj,skinHoveredName),HX_HCSTRING("skinHoveredName","\x89","\xb5","\x39","\x41")},
	{hx::fsObject /*::ru::stablex::ui::skins::Skin*/ ,(int)offsetof(Button_obj,skinHovered),HX_HCSTRING("skinHovered","\x1e","\xb0","\xc3","\xa3")},
	{hx::fsString,(int)offsetof(Button_obj,skinPressedName),HX_HCSTRING("skinPressedName","\x90","\x32","\x5c","\xd1")},
	{hx::fsObject /*::ru::stablex::ui::skins::Skin*/ ,(int)offsetof(Button_obj,skinPressed),HX_HCSTRING("skinPressed","\xa5","\x5d","\xf3","\x62")},
	{hx::fsString,(int)offsetof(Button_obj,skinDisabledName),HX_HCSTRING("skinDisabledName","\x04","\xf8","\xee","\xcc")},
	{hx::fsObject /*::ru::stablex::ui::skins::Skin*/ ,(int)offsetof(Button_obj,skinDisabled),HX_HCSTRING("skinDisabled","\x19","\x59","\xf1","\x3d")},
	{hx::fsBool,(int)offsetof(Button_obj,apart),HX_HCSTRING("apart","\xd4","\x28","\x30","\x24")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Button_obj,onPress),HX_HCSTRING("onPress","\xe4","\xf1","\xc5","\x5e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Button_obj,onRelease),HX_HCSTRING("onRelease","\x68","\x3e","\x98","\x30")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Button_obj,onHover),HX_HCSTRING("onHover","\x1d","\x84","\xa2","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Button_obj,onHout),HX_HCSTRING("onHout","\xe5","\xd9","\x9c","\xe7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pressed","\xa2","\xd2","\xe6","\x39"),
	HX_HCSTRING("hovered","\x1b","\x25","\xb7","\x7a"),
	HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c"),
	HX_HCSTRING("_mouseChildrenBeforeDisabled","\xc0","\xf4","\x91","\x69"),
	HX_HCSTRING("_ico","\x56","\x48","\x1b","\x3f"),
	HX_HCSTRING("_icoHovered","\x65","\x5b","\x58","\x59"),
	HX_HCSTRING("_icoPressed","\xec","\x08","\x88","\x18"),
	HX_HCSTRING("_icoDisabled","\xf2","\x8b","\x72","\x6a"),
	HX_HCSTRING("icoBeforeLabel","\xa0","\x57","\xc7","\x2d"),
	HX_HCSTRING("skinHoveredName","\x89","\xb5","\x39","\x41"),
	HX_HCSTRING("skinHovered","\x1e","\xb0","\xc3","\xa3"),
	HX_HCSTRING("skinPressedName","\x90","\x32","\x5c","\xd1"),
	HX_HCSTRING("skinPressed","\xa5","\x5d","\xf3","\x62"),
	HX_HCSTRING("skinDisabledName","\x04","\xf8","\xee","\xcc"),
	HX_HCSTRING("skinDisabled","\x19","\x59","\xf1","\x3d"),
	HX_HCSTRING("apart","\xd4","\x28","\x30","\x24"),
	HX_HCSTRING("onPress","\xe4","\xf1","\xc5","\x5e"),
	HX_HCSTRING("onRelease","\x68","\x3e","\x98","\x30"),
	HX_HCSTRING("onHover","\x1d","\x84","\xa2","\xc1"),
	HX_HCSTRING("onHout","\xe5","\xd9","\x9c","\xe7"),
	HX_HCSTRING("set_disabled","\xf9","\x18","\x17","\x46"),
	HX_HCSTRING("set_icoBeforeLabel","\xdd","\x6a","\x10","\xa6"),
	HX_HCSTRING("get_ico","\xec","\xcb","\xc4","\x26"),
	HX_HCSTRING("set_ico","\xf8","\x5c","\xc6","\x19"),
	HX_HCSTRING("get_icoHovered","\x8f","\x16","\xc4","\xfc"),
	HX_HCSTRING("set_icoHovered","\x03","\xff","\xe3","\x1c"),
	HX_HCSTRING("get_icoPressed","\x16","\xc4","\xf3","\xbb"),
	HX_HCSTRING("set_icoPressed","\x8a","\xac","\x13","\xdc"),
	HX_HCSTRING("get_icoDisabled","\x88","\x95","\x4a","\xc5"),
	HX_HCSTRING("set_icoDisabled","\x94","\x12","\x16","\xc1"),
	HX_HCSTRING("set_skinHoveredName","\xac","\x77","\xe1","\x08"),
	HX_HCSTRING("set_skinPressedName","\xb3","\xf4","\x03","\x99"),
	HX_HCSTRING("set_skinDisabledName","\x81","\x14","\x11","\xb8"),
	HX_HCSTRING("_addIco","\x53","\x25","\x78","\x0d"),
	HX_HCSTRING("_switchIco","\x82","\x9d","\xdc","\x69"),
	HX_HCSTRING("_switchSkin","\xb0","\x63","\xcf","\x3d"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("applySkin","\x0b","\x17","\x24","\x36"),
	HX_HCSTRING("alignElements","\x1c","\x16","\x13","\x65"),
	HX_HCSTRING("_moveApart","\xc4","\x73","\x99","\x3d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#endif

hx::Class Button_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_onHover","\x9e","\xdd","\x5a","\xfb"),
	HX_HCSTRING("_onHout","\x84","\xeb","\x13","\x56"),
	HX_HCSTRING("_onPress","\x65","\x4b","\x7e","\x98"),
	HX_HCSTRING("_onRelease","\x29","\xba","\x3a","\x8c"),
	::String(null()) };

void Button_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.widgets.Button","\x8f","\xdf","\x32","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Button_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Button_obj >;
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
