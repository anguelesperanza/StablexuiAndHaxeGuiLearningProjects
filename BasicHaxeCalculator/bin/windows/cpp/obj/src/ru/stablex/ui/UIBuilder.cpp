#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
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
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_UIBuilder
#include <ru/stablex/ui/UIBuilder.h>
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

Void UIBuilder_obj::__construct()
{
	return null();
}

//UIBuilder_obj::~UIBuilder_obj() { }

Dynamic UIBuilder_obj::__CreateEmpty() { return  new UIBuilder_obj; }
hx::ObjectPtr< UIBuilder_obj > UIBuilder_obj::__new()
{  hx::ObjectPtr< UIBuilder_obj > _result_ = new UIBuilder_obj();
	_result_->__construct();
	return _result_;}

Dynamic UIBuilder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIBuilder_obj > _result_ = new UIBuilder_obj();
	_result_->__construct();
	return _result_;}

::haxe::ds::StringMap UIBuilder_obj::defaults;

::openfl::events::EventDispatcher UIBuilder_obj::dispatcher;

::haxe::ds::StringMap UIBuilder_obj::_objects;

::haxe::ds::StringMap UIBuilder_obj::skins;

int UIBuilder_obj::_nextId;

::List UIBuilder_obj::_skinQueue;

::String UIBuilder_obj::pos( Dynamic pos){
	HX_STACK_FRAME("ru.stablex.ui.UIBuilder","pos",0x9b2eab6f,"ru.stablex.ui.UIBuilder.pos","ru/stablex/ui/UIBuilder.hx",104,0xeeae4854)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(105)
	::String tmp = (pos->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic ) + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	int tmp1 = pos->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,pos,return )

