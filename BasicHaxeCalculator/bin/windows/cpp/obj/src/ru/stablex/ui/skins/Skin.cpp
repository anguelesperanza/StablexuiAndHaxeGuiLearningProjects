#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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

Void Skin_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.ui.skins.Skin","new",0x6e02fd45,"ru.stablex.ui.skins.Skin.new","ru/stablex/ui/skins/Skin.hx",11,0x6ccbe44b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->clear = true;
}
;
	return null();
}

//Skin_obj::~Skin_obj() { }

Dynamic Skin_obj::__CreateEmpty() { return  new Skin_obj; }
hx::ObjectPtr< Skin_obj > Skin_obj::__new()
{  hx::ObjectPtr< Skin_obj > _result_ = new Skin_obj();
	_result_->__construct();
	return _result_;}

Dynamic Skin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Skin_obj > _result_ = new Skin_obj();
	_result_->__construct();
	return _result_;}

Void Skin_obj::apply( ::ru::stablex::ui::widgets::Widget w){
{
		HX_STACK_FRAME("ru.stablex.ui.skins.Skin","apply",0xbdbb7593,"ru.stablex.ui.skins.Skin.apply","ru/stablex/ui/skins/Skin.hx",30,0x6ccbe44b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(31)
		bool tmp = this->clear;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		if ((tmp)){
			HX_STACK_LINE(32)
			::openfl::display::Graphics tmp1 = w->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(32)
			tmp1->clear();
		}
		HX_STACK_LINE(35)
		bool tmp1 = (w->_appliedSkin != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		if ((tmp1)){
			HX_STACK_LINE(36)
			bool tmp2 = (w->_appliedSkin == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			if ((tmp2)){
				HX_STACK_LINE(37)
				::ru::stablex::ui::widgets::Widget tmp3 = w;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(37)
				this->reDraw(tmp3);
			}
			else{
				HX_STACK_LINE(39)
				::ru::stablex::ui::widgets::Widget tmp3 = w;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(39)
				w->_appliedSkin->unDraw(tmp3);
				HX_STACK_LINE(40)
				::ru::stablex::ui::widgets::Widget tmp4 = w;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(40)
				this->draw(tmp4);
			}
		}
		else{
			HX_STACK_LINE(43)
			::ru::stablex::ui::widgets::Widget tmp2 = w;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			this->draw(tmp2);
		}
		HX_STACK_LINE(45)
		w->_appliedSkin = hx::ObjectPtr<OBJ_>(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skin_obj,apply,(void))

Void Skin_obj::draw( ::ru::stablex::ui::widgets::Widget w){
{
		HX_STACK_FRAME("ru.stablex.ui.skins.Skin","draw",0xce08477f,"ru.stablex.ui.skins.Skin.draw","ru/stablex/ui/skins/Skin.hx",53,0x6ccbe44b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skin_obj,draw,(void))

Void Skin_obj::unDraw( ::ru::stablex::ui::widgets::Widget w){
{
		HX_STACK_FRAME("ru.stablex.ui.skins.Skin","unDraw",0x01908f38,"ru.stablex.ui.skins.Skin.unDraw","ru/stablex/ui/skins/Skin.hx",60,0x6ccbe44b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skin_obj,unDraw,(void))

Void Skin_obj::reDraw( ::ru::stablex::ui::widgets::Widget w){
{
		HX_STACK_FRAME("ru.stablex.ui.skins.Skin","reDraw",0x9fe34192,"ru.stablex.ui.skins.Skin.reDraw","ru/stablex/ui/skins/Skin.hx",67,0x6ccbe44b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(68)
		::ru::stablex::ui::widgets::Widget tmp = w;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		this->unDraw(tmp);
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Widget tmp1 = w;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		this->draw(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Skin_obj,reDraw,(void))

Dynamic Skin_obj::as( ::hx::Class cls){
	HX_STACK_FRAME("ru.stablex.ui.skins.Skin","as",0xe4f10bad,"ru.stablex.ui.skins.Skin.as","ru/stablex/ui/skins/Skin.hx",77,0x6ccbe44b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(78)
	::hx::Class tmp = cls;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	bool tmp1 = ::Std_obj::is(hx::ObjectPtr<OBJ_>(this),tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	if ((tmp1)){
		HX_STACK_LINE(78)
		tmp2 = ((Dynamic)(hx::ObjectPtr<OBJ_>(this)));
	}
	else{
		HX_STACK_LINE(78)
		tmp2 = null();
	}
	HX_STACK_LINE(78)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Skin_obj,as,return )


Skin_obj::Skin_obj()
{
}

Dynamic Skin_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { return as_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear; }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unDraw") ) { return unDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"reDraw") ) { return reDraw_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Skin_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { clear=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Skin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Skin_obj,clear),HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("unDraw","\xfd","\x5e","\x1e","\x4b"),
	HX_HCSTRING("reDraw","\x57","\x11","\x71","\xe9"),
	HX_HCSTRING("as","\xf2","\x54","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Skin_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Skin_obj::__mClass,"__mClass");
};

#endif

hx::Class Skin_obj::__mClass;

void Skin_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.skins.Skin","\xd3","\xf6","\x87","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Skin_obj >;
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
