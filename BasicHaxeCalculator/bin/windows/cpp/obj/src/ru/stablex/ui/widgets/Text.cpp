#include <hxcpp.h>

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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Box
#include <ru/stablex/ui/widgets/Box.h>
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

Void Text_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.ui.widgets.Text","new",0x9900a6fc,"ru.stablex.ui.widgets.Text.new","ru/stablex/ui/widgets/Text.hx",14,0x2782b8b4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->highlighted = false;
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(35)
	::openfl::text::TextField tmp = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	::openfl::display::DisplayObject tmp1 = this->addChild(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	::openfl::text::TextField tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	tmp2 = hx::TCast< ::openfl::text::TextField >::cast(tmp1);
	HX_STACK_LINE(35)
	this->label = tmp2;
	HX_STACK_LINE(36)
	::openfl::text::TextField tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	tmp3->set_autoSize(((Dynamic)((int)1)));
	HX_STACK_LINE(37)
	::openfl::text::TextField tmp4 = this->label;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	tmp4->set_multiline(true);
	HX_STACK_LINE(40)
	::openfl::text::TextField tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	::openfl::text::TextFormat tmp6 = tmp5->get_defaultTextFormat();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	this->format = tmp6;
	HX_STACK_LINE(42)
	this->align = HX_HCSTRING("top,left","\x7e","\x2b","\xf4","\x57");
}
;
	return null();
}

//Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new()
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct();
	return _result_;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > _result_ = new Text_obj();
	_result_->__construct();
	return _result_;}

::openfl::text::TextFormat Text_obj::get_highlightFormat( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Text","get_highlightFormat",0x613b963e,"ru.stablex.ui.widgets.Text.get_highlightFormat","ru/stablex/ui/widgets/Text.hx",51,0x2782b8b4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	::openfl::text::TextFormat tmp = this->_hightlightFormat;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	if ((tmp1)){
		HX_STACK_LINE(55)
		::openfl::text::TextFormat tmp2 = this->format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		::String tmp3 = tmp2->font;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		::openfl::text::TextFormat tmp4 = this->format;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(56)
		Dynamic tmp5 = tmp4->size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		::openfl::text::TextFormat tmp6 = this->format;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		Dynamic tmp7 = tmp6->color;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(58)
		::openfl::text::TextFormat tmp8 = this->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(58)
		Dynamic tmp9 = tmp8->bold;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(59)
		::openfl::text::TextFormat tmp10 = this->format;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(59)
		Dynamic tmp11 = tmp10->italic;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(60)
		::openfl::text::TextFormat tmp12 = this->format;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(60)
		Dynamic tmp13 = tmp12->underline;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(61)
		::openfl::text::TextFormat tmp14 = this->format;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(61)
		::String tmp15 = tmp14->url;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(62)
		::openfl::text::TextFormat tmp16 = this->format;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(62)
		::String tmp17 = tmp16->target;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(63)
		::openfl::text::TextFormat tmp18 = this->format;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(63)
		Dynamic tmp19 = tmp18->align;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(70)
		::openfl::text::TextFormat tmp20 = this->format;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(70)
		Dynamic tmp21 = tmp20->leftMargin;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(71)
		::openfl::text::TextFormat tmp22 = this->format;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(71)
		Dynamic tmp23 = tmp22->rightMargin;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(72)
		::openfl::text::TextFormat tmp24 = this->format;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(72)
		Dynamic tmp25 = tmp24->indent;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(73)
		::openfl::text::TextFormat tmp26 = this->format;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(73)
		Dynamic tmp27 = tmp26->leading;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(54)
		::openfl::text::TextFormat tmp28 = ::openfl::text::TextFormat_obj::__new(tmp3,tmp5,tmp7,tmp9,tmp11,tmp13,tmp15,tmp17,tmp19,tmp21,tmp23,tmp25,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(54)
		this->_hightlightFormat = tmp28;
	}
	HX_STACK_LINE(77)
	::openfl::text::TextFormat tmp2 = this->_hightlightFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(77)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_highlightFormat,return )