::String UIBuilder_obj::createId( ){
	HX_STACK_FRAME("ru.stablex.ui.UIBuilder","createId",0xa96bf63c,"ru.stablex.ui.UIBuilder.createId","ru/stablex/ui/UIBuilder.hx",911,0xeeae4854)
	HX_STACK_LINE(912)
	int tmp = (::ru::stablex::ui::UIBuilder_obj::_nextId)++;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(912)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(912)
	::String tmp2 = (HX_HCSTRING("__widget__","\x04","\xef","\x09","\xd5") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(912)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UIBuilder_obj,createId,return )

Dynamic UIBuilder_obj::create( ::hx::Class cls,Dynamic properties){
	HX_STACK_FRAME("ru.stablex.ui.UIBuilder","create",0xe505f401,"ru.stablex.ui.UIBuilder.create","ru/stablex/ui/UIBuilder.hx",927,0xeeae4854)
	HX_STACK_ARG(cls,"cls")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(929)
	::hx::Class tmp = cls;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(929)
	Dynamic tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(929)
	::ru::stablex::ui::widgets::Widget obj = tmp1;		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(932)
	Dynamic tmp2 = properties;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(932)
	Dynamic tmp3 = ::Reflect_obj::field(tmp2,HX_HCSTRING("defaults","\x92","\xd0","\x99","\xaf"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(932)
	obj->defaults = tmp3;
	HX_STACK_LINE(933)
	bool tmp4 = (obj->defaults == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(933)
	if ((tmp4)){
		HX_STACK_LINE(933)
		obj->defaults = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69");
	}
	HX_STACK_LINE(934)
	{
		HX_STACK_LINE(934)
		::ru::stablex::ui::widgets::Widget tmp5 = obj;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(934)
		bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(934)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(934)
		if ((tmp7)){
			HX_STACK_LINE(934)
			Dynamic();
		}
		else{
			HX_STACK_LINE(934)
			::ru::stablex::ui::widgets::Widget tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(934)
			tmp8 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(obj);
			HX_STACK_LINE(934)
			::ru::stablex::ui::widgets::Widget obj1 = tmp8;		HX_STACK_VAR(obj1,"obj1");
			HX_STACK_LINE(934)
			::ru::stablex::ui::widgets::Widget tmp9 = obj1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(934)
			::hx::Class tmp10 = ::Type_obj::getClass(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(934)
			::String tmp11 = ::Type_obj::getClassName(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(934)
			::String clsName = tmp11;		HX_STACK_VAR(clsName,"clsName");
			HX_STACK_LINE(934)
			::haxe::ds::StringMap tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(934)
			{
				HX_STACK_LINE(934)
				int tmp13 = (clsName.length - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(934)
				int tmp14 = clsName.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(934)
				int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(934)
				::String tmp16 = clsName.substr(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(934)
				::String key = tmp16;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(934)
				::haxe::ds::StringMap tmp17 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(934)
				::String tmp18 = key;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(934)
				tmp12 = tmp17->get(tmp18);
			}
			HX_STACK_LINE(934)
			::haxe::ds::StringMap widgetDefaults = tmp12;		HX_STACK_VAR(widgetDefaults,"widgetDefaults");
			HX_STACK_LINE(934)
			bool tmp13 = (widgetDefaults != null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(934)
			if ((tmp13)){
				HX_STACK_LINE(934)
				Array< ::String > defs = obj1->defaults.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
				HX_STACK_LINE(934)
				{
					HX_STACK_LINE(934)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(934)
					int _g = defs->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(934)
					while((true)){
						HX_STACK_LINE(934)
						bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(934)
						bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(934)
						if ((tmp15)){
							HX_STACK_LINE(934)
							break;
						}
						HX_STACK_LINE(934)
						int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(934)
						int i = tmp16;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(934)
						::String tmp17 = defs->__get(i);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(934)
						Dynamic tmp18 = widgetDefaults->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(934)
						Dynamic defaultsFn = tmp18;		HX_STACK_VAR(defaultsFn,"defaultsFn");
						HX_STACK_LINE(934)
						bool tmp19 = (defaultsFn != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(934)
						if ((tmp19)){
							HX_STACK_LINE(934)
							::ru::stablex::ui::widgets::Widget tmp20 = obj1;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(934)
							defaultsFn(tmp20).Cast< Void >();
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(938)
	Dynamic tmp5 = properties;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(938)
	Dynamic tmp6 = ::Reflect_obj::field(tmp5,HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(938)
	cpp::ArrayBase children = tmp6;		HX_STACK_VAR(children,"children");
	HX_STACK_LINE(939)
	bool tmp7 = (children != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(939)
	if ((tmp7)){
		HX_STACK_LINE(940)
		Dynamic tmp8 = properties;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(940)
		::Reflect_obj::deleteField(tmp8,HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"));
	}
	HX_STACK_LINE(945)
	bool tmp8 = (properties != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(945)
	if ((tmp8)){
		HX_STACK_LINE(946)
		::ru::stablex::ui::widgets::Widget tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(946)
		Dynamic tmp10 = properties;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(946)
		::ru::stablex::ui::UIBuilder_obj::apply(tmp9,tmp10);
	}
	HX_STACK_LINE(949)
	obj->_onInitialize();
	HX_STACK_LINE(952)
	bool tmp9 = (children != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(952)
	if ((tmp9)){
		HX_STACK_LINE(953)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(953)
		int _g = children->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(953)
		while((true)){
			HX_STACK_LINE(953)
			bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(953)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(953)
			if ((tmp11)){
				HX_STACK_LINE(953)
				break;
			}
			HX_STACK_LINE(953)
			int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(953)
			int i = tmp12;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(954)
			Dynamic tmp13 = children->__GetItem(i);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(954)
			bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(954)
			if ((tmp14)){
				HX_STACK_LINE(955)
				Dynamic tmp15 = children->__GetItem(i);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(955)
				obj->addChild(tmp15);
			}
		}
	}
	HX_STACK_LINE(960)
	obj->_onCreate();
	HX_STACK_LINE(962)
	Dynamic tmp10 = ((Dynamic)(obj));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(962)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UIBuilder_obj,create,return )

Void UIBuilder_obj::apply( Dynamic obj,Dynamic properties){
{
		HX_STACK_FRAME("ru.stablex.ui.UIBuilder","apply",0x22684009,"ru.stablex.ui.UIBuilder.apply","ru/stablex/ui/UIBuilder.hx",987,0xeeae4854)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_ARG(properties,"properties")
		HX_STACK_LINE(987)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(987)
		Dynamic tmp = properties;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(987)
		Array< ::String > _g1 = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(987)
		while((true)){
			HX_STACK_LINE(987)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(987)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(987)
			if ((tmp2)){
				HX_STACK_LINE(987)
				break;
			}
			HX_STACK_LINE(987)
			::String tmp3 = _g1->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(987)
			::String property = tmp3;		HX_STACK_VAR(property,"property");
			HX_STACK_LINE(987)
			++(_g);
			HX_STACK_LINE(990)
			Dynamic tmp4 = properties;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(990)
			::String tmp5 = property;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(990)
			Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(990)
			::ValueType tmp7 = ::Type_obj::_typeof(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(990)
			bool tmp8 = (tmp7 == ::ValueType_obj::TObject);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(990)
			if ((tmp8)){
				HX_STACK_LINE(991)
				Dynamic tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(991)
				::String tmp10 = property;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(991)
				Dynamic tmp11 = ::Reflect_obj::getProperty(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(991)
				Dynamic tmp12 = properties;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(991)
				::String tmp13 = property;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(991)
				Dynamic tmp14 = ::Reflect_obj::field(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(991)
				::ru::stablex::ui::UIBuilder_obj::apply(tmp11,tmp14);
			}
			else{
				HX_STACK_LINE(995)
				Dynamic tmp9 = obj;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(995)
				::String tmp10 = property;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(995)
				Dynamic tmp11 = properties;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(995)
				::String tmp12 = property;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(995)
				Dynamic tmp13 = ::Reflect_obj::field(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(995)
				::Reflect_obj::setProperty(tmp9,tmp10,tmp13);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UIBuilder_obj,apply,(void))

Void UIBuilder_obj::applyDefaults( Dynamic _obj){
{
		HX_STACK_FRAME("ru.stablex.ui.UIBuilder","applyDefaults",0x18707dbb,"ru.stablex.ui.UIBuilder.applyDefaults","ru/stablex/ui/UIBuilder.hx",1006,0xeeae4854)
		HX_STACK_ARG(_obj,"_obj")
		HX_STACK_LINE(1007)
		Dynamic tmp = _obj;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1007)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1007)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1007)
		if ((tmp2)){
			HX_STACK_LINE(1007)
			return null();
		}
		HX_STACK_LINE(1008)
		::ru::stablex::ui::widgets::Widget tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1008)
		tmp3 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(_obj);
		HX_STACK_LINE(1008)
		::ru::stablex::ui::widgets::Widget obj = tmp3;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(1009)
		::ru::stablex::ui::widgets::Widget tmp4 = obj;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1009)
		::hx::Class tmp5 = ::Type_obj::getClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1009)
		::String tmp6 = ::Type_obj::getClassName(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1009)
		::String clsName = tmp6;		HX_STACK_VAR(clsName,"clsName");
		HX_STACK_LINE(1010)
		::haxe::ds::StringMap tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1010)
		{
			HX_STACK_LINE(1010)
			int tmp8 = (clsName.length - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1010)
			int tmp9 = clsName.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1010)
			int tmp10 = (tmp9 + (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1010)
			::String tmp11 = clsName.substr(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1010)
			::String key = tmp11;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(1010)
			::haxe::ds::StringMap tmp12 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1010)
			::String tmp13 = key;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1010)
			tmp7 = tmp12->get(tmp13);
		}
		HX_STACK_LINE(1010)
		::haxe::ds::StringMap widgetDefaults = tmp7;		HX_STACK_VAR(widgetDefaults,"widgetDefaults");
		HX_STACK_LINE(1012)
		bool tmp8 = (widgetDefaults != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1012)
		if ((tmp8)){
			HX_STACK_LINE(1013)
			Array< ::String > defs = obj->defaults.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(1014)
			{
				HX_STACK_LINE(1014)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1014)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1014)
				while((true)){
					HX_STACK_LINE(1014)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1014)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1014)
					if ((tmp10)){
						HX_STACK_LINE(1014)
						break;
					}
					HX_STACK_LINE(1014)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1014)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1015)
					::String tmp12 = defs->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1015)
					Dynamic tmp13 = widgetDefaults->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1015)
					Dynamic defaultsFn = tmp13;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(1016)
					bool tmp14 = (defaultsFn != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1016)
					if ((tmp14)){
						HX_STACK_LINE(1017)
						::ru::stablex::ui::widgets::Widget tmp15 = obj;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1017)
						defaultsFn(tmp15).Cast< Void >();
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,applyDefaults,(void))

Void UIBuilder_obj::initCreatedWidget( Dynamic maybeWidget){
{
		HX_STACK_FRAME("ru.stablex.ui.UIBuilder","initCreatedWidget",0x672459b7,"ru.stablex.ui.UIBuilder.initCreatedWidget","ru/stablex/ui/UIBuilder.hx",1023,0xeeae4854)
		HX_STACK_ARG(maybeWidget,"maybeWidget")
		HX_STACK_LINE(1024)
		Dynamic tmp = maybeWidget;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1024)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1024)
		if ((tmp1)){
			HX_STACK_LINE(1025)
			::ru::stablex::ui::widgets::Widget tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1025)
			tmp2 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(maybeWidget);
			HX_STACK_LINE(1025)
			::ru::stablex::ui::widgets::Widget widget = tmp2;		HX_STACK_VAR(widget,"widget");
			HX_STACK_LINE(1026)
			{
				HX_STACK_LINE(1026)
				::ru::stablex::ui::widgets::Widget tmp3 = widget;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1026)
				bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1026)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1026)
				if ((tmp5)){
					HX_STACK_LINE(1026)
					Dynamic();
				}
				else{
					HX_STACK_LINE(1026)
					::ru::stablex::ui::widgets::Widget tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1026)
					tmp6 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(widget);
					HX_STACK_LINE(1026)
					::ru::stablex::ui::widgets::Widget obj = tmp6;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(1026)
					::ru::stablex::ui::widgets::Widget tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1026)
					::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1026)
					::String tmp9 = ::Type_obj::getClassName(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1026)
					::String clsName = tmp9;		HX_STACK_VAR(clsName,"clsName");
					HX_STACK_LINE(1026)
					::haxe::ds::StringMap tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1026)
					{
						HX_STACK_LINE(1026)
						int tmp11 = (clsName.length - (int)1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1026)
						int tmp12 = clsName.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1026)
						int tmp13 = (tmp12 + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1026)
						::String tmp14 = clsName.substr(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1026)
						::String key = tmp14;		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(1026)
						::haxe::ds::StringMap tmp15 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1026)
						::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1026)
						tmp10 = tmp15->get(tmp16);
					}
					HX_STACK_LINE(1026)
					::haxe::ds::StringMap widgetDefaults = tmp10;		HX_STACK_VAR(widgetDefaults,"widgetDefaults");
					HX_STACK_LINE(1026)
					bool tmp11 = (widgetDefaults != null());		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1026)
					if ((tmp11)){
						HX_STACK_LINE(1026)
						Array< ::String > defs = obj->defaults.split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
						HX_STACK_LINE(1026)
						{
							HX_STACK_LINE(1026)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1026)
							int _g = defs->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1026)
							while((true)){
								HX_STACK_LINE(1026)
								bool tmp12 = (_g1 < _g);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1026)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1026)
								if ((tmp13)){
									HX_STACK_LINE(1026)
									break;
								}
								HX_STACK_LINE(1026)
								int tmp14 = (_g1)++;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1026)
								int i = tmp14;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(1026)
								::String tmp15 = defs->__get(i);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1026)
								Dynamic tmp16 = widgetDefaults->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1026)
								Dynamic defaultsFn = tmp16;		HX_STACK_VAR(defaultsFn,"defaultsFn");
								HX_STACK_LINE(1026)
								bool tmp17 = (defaultsFn != null());		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1026)
								if ((tmp17)){
									HX_STACK_LINE(1026)
									::ru::stablex::ui::widgets::Widget tmp18 = obj;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1026)
									defaultsFn(tmp18).Cast< Void >();
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(1027)
			widget->_onInitialize();
			HX_STACK_LINE(1028)
			widget->_onCreate();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,initCreatedWidget,(void))

