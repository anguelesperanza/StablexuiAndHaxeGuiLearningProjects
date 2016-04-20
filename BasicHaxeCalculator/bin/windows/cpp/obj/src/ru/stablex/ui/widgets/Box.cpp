#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_events_WidgetEvent
#include <ru/stablex/ui/events/WidgetEvent.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_layouts_Layout
#include <ru/stablex/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Box
#include <ru/stablex/ui/widgets/Box.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{

Void Box_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.ui.widgets.Box","new",0x41812c40,"ru.stablex.ui.widgets.Box.new","ru/stablex/ui/widgets/Box.hx",13,0x607c8670)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(44)
	this->intPositions = false;
	HX_STACK_LINE(42)
	this->unifyChildren = false;
	HX_STACK_LINE(40)
	this->autoHeight = true;
	HX_STACK_LINE(38)
	this->autoWidth = true;
	HX_STACK_LINE(34)
	this->align = HX_HCSTRING("center,middle","\x4c","\xab","\x0b","\x8f");
	HX_STACK_LINE(28)
	this->childPadding = ((Float)0);
	HX_STACK_LINE(26)
	this->paddingBottom = ((Float)0);
	HX_STACK_LINE(24)
	this->paddingTop = ((Float)0);
	HX_STACK_LINE(22)
	this->paddingRight = ((Float)0);
	HX_STACK_LINE(20)
	this->paddingLeft = ((Float)0);
	HX_STACK_LINE(16)
	this->vertical = true;
	HX_STACK_LINE(13)
	super::__construct();
}
;
	return null();
}

//Box_obj::~Box_obj() { }

Dynamic Box_obj::__CreateEmpty() { return  new Box_obj; }
hx::ObjectPtr< Box_obj > Box_obj::__new()
{  hx::ObjectPtr< Box_obj > _result_ = new Box_obj();
	_result_->__construct();
	return _result_;}

Dynamic Box_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Box_obj > _result_ = new Box_obj();
	_result_->__construct();
	return _result_;}

Float Box_obj::_objWidth( ::openfl::display::DisplayObject obj){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_objWidth",0x23fcd1ce,"ru.stablex.ui.widgets.Box._objWidth","ru/stablex/ui/widgets/Box.hx",61,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(62)
	::openfl::display::DisplayObject tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	if ((tmp1)){
		HX_STACK_LINE(62)
		::ru::stablex::ui::widgets::Widget tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		tmp3 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(obj);
		HX_STACK_LINE(62)
		tmp2 = tmp3->get_w();
	}
	else{
		HX_STACK_LINE(62)
		::openfl::display::DisplayObject tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::text::TextField >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		if ((tmp4)){
			HX_STACK_LINE(62)
			::String tmp5 = obj->get_name();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			bool tmp6 = (tmp5 == HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			if ((tmp6)){
				HX_STACK_LINE(62)
				::openfl::text::TextField tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(62)
				tmp7 = hx::TCast< ::openfl::text::TextField >::cast(obj);
				HX_STACK_LINE(62)
				Float tmp8 = tmp7->get_textWidth();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("SizeTools.hx","\x84","\x85","\x6c","\xb2"),25,HX_HCSTRING("ru.stablex.ui.misc.SizeTools","\x96","\x7c","\x66","\xf6"),HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				::haxe::Log_obj::trace(tmp8,tmp9);
			}
			HX_STACK_LINE(62)
			::openfl::text::TextField tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			tmp7 = hx::TCast< ::openfl::text::TextField >::cast(obj);
			HX_STACK_LINE(62)
			Float tmp8 = tmp7->get_textWidth();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			tmp2 = (tmp8 + (int)4);
		}
		else{
			HX_STACK_LINE(62)
			tmp2 = obj->get_width();
		}
	}
	HX_STACK_LINE(62)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,_objWidth,return )

Float Box_obj::_objHeight( ::openfl::display::DisplayObject obj){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_objHeight",0x0f8a3b1f,"ru.stablex.ui.widgets.Box._objHeight","ru/stablex/ui/widgets/Box.hx",70,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(71)
	::openfl::display::DisplayObject tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(71)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	if ((tmp1)){
		HX_STACK_LINE(71)
		::ru::stablex::ui::widgets::Widget tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		tmp3 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(obj);
		HX_STACK_LINE(71)
		tmp2 = tmp3->get_h();
	}
	else{
		HX_STACK_LINE(71)
		::openfl::display::DisplayObject tmp3 = obj;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::openfl::text::TextField >());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		if ((tmp4)){
			HX_STACK_LINE(71)
			::openfl::text::TextField tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			tmp5 = hx::TCast< ::openfl::text::TextField >::cast(obj);
			HX_STACK_LINE(71)
			Float tmp6 = tmp5->get_textHeight();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			tmp2 = (tmp6 + (int)4);
		}
		else{
			HX_STACK_LINE(71)
			tmp2 = obj->get_height();
		}
	}
	HX_STACK_LINE(71)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,_objHeight,return )