::openfl::text::TextFormat Text_obj::set_highlightFormat( ::openfl::text::TextFormat hl){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Text","set_highlightFormat",0x9dd8894a,"ru.stablex.ui.widgets.Text.set_highlightFormat","ru/stablex/ui/widgets/Text.hx",85,0x2782b8b4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hl,"hl")
	HX_STACK_LINE(86)
	::openfl::text::TextFormat tmp = this->_hightlightFormat = hl;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_highlightFormat,return )

Void Text_obj::refresh( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Text","refresh",0xde732e77,"ru.stablex.ui.widgets.Text.refresh","ru/stablex/ui/widgets/Text.hx",94,0x2782b8b4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		bool tmp = this->highlighted;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		if ((tmp)){
			HX_STACK_LINE(96)
			::openfl::text::TextField tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(96)
			::openfl::text::TextFormat tmp2 = this->get_highlightFormat();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			tmp1->set_defaultTextFormat(tmp2);
			HX_STACK_LINE(97)
			::openfl::text::TextField tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(97)
			::String tmp4 = tmp3->get_text();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(97)
			int tmp5 = tmp4.length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(97)
			bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(97)
			if ((tmp6)){
				HX_STACK_LINE(98)
				::openfl::text::TextField tmp7 = this->label;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(98)
				::openfl::text::TextFormat tmp8 = this->get_highlightFormat();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(98)
				::String tmp9 = this->get_text();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(98)
				int tmp10 = tmp9.length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(98)
				tmp7->setTextFormat(tmp8,(int)0,tmp10);
			}
		}
		else{
			HX_STACK_LINE(101)
			::openfl::text::TextField tmp1 = this->label;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(101)
			::openfl::text::TextFormat tmp2 = this->format;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(101)
			tmp1->set_defaultTextFormat(tmp2);
			HX_STACK_LINE(102)
			::openfl::text::TextField tmp3 = this->label;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			::String tmp4 = tmp3->get_text();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			int tmp5 = tmp4.length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			if ((tmp6)){
				HX_STACK_LINE(103)
				::openfl::text::TextField tmp7 = this->label;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(103)
				::openfl::text::TextFormat tmp8 = this->format;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(103)
				::String tmp9 = this->get_text();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(103)
				int tmp10 = tmp9.length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(103)
				tmp7->setTextFormat(tmp8,(int)0,tmp10);
			}
		}
		HX_STACK_LINE(107)
		bool tmp1 = this->autoWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(107)
		if ((tmp3)){
			HX_STACK_LINE(107)
			::openfl::text::TextField tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(107)
			::openfl::text::TextField tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(107)
			tmp4 = tmp6->get_wordWrap();
		}
		else{
			HX_STACK_LINE(107)
			tmp4 = false;
		}
		HX_STACK_LINE(107)
		if ((tmp4)){
			HX_STACK_LINE(108)
			::openfl::text::TextField tmp5 = this->label;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(108)
			Float tmp6 = this->_width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(108)
			tmp5->set_width(tmp6);
		}
		HX_STACK_LINE(111)
		this->super::refresh();
		HX_STACK_LINE(113)
		Dynamic();
	}
return null();
}


Void Text_obj::highlight( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Text","highlight",0x970609d0,"ru.stablex.ui.widgets.Text.highlight","ru/stablex/ui/widgets/Text.hx",120,0x2782b8b4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		this->highlighted = true;
		HX_STACK_LINE(122)
		this->refresh();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,highlight,(void))

Void Text_obj::unhighlight( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Text","unhighlight",0xf035af57,"ru.stablex.ui.widgets.Text.unhighlight","ru/stablex/ui/widgets/Text.hx",129,0x2782b8b4)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		this->highlighted = false;
		HX_STACK_LINE(131)
		this->refresh();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,unhighlight,(void))