Dynamic UIBuilder_obj::skin( ::String skinName){
	HX_STACK_FRAME("ru.stablex.ui.UIBuilder","skin",0x2f9fe842,"ru.stablex.ui.UIBuilder.skin","ru/stablex/ui/UIBuilder.hx",1036,0xeeae4854)
	HX_STACK_ARG(skinName,"skinName")
	HX_STACK_LINE(1042)
	::haxe::ds::StringMap tmp = ::ru::stablex::ui::UIBuilder_obj::skins;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1042)
	::String tmp1 = skinName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1042)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1042)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1042)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,skin,return )

::ru::stablex::ui::widgets::Widget UIBuilder_obj::get( ::String id){
	HX_STACK_FRAME("ru.stablex.ui.UIBuilder","get",0x9b27ce71,"ru.stablex.ui.UIBuilder.get","ru/stablex/ui/UIBuilder.hx",1050,0xeeae4854)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1051)
	::haxe::ds::StringMap tmp = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1051)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1051)
	::ru::stablex::ui::widgets::Widget tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1051)
	::ru::stablex::ui::widgets::Widget tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1051)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,get,return )

Dynamic UIBuilder_obj::getAs( ::String id,::hx::Class cls){
	HX_STACK_FRAME("ru.stablex.ui.UIBuilder","getAs",0x8f8d45c3,"ru.stablex.ui.UIBuilder.getAs","ru/stablex/ui/UIBuilder.hx",1059,0xeeae4854)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(1060)
	::haxe::ds::StringMap tmp = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1060)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1060)
	::ru::stablex::ui::widgets::Widget tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1060)
	::ru::stablex::ui::widgets::Widget w = tmp2;		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(1061)
	::ru::stablex::ui::widgets::Widget tmp3 = w;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1061)
	::hx::Class tmp4 = cls;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1061)
	bool tmp5 = ::Std_obj::is(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1061)
	Dynamic tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1061)
	if ((tmp5)){
		HX_STACK_LINE(1061)
		tmp6 = ((Dynamic)(w));
	}
	else{
		HX_STACK_LINE(1061)
		tmp6 = null();
	}
	HX_STACK_LINE(1061)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UIBuilder_obj,getAs,return )

