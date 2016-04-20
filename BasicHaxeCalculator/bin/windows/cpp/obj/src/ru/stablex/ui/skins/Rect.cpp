#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_ru_stablex_ui_skins_Rect
#include <ru/stablex/ui/skins/Rect.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_skins_Skin
#include <ru/stablex/ui/skins/Skin.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
namespace ru{
namespace stablex{
namespace ui{
namespace skins{

Void Rect_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.ui.skins.Rect","new",0x4993136c,"ru.stablex.ui.skins.Rect.new","ru/stablex/ui/skins/Rect.hx",11,0x6ca21004)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	this->paddingLeft = ((Float)0);
	HX_STACK_LINE(27)
	this->paddingBottom = ((Float)0);
	HX_STACK_LINE(25)
	this->paddingRight = ((Float)0);
	HX_STACK_LINE(23)
	this->paddingTop = ((Float)0);
	HX_STACK_LINE(18)
	this->borderAlpha = ((Float)1);
	HX_STACK_LINE(16)
	this->borderColor = (int)0;
	HX_STACK_LINE(14)
	this->border = ((Float)0);
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

//Rect_obj::~Rect_obj() { }

Dynamic Rect_obj::__CreateEmpty() { return  new Rect_obj; }
hx::ObjectPtr< Rect_obj > Rect_obj::__new()
{  hx::ObjectPtr< Rect_obj > _result_ = new Rect_obj();
	_result_->__construct();
	return _result_;}

Dynamic Rect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rect_obj > _result_ = new Rect_obj();
	_result_->__construct();
	return _result_;}

Float Rect_obj::set_padding( Float p){
	HX_STACK_FRAME("ru.stablex.ui.skins.Rect","set_padding",0x92eff000,"ru.stablex.ui.skins.Rect.set_padding","ru/stablex/ui/skins/Rect.hx",38,0x6ca21004)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(39)
	Float tmp = this->paddingLeft = p;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	Float tmp1 = this->paddingRight = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	Float tmp2 = this->paddingBottom = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	this->paddingTop = tmp2;
	HX_STACK_LINE(40)
	Float tmp3 = p;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rect_obj,set_padding,return )

Void Rect_obj::draw( ::ru::stablex::ui::widgets::Widget w){
{
		HX_STACK_FRAME("ru.stablex.ui.skins.Rect","draw",0x108b9378,"ru.stablex.ui.skins.Rect.draw","ru/stablex/ui/skins/Rect.hx",48,0x6ca21004)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(49)
		Float tmp = w->get_w();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		Float tmp1 = this->paddingLeft;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		Float tmp3 = this->paddingRight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		Float width = tmp4;		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(50)
		Float tmp5 = w->get_h();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		Float tmp6 = this->paddingTop;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		Float tmp8 = this->paddingBottom;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		Float height = tmp9;		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(53)
		bool tmp10 = (width <= (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(53)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(53)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(53)
		if ((tmp11)){
			HX_STACK_LINE(53)
			tmp12 = (height <= (int)0);
		}
		else{
			HX_STACK_LINE(53)
			tmp12 = true;
		}
		HX_STACK_LINE(53)
		if ((tmp12)){
			HX_STACK_LINE(53)
			return null();
		}
		HX_STACK_LINE(55)
		Float tmp13 = this->border;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(55)
		bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(55)
		if ((tmp14)){
			HX_STACK_LINE(56)
			::openfl::display::Graphics tmp15 = w->get_graphics();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(56)
			Float tmp16 = this->border;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(56)
			int tmp17 = this->borderColor;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(56)
			Float tmp18 = this->borderAlpha;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(56)
			tmp15->lineStyle(tmp16,tmp17,tmp18,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(59)
		bool tmp15 = (this->corners == null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(59)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(59)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(59)
		if ((tmp16)){
			HX_STACK_LINE(59)
			int tmp18 = this->corners->length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(59)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(59)
			tmp17 = (tmp19 == (int)0);
		}
		else{
			HX_STACK_LINE(59)
			tmp17 = true;
		}
		HX_STACK_LINE(59)
		if ((tmp17)){
			HX_STACK_LINE(60)
			::openfl::display::Graphics tmp18 = w->get_graphics();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(61)
			Float tmp19 = this->paddingLeft;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(62)
			Float tmp20 = this->paddingTop;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(63)
			Float tmp21 = width;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(64)
			Float tmp22 = height;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(60)
			tmp18->drawRect(tmp19,tmp20,tmp21,tmp22);
		}
		else{
			HX_STACK_LINE(66)
			int tmp18 = this->corners->length;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(66)
			bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(66)
			if ((tmp19)){
				HX_STACK_LINE(75)
				::openfl::display::Graphics tmp20 = w->get_graphics();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(76)
				Float tmp21 = this->paddingLeft;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(77)
				Float tmp22 = this->paddingTop;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(78)
				Float tmp23 = width;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(79)
				Float tmp24 = height;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(80)
				Float tmp25 = this->corners->__get((int)0);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(81)
				int tmp26 = this->corners->length;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(81)
				bool tmp27 = (tmp26 > (int)1);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(81)
				Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(81)
				if ((tmp27)){
					HX_STACK_LINE(81)
					tmp28 = this->corners->__get((int)1);
				}
				else{
					HX_STACK_LINE(81)
					tmp28 = this->corners->__get((int)0);
				}
				HX_STACK_LINE(75)
				tmp20->drawRoundRect(tmp21,tmp22,tmp23,tmp24,tmp25,tmp28);
			}
		}
	}
return null();
}



Rect_obj::Rect_obj()
{
}

void Rect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Rect);
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderAlpha,"borderAlpha");
	HX_MARK_MEMBER_NAME(corners,"corners");
	HX_MARK_MEMBER_NAME(paddingTop,"paddingTop");
	HX_MARK_MEMBER_NAME(paddingRight,"paddingRight");
	HX_MARK_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_MARK_MEMBER_NAME(paddingLeft,"paddingLeft");
	HX_MARK_END_CLASS();
}

void Rect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderAlpha,"borderAlpha");
	HX_VISIT_MEMBER_NAME(corners,"corners");
	HX_VISIT_MEMBER_NAME(paddingTop,"paddingTop");
	HX_VISIT_MEMBER_NAME(paddingRight,"paddingRight");
	HX_VISIT_MEMBER_NAME(paddingBottom,"paddingBottom");
	HX_VISIT_MEMBER_NAME(paddingLeft,"paddingLeft");
}

Dynamic Rect_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"corners") ) { return corners; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paddingTop") ) { return paddingTop; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return borderColor; }
		if (HX_FIELD_EQ(inName,"borderAlpha") ) { return borderAlpha; }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { return paddingLeft; }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { return paddingRight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { return paddingBottom; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rect_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"corners") ) { corners=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { if (inCallProp == hx::paccAlways) return set_padding(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paddingTop") ) { paddingTop=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderAlpha") ) { borderAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { paddingLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { paddingRight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { paddingBottom=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("borderAlpha","\xd2","\x72","\x0f","\xae"));
	outFields->push(HX_HCSTRING("corners","\xfe","\x9a","\x1a","\x63"));
	outFields->push(HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a"));
	outFields->push(HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f"));
	outFields->push(HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85"));
	outFields->push(HX_HCSTRING("padding","\xd1","\x59","\x7d","\xd0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rect_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{hx::fsInt,(int)offsetof(Rect_obj,borderColor),HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6")},
	{hx::fsFloat,(int)offsetof(Rect_obj,borderAlpha),HX_HCSTRING("borderAlpha","\xd2","\x72","\x0f","\xae")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Rect_obj,corners),HX_HCSTRING("corners","\xfe","\x9a","\x1a","\x63")},
	{hx::fsFloat,(int)offsetof(Rect_obj,paddingTop),HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a")},
	{hx::fsFloat,(int)offsetof(Rect_obj,paddingRight),HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a")},
	{hx::fsFloat,(int)offsetof(Rect_obj,paddingBottom),HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f")},
	{hx::fsFloat,(int)offsetof(Rect_obj,paddingLeft),HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"),
	HX_HCSTRING("borderAlpha","\xd2","\x72","\x0f","\xae"),
	HX_HCSTRING("corners","\xfe","\x9a","\x1a","\x63"),
	HX_HCSTRING("paddingTop","\x44","\xfd","\x05","\x3a"),
	HX_HCSTRING("paddingRight","\x4b","\xec","\xa7","\x1a"),
	HX_HCSTRING("paddingBottom","\x9c","\x67","\x99","\x4f"),
	HX_HCSTRING("paddingLeft","\x78","\x4a","\xe6","\x85"),
	HX_HCSTRING("set_padding","\xf4","\xc0","\xe4","\x60"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rect_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rect_obj::__mClass,"__mClass");
};

#endif

hx::Class Rect_obj::__mClass;

void Rect_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.skins.Rect","\x7a","\x2d","\xda","\x6e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rect_obj >;
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
} // end namespace skins