Void Box_obj::_setObjX( ::openfl::display::DisplayObject obj,Float x){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_setObjX",0xae5f9ae4,"ru.stablex.ui.widgets.Box._setObjX","ru/stablex/ui/widgets/Box.hx",79,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(80)
			obj->set_x(tmp);
		}
		HX_STACK_LINE(82)
		bool tmp = this->intPositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		if ((tmp)){
			HX_STACK_LINE(83)
			Float tmp1 = obj->get_x();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(83)
			obj->set_x(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Box_obj,_setObjX,(void))

Void Box_obj::_setObjY( ::openfl::display::DisplayObject obj,Float y){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_setObjY",0xae5f9ae5,"ru.stablex.ui.widgets.Box._setObjY","ru/stablex/ui/widgets/Box.hx",92,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			Float tmp = y;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(93)
			obj->set_y(tmp);
		}
		HX_STACK_LINE(95)
		bool tmp = this->intPositions;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		if ((tmp)){
			HX_STACK_LINE(96)
			Float tmp1 = obj->get_y();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(96)
			int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			obj->set_y(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Box_obj,_setObjY,(void))

Void Box_obj::refresh( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","refresh",0x3959a5bb,"ru.stablex.ui.widgets.Box.refresh","ru/stablex/ui/widgets/Box.hx",110,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		bool tmp = this->autoWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		if ((tmp1)){
			HX_STACK_LINE(111)
			tmp2 = this->autoHeight;
		}
		else{
			HX_STACK_LINE(111)
			tmp2 = true;
		}
		HX_STACK_LINE(111)
		if ((tmp2)){
			HX_STACK_LINE(112)
			bool tmp3 = this->autoWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(112)
			Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(112)
			if ((tmp3)){
				HX_STACK_LINE(112)
				tmp4 = this->_calcWidth();
			}
			else{
				HX_STACK_LINE(112)
				tmp4 = this->_width;
			}
			HX_STACK_LINE(112)
			Float w = tmp4;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(113)
			bool tmp5 = this->autoHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			if ((tmp5)){
				HX_STACK_LINE(113)
				tmp6 = this->_calcHeight();
			}
			else{
				HX_STACK_LINE(113)
				tmp6 = this->_height;
			}
			HX_STACK_LINE(113)
			Float h = tmp6;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(115)
			Float tmp7 = this->_width;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			Float tmp8 = w;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(115)
			bool tmp9 = (tmp7 != tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(115)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(115)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(115)
			if ((tmp10)){
				HX_STACK_LINE(115)
				Float tmp12 = this->_height;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(115)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(115)
				Float tmp14 = h;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(115)
				tmp11 = (tmp13 != tmp14);
			}
			else{
				HX_STACK_LINE(115)
				tmp11 = true;
			}
			HX_STACK_LINE(115)
			if ((tmp11)){
				HX_STACK_LINE(117)
				this->_width = w;
				HX_STACK_LINE(118)
				this->_height = h;
				HX_STACK_LINE(120)
				::ru::stablex::ui::events::WidgetEvent tmp12 = ::ru::stablex::ui::events::WidgetEvent_obj::__new(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(120)
				this->dispatchEvent(tmp12);
			}
		}
		HX_STACK_LINE(124)
		this->super::refresh();
		HX_STACK_LINE(126)
		::ru::stablex::ui::layouts::Layout tmp3 = this->layout;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(126)
		if ((tmp4)){
			HX_STACK_LINE(127)
			this->alignElements();
		}
	}
return null();
}


Float Box_obj::_calcWidth( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_calcWidth",0x02362d12,"ru.stablex.ui.widgets.Box._calcWidth","ru/stablex/ui/widgets/Box.hx",136,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	bool tmp = this->vertical;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	if ((tmp)){
		HX_STACK_LINE(140)
		Float w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(141)
		::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(142)
		Float childW = (int)0;		HX_STACK_VAR(childW,"childW");
		HX_STACK_LINE(144)
		{
			HX_STACK_LINE(144)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(144)
			int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(144)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(144)
			while((true)){
				HX_STACK_LINE(144)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(144)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(144)
				if ((tmp3)){
					HX_STACK_LINE(144)
					break;
				}
				HX_STACK_LINE(144)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(144)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(145)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(145)
				::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(145)
				child = tmp6;
				HX_STACK_LINE(146)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(146)
				::openfl::display::DisplayObject tmp8 = this->getChildAt(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(146)
				child = tmp8;
				HX_STACK_LINE(147)
				bool tmp9 = child->get_visible();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(147)
				if ((tmp9)){
					HX_STACK_LINE(148)
					::openfl::display::DisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(148)
					Float tmp11 = this->_objWidth(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(148)
					childW = tmp11;
					HX_STACK_LINE(149)
					bool tmp12 = (childW > w);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(149)
					if ((tmp12)){
						HX_STACK_LINE(150)
						w = childW;
					}
				}
			}
		}
		HX_STACK_LINE(155)
		Float tmp1 = w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		Float tmp2 = this->paddingLeft;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		Float tmp4 = this->paddingRight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		return tmp5;
	}
	else{
		HX_STACK_LINE(158)
		Float tmp1 = this->paddingLeft;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		Float tmp2 = this->paddingRight;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		Float w = tmp3;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(159)
		::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(160)
		int visibleChildren = (int)0;		HX_STACK_VAR(visibleChildren,"visibleChildren");
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(162)
			int tmp4 = this->get_numChildren();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(162)
			while((true)){
				HX_STACK_LINE(162)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(162)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(162)
				if ((tmp6)){
					HX_STACK_LINE(162)
					break;
				}
				HX_STACK_LINE(162)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(162)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(163)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(163)
				::openfl::display::DisplayObject tmp9 = this->getChildAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(163)
				child = tmp9;
				HX_STACK_LINE(164)
				bool tmp10 = child->get_visible();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(164)
				if ((tmp10)){
					HX_STACK_LINE(165)
					::openfl::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(165)
					Float tmp12 = this->_objWidth(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(165)
					hx::AddEq(w,tmp12);
					HX_STACK_LINE(166)
					(visibleChildren)++;
				}
			}
		}
		HX_STACK_LINE(170)
		Float tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(170)
		int tmp5 = (visibleChildren - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		Float tmp6 = this->childPadding;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(170)
		return tmp8;
	}
	HX_STACK_LINE(138)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,_calcWidth,return )

Float Box_obj::_calcHeight( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_calcHeight",0xa380bb5b,"ru.stablex.ui.widgets.Box._calcHeight","ru/stablex/ui/widgets/Box.hx",179,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	bool tmp = this->vertical;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	if ((tmp)){
		HX_STACK_LINE(183)
		Float tmp1 = this->paddingTop;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(183)
		Float tmp2 = this->paddingBottom;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		Float h = tmp3;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(184)
		::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(185)
		int visibleChildren = (int)0;		HX_STACK_VAR(visibleChildren,"visibleChildren");
		HX_STACK_LINE(187)
		{
			HX_STACK_LINE(187)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(187)
			int tmp4 = this->get_numChildren();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			int _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(187)
			while((true)){
				HX_STACK_LINE(187)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(187)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(187)
				if ((tmp6)){
					HX_STACK_LINE(187)
					break;
				}
				HX_STACK_LINE(187)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(187)
				int i = tmp7;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(188)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(188)
				::openfl::display::DisplayObject tmp9 = this->getChildAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(188)
				child = tmp9;
				HX_STACK_LINE(189)
				bool tmp10 = child->get_visible();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(189)
				if ((tmp10)){
					HX_STACK_LINE(190)
					::openfl::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(190)
					Float tmp12 = this->_objHeight(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(190)
					hx::AddEq(h,tmp12);
					HX_STACK_LINE(191)
					(visibleChildren)++;
				}
			}
		}
		HX_STACK_LINE(195)
		Float tmp4 = h;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		int tmp5 = (visibleChildren - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		Float tmp6 = this->childPadding;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(195)
		Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(195)
		Float tmp8 = (tmp4 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		return tmp8;
	}
	else{
		HX_STACK_LINE(200)
		Float h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(201)
		Float childH = (int)0;		HX_STACK_VAR(childH,"childH");
		HX_STACK_LINE(202)
		::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(204)
		{
			HX_STACK_LINE(204)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(204)
			int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(204)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(204)
			while((true)){
				HX_STACK_LINE(204)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(204)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(204)
				if ((tmp3)){
					HX_STACK_LINE(204)
					break;
				}
				HX_STACK_LINE(204)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(204)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(205)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(205)
				::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(205)
				child = tmp6;
				HX_STACK_LINE(206)
				bool tmp7 = child->get_visible();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(206)
				if ((tmp7)){
					HX_STACK_LINE(207)
					::openfl::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(207)
					Float tmp9 = this->_objHeight(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(207)
					childH = tmp9;
					HX_STACK_LINE(208)
					bool tmp10 = (childH > h);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(208)
					if ((tmp10)){
						HX_STACK_LINE(209)
						h = childH;
					}
				}
			}
		}
		HX_STACK_LINE(214)
		Float tmp1 = h;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		Float tmp2 = this->paddingTop;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(214)
		Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(214)
		Float tmp4 = this->paddingBottom;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(214)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(214)
		return tmp5;
	}
	HX_STACK_LINE(181)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,_calcHeight,return )

Void Box_obj::_resizeWithPercent( ::ru::stablex::ui::widgets::Widget parent){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_resizeWithPercent",0xf26fc8ac,"ru.stablex.ui.widgets.Box._resizeWithPercent","ru/stablex/ui/widgets/Box.hx",223,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parent,"parent")
		HX_STACK_LINE(225)
		bool tmp = this->_widthUsePercent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		if ((tmp)){
			HX_STACK_LINE(226)
			Float tmp2 = parent->get_contentWidth();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			Float tmp3 = this->_widthPercent;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			tmp1 = (Float(tmp4) / Float((int)100));
		}
		else{
			HX_STACK_LINE(227)
			tmp1 = this->_width;
		}
		HX_STACK_LINE(224)
		Float newWidth = tmp1;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(230)
		bool tmp2 = this->_heightUsePercent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(230)
		if ((tmp2)){
			HX_STACK_LINE(231)
			Float tmp4 = parent->get_contentHeight();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(231)
			Float tmp5 = this->_heightPercent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(231)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(231)
			tmp3 = (Float(tmp6) / Float((int)100));
		}
		else{
			HX_STACK_LINE(232)
			tmp3 = this->_height;
		}
		HX_STACK_LINE(229)
		Float newHeight = tmp3;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(235)
		bool tmp4 = this->minWidthByContent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(235)
		if ((tmp4)){
			HX_STACK_LINE(236)
			Float tmp5 = newWidth;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(236)
			Float tmp6 = this->_calcWidth();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(236)
			Float tmp7 = ::Math_obj::max(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(236)
			newWidth = tmp7;
		}
		HX_STACK_LINE(238)
		bool tmp5 = this->minHeightByContent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(238)
		if ((tmp5)){
			HX_STACK_LINE(239)
			Float tmp6 = newHeight;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(239)
			Float tmp7 = this->_calcHeight();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(239)
			Float tmp8 = ::Math_obj::max(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(239)
			newHeight = tmp8;
		}
		HX_STACK_LINE(242)
		Float tmp6 = newWidth;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(242)
		Float tmp7 = newHeight;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(242)
		this->resize(tmp6,tmp7,true);
	}
return null();
}


Void Box_obj::alignElements( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","alignElements",0x933e09fc,"ru.stablex.ui.widgets.Box.alignElements","ru/stablex/ui/widgets/Box.hx",250,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_LINE(251)
		bool tmp = this->unifyChildren;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		if ((tmp)){
			HX_STACK_LINE(252)
			this->_unifyChildren();
		}
		HX_STACK_LINE(256)
		int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(256)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		if ((tmp2)){
			HX_STACK_LINE(256)
			return null();
		}
		HX_STACK_LINE(258)
		::String tmp3 = this->align;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		Array< ::String > alignments = tmp3.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(alignments,"alignments");
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(261)
			while((true)){
				HX_STACK_LINE(261)
				bool tmp4 = (_g < alignments->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(261)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(261)
				if ((tmp5)){
					HX_STACK_LINE(261)
					break;
				}
				HX_STACK_LINE(261)
				::String tmp6 = alignments->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(261)
				::String align = tmp6;		HX_STACK_VAR(align,"align");
				HX_STACK_LINE(261)
				++(_g);
				HX_STACK_LINE(262)
				::String tmp7 = align;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(262)
				::String _switch_1 = (tmp7);
				if (  ( _switch_1==HX_HCSTRING("top","\x95","\x66","\x58","\x00"))){
					HX_STACK_LINE(263)
					this->_vAlignTop();
				}
				else if (  ( _switch_1==HX_HCSTRING("middle","\x55","\xd3","\x5e","\x4c"))){
					HX_STACK_LINE(264)
					this->_vAlignMiddle();
				}
				else if (  ( _switch_1==HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"))){
					HX_STACK_LINE(265)
					this->_vAlignBottom();
				}
				else if (  ( _switch_1==HX_HCSTRING("left","\x07","\x08","\xb0","\x47"))){
					HX_STACK_LINE(266)
					this->_hAlignLeft();
				}
				else if (  ( _switch_1==HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"))){
					HX_STACK_LINE(267)
					this->_hAlignCenter();
				}
				else if (  ( _switch_1==HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"))){
					HX_STACK_LINE(268)
					this->_hAlignRight();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,alignElements,(void))

Void Box_obj::_unifyChildren( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_unifyChildren",0x0e130e03,"ru.stablex.ui.widgets.Box._unifyChildren","ru/stablex/ui/widgets/Box.hx",278,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_LINE(292)
		int visibleChildren = (int)0;		HX_STACK_VAR(visibleChildren,"visibleChildren");
		HX_STACK_LINE(293)
		{
			HX_STACK_LINE(293)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(293)
			int tmp = this->get_numChildren();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(293)
			int _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(293)
			while((true)){
				HX_STACK_LINE(293)
				bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(293)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(293)
				if ((tmp2)){
					HX_STACK_LINE(293)
					break;
				}
				HX_STACK_LINE(293)
				int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(293)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(294)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(294)
				::openfl::display::DisplayObject tmp5 = this->getChildAt(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(294)
				bool tmp6 = tmp5->get_visible();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(294)
				if ((tmp6)){
					HX_STACK_LINE(295)
					(visibleChildren)++;
				}
			}
		}
		HX_STACK_LINE(299)
		::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(302)
		bool tmp = this->vertical;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(302)
		if ((tmp)){
			HX_STACK_LINE(303)
			Float tmp1 = this->_width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(303)
			Float tmp2 = this->paddingLeft;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(303)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(303)
			Float tmp4 = this->paddingRight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(303)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			Float childWidth = tmp5;		HX_STACK_VAR(childWidth,"childWidth");
			HX_STACK_LINE(304)
			Float tmp6 = this->_height;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(304)
			Float tmp7 = this->paddingTop;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(304)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(304)
			Float tmp9 = this->paddingBottom;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(304)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(304)
			Float tmp11 = this->childPadding;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(304)
			int tmp12 = (visibleChildren - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(304)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(304)
			Float tmp14 = (tmp10 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(304)
			int tmp15 = visibleChildren;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(304)
			Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(304)
			Float childHeight = tmp16;		HX_STACK_VAR(childHeight,"childHeight");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(306)
				int tmp17 = this->get_numChildren();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(306)
				int _g = tmp17;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(306)
				while((true)){
					HX_STACK_LINE(306)
					bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(306)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(306)
					if ((tmp19)){
						HX_STACK_LINE(306)
						break;
					}
					HX_STACK_LINE(306)
					int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(306)
					int i = tmp20;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(307)
					int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(307)
					::openfl::display::DisplayObject tmp22 = this->getChildAt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(307)
					child = tmp22;
					HX_STACK_LINE(308)
					::openfl::display::DisplayObject tmp23 = child;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(308)
					bool tmp24 = ::Std_obj::is(tmp23,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(308)
					if ((tmp24)){
						HX_STACK_LINE(309)
						::ru::stablex::ui::widgets::Widget tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(309)
						tmp25 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
						HX_STACK_LINE(309)
						Dynamic tmp26 = this->_onChildResize_dyn();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(309)
						tmp25->removeEventListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp26,null());
						HX_STACK_LINE(310)
						::ru::stablex::ui::widgets::Widget tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(310)
						tmp27 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
						HX_STACK_LINE(310)
						Float tmp28 = childWidth;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(310)
						Float tmp29 = childHeight;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(310)
						tmp27->resize(tmp28,tmp29,null());
						HX_STACK_LINE(311)
						::ru::stablex::ui::widgets::Widget tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(311)
						tmp30 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
						HX_STACK_LINE(311)
						Dynamic tmp31 = this->_onChildResize_dyn();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(311)
						tmp30->addUniqueListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp31,null(),null(),null());
					}
				}
			}
		}
		else{
			HX_STACK_LINE(317)
			Float tmp1 = this->_width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(317)
			Float tmp2 = this->paddingLeft;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(317)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(317)
			Float tmp4 = this->paddingRight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(317)
			Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(317)
			Float tmp6 = this->childPadding;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(317)
			int tmp7 = (visibleChildren - (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(317)
			Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(317)
			Float tmp9 = (tmp5 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(317)
			int tmp10 = visibleChildren;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(317)
			Float tmp11 = (Float(tmp9) / Float(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(317)
			Float childWidth = tmp11;		HX_STACK_VAR(childWidth,"childWidth");
			HX_STACK_LINE(318)
			Float tmp12 = this->_height;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(318)
			Float tmp13 = this->paddingTop;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(318)
			Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(318)
			Float tmp15 = this->paddingBottom;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(318)
			Float tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(318)
			Float childHeight = tmp16;		HX_STACK_VAR(childHeight,"childHeight");
			HX_STACK_LINE(320)
			{
				HX_STACK_LINE(320)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(320)
				int tmp17 = this->get_numChildren();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(320)
				int _g = tmp17;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(320)
				while((true)){
					HX_STACK_LINE(320)
					bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(320)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(320)
					if ((tmp19)){
						HX_STACK_LINE(320)
						break;
					}
					HX_STACK_LINE(320)
					int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(320)
					int i = tmp20;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(321)
					int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(321)
					::openfl::display::DisplayObject tmp22 = this->getChildAt(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(321)
					child = tmp22;
					HX_STACK_LINE(322)
					::openfl::display::DisplayObject tmp23 = child;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(322)
					bool tmp24 = ::Std_obj::is(tmp23,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(322)
					if ((tmp24)){
						HX_STACK_LINE(323)
						::ru::stablex::ui::widgets::Widget tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(323)
						tmp25 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
						HX_STACK_LINE(323)
						Dynamic tmp26 = this->_onChildResize_dyn();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(323)
						tmp25->removeEventListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp26,null());
						HX_STACK_LINE(324)
						::ru::stablex::ui::widgets::Widget tmp27;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(324)
						tmp27 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
						HX_STACK_LINE(324)
						Float tmp28 = childWidth;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(324)
						Float tmp29 = childHeight;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(324)
						tmp27->resize(tmp28,tmp29,null());
						HX_STACK_LINE(325)
						::ru::stablex::ui::widgets::Widget tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(325)
						tmp30 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
						HX_STACK_LINE(325)
						Dynamic tmp31 = this->_onChildResize_dyn();		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(325)
						tmp30->addUniqueListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp31,null(),null(),null());
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,_unifyChildren,(void))

Void Box_obj::_vAlignTop( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_vAlignTop",0x23a20f47,"ru.stablex.ui.widgets.Box._vAlignTop","ru/stablex/ui/widgets/Box.hx",336,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_LINE(338)
		bool tmp = this->vertical;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(338)
		if ((tmp)){
			HX_STACK_LINE(339)
			Float tmp1 = this->paddingTop;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(339)
			Float lastY = tmp1;		HX_STACK_VAR(lastY,"lastY");
			HX_STACK_LINE(340)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(342)
			{
				HX_STACK_LINE(342)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(342)
				int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(342)
				int _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(342)
				while((true)){
					HX_STACK_LINE(342)
					bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(342)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(342)
					if ((tmp4)){
						HX_STACK_LINE(342)
						break;
					}
					HX_STACK_LINE(342)
					int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(342)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(343)
					int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(343)
					::openfl::display::DisplayObject tmp7 = this->getChildAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(343)
					child = tmp7;
					HX_STACK_LINE(344)
					bool tmp8 = child->get_visible();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(344)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(344)
					if ((tmp9)){
						HX_STACK_LINE(344)
						continue;
					}
					HX_STACK_LINE(345)
					::openfl::display::DisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(345)
					Float tmp11 = lastY;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(345)
					this->_setObjY(tmp10,tmp11);
					HX_STACK_LINE(346)
					::openfl::display::DisplayObject tmp12 = child;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(346)
					Float tmp13 = this->_objHeight(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(346)
					Float tmp14 = this->childPadding;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(346)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(346)
					hx::AddEq(lastY,tmp15);
				}
			}
		}
		else{
			HX_STACK_LINE(351)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(351)
			int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(351)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(351)
			while((true)){
				HX_STACK_LINE(351)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(351)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(351)
				if ((tmp3)){
					HX_STACK_LINE(351)
					break;
				}
				HX_STACK_LINE(351)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(351)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(352)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(352)
				::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(352)
				Float tmp7 = this->paddingTop;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(352)
				this->_setObjY(tmp6,tmp7);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,_vAlignTop,(void))

Void Box_obj::_vAlignMiddle( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_vAlignMiddle",0x1e3625e3,"ru.stablex.ui.widgets.Box._vAlignMiddle","ru/stablex/ui/widgets/Box.hx",362,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_LINE(364)
		bool tmp = this->vertical;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		if ((tmp)){
			HX_STACK_LINE(366)
			Float height = (int)0;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(367)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(368)
			int visibleChildren = (int)0;		HX_STACK_VAR(visibleChildren,"visibleChildren");
			HX_STACK_LINE(370)
			{
				HX_STACK_LINE(370)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(370)
				int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(370)
				int _g = tmp1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(370)
				while((true)){
					HX_STACK_LINE(370)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(370)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(370)
					if ((tmp3)){
						HX_STACK_LINE(370)
						break;
					}
					HX_STACK_LINE(370)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(370)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(371)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(371)
					::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(371)
					child = tmp6;
					HX_STACK_LINE(372)
					bool tmp7 = child->get_visible();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(372)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(372)
					if ((tmp8)){
						HX_STACK_LINE(372)
						continue;
					}
					HX_STACK_LINE(373)
					(visibleChildren)++;
					HX_STACK_LINE(374)
					::openfl::display::DisplayObject tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(374)
					Float tmp10 = this->_objHeight(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(374)
					hx::AddEq(height,tmp10);
				}
			}
			HX_STACK_LINE(378)
			int tmp1 = (visibleChildren - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(378)
			Float tmp2 = this->childPadding;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(378)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(378)
			hx::AddEq(height,tmp3);
			HX_STACK_LINE(381)
			Float tmp4 = this->get_h();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(381)
			Float tmp5 = this->paddingTop;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(381)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(381)
			Float tmp7 = this->paddingBottom;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(381)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(381)
			Float tmp9 = height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(381)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(381)
			Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(381)
			Float tmp12 = this->paddingTop;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(381)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(381)
			Float lastY = tmp13;		HX_STACK_VAR(lastY,"lastY");
			HX_STACK_LINE(383)
			{
				HX_STACK_LINE(383)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(383)
				int tmp14 = this->get_numChildren();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(383)
				int _g = tmp14;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(383)
				while((true)){
					HX_STACK_LINE(383)
					bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(383)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(383)
					if ((tmp16)){
						HX_STACK_LINE(383)
						break;
					}
					HX_STACK_LINE(383)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(383)
					int i = tmp17;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(384)
					int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(384)
					::openfl::display::DisplayObject tmp19 = this->getChildAt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(384)
					child = tmp19;
					HX_STACK_LINE(385)
					bool tmp20 = child->get_visible();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(385)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(385)
					if ((tmp21)){
						HX_STACK_LINE(385)
						continue;
					}
					HX_STACK_LINE(386)
					::openfl::display::DisplayObject tmp22 = child;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(386)
					Float tmp23 = lastY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(386)
					this->_setObjY(tmp22,tmp23);
					HX_STACK_LINE(387)
					::openfl::display::DisplayObject tmp24 = child;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(387)
					Float tmp25 = this->_objHeight(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(387)
					Float tmp26 = this->childPadding;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(387)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(387)
					hx::AddEq(lastY,tmp27);
				}
			}
		}
		else{
			HX_STACK_LINE(392)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(393)
			{
				HX_STACK_LINE(393)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(393)
				int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(393)
				int _g = tmp1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(393)
				while((true)){
					HX_STACK_LINE(393)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(393)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(393)
					if ((tmp3)){
						HX_STACK_LINE(393)
						break;
					}
					HX_STACK_LINE(393)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(393)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(394)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(394)
					::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(394)
					child = tmp6;
					HX_STACK_LINE(395)
					::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(395)
					Float tmp8 = this->get_h();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(395)
					Float tmp9 = this->paddingTop;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(395)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(395)
					Float tmp11 = this->paddingBottom;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(395)
					Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(395)
					::openfl::display::DisplayObject tmp13 = child;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(395)
					Float tmp14 = this->_objHeight(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(395)
					Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(395)
					Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(395)
					Float tmp17 = this->paddingTop;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(395)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(395)
					this->_setObjY(tmp7,tmp18);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,_vAlignMiddle,(void))

Void Box_obj::_vAlignBottom( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_vAlignBottom",0x37503979,"ru.stablex.ui.widgets.Box._vAlignBottom","ru/stablex/ui/widgets/Box.hx",405,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_LINE(407)
		bool tmp = this->vertical;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(407)
		if ((tmp)){
			HX_STACK_LINE(408)
			Float tmp1 = this->get_h();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(408)
			Float tmp2 = this->paddingBottom;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(408)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(408)
			Float lastY = tmp3;		HX_STACK_VAR(lastY,"lastY");
			HX_STACK_LINE(409)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(411)
			{
				HX_STACK_LINE(411)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(411)
				int tmp4 = this->get_numChildren();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(411)
				int _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(411)
				while((true)){
					HX_STACK_LINE(411)
					bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(411)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(411)
					if ((tmp6)){
						HX_STACK_LINE(411)
						break;
					}
					HX_STACK_LINE(411)
					int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(411)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(412)
					int tmp8 = this->get_numChildren();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(412)
					int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(412)
					int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(412)
					int tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(412)
					::openfl::display::DisplayObject tmp12 = this->getChildAt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(412)
					child = tmp12;
					HX_STACK_LINE(413)
					bool tmp13 = child->get_visible();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(413)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(413)
					if ((tmp14)){
						HX_STACK_LINE(413)
						continue;
					}
					HX_STACK_LINE(414)
					::openfl::display::DisplayObject tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(414)
					Float tmp16 = lastY;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(414)
					::openfl::display::DisplayObject tmp17 = child;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(414)
					Float tmp18 = this->_objHeight(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(414)
					Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(414)
					this->_setObjY(tmp15,tmp19);
					HX_STACK_LINE(415)
					Float tmp20 = child->get_y();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(415)
					Float tmp21 = this->childPadding;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(415)
					Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(415)
					lastY = tmp22;
				}
			}
		}
		else{
			HX_STACK_LINE(420)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(421)
			{
				HX_STACK_LINE(421)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(421)
				int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(421)
				int _g = tmp1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(421)
				while((true)){
					HX_STACK_LINE(421)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(421)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(421)
					if ((tmp3)){
						HX_STACK_LINE(421)
						break;
					}
					HX_STACK_LINE(421)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(421)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(422)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(422)
					::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(422)
					child = tmp6;
					HX_STACK_LINE(423)
					::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(423)
					Float tmp8 = this->get_h();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(423)
					Float tmp9 = this->paddingBottom;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(423)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(423)
					::openfl::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(423)
					Float tmp12 = this->_objHeight(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(423)
					Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(423)
					this->_setObjY(tmp7,tmp13);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,_vAlignBottom,(void))

Void Box_obj::_hAlignLeft( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_hAlignLeft",0x80c76ce3,"ru.stablex.ui.widgets.Box._hAlignLeft","ru/stablex/ui/widgets/Box.hx",433,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_LINE(435)
		bool tmp = this->vertical;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(435)
		if ((tmp)){
			HX_STACK_LINE(436)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(436)
			int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(436)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(436)
			while((true)){
				HX_STACK_LINE(436)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(436)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(436)
				if ((tmp3)){
					HX_STACK_LINE(436)
					break;
				}
				HX_STACK_LINE(436)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(436)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(437)
				int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(437)
				::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(437)
				Float tmp7 = this->paddingLeft;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(437)
				this->_setObjX(tmp6,tmp7);
			}
		}
		else{
			HX_STACK_LINE(442)
			Float tmp1 = this->paddingLeft;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(442)
			Float lastX = tmp1;		HX_STACK_VAR(lastX,"lastX");
			HX_STACK_LINE(443)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(445)
			{
				HX_STACK_LINE(445)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(445)
				int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(445)
				int _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(445)
				while((true)){
					HX_STACK_LINE(445)
					bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(445)
					bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(445)
					if ((tmp4)){
						HX_STACK_LINE(445)
						break;
					}
					HX_STACK_LINE(445)
					int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(445)
					int i = tmp5;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(446)
					int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(446)
					::openfl::display::DisplayObject tmp7 = this->getChildAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(446)
					child = tmp7;
					HX_STACK_LINE(447)
					bool tmp8 = child->get_visible();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(447)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(447)
					if ((tmp9)){
						HX_STACK_LINE(447)
						continue;
					}
					HX_STACK_LINE(448)
					::openfl::display::DisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(448)
					Float tmp11 = lastX;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(448)
					this->_setObjX(tmp10,tmp11);
					HX_STACK_LINE(449)
					::openfl::display::DisplayObject tmp12 = child;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(449)
					Float tmp13 = this->_objWidth(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(449)
					Float tmp14 = this->childPadding;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(449)
					Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(449)
					hx::AddEq(lastX,tmp15);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,_hAlignLeft,(void))

Void Box_obj::_hAlignRight( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_hAlignRight",0xa4c4e780,"ru.stablex.ui.widgets.Box._hAlignRight","ru/stablex/ui/widgets/Box.hx",459,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_LINE(461)
		bool tmp = this->vertical;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(461)
		if ((tmp)){
			HX_STACK_LINE(462)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(463)
			{
				HX_STACK_LINE(463)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(463)
				int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(463)
				int _g = tmp1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(463)
				while((true)){
					HX_STACK_LINE(463)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(463)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(463)
					if ((tmp3)){
						HX_STACK_LINE(463)
						break;
					}
					HX_STACK_LINE(463)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(463)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(464)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(464)
					::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(464)
					child = tmp6;
					HX_STACK_LINE(465)
					::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(465)
					Float tmp8 = this->get_w();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(465)
					Float tmp9 = this->paddingRight;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(465)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(465)
					::openfl::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(465)
					Float tmp12 = this->_objWidth(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(465)
					Float tmp13 = (tmp10 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(465)
					this->_setObjX(tmp7,tmp13);
				}
			}
		}
		else{
			HX_STACK_LINE(470)
			Float tmp1 = this->get_w();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(470)
			Float tmp2 = this->paddingRight;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(470)
			Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(470)
			Float lastX = tmp3;		HX_STACK_VAR(lastX,"lastX");
			HX_STACK_LINE(471)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(473)
			{
				HX_STACK_LINE(473)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(473)
				int tmp4 = this->get_numChildren();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(473)
				int _g = tmp4;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(473)
				while((true)){
					HX_STACK_LINE(473)
					bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(473)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(473)
					if ((tmp6)){
						HX_STACK_LINE(473)
						break;
					}
					HX_STACK_LINE(473)
					int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(473)
					int i = tmp7;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(474)
					int tmp8 = this->get_numChildren();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(474)
					int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(474)
					int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(474)
					int tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(474)
					::openfl::display::DisplayObject tmp12 = this->getChildAt(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(474)
					child = tmp12;
					HX_STACK_LINE(475)
					bool tmp13 = child->get_visible();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(475)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(475)
					if ((tmp14)){
						HX_STACK_LINE(475)
						continue;
					}
					HX_STACK_LINE(476)
					::openfl::display::DisplayObject tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(476)
					Float tmp16 = lastX;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(476)
					::openfl::display::DisplayObject tmp17 = child;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(476)
					Float tmp18 = this->_objWidth(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(476)
					Float tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(476)
					this->_setObjX(tmp15,tmp19);
					HX_STACK_LINE(477)
					Float tmp20 = child->get_x();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(477)
					Float tmp21 = this->childPadding;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(477)
					Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(477)
					lastX = tmp22;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,_hAlignRight,(void))

Void Box_obj::_hAlignCenter( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_hAlignCenter",0x3f3a79b1,"ru.stablex.ui.widgets.Box._hAlignCenter","ru/stablex/ui/widgets/Box.hx",487,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_LINE(489)
		bool tmp = this->vertical;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(489)
		if ((tmp)){
			HX_STACK_LINE(490)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(491)
			{
				HX_STACK_LINE(491)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(491)
				int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(491)
				int _g = tmp1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(491)
				while((true)){
					HX_STACK_LINE(491)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(491)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(491)
					if ((tmp3)){
						HX_STACK_LINE(491)
						break;
					}
					HX_STACK_LINE(491)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(491)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(492)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(492)
					::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(492)
					child = tmp6;
					HX_STACK_LINE(493)
					::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(493)
					Float tmp8 = this->get_w();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(493)
					Float tmp9 = this->paddingLeft;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(493)
					Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(493)
					Float tmp11 = this->paddingRight;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(493)
					Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(493)
					::openfl::display::DisplayObject tmp13 = child;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(493)
					Float tmp14 = this->_objWidth(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(493)
					Float tmp15 = (tmp12 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(493)
					Float tmp16 = (Float(tmp15) / Float((int)2));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(493)
					Float tmp17 = this->paddingLeft;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(493)
					Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(493)
					this->_setObjX(tmp7,tmp18);
				}
			}
		}
		else{
			HX_STACK_LINE(499)
			::openfl::display::DisplayObject child;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(500)
			Float width = (int)0;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(501)
			int visibleChildren = (int)0;		HX_STACK_VAR(visibleChildren,"visibleChildren");
			HX_STACK_LINE(503)
			{
				HX_STACK_LINE(503)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(503)
				int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(503)
				int _g = tmp1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(503)
				while((true)){
					HX_STACK_LINE(503)
					bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(503)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(503)
					if ((tmp3)){
						HX_STACK_LINE(503)
						break;
					}
					HX_STACK_LINE(503)
					int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(503)
					int i = tmp4;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(504)
					int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(504)
					::openfl::display::DisplayObject tmp6 = this->getChildAt(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(504)
					child = tmp6;
					HX_STACK_LINE(505)
					bool tmp7 = child->get_visible();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(505)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(505)
					if ((tmp8)){
						HX_STACK_LINE(505)
						continue;
					}
					HX_STACK_LINE(506)
					(visibleChildren)++;
					HX_STACK_LINE(507)
					::openfl::display::DisplayObject tmp9 = child;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(507)
					Float tmp10 = this->_objWidth(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(507)
					hx::AddEq(width,tmp10);
				}
			}
			HX_STACK_LINE(511)
			int tmp1 = (visibleChildren - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(511)
			Float tmp2 = this->childPadding;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(511)
			Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(511)
			hx::AddEq(width,tmp3);
			HX_STACK_LINE(514)
			Float tmp4 = this->get_w();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(514)
			Float tmp5 = this->paddingLeft;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(514)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(514)
			Float tmp7 = this->paddingRight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(514)
			Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(514)
			Float tmp9 = width;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(514)
			Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(514)
			Float tmp11 = (Float(tmp10) / Float((int)2));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(514)
			Float tmp12 = this->paddingLeft;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(514)
			Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(514)
			Float lastX = tmp13;		HX_STACK_VAR(lastX,"lastX");
			HX_STACK_LINE(516)
			{
				HX_STACK_LINE(516)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(516)
				int tmp14 = this->get_numChildren();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(516)
				int _g = tmp14;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(516)
				while((true)){
					HX_STACK_LINE(516)
					bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(516)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(516)
					if ((tmp16)){
						HX_STACK_LINE(516)
						break;
					}
					HX_STACK_LINE(516)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(516)
					int i = tmp17;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(517)
					int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(517)
					::openfl::display::DisplayObject tmp19 = this->getChildAt(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(517)
					child = tmp19;
					HX_STACK_LINE(518)
					bool tmp20 = child->get_visible();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(518)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(518)
					if ((tmp21)){
						HX_STACK_LINE(518)
						continue;
					}
					HX_STACK_LINE(519)
					::openfl::display::DisplayObject tmp22 = child;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(519)
					Float tmp23 = lastX;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(519)
					this->_setObjX(tmp22,tmp23);
					HX_STACK_LINE(520)
					::openfl::display::DisplayObject tmp24 = child;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(520)
					Float tmp25 = this->_objWidth(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(520)
					Float tmp26 = this->childPadding;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(520)
					Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(520)
					hx::AddEq(lastX,tmp27);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Box_obj,_hAlignCenter,(void))

::openfl::display::DisplayObject Box_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","addChild",0x249067db,"ru.stablex.ui.widgets.Box.addChild","ru/stablex/ui/widgets/Box.hx",530,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(531)
	::openfl::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(531)
	this->super::addChild(tmp);
	HX_STACK_LINE(532)
	::openfl::display::DisplayObject tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(532)
	bool tmp2 = ::Std_obj::is(tmp1,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(532)
	if ((tmp2)){
		HX_STACK_LINE(533)
		::ru::stablex::ui::widgets::Widget tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(533)
		tmp3 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(533)
		Dynamic tmp4 = this->_onChildResize_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(533)
		tmp3->addUniqueListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp4,null(),null(),null());
		HX_STACK_LINE(534)
		this->_onChildResize(null());
	}
	HX_STACK_LINE(536)
	::openfl::display::DisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(536)
	return tmp3;
}


::openfl::display::DisplayObject Box_obj::addChildAt( ::openfl::display::DisplayObject child,int idx){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","addChildAt",0xb75e8dae,"ru.stablex.ui.widgets.Box.addChildAt","ru/stablex/ui/widgets/Box.hx",544,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(545)
	::openfl::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(545)
	int tmp1 = idx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(545)
	this->super::addChildAt(tmp,tmp1);
	HX_STACK_LINE(546)
	::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(546)
	bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(546)
	if ((tmp3)){
		HX_STACK_LINE(547)
		::ru::stablex::ui::widgets::Widget tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(547)
		tmp4 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(child);
		HX_STACK_LINE(547)
		Dynamic tmp5 = this->_onChildResize_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(547)
		tmp4->addUniqueListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp5,null(),null(),null());
		HX_STACK_LINE(548)
		this->_onChildResize(null());
	}
	HX_STACK_LINE(550)
	::openfl::display::DisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(550)
	return tmp4;
}


::openfl::display::DisplayObject Box_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","removeChild",0x5da9c298,"ru.stablex.ui.widgets.Box.removeChild","ru/stablex/ui/widgets/Box.hx",558,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(559)
	::openfl::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(559)
	this->super::removeChild(tmp);
	HX_STACK_LINE(560)
	Dynamic tmp1 = this->_onChildResize_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(560)
	child->removeEventListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp1,null());
	HX_STACK_LINE(561)
	bool tmp2 = this->destroyed;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(561)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(561)
	if ((tmp3)){
		HX_STACK_LINE(562)
		this->_onChildResize(null());
	}
	HX_STACK_LINE(564)
	::openfl::display::DisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(564)
	return tmp4;
}


::openfl::display::DisplayObject Box_obj::removeChildAt( int idx){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","removeChildAt",0x6d91d1ab,"ru.stablex.ui.widgets.Box.removeChildAt","ru/stablex/ui/widgets/Box.hx",572,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(idx,"idx")
	HX_STACK_LINE(573)
	int tmp = idx;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(573)
	::openfl::display::DisplayObject tmp1 = this->super::removeChildAt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(573)
	::openfl::display::DisplayObject child = tmp1;		HX_STACK_VAR(child,"child");
	HX_STACK_LINE(574)
	Dynamic tmp2 = this->_onChildResize_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(574)
	child->removeEventListener(HX_HCSTRING("widgetResize","\xd8","\xa8","\x1e","\x0d"),tmp2,null());
	HX_STACK_LINE(575)
	bool tmp3 = this->destroyed;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(575)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(575)
	if ((tmp4)){
		HX_STACK_LINE(576)
		this->_onChildResize(null());
	}
	HX_STACK_LINE(578)
	::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(578)
	return tmp5;
}


Void Box_obj::_onChildResize( ::ru::stablex::ui::events::WidgetEvent e){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Box","_onChildResize",0xeea91232,"ru.stablex.ui.widgets.Box._onChildResize","ru/stablex/ui/widgets/Box.hx",586,0x607c8670)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(587)
		bool tmp = this->created;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(587)
		if ((tmp)){
			HX_STACK_LINE(588)
			bool tmp1 = this->autoWidth;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(588)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(588)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(588)
			if ((tmp2)){
				HX_STACK_LINE(588)
				tmp3 = this->autoHeight;
			}
			else{
				HX_STACK_LINE(588)
				tmp3 = true;
			}
			HX_STACK_LINE(588)
			if ((tmp3)){
				HX_STACK_LINE(589)
				bool tmp4 = (e != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(589)
				if ((tmp4)){
					HX_STACK_LINE(590)
					Dynamic tmp5 = e->currentTarget;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(590)
					bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(590)
					::ru::stablex::ui::widgets::Widget tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(590)
					if ((tmp6)){
						HX_STACK_LINE(590)
						tmp7 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(e->currentTarget);
					}
					else{
						HX_STACK_LINE(590)
						tmp7 = null();
					}
					HX_STACK_LINE(590)
					::ru::stablex::ui::widgets::Widget child = tmp7;		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(592)
					bool tmp8 = (child != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(592)
					bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(592)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(592)
					if ((tmp9)){
						HX_STACK_LINE(592)
						bool tmp11 = child->get_visible();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(592)
						bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(592)
						bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(592)
						tmp10 = (tmp13 != false);
					}
					else{
						HX_STACK_LINE(592)
						tmp10 = false;
					}
					HX_STACK_LINE(592)
					bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(592)
					bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(592)
					if ((tmp11)){
						HX_STACK_LINE(593)
						bool tmp13 = this->autoWidth;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(593)
						bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(593)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(593)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(593)
						bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(593)
						bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(593)
						if ((tmp18)){
							HX_STACK_LINE(593)
							tmp16 = child->_widthUsePercent;
						}
						else{
							HX_STACK_LINE(593)
							tmp16 = false;
						}
						HX_STACK_LINE(593)
						bool tmp19 = tmp16;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(593)
						bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(593)
						tmp12 = !(tmp20);
					}
					else{
						HX_STACK_LINE(592)
						tmp12 = false;
					}
					HX_STACK_LINE(592)
					bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(592)
					if ((tmp12)){
						HX_STACK_LINE(594)
						bool tmp14 = this->autoHeight;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(594)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(594)
						bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(594)
						bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(594)
						if ((tmp17)){
							HX_STACK_LINE(594)
							tmp16 = child->_heightUsePercent;
						}
						else{
							HX_STACK_LINE(594)
							tmp16 = false;
						}
						HX_STACK_LINE(594)
						bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(594)
						tmp13 = !(tmp18);
					}
					else{
						HX_STACK_LINE(592)
						tmp13 = false;
					}
					HX_STACK_LINE(591)
					if ((tmp13)){
						HX_STACK_LINE(596)
						this->refresh();
					}
				}
				else{
					HX_STACK_LINE(599)
					this->refresh();
				}
			}
			else{
				HX_STACK_LINE(602)
				::ru::stablex::ui::layouts::Layout tmp4 = this->layout;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(602)
				bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(602)
				if ((tmp5)){
					HX_STACK_LINE(603)
					this->alignElements();
				}
				else{
					HX_STACK_LINE(605)
					this->applyLayout();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,_onChildResize,(void))

Float Box_obj::get_contentHeight( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","get_contentHeight",0xc299a937,"ru.stablex.ui.widgets.Box.get_contentHeight","ru/stablex/ui/widgets/Box.hx",620,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_LINE(621)
	Float tmp = this->get_h();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(621)
	Float tmp1 = this->paddingTop;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(621)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(621)
	Float tmp3 = this->paddingBottom;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(621)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(621)
	return tmp4;
}


Float Box_obj::get_contentWidth( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","get_contentWidth",0x708eaeb6,"ru.stablex.ui.widgets.Box.get_contentWidth","ru/stablex/ui/widgets/Box.hx",629,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_LINE(630)
	Float tmp = this->get_w();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(630)
	Float tmp1 = this->paddingLeft;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(630)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(630)
	Float tmp3 = this->paddingRight;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(630)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(630)
	return tmp4;
}


bool Box_obj::set_autoSize( bool as){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","set_autoSize",0x64848f6d,"ru.stablex.ui.widgets.Box.set_autoSize","ru/stablex/ui/widgets/Box.hx",638,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(as,"as")
	HX_STACK_LINE(639)
	bool tmp = this->autoHeight = as;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(639)
	bool tmp1 = this->autoWidth = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(639)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_autoSize,return )

Float Box_obj::set_w( Float w){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","set_w",0x6653af3a,"ru.stablex.ui.widgets.Box.set_w","ru/stablex/ui/widgets/Box.hx",647,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(648)
	this->autoWidth = false;
	HX_STACK_LINE(649)
	Float tmp = w;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(649)
	Float tmp1 = this->super::set_w(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(649)
	return tmp1;
}


Float Box_obj::set_widthPt( Float wp){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","set_widthPt",0xdb24acad,"ru.stablex.ui.widgets.Box.set_widthPt","ru/stablex/ui/widgets/Box.hx",657,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(wp,"wp")
	HX_STACK_LINE(658)
	this->autoWidth = false;
	HX_STACK_LINE(659)
	Float tmp = wp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(659)
	Float tmp1 = this->super::set_widthPt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(659)
	return tmp1;
}


Float Box_obj::set_heightPt( Float hp){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","set_heightPt",0x68565568,"ru.stablex.ui.widgets.Box.set_heightPt","ru/stablex/ui/widgets/Box.hx",667,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hp,"hp")
	HX_STACK_LINE(668)
	this->autoHeight = false;
	HX_STACK_LINE(669)
	Float tmp = hp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(669)
	Float tmp1 = this->super::set_heightPt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(669)
	return tmp1;
}


Float Box_obj::set_h( Float h){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","set_h",0x6653af2b,"ru.stablex.ui.widgets.Box.set_h","ru/stablex/ui/widgets/Box.hx",677,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(678)
	this->autoHeight = false;
	HX_STACK_LINE(679)
	Float tmp = h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(679)
	Float tmp1 = this->super::set_h(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(679)
	return tmp1;
}


Float Box_obj::set_padding( Float p){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Box","set_padding",0x7aa0fcd4,"ru.stablex.ui.widgets.Box.set_padding","ru/stablex/ui/widgets/Box.hx",687,0x607c8670)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(688)
	Float tmp = this->paddingLeft = p;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(688)
	Float tmp1 = this->paddingRight = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(688)
	Float tmp2 = this->paddingBottom = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(688)
	this->paddingTop = tmp2;
	HX_STACK_LINE(689)
	Float tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(689)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Box_obj,set_padding,return )


Box_obj::Box_obj()
{
}

void Box_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Box);
	HX_MARK_MEMBER_NAME(vertical,"vertical");
	HX_MARK_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_MARK_MEMBER_NAME(paddingRight,"paddingRight");
	HX_MARK_MEMBER_NAME(paddingTop,"paddingTop");
	HX_MARK_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_MARK_MEMBER_NAME(childPadding,"childPadding");
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(autoWidth,"autoWidth");
	HX_MARK_MEMBER_NAME(autoHeight,"autoHeight");
	HX_MARK_MEMBER_NAME(unifyChildren,"unifyChildren");
	HX_MARK_MEMBER_NAME(intPositions,"intPositions");
	::ru::stablex::ui::widgets::Widget_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Box_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertical,"vertical");
	HX_VISIT_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_VISIT_MEMBER_NAME(paddingRight,"paddingRight");
	HX_VISIT_MEMBER_NAME(paddingTop,"paddingTop");
	HX_VISIT_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_VISIT_MEMBER_NAME(childPadding,"childPadding");
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(autoWidth,"autoWidth");
	HX_VISIT_MEMBER_NAME(autoHeight,"autoHeight");
	HX_VISIT_MEMBER_NAME(unifyChildren,"unifyChildren");
	HX_VISIT_MEMBER_NAME(intPositions,"intPositions");
	::ru::stablex::ui::widgets::Widget_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Box_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"set_w") ) { return set_w_dyn(); }
		if (HX_FIELD_EQ(inName,"set_h") ) { return set_h_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { return vertical; }
		if (HX_FIELD_EQ(inName,"_setObjX") ) { return _setObjX_dyn(); }
		if (HX_FIELD_EQ(inName,"_setObjY") ) { return _setObjY_dyn(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { return autoWidth; }
		if (HX_FIELD_EQ(inName,"_objWidth") ) { return _objWidth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paddingTop") ) { return paddingTop; }
		if (HX_FIELD_EQ(inName,"autoHeight") ) { return autoHeight; }
		if (HX_FIELD_EQ(inName,"_objHeight") ) { return _objHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_calcWidth") ) { return _calcWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"_vAlignTop") ) { return _vAlignTop_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { return paddingLeft; }
		if (HX_FIELD_EQ(inName,"_calcHeight") ) { return _calcHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_hAlignLeft") ) { return _hAlignLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"set_widthPt") ) { return set_widthPt_dyn(); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { return paddingRight; }
		if (HX_FIELD_EQ(inName,"childPadding") ) { return childPadding; }
		if (HX_FIELD_EQ(inName,"intPositions") ) { return intPositions; }
		if (HX_FIELD_EQ(inName,"_hAlignRight") ) { return _hAlignRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_heightPt") ) { return set_heightPt_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { return paddingBottom; }
		if (HX_FIELD_EQ(inName,"unifyChildren") ) { return unifyChildren; }
		if (HX_FIELD_EQ(inName,"alignElements") ) { return alignElements_dyn(); }
		if (HX_FIELD_EQ(inName,"_vAlignMiddle") ) { return _vAlignMiddle_dyn(); }
		if (HX_FIELD_EQ(inName,"_vAlignBottom") ) { return _vAlignBottom_dyn(); }
		if (HX_FIELD_EQ(inName,"_hAlignCenter") ) { return _hAlignCenter_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_unifyChildren") ) { return _unifyChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"_onChildResize") ) { return _onChildResize_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_contentWidth") ) { return get_contentWidth_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_contentHeight") ) { return get_contentHeight_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_resizeWithPercent") ) { return _resizeWithPercent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Box_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return set_padding(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { vertical=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { autoWidth=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paddingTop") ) { paddingTop=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoHeight") ) { autoHeight=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { paddingLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { paddingRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childPadding") ) { childPadding=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"intPositions") ) { intPositions=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { paddingBottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unifyChildren") ) { unifyChildren=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Box_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	outFields->push(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85"));
	outFields->push(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a"));
	outFields->push(HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f"));
	outFields->push(HX_HCSTRING("childPadding","\x95","\x83","\x49","\x99"));
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("autoWidth","\x17","\xf4","\x6d","\xa8"));
	outFields->push(HX_HCSTRING("autoHeight","\xb6","\x18","\x17","\x6e"));
	outFields->push(HX_HCSTRING("unifyChildren","\xa2","\xad","\x56","\x98"));
	outFields->push(HX_HCSTRING("intPositions","\xbb","\x30","\xf9","\xea"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Box_obj,vertical),HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a")},
	{hx::fsFloat,(int)offsetof(Box_obj,paddingLeft),HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85")},
	{hx::fsFloat,(int)offsetof(Box_obj,paddingRight),HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a")},
	{hx::fsFloat,(int)offsetof(Box_obj,paddingTop),HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a")},
	{hx::fsFloat,(int)offsetof(Box_obj,paddingBottom),HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f")},
	{hx::fsFloat,(int)offsetof(Box_obj,childPadding),HX_HCSTRING("childPadding","\x95","\x83","\x49","\x99")},
	{hx::fsString,(int)offsetof(Box_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsBool,(int)offsetof(Box_obj,autoWidth),HX_HCSTRING("autoWidth","\x17","\xf4","\x6d","\xa8")},
	{hx::fsBool,(int)offsetof(Box_obj,autoHeight),HX_HCSTRING("autoHeight","\xb6","\x18","\x17","\x6e")},
	{hx::fsBool,(int)offsetof(Box_obj,unifyChildren),HX_HCSTRING("unifyChildren","\xa2","\xad","\x56","\x98")},
	{hx::fsBool,(int)offsetof(Box_obj,intPositions),HX_HCSTRING("intPositions","\xbb","\x30","\xf9","\xea")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("vertical","\x76","\xbc","\x15","\x6a"),
	HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85"),
	HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a"),
	HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a"),
	HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f"),
	HX_HCSTRING("childPadding","\x95","\x83","\x49","\x99"),
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("autoWidth","\x17","\xf4","\x6d","\xa8"),
	HX_HCSTRING("autoHeight","\xb6","\x18","\x17","\x6e"),
	HX_HCSTRING("unifyChildren","\xa2","\xad","\x56","\x98"),
	HX_HCSTRING("intPositions","\xbb","\x30","\xf9","\xea"),
	HX_HCSTRING("_objWidth","\xee","\x4d","\x11","\xbf"),
	HX_HCSTRING("_objHeight","\xff","\x5a","\x62","\x26"),
	HX_HCSTRING("_setObjX","\xc4","\x02","\xe6","\x48"),
	HX_HCSTRING("_setObjY","\xc5","\x02","\xe6","\x48"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("_calcWidth","\xf2","\x4c","\x0e","\x19"),
	HX_HCSTRING("_calcHeight","\x7b","\x7f","\xc4","\x89"),
	HX_HCSTRING("_resizeWithPercent","\x8c","\xc8","\x3a","\x70"),
	HX_HCSTRING("alignElements","\x1c","\x16","\x13","\x65"),
	HX_HCSTRING("_unifyChildren","\xe3","\x9d","\xa8","\xd6"),
	HX_HCSTRING("_vAlignTop","\x27","\x2f","\x7a","\x3a"),
	HX_HCSTRING("_vAlignMiddle","\x03","\x32","\x0b","\xf0"),
	HX_HCSTRING("_vAlignBottom","\x99","\x45","\x25","\x09"),
	HX_HCSTRING("_hAlignLeft","\x03","\x31","\x0b","\x67"),
	HX_HCSTRING("_hAlignRight","\x60","\xbf","\xcc","\x39"),
	HX_HCSTRING("_hAlignCenter","\xd1","\x85","\x0f","\x11"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("_onChildResize","\x12","\xa2","\x3e","\xb7"),
	HX_HCSTRING("get_contentHeight","\x57","\x45","\xb7","\xde"),
	HX_HCSTRING("get_contentWidth","\x96","\xf6","\x8f","\xb5"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("set_w","\x5a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_widthPt","\xcd","\x70","\x68","\xc1"),
	HX_HCSTRING("set_heightPt","\x48","\x2d","\x5e","\xfd"),
	HX_HCSTRING("set_h","\x4b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_padding","\xf4","\xc0","\xe4","\x60"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Box_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Box_obj::__mClass,"__mClass");
};

#endif

hx::Class Box_obj::__mClass;

void Box_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.widgets.Box","\x4e","\x4c","\x6e","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Box_obj >;
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