Void UIBuilder_obj::save( ::ru::stablex::ui::widgets::Widget obj){
{
		HX_STACK_FRAME("ru.stablex.ui.UIBuilder","save",0x2f985d02,"ru.stablex.ui.UIBuilder.save","ru/stablex/ui/UIBuilder.hx",1069,0xeeae4854)
		HX_STACK_ARG(obj,"obj")
		HX_STACK_LINE(1070)
		::haxe::ds::StringMap tmp = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1070)
		::String tmp1 = obj->id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1070)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1070)
		if ((tmp2)){
			HX_STACK_LINE(1071)
			::String tmp3 = (HX_HCSTRING("Widget id \"","\x59","\x36","\x9e","\x8f") + obj->id);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1071)
			::String tmp4 = (tmp3 + HX_HCSTRING("\" is already used","\xbd","\xb5","\x7b","\xb9"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1071)
			HX_STACK_DO_THROW(tmp4);
		}
		else{
			HX_STACK_LINE(1073)
			::haxe::ds::StringMap tmp3 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1073)
			::String tmp4 = obj->id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1073)
			::ru::stablex::ui::widgets::Widget tmp5 = obj;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1073)
			tmp3->set(tmp4,tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,save,(void))

Void UIBuilder_obj::forget( ::String id){
{
		HX_STACK_FRAME("ru.stablex.ui.UIBuilder","forget",0x66809232,"ru.stablex.ui.UIBuilder.forget","ru/stablex/ui/UIBuilder.hx",1082,0xeeae4854)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(1083)
		::haxe::ds::StringMap tmp = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1083)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1083)
		tmp->remove(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,forget,(void))

