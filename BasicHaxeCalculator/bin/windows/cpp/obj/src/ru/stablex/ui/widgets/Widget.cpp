#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
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
#ifndef INCLUDED_ru_stablex_ui_layouts_Layout
#include <ru/stablex/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_skins_Skin
#include <ru/stablex/ui/skins/Skin.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Box
#include <ru/stablex/ui/widgets/Box.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Floating
#include <ru/stablex/ui/widgets/Floating.h>
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

Void Widget_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","new",0x9d7992d3,"ru.stablex.ui.widgets.Widget.new","ru/stablex/ui/widgets/Widget.hx",22,0xb63704bd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(124)
	this->overflow = true;
	HX_STACK_LINE(120)
	this->_skinQueued = false;
	HX_STACK_LINE(115)
	this->_appliedSkin = null();
	HX_STACK_LINE(110)
	this->_bottomPercent = ((Float)0);
	HX_STACK_LINE(109)
	this->_bottom = ((Float)0);
	HX_STACK_LINE(103)
	this->_topPercent = ((Float)0);
	HX_STACK_LINE(102)
	this->_top = ((Float)0);
	HX_STACK_LINE(93)
	this->_yUse = (int)5;
	HX_STACK_LINE(92)
	this->_xUse = (int)1;
	HX_STACK_LINE(89)
	this->_rightPercent = ((Float)0);
	HX_STACK_LINE(88)
	this->_right = ((Float)0);
	HX_STACK_LINE(82)
	this->_leftPercent = ((Float)0);
	HX_STACK_LINE(81)
	this->_left = ((Float)0);
	HX_STACK_LINE(72)
	this->_resizing = false;
	HX_STACK_LINE(70)
	this->_silentResize = false;
	HX_STACK_LINE(67)
	this->_heightUsePercent = false;
	HX_STACK_LINE(66)
	this->_heightPercent = ((Float)0);
	HX_STACK_LINE(65)
	this->_height = ((Float)0);
	HX_STACK_LINE(57)
	this->minHeightByContent = false;
	HX_STACK_LINE(55)
	this->minWidthByContent = false;
	HX_STACK_LINE(52)
	this->_widthUsePercent = false;
	HX_STACK_LINE(51)
	this->_widthPercent = ((Float)0);
	HX_STACK_LINE(50)
	this->_width = ((Float)0);
	HX_STACK_LINE(42)
	this->destroyed = false;
	HX_STACK_LINE(40)
	this->created = false;
	HX_STACK_LINE(38)
	this->initialized = false;
	HX_STACK_LINE(35)
	this->defaults = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69");
	HX_STACK_LINE(148)
	super::__construct();
	HX_STACK_LINE(150)
	int tmp = (::ru::stablex::ui::UIBuilder_obj::_nextId)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(150)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(150)
	::String tmp2 = (HX_HCSTRING("__widget__","\x04","\xef","\x09","\xd5") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(150)
	this->set_id(tmp2);
}
;
	return null();
}

//Widget_obj::~Widget_obj() { }

Dynamic Widget_obj::__CreateEmpty() { return  new Widget_obj; }
hx::ObjectPtr< Widget_obj > Widget_obj::__new()
{  hx::ObjectPtr< Widget_obj > _result_ = new Widget_obj();
	_result_->__construct();
	return _result_;}

Dynamic Widget_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Widget_obj > _result_ = new Widget_obj();
	_result_->__construct();
	return _result_;}

Void Widget_obj::_onInitialize( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","_onInitialize",0x7603d661,"ru.stablex.ui.widgets.Widget._onInitialize","ru/stablex/ui/widgets/Widget.hx",159,0xb63704bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		this->onInitialize();
		HX_STACK_LINE(161)
		this->initialized = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,_onInitialize,(void))