::String Text_obj::get_text( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Text","get_text",0x036c3c1a,"ru.stablex.ui.widgets.Text.get_text","ru/stablex/ui/widgets/Text.hx",139,0x2782b8b4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	::openfl::text::TextField tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_text,return )

::String Text_obj::set_text( ::String txt){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Text","set_text",0xb1c9958e,"ru.stablex.ui.widgets.Text.set_text","ru/stablex/ui/widgets/Text.hx",148,0x2782b8b4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(txt,"txt")
	HX_STACK_LINE(149)
	::openfl::text::TextField tmp = this->label;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	::String tmp1 = txt;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	tmp->set_text(tmp1);
	HX_STACK_LINE(154)
	bool tmp2 = this->autoWidth;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(154)
	if ((tmp3)){
		HX_STACK_LINE(154)
		tmp4 = this->autoHeight;
	}
	else{
		HX_STACK_LINE(154)
		tmp4 = true;
	}
	HX_STACK_LINE(154)
	if ((tmp4)){
		HX_STACK_LINE(155)
		this->refresh();
	}
	else{
		HX_STACK_LINE(158)
		this->alignElements();
	}
	HX_STACK_LINE(161)
	::String tmp5 = txt;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(161)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_text,return )

Void Text_obj::html5TextFieldSizeWorkaround( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Text","html5TextFieldSizeWorkaround",0x5684dd46,"ru.stablex.ui.widgets.Text.html5TextFieldSizeWorkaround","ru/stablex/ui/widgets/Text.hx",169,0x2782b8b4)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,html5TextFieldSizeWorkaround,(void))


Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(_hightlightFormat,"_hightlightFormat");
	HX_MARK_MEMBER_NAME(highlighted,"highlighted");
	::ru::stablex::ui::widgets::Box_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(_hightlightFormat,"_hightlightFormat");
	HX_VISIT_MEMBER_NAME(highlighted,"highlighted");
	::ru::stablex::ui::widgets::Box_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return get_text(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"highlight") ) { return highlight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"highlighted") ) { return highlighted; }
		if (HX_FIELD_EQ(inName,"unhighlight") ) { return unhighlight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"highlightFormat") ) { if (inCallProp == hx::paccAlways) return get_highlightFormat(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_hightlightFormat") ) { return _hightlightFormat; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_highlightFormat") ) { return get_highlightFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_highlightFormat") ) { return set_highlightFormat_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"html5TextFieldSizeWorkaround") ) { return html5TextFieldSizeWorkaround_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return set_text(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"highlighted") ) { highlighted=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"highlightFormat") ) { if (inCallProp == hx::paccAlways) return set_highlightFormat(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_hightlightFormat") ) { _hightlightFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("highlightFormat","\x8b","\xf8","\x63","\x87"));
	outFields->push(HX_HCSTRING("_hightlightFormat","\x7a","\x35","\xca","\x75"));
	outFields->push(HX_HCSTRING("highlighted","\x93","\xa3","\x69","\x6e"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Text_obj,label),HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(Text_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(Text_obj,_hightlightFormat),HX_HCSTRING("_hightlightFormat","\x7a","\x35","\xca","\x75")},
	{hx::fsBool,(int)offsetof(Text_obj,highlighted),HX_HCSTRING("highlighted","\x93","\xa3","\x69","\x6e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("label","\xf4","\x0d","\xaf","\x6f"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("_hightlightFormat","\x7a","\x35","\xca","\x75"),
	HX_HCSTRING("highlighted","\x93","\xa3","\x69","\x6e"),
	HX_HCSTRING("get_highlightFormat","\xa2","\xc7","\x6e","\x12"),
	HX_HCSTRING("set_highlightFormat","\xae","\xba","\x0b","\x4f"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("highlight","\x34","\x56","\x00","\xed"),
	HX_HCSTRING("unhighlight","\xbb","\xdc","\xa6","\x72"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("html5TextFieldSizeWorkaround","\x62","\x5f","\xfa","\xc4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#endif

hx::Class Text_obj::__mClass;

void Text_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.widgets.Text","\x0a","\xb9","\xf2","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Text_obj >;
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