Void UIBuilder_obj::queueSkin( ::ru::stablex::ui::widgets::Widget w){
{
		HX_STACK_FRAME("ru.stablex.ui.UIBuilder","queueSkin",0x1a2b10c9,"ru.stablex.ui.UIBuilder.queueSkin","ru/stablex/ui/UIBuilder.hx",1091,0xeeae4854)
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1092)
		bool tmp = (w->skin != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1092)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1092)
		if ((tmp)){
			HX_STACK_LINE(1092)
			bool tmp2 = w->_skinQueued;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1092)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1092)
			tmp1 = !(tmp3);
		}
		else{
			HX_STACK_LINE(1092)
			tmp1 = false;
		}
		HX_STACK_LINE(1092)
		if ((tmp1)){
			HX_STACK_LINE(1093)
			::List tmp2 = ::ru::stablex::ui::UIBuilder_obj::_skinQueue;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1093)
			::ru::stablex::ui::widgets::Widget tmp3 = w;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1093)
			tmp2->add(tmp3);
			HX_STACK_LINE(1094)
			w->_skinQueued = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,queueSkin,(void))

Void UIBuilder_obj::skinQueue( ::openfl::events::Event e){
{
		HX_STACK_FRAME("ru.stablex.ui.UIBuilder","skinQueue",0xf05ce5ef,"ru.stablex.ui.UIBuilder.skinQueue","ru/stablex/ui/UIBuilder.hx",1103,0xeeae4854)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(1109)
		::List tmp = ::ru::stablex::ui::UIBuilder_obj::_skinQueue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1109)
		int tmp1 = tmp->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1109)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1109)
		if ((tmp2)){
			HX_STACK_LINE(1111)
			::List tmp3 = ::ru::stablex::ui::UIBuilder_obj::_skinQueue;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1111)
			::List lst = tmp3;		HX_STACK_VAR(lst,"lst");
			HX_STACK_LINE(1113)
			::List tmp4 = ::List_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1113)
			::ru::stablex::ui::UIBuilder_obj::_skinQueue = tmp4;
			HX_STACK_LINE(1115)
			{
				HX_STACK_LINE(1115)
				::_List::ListIterator tmp5 = ::_List::ListIterator_obj::__new(lst->h);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1115)
				::_List::ListIterator _g = tmp5;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1115)
				while((true)){
					HX_STACK_LINE(1115)
					bool tmp6 = (_g->head != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1115)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1115)
					if ((tmp7)){
						HX_STACK_LINE(1115)
						break;
					}
					HX_STACK_LINE(1115)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1115)
					{
						HX_STACK_LINE(1115)
						Dynamic tmp9 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1115)
						_g->val = tmp9;
						HX_STACK_LINE(1115)
						Dynamic tmp10 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1115)
						_g->head = tmp10;
						HX_STACK_LINE(1115)
						tmp8 = _g->val;
					}
					HX_STACK_LINE(1115)
					::ru::stablex::ui::widgets::Widget w = ((::ru::stablex::ui::widgets::Widget)(tmp8));		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(1116)
					w->applySkin();
					HX_STACK_LINE(1117)
					w->_skinQueued = false;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UIBuilder_obj,skinQueue,(void))