Void Widget_obj::onInitialize( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","onInitialize",0xab84aa7c,"ru.stablex.ui.widgets.Widget.onInitialize","ru/stablex/ui/widgets/Widget.hx",170,0xb63704bd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,onInitialize,(void))

Void Widget_obj::_onCreate( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","_onCreate",0x1c59ef8d,"ru.stablex.ui.widgets.Widget._onCreate","ru/stablex/ui/widgets/Widget.hx",180,0xb63704bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(181)
		this->onCreate();
		HX_STACK_LINE(184)
		this->refresh();
		HX_STACK_LINE(187)
		this->clearEvent(HX_HCSTRING("widgetInitialResize","\x34","\x2f","\xdc","\x47"));
		HX_STACK_LINE(189)
		this->created = true;
		HX_STACK_LINE(191)
		::ru::stablex::ui::events::WidgetEvent tmp = ::ru::stablex::ui::events::WidgetEvent_obj::__new(HX_HCSTRING("widgetCreate","\xe0","\xb5","\xb2","\x80"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		this->dispatchEvent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,_onCreate,(void))

Void Widget_obj::onCreate( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","onCreate",0x2f81da28,"ru.stablex.ui.widgets.Widget.onCreate","ru/stablex/ui/widgets/Widget.hx",200,0xb63704bd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,onCreate,(void))

Void Widget_obj::free( hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","free",0x27a6fed9,"ru.stablex.ui.widgets.Widget.free","ru/stablex/ui/widgets/Widget.hx",209,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(210)
		this->destroyed = true;
		HX_STACK_LINE(211)
		::ru::stablex::ui::events::WidgetEvent tmp = ::ru::stablex::ui::events::WidgetEvent_obj::__new(HX_HCSTRING("widgetFree","\x90","\xaa","\x9b","\x55"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		this->dispatchEvent(tmp);
		HX_STACK_LINE(213)
		bool tmp1 = recursive;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		this->super::free(tmp1);
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			::haxe::ds::StringMap tmp2 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(216)
			::String tmp3 = this->id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(216)
			tmp2->remove(tmp3);
		}
	}
return null();
}


Void Widget_obj::applySkin( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","applySkin",0xaf2bb1be,"ru.stablex.ui.widgets.Widget.applySkin","ru/stablex/ui/widgets/Widget.hx",224,0xb63704bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		bool tmp = this->initialized;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		if ((tmp)){
			HX_STACK_LINE(225)
			::ru::stablex::ui::skins::Skin tmp2 = this->skin;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(225)
			::ru::stablex::ui::skins::Skin tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(225)
			tmp1 = (tmp3 != null());
		}
		else{
			HX_STACK_LINE(225)
			tmp1 = false;
		}
		HX_STACK_LINE(225)
		if ((tmp1)){
			HX_STACK_LINE(226)
			::ru::stablex::ui::skins::Skin tmp2 = this->skin;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			tmp2->apply(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,applySkin,(void))

Void Widget_obj::applyLayout( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","applyLayout",0x12dd5c2b,"ru.stablex.ui.widgets.Widget.applyLayout","ru/stablex/ui/widgets/Widget.hx",235,0xb63704bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(236)
		::ru::stablex::ui::layouts::Layout tmp = this->layout;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		if ((tmp1)){
			HX_STACK_LINE(237)
			::ru::stablex::ui::layouts::Layout tmp2 = this->layout;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(237)
			tmp2->arrangeChildren(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,applyLayout,(void))

Void Widget_obj::refresh( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","refresh",0x746451ce,"ru.stablex.ui.widgets.Widget.refresh","ru/stablex/ui/widgets/Widget.hx",246,0xb63704bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			::ru::stablex::ui::skins::Skin tmp = this->skin;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(247)
			bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(247)
			bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(247)
			if ((tmp1)){
				HX_STACK_LINE(247)
				bool tmp3 = this->_skinQueued;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(247)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(247)
				bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(247)
				tmp2 = !(tmp5);
			}
			else{
				HX_STACK_LINE(247)
				tmp2 = false;
			}
			HX_STACK_LINE(247)
			if ((tmp2)){
				HX_STACK_LINE(247)
				::List tmp3 = ::ru::stablex::ui::UIBuilder_obj::_skinQueue;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(247)
				tmp3->add(hx::ObjectPtr<OBJ_>(this));
				HX_STACK_LINE(247)
				this->_skinQueued = true;
			}
		}
		HX_STACK_LINE(248)
		this->applyLayout();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,refresh,(void))

Void Widget_obj::_newParent( ::ru::stablex::ui::widgets::Widget newParent){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","_newParent",0x74710f58,"ru.stablex.ui.widgets.Widget._newParent","ru/stablex/ui/widgets/Widget.hx",256,0xb63704bd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newParent,"newParent")
		HX_STACK_LINE(257)
		::ru::stablex::ui::widgets::Widget tmp = newParent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		::openfl::display::DisplayObjectContainer tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(257)
		if ((tmp2)){
			HX_STACK_LINE(257)
			::ru::stablex::ui::widgets::Widget tmp3 = newParent;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			this->onNewParent(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,_newParent,(void))

Void Widget_obj::_resizeWithPercent( ::ru::stablex::ui::widgets::Widget parent){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","_resizeWithPercent",0x5e81bf79,"ru.stablex.ui.widgets.Widget._resizeWithPercent","ru/stablex/ui/widgets/Widget.hx",265,0xb63704bd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parent,"parent")
		HX_STACK_LINE(267)
		bool tmp = this->_widthUsePercent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(267)
		if ((tmp)){
			HX_STACK_LINE(268)
			Float tmp2 = parent->get_contentWidth();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(268)
			Float tmp3 = this->_widthPercent;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(268)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(268)
			tmp1 = (Float(tmp4) / Float((int)100));
		}
		else{
			HX_STACK_LINE(269)
			tmp1 = this->_width;
		}
		HX_STACK_LINE(266)
		Float newWidth = tmp1;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(272)
		bool tmp2 = this->_heightUsePercent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(272)
		if ((tmp2)){
			HX_STACK_LINE(273)
			Float tmp4 = parent->get_contentHeight();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			Float tmp5 = this->_heightPercent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(273)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(273)
			tmp3 = (Float(tmp6) / Float((int)100));
		}
		else{
			HX_STACK_LINE(274)
			tmp3 = this->_height;
		}
		HX_STACK_LINE(271)
		Float newHeight = tmp3;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(277)
		bool tmp4 = this->minWidthByContent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(277)
		if ((tmp4)){
			HX_STACK_LINE(277)
			Float tmp6 = this->get_contentWidth();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(277)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(277)
			Float tmp8 = newWidth;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(277)
			tmp5 = (tmp7 < tmp8);
		}
		else{
			HX_STACK_LINE(277)
			tmp5 = false;
		}
		HX_STACK_LINE(277)
		if ((tmp5)){
			HX_STACK_LINE(278)
			Float tmp6 = this->get_contentWidth();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(278)
			newWidth = tmp6;
		}
		HX_STACK_LINE(280)
		bool tmp6 = this->minHeightByContent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(280)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(280)
		if ((tmp6)){
			HX_STACK_LINE(280)
			Float tmp8 = this->get_contentHeight();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(280)
			Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(280)
			Float tmp10 = newHeight;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(280)
			tmp7 = (tmp9 < tmp10);
		}
		else{
			HX_STACK_LINE(280)
			tmp7 = false;
		}
		HX_STACK_LINE(280)
		if ((tmp7)){
			HX_STACK_LINE(281)
			Float tmp8 = this->get_contentHeight();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(281)
			newHeight = tmp8;
		}
		HX_STACK_LINE(284)
		Float tmp8 = newWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(284)
		Float tmp9 = newHeight;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(284)
		this->resize(tmp8,tmp9,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,_resizeWithPercent,(void))

Void Widget_obj::onNewParent( ::ru::stablex::ui::widgets::Widget newParent){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","onNewParent",0x4b9ba1fe,"ru.stablex.ui.widgets.Widget.onNewParent","ru/stablex/ui/widgets/Widget.hx",292,0xb63704bd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newParent,"newParent")
		HX_STACK_LINE(294)
		bool tmp = this->_widthUsePercent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		if ((tmp1)){
			HX_STACK_LINE(294)
			tmp2 = this->_heightUsePercent;
		}
		else{
			HX_STACK_LINE(294)
			tmp2 = true;
		}
		HX_STACK_LINE(294)
		if ((tmp2)){
			HX_STACK_LINE(295)
			::ru::stablex::ui::widgets::Widget tmp3 = newParent;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(295)
			this->_resizeWithPercent(tmp3);
		}
		HX_STACK_LINE(299)
		{
			HX_STACK_LINE(299)
			int tmp3 = this->_xUse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(299)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(299)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(299)
			switch( (int)(tmp4)){
				case (int)3: {
					HX_STACK_LINE(301)
					Float tmp5 = newParent->_width;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(301)
					Float tmp6 = this->_right;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(301)
					Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(301)
					Float tmp8 = this->_width;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(301)
					Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(301)
					this->set_x(tmp9);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(303)
					Float tmp5 = newParent->_width;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(303)
					Float tmp6 = newParent->_width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(303)
					Float tmp7 = this->_rightPercent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(303)
					Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(303)
					Float tmp9 = (Float(tmp8) / Float((int)100));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(303)
					Float tmp10 = (tmp5 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(303)
					Float tmp11 = this->_width;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(303)
					Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(303)
					this->set_x(tmp12);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(305)
					Float tmp5 = newParent->_width;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(305)
					Float tmp6 = this->_leftPercent;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(305)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(305)
					Float tmp8 = (Float(tmp7) / Float((int)100));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(305)
					this->set_x(tmp8);
				}
				;break;
			}
		}
		HX_STACK_LINE(308)
		{
			HX_STACK_LINE(308)
			int tmp3 = this->_yUse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			int _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(308)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			switch( (int)(tmp4)){
				case (int)7: {
					HX_STACK_LINE(310)
					Float tmp5 = newParent->_height;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(310)
					Float tmp6 = this->_bottom;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(310)
					Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(310)
					Float tmp8 = this->_height;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(310)
					Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(310)
					this->set_y(tmp9);
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(312)
					Float tmp5 = newParent->_height;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(312)
					Float tmp6 = newParent->_height;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(312)
					Float tmp7 = this->_bottomPercent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(312)
					Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(312)
					Float tmp9 = (Float(tmp8) / Float((int)100));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(312)
					Float tmp10 = (tmp5 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(312)
					Float tmp11 = this->_height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(312)
					Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(312)
					this->set_y(tmp12);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(314)
					Float tmp5 = newParent->_height;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(314)
					Float tmp6 = this->_topPercent;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(314)
					Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(314)
					Float tmp8 = (Float(tmp7) / Float((int)100));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(314)
					this->set_y(tmp8);
				}
				;break;
			}
		}
		HX_STACK_LINE(319)
		::openfl::events::EventDispatcher tmp3 = ::ru::stablex::ui::UIBuilder_obj::dispatcher;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(319)
		::ru::stablex::ui::events::WidgetEvent tmp4 = ::ru::stablex::ui::events::WidgetEvent_obj::__new(HX_HCSTRING("widgetAdded","\x5c","\xee","\x56","\xa8"),hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(319)
		tmp3->dispatchEvent(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,onNewParent,(void))

Void Widget_obj::_onParentResize( ::ru::stablex::ui::events::WidgetEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","_onParentResize",0x036dda0f,"ru.stablex.ui.widgets.Widget._onParentResize","ru/stablex/ui/widgets/Widget.hx",327,0xb63704bd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(328)
		::ru::stablex::ui::widgets::Widget tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(328)
		tmp = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(e->currentTarget);
		HX_STACK_LINE(328)
		::ru::stablex::ui::widgets::Widget parent = tmp;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(331)
		bool tmp1 = this->_widthUsePercent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(331)
		if ((tmp2)){
			HX_STACK_LINE(331)
			tmp3 = this->_heightUsePercent;
		}
		else{
			HX_STACK_LINE(331)
			tmp3 = true;
		}
		HX_STACK_LINE(331)
		if ((tmp3)){
			HX_STACK_LINE(332)
			::ru::stablex::ui::widgets::Widget tmp4 = parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(332)
			this->_resizeWithPercent(tmp4);
		}
		HX_STACK_LINE(336)
		{
			HX_STACK_LINE(336)
			int tmp4 = this->_xUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(336)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(336)
			int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(336)
			switch( (int)(tmp5)){
				case (int)3: {
					HX_STACK_LINE(338)
					Float tmp6 = parent->_width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(338)
					Float tmp7 = this->_right;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(338)
					Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(338)
					Float tmp9 = this->_width;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(338)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(338)
					this->set_x(tmp10);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(340)
					Float tmp6 = parent->_width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(340)
					Float tmp7 = parent->_width;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(340)
					Float tmp8 = this->_rightPercent;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(340)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(340)
					Float tmp10 = (Float(tmp9) / Float((int)100));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(340)
					Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(340)
					Float tmp12 = this->get_w();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(340)
					Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(340)
					this->set_x(tmp13);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(342)
					Float tmp6 = parent->_width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(342)
					Float tmp7 = this->_leftPercent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(342)
					Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(342)
					Float tmp9 = (Float(tmp8) / Float((int)100));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(342)
					this->set_x(tmp9);
				}
				;break;
			}
		}
		HX_STACK_LINE(345)
		{
			HX_STACK_LINE(345)
			int tmp4 = this->_yUse;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(345)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(345)
			int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(345)
			switch( (int)(tmp5)){
				case (int)7: {
					HX_STACK_LINE(347)
					Float tmp6 = parent->_height;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(347)
					Float tmp7 = this->_bottom;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(347)
					Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(347)
					Float tmp9 = this->_height;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(347)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(347)
					this->set_y(tmp10);
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(349)
					Float tmp6 = parent->_height;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(349)
					Float tmp7 = parent->_height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(349)
					Float tmp8 = this->_bottomPercent;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(349)
					Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(349)
					Float tmp10 = (Float(tmp9) / Float((int)100));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(349)
					Float tmp11 = (tmp6 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(349)
					Float tmp12 = this->_height;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(349)
					Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(349)
					this->set_y(tmp13);
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(351)
					Float tmp6 = parent->_height;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(351)
					Float tmp7 = this->_topPercent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(351)
					Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(351)
					Float tmp9 = (Float(tmp8) / Float((int)100));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(351)
					this->set_y(tmp9);
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,_onParentResize,(void))

Void Widget_obj::resize( Float width,Float height,hx::Null< bool >  __o_keepPercentage){
bool keepPercentage = __o_keepPercentage.Default(false);
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","resize",0xf7de6161,"ru.stablex.ui.widgets.Widget.resize","ru/stablex/ui/widgets/Widget.hx",361,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(keepPercentage,"keepPercentage")
{
		HX_STACK_LINE(362)
		Float tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(362)
		Float tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(362)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(362)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(362)
		if ((tmp2)){
			HX_STACK_LINE(362)
			Float tmp4 = this->_height;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(362)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(362)
			Float tmp6 = height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(362)
			tmp3 = (tmp5 == tmp6);
		}
		else{
			HX_STACK_LINE(362)
			tmp3 = false;
		}
		HX_STACK_LINE(362)
		if ((tmp3)){
			HX_STACK_LINE(363)
			return null();
		}
		HX_STACK_LINE(365)
		bool tmp4 = keepPercentage;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(365)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(365)
		if ((tmp5)){
			HX_STACK_LINE(366)
			this->_silentResize = true;
			HX_STACK_LINE(367)
			Float tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(367)
			this->set_w(tmp6);
			HX_STACK_LINE(368)
			Float tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(368)
			this->set_h(tmp7);
			HX_STACK_LINE(369)
			this->_silentResize = false;
		}
		else{
			HX_STACK_LINE(371)
			this->_width = width;
			HX_STACK_LINE(372)
			this->_height = height;
		}
		HX_STACK_LINE(375)
		this->_onResize();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Widget_obj,resize,(void))

Void Widget_obj::_onResize( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","_onResize",0xa8c5e285,"ru.stablex.ui.widgets.Widget._onResize","ru/stablex/ui/widgets/Widget.hx",386,0xb63704bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(388)
		::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(388)
		::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		if ((tmp1)){
			HX_STACK_LINE(388)
			::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(388)
			tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
		}
		else{
			HX_STACK_LINE(388)
			tmp2 = null();
		}
		HX_STACK_LINE(388)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(388)
		if ((tmp3)){
			HX_STACK_LINE(389)
			{
				HX_STACK_LINE(389)
				int tmp4 = this->_xUse;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(389)
				int _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(389)
				int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(389)
				switch( (int)(tmp5)){
					case (int)3: {
						HX_STACK_LINE(391)
						::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(391)
						bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(391)
						::ru::stablex::ui::widgets::Widget tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(391)
						if ((tmp7)){
							HX_STACK_LINE(391)
							::openfl::display::DisplayObjectContainer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(391)
							tmp8 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp9);
						}
						else{
							HX_STACK_LINE(391)
							tmp8 = null();
						}
						HX_STACK_LINE(391)
						Float tmp9 = tmp8->_width;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(391)
						Float tmp10 = this->_right;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(391)
						Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(391)
						Float tmp12 = this->_width;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(391)
						Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(391)
						this->set_x(tmp13);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(393)
						::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(393)
						bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(393)
						::ru::stablex::ui::widgets::Widget tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(393)
						if ((tmp7)){
							HX_STACK_LINE(393)
							::openfl::display::DisplayObjectContainer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(393)
							tmp8 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp9);
						}
						else{
							HX_STACK_LINE(393)
							tmp8 = null();
						}
						HX_STACK_LINE(393)
						Float tmp9 = tmp8->_width;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(393)
						::openfl::display::DisplayObjectContainer tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(393)
						bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(393)
						::ru::stablex::ui::widgets::Widget tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(393)
						if ((tmp11)){
							HX_STACK_LINE(393)
							::openfl::display::DisplayObjectContainer tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(393)
							tmp12 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp13);
						}
						else{
							HX_STACK_LINE(393)
							tmp12 = null();
						}
						HX_STACK_LINE(393)
						Float tmp13 = tmp12->_width;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(393)
						Float tmp14 = this->_rightPercent;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(393)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(393)
						Float tmp16 = (Float(tmp15) / Float((int)100));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(393)
						Float tmp17 = (tmp9 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(393)
						Float tmp18 = this->_width;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(393)
						Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(393)
						this->set_x(tmp19);
					}
					;break;
				}
			}
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				int tmp4 = this->_yUse;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(396)
				int _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(396)
				int tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(396)
				switch( (int)(tmp5)){
					case (int)7: {
						HX_STACK_LINE(398)
						::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(398)
						bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(398)
						::ru::stablex::ui::widgets::Widget tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(398)
						if ((tmp7)){
							HX_STACK_LINE(398)
							::openfl::display::DisplayObjectContainer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(398)
							tmp8 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp9);
						}
						else{
							HX_STACK_LINE(398)
							tmp8 = null();
						}
						HX_STACK_LINE(398)
						Float tmp9 = tmp8->_height;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(398)
						Float tmp10 = this->_bottom;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(398)
						Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(398)
						Float tmp12 = this->_height;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(398)
						Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(398)
						this->set_y(tmp13);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(400)
						::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(400)
						bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(400)
						::ru::stablex::ui::widgets::Widget tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(400)
						if ((tmp7)){
							HX_STACK_LINE(400)
							::openfl::display::DisplayObjectContainer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(400)
							tmp8 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp9);
						}
						else{
							HX_STACK_LINE(400)
							tmp8 = null();
						}
						HX_STACK_LINE(400)
						Float tmp9 = tmp8->_height;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(400)
						::openfl::display::DisplayObjectContainer tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(400)
						bool tmp11 = ::Std_obj::is(tmp10,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(400)
						::ru::stablex::ui::widgets::Widget tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(400)
						if ((tmp11)){
							HX_STACK_LINE(400)
							::openfl::display::DisplayObjectContainer tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(400)
							tmp12 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp13);
						}
						else{
							HX_STACK_LINE(400)
							tmp12 = null();
						}
						HX_STACK_LINE(400)
						Float tmp13 = tmp12->_height;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(400)
						Float tmp14 = this->_bottomPercent;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(400)
						Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(400)
						Float tmp16 = (Float(tmp15) / Float((int)100));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(400)
						Float tmp17 = (tmp9 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(400)
						Float tmp18 = this->_height;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(400)
						Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(400)
						this->set_y(tmp19);
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(405)
		bool tmp4 = this->overflow;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(405)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(405)
		if ((tmp5)){
			HX_STACK_LINE(406)
			Float tmp6 = this->_width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(406)
			Float tmp7 = this->_height;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(406)
			::openfl::geom::Rectangle tmp8 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(406)
			this->set_scrollRect(tmp8);
		}
		HX_STACK_LINE(410)
		bool tmp6 = this->_resizing;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(410)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(410)
		if ((tmp7)){
			HX_STACK_LINE(411)
			this->_resizing = true;
			HX_STACK_LINE(414)
			bool tmp8 = this->created;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(414)
			if ((tmp8)){
				HX_STACK_LINE(415)
				this->onResize();
			}
			HX_STACK_LINE(419)
			bool tmp9 = this->initialized;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(419)
			if ((tmp9)){
				HX_STACK_LINE(420)
				this->refresh();
			}
			HX_STACK_LINE(423)
			this->_resizing = false;
		}
		HX_STACK_LINE(426)
		bool tmp8 = this->created;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(426)
		::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(426)
		if ((tmp8)){
			HX_STACK_LINE(426)
			tmp9 = HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d");
		}
		else{
			HX_STACK_LINE(426)
			tmp9 = HX_HCSTRING("widgetInitialResize","\x34","\x2f","\xdc","\x47");
		}
		HX_STACK_LINE(426)
		::ru::stablex::ui::events::WidgetEvent tmp10 = ::ru::stablex::ui::events::WidgetEvent_obj::__new(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(426)
		this->dispatchEvent(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,_onResize,(void))

Void Widget_obj::onResize( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","onResize",0xbbedcd20,"ru.stablex.ui.widgets.Widget.onResize","ru/stablex/ui/widgets/Widget.hx",434,0xb63704bd)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,onResize,(void))

::openfl::display::DisplayObject Widget_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","addChild",0x92dc4c68,"ru.stablex.ui.widgets.Widget.addChild","ru/stablex/ui/widgets/Widget.hx",442,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(443)
	bool tmp = (child->parent != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(443)
	if ((tmp)){
		HX_STACK_LINE(444)
		::openfl::display::DisplayObject tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(444)
		child->parent->removeChild(tmp1);
	}
	HX_STACK_LINE(447)
	::openfl::display::DisplayObject tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(447)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(447)
	if ((tmp2)){
		HX_STACK_LINE(448)
		::ru::stablex::ui::widgets::Widget tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(448)
		tmp3 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(448)
		tmp3->_newParent(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(449)
		::ru::stablex::ui::widgets::Widget tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(449)
		tmp4 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(449)
		Dynamic tmp5 = tmp4->_onParentResize_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(449)
		this->addUniqueListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp5,null(),null(),null());
		HX_STACK_LINE(450)
		::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(450)
		tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(450)
		Dynamic tmp7 = tmp6->_onParentResize_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(450)
		this->addUniqueListener(HX_HCSTRING("widgetInitialResize","\x34","\x2f","\xdc","\x47"),tmp7,null(),null(),null());
	}
	HX_STACK_LINE(453)
	::openfl::display::DisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(453)
	::openfl::display::DisplayObject tmp4 = this->super::addChild(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(453)
	return tmp4;
}


::openfl::display::DisplayObject Widget_obj::addChildAt( ::openfl::display::DisplayObject child,int idx){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","addChildAt",0x3bd66f7b,"ru.stablex.ui.widgets.Widget.addChildAt","ru/stablex/ui/widgets/Widget.hx",461,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(462)
	bool tmp = (child->parent != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(462)
	if ((tmp)){
		HX_STACK_LINE(463)
		::openfl::display::DisplayObject tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(463)
		child->parent->removeChild(tmp1);
	}
	HX_STACK_LINE(466)
	::openfl::display::DisplayObject tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(466)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(466)
	if ((tmp2)){
		HX_STACK_LINE(467)
		::ru::stablex::ui::widgets::Widget tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(467)
		tmp3 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(467)
		tmp3->_newParent(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(468)
		::ru::stablex::ui::widgets::Widget tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(468)
		tmp4 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(468)
		Dynamic tmp5 = tmp4->_onParentResize_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(468)
		this->addUniqueListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp5,null(),null(),null());
		HX_STACK_LINE(469)
		::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(469)
		tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(469)
		Dynamic tmp7 = tmp6->_onParentResize_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(469)
		this->addUniqueListener(HX_HCSTRING("widgetInitialResize","\x34","\x2f","\xdc","\x47"),tmp7,null(),null(),null());
	}
	HX_STACK_LINE(472)
	::openfl::display::DisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(472)
	int tmp4 = idx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(472)
	::openfl::display::DisplayObject tmp5 = this->super::addChildAt(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(472)
	return tmp5;
}


::openfl::display::DisplayObject Widget_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","removeChild",0xc217742b,"ru.stablex.ui.widgets.Widget.removeChild","ru/stablex/ui/widgets/Widget.hx",480,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(481)
	::openfl::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(481)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(481)
	if ((tmp1)){
		HX_STACK_LINE(482)
		::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(482)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(482)
		Dynamic tmp3 = tmp2->_onParentResize_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(482)
		this->removeEventListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp3,null());
		HX_STACK_LINE(483)
		::ru::stablex::ui::widgets::Widget tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(483)
		tmp4 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(483)
		Dynamic tmp5 = tmp4->_onParentResize_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(483)
		this->removeEventListener(HX_HCSTRING("widgetInitialResize","\x34","\x2f","\xdc","\x47"),tmp5,null());
		HX_STACK_LINE(484)
		::openfl::events::EventDispatcher tmp6 = ::ru::stablex::ui::UIBuilder_obj::dispatcher;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(484)
		::ru::stablex::ui::events::WidgetEvent tmp7 = ::ru::stablex::ui::events::WidgetEvent_obj::__new(HX_HCSTRING("widgetRemoved","\x3c","\xd8","\x41","\xfd"),((::ru::stablex::ui::widgets::Widget)(child)));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(484)
		tmp6->dispatchEvent(tmp7);
	}
	HX_STACK_LINE(486)
	::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(486)
	::openfl::display::DisplayObject tmp3 = this->super::removeChild(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(486)
	return tmp3;
}


::openfl::display::DisplayObject Widget_obj::removeChildAt( int idx){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","removeChildAt",0x0dfd4dfe,"ru.stablex.ui.widgets.Widget.removeChildAt","ru/stablex/ui/widgets/Widget.hx",494,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(495)
	int tmp = idx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(495)
	::openfl::display::DisplayObject tmp1 = this->getChildAt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(495)
	::openfl::display::DisplayObject child = tmp1;		HX_STACK_VAR(child,"child");
	HX_STACK_LINE(496)
	::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(496)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(496)
	if ((tmp3)){
		HX_STACK_LINE(497)
		::ru::stablex::ui::widgets::Widget tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(497)
		tmp4 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(497)
		Dynamic tmp5 = tmp4->_onParentResize_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(497)
		this->removeEventListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp5,null());
		HX_STACK_LINE(498)
		::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(498)
		tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(498)
		Dynamic tmp7 = tmp6->_onParentResize_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(498)
		this->removeEventListener(HX_HCSTRING("widgetInitialResize","\x34","\x2f","\xdc","\x47"),tmp7,null());
		HX_STACK_LINE(499)
		::openfl::events::EventDispatcher tmp8 = ::ru::stablex::ui::UIBuilder_obj::dispatcher;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(499)
		::ru::stablex::ui::events::WidgetEvent tmp9 = ::ru::stablex::ui::events::WidgetEvent_obj::__new(HX_HCSTRING("widgetRemoved","\x3c","\xd8","\x41","\xfd"),((::ru::stablex::ui::widgets::Widget)(child)));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(499)
		tmp8->dispatchEvent(tmp9);
	}
	HX_STACK_LINE(501)
	int tmp4 = idx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(501)
	::openfl::display::DisplayObject tmp5 = this->super::removeChildAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(501)
	return tmp5;
}


Dynamic Widget_obj::getChildAs( ::String name,::hx::Class cls){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","getChildAs",0x23adc9a5,"ru.stablex.ui.widgets.Widget.getChildAs","ru/stablex/ui/widgets/Widget.hx",509,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(510)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(510)
	::ru::stablex::ui::widgets::Widget tmp1 = this->_findChildWidget(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(510)
	::ru::stablex::ui::widgets::Widget w = tmp1;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(511)
	::ru::stablex::ui::widgets::Widget tmp2 = w;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(511)
	::hx::Class tmp3 = cls;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(511)
	bool tmp4 = ::Std_obj::is(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(511)
	Dynamic tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(511)
	if ((tmp4)){
		HX_STACK_LINE(511)
		tmp5 = ((Dynamic)(w));
	}
	else{
		HX_STACK_LINE(511)
		tmp5 = null();
	}
	HX_STACK_LINE(511)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,getChildAs,return )

::ru::stablex::ui::widgets::Widget Widget_obj::getChild( ::String name){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","getChild",0x795635d3,"ru.stablex.ui.widgets.Widget.getChild","ru/stablex/ui/widgets/Widget.hx",519,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(520)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(520)
	::ru::stablex::ui::widgets::Widget tmp1 = this->_findChildWidget(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(520)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,getChild,return )

::ru::stablex::ui::widgets::Widget Widget_obj::_findChildWidget( ::String name){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","_findChildWidget",0x2226cef5,"ru.stablex.ui.widgets.Widget._findChildWidget","ru/stablex/ui/widgets/Widget.hx",528,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(529)
	::openfl::display::DisplayObject child = null();		HX_STACK_VAR(child,"child");
	HX_STACK_LINE(532)
	{
		HX_STACK_LINE(532)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(532)
		int tmp = this->get_numChildren();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(532)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(532)
		while((true)){
			HX_STACK_LINE(532)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(532)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(532)
			if ((tmp2)){
				HX_STACK_LINE(532)
				break;
			}
			HX_STACK_LINE(532)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(532)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(533)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(533)
			::openfl::display::DisplayObject tmp5 = this->getChildAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(533)
			child = tmp5;
			HX_STACK_LINE(535)
			::String tmp6 = child->get_name();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(535)
			::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(535)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(535)
			if ((tmp8)){
				HX_STACK_LINE(535)
				break;
			}
			HX_STACK_LINE(538)
			::openfl::display::DisplayObject tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(538)
			bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(538)
			if ((tmp10)){
				HX_STACK_LINE(539)
				::ru::stablex::ui::widgets::Widget tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(539)
				tmp11 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
				HX_STACK_LINE(539)
				::String tmp12 = name;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(539)
				::ru::stablex::ui::widgets::Widget tmp13 = tmp11->_findChildWidget(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(539)
				child = tmp13;
				HX_STACK_LINE(540)
				bool tmp14 = (child != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(540)
				if ((tmp14)){
					HX_STACK_LINE(540)
					break;
				}
			}
			HX_STACK_LINE(543)
			child = null();
		}
	}
	HX_STACK_LINE(546)
	::openfl::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(546)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(546)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(546)
	if ((tmp1)){
		HX_STACK_LINE(546)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
	}
	else{
		HX_STACK_LINE(546)
		tmp2 = null();
	}
	HX_STACK_LINE(546)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,_findChildWidget,return )

::ru::stablex::ui::widgets::Widget Widget_obj::getParent( ::String name){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","getParent",0xe2dc2913,"ru.stablex.ui.widgets.Widget.getParent","ru/stablex/ui/widgets/Widget.hx",554,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(555)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(555)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(555)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(555)
	if ((tmp1)){
		HX_STACK_LINE(555)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(555)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
	}
	else{
		HX_STACK_LINE(555)
		tmp2 = null();
	}
	HX_STACK_LINE(555)
	::ru::stablex::ui::widgets::Widget p = tmp2;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(557)
	while((true)){
		HX_STACK_LINE(557)
		bool tmp3 = (p != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(557)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(557)
		if ((tmp3)){
			HX_STACK_LINE(557)
			::String tmp5 = p->get_name();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(557)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(557)
			::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(557)
			tmp4 = (tmp6 != tmp7);
		}
		else{
			HX_STACK_LINE(557)
			tmp4 = false;
		}
		HX_STACK_LINE(557)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(557)
		if ((tmp5)){
			HX_STACK_LINE(557)
			break;
		}
		HX_STACK_LINE(558)
		::openfl::display::DisplayObjectContainer tmp6 = p->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(558)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(558)
		::ru::stablex::ui::widgets::Widget tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(558)
		if ((tmp7)){
			HX_STACK_LINE(558)
			tmp8 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(p->parent);
		}
		else{
			HX_STACK_LINE(558)
			tmp8 = null();
		}
		HX_STACK_LINE(558)
		p = tmp8;
	}
	HX_STACK_LINE(561)
	::ru::stablex::ui::widgets::Widget tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(561)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,getParent,return )

Dynamic Widget_obj::getParentAs( ::String name,::hx::Class cls){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","getParentAs",0x71070ce5,"ru.stablex.ui.widgets.Widget.getParentAs","ru/stablex/ui/widgets/Widget.hx",569,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(570)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(570)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(570)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(570)
	if ((tmp1)){
		HX_STACK_LINE(570)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(570)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
	}
	else{
		HX_STACK_LINE(570)
		tmp2 = null();
	}
	HX_STACK_LINE(570)
	::ru::stablex::ui::widgets::Widget p = tmp2;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(572)
	while((true)){
		HX_STACK_LINE(572)
		bool tmp3 = (p != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(572)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(572)
		if ((tmp3)){
			HX_STACK_LINE(572)
			::String tmp5 = p->get_name();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(572)
			::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(572)
			::String tmp7 = name;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(572)
			tmp4 = (tmp6 != tmp7);
		}
		else{
			HX_STACK_LINE(572)
			tmp4 = false;
		}
		HX_STACK_LINE(572)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(572)
		if ((tmp5)){
			HX_STACK_LINE(572)
			break;
		}
		HX_STACK_LINE(573)
		::openfl::display::DisplayObjectContainer tmp6 = p->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(573)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(573)
		::ru::stablex::ui::widgets::Widget tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(573)
		if ((tmp7)){
			HX_STACK_LINE(573)
			tmp8 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(p->parent);
		}
		else{
			HX_STACK_LINE(573)
			tmp8 = null();
		}
		HX_STACK_LINE(573)
		p = tmp8;
	}
	HX_STACK_LINE(576)
	::ru::stablex::ui::widgets::Widget tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(576)
	::hx::Class tmp4 = cls;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(576)
	bool tmp5 = ::Std_obj::is(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(576)
	Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(576)
	if ((tmp5)){
		HX_STACK_LINE(576)
		tmp6 = ((Dynamic)(p));
	}
	else{
		HX_STACK_LINE(576)
		tmp6 = null();
	}
	HX_STACK_LINE(576)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Widget_obj,getParentAs,return )

Dynamic Widget_obj::getNearestParent( ::hx::Class cls){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","getNearestParent",0xca46475f,"ru.stablex.ui.widgets.Widget.getNearestParent","ru/stablex/ui/widgets/Widget.hx",584,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(585)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(585)
	::openfl::display::DisplayObjectContainer p = tmp;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(587)
	while((true)){
		HX_STACK_LINE(587)
		bool tmp1 = (p != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(587)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(587)
		if ((tmp2)){
			HX_STACK_LINE(587)
			break;
		}
		HX_STACK_LINE(588)
		::openfl::display::DisplayObjectContainer tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(588)
		::hx::Class tmp4 = cls;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(588)
		bool tmp5 = ::Std_obj::is(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(588)
		if ((tmp5)){
			HX_STACK_LINE(588)
			Dynamic tmp6 = ((Dynamic)(p));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(588)
			return tmp6;
		}
		HX_STACK_LINE(589)
		p = p->parent;
	}
	HX_STACK_LINE(592)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,getNearestParent,return )

Dynamic Widget_obj::as( ::hx::Class cls){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","as",0xe1b5e1df,"ru.stablex.ui.widgets.Widget.as","ru/stablex/ui/widgets/Widget.hx",600,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(601)
	::hx::Class tmp = cls;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(601)
	bool tmp1 = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(601)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(601)
	if ((tmp1)){
		HX_STACK_LINE(601)
		tmp2 = ((Dynamic)(hx::ObjectPtr<OBJ_>(this)));
	}
	else{
		HX_STACK_LINE(601)
		tmp2 = null();
	}
	HX_STACK_LINE(601)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,as,return )

bool Widget_obj::set_overflow( bool o){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_overflow",0xf1d491ec,"ru.stablex.ui.widgets.Widget.set_overflow","ru/stablex/ui/widgets/Widget.hx",612,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(613)
	bool tmp = o;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(613)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(613)
	if ((tmp1)){
		HX_STACK_LINE(614)
		Float tmp2 = this->_width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(614)
		Float tmp3 = this->_height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(614)
		::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(614)
		this->set_scrollRect(tmp4);
	}
	else{
		HX_STACK_LINE(616)
		this->set_scrollRect(null());
	}
	HX_STACK_LINE(619)
	bool tmp2 = this->overflow = o;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(619)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_overflow,return )

::String Widget_obj::set_skinName( ::String sn){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_skinName",0x491fe612,"ru.stablex.ui.widgets.Widget.set_skinName","ru/stablex/ui/widgets/Widget.hx",627,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sn,"sn")
	HX_STACK_LINE(628)
	::haxe::ds::StringMap tmp = ::ru::stablex::ui::UIBuilder_obj::skins;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(628)
	::String tmp1 = sn;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(628)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(628)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(628)
	::ru::stablex::ui::skins::Skin tmp4 = tmp3().Cast< ::ru::stablex::ui::skins::Skin >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(628)
	this->skin = tmp4;
	HX_STACK_LINE(629)
	bool tmp5 = this->created;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(629)
	if ((tmp5)){
		HX_STACK_LINE(629)
		::ru::stablex::ui::skins::Skin tmp6 = this->skin;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(629)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(629)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(629)
		if ((tmp7)){
			HX_STACK_LINE(629)
			bool tmp9 = this->_skinQueued;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(629)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(629)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(629)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(629)
			tmp8 = false;
		}
		HX_STACK_LINE(629)
		if ((tmp8)){
			HX_STACK_LINE(629)
			::List tmp9 = ::ru::stablex::ui::UIBuilder_obj::_skinQueue;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(629)
			tmp9->add(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(629)
			this->_skinQueued = true;
		}
	}
	HX_STACK_LINE(630)
	::String tmp6 = this->skinName = sn;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(630)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_skinName,return )

::ru::stablex::ui::widgets::Widget Widget_obj::get_wparent( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_wparent",0x461c866b,"ru.stablex.ui.widgets.Widget.get_wparent","ru/stablex/ui/widgets/Widget.hx",638,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(640)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(640)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(639)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(640)
	if ((tmp1)){
		HX_STACK_LINE(641)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(641)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
	}
	else{
		HX_STACK_LINE(642)
		tmp2 = null();
	}
	HX_STACK_LINE(639)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_wparent,return )

Float Widget_obj::set_left( Float l){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_left",0x498d99b1,"ru.stablex.ui.widgets.Widget.set_left","ru/stablex/ui/widgets/Widget.hx",651,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(652)
	this->_xUse = (int)1;
	HX_STACK_LINE(653)
	Float tmp = l;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(653)
	this->set_x(tmp);
	HX_STACK_LINE(654)
	Float tmp1 = this->_left = l;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(654)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_left,return )

Float Widget_obj::get_left( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_left",0x9b30403d,"ru.stablex.ui.widgets.Widget.get_left","ru/stablex/ui/widgets/Widget.hx",662,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(663)
	Float tmp = this->get_x();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(663)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_left,return )

Float Widget_obj::set_right( Float r){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_right",0x8965eef2,"ru.stablex.ui.widgets.Widget.set_right","ru/stablex/ui/widgets/Widget.hx",671,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(672)
	this->_xUse = (int)3;
	HX_STACK_LINE(673)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(673)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(673)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(673)
	if ((tmp1)){
		HX_STACK_LINE(673)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(673)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
	}
	else{
		HX_STACK_LINE(673)
		tmp2 = null();
	}
	HX_STACK_LINE(673)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(673)
	if ((tmp3)){
		HX_STACK_LINE(674)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(674)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(674)
		::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(674)
		if ((tmp5)){
			HX_STACK_LINE(674)
			::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(674)
			tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp7);
		}
		else{
			HX_STACK_LINE(674)
			tmp6 = null();
		}
		HX_STACK_LINE(674)
		Float tmp7 = tmp6->_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(674)
		Float tmp8 = r;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(674)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(674)
		Float tmp10 = this->get_w();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(674)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(674)
		this->set_x(tmp11);
	}
	HX_STACK_LINE(676)
	Float tmp4 = this->_right = r;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(676)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_right,return )

Float Widget_obj::get_right( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_right",0xa61502e6,"ru.stablex.ui.widgets.Widget.get_right","ru/stablex/ui/widgets/Widget.hx",684,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(685)
	int tmp = this->_xUse;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(685)
	bool tmp1 = (tmp == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(685)
	if ((tmp1)){
		HX_STACK_LINE(686)
		Float tmp2 = this->_right;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(686)
		return tmp2;
	}
	HX_STACK_LINE(689)
	::openfl::display::DisplayObjectContainer tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(689)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(689)
	::ru::stablex::ui::widgets::Widget tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(689)
	if ((tmp3)){
		HX_STACK_LINE(689)
		::openfl::display::DisplayObjectContainer tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(689)
		tmp4 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp5);
	}
	else{
		HX_STACK_LINE(689)
		tmp4 = null();
	}
	HX_STACK_LINE(689)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(689)
	if ((tmp5)){
		HX_STACK_LINE(690)
		::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(690)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(690)
		::ru::stablex::ui::widgets::Widget tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(690)
		if ((tmp7)){
			HX_STACK_LINE(690)
			::openfl::display::DisplayObjectContainer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(690)
			tmp8 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp9);
		}
		else{
			HX_STACK_LINE(690)
			tmp8 = null();
		}
		HX_STACK_LINE(690)
		Float tmp9 = tmp8->_width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(690)
		Float tmp10 = this->get_x();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(690)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(690)
		Float tmp12 = this->get_w();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(690)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(690)
		return tmp13;
	}
	HX_STACK_LINE(693)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_right,return )

Float Widget_obj::set_leftPt( Float lp){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_leftPt",0xfb6c6e15,"ru.stablex.ui.widgets.Widget.set_leftPt","ru/stablex/ui/widgets/Widget.hx",701,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lp,"lp")
	HX_STACK_LINE(702)
	this->_xUse = (int)2;
	HX_STACK_LINE(704)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(704)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(704)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(704)
	if ((tmp1)){
		HX_STACK_LINE(704)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(704)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
	}
	else{
		HX_STACK_LINE(704)
		tmp2 = null();
	}
	HX_STACK_LINE(704)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(704)
	if ((tmp3)){
		HX_STACK_LINE(705)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(705)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(705)
		::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(705)
		if ((tmp5)){
			HX_STACK_LINE(705)
			::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(705)
			tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp7);
		}
		else{
			HX_STACK_LINE(705)
			tmp6 = null();
		}
		HX_STACK_LINE(705)
		Float tmp7 = tmp6->_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(705)
		Float tmp8 = lp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(705)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(705)
		Float tmp10 = (Float(tmp9) / Float((int)100));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(705)
		this->set_x(tmp10);
	}
	HX_STACK_LINE(708)
	Float tmp4 = this->_leftPercent = lp;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(708)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_leftPt,return )

Float Widget_obj::get_leftPt( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_leftPt",0xf7eecfa1,"ru.stablex.ui.widgets.Widget.get_leftPt","ru/stablex/ui/widgets/Widget.hx",716,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(717)
	int tmp = this->_xUse;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(717)
	bool tmp1 = (tmp == (int)2);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(717)
	if ((tmp1)){
		HX_STACK_LINE(718)
		Float tmp2 = this->_leftPercent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(718)
		return tmp2;
	}
	HX_STACK_LINE(721)
	::openfl::display::DisplayObjectContainer tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(721)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(721)
	::ru::stablex::ui::widgets::Widget tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(721)
	if ((tmp3)){
		HX_STACK_LINE(721)
		::openfl::display::DisplayObjectContainer tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(721)
		tmp4 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp5);
	}
	else{
		HX_STACK_LINE(721)
		tmp4 = null();
	}
	HX_STACK_LINE(721)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(721)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(721)
	if ((tmp5)){
		HX_STACK_LINE(721)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(721)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(721)
		::openfl::display::DisplayObjectContainer tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(721)
		bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(721)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(721)
		::ru::stablex::ui::widgets::Widget tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(721)
		bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(721)
		if ((tmp13)){
			HX_STACK_LINE(721)
			::openfl::display::DisplayObjectContainer tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(721)
			::openfl::display::DisplayObjectContainer tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(721)
			::ru::stablex::ui::widgets::Widget tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(721)
			tmp16 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp15);
			HX_STACK_LINE(721)
			tmp12 = tmp16;
		}
		else{
			HX_STACK_LINE(721)
			tmp12 = null();
		}
		HX_STACK_LINE(721)
		Float tmp14 = tmp12->_width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(721)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(721)
		tmp6 = (tmp15 != (int)0);
	}
	else{
		HX_STACK_LINE(721)
		tmp6 = false;
	}
	HX_STACK_LINE(721)
	if ((tmp6)){
		HX_STACK_LINE(722)
		Float tmp7 = this->get_x();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(722)
		::openfl::display::DisplayObjectContainer tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(722)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(722)
		::ru::stablex::ui::widgets::Widget tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(722)
		if ((tmp9)){
			HX_STACK_LINE(722)
			::openfl::display::DisplayObjectContainer tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(722)
			tmp10 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp11);
		}
		else{
			HX_STACK_LINE(722)
			tmp10 = null();
		}
		HX_STACK_LINE(722)
		Float tmp11 = tmp10->_width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(722)
		Float tmp12 = (Float(tmp7) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(722)
		Float tmp13 = (tmp12 * (int)100);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(722)
		return tmp13;
	}
	HX_STACK_LINE(725)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_leftPt,return )

Float Widget_obj::set_rightPt( Float rp){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_rightPt",0x21f55596,"ru.stablex.ui.widgets.Widget.set_rightPt","ru/stablex/ui/widgets/Widget.hx",733,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rp,"rp")
	HX_STACK_LINE(734)
	this->_xUse = (int)4;
	HX_STACK_LINE(736)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(736)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(736)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(736)
	if ((tmp1)){
		HX_STACK_LINE(736)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(736)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
	}
	else{
		HX_STACK_LINE(736)
		tmp2 = null();
	}
	HX_STACK_LINE(736)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(736)
	if ((tmp3)){
		HX_STACK_LINE(737)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(737)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(737)
		::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(737)
		if ((tmp5)){
			HX_STACK_LINE(737)
			::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(737)
			tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp7);
		}
		else{
			HX_STACK_LINE(737)
			tmp6 = null();
		}
		HX_STACK_LINE(737)
		Float tmp7 = tmp6->_width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(737)
		::openfl::display::DisplayObjectContainer tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(737)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(737)
		::ru::stablex::ui::widgets::Widget tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(737)
		if ((tmp9)){
			HX_STACK_LINE(737)
			::openfl::display::DisplayObjectContainer tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(737)
			tmp10 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp11);
		}
		else{
			HX_STACK_LINE(737)
			tmp10 = null();
		}
		HX_STACK_LINE(737)
		Float tmp11 = tmp10->_width;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(737)
		Float tmp12 = rp;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(737)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(737)
		Float tmp14 = (Float(tmp13) / Float((int)100));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(737)
		Float tmp15 = (tmp7 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(737)
		Float tmp16 = this->get_w();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(737)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(737)
		this->set_x(tmp17);
	}
	HX_STACK_LINE(740)
	Float tmp4 = this->_rightPercent = rp;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(740)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_rightPt,return )

Float Widget_obj::get_rightPt( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_rightPt",0x17884e8a,"ru.stablex.ui.widgets.Widget.get_rightPt","ru/stablex/ui/widgets/Widget.hx",748,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(749)
	int tmp = this->_xUse;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(749)
	bool tmp1 = (tmp == (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(749)
	if ((tmp1)){
		HX_STACK_LINE(750)
		Float tmp2 = this->_rightPercent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(750)
		return tmp2;
	}
	HX_STACK_LINE(753)
	::openfl::display::DisplayObjectContainer tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(753)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(753)
	::ru::stablex::ui::widgets::Widget tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(753)
	if ((tmp3)){
		HX_STACK_LINE(753)
		::openfl::display::DisplayObjectContainer tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(753)
		tmp4 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp5);
	}
	else{
		HX_STACK_LINE(753)
		tmp4 = null();
	}
	HX_STACK_LINE(753)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(753)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(753)
	if ((tmp5)){
		HX_STACK_LINE(753)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(753)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(753)
		::openfl::display::DisplayObjectContainer tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(753)
		bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(753)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(753)
		::ru::stablex::ui::widgets::Widget tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(753)
		bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(753)
		if ((tmp13)){
			HX_STACK_LINE(753)
			::openfl::display::DisplayObjectContainer tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(753)
			::openfl::display::DisplayObjectContainer tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(753)
			::ru::stablex::ui::widgets::Widget tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(753)
			tmp16 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp15);
			HX_STACK_LINE(753)
			tmp12 = tmp16;
		}
		else{
			HX_STACK_LINE(753)
			tmp12 = null();
		}
		HX_STACK_LINE(753)
		Float tmp14 = tmp12->_width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(753)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(753)
		tmp6 = (tmp15 != (int)0);
	}
	else{
		HX_STACK_LINE(753)
		tmp6 = false;
	}
	HX_STACK_LINE(753)
	if ((tmp6)){
		HX_STACK_LINE(754)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(754)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(754)
		::ru::stablex::ui::widgets::Widget tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(754)
		if ((tmp8)){
			HX_STACK_LINE(754)
			::openfl::display::DisplayObjectContainer tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(754)
			tmp9 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp10);
		}
		else{
			HX_STACK_LINE(754)
			tmp9 = null();
		}
		HX_STACK_LINE(754)
		Float tmp10 = tmp9->_width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(754)
		Float tmp11 = this->get_x();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(754)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(754)
		Float tmp13 = this->_width;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(754)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(754)
		::openfl::display::DisplayObjectContainer tmp15 = this->parent;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(754)
		bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(754)
		::ru::stablex::ui::widgets::Widget tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(754)
		if ((tmp16)){
			HX_STACK_LINE(754)
			::openfl::display::DisplayObjectContainer tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(754)
			tmp17 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp18);
		}
		else{
			HX_STACK_LINE(754)
			tmp17 = null();
		}
		HX_STACK_LINE(754)
		Float tmp18 = tmp17->_width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(754)
		Float tmp19 = (Float(tmp14) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(754)
		Float tmp20 = (tmp19 * (int)100);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(754)
		return tmp20;
	}
	HX_STACK_LINE(757)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_rightPt,return )

Float Widget_obj::set_top( Float t){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_top",0xa112382b,"ru.stablex.ui.widgets.Widget.set_top","ru/stablex/ui/widgets/Widget.hx",765,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(766)
	this->_yUse = (int)5;
	HX_STACK_LINE(767)
	Float tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(767)
	this->set_y(tmp);
	HX_STACK_LINE(768)
	Float tmp1 = this->_top = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(768)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_top,return )

Float Widget_obj::get_top( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_top",0xae10a71f,"ru.stablex.ui.widgets.Widget.get_top","ru/stablex/ui/widgets/Widget.hx",776,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(777)
	Float tmp = this->get_y();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(777)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_top,return )

Float Widget_obj::set_bottom( Float b){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_bottom",0xc71db715,"ru.stablex.ui.widgets.Widget.set_bottom","ru/stablex/ui/widgets/Widget.hx",785,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(786)
	this->_yUse = (int)7;
	HX_STACK_LINE(787)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(787)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(787)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(787)
	if ((tmp1)){
		HX_STACK_LINE(787)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(787)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
	}
	else{
		HX_STACK_LINE(787)
		tmp2 = null();
	}
	HX_STACK_LINE(787)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(787)
	if ((tmp3)){
		HX_STACK_LINE(788)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(788)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(788)
		::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(788)
		if ((tmp5)){
			HX_STACK_LINE(788)
			::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(788)
			tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp7);
		}
		else{
			HX_STACK_LINE(788)
			tmp6 = null();
		}
		HX_STACK_LINE(788)
		Float tmp7 = tmp6->_height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(788)
		Float tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(788)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(788)
		Float tmp10 = this->get_h();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(788)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(788)
		this->set_y(tmp11);
	}
	HX_STACK_LINE(790)
	Float tmp4 = this->_bottom = b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(790)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_bottom,return )

Float Widget_obj::get_bottom( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_bottom",0xc3a018a1,"ru.stablex.ui.widgets.Widget.get_bottom","ru/stablex/ui/widgets/Widget.hx",798,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(799)
	int tmp = this->_yUse;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(799)
	bool tmp1 = (tmp == (int)7);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(799)
	if ((tmp1)){
		HX_STACK_LINE(800)
		Float tmp2 = this->_bottom;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(800)
		return tmp2;
	}
	HX_STACK_LINE(803)
	::openfl::display::DisplayObjectContainer tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(803)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(803)
	::ru::stablex::ui::widgets::Widget tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(803)
	if ((tmp3)){
		HX_STACK_LINE(803)
		::openfl::display::DisplayObjectContainer tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(803)
		tmp4 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp5);
	}
	else{
		HX_STACK_LINE(803)
		tmp4 = null();
	}
	HX_STACK_LINE(803)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(803)
	if ((tmp5)){
		HX_STACK_LINE(804)
		::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(804)
		bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(804)
		::ru::stablex::ui::widgets::Widget tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(804)
		if ((tmp7)){
			HX_STACK_LINE(804)
			::openfl::display::DisplayObjectContainer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(804)
			tmp8 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp9);
		}
		else{
			HX_STACK_LINE(804)
			tmp8 = null();
		}
		HX_STACK_LINE(804)
		Float tmp9 = tmp8->_height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(804)
		Float tmp10 = this->get_y();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(804)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(804)
		Float tmp12 = this->get_h();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(804)
		Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(804)
		return tmp13;
	}
	HX_STACK_LINE(807)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_bottom,return )

Float Widget_obj::set_topPt( Float tp){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_topPt",0xb4311f0f,"ru.stablex.ui.widgets.Widget.set_topPt","ru/stablex/ui/widgets/Widget.hx",815,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tp,"tp")
	HX_STACK_LINE(816)
	this->_yUse = (int)6;
	HX_STACK_LINE(818)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(818)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(818)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(818)
	if ((tmp1)){
		HX_STACK_LINE(818)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(818)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
	}
	else{
		HX_STACK_LINE(818)
		tmp2 = null();
	}
	HX_STACK_LINE(818)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(818)
	if ((tmp3)){
		HX_STACK_LINE(819)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(819)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(819)
		::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(819)
		if ((tmp5)){
			HX_STACK_LINE(819)
			::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(819)
			tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp7);
		}
		else{
			HX_STACK_LINE(819)
			tmp6 = null();
		}
		HX_STACK_LINE(819)
		Float tmp7 = tmp6->_height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(819)
		Float tmp8 = tp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(819)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(819)
		Float tmp10 = (Float(tmp9) / Float((int)100));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(819)
		this->set_y(tmp10);
	}
	HX_STACK_LINE(822)
	Float tmp4 = this->_topPercent = tp;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(822)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_topPt,return )

Float Widget_obj::get_topPt( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_topPt",0xd0e03303,"ru.stablex.ui.widgets.Widget.get_topPt","ru/stablex/ui/widgets/Widget.hx",830,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(831)
	int tmp = this->_yUse;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(831)
	bool tmp1 = (tmp == (int)6);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(831)
	if ((tmp1)){
		HX_STACK_LINE(832)
		Float tmp2 = this->_topPercent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(832)
		return tmp2;
	}
	HX_STACK_LINE(835)
	::openfl::display::DisplayObjectContainer tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(835)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(835)
	::ru::stablex::ui::widgets::Widget tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(835)
	if ((tmp3)){
		HX_STACK_LINE(835)
		::openfl::display::DisplayObjectContainer tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(835)
		tmp4 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp5);
	}
	else{
		HX_STACK_LINE(835)
		tmp4 = null();
	}
	HX_STACK_LINE(835)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(835)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(835)
	if ((tmp5)){
		HX_STACK_LINE(835)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(835)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(835)
		::openfl::display::DisplayObjectContainer tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(835)
		bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(835)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(835)
		::ru::stablex::ui::widgets::Widget tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(835)
		bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(835)
		if ((tmp13)){
			HX_STACK_LINE(835)
			::openfl::display::DisplayObjectContainer tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(835)
			::openfl::display::DisplayObjectContainer tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(835)
			::ru::stablex::ui::widgets::Widget tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(835)
			tmp16 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp15);
			HX_STACK_LINE(835)
			tmp12 = tmp16;
		}
		else{
			HX_STACK_LINE(835)
			tmp12 = null();
		}
		HX_STACK_LINE(835)
		Float tmp14 = tmp12->_height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(835)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(835)
		tmp6 = (tmp15 != (int)0);
	}
	else{
		HX_STACK_LINE(835)
		tmp6 = false;
	}
	HX_STACK_LINE(835)
	if ((tmp6)){
		HX_STACK_LINE(836)
		Float tmp7 = this->get_y();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(836)
		::openfl::display::DisplayObjectContainer tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(836)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(836)
		::ru::stablex::ui::widgets::Widget tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(836)
		if ((tmp9)){
			HX_STACK_LINE(836)
			::openfl::display::DisplayObjectContainer tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(836)
			tmp10 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp11);
		}
		else{
			HX_STACK_LINE(836)
			tmp10 = null();
		}
		HX_STACK_LINE(836)
		Float tmp11 = tmp10->_height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(836)
		Float tmp12 = (Float(tmp7) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(836)
		Float tmp13 = (tmp12 * (int)100);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(836)
		return tmp13;
	}
	HX_STACK_LINE(839)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_topPt,return )

Float Widget_obj::set_bottomPt( Float bp){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_bottomPt",0x1349ac79,"ru.stablex.ui.widgets.Widget.set_bottomPt","ru/stablex/ui/widgets/Widget.hx",847,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bp,"bp")
	HX_STACK_LINE(848)
	this->_yUse = (int)8;
	HX_STACK_LINE(850)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(850)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(850)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(850)
	if ((tmp1)){
		HX_STACK_LINE(850)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(850)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
	}
	else{
		HX_STACK_LINE(850)
		tmp2 = null();
	}
	HX_STACK_LINE(850)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(850)
	if ((tmp3)){
		HX_STACK_LINE(851)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(851)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(851)
		::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(851)
		if ((tmp5)){
			HX_STACK_LINE(851)
			::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(851)
			tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp7);
		}
		else{
			HX_STACK_LINE(851)
			tmp6 = null();
		}
		HX_STACK_LINE(851)
		Float tmp7 = tmp6->_height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(851)
		::openfl::display::DisplayObjectContainer tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(851)
		bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(851)
		::ru::stablex::ui::widgets::Widget tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(851)
		if ((tmp9)){
			HX_STACK_LINE(851)
			::openfl::display::DisplayObjectContainer tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(851)
			tmp10 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp11);
		}
		else{
			HX_STACK_LINE(851)
			tmp10 = null();
		}
		HX_STACK_LINE(851)
		Float tmp11 = tmp10->_height;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(851)
		Float tmp12 = bp;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(851)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(851)
		Float tmp14 = (Float(tmp13) / Float((int)100));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(851)
		Float tmp15 = (tmp7 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(851)
		Float tmp16 = this->get_h();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(851)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(851)
		this->set_y(tmp17);
	}
	HX_STACK_LINE(854)
	Float tmp4 = this->_bottomPercent = bp;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(854)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_bottomPt,return )

Float Widget_obj::get_bottomPt( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_bottomPt",0xfe508905,"ru.stablex.ui.widgets.Widget.get_bottomPt","ru/stablex/ui/widgets/Widget.hx",862,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(863)
	int tmp = this->_yUse;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(863)
	bool tmp1 = (tmp == (int)8);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(863)
	if ((tmp1)){
		HX_STACK_LINE(864)
		Float tmp2 = this->_bottomPercent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(864)
		return tmp2;
	}
	HX_STACK_LINE(867)
	::openfl::display::DisplayObjectContainer tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(867)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(867)
	::ru::stablex::ui::widgets::Widget tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(867)
	if ((tmp3)){
		HX_STACK_LINE(867)
		::openfl::display::DisplayObjectContainer tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(867)
		tmp4 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp5);
	}
	else{
		HX_STACK_LINE(867)
		tmp4 = null();
	}
	HX_STACK_LINE(867)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(867)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(867)
	if ((tmp5)){
		HX_STACK_LINE(867)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(867)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(867)
		::openfl::display::DisplayObjectContainer tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(867)
		bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(867)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(867)
		::ru::stablex::ui::widgets::Widget tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(867)
		bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(867)
		if ((tmp13)){
			HX_STACK_LINE(867)
			::openfl::display::DisplayObjectContainer tmp14 = this->parent;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(867)
			::openfl::display::DisplayObjectContainer tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(867)
			::ru::stablex::ui::widgets::Widget tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(867)
			tmp16 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp15);
			HX_STACK_LINE(867)
			tmp12 = tmp16;
		}
		else{
			HX_STACK_LINE(867)
			tmp12 = null();
		}
		HX_STACK_LINE(867)
		Float tmp14 = tmp12->_height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(867)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(867)
		tmp6 = (tmp15 != (int)0);
	}
	else{
		HX_STACK_LINE(867)
		tmp6 = false;
	}
	HX_STACK_LINE(867)
	if ((tmp6)){
		HX_STACK_LINE(868)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(868)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(868)
		::ru::stablex::ui::widgets::Widget tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(868)
		if ((tmp8)){
			HX_STACK_LINE(868)
			::openfl::display::DisplayObjectContainer tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(868)
			tmp9 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp10);
		}
		else{
			HX_STACK_LINE(868)
			tmp9 = null();
		}
		HX_STACK_LINE(868)
		Float tmp10 = tmp9->_height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(868)
		Float tmp11 = this->get_y();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(868)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(868)
		Float tmp13 = this->_height;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(868)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(868)
		::openfl::display::DisplayObjectContainer tmp15 = this->parent;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(868)
		bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(868)
		::ru::stablex::ui::widgets::Widget tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(868)
		if ((tmp16)){
			HX_STACK_LINE(868)
			::openfl::display::DisplayObjectContainer tmp18 = this->parent;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(868)
			tmp17 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp18);
		}
		else{
			HX_STACK_LINE(868)
			tmp17 = null();
		}
		HX_STACK_LINE(868)
		Float tmp18 = tmp17->_height;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(868)
		Float tmp19 = (Float(tmp14) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(868)
		Float tmp20 = (tmp19 * (int)100);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(868)
		return tmp20;
	}
	HX_STACK_LINE(871)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_bottomPt,return )

Float Widget_obj::set_w( Float w){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_w",0xfe21208d,"ru.stablex.ui.widgets.Widget.set_w","ru/stablex/ui/widgets/Widget.hx",879,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(880)
	this->_width = w;
	HX_STACK_LINE(881)
	this->_widthUsePercent = false;
	HX_STACK_LINE(882)
	bool tmp = this->_silentResize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(882)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(882)
	if ((tmp1)){
		HX_STACK_LINE(883)
		this->_onResize();
	}
	HX_STACK_LINE(885)
	Float tmp2 = w;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(885)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_w,return )

Float Widget_obj::get_w( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_w",0x15522a81,"ru.stablex.ui.widgets.Widget.get_w","ru/stablex/ui/widgets/Widget.hx",893,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(894)
	Float tmp = this->_width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(894)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_w,return )

Float Widget_obj::set_h( Float h){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_h",0xfe21207e,"ru.stablex.ui.widgets.Widget.set_h","ru/stablex/ui/widgets/Widget.hx",902,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(903)
	this->_height = h;
	HX_STACK_LINE(904)
	this->_heightUsePercent = false;
	HX_STACK_LINE(905)
	bool tmp = this->_silentResize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(905)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(905)
	if ((tmp1)){
		HX_STACK_LINE(906)
		this->_onResize();
	}
	HX_STACK_LINE(908)
	Float tmp2 = h;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(908)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_h,return )

Float Widget_obj::get_h( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_h",0x15522a72,"ru.stablex.ui.widgets.Widget.get_h","ru/stablex/ui/widgets/Widget.hx",916,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(917)
	Float tmp = this->_height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(917)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_h,return )

Float Widget_obj::get_contentHeight( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_contentHeight",0xeeb54b0a,"ru.stablex.ui.widgets.Widget.get_contentHeight","ru/stablex/ui/widgets/Widget.hx",925,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(926)
	Float tmp = this->get_h();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(926)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_contentHeight,return )

Float Widget_obj::get_contentWidth( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_contentWidth",0xd2556843,"ru.stablex.ui.widgets.Widget.get_contentWidth","ru/stablex/ui/widgets/Widget.hx",934,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(935)
	Float tmp = this->get_w();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(935)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_contentWidth,return )

Float Widget_obj::set_widthPt( Float wp){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_widthPt",0x3f925e40,"ru.stablex.ui.widgets.Widget.set_widthPt","ru/stablex/ui/widgets/Widget.hx",943,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(wp,"wp")
	HX_STACK_LINE(944)
	this->_widthPercent = wp;
	HX_STACK_LINE(945)
	this->_widthUsePercent = true;
	HX_STACK_LINE(947)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(947)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(947)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(947)
	if ((tmp1)){
		HX_STACK_LINE(947)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(947)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
	}
	else{
		HX_STACK_LINE(947)
		tmp2 = null();
	}
	HX_STACK_LINE(947)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(947)
	if ((tmp3)){
		HX_STACK_LINE(948)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(948)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(948)
		::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(948)
		if ((tmp5)){
			HX_STACK_LINE(948)
			::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(948)
			tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp7);
		}
		else{
			HX_STACK_LINE(948)
			tmp6 = null();
		}
		HX_STACK_LINE(948)
		Float tmp7 = tmp6->get_contentWidth();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(948)
		Float tmp8 = wp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(948)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(948)
		Float tmp10 = (Float(tmp9) / Float((int)100));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(948)
		this->_width = tmp10;
		HX_STACK_LINE(949)
		bool tmp11 = this->_silentResize;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(949)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(949)
		if ((tmp12)){
			HX_STACK_LINE(950)
			this->_onResize();
		}
	}
	HX_STACK_LINE(954)
	Float tmp4 = wp;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(954)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_widthPt,return )

Float Widget_obj::get_widthPt( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_widthPt",0x35255734,"ru.stablex.ui.widgets.Widget.get_widthPt","ru/stablex/ui/widgets/Widget.hx",962,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(963)
	bool tmp = this->_widthUsePercent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(963)
	if ((tmp)){
		HX_STACK_LINE(964)
		Float tmp1 = this->_widthPercent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(964)
		return tmp1;
	}
	else{
		HX_STACK_LINE(966)
		::openfl::display::DisplayObjectContainer tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(966)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(966)
		::ru::stablex::ui::widgets::Widget tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(966)
		if ((tmp2)){
			HX_STACK_LINE(966)
			::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(966)
			tmp3 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp4);
		}
		else{
			HX_STACK_LINE(966)
			tmp3 = null();
		}
		HX_STACK_LINE(966)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(966)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(966)
		if ((tmp4)){
			HX_STACK_LINE(966)
			::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(966)
			::openfl::display::DisplayObjectContainer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(966)
			::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(966)
			bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(966)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(966)
			::ru::stablex::ui::widgets::Widget tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(966)
			bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(966)
			if ((tmp12)){
				HX_STACK_LINE(966)
				::openfl::display::DisplayObjectContainer tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(966)
				::openfl::display::DisplayObjectContainer tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(966)
				::ru::stablex::ui::widgets::Widget tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(966)
				tmp15 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp14);
				HX_STACK_LINE(966)
				tmp11 = tmp15;
			}
			else{
				HX_STACK_LINE(966)
				tmp11 = null();
			}
			HX_STACK_LINE(966)
			Float tmp13 = tmp11->_width;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(966)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(966)
			tmp5 = (tmp14 != (int)0);
		}
		else{
			HX_STACK_LINE(966)
			tmp5 = false;
		}
		HX_STACK_LINE(966)
		if ((tmp5)){
			HX_STACK_LINE(967)
			Float tmp6 = this->get_w();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(967)
			::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(967)
			bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(967)
			::ru::stablex::ui::widgets::Widget tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(967)
			if ((tmp8)){
				HX_STACK_LINE(967)
				::openfl::display::DisplayObjectContainer tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(967)
				tmp9 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp10);
			}
			else{
				HX_STACK_LINE(967)
				tmp9 = null();
			}
			HX_STACK_LINE(967)
			Float tmp10 = tmp9->_width;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(967)
			Float tmp11 = (Float(tmp6) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(967)
			Float tmp12 = (tmp11 * (int)100);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(967)
			return tmp12;
		}
		else{
			HX_STACK_LINE(970)
			return (int)0;
		}
	}
	HX_STACK_LINE(963)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_widthPt,return )

Float Widget_obj::set_heightPt( Float hp){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_heightPt",0xe3e40475,"ru.stablex.ui.widgets.Widget.set_heightPt","ru/stablex/ui/widgets/Widget.hx",979,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hp,"hp")
	HX_STACK_LINE(980)
	this->_heightPercent = hp;
	HX_STACK_LINE(981)
	this->_heightUsePercent = true;
	HX_STACK_LINE(983)
	::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(983)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(983)
	::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(983)
	if ((tmp1)){
		HX_STACK_LINE(983)
		::openfl::display::DisplayObjectContainer tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(983)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp3);
	}
	else{
		HX_STACK_LINE(983)
		tmp2 = null();
	}
	HX_STACK_LINE(983)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(983)
	if ((tmp3)){
		HX_STACK_LINE(984)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(984)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(984)
		::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(984)
		if ((tmp5)){
			HX_STACK_LINE(984)
			::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(984)
			tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp7);
		}
		else{
			HX_STACK_LINE(984)
			tmp6 = null();
		}
		HX_STACK_LINE(984)
		Float tmp7 = tmp6->get_contentHeight();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(984)
		Float tmp8 = hp;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(984)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(984)
		Float tmp10 = (Float(tmp9) / Float((int)100));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(984)
		this->_height = tmp10;
		HX_STACK_LINE(985)
		bool tmp11 = this->_silentResize;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(985)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(985)
		if ((tmp12)){
			HX_STACK_LINE(986)
			this->_onResize();
		}
	}
	HX_STACK_LINE(990)
	Float tmp4 = hp;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(990)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_heightPt,return )

Float Widget_obj::get_heightPt( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","get_heightPt",0xceeae101,"ru.stablex.ui.widgets.Widget.get_heightPt","ru/stablex/ui/widgets/Widget.hx",998,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(999)
	bool tmp = this->_heightUsePercent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(999)
	if ((tmp)){
		HX_STACK_LINE(1000)
		Float tmp1 = this->_heightPercent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1000)
		return tmp1;
	}
	else{
		HX_STACK_LINE(1002)
		::openfl::display::DisplayObjectContainer tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1002)
		bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1002)
		::ru::stablex::ui::widgets::Widget tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1002)
		if ((tmp2)){
			HX_STACK_LINE(1002)
			::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1002)
			tmp3 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp4);
		}
		else{
			HX_STACK_LINE(1002)
			tmp3 = null();
		}
		HX_STACK_LINE(1002)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1002)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1002)
		if ((tmp4)){
			HX_STACK_LINE(1002)
			::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1002)
			::openfl::display::DisplayObjectContainer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1002)
			::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1002)
			bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1002)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1002)
			::ru::stablex::ui::widgets::Widget tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1002)
			bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1002)
			if ((tmp12)){
				HX_STACK_LINE(1002)
				::openfl::display::DisplayObjectContainer tmp13 = this->parent;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1002)
				::openfl::display::DisplayObjectContainer tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1002)
				::ru::stablex::ui::widgets::Widget tmp15;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1002)
				tmp15 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp14);
				HX_STACK_LINE(1002)
				tmp11 = tmp15;
			}
			else{
				HX_STACK_LINE(1002)
				tmp11 = null();
			}
			HX_STACK_LINE(1002)
			Float tmp13 = tmp11->_height;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1002)
			Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1002)
			tmp5 = (tmp14 != (int)0);
		}
		else{
			HX_STACK_LINE(1002)
			tmp5 = false;
		}
		HX_STACK_LINE(1002)
		if ((tmp5)){
			HX_STACK_LINE(1003)
			Float tmp6 = this->_height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1003)
			::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1003)
			bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1003)
			::ru::stablex::ui::widgets::Widget tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1003)
			if ((tmp8)){
				HX_STACK_LINE(1003)
				::openfl::display::DisplayObjectContainer tmp10 = this->parent;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1003)
				tmp9 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(tmp10);
			}
			else{
				HX_STACK_LINE(1003)
				tmp9 = null();
			}
			HX_STACK_LINE(1003)
			Float tmp10 = tmp9->_height;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1003)
			Float tmp11 = (Float(tmp6) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1003)
			Float tmp12 = (tmp11 * (int)100);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1003)
			return tmp12;
		}
		else{
			HX_STACK_LINE(1006)
			return (int)0;
		}
	}
	HX_STACK_LINE(999)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(Widget_obj,get_heightPt,return )

