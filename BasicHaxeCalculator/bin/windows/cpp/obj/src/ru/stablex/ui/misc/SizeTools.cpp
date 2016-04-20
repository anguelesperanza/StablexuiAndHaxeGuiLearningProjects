#include <hxcpp.h>

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
#ifndef INCLUDED_ru_stablex_ui_misc_SizeTools
#include <ru/stablex/ui/misc/SizeTools.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
namespace ru{
namespace stablex{
namespace ui{
namespace misc{

Void SizeTools_obj::__construct()
{
	return null();
}

//SizeTools_obj::~SizeTools_obj() { }

Dynamic SizeTools_obj::__CreateEmpty() { return  new SizeTools_obj; }
hx::ObjectPtr< SizeTools_obj > SizeTools_obj::__new()
{  hx::ObjectPtr< SizeTools_obj > _result_ = new SizeTools_obj();
	_result_->__construct();
	return _result_;}

Dynamic SizeTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SizeTools_obj > _result_ = new SizeTools_obj();
	_result_->__construct();
	return _result_;}

Float SizeTools_obj::width( ::openfl::display::DisplayObject obj){
	HX_STACK_FRAME("ru.stablex.ui.misc.SizeTools","width",0xb8cc602e,"ru.stablex.ui.misc.SizeTools.width","ru/stablex/ui/misc/SizeTools.hx",19,0x410f6a4a)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(21)
	::openfl::display::DisplayObject tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	if ((tmp1)){
		HX_STACK_LINE(22)
		::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(obj);
		HX_STACK_LINE(22)
		Float tmp3 = tmp2->get_w();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		return tmp3;
	}
	else{
		HX_STACK_LINE(23)
		::openfl::display::DisplayObject tmp2 = obj;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::text::TextField >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		if ((tmp3)){
			HX_STACK_LINE(24)
			::String tmp4 = obj->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(24)
			bool tmp5 = (tmp4 == HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(24)
			if ((tmp5)){
				HX_STACK_LINE(25)
				::openfl::text::TextField tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(25)
				tmp6 = hx::TCast< ::openfl::text::TextField >::cast(obj);
				HX_STACK_LINE(25)
				Float tmp7 = tmp6->get_textWidth();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(25)
				Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("SizeTools.hx","\x84","\x85","\x6c","\xb2"),25,HX_HCSTRING("ru.stablex.ui.misc.SizeTools","\x96","\x7c","\x66","\xf6"),HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(25)
				::haxe::Log_obj::trace(tmp7,tmp8);
			}
			HX_STACK_LINE(27)
			::openfl::text::TextField tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(27)
			tmp6 = hx::TCast< ::openfl::text::TextField >::cast(obj);
			HX_STACK_LINE(27)
			Float tmp7 = tmp6->get_textWidth();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(27)
			Float tmp8 = (tmp7 + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(27)
			return tmp8;
		}
		else{
			HX_STACK_LINE(29)
			Float tmp4 = obj->get_width();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(29)
			return tmp4;
		}
	}
	HX_STACK_LINE(21)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SizeTools_obj,width,return )

Float SizeTools_obj::height( ::openfl::display::DisplayObject obj){
	HX_STACK_FRAME("ru.stablex.ui.misc.SizeTools","height",0xb05740bf,"ru.stablex.ui.misc.SizeTools.height","ru/stablex/ui/misc/SizeTools.hx",38,0x410f6a4a)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(39)
	::openfl::display::DisplayObject tmp = obj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	if ((tmp1)){
		HX_STACK_LINE(40)
		::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(obj);
		HX_STACK_LINE(40)
		Float tmp3 = tmp2->get_h();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		return tmp3;
	}
	else{
		HX_STACK_LINE(41)
		::openfl::display::DisplayObject tmp2 = obj;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::text::TextField >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		if ((tmp3)){
			HX_STACK_LINE(42)
			::openfl::text::TextField tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			tmp4 = hx::TCast< ::openfl::text::TextField >::cast(obj);
			HX_STACK_LINE(42)
			Float tmp5 = tmp4->get_textHeight();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			Float tmp6 = (tmp5 + (int)4);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			return tmp6;
		}
		else{
			HX_STACK_LINE(44)
			Float tmp4 = obj->get_height();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(44)
			return tmp4;
		}
	}
	HX_STACK_LINE(39)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SizeTools_obj,height,return )

Void SizeTools_obj::setX( ::openfl::display::DisplayObject obj,Float x){
{
		HX_STACK_FRAME("ru.stablex.ui.misc.SizeTools","setX",0x1adf654e,"ru.stablex.ui.misc.SizeTools.setX","ru/stablex/ui/misc/SizeTools.hx",53,0x410f6a4a)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(57)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		obj->set_x(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SizeTools_obj,setX,(void))

Void SizeTools_obj::setY( ::openfl::display::DisplayObject obj,Float y){
{
		HX_STACK_FRAME("ru.stablex.ui.misc.SizeTools","setY",0x1adf654f,"ru.stablex.ui.misc.SizeTools.setY","ru/stablex/ui/misc/SizeTools.hx",66,0x410f6a4a)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(70)
		Float tmp = y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		obj->set_y(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SizeTools_obj,setY,(void))


SizeTools_obj::SizeTools_obj()
{
}

bool SizeTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"setX") ) { outValue = setX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setY") ) { outValue = setY_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { outValue = width_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { outValue = height_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SizeTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SizeTools_obj::__mClass,"__mClass");
};

#endif

hx::Class SizeTools_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("setX","\x76","\x92","\x50","\x4c"),
	HX_HCSTRING("setY","\x77","\x92","\x50","\x4c"),
	::String(null()) };

void SizeTools_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.misc.SizeTools","\x96","\x7c","\x66","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SizeTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SizeTools_obj >;
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
} // end namespace misc