HX_BEGIN_DEFAULT_FUNC(__default_customStringReplace,UIBuilder_obj)
::String run(::String s){
	HX_STACK_FRAME("ru.stablex.ui.UIBuilder","customStringReplace",0xb0d174cd,"ru.stablex.ui.UIBuilder.customStringReplace","ru/stablex/ui/UIBuilder.hx",1130,0xeeae4854)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(1131)
	::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1131)
	return tmp;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

Dynamic UIBuilder_obj::customStringReplace;


UIBuilder_obj::UIBuilder_obj()
{
}

bool UIBuilder_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { outValue = pos_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"skin") ) { outValue = skin_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"save") ) { outValue = save_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"skins") ) { outValue = skins; return true;  }
		if (HX_FIELD_EQ(inName,"apply") ) { outValue = apply_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getAs") ) { outValue = getAs_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"forget") ) { outValue = forget_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_nextId") ) { outValue = _nextId; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { outValue = defaults; return true;  }
		if (HX_FIELD_EQ(inName,"_objects") ) { outValue = _objects; return true;  }
		if (HX_FIELD_EQ(inName,"createId") ) { outValue = createId_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"queueSkin") ) { outValue = queueSkin_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"skinQueue") ) { outValue = skinQueue_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { outValue = dispatcher; return true;  }
		if (HX_FIELD_EQ(inName,"_skinQueue") ) { outValue = _skinQueue; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"applyDefaults") ) { outValue = applyDefaults_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initCreatedWidget") ) { outValue = initCreatedWidget_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customStringReplace") ) { outValue = customStringReplace; return true;  }
	}
	return false;
}