::String Widget_obj::set_id( ::String id){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_id",0x5edb4f05,"ru.stablex.ui.widgets.Widget.set_id","ru/stablex/ui/widgets/Widget.hx",1015,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1016)
	bool tmp = (id == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1016)
	if ((tmp)){
		HX_STACK_LINE(1017)
		HX_STACK_DO_THROW(HX_HCSTRING("Widget id cannot be null","\x50","\xd7","\x5e","\x5e"));
	}
	HX_STACK_LINE(1021)
	::String tmp1 = this->id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1021)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1021)
	if ((tmp2)){
		HX_STACK_LINE(1022)
		::haxe::ds::StringMap tmp3 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1022)
		::String tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1022)
		tmp3->remove(tmp4);
	}
	HX_STACK_LINE(1025)
	this->id = id;
	HX_STACK_LINE(1028)
	{
		HX_STACK_LINE(1028)
		::haxe::ds::StringMap tmp3 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1028)
		::String tmp4 = this->id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1028)
		bool tmp5 = tmp3->exists(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1028)
		if ((tmp5)){
			HX_STACK_LINE(1028)
			::String tmp6 = this->id;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1028)
			::String tmp7 = (HX_HCSTRING("Widget id \"","\x59","\x36","\x9e","\x8f") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1028)
			::String tmp8 = (tmp7 + HX_HCSTRING("\" is already used","\xbd","\xb5","\x7b","\xb9"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1028)
			HX_STACK_DO_THROW(tmp8);
		}
		else{
			HX_STACK_LINE(1028)
			::haxe::ds::StringMap tmp6 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1028)
			::String tmp7 = this->id;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1028)
			tmp6->set(tmp7,hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(1030)
	::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1030)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_id,return )