bool UIBuilder_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"skins") ) { skins=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_nextId") ) { _nextId=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { defaults=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"_objects") ) { _objects=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dispatcher") ) { dispatcher=ioValue.Cast< ::openfl::events::EventDispatcher >(); return true; }
		if (HX_FIELD_EQ(inName,"_skinQueue") ) { _skinQueue=ioValue.Cast< ::List >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customStringReplace") ) { customStringReplace=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &UIBuilder_obj::defaults,HX_HCSTRING("defaults","\x92","\xd0","\x99","\xaf")},
	{hx::fsObject /*::openfl::events::EventDispatcher*/ ,(void *) &UIBuilder_obj::dispatcher,HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &UIBuilder_obj::_objects,HX_HCSTRING("_objects","\x55","\xc2","\x07","\xbc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &UIBuilder_obj::skins,HX_HCSTRING("skins","\x56","\x97","\x1e","\x7e")},
	{hx::fsInt,(void *) &UIBuilder_obj::_nextId,HX_HCSTRING("_nextId","\x4d","\x39","\xdb","\xe0")},
	{hx::fsObject /*::List*/ ,(void *) &UIBuilder_obj::_skinQueue,HX_HCSTRING("_skinQueue","\x95","\xbd","\xd1","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &UIBuilder_obj::customStringReplace,HX_HCSTRING("customStringReplace","\xf2","\x80","\x39","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIBuilder_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::defaults,"defaults");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::dispatcher,"dispatcher");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::_objects,"_objects");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::skins,"skins");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::_nextId,"_nextId");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::_skinQueue,"_skinQueue");
	HX_MARK_MEMBER_NAME(UIBuilder_obj::customStringReplace,"customStringReplace");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::defaults,"defaults");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::dispatcher,"dispatcher");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::_objects,"_objects");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::skins,"skins");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::_nextId,"_nextId");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::_skinQueue,"_skinQueue");
	HX_VISIT_MEMBER_NAME(UIBuilder_obj::customStringReplace,"customStringReplace");
};

#endif

hx::Class UIBuilder_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaults","\x92","\xd0","\x99","\xaf"),
	HX_HCSTRING("dispatcher","\xa7","\xc9","\x00","\x5a"),
	HX_HCSTRING("_objects","\x55","\xc2","\x07","\xbc"),
	HX_HCSTRING("skins","\x56","\x97","\x1e","\x7e"),
	HX_HCSTRING("_nextId","\x4d","\x39","\xdb","\xe0"),
	HX_HCSTRING("_skinQueue","\x95","\xbd","\xd1","\x00"),
	HX_HCSTRING("pos","\x94","\x5d","\x55","\x00"),
	HX_HCSTRING("createId","\xf7","\x5d","\xf4","\x2b"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("applyDefaults","\x20","\x30","\xcf","\xef"),
	HX_HCSTRING("initCreatedWidget","\x9c","\xa2","\x3c","\xc0"),
	HX_HCSTRING("skin","\x7d","\x16","\x55","\x4c"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("getAs","\x28","\x8b","\x60","\x91"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("forget","\x2d","\x05","\x8a","\xfd"),
	HX_HCSTRING("queueSkin","\xae","\x6c","\xfd","\xce"),
	HX_HCSTRING("skinQueue","\xd4","\x41","\x2f","\xa5"),
	HX_HCSTRING("customStringReplace","\xf2","\x80","\x39","\xb7"),
	::String(null()) };

void UIBuilder_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.UIBuilder","\xc9","\xe4","\xa4","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UIBuilder_obj::__GetStatic;
	__mClass->mSetStaticField = &UIBuilder_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< UIBuilder_obj >;
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

void UIBuilder_obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ru/stablex/ui/UIBuilder.hx",75,0xeeae4854)
		{
			HX_STACK_LINE(75)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(75)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(75)
			return tmp1;
		}
		return null();
	}
};
	defaults= _Function_0_1::Block();
	dispatcher= ::openfl::events::EventDispatcher_obj::__new(null());
struct _Function_0_2{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ru/stablex/ui/UIBuilder.hx",81,0xeeae4854)
		{
			HX_STACK_LINE(81)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(81)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(81)
			return tmp1;
		}
		return null();
	}
};
	_objects= _Function_0_2::Block();
struct _Function_0_3{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ru/stablex/ui/UIBuilder.hx",84,0xeeae4854)
		{
			HX_STACK_LINE(84)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(84)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(84)
			return tmp1;
		}
		return null();
	}
};
	skins= _Function_0_3::Block();
	_nextId= (int)0;
	_skinQueue= ::List_obj::__new();
	customStringReplace = new __default_customStringReplace;

}

} // end namespace ru
} // end namespace stablex
} // end namespace ui