::ru::stablex::ui::widgets::Tip Widget_obj::set_tip( ::ru::stablex::ui::widgets::Tip tip){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Widget","set_tip",0xa11232f1,"ru.stablex.ui.widgets.Widget.set_tip","ru/stablex/ui/widgets/Widget.hx",1038,0xb63704bd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tip,"tip")
	HX_STACK_LINE(1039)
	::ru::stablex::ui::widgets::Tip tmp = this->tip;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1039)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1039)
	if ((tmp1)){
		HX_STACK_LINE(1040)
		::ru::stablex::ui::widgets::Tip tmp2 = this->tip;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1040)
		tmp2->free(null());
	}
	HX_STACK_LINE(1042)
	tip->bindTo(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(1043)
	::ru::stablex::ui::widgets::Tip tmp2 = this->tip = tip;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1043)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Widget_obj,set_tip,return )

int Widget_obj::_X_USE_LEFT;

int Widget_obj::_X_USE_LEFT_PERCENT;

int Widget_obj::_X_USE_RIGHT;

int Widget_obj::_X_USE_RIGHT_PERCENT;

int Widget_obj::_Y_USE_TOP;

int Widget_obj::_Y_USE_TOP_PERCENT;

int Widget_obj::_Y_USE_BOTTOM;

int Widget_obj::_Y_USE_BOTTOM_PERCENT;


Widget_obj::Widget_obj()
{
}

void Widget_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Widget);
	HX_MARK_MEMBER_NAME(defaults,"defaults");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	HX_MARK_MEMBER_NAME(created,"created");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(contentWidth,"contentWidth");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_widthPercent,"_widthPercent");
	HX_MARK_MEMBER_NAME(_widthUsePercent,"_widthUsePercent");
	HX_MARK_MEMBER_NAME(minWidthByContent,"minWidthByContent");
	HX_MARK_MEMBER_NAME(minHeightByContent,"minHeightByContent");
	HX_MARK_MEMBER_NAME(contentHeight,"contentHeight");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_heightPercent,"_heightPercent");
	HX_MARK_MEMBER_NAME(_heightUsePercent,"_heightUsePercent");
	HX_MARK_MEMBER_NAME(_silentResize,"_silentResize");
	HX_MARK_MEMBER_NAME(_resizing,"_resizing");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_leftPercent,"_leftPercent");
	HX_MARK_MEMBER_NAME(_right,"_right");
	HX_MARK_MEMBER_NAME(_rightPercent,"_rightPercent");
	HX_MARK_MEMBER_NAME(_xUse,"_xUse");
	HX_MARK_MEMBER_NAME(_yUse,"_yUse");
	HX_MARK_MEMBER_NAME(_top,"_top");
	HX_MARK_MEMBER_NAME(_topPercent,"_topPercent");
	HX_MARK_MEMBER_NAME(_bottom,"_bottom");
	HX_MARK_MEMBER_NAME(_bottomPercent,"_bottomPercent");
	HX_MARK_MEMBER_NAME(skin,"skin");
	HX_MARK_MEMBER_NAME(_appliedSkin,"_appliedSkin");
	HX_MARK_MEMBER_NAME(_skinQueued,"_skinQueued");
	HX_MARK_MEMBER_NAME(skinName,"skinName");
	HX_MARK_MEMBER_NAME(overflow,"overflow");
	HX_MARK_MEMBER_NAME(tip,"tip");
	HX_MARK_MEMBER_NAME(layout,"layout");
	::ru::stablex::TweenSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Widget_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaults,"defaults");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	HX_VISIT_MEMBER_NAME(created,"created");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(contentWidth,"contentWidth");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_widthPercent,"_widthPercent");
	HX_VISIT_MEMBER_NAME(_widthUsePercent,"_widthUsePercent");
	HX_VISIT_MEMBER_NAME(minWidthByContent,"minWidthByContent");
	HX_VISIT_MEMBER_NAME(minHeightByContent,"minHeightByContent");
	HX_VISIT_MEMBER_NAME(contentHeight,"contentHeight");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_heightPercent,"_heightPercent");
	HX_VISIT_MEMBER_NAME(_heightUsePercent,"_heightUsePercent");
	HX_VISIT_MEMBER_NAME(_silentResize,"_silentResize");
	HX_VISIT_MEMBER_NAME(_resizing,"_resizing");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_leftPercent,"_leftPercent");
	HX_VISIT_MEMBER_NAME(_right,"_right");
	HX_VISIT_MEMBER_NAME(_rightPercent,"_rightPercent");
	HX_VISIT_MEMBER_NAME(_xUse,"_xUse");
	HX_VISIT_MEMBER_NAME(_yUse,"_yUse");
	HX_VISIT_MEMBER_NAME(_top,"_top");
	HX_VISIT_MEMBER_NAME(_topPercent,"_topPercent");
	HX_VISIT_MEMBER_NAME(_bottom,"_bottom");
	HX_VISIT_MEMBER_NAME(_bottomPercent,"_bottomPercent");
	HX_VISIT_MEMBER_NAME(skin,"skin");
	HX_VISIT_MEMBER_NAME(_appliedSkin,"_appliedSkin");
	HX_VISIT_MEMBER_NAME(_skinQueued,"_skinQueued");
	HX_VISIT_MEMBER_NAME(skinName,"skinName");
	HX_VISIT_MEMBER_NAME(overflow,"overflow");
	HX_VISIT_MEMBER_NAME(tip,"tip");
	HX_VISIT_MEMBER_NAME(layout,"layout");
	::ru::stablex::TweenSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Widget_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp == hx::paccAlways) return get_w(); }
		if (HX_FIELD_EQ(inName,"h") ) { if (inCallProp == hx::paccAlways) return get_h(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		if (HX_FIELD_EQ(inName,"as") ) { return as_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return get_top(); }
		if (HX_FIELD_EQ(inName,"tip") ) { return tip; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return get_left(); }
		if (HX_FIELD_EQ(inName,"_top") ) { return _top; }
		if (HX_FIELD_EQ(inName,"skin") ) { return skin; }
		if (HX_FIELD_EQ(inName,"free") ) { return free_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { return _left; }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return get_right(); }
		if (HX_FIELD_EQ(inName,"_xUse") ) { return _xUse; }
		if (HX_FIELD_EQ(inName,"_yUse") ) { return _yUse; }
		if (HX_FIELD_EQ(inName,"topPt") ) { if (inCallProp == hx::paccAlways) return get_topPt(); }
		if (HX_FIELD_EQ(inName,"set_w") ) { return set_w_dyn(); }
		if (HX_FIELD_EQ(inName,"get_w") ) { return get_w_dyn(); }
		if (HX_FIELD_EQ(inName,"set_h") ) { return set_h_dyn(); }
		if (HX_FIELD_EQ(inName,"get_h") ) { return get_h_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"leftPt") ) { if (inCallProp == hx::paccAlways) return get_leftPt(); }
		if (HX_FIELD_EQ(inName,"_right") ) { return _right; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return get_bottom(); }
		if (HX_FIELD_EQ(inName,"layout") ) { return layout; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"created") ) { return created; }
		if (HX_FIELD_EQ(inName,"widthPt") ) { if (inCallProp == hx::paccAlways) return get_widthPt(); }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"rightPt") ) { if (inCallProp == hx::paccAlways) return get_rightPt(); }
		if (HX_FIELD_EQ(inName,"wparent") ) { if (inCallProp == hx::paccAlways) return get_wparent(); }
		if (HX_FIELD_EQ(inName,"_bottom") ) { return _bottom; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tip") ) { return set_tip_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { return defaults; }
		if (HX_FIELD_EQ(inName,"heightPt") ) { if (inCallProp == hx::paccAlways) return get_heightPt(); }
		if (HX_FIELD_EQ(inName,"bottomPt") ) { if (inCallProp == hx::paccAlways) return get_bottomPt(); }
		if (HX_FIELD_EQ(inName,"skinName") ) { return skinName; }
		if (HX_FIELD_EQ(inName,"overflow") ) { return overflow; }
		if (HX_FIELD_EQ(inName,"onCreate") ) { return onCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"getChild") ) { return getChild_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return destroyed; }
		if (HX_FIELD_EQ(inName,"_resizing") ) { return _resizing; }
		if (HX_FIELD_EQ(inName,"_onCreate") ) { return _onCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"applySkin") ) { return applySkin_dyn(); }
		if (HX_FIELD_EQ(inName,"_onResize") ) { return _onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"getParent") ) { return getParent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_topPt") ) { return set_topPt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_topPt") ) { return get_topPt_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_newParent") ) { return _newParent_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAs") ) { return getChildAs_dyn(); }
		if (HX_FIELD_EQ(inName,"set_leftPt") ) { return set_leftPt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_leftPt") ) { return get_leftPt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"_topPercent") ) { return _topPercent; }
		if (HX_FIELD_EQ(inName,"_skinQueued") ) { return _skinQueued; }
		if (HX_FIELD_EQ(inName,"applyLayout") ) { return applyLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"onNewParent") ) { return onNewParent_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"getParentAs") ) { return getParentAs_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wparent") ) { return get_wparent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rightPt") ) { return set_rightPt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rightPt") ) { return get_rightPt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_widthPt") ) { return set_widthPt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_widthPt") ) { return get_widthPt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contentWidth") ) { return inCallProp == hx::paccAlways ? get_contentWidth() : contentWidth; }
		if (HX_FIELD_EQ(inName,"_leftPercent") ) { return _leftPercent; }
		if (HX_FIELD_EQ(inName,"_appliedSkin") ) { return _appliedSkin; }
		if (HX_FIELD_EQ(inName,"onInitialize") ) { return onInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_overflow") ) { return set_overflow_dyn(); }
		if (HX_FIELD_EQ(inName,"set_skinName") ) { return set_skinName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottomPt") ) { return set_bottomPt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottomPt") ) { return get_bottomPt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_heightPt") ) { return set_heightPt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_heightPt") ) { return get_heightPt_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_widthPercent") ) { return _widthPercent; }
		if (HX_FIELD_EQ(inName,"contentHeight") ) { return inCallProp == hx::paccAlways ? get_contentHeight() : contentHeight; }
		if (HX_FIELD_EQ(inName,"_silentResize") ) { return _silentResize; }
		if (HX_FIELD_EQ(inName,"_rightPercent") ) { return _rightPercent; }
		if (HX_FIELD_EQ(inName,"_onInitialize") ) { return _onInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_heightPercent") ) { return _heightPercent; }
		if (HX_FIELD_EQ(inName,"_bottomPercent") ) { return _bottomPercent; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_onParentResize") ) { return _onParentResize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_widthUsePercent") ) { return _widthUsePercent; }
		if (HX_FIELD_EQ(inName,"_findChildWidget") ) { return _findChildWidget_dyn(); }
		if (HX_FIELD_EQ(inName,"getNearestParent") ) { return getNearestParent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_contentWidth") ) { return get_contentWidth_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"minWidthByContent") ) { return minWidthByContent; }
		if (HX_FIELD_EQ(inName,"_heightUsePercent") ) { return _heightUsePercent; }
		if (HX_FIELD_EQ(inName,"get_contentHeight") ) { return get_contentHeight_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"minHeightByContent") ) { return minHeightByContent; }
		if (HX_FIELD_EQ(inName,"_resizeWithPercent") ) { return _resizeWithPercent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Widget_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp == hx::paccAlways) return set_w(inValue); }
		if (HX_FIELD_EQ(inName,"h") ) { if (inCallProp == hx::paccAlways) return set_h(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return set_id(inValue);id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp == hx::paccAlways) return set_top(inValue); }
		if (HX_FIELD_EQ(inName,"tip") ) { if (inCallProp == hx::paccAlways) return set_tip(inValue);tip=inValue.Cast< ::ru::stablex::ui::widgets::Tip >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp == hx::paccAlways) return set_left(inValue); }
		if (HX_FIELD_EQ(inName,"_top") ) { _top=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skin") ) { skin=inValue.Cast< ::ru::stablex::ui::skins::Skin >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp == hx::paccAlways) return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"_xUse") ) { _xUse=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_yUse") ) { _yUse=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"topPt") ) { if (inCallProp == hx::paccAlways) return set_topPt(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftPt") ) { if (inCallProp == hx::paccAlways) return set_leftPt(inValue); }
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp == hx::paccAlways) return set_bottom(inValue); }
		if (HX_FIELD_EQ(inName,"layout") ) { layout=inValue.Cast< ::ru::stablex::ui::layouts::Layout >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"created") ) { created=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"widthPt") ) { if (inCallProp == hx::paccAlways) return set_widthPt(inValue); }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightPt") ) { if (inCallProp == hx::paccAlways) return set_rightPt(inValue); }
		if (HX_FIELD_EQ(inName,"_bottom") ) { _bottom=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { defaults=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"heightPt") ) { if (inCallProp == hx::paccAlways) return set_heightPt(inValue); }
		if (HX_FIELD_EQ(inName,"bottomPt") ) { if (inCallProp == hx::paccAlways) return set_bottomPt(inValue); }
		if (HX_FIELD_EQ(inName,"skinName") ) { if (inCallProp == hx::paccAlways) return set_skinName(inValue);skinName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overflow") ) { if (inCallProp == hx::paccAlways) return set_overflow(inValue);overflow=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_resizing") ) { _resizing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_topPercent") ) { _topPercent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skinQueued") ) { _skinQueued=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"contentWidth") ) { contentWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_leftPercent") ) { _leftPercent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_appliedSkin") ) { _appliedSkin=inValue.Cast< ::ru::stablex::ui::skins::Skin >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_widthPercent") ) { _widthPercent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"contentHeight") ) { contentHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_silentResize") ) { _silentResize=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rightPercent") ) { _rightPercent=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_heightPercent") ) { _heightPercent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bottomPercent") ) { _bottomPercent=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_widthUsePercent") ) { _widthUsePercent=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"minWidthByContent") ) { minWidthByContent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_heightUsePercent") ) { _heightUsePercent=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"minHeightByContent") ) { minHeightByContent=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Widget_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("defaults","\x92","\xd0","\x99","\xaf"));
	outFields->push(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"));
	outFields->push(HX_HCSTRING("created","\xe8","\xb5","\x6a","\x11"));
	outFields->push(HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("contentWidth","\x0d","\x0a","\xf1","\xb0"));
	outFields->push(HX_HCSTRING("widthPt","\xaa","\x09","\x01","\x31"));
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_widthPercent","\x3e","\x1c","\xc9","\x82"));
	outFields->push(HX_HCSTRING("_widthUsePercent","\x65","\xcd","\x76","\xdb"));
	outFields->push(HX_HCSTRING("minWidthByContent","\x6e","\x92","\x38","\xc1"));
	outFields->push(HX_HCSTRING("minHeightByContent","\xc9","\x85","\x56","\xb4"));
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("contentHeight","\x00","\x3a","\x47","\xd8"));
	outFields->push(HX_HCSTRING("heightPt","\xcb","\x55","\x4b","\x33"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_heightPercent","\xdf","\x95","\x55","\xa1"));
	outFields->push(HX_HCSTRING("_heightUsePercent","\x64","\x4e","\xa7","\xc1"));
	outFields->push(HX_HCSTRING("_silentResize","\x48","\x75","\xc6","\x47"));
	outFields->push(HX_HCSTRING("_resizing","\x90","\x1f","\x16","\xe9"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("leftPt","\xeb","\x9d","\xc7","\x99"));
	outFields->push(HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa"));
	outFields->push(HX_HCSTRING("_leftPercent","\x7f","\x97","\x77","\xde"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("rightPt","\x00","\x01","\x64","\x13"));
	outFields->push(HX_HCSTRING("_right","\x1d","\x53","\x4b","\xe5"));
	outFields->push(HX_HCSTRING("_rightPercent","\x28","\xcd","\xf7","\x45"));
	outFields->push(HX_HCSTRING("_xUse","\x8e","\x9a","\xa3","\x02"));
	outFields->push(HX_HCSTRING("_yUse","\x2d","\xd1","\x4c","\x03"));
	outFields->push(HX_HCSTRING("wparent","\xe1","\x38","\xf8","\x41"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("topPt","\xf9","\x3b","\x2f","\x14"));
	outFields->push(HX_HCSTRING("_top","\x96","\xab","\x23","\x3f"));
	outFields->push(HX_HCSTRING("_topPercent","\xcf","\x65","\x32","\xb7"));
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("bottomPt","\xcf","\xfd","\xb0","\x62"));
	outFields->push(HX_HCSTRING("_bottom","\x8a","\xf8","\xef","\xd3"));
	outFields->push(HX_HCSTRING("_bottomPercent","\x5b","\x5f","\xdc","\x11"));
	outFields->push(HX_HCSTRING("skin","\x7d","\x16","\x55","\x4c"));
	outFields->push(HX_HCSTRING("_appliedSkin","\x5b","\x44","\x64","\x01"));
	outFields->push(HX_HCSTRING("_skinQueued","\x2f","\x25","\xb4","\xb6"));
	outFields->push(HX_HCSTRING("skinName","\x68","\x37","\x87","\x98"));
	outFields->push(HX_HCSTRING("overflow","\x42","\xe3","\x3b","\x41"));
	outFields->push(HX_HCSTRING("tip","\x5b","\x61","\x58","\x00"));
	outFields->push(HX_HCSTRING("layout","\xaa","\xae","\xb8","\x58"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Widget_obj,defaults),HX_HCSTRING("defaults","\x92","\xd0","\x99","\xaf")},
	{hx::fsBool,(int)offsetof(Widget_obj,initialized),HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{hx::fsBool,(int)offsetof(Widget_obj,created),HX_HCSTRING("created","\xe8","\xb5","\x6a","\x11")},
	{hx::fsBool,(int)offsetof(Widget_obj,destroyed),HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4")},
	{hx::fsFloat,(int)offsetof(Widget_obj,contentWidth),HX_HCSTRING("contentWidth","\x0d","\x0a","\xf1","\xb0")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_widthPercent),HX_HCSTRING("_widthPercent","\x3e","\x1c","\xc9","\x82")},
	{hx::fsBool,(int)offsetof(Widget_obj,_widthUsePercent),HX_HCSTRING("_widthUsePercent","\x65","\xcd","\x76","\xdb")},
	{hx::fsBool,(int)offsetof(Widget_obj,minWidthByContent),HX_HCSTRING("minWidthByContent","\x6e","\x92","\x38","\xc1")},
	{hx::fsBool,(int)offsetof(Widget_obj,minHeightByContent),HX_HCSTRING("minHeightByContent","\xc9","\x85","\x56","\xb4")},
	{hx::fsFloat,(int)offsetof(Widget_obj,contentHeight),HX_HCSTRING("contentHeight","\x00","\x3a","\x47","\xd8")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_heightPercent),HX_HCSTRING("_heightPercent","\xdf","\x95","\x55","\xa1")},
	{hx::fsBool,(int)offsetof(Widget_obj,_heightUsePercent),HX_HCSTRING("_heightUsePercent","\x64","\x4e","\xa7","\xc1")},
	{hx::fsBool,(int)offsetof(Widget_obj,_silentResize),HX_HCSTRING("_silentResize","\x48","\x75","\xc6","\x47")},
	{hx::fsBool,(int)offsetof(Widget_obj,_resizing),HX_HCSTRING("_resizing","\x90","\x1f","\x16","\xe9")},
	{hx::fsString,(int)offsetof(Widget_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_left),HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_leftPercent),HX_HCSTRING("_leftPercent","\x7f","\x97","\x77","\xde")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_right),HX_HCSTRING("_right","\x1d","\x53","\x4b","\xe5")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_rightPercent),HX_HCSTRING("_rightPercent","\x28","\xcd","\xf7","\x45")},
	{hx::fsInt,(int)offsetof(Widget_obj,_xUse),HX_HCSTRING("_xUse","\x8e","\x9a","\xa3","\x02")},
	{hx::fsInt,(int)offsetof(Widget_obj,_yUse),HX_HCSTRING("_yUse","\x2d","\xd1","\x4c","\x03")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_top),HX_HCSTRING("_top","\x96","\xab","\x23","\x3f")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_topPercent),HX_HCSTRING("_topPercent","\xcf","\x65","\x32","\xb7")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_bottom),HX_HCSTRING("_bottom","\x8a","\xf8","\xef","\xd3")},
	{hx::fsFloat,(int)offsetof(Widget_obj,_bottomPercent),HX_HCSTRING("_bottomPercent","\x5b","\x5f","\xdc","\x11")},
	{hx::fsObject /*::ru::stablex::ui::skins::Skin*/ ,(int)offsetof(Widget_obj,skin),HX_HCSTRING("skin","\x7d","\x16","\x55","\x4c")},
	{hx::fsObject /*::ru::stablex::ui::skins::Skin*/ ,(int)offsetof(Widget_obj,_appliedSkin),HX_HCSTRING("_appliedSkin","\x5b","\x44","\x64","\x01")},
	{hx::fsBool,(int)offsetof(Widget_obj,_skinQueued),HX_HCSTRING("_skinQueued","\x2f","\x25","\xb4","\xb6")},
	{hx::fsString,(int)offsetof(Widget_obj,skinName),HX_HCSTRING("skinName","\x68","\x37","\x87","\x98")},
	{hx::fsBool,(int)offsetof(Widget_obj,overflow),HX_HCSTRING("overflow","\x42","\xe3","\x3b","\x41")},
	{hx::fsObject /*::ru::stablex::ui::widgets::Tip*/ ,(int)offsetof(Widget_obj,tip),HX_HCSTRING("tip","\x5b","\x61","\x58","\x00")},
	{hx::fsObject /*::ru::stablex::ui::layouts::Layout*/ ,(int)offsetof(Widget_obj,layout),HX_HCSTRING("layout","\xaa","\xae","\xb8","\x58")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Widget_obj::_X_USE_LEFT,HX_HCSTRING("_X_USE_LEFT","\x85","\x2f","\x10","\x29")},
	{hx::fsInt,(void *) &Widget_obj::_X_USE_LEFT_PERCENT,HX_HCSTRING("_X_USE_LEFT_PERCENT","\xab","\x94","\x29","\xd5")},
	{hx::fsInt,(void *) &Widget_obj::_X_USE_RIGHT,HX_HCSTRING("_X_USE_RIGHT","\x7e","\x72","\x26","\x3c")},
	{hx::fsInt,(void *) &Widget_obj::_X_USE_RIGHT_PERCENT,HX_HCSTRING("_X_USE_RIGHT_PERCENT","\xa4","\xf8","\x20","\x58")},
	{hx::fsInt,(void *) &Widget_obj::_Y_USE_TOP,HX_HCSTRING("_Y_USE_TOP","\xb8","\x05","\x39","\xe3")},
	{hx::fsInt,(void *) &Widget_obj::_Y_USE_TOP_PERCENT,HX_HCSTRING("_Y_USE_TOP_PERCENT","\xde","\x55","\x30","\xcb")},
	{hx::fsInt,(void *) &Widget_obj::_Y_USE_BOTTOM,HX_HCSTRING("_Y_USE_BOTTOM","\x88","\xbb","\x8f","\xbe")},
	{hx::fsInt,(void *) &Widget_obj::_Y_USE_BOTTOM_PERCENT,HX_HCSTRING("_Y_USE_BOTTOM_PERCENT","\xae","\x5b","\xe9","\xff")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("defaults","\x92","\xd0","\x99","\xaf"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("created","\xe8","\xb5","\x6a","\x11"),
	HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"),
	HX_HCSTRING("contentWidth","\x0d","\x0a","\xf1","\xb0"),
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_widthPercent","\x3e","\x1c","\xc9","\x82"),
	HX_HCSTRING("_widthUsePercent","\x65","\xcd","\x76","\xdb"),
	HX_HCSTRING("minWidthByContent","\x6e","\x92","\x38","\xc1"),
	HX_HCSTRING("minHeightByContent","\xc9","\x85","\x56","\xb4"),
	HX_HCSTRING("contentHeight","\x00","\x3a","\x47","\xd8"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_heightPercent","\xdf","\x95","\x55","\xa1"),
	HX_HCSTRING("_heightUsePercent","\x64","\x4e","\xa7","\xc1"),
	HX_HCSTRING("_silentResize","\x48","\x75","\xc6","\x47"),
	HX_HCSTRING("_resizing","\x90","\x1f","\x16","\xe9"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa"),
	HX_HCSTRING("_leftPercent","\x7f","\x97","\x77","\xde"),
	HX_HCSTRING("_right","\x1d","\x53","\x4b","\xe5"),
	HX_HCSTRING("_rightPercent","\x28","\xcd","\xf7","\x45"),
	HX_HCSTRING("_xUse","\x8e","\x9a","\xa3","\x02"),
	HX_HCSTRING("_yUse","\x2d","\xd1","\x4c","\x03"),
	HX_HCSTRING("_top","\x96","\xab","\x23","\x3f"),
	HX_HCSTRING("_topPercent","\xcf","\x65","\x32","\xb7"),
	HX_HCSTRING("_bottom","\x8a","\xf8","\xef","\xd3"),
	HX_HCSTRING("_bottomPercent","\x5b","\x5f","\xdc","\x11"),
	HX_HCSTRING("skin","\x7d","\x16","\x55","\x4c"),
	HX_HCSTRING("_appliedSkin","\x5b","\x44","\x64","\x01"),
	HX_HCSTRING("_skinQueued","\x2f","\x25","\xb4","\xb6"),
	HX_HCSTRING("skinName","\x68","\x37","\x87","\x98"),
	HX_HCSTRING("overflow","\x42","\xe3","\x3b","\x41"),
	HX_HCSTRING("tip","\x5b","\x61","\x58","\x00"),
	HX_HCSTRING("layout","\xaa","\xae","\xb8","\x58"),
	HX_HCSTRING("_onInitialize","\x2e","\x66","\x6d","\xa7"),
	HX_HCSTRING("onInitialize","\x4f","\xd3","\xfe","\xc4"),
	HX_HCSTRING("_onCreate","\xda","\x54","\x52","\xa3"),
	HX_HCSTRING("onCreate","\x7b","\x5d","\xbc","\x5b"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("applySkin","\x0b","\x17","\x24","\x36"),
	HX_HCSTRING("applyLayout","\xb8","\x6e","\xb3","\x94"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("_newParent","\x6b","\x4d","\xd1","\x06"),
	HX_HCSTRING("_resizeWithPercent","\x8c","\xc8","\x3a","\x70"),
	HX_HCSTRING("onNewParent","\x8b","\xb4","\x71","\xcd"),
	HX_HCSTRING("_onParentResize","\x1c","\xb7","\x34","\x8e"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("_onResize","\xd2","\x47","\xbe","\x2f"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("getChildAs","\xb8","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChild","\x26","\xb9","\x90","\xa5"),
	HX_HCSTRING("_findChildWidget","\x48","\x5d","\x61","\x05"),
	HX_HCSTRING("getParent","\x60","\x8e","\xd4","\x69"),
	HX_HCSTRING("getParentAs","\x72","\x1f","\xdd","\xf2"),
	HX_HCSTRING("getNearestParent","\xb2","\xd5","\x80","\xad"),
	HX_HCSTRING("as","\xf2","\x54","\x00","\x00"),
	HX_HCSTRING("set_overflow","\xbf","\xba","\x4e","\x0b"),
	HX_HCSTRING("set_skinName","\xe5","\x0e","\x9a","\x62"),
	HX_HCSTRING("get_wparent","\xf8","\x98","\xf2","\xc7"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("set_leftPt","\x28","\xac","\xcc","\x8d"),
	HX_HCSTRING("get_leftPt","\xb4","\x0d","\x4f","\x8a"),
	HX_HCSTRING("set_rightPt","\x23","\x68","\xcb","\xa3"),
	HX_HCSTRING("get_rightPt","\x17","\x61","\x5e","\x99"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("set_bottom","\x28","\xf5","\x7d","\x59"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("set_topPt","\x5c","\x84","\x29","\x3b"),
	HX_HCSTRING("get_topPt","\x50","\x98","\xd8","\x57"),
	HX_HCSTRING("set_bottomPt","\x4c","\xd5","\xc3","\x2c"),
	HX_HCSTRING("get_bottomPt","\xd8","\xb1","\xca","\x17"),
	HX_HCSTRING("set_w","\x5a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_w","\x4e","\xa5","\x60","\x91"),
	HX_HCSTRING("set_h","\x4b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_h","\x3f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_contentHeight","\x57","\x45","\xb7","\xde"),
	HX_HCSTRING("get_contentWidth","\x96","\xf6","\x8f","\xb5"),
	HX_HCSTRING("set_widthPt","\xcd","\x70","\x68","\xc1"),
	HX_HCSTRING("get_widthPt","\xc1","\x69","\xfb","\xb6"),
	HX_HCSTRING("set_heightPt","\x48","\x2d","\x5e","\xfd"),
	HX_HCSTRING("get_heightPt","\xd4","\x09","\x65","\xe8"),
	HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"),
	HX_HCSTRING("set_tip","\xfe","\xba","\xce","\x19"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Widget_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Widget_obj::_X_USE_LEFT,"_X_USE_LEFT");
	HX_MARK_MEMBER_NAME(Widget_obj::_X_USE_LEFT_PERCENT,"_X_USE_LEFT_PERCENT");
	HX_MARK_MEMBER_NAME(Widget_obj::_X_USE_RIGHT,"_X_USE_RIGHT");
	HX_MARK_MEMBER_NAME(Widget_obj::_X_USE_RIGHT_PERCENT,"_X_USE_RIGHT_PERCENT");
	HX_MARK_MEMBER_NAME(Widget_obj::_Y_USE_TOP,"_Y_USE_TOP");
	HX_MARK_MEMBER_NAME(Widget_obj::_Y_USE_TOP_PERCENT,"_Y_USE_TOP_PERCENT");
	HX_MARK_MEMBER_NAME(Widget_obj::_Y_USE_BOTTOM,"_Y_USE_BOTTOM");
	HX_MARK_MEMBER_NAME(Widget_obj::_Y_USE_BOTTOM_PERCENT,"_Y_USE_BOTTOM_PERCENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Widget_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Widget_obj::_X_USE_LEFT,"_X_USE_LEFT");
	HX_VISIT_MEMBER_NAME(Widget_obj::_X_USE_LEFT_PERCENT,"_X_USE_LEFT_PERCENT");
	HX_VISIT_MEMBER_NAME(Widget_obj::_X_USE_RIGHT,"_X_USE_RIGHT");
	HX_VISIT_MEMBER_NAME(Widget_obj::_X_USE_RIGHT_PERCENT,"_X_USE_RIGHT_PERCENT");
	HX_VISIT_MEMBER_NAME(Widget_obj::_Y_USE_TOP,"_Y_USE_TOP");
	HX_VISIT_MEMBER_NAME(Widget_obj::_Y_USE_TOP_PERCENT,"_Y_USE_TOP_PERCENT");
	HX_VISIT_MEMBER_NAME(Widget_obj::_Y_USE_BOTTOM,"_Y_USE_BOTTOM");
	HX_VISIT_MEMBER_NAME(Widget_obj::_Y_USE_BOTTOM_PERCENT,"_Y_USE_BOTTOM_PERCENT");
};

#endif

hx::Class Widget_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_X_USE_LEFT","\x85","\x2f","\x10","\x29"),
	HX_HCSTRING("_X_USE_LEFT_PERCENT","\xab","\x94","\x29","\xd5"),
	HX_HCSTRING("_X_USE_RIGHT","\x7e","\x72","\x26","\x3c"),
	HX_HCSTRING("_X_USE_RIGHT_PERCENT","\xa4","\xf8","\x20","\x58"),
	HX_HCSTRING("_Y_USE_TOP","\xb8","\x05","\x39","\xe3"),
	HX_HCSTRING("_Y_USE_TOP_PERCENT","\xde","\x55","\x30","\xcb"),
	HX_HCSTRING("_Y_USE_BOTTOM","\x88","\xbb","\x8f","\xbe"),
	HX_HCSTRING("_Y_USE_BOTTOM_PERCENT","\xae","\x5b","\xe9","\xff"),
	::String(null()) };

void Widget_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.widgets.Widget","\x61","\x2d","\x45","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Widget_obj >;
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

void Widget_obj::__boot()
{
	_X_USE_LEFT= (int)1;
	_X_USE_LEFT_PERCENT= (int)2;
	_X_USE_RIGHT= (int)3;
	_X_USE_RIGHT_PERCENT= (int)4;
	_Y_USE_TOP= (int)5;
	_Y_USE_TOP_PERCENT= (int)6;
	_Y_USE_BOTTOM= (int)7;
	_Y_USE_BOTTOM_PERCENT= (int)8;
}

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets
