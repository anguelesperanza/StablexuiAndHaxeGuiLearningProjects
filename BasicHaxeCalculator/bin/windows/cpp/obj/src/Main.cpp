#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
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
#ifndef INCLUDED_ru_stablex_ui_skins_Paint
#include <ru/stablex/ui/skins/Paint.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_skins_Rect
#include <ru/stablex/ui/skins/Rect.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_skins_Skin
#include <ru/stablex/ui/skins/Skin.h>
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
#ifndef INCLUDED_ru_stablex_ui_widgets_VBox
#include <ru/stablex/ui/widgets/VBox.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",15,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(1)
	{
		HX_STACK_LINE(2)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(2)
		Dynamic tmp1 = ::ru::stablex::ui::UIBuilder_obj::skinQueue_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(2)
		tmp->stage->removeEventListener(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),tmp1,null());
		HX_STACK_LINE(3)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(3)
		Dynamic tmp3 = ::ru::stablex::ui::UIBuilder_obj::skinQueue_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3)
		tmp2->stage->addEventListener(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),tmp3,null(),null(),null());
	}
	HX_STACK_LINE(20)
	Array< int > _operator = Array_obj< int >::__new().Add((int)0);		HX_STACK_VAR(_operator,"operator");
	HX_STACK_LINE(21)
	Array< Float > numA = Array_obj< Float >::__new().Add((int)0);		HX_STACK_VAR(numA,"numA");
	HX_STACK_LINE(22)
	Array< Float > numB = Array_obj< Float >::__new().Add((int)0);		HX_STACK_VAR(numB,"numB");
	HX_STACK_LINE(23)
	Array< Float > answer = Array_obj< Float >::__new().Add((int)0);		HX_STACK_VAR(answer,"answer");
	HX_STACK_LINE(26)
	::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1)
	::ru::stablex::ui::widgets::Text tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1)
	{
		HX_STACK_LINE(26)
		Dynamic __ui__arguments = null();		HX_STACK_VAR(__ui__arguments,"__ui__arguments");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::Text tmp2 = ::ru::stablex::ui::widgets::Text_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::Text __ui__widget1 = tmp2;		HX_STACK_VAR(__ui__widget1,"__ui__widget1");
		HX_STACK_LINE(3)
		::haxe::ds::StringMap tmp3 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(3)
		bool tmp4 = tmp3->exists(HX_HCSTRING("Text","\xcd","\xf8","\xd2","\x37"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(3)
		if ((tmp4)){
			HX_STACK_LINE(4)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp5 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp6 = tmp5->get(HX_HCSTRING("Text","\xcd","\xf8","\xd2","\x37"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap defFns = tmp6;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(6)
			{
				HX_STACK_LINE(6)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(6)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(6)
				while((true)){
					HX_STACK_LINE(6)
					bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(6)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(6)
					if ((tmp8)){
						HX_STACK_LINE(6)
						break;
					}
					HX_STACK_LINE(6)
					int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(6)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(7)
					::String tmp10 = defs->__get(i);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(7)
					Dynamic tmp11 = defFns->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(7)
					Dynamic defaultsFn = tmp11;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(8)
					bool tmp12 = (defaultsFn != null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(8)
					if ((tmp12)){
						HX_STACK_LINE(8)
						::ru::stablex::ui::widgets::Text tmp13 = __ui__widget1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(8)
						defaultsFn(tmp13).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(11)
		__ui__widget1->set_top((int)10);
		HX_STACK_LINE(12)
		__ui__widget1->set_h((int)80);
		HX_STACK_LINE(13)
		__ui__widget1->set_id(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));
		HX_STACK_LINE(14)
		__ui__widget1->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(15)
		__ui__widget1->set_w((int)260);
		HX_STACK_LINE(16)
		__ui__widget1->set_left((int)20);
		HX_STACK_LINE(17)
		::ru::stablex::ui::skins::Skin tmp5 = __ui__widget1->skin;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(17)
		bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(17)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(17)
		if ((tmp7)){
			HX_STACK_LINE(18)
			::ru::stablex::ui::skins::Paint tmp8 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(18)
			__ui__widget1->skin = tmp8;
			HX_STACK_LINE(19)
			::ru::stablex::ui::skins::Skin tmp9 = __ui__widget1->skin;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(19)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp9);
		}
		HX_STACK_LINE(21)
		::ru::stablex::ui::skins::Paint tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(21)
		tmp8 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget1->skin);
		HX_STACK_LINE(21)
		tmp8->border = (int)1;
		HX_STACK_LINE(22)
		::ru::stablex::ui::widgets::Text tmp9 = __ui__widget1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(22)
		bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(22)
		if ((tmp10)){
			HX_STACK_LINE(23)
			::ru::stablex::ui::widgets::Widget tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(23)
			tmp11 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(23)
			tmp11->_onInitialize();
		}
		HX_STACK_LINE(25)
		::ru::stablex::ui::widgets::Text tmp11 = __ui__widget1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(25)
		bool tmp12 = ::Std_obj::is(tmp11,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(25)
		if ((tmp12)){
			HX_STACK_LINE(26)
			::ru::stablex::ui::widgets::Widget tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(26)
			tmp13 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(26)
			tmp13->_onCreate();
		}
		HX_STACK_LINE(28)
		::ru::stablex::ui::widgets::Text tmp13 = __ui__widget1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(28)
		tmp1 = tmp13;
	}
	HX_STACK_LINE(26)
	tmp->addChild(tmp1);
	HX_STACK_LINE(27)
	::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1)
	::ru::stablex::ui::widgets::VBox tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1)
	{
		HX_STACK_LINE(27)
		Dynamic __ui__arguments = null();		HX_STACK_VAR(__ui__arguments,"__ui__arguments");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::VBox tmp4 = ::ru::stablex::ui::widgets::VBox_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::VBox __ui__widget1 = tmp4;		HX_STACK_VAR(__ui__widget1,"__ui__widget1");
		HX_STACK_LINE(3)
		::haxe::ds::StringMap tmp5 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(3)
		bool tmp6 = tmp5->exists(HX_HCSTRING("VBox","\x55","\xcf","\x0a","\x39"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(3)
		if ((tmp6)){
			HX_STACK_LINE(4)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp7 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp8 = tmp7->get(HX_HCSTRING("VBox","\x55","\xcf","\x0a","\x39"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap defFns = tmp8;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(6)
			{
				HX_STACK_LINE(6)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(6)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(6)
				while((true)){
					HX_STACK_LINE(6)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(6)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(6)
					if ((tmp10)){
						HX_STACK_LINE(6)
						break;
					}
					HX_STACK_LINE(6)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(6)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(7)
					::String tmp12 = defs->__get(i);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(7)
					Dynamic tmp13 = defFns->get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(7)
					Dynamic defaultsFn = tmp13;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(8)
					bool tmp14 = (defaultsFn != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(8)
					if ((tmp14)){
						HX_STACK_LINE(8)
						::ru::stablex::ui::widgets::VBox tmp15 = __ui__widget1;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(8)
						defaultsFn(tmp15).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(11)
		__ui__widget1->set_top((int)100);
		HX_STACK_LINE(12)
		__ui__widget1->set_left((int)20);
		HX_STACK_LINE(13)
		::ru::stablex::ui::widgets::VBox tmp7 = __ui__widget1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(13)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(13)
		if ((tmp8)){
			HX_STACK_LINE(14)
			::ru::stablex::ui::widgets::Widget tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(14)
			tmp9 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(14)
			tmp9->_onInitialize();
		}
		HX_STACK_LINE(17)
		::ru::stablex::ui::widgets::Button tmp9 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(17)
		::ru::stablex::ui::widgets::Button __ui__widget2 = tmp9;		HX_STACK_VAR(__ui__widget2,"__ui__widget2");
		HX_STACK_LINE(18)
		::haxe::ds::StringMap tmp10 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(18)
		bool tmp11 = tmp10->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(18)
		if ((tmp11)){
			HX_STACK_LINE(19)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp12 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp13 = tmp12->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap defFns = tmp13;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(21)
			{
				HX_STACK_LINE(21)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(21)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(21)
				while((true)){
					HX_STACK_LINE(21)
					bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(21)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(21)
					if ((tmp15)){
						HX_STACK_LINE(21)
						break;
					}
					HX_STACK_LINE(21)
					int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(21)
					int i = tmp16;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(22)
					::String tmp17 = defs->__get(i);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(22)
					Dynamic tmp18 = defFns->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(22)
					Dynamic defaultsFn = tmp18;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(23)
					bool tmp19 = (defaultsFn != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(23)
					if ((tmp19)){
						HX_STACK_LINE(23)
						::ru::stablex::ui::widgets::Button tmp20 = __ui__widget2;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(23)
						defaultsFn(tmp20).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(26)
		__ui__widget2->set_h((int)50);
		HX_STACK_LINE(27)
		__ui__widget2->set_text(HX_HCSTRING("1","\x31","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","NumButtonsRowOne.xml",28,0xf8d71170)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Text tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					::haxe::ds::StringMap tmp13 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp14 = tmp13->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget w = tmp14;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp15 = w;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(28)
					bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(28)
					if ((tmp16)){
						HX_STACK_LINE(28)
						tmp12 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(28)
						tmp12 = null();
					}
				}
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Text _g = tmp12;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(28)
				::String tmp13 = _g->get_text();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Button tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(28)
				tmp14 = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(event->currentTarget);
				HX_STACK_LINE(28)
				::String tmp15 = tmp14->get_text();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(28)
				::String tmp16 = (tmp13 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(28)
				_g->set_text(tmp16);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(28)
		__ui__widget2->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_1()),null(),null(),null());
		HX_STACK_LINE(29)
		__ui__widget2->set_w((int)50);
		HX_STACK_LINE(30)
		::ru::stablex::ui::skins::Skin tmp12 = __ui__widget2->skin;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(30)
		bool tmp13 = ::Std_obj::is(tmp12,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(30)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(30)
		if ((tmp14)){
			HX_STACK_LINE(31)
			::ru::stablex::ui::skins::Paint tmp15 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(31)
			__ui__widget2->skin = tmp15;
			HX_STACK_LINE(32)
			::ru::stablex::ui::skins::Skin tmp16 = __ui__widget2->skin;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(32)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp16);
		}
		HX_STACK_LINE(34)
		::ru::stablex::ui::skins::Paint tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(34)
		tmp15 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget2->skin);
		HX_STACK_LINE(34)
		tmp15->border = (int)1;
		HX_STACK_LINE(35)
		::ru::stablex::ui::widgets::Button tmp16 = __ui__widget2;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(35)
		bool tmp17 = ::Std_obj::is(tmp16,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(35)
		if ((tmp17)){
			HX_STACK_LINE(36)
			::ru::stablex::ui::widgets::Widget tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(36)
			tmp18 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget2);
			HX_STACK_LINE(36)
			tmp18->_onInitialize();
		}
		HX_STACK_LINE(38)
		::ru::stablex::ui::widgets::Button tmp18 = __ui__widget2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(38)
		bool tmp19 = ::Std_obj::is(tmp18,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(38)
		if ((tmp19)){
			HX_STACK_LINE(39)
			::ru::stablex::ui::widgets::Widget tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(39)
			tmp20 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget2);
			HX_STACK_LINE(39)
			tmp20->_onCreate();
		}
		HX_STACK_LINE(41)
		::ru::stablex::ui::widgets::Button tmp20 = __ui__widget2;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(41)
		__ui__widget1->addChild(tmp20);
		HX_STACK_LINE(43)
		::ru::stablex::ui::widgets::Button tmp21 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(43)
		::ru::stablex::ui::widgets::Button __ui__widget21 = tmp21;		HX_STACK_VAR(__ui__widget21,"__ui__widget21");
		HX_STACK_LINE(44)
		::haxe::ds::StringMap tmp22 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(44)
		bool tmp23 = tmp22->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(44)
		if ((tmp23)){
			HX_STACK_LINE(45)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp24 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp25 = tmp24->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap defFns = tmp25;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(47)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(47)
				while((true)){
					HX_STACK_LINE(47)
					bool tmp26 = (_g1 < _g);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(47)
					bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(47)
					if ((tmp27)){
						HX_STACK_LINE(47)
						break;
					}
					HX_STACK_LINE(47)
					int tmp28 = (_g1)++;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(47)
					int i = tmp28;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(48)
					::String tmp29 = defs->__get(i);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(48)
					Dynamic tmp30 = defFns->get(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(48)
					Dynamic defaultsFn = tmp30;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(49)
					bool tmp31 = (defaultsFn != null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(49)
					if ((tmp31)){
						HX_STACK_LINE(49)
						::ru::stablex::ui::widgets::Button tmp32 = __ui__widget21;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(49)
						defaultsFn(tmp32).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(52)
		__ui__widget21->set_h((int)50);
		HX_STACK_LINE(53)
		__ui__widget21->set_text(HX_HCSTRING("4","\x34","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","NumButtonsRowOne.xml",54,0xf8d71170)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Text tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::haxe::ds::StringMap tmp25 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp26 = tmp25->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget w = tmp26;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp27 = w;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(54)
					bool tmp28 = ::Std_obj::is(tmp27,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(54)
					if ((tmp28)){
						HX_STACK_LINE(54)
						tmp24 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(54)
						tmp24 = null();
					}
				}
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Text _g = tmp24;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(54)
				::String tmp25 = _g->get_text();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Button tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(54)
				tmp26 = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(event->currentTarget);
				HX_STACK_LINE(54)
				::String tmp27 = tmp26->get_text();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(54)
				::String tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(54)
				_g->set_text(tmp28);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(54)
		__ui__widget21->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_2()),null(),null(),null());
		HX_STACK_LINE(55)
		__ui__widget21->set_w((int)50);
		HX_STACK_LINE(56)
		::ru::stablex::ui::skins::Skin tmp24 = __ui__widget21->skin;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(56)
		bool tmp25 = ::Std_obj::is(tmp24,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(56)
		bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(56)
		if ((tmp26)){
			HX_STACK_LINE(57)
			::ru::stablex::ui::skins::Paint tmp27 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(57)
			__ui__widget21->skin = tmp27;
			HX_STACK_LINE(58)
			::ru::stablex::ui::skins::Skin tmp28 = __ui__widget21->skin;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(58)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp28);
		}
		HX_STACK_LINE(60)
		::ru::stablex::ui::skins::Paint tmp27;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(60)
		tmp27 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget21->skin);
		HX_STACK_LINE(60)
		tmp27->border = (int)1;
		HX_STACK_LINE(61)
		::ru::stablex::ui::widgets::Button tmp28 = __ui__widget21;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(61)
		bool tmp29 = ::Std_obj::is(tmp28,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(61)
		if ((tmp29)){
			HX_STACK_LINE(62)
			::ru::stablex::ui::widgets::Widget tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(62)
			tmp30 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget21);
			HX_STACK_LINE(62)
			tmp30->_onInitialize();
		}
		HX_STACK_LINE(64)
		::ru::stablex::ui::widgets::Button tmp30 = __ui__widget21;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(64)
		bool tmp31 = ::Std_obj::is(tmp30,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(64)
		if ((tmp31)){
			HX_STACK_LINE(65)
			::ru::stablex::ui::widgets::Widget tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(65)
			tmp32 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget21);
			HX_STACK_LINE(65)
			tmp32->_onCreate();
		}
		HX_STACK_LINE(67)
		::ru::stablex::ui::widgets::Button tmp32 = __ui__widget21;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(67)
		__ui__widget1->addChild(tmp32);
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Button tmp33 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Button __ui__widget22 = tmp33;		HX_STACK_VAR(__ui__widget22,"__ui__widget22");
		HX_STACK_LINE(70)
		::haxe::ds::StringMap tmp34 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(70)
		bool tmp35 = tmp34->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(70)
		if ((tmp35)){
			HX_STACK_LINE(71)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp36 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp37 = tmp36->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap defFns = tmp37;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(73)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(73)
				while((true)){
					HX_STACK_LINE(73)
					bool tmp38 = (_g1 < _g);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(73)
					bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(73)
					if ((tmp39)){
						HX_STACK_LINE(73)
						break;
					}
					HX_STACK_LINE(73)
					int tmp40 = (_g1)++;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(73)
					int i = tmp40;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(74)
					::String tmp41 = defs->__get(i);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(74)
					Dynamic tmp42 = defFns->get(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(74)
					Dynamic defaultsFn = tmp42;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(75)
					bool tmp43 = (defaultsFn != null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(75)
					if ((tmp43)){
						HX_STACK_LINE(75)
						::ru::stablex::ui::widgets::Button tmp44 = __ui__widget22;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(75)
						defaultsFn(tmp44).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(78)
		__ui__widget22->set_h((int)50);
		HX_STACK_LINE(79)
		__ui__widget22->set_text(HX_HCSTRING("7","\x37","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_3)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","NumButtonsRowOne.xml",80,0xf8d71170)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Text tmp36;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::haxe::ds::StringMap tmp37 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp38 = tmp37->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget w = tmp38;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp39 = w;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(80)
					bool tmp40 = ::Std_obj::is(tmp39,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(80)
					if ((tmp40)){
						HX_STACK_LINE(80)
						tmp36 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(80)
						tmp36 = null();
					}
				}
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Text _g = tmp36;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(80)
				::String tmp37 = _g->get_text();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Button tmp38;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(80)
				tmp38 = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(event->currentTarget);
				HX_STACK_LINE(80)
				::String tmp39 = tmp38->get_text();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(80)
				::String tmp40 = (tmp37 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(80)
				_g->set_text(tmp40);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(80)
		__ui__widget22->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_3()),null(),null(),null());
		HX_STACK_LINE(81)
		__ui__widget22->set_w((int)50);
		HX_STACK_LINE(82)
		::ru::stablex::ui::skins::Skin tmp36 = __ui__widget22->skin;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(82)
		bool tmp37 = ::Std_obj::is(tmp36,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(82)
		bool tmp38 = !(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(82)
		if ((tmp38)){
			HX_STACK_LINE(83)
			::ru::stablex::ui::skins::Paint tmp39 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(83)
			__ui__widget22->skin = tmp39;
			HX_STACK_LINE(84)
			::ru::stablex::ui::skins::Skin tmp40 = __ui__widget22->skin;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(84)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp40);
		}
		HX_STACK_LINE(86)
		::ru::stablex::ui::skins::Paint tmp39;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(86)
		tmp39 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget22->skin);
		HX_STACK_LINE(86)
		tmp39->border = (int)1;
		HX_STACK_LINE(87)
		::ru::stablex::ui::widgets::Button tmp40 = __ui__widget22;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(87)
		bool tmp41 = ::Std_obj::is(tmp40,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(87)
		if ((tmp41)){
			HX_STACK_LINE(88)
			::ru::stablex::ui::widgets::Widget tmp42;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(88)
			tmp42 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget22);
			HX_STACK_LINE(88)
			tmp42->_onInitialize();
		}
		HX_STACK_LINE(90)
		::ru::stablex::ui::widgets::Button tmp42 = __ui__widget22;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(90)
		bool tmp43 = ::Std_obj::is(tmp42,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(90)
		if ((tmp43)){
			HX_STACK_LINE(91)
			::ru::stablex::ui::widgets::Widget tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(91)
			tmp44 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget22);
			HX_STACK_LINE(91)
			tmp44->_onCreate();
		}
		HX_STACK_LINE(93)
		::ru::stablex::ui::widgets::Button tmp44 = __ui__widget22;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(93)
		__ui__widget1->addChild(tmp44);
		HX_STACK_LINE(94)
		::ru::stablex::ui::widgets::VBox tmp45 = __ui__widget1;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(94)
		bool tmp46 = ::Std_obj::is(tmp45,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(94)
		if ((tmp46)){
			HX_STACK_LINE(95)
			::ru::stablex::ui::widgets::Widget tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(95)
			tmp47 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(95)
			tmp47->_onCreate();
		}
		HX_STACK_LINE(97)
		::ru::stablex::ui::widgets::VBox tmp47 = __ui__widget1;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(97)
		tmp3 = tmp47;
	}
	HX_STACK_LINE(27)
	tmp2->addChild(tmp3);
	HX_STACK_LINE(28)
	::openfl::display::MovieClip tmp4 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1)
	::ru::stablex::ui::widgets::VBox tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1)
	{
		HX_STACK_LINE(28)
		Dynamic __ui__arguments = null();		HX_STACK_VAR(__ui__arguments,"__ui__arguments");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::VBox tmp6 = ::ru::stablex::ui::widgets::VBox_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::VBox __ui__widget1 = tmp6;		HX_STACK_VAR(__ui__widget1,"__ui__widget1");
		HX_STACK_LINE(3)
		::haxe::ds::StringMap tmp7 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(3)
		bool tmp8 = tmp7->exists(HX_HCSTRING("VBox","\x55","\xcf","\x0a","\x39"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(3)
		if ((tmp8)){
			HX_STACK_LINE(4)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp9 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp10 = tmp9->get(HX_HCSTRING("VBox","\x55","\xcf","\x0a","\x39"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap defFns = tmp10;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(6)
			{
				HX_STACK_LINE(6)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(6)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(6)
				while((true)){
					HX_STACK_LINE(6)
					bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(6)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(6)
					if ((tmp12)){
						HX_STACK_LINE(6)
						break;
					}
					HX_STACK_LINE(6)
					int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(6)
					int i = tmp13;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(7)
					::String tmp14 = defs->__get(i);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(7)
					Dynamic tmp15 = defFns->get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(7)
					Dynamic defaultsFn = tmp15;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(8)
					bool tmp16 = (defaultsFn != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(8)
					if ((tmp16)){
						HX_STACK_LINE(8)
						::ru::stablex::ui::widgets::VBox tmp17 = __ui__widget1;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(8)
						defaultsFn(tmp17).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(11)
		__ui__widget1->set_top((int)100);
		HX_STACK_LINE(12)
		__ui__widget1->set_left((int)70);
		HX_STACK_LINE(13)
		::ru::stablex::ui::widgets::VBox tmp9 = __ui__widget1;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(13)
		bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(13)
		if ((tmp10)){
			HX_STACK_LINE(14)
			::ru::stablex::ui::widgets::Widget tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(14)
			tmp11 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(14)
			tmp11->_onInitialize();
		}
		HX_STACK_LINE(17)
		::ru::stablex::ui::widgets::Button tmp11 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(17)
		::ru::stablex::ui::widgets::Button __ui__widget2 = tmp11;		HX_STACK_VAR(__ui__widget2,"__ui__widget2");
		HX_STACK_LINE(18)
		::haxe::ds::StringMap tmp12 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(18)
		bool tmp13 = tmp12->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(18)
		if ((tmp13)){
			HX_STACK_LINE(19)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp14 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp15 = tmp14->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap defFns = tmp15;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(21)
			{
				HX_STACK_LINE(21)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(21)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(21)
				while((true)){
					HX_STACK_LINE(21)
					bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(21)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(21)
					if ((tmp17)){
						HX_STACK_LINE(21)
						break;
					}
					HX_STACK_LINE(21)
					int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(21)
					int i = tmp18;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(22)
					::String tmp19 = defs->__get(i);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(22)
					Dynamic tmp20 = defFns->get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(22)
					Dynamic defaultsFn = tmp20;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(23)
					bool tmp21 = (defaultsFn != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(23)
					if ((tmp21)){
						HX_STACK_LINE(23)
						::ru::stablex::ui::widgets::Button tmp22 = __ui__widget2;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(23)
						defaultsFn(tmp22).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(26)
		__ui__widget2->set_h((int)50);
		HX_STACK_LINE(27)
		__ui__widget2->set_text(HX_HCSTRING("2","\x32","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","NumButtonsRowTwo.xml",28,0x23fa6f96)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Text tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					::haxe::ds::StringMap tmp15 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp16 = tmp15->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget w = tmp16;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp17 = w;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(28)
					bool tmp18 = ::Std_obj::is(tmp17,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(28)
					if ((tmp18)){
						HX_STACK_LINE(28)
						tmp14 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(28)
						tmp14 = null();
					}
				}
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Text _g = tmp14;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(28)
				::String tmp15 = _g->get_text();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Button tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(28)
				tmp16 = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(event->currentTarget);
				HX_STACK_LINE(28)
				::String tmp17 = tmp16->get_text();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(28)
				::String tmp18 = (tmp15 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(28)
				_g->set_text(tmp18);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(28)
		__ui__widget2->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_1()),null(),null(),null());
		HX_STACK_LINE(29)
		__ui__widget2->set_w((int)50);
		HX_STACK_LINE(30)
		::ru::stablex::ui::skins::Skin tmp14 = __ui__widget2->skin;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(30)
		bool tmp15 = ::Std_obj::is(tmp14,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(30)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(30)
		if ((tmp16)){
			HX_STACK_LINE(31)
			::ru::stablex::ui::skins::Paint tmp17 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(31)
			__ui__widget2->skin = tmp17;
			HX_STACK_LINE(32)
			::ru::stablex::ui::skins::Skin tmp18 = __ui__widget2->skin;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(32)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp18);
		}
		HX_STACK_LINE(34)
		::ru::stablex::ui::skins::Paint tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(34)
		tmp17 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget2->skin);
		HX_STACK_LINE(34)
		tmp17->border = (int)1;
		HX_STACK_LINE(35)
		::ru::stablex::ui::widgets::Button tmp18 = __ui__widget2;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(35)
		bool tmp19 = ::Std_obj::is(tmp18,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(35)
		if ((tmp19)){
			HX_STACK_LINE(36)
			::ru::stablex::ui::widgets::Widget tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(36)
			tmp20 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget2);
			HX_STACK_LINE(36)
			tmp20->_onInitialize();
		}
		HX_STACK_LINE(38)
		::ru::stablex::ui::widgets::Button tmp20 = __ui__widget2;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(38)
		bool tmp21 = ::Std_obj::is(tmp20,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(38)
		if ((tmp21)){
			HX_STACK_LINE(39)
			::ru::stablex::ui::widgets::Widget tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(39)
			tmp22 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget2);
			HX_STACK_LINE(39)
			tmp22->_onCreate();
		}
		HX_STACK_LINE(41)
		::ru::stablex::ui::widgets::Button tmp22 = __ui__widget2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(41)
		__ui__widget1->addChild(tmp22);
		HX_STACK_LINE(43)
		::ru::stablex::ui::widgets::Button tmp23 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(43)
		::ru::stablex::ui::widgets::Button __ui__widget21 = tmp23;		HX_STACK_VAR(__ui__widget21,"__ui__widget21");
		HX_STACK_LINE(44)
		::haxe::ds::StringMap tmp24 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(44)
		bool tmp25 = tmp24->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(44)
		if ((tmp25)){
			HX_STACK_LINE(45)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp26 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp27 = tmp26->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap defFns = tmp27;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(47)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(47)
				while((true)){
					HX_STACK_LINE(47)
					bool tmp28 = (_g1 < _g);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(47)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(47)
					if ((tmp29)){
						HX_STACK_LINE(47)
						break;
					}
					HX_STACK_LINE(47)
					int tmp30 = (_g1)++;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(47)
					int i = tmp30;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(48)
					::String tmp31 = defs->__get(i);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(48)
					Dynamic tmp32 = defFns->get(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(48)
					Dynamic defaultsFn = tmp32;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(49)
					bool tmp33 = (defaultsFn != null());		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(49)
					if ((tmp33)){
						HX_STACK_LINE(49)
						::ru::stablex::ui::widgets::Button tmp34 = __ui__widget21;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(49)
						defaultsFn(tmp34).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(52)
		__ui__widget21->set_h((int)50);
		HX_STACK_LINE(53)
		__ui__widget21->set_text(HX_HCSTRING("5","\x35","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","NumButtonsRowTwo.xml",54,0x23fa6f96)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Text tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::haxe::ds::StringMap tmp27 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp28 = tmp27->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget w = tmp28;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp29 = w;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(54)
					bool tmp30 = ::Std_obj::is(tmp29,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(54)
					if ((tmp30)){
						HX_STACK_LINE(54)
						tmp26 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(54)
						tmp26 = null();
					}
				}
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Text _g = tmp26;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(54)
				::String tmp27 = _g->get_text();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Button tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(54)
				tmp28 = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(event->currentTarget);
				HX_STACK_LINE(54)
				::String tmp29 = tmp28->get_text();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(54)
				::String tmp30 = (tmp27 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(54)
				_g->set_text(tmp30);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(54)
		__ui__widget21->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_2()),null(),null(),null());
		HX_STACK_LINE(55)
		__ui__widget21->set_w((int)50);
		HX_STACK_LINE(56)
		::ru::stablex::ui::skins::Skin tmp26 = __ui__widget21->skin;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(56)
		bool tmp27 = ::Std_obj::is(tmp26,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(56)
		bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(56)
		if ((tmp28)){
			HX_STACK_LINE(57)
			::ru::stablex::ui::skins::Paint tmp29 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(57)
			__ui__widget21->skin = tmp29;
			HX_STACK_LINE(58)
			::ru::stablex::ui::skins::Skin tmp30 = __ui__widget21->skin;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(58)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp30);
		}
		HX_STACK_LINE(60)
		::ru::stablex::ui::skins::Paint tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(60)
		tmp29 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget21->skin);
		HX_STACK_LINE(60)
		tmp29->border = (int)1;
		HX_STACK_LINE(61)
		::ru::stablex::ui::widgets::Button tmp30 = __ui__widget21;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(61)
		bool tmp31 = ::Std_obj::is(tmp30,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(61)
		if ((tmp31)){
			HX_STACK_LINE(62)
			::ru::stablex::ui::widgets::Widget tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(62)
			tmp32 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget21);
			HX_STACK_LINE(62)
			tmp32->_onInitialize();
		}
		HX_STACK_LINE(64)
		::ru::stablex::ui::widgets::Button tmp32 = __ui__widget21;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(64)
		bool tmp33 = ::Std_obj::is(tmp32,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(64)
		if ((tmp33)){
			HX_STACK_LINE(65)
			::ru::stablex::ui::widgets::Widget tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(65)
			tmp34 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget21);
			HX_STACK_LINE(65)
			tmp34->_onCreate();
		}
		HX_STACK_LINE(67)
		::ru::stablex::ui::widgets::Button tmp34 = __ui__widget21;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(67)
		__ui__widget1->addChild(tmp34);
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Button tmp35 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Button __ui__widget22 = tmp35;		HX_STACK_VAR(__ui__widget22,"__ui__widget22");
		HX_STACK_LINE(70)
		::haxe::ds::StringMap tmp36 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(70)
		bool tmp37 = tmp36->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(70)
		if ((tmp37)){
			HX_STACK_LINE(71)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp38 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp39 = tmp38->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap defFns = tmp39;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(73)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(73)
				while((true)){
					HX_STACK_LINE(73)
					bool tmp40 = (_g1 < _g);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(73)
					bool tmp41 = !(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(73)
					if ((tmp41)){
						HX_STACK_LINE(73)
						break;
					}
					HX_STACK_LINE(73)
					int tmp42 = (_g1)++;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(73)
					int i = tmp42;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(74)
					::String tmp43 = defs->__get(i);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(74)
					Dynamic tmp44 = defFns->get(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(74)
					Dynamic defaultsFn = tmp44;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(75)
					bool tmp45 = (defaultsFn != null());		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(75)
					if ((tmp45)){
						HX_STACK_LINE(75)
						::ru::stablex::ui::widgets::Button tmp46 = __ui__widget22;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(75)
						defaultsFn(tmp46).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(78)
		__ui__widget22->set_h((int)50);
		HX_STACK_LINE(79)
		__ui__widget22->set_text(HX_HCSTRING("8","\x38","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_3)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","NumButtonsRowTwo.xml",80,0x23fa6f96)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Text tmp38;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::haxe::ds::StringMap tmp39 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp40 = tmp39->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget w = tmp40;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp41 = w;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(80)
					bool tmp42 = ::Std_obj::is(tmp41,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(80)
					if ((tmp42)){
						HX_STACK_LINE(80)
						tmp38 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(80)
						tmp38 = null();
					}
				}
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Text _g = tmp38;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(80)
				::String tmp39 = _g->get_text();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Button tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(80)
				tmp40 = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(event->currentTarget);
				HX_STACK_LINE(80)
				::String tmp41 = tmp40->get_text();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(80)
				::String tmp42 = (tmp39 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(80)
				_g->set_text(tmp42);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(80)
		__ui__widget22->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_3()),null(),null(),null());
		HX_STACK_LINE(81)
		__ui__widget22->set_w((int)50);
		HX_STACK_LINE(82)
		::ru::stablex::ui::skins::Skin tmp38 = __ui__widget22->skin;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(82)
		bool tmp39 = ::Std_obj::is(tmp38,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(82)
		bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(82)
		if ((tmp40)){
			HX_STACK_LINE(83)
			::ru::stablex::ui::skins::Paint tmp41 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(83)
			__ui__widget22->skin = tmp41;
			HX_STACK_LINE(84)
			::ru::stablex::ui::skins::Skin tmp42 = __ui__widget22->skin;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(84)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp42);
		}
		HX_STACK_LINE(86)
		::ru::stablex::ui::skins::Paint tmp41;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(86)
		tmp41 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget22->skin);
		HX_STACK_LINE(86)
		tmp41->border = (int)1;
		HX_STACK_LINE(87)
		::ru::stablex::ui::widgets::Button tmp42 = __ui__widget22;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(87)
		bool tmp43 = ::Std_obj::is(tmp42,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(87)
		if ((tmp43)){
			HX_STACK_LINE(88)
			::ru::stablex::ui::widgets::Widget tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(88)
			tmp44 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget22);
			HX_STACK_LINE(88)
			tmp44->_onInitialize();
		}
		HX_STACK_LINE(90)
		::ru::stablex::ui::widgets::Button tmp44 = __ui__widget22;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(90)
		bool tmp45 = ::Std_obj::is(tmp44,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(90)
		if ((tmp45)){
			HX_STACK_LINE(91)
			::ru::stablex::ui::widgets::Widget tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(91)
			tmp46 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget22);
			HX_STACK_LINE(91)
			tmp46->_onCreate();
		}
		HX_STACK_LINE(93)
		::ru::stablex::ui::widgets::Button tmp46 = __ui__widget22;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(93)
		__ui__widget1->addChild(tmp46);
		HX_STACK_LINE(94)
		::ru::stablex::ui::widgets::VBox tmp47 = __ui__widget1;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(94)
		bool tmp48 = ::Std_obj::is(tmp47,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(94)
		if ((tmp48)){
			HX_STACK_LINE(95)
			::ru::stablex::ui::widgets::Widget tmp49;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(95)
			tmp49 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(95)
			tmp49->_onCreate();
		}
		HX_STACK_LINE(97)
		::ru::stablex::ui::widgets::VBox tmp49 = __ui__widget1;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(97)
		tmp5 = tmp49;
	}
	HX_STACK_LINE(28)
	tmp4->addChild(tmp5);
	HX_STACK_LINE(29)
	::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1)
	::ru::stablex::ui::widgets::VBox tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1)
	{
		HX_STACK_LINE(29)
		Dynamic __ui__arguments = null();		HX_STACK_VAR(__ui__arguments,"__ui__arguments");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::VBox tmp8 = ::ru::stablex::ui::widgets::VBox_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::VBox __ui__widget1 = tmp8;		HX_STACK_VAR(__ui__widget1,"__ui__widget1");
		HX_STACK_LINE(3)
		::haxe::ds::StringMap tmp9 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(3)
		bool tmp10 = tmp9->exists(HX_HCSTRING("VBox","\x55","\xcf","\x0a","\x39"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(3)
		if ((tmp10)){
			HX_STACK_LINE(4)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp11 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp12 = tmp11->get(HX_HCSTRING("VBox","\x55","\xcf","\x0a","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap defFns = tmp12;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(6)
			{
				HX_STACK_LINE(6)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(6)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(6)
				while((true)){
					HX_STACK_LINE(6)
					bool tmp13 = (_g1 < _g);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(6)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(6)
					if ((tmp14)){
						HX_STACK_LINE(6)
						break;
					}
					HX_STACK_LINE(6)
					int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(6)
					int i = tmp15;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(7)
					::String tmp16 = defs->__get(i);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(7)
					Dynamic tmp17 = defFns->get(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(7)
					Dynamic defaultsFn = tmp17;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(8)
					bool tmp18 = (defaultsFn != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(8)
					if ((tmp18)){
						HX_STACK_LINE(8)
						::ru::stablex::ui::widgets::VBox tmp19 = __ui__widget1;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(8)
						defaultsFn(tmp19).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(11)
		__ui__widget1->set_top((int)100);
		HX_STACK_LINE(12)
		__ui__widget1->set_left((int)120);
		HX_STACK_LINE(13)
		::ru::stablex::ui::widgets::VBox tmp11 = __ui__widget1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(13)
		bool tmp12 = ::Std_obj::is(tmp11,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(13)
		if ((tmp12)){
			HX_STACK_LINE(14)
			::ru::stablex::ui::widgets::Widget tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(14)
			tmp13 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(14)
			tmp13->_onInitialize();
		}
		HX_STACK_LINE(17)
		::ru::stablex::ui::widgets::Button tmp13 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(17)
		::ru::stablex::ui::widgets::Button __ui__widget2 = tmp13;		HX_STACK_VAR(__ui__widget2,"__ui__widget2");
		HX_STACK_LINE(18)
		::haxe::ds::StringMap tmp14 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(18)
		bool tmp15 = tmp14->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(18)
		if ((tmp15)){
			HX_STACK_LINE(19)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp16 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp17 = tmp16->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap defFns = tmp17;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(21)
			{
				HX_STACK_LINE(21)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(21)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(21)
				while((true)){
					HX_STACK_LINE(21)
					bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(21)
					bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(21)
					if ((tmp19)){
						HX_STACK_LINE(21)
						break;
					}
					HX_STACK_LINE(21)
					int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(21)
					int i = tmp20;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(22)
					::String tmp21 = defs->__get(i);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(22)
					Dynamic tmp22 = defFns->get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(22)
					Dynamic defaultsFn = tmp22;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(23)
					bool tmp23 = (defaultsFn != null());		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(23)
					if ((tmp23)){
						HX_STACK_LINE(23)
						::ru::stablex::ui::widgets::Button tmp24 = __ui__widget2;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(23)
						defaultsFn(tmp24).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(26)
		__ui__widget2->set_h((int)50);
		HX_STACK_LINE(27)
		__ui__widget2->set_text(HX_HCSTRING("3","\x33","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","NumButtonsRowThree.xml",28,0xf15a91a8)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Text tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					::haxe::ds::StringMap tmp17 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp18 = tmp17->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget w = tmp18;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp19 = w;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(28)
					bool tmp20 = ::Std_obj::is(tmp19,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(28)
					if ((tmp20)){
						HX_STACK_LINE(28)
						tmp16 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(28)
						tmp16 = null();
					}
				}
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Text _g = tmp16;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(28)
				::String tmp17 = _g->get_text();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Button tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(28)
				tmp18 = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(event->currentTarget);
				HX_STACK_LINE(28)
				::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(28)
				::String tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(28)
				_g->set_text(tmp20);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(28)
		__ui__widget2->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_1()),null(),null(),null());
		HX_STACK_LINE(29)
		__ui__widget2->set_w((int)50);
		HX_STACK_LINE(30)
		::ru::stablex::ui::skins::Skin tmp16 = __ui__widget2->skin;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(30)
		bool tmp17 = ::Std_obj::is(tmp16,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(30)
		bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(30)
		if ((tmp18)){
			HX_STACK_LINE(31)
			::ru::stablex::ui::skins::Paint tmp19 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(31)
			__ui__widget2->skin = tmp19;
			HX_STACK_LINE(32)
			::ru::stablex::ui::skins::Skin tmp20 = __ui__widget2->skin;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(32)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp20);
		}
		HX_STACK_LINE(34)
		::ru::stablex::ui::skins::Paint tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(34)
		tmp19 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget2->skin);
		HX_STACK_LINE(34)
		tmp19->border = (int)1;
		HX_STACK_LINE(35)
		::ru::stablex::ui::widgets::Button tmp20 = __ui__widget2;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(35)
		bool tmp21 = ::Std_obj::is(tmp20,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(35)
		if ((tmp21)){
			HX_STACK_LINE(36)
			::ru::stablex::ui::widgets::Widget tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(36)
			tmp22 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget2);
			HX_STACK_LINE(36)
			tmp22->_onInitialize();
		}
		HX_STACK_LINE(38)
		::ru::stablex::ui::widgets::Button tmp22 = __ui__widget2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(38)
		bool tmp23 = ::Std_obj::is(tmp22,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(38)
		if ((tmp23)){
			HX_STACK_LINE(39)
			::ru::stablex::ui::widgets::Widget tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(39)
			tmp24 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget2);
			HX_STACK_LINE(39)
			tmp24->_onCreate();
		}
		HX_STACK_LINE(41)
		::ru::stablex::ui::widgets::Button tmp24 = __ui__widget2;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(41)
		__ui__widget1->addChild(tmp24);
		HX_STACK_LINE(43)
		::ru::stablex::ui::widgets::Button tmp25 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(43)
		::ru::stablex::ui::widgets::Button __ui__widget21 = tmp25;		HX_STACK_VAR(__ui__widget21,"__ui__widget21");
		HX_STACK_LINE(44)
		::haxe::ds::StringMap tmp26 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(44)
		bool tmp27 = tmp26->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(44)
		if ((tmp27)){
			HX_STACK_LINE(45)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp28 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp29 = tmp28->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap defFns = tmp29;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(47)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(47)
				while((true)){
					HX_STACK_LINE(47)
					bool tmp30 = (_g1 < _g);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(47)
					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(47)
					if ((tmp31)){
						HX_STACK_LINE(47)
						break;
					}
					HX_STACK_LINE(47)
					int tmp32 = (_g1)++;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(47)
					int i = tmp32;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(48)
					::String tmp33 = defs->__get(i);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(48)
					Dynamic tmp34 = defFns->get(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(48)
					Dynamic defaultsFn = tmp34;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(49)
					bool tmp35 = (defaultsFn != null());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(49)
					if ((tmp35)){
						HX_STACK_LINE(49)
						::ru::stablex::ui::widgets::Button tmp36 = __ui__widget21;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(49)
						defaultsFn(tmp36).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(52)
		__ui__widget21->set_h((int)50);
		HX_STACK_LINE(53)
		__ui__widget21->set_text(HX_HCSTRING("6","\x36","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","NumButtonsRowThree.xml",54,0xf15a91a8)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Text tmp28;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::haxe::ds::StringMap tmp29 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp30 = tmp29->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget w = tmp30;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp31 = w;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(54)
					bool tmp32 = ::Std_obj::is(tmp31,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(54)
					if ((tmp32)){
						HX_STACK_LINE(54)
						tmp28 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(54)
						tmp28 = null();
					}
				}
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Text _g = tmp28;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(54)
				::String tmp29 = _g->get_text();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Button tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(54)
				tmp30 = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(event->currentTarget);
				HX_STACK_LINE(54)
				::String tmp31 = tmp30->get_text();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(54)
				::String tmp32 = (tmp29 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(54)
				_g->set_text(tmp32);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(54)
		__ui__widget21->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_2()),null(),null(),null());
		HX_STACK_LINE(55)
		__ui__widget21->set_w((int)50);
		HX_STACK_LINE(56)
		::ru::stablex::ui::skins::Skin tmp28 = __ui__widget21->skin;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(56)
		bool tmp29 = ::Std_obj::is(tmp28,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(56)
		bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(56)
		if ((tmp30)){
			HX_STACK_LINE(57)
			::ru::stablex::ui::skins::Paint tmp31 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(57)
			__ui__widget21->skin = tmp31;
			HX_STACK_LINE(58)
			::ru::stablex::ui::skins::Skin tmp32 = __ui__widget21->skin;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(58)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp32);
		}
		HX_STACK_LINE(60)
		::ru::stablex::ui::skins::Paint tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(60)
		tmp31 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget21->skin);
		HX_STACK_LINE(60)
		tmp31->border = (int)1;
		HX_STACK_LINE(61)
		::ru::stablex::ui::widgets::Button tmp32 = __ui__widget21;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(61)
		bool tmp33 = ::Std_obj::is(tmp32,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(61)
		if ((tmp33)){
			HX_STACK_LINE(62)
			::ru::stablex::ui::widgets::Widget tmp34;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(62)
			tmp34 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget21);
			HX_STACK_LINE(62)
			tmp34->_onInitialize();
		}
		HX_STACK_LINE(64)
		::ru::stablex::ui::widgets::Button tmp34 = __ui__widget21;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(64)
		bool tmp35 = ::Std_obj::is(tmp34,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(64)
		if ((tmp35)){
			HX_STACK_LINE(65)
			::ru::stablex::ui::widgets::Widget tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(65)
			tmp36 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget21);
			HX_STACK_LINE(65)
			tmp36->_onCreate();
		}
		HX_STACK_LINE(67)
		::ru::stablex::ui::widgets::Button tmp36 = __ui__widget21;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(67)
		__ui__widget1->addChild(tmp36);
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Button tmp37 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Button __ui__widget22 = tmp37;		HX_STACK_VAR(__ui__widget22,"__ui__widget22");
		HX_STACK_LINE(70)
		::haxe::ds::StringMap tmp38 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(70)
		bool tmp39 = tmp38->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(70)
		if ((tmp39)){
			HX_STACK_LINE(71)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp40 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp41 = tmp40->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap defFns = tmp41;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(73)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(73)
				while((true)){
					HX_STACK_LINE(73)
					bool tmp42 = (_g1 < _g);		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(73)
					bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(73)
					if ((tmp43)){
						HX_STACK_LINE(73)
						break;
					}
					HX_STACK_LINE(73)
					int tmp44 = (_g1)++;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(73)
					int i = tmp44;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(74)
					::String tmp45 = defs->__get(i);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(74)
					Dynamic tmp46 = defFns->get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(74)
					Dynamic defaultsFn = tmp46;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(75)
					bool tmp47 = (defaultsFn != null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(75)
					if ((tmp47)){
						HX_STACK_LINE(75)
						::ru::stablex::ui::widgets::Button tmp48 = __ui__widget22;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(75)
						defaultsFn(tmp48).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(78)
		__ui__widget22->set_h((int)50);
		HX_STACK_LINE(79)
		__ui__widget22->set_text(HX_HCSTRING("9","\x39","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_3)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","NumButtonsRowThree.xml",80,0xf15a91a8)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Text tmp40;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::haxe::ds::StringMap tmp41 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp42 = tmp41->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget w = tmp42;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp43 = w;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(80)
					bool tmp44 = ::Std_obj::is(tmp43,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(80)
					if ((tmp44)){
						HX_STACK_LINE(80)
						tmp40 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(80)
						tmp40 = null();
					}
				}
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Text _g = tmp40;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(80)
				::String tmp41 = _g->get_text();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Button tmp42;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(80)
				tmp42 = hx::TCast< ::ru::stablex::ui::widgets::Button >::cast(event->currentTarget);
				HX_STACK_LINE(80)
				::String tmp43 = tmp42->get_text();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(80)
				::String tmp44 = (tmp41 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(80)
				_g->set_text(tmp44);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(80)
		__ui__widget22->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_3()),null(),null(),null());
		HX_STACK_LINE(81)
		__ui__widget22->set_w((int)50);
		HX_STACK_LINE(82)
		::ru::stablex::ui::skins::Skin tmp40 = __ui__widget22->skin;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(82)
		bool tmp41 = ::Std_obj::is(tmp40,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(82)
		bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(82)
		if ((tmp42)){
			HX_STACK_LINE(83)
			::ru::stablex::ui::skins::Paint tmp43 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(83)
			__ui__widget22->skin = tmp43;
			HX_STACK_LINE(84)
			::ru::stablex::ui::skins::Skin tmp44 = __ui__widget22->skin;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(84)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp44);
		}
		HX_STACK_LINE(86)
		::ru::stablex::ui::skins::Paint tmp43;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(86)
		tmp43 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget22->skin);
		HX_STACK_LINE(86)
		tmp43->border = (int)1;
		HX_STACK_LINE(87)
		::ru::stablex::ui::widgets::Button tmp44 = __ui__widget22;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(87)
		bool tmp45 = ::Std_obj::is(tmp44,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(87)
		if ((tmp45)){
			HX_STACK_LINE(88)
			::ru::stablex::ui::widgets::Widget tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(88)
			tmp46 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget22);
			HX_STACK_LINE(88)
			tmp46->_onInitialize();
		}
		HX_STACK_LINE(90)
		::ru::stablex::ui::widgets::Button tmp46 = __ui__widget22;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(90)
		bool tmp47 = ::Std_obj::is(tmp46,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(90)
		if ((tmp47)){
			HX_STACK_LINE(91)
			::ru::stablex::ui::widgets::Widget tmp48;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(91)
			tmp48 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget22);
			HX_STACK_LINE(91)
			tmp48->_onCreate();
		}
		HX_STACK_LINE(93)
		::ru::stablex::ui::widgets::Button tmp48 = __ui__widget22;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(93)
		__ui__widget1->addChild(tmp48);
		HX_STACK_LINE(94)
		::ru::stablex::ui::widgets::VBox tmp49 = __ui__widget1;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(94)
		bool tmp50 = ::Std_obj::is(tmp49,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(94)
		if ((tmp50)){
			HX_STACK_LINE(95)
			::ru::stablex::ui::widgets::Widget tmp51;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(95)
			tmp51 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(95)
			tmp51->_onCreate();
		}
		HX_STACK_LINE(97)
		::ru::stablex::ui::widgets::VBox tmp51 = __ui__widget1;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(97)
		tmp7 = tmp51;
	}
	HX_STACK_LINE(29)
	tmp6->addChild(tmp7);
	HX_STACK_LINE(30)
	::openfl::display::MovieClip tmp8 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1)
	::ru::stablex::ui::widgets::VBox tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1)
	{
		HX_STACK_LINE(30)
		Dynamic __ui__arguments = null();		HX_STACK_VAR(__ui__arguments,"__ui__arguments");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::VBox tmp10 = ::ru::stablex::ui::widgets::VBox_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::VBox __ui__widget1 = tmp10;		HX_STACK_VAR(__ui__widget1,"__ui__widget1");
		HX_STACK_LINE(3)
		::haxe::ds::StringMap tmp11 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(3)
		bool tmp12 = tmp11->exists(HX_HCSTRING("VBox","\x55","\xcf","\x0a","\x39"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(3)
		if ((tmp12)){
			HX_STACK_LINE(4)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp13 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp14 = tmp13->get(HX_HCSTRING("VBox","\x55","\xcf","\x0a","\x39"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap defFns = tmp14;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(6)
			{
				HX_STACK_LINE(6)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(6)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(6)
				while((true)){
					HX_STACK_LINE(6)
					bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(6)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(6)
					if ((tmp16)){
						HX_STACK_LINE(6)
						break;
					}
					HX_STACK_LINE(6)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(6)
					int i = tmp17;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(7)
					::String tmp18 = defs->__get(i);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(7)
					Dynamic tmp19 = defFns->get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(7)
					Dynamic defaultsFn = tmp19;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(8)
					bool tmp20 = (defaultsFn != null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(8)
					if ((tmp20)){
						HX_STACK_LINE(8)
						::ru::stablex::ui::widgets::VBox tmp21 = __ui__widget1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(8)
						defaultsFn(tmp21).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(11)
		__ui__widget1->set_top((int)100);
		HX_STACK_LINE(12)
		__ui__widget1->set_left((int)180);
		HX_STACK_LINE(13)
		::ru::stablex::ui::widgets::VBox tmp13 = __ui__widget1;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(13)
		bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(13)
		if ((tmp14)){
			HX_STACK_LINE(14)
			::ru::stablex::ui::widgets::Widget tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(14)
			tmp15 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(14)
			tmp15->_onInitialize();
		}
		HX_STACK_LINE(17)
		::ru::stablex::ui::widgets::Button tmp15 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(17)
		::ru::stablex::ui::widgets::Button __ui__widget2 = tmp15;		HX_STACK_VAR(__ui__widget2,"__ui__widget2");
		HX_STACK_LINE(18)
		::haxe::ds::StringMap tmp16 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(18)
		bool tmp17 = tmp16->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(18)
		if ((tmp17)){
			HX_STACK_LINE(19)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp18 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp19 = tmp18->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap defFns = tmp19;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(21)
			{
				HX_STACK_LINE(21)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(21)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(21)
				while((true)){
					HX_STACK_LINE(21)
					bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(21)
					bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(21)
					if ((tmp21)){
						HX_STACK_LINE(21)
						break;
					}
					HX_STACK_LINE(21)
					int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(21)
					int i = tmp22;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(22)
					::String tmp23 = defs->__get(i);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(22)
					Dynamic tmp24 = defFns->get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(22)
					Dynamic defaultsFn = tmp24;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(23)
					bool tmp25 = (defaultsFn != null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(23)
					if ((tmp25)){
						HX_STACK_LINE(23)
						::ru::stablex::ui::widgets::Button tmp26 = __ui__widget2;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(23)
						defaultsFn(tmp26).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(26)
		__ui__widget2->set_h((int)50);
		HX_STACK_LINE(27)
		__ui__widget2->set_text(HX_HCSTRING("+","\x2b","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< Float >,numA,Array< int >,_operator)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","MathSignsOne.xml",28,0xdfd2fae1)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(28)
				_operator[(int)0] = (int)1;
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Text tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					::haxe::ds::StringMap tmp19 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp20 = tmp19->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget w = tmp20;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp21 = w;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(28)
					bool tmp22 = ::Std_obj::is(tmp21,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(28)
					if ((tmp22)){
						HX_STACK_LINE(28)
						tmp18 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(28)
						tmp18 = null();
					}
				}
				HX_STACK_LINE(28)
				::String tmp19 = tmp18->get_text();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(28)
				Float tmp20 = ::Std_obj::parseFloat(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(28)
				numA[(int)0] = tmp20;
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Text tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					::haxe::ds::StringMap tmp22 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp23 = tmp22->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget w = tmp23;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp24 = w;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(28)
					bool tmp25 = ::Std_obj::is(tmp24,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(28)
					if ((tmp25)){
						HX_STACK_LINE(28)
						tmp21 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(28)
						tmp21 = null();
					}
				}
				HX_STACK_LINE(28)
				tmp21->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(28)
		__ui__widget2->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_1(numA,_operator)),null(),null(),null());
		HX_STACK_LINE(29)
		__ui__widget2->set_w((int)50);
		HX_STACK_LINE(30)
		::ru::stablex::ui::skins::Skin tmp18 = __ui__widget2->skin;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(30)
		bool tmp19 = ::Std_obj::is(tmp18,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(30)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(30)
		if ((tmp20)){
			HX_STACK_LINE(31)
			::ru::stablex::ui::skins::Paint tmp21 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(31)
			__ui__widget2->skin = tmp21;
			HX_STACK_LINE(32)
			::ru::stablex::ui::skins::Skin tmp22 = __ui__widget2->skin;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(32)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp22);
		}
		HX_STACK_LINE(34)
		::ru::stablex::ui::skins::Paint tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(34)
		tmp21 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget2->skin);
		HX_STACK_LINE(34)
		tmp21->border = (int)1;
		HX_STACK_LINE(35)
		::ru::stablex::ui::widgets::Button tmp22 = __ui__widget2;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(35)
		bool tmp23 = ::Std_obj::is(tmp22,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(35)
		if ((tmp23)){
			HX_STACK_LINE(36)
			::ru::stablex::ui::widgets::Widget tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(36)
			tmp24 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget2);
			HX_STACK_LINE(36)
			tmp24->_onInitialize();
		}
		HX_STACK_LINE(38)
		::ru::stablex::ui::widgets::Button tmp24 = __ui__widget2;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(38)
		bool tmp25 = ::Std_obj::is(tmp24,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(38)
		if ((tmp25)){
			HX_STACK_LINE(39)
			::ru::stablex::ui::widgets::Widget tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(39)
			tmp26 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget2);
			HX_STACK_LINE(39)
			tmp26->_onCreate();
		}
		HX_STACK_LINE(41)
		::ru::stablex::ui::widgets::Button tmp26 = __ui__widget2;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(41)
		__ui__widget1->addChild(tmp26);
		HX_STACK_LINE(43)
		::ru::stablex::ui::widgets::Button tmp27 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(43)
		::ru::stablex::ui::widgets::Button __ui__widget21 = tmp27;		HX_STACK_VAR(__ui__widget21,"__ui__widget21");
		HX_STACK_LINE(44)
		::haxe::ds::StringMap tmp28 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(44)
		bool tmp29 = tmp28->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(44)
		if ((tmp29)){
			HX_STACK_LINE(45)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp30 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp31 = tmp30->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap defFns = tmp31;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(47)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(47)
				while((true)){
					HX_STACK_LINE(47)
					bool tmp32 = (_g1 < _g);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(47)
					bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(47)
					if ((tmp33)){
						HX_STACK_LINE(47)
						break;
					}
					HX_STACK_LINE(47)
					int tmp34 = (_g1)++;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(47)
					int i = tmp34;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(48)
					::String tmp35 = defs->__get(i);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(48)
					Dynamic tmp36 = defFns->get(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(48)
					Dynamic defaultsFn = tmp36;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(49)
					bool tmp37 = (defaultsFn != null());		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(49)
					if ((tmp37)){
						HX_STACK_LINE(49)
						::ru::stablex::ui::widgets::Button tmp38 = __ui__widget21;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(49)
						defaultsFn(tmp38).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(52)
		__ui__widget21->set_h((int)50);
		HX_STACK_LINE(53)
		__ui__widget21->set_text(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,Array< Float >,numA,Array< int >,_operator)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","MathSignsOne.xml",54,0xdfd2fae1)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(54)
				_operator[(int)0] = (int)2;
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Text tmp30;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::haxe::ds::StringMap tmp31 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp32 = tmp31->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget w = tmp32;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp33 = w;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(54)
					bool tmp34 = ::Std_obj::is(tmp33,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(54)
					if ((tmp34)){
						HX_STACK_LINE(54)
						tmp30 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(54)
						tmp30 = null();
					}
				}
				HX_STACK_LINE(54)
				::String tmp31 = tmp30->get_text();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(54)
				Float tmp32 = ::Std_obj::parseFloat(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(54)
				numA[(int)0] = tmp32;
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Text tmp33;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::haxe::ds::StringMap tmp34 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp35 = tmp34->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget w = tmp35;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp36 = w;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(54)
					bool tmp37 = ::Std_obj::is(tmp36,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(54)
					if ((tmp37)){
						HX_STACK_LINE(54)
						tmp33 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(54)
						tmp33 = null();
					}
				}
				HX_STACK_LINE(54)
				tmp33->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(54)
		__ui__widget21->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_2(numA,_operator)),null(),null(),null());
		HX_STACK_LINE(55)
		__ui__widget21->set_w((int)50);
		HX_STACK_LINE(56)
		::ru::stablex::ui::skins::Skin tmp30 = __ui__widget21->skin;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(56)
		bool tmp31 = ::Std_obj::is(tmp30,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(56)
		bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(56)
		if ((tmp32)){
			HX_STACK_LINE(57)
			::ru::stablex::ui::skins::Paint tmp33 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(57)
			__ui__widget21->skin = tmp33;
			HX_STACK_LINE(58)
			::ru::stablex::ui::skins::Skin tmp34 = __ui__widget21->skin;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(58)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp34);
		}
		HX_STACK_LINE(60)
		::ru::stablex::ui::skins::Paint tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(60)
		tmp33 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget21->skin);
		HX_STACK_LINE(60)
		tmp33->border = (int)1;
		HX_STACK_LINE(61)
		::ru::stablex::ui::widgets::Button tmp34 = __ui__widget21;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(61)
		bool tmp35 = ::Std_obj::is(tmp34,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(61)
		if ((tmp35)){
			HX_STACK_LINE(62)
			::ru::stablex::ui::widgets::Widget tmp36;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(62)
			tmp36 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget21);
			HX_STACK_LINE(62)
			tmp36->_onInitialize();
		}
		HX_STACK_LINE(64)
		::ru::stablex::ui::widgets::Button tmp36 = __ui__widget21;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(64)
		bool tmp37 = ::Std_obj::is(tmp36,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(64)
		if ((tmp37)){
			HX_STACK_LINE(65)
			::ru::stablex::ui::widgets::Widget tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(65)
			tmp38 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget21);
			HX_STACK_LINE(65)
			tmp38->_onCreate();
		}
		HX_STACK_LINE(67)
		::ru::stablex::ui::widgets::Button tmp38 = __ui__widget21;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(67)
		__ui__widget1->addChild(tmp38);
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Button tmp39 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Button __ui__widget22 = tmp39;		HX_STACK_VAR(__ui__widget22,"__ui__widget22");
		HX_STACK_LINE(70)
		::haxe::ds::StringMap tmp40 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(70)
		bool tmp41 = tmp40->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(70)
		if ((tmp41)){
			HX_STACK_LINE(71)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp42 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp43 = tmp42->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap defFns = tmp43;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(73)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(73)
				while((true)){
					HX_STACK_LINE(73)
					bool tmp44 = (_g1 < _g);		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(73)
					bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(73)
					if ((tmp45)){
						HX_STACK_LINE(73)
						break;
					}
					HX_STACK_LINE(73)
					int tmp46 = (_g1)++;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(73)
					int i = tmp46;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(74)
					::String tmp47 = defs->__get(i);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(74)
					Dynamic tmp48 = defFns->get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(74)
					Dynamic defaultsFn = tmp48;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(75)
					bool tmp49 = (defaultsFn != null());		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(75)
					if ((tmp49)){
						HX_STACK_LINE(75)
						::ru::stablex::ui::widgets::Button tmp50 = __ui__widget22;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(75)
						defaultsFn(tmp50).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(78)
		__ui__widget22->set_h((int)50);
		HX_STACK_LINE(79)
		__ui__widget22->set_text(HX_HCSTRING("*","\x2a","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_3,Array< Float >,numA,Array< int >,_operator)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","MathSignsOne.xml",80,0xdfd2fae1)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(80)
				_operator[(int)0] = (int)3;
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Text tmp42;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::haxe::ds::StringMap tmp43 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp44 = tmp43->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget w = tmp44;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp45 = w;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(80)
					bool tmp46 = ::Std_obj::is(tmp45,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(80)
					if ((tmp46)){
						HX_STACK_LINE(80)
						tmp42 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(80)
						tmp42 = null();
					}
				}
				HX_STACK_LINE(80)
				::String tmp43 = tmp42->get_text();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(80)
				Float tmp44 = ::Std_obj::parseFloat(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(80)
				numA[(int)0] = tmp44;
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Text tmp45;		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::haxe::ds::StringMap tmp46 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp47 = tmp46->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget w = tmp47;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp48 = w;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(80)
					bool tmp49 = ::Std_obj::is(tmp48,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(80)
					if ((tmp49)){
						HX_STACK_LINE(80)
						tmp45 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(80)
						tmp45 = null();
					}
				}
				HX_STACK_LINE(80)
				tmp45->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(80)
		__ui__widget22->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_3(numA,_operator)),null(),null(),null());
		HX_STACK_LINE(81)
		__ui__widget22->set_w((int)50);
		HX_STACK_LINE(82)
		::ru::stablex::ui::skins::Skin tmp42 = __ui__widget22->skin;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(82)
		bool tmp43 = ::Std_obj::is(tmp42,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(82)
		bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(82)
		if ((tmp44)){
			HX_STACK_LINE(83)
			::ru::stablex::ui::skins::Paint tmp45 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(83)
			__ui__widget22->skin = tmp45;
			HX_STACK_LINE(84)
			::ru::stablex::ui::skins::Skin tmp46 = __ui__widget22->skin;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(84)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp46);
		}
		HX_STACK_LINE(86)
		::ru::stablex::ui::skins::Paint tmp45;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(86)
		tmp45 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget22->skin);
		HX_STACK_LINE(86)
		tmp45->border = (int)1;
		HX_STACK_LINE(87)
		::ru::stablex::ui::widgets::Button tmp46 = __ui__widget22;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(87)
		bool tmp47 = ::Std_obj::is(tmp46,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(87)
		if ((tmp47)){
			HX_STACK_LINE(88)
			::ru::stablex::ui::widgets::Widget tmp48;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(88)
			tmp48 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget22);
			HX_STACK_LINE(88)
			tmp48->_onInitialize();
		}
		HX_STACK_LINE(90)
		::ru::stablex::ui::widgets::Button tmp48 = __ui__widget22;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(90)
		bool tmp49 = ::Std_obj::is(tmp48,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(90)
		if ((tmp49)){
			HX_STACK_LINE(91)
			::ru::stablex::ui::widgets::Widget tmp50;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(91)
			tmp50 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget22);
			HX_STACK_LINE(91)
			tmp50->_onCreate();
		}
		HX_STACK_LINE(93)
		::ru::stablex::ui::widgets::Button tmp50 = __ui__widget22;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(93)
		__ui__widget1->addChild(tmp50);
		HX_STACK_LINE(94)
		::ru::stablex::ui::widgets::VBox tmp51 = __ui__widget1;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(94)
		bool tmp52 = ::Std_obj::is(tmp51,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(94)
		if ((tmp52)){
			HX_STACK_LINE(95)
			::ru::stablex::ui::widgets::Widget tmp53;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(95)
			tmp53 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(95)
			tmp53->_onCreate();
		}
		HX_STACK_LINE(97)
		::ru::stablex::ui::widgets::VBox tmp53 = __ui__widget1;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(97)
		tmp9 = tmp53;
	}
	HX_STACK_LINE(30)
	tmp8->addChild(tmp9);
	HX_STACK_LINE(31)
	::openfl::display::MovieClip tmp10 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1)
	::ru::stablex::ui::widgets::VBox tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1)
	{
		HX_STACK_LINE(31)
		Dynamic __ui__arguments = null();		HX_STACK_VAR(__ui__arguments,"__ui__arguments");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::VBox tmp12 = ::ru::stablex::ui::widgets::VBox_obj::__new();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::VBox __ui__widget1 = tmp12;		HX_STACK_VAR(__ui__widget1,"__ui__widget1");
		HX_STACK_LINE(3)
		::haxe::ds::StringMap tmp13 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(3)
		bool tmp14 = tmp13->exists(HX_HCSTRING("VBox","\x55","\xcf","\x0a","\x39"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(3)
		if ((tmp14)){
			HX_STACK_LINE(4)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp15 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp16 = tmp15->get(HX_HCSTRING("VBox","\x55","\xcf","\x0a","\x39"));		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap defFns = tmp16;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(6)
			{
				HX_STACK_LINE(6)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(6)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(6)
				while((true)){
					HX_STACK_LINE(6)
					bool tmp17 = (_g1 < _g);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(6)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(6)
					if ((tmp18)){
						HX_STACK_LINE(6)
						break;
					}
					HX_STACK_LINE(6)
					int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(6)
					int i = tmp19;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(7)
					::String tmp20 = defs->__get(i);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(7)
					Dynamic tmp21 = defFns->get(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(7)
					Dynamic defaultsFn = tmp21;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(8)
					bool tmp22 = (defaultsFn != null());		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(8)
					if ((tmp22)){
						HX_STACK_LINE(8)
						::ru::stablex::ui::widgets::VBox tmp23 = __ui__widget1;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(8)
						defaultsFn(tmp23).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(11)
		__ui__widget1->set_top((int)100);
		HX_STACK_LINE(12)
		__ui__widget1->set_left((int)230);
		HX_STACK_LINE(13)
		::ru::stablex::ui::widgets::VBox tmp15 = __ui__widget1;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(13)
		bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(13)
		if ((tmp16)){
			HX_STACK_LINE(14)
			::ru::stablex::ui::widgets::Widget tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(14)
			tmp17 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(14)
			tmp17->_onInitialize();
		}
		HX_STACK_LINE(17)
		::ru::stablex::ui::widgets::Button tmp17 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(17)
		::ru::stablex::ui::widgets::Button __ui__widget2 = tmp17;		HX_STACK_VAR(__ui__widget2,"__ui__widget2");
		HX_STACK_LINE(18)
		::haxe::ds::StringMap tmp18 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(18)
		bool tmp19 = tmp18->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(18)
		if ((tmp19)){
			HX_STACK_LINE(19)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp20 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap tmp21 = tmp20->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(20)
			::haxe::ds::StringMap defFns = tmp21;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(21)
			{
				HX_STACK_LINE(21)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(21)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(21)
				while((true)){
					HX_STACK_LINE(21)
					bool tmp22 = (_g1 < _g);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(21)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(21)
					if ((tmp23)){
						HX_STACK_LINE(21)
						break;
					}
					HX_STACK_LINE(21)
					int tmp24 = (_g1)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(21)
					int i = tmp24;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(22)
					::String tmp25 = defs->__get(i);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(22)
					Dynamic tmp26 = defFns->get(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(22)
					Dynamic defaultsFn = tmp26;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(23)
					bool tmp27 = (defaultsFn != null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(23)
					if ((tmp27)){
						HX_STACK_LINE(23)
						::ru::stablex::ui::widgets::Button tmp28 = __ui__widget2;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(23)
						defaultsFn(tmp28).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(26)
		__ui__widget2->set_h((int)50);
		HX_STACK_LINE(27)
		__ui__widget2->set_text(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< Float >,numA,Array< int >,_operator)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","MathSignsTwo.xml",28,0x0af65907)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(28)
				_operator[(int)0] = (int)4;
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Text tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					::haxe::ds::StringMap tmp21 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp22 = tmp21->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget w = tmp22;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp23 = w;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(28)
					bool tmp24 = ::Std_obj::is(tmp23,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(28)
					if ((tmp24)){
						HX_STACK_LINE(28)
						tmp20 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(28)
						tmp20 = null();
					}
				}
				HX_STACK_LINE(28)
				::String tmp21 = tmp20->get_text();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(28)
				Float tmp22 = ::Std_obj::parseFloat(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(28)
				numA[(int)0] = tmp22;
				HX_STACK_LINE(28)
				::ru::stablex::ui::widgets::Text tmp23;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(28)
				{
					HX_STACK_LINE(28)
					::haxe::ds::StringMap tmp24 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp25 = tmp24->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget w = tmp25;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(28)
					::ru::stablex::ui::widgets::Widget tmp26 = w;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(28)
					bool tmp27 = ::Std_obj::is(tmp26,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(28)
					if ((tmp27)){
						HX_STACK_LINE(28)
						tmp23 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(28)
						tmp23 = null();
					}
				}
				HX_STACK_LINE(28)
				tmp23->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(28)
		__ui__widget2->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_1(numA,_operator)),null(),null(),null());
		HX_STACK_LINE(29)
		__ui__widget2->set_w((int)50);
		HX_STACK_LINE(30)
		::ru::stablex::ui::skins::Skin tmp20 = __ui__widget2->skin;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(30)
		bool tmp21 = ::Std_obj::is(tmp20,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(30)
		bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(30)
		if ((tmp22)){
			HX_STACK_LINE(31)
			::ru::stablex::ui::skins::Paint tmp23 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(31)
			__ui__widget2->skin = tmp23;
			HX_STACK_LINE(32)
			::ru::stablex::ui::skins::Skin tmp24 = __ui__widget2->skin;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(32)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp24);
		}
		HX_STACK_LINE(34)
		::ru::stablex::ui::skins::Paint tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(34)
		tmp23 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget2->skin);
		HX_STACK_LINE(34)
		tmp23->border = (int)1;
		HX_STACK_LINE(35)
		::ru::stablex::ui::widgets::Button tmp24 = __ui__widget2;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(35)
		bool tmp25 = ::Std_obj::is(tmp24,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(35)
		if ((tmp25)){
			HX_STACK_LINE(36)
			::ru::stablex::ui::widgets::Widget tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(36)
			tmp26 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget2);
			HX_STACK_LINE(36)
			tmp26->_onInitialize();
		}
		HX_STACK_LINE(38)
		::ru::stablex::ui::widgets::Button tmp26 = __ui__widget2;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(38)
		bool tmp27 = ::Std_obj::is(tmp26,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(38)
		if ((tmp27)){
			HX_STACK_LINE(39)
			::ru::stablex::ui::widgets::Widget tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(39)
			tmp28 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget2);
			HX_STACK_LINE(39)
			tmp28->_onCreate();
		}
		HX_STACK_LINE(41)
		::ru::stablex::ui::widgets::Button tmp28 = __ui__widget2;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(41)
		__ui__widget1->addChild(tmp28);
		HX_STACK_LINE(43)
		::ru::stablex::ui::widgets::Button tmp29 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(43)
		::ru::stablex::ui::widgets::Button __ui__widget21 = tmp29;		HX_STACK_VAR(__ui__widget21,"__ui__widget21");
		HX_STACK_LINE(44)
		::haxe::ds::StringMap tmp30 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(44)
		bool tmp31 = tmp30->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(44)
		if ((tmp31)){
			HX_STACK_LINE(45)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp32 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp33 = tmp32->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap defFns = tmp33;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(47)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(47)
				while((true)){
					HX_STACK_LINE(47)
					bool tmp34 = (_g1 < _g);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(47)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(47)
					if ((tmp35)){
						HX_STACK_LINE(47)
						break;
					}
					HX_STACK_LINE(47)
					int tmp36 = (_g1)++;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(47)
					int i = tmp36;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(48)
					::String tmp37 = defs->__get(i);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(48)
					Dynamic tmp38 = defFns->get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(48)
					Dynamic defaultsFn = tmp38;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(49)
					bool tmp39 = (defaultsFn != null());		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(49)
					if ((tmp39)){
						HX_STACK_LINE(49)
						::ru::stablex::ui::widgets::Button tmp40 = __ui__widget21;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(49)
						defaultsFn(tmp40).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(52)
		__ui__widget21->set_h((int)50);
		HX_STACK_LINE(53)
		__ui__widget21->set_text(HX_HCSTRING("C","\x43","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< Float >,numA)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","MathSignsTwo.xml",54,0x0af65907)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(54)
				::ru::stablex::ui::widgets::Text tmp32;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					::haxe::ds::StringMap tmp33 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp34 = tmp33->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget w = tmp34;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(54)
					::ru::stablex::ui::widgets::Widget tmp35 = w;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(54)
					bool tmp36 = ::Std_obj::is(tmp35,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(54)
					if ((tmp36)){
						HX_STACK_LINE(54)
						tmp32 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(54)
						tmp32 = null();
					}
				}
				HX_STACK_LINE(54)
				tmp32->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				HX_STACK_LINE(54)
				numA[(int)0] = (int)0;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(54)
		__ui__widget21->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_2(numA)),null(),null(),null());
		HX_STACK_LINE(55)
		__ui__widget21->set_w((int)50);
		HX_STACK_LINE(56)
		::ru::stablex::ui::skins::Skin tmp32 = __ui__widget21->skin;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(56)
		bool tmp33 = ::Std_obj::is(tmp32,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(56)
		bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(56)
		if ((tmp34)){
			HX_STACK_LINE(57)
			::ru::stablex::ui::skins::Paint tmp35 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(57)
			__ui__widget21->skin = tmp35;
			HX_STACK_LINE(58)
			::ru::stablex::ui::skins::Skin tmp36 = __ui__widget21->skin;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(58)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp36);
		}
		HX_STACK_LINE(60)
		::ru::stablex::ui::skins::Paint tmp35;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(60)
		tmp35 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget21->skin);
		HX_STACK_LINE(60)
		tmp35->border = (int)1;
		HX_STACK_LINE(61)
		::ru::stablex::ui::widgets::Button tmp36 = __ui__widget21;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(61)
		bool tmp37 = ::Std_obj::is(tmp36,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(61)
		if ((tmp37)){
			HX_STACK_LINE(62)
			::ru::stablex::ui::widgets::Widget tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(62)
			tmp38 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget21);
			HX_STACK_LINE(62)
			tmp38->_onInitialize();
		}
		HX_STACK_LINE(64)
		::ru::stablex::ui::widgets::Button tmp38 = __ui__widget21;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(64)
		bool tmp39 = ::Std_obj::is(tmp38,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(64)
		if ((tmp39)){
			HX_STACK_LINE(65)
			::ru::stablex::ui::widgets::Widget tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(65)
			tmp40 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget21);
			HX_STACK_LINE(65)
			tmp40->_onCreate();
		}
		HX_STACK_LINE(67)
		::ru::stablex::ui::widgets::Button tmp40 = __ui__widget21;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(67)
		__ui__widget1->addChild(tmp40);
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Button tmp41 = ::ru::stablex::ui::widgets::Button_obj::__new();		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(69)
		::ru::stablex::ui::widgets::Button __ui__widget22 = tmp41;		HX_STACK_VAR(__ui__widget22,"__ui__widget22");
		HX_STACK_LINE(70)
		::haxe::ds::StringMap tmp42 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(70)
		bool tmp43 = tmp42->exists(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(70)
		if ((tmp43)){
			HX_STACK_LINE(71)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp44 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp45 = tmp44->get(HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e"));		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(72)
			::haxe::ds::StringMap defFns = tmp45;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(73)
			{
				HX_STACK_LINE(73)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(73)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(73)
				while((true)){
					HX_STACK_LINE(73)
					bool tmp46 = (_g1 < _g);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(73)
					bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(73)
					if ((tmp47)){
						HX_STACK_LINE(73)
						break;
					}
					HX_STACK_LINE(73)
					int tmp48 = (_g1)++;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(73)
					int i = tmp48;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(74)
					::String tmp49 = defs->__get(i);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(74)
					Dynamic tmp50 = defFns->get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(74)
					Dynamic defaultsFn = tmp50;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(75)
					bool tmp51 = (defaultsFn != null());		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(75)
					if ((tmp51)){
						HX_STACK_LINE(75)
						::ru::stablex::ui::widgets::Button tmp52 = __ui__widget22;		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(75)
						defaultsFn(tmp52).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(78)
		__ui__widget22->set_h((int)50);
		HX_STACK_LINE(79)
		__ui__widget22->set_text(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_2_3,Array< Float >,answer,Array< Float >,numB,Array< Float >,numA,Array< int >,_operator)
		int __ArgCount() const { return 1; }
		Void run(::openfl::events::MouseEvent event){
			HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","MathSignsTwo.xml",80,0x0af65907)
			HX_STACK_ARG(event,"event")
			{
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Text tmp44;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::haxe::ds::StringMap tmp45 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp46 = tmp45->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget w = tmp46;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp47 = w;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(80)
					bool tmp48 = ::Std_obj::is(tmp47,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(80)
					if ((tmp48)){
						HX_STACK_LINE(80)
						tmp44 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(80)
						tmp44 = null();
					}
				}
				HX_STACK_LINE(80)
				::String tmp45 = tmp44->get_text();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(80)
				Float tmp46 = ::Std_obj::parseFloat(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(80)
				numB[(int)0] = tmp46;
				HX_STACK_LINE(80)
				::ru::stablex::ui::widgets::Text tmp47;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::haxe::ds::StringMap tmp48 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp49 = tmp48->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget w = tmp49;		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(80)
					::ru::stablex::ui::widgets::Widget tmp50 = w;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(80)
					bool tmp51 = ::Std_obj::is(tmp50,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(80)
					if ((tmp51)){
						HX_STACK_LINE(80)
						tmp47 = ((::ru::stablex::ui::widgets::Text)(w));
					}
					else{
						HX_STACK_LINE(80)
						tmp47 = null();
					}
				}
				HX_STACK_LINE(80)
				tmp47->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
				HX_STACK_LINE(83)
				int tmp48 = _operator->__get((int)0);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(83)
				switch( (int)(tmp48)){
					case (int)1: {
						HX_STACK_LINE(87)
						Float tmp49 = (numA->__get((int)0) + numB->__get((int)0));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(87)
						answer[(int)0] = tmp49;
						HX_STACK_LINE(88)
						::ru::stablex::ui::widgets::Text tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(88)
						{
							HX_STACK_LINE(88)
							::haxe::ds::StringMap tmp51 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(88)
							::ru::stablex::ui::widgets::Widget tmp52 = tmp51->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(88)
							::ru::stablex::ui::widgets::Widget w = tmp52;		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(88)
							::ru::stablex::ui::widgets::Widget tmp53 = w;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(88)
							bool tmp54 = ::Std_obj::is(tmp53,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(88)
							if ((tmp54)){
								HX_STACK_LINE(88)
								tmp50 = ((::ru::stablex::ui::widgets::Text)(w));
							}
							else{
								HX_STACK_LINE(88)
								tmp50 = null();
							}
						}
						HX_STACK_LINE(88)
						Float tmp51 = answer->__get((int)0);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(88)
						::String tmp52 = ::Std_obj::string(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(88)
						tmp50->set_text(tmp52);
						HX_STACK_LINE(89)
						answer[(int)0] = (int)0;
						HX_STACK_LINE(90)
						numA[(int)0] = (int)0;
						HX_STACK_LINE(91)
						numB[(int)0] = (int)0;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(96)
						Float tmp49 = (numA->__get((int)0) - numB->__get((int)0));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(96)
						answer[(int)0] = tmp49;
						HX_STACK_LINE(97)
						::ru::stablex::ui::widgets::Text tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(97)
						{
							HX_STACK_LINE(97)
							::haxe::ds::StringMap tmp51 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(97)
							::ru::stablex::ui::widgets::Widget tmp52 = tmp51->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(97)
							::ru::stablex::ui::widgets::Widget w = tmp52;		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(97)
							::ru::stablex::ui::widgets::Widget tmp53 = w;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(97)
							bool tmp54 = ::Std_obj::is(tmp53,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(97)
							if ((tmp54)){
								HX_STACK_LINE(97)
								tmp50 = ((::ru::stablex::ui::widgets::Text)(w));
							}
							else{
								HX_STACK_LINE(97)
								tmp50 = null();
							}
						}
						HX_STACK_LINE(97)
						Float tmp51 = answer->__get((int)0);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(97)
						::String tmp52 = ::Std_obj::string(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(97)
						tmp50->set_text(tmp52);
						HX_STACK_LINE(98)
						answer[(int)0] = (int)0;
						HX_STACK_LINE(99)
						numA[(int)0] = (int)0;
						HX_STACK_LINE(100)
						numB[(int)0] = (int)0;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(105)
						Float tmp49 = (numA->__get((int)0) * numB->__get((int)0));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(105)
						answer[(int)0] = tmp49;
						HX_STACK_LINE(106)
						::ru::stablex::ui::widgets::Text tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(106)
						{
							HX_STACK_LINE(106)
							::haxe::ds::StringMap tmp51 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(106)
							::ru::stablex::ui::widgets::Widget tmp52 = tmp51->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(106)
							::ru::stablex::ui::widgets::Widget w = tmp52;		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(106)
							::ru::stablex::ui::widgets::Widget tmp53 = w;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(106)
							bool tmp54 = ::Std_obj::is(tmp53,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(106)
							if ((tmp54)){
								HX_STACK_LINE(106)
								tmp50 = ((::ru::stablex::ui::widgets::Text)(w));
							}
							else{
								HX_STACK_LINE(106)
								tmp50 = null();
							}
						}
						HX_STACK_LINE(106)
						Float tmp51 = answer->__get((int)0);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(106)
						::String tmp52 = ::Std_obj::string(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(106)
						tmp50->set_text(tmp52);
						HX_STACK_LINE(107)
						answer[(int)0] = (int)0;
						HX_STACK_LINE(108)
						numA[(int)0] = (int)0;
						HX_STACK_LINE(109)
						numB[(int)0] = (int)0;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(114)
						Float tmp49 = (Float(numA->__get((int)0)) / Float(numB->__get((int)0)));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(114)
						answer[(int)0] = tmp49;
						HX_STACK_LINE(115)
						::ru::stablex::ui::widgets::Text tmp50;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(115)
						{
							HX_STACK_LINE(115)
							::haxe::ds::StringMap tmp51 = ::ru::stablex::ui::UIBuilder_obj::_objects;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(115)
							::ru::stablex::ui::widgets::Widget tmp52 = tmp51->get(HX_HCSTRING("Nums","\x8d","\xcb","\xe7","\x33"));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(115)
							::ru::stablex::ui::widgets::Widget w = tmp52;		HX_STACK_VAR(w,"w");
							HX_STACK_LINE(115)
							::ru::stablex::ui::widgets::Widget tmp53 = w;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(115)
							bool tmp54 = ::Std_obj::is(tmp53,hx::ClassOf< ::ru::stablex::ui::widgets::Text >());		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(115)
							if ((tmp54)){
								HX_STACK_LINE(115)
								tmp50 = ((::ru::stablex::ui::widgets::Text)(w));
							}
							else{
								HX_STACK_LINE(115)
								tmp50 = null();
							}
						}
						HX_STACK_LINE(115)
						Float tmp51 = answer->__get((int)0);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(115)
						::String tmp52 = ::Std_obj::string(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(115)
						tmp50->set_text(tmp52);
						HX_STACK_LINE(116)
						answer[(int)0] = (int)0;
						HX_STACK_LINE(117)
						numA[(int)0] = (int)0;
						HX_STACK_LINE(118)
						numB[(int)0] = (int)0;
					}
					;break;
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(80)
		__ui__widget22->addEventListener(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"), Dynamic(new _Function_2_3(answer,numB,numA,_operator)),null(),null(),null());
		HX_STACK_LINE(126)
		__ui__widget22->set_w((int)50);
		HX_STACK_LINE(127)
		::ru::stablex::ui::skins::Skin tmp44 = __ui__widget22->skin;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(127)
		bool tmp45 = ::Std_obj::is(tmp44,hx::ClassOf< ::ru::stablex::ui::skins::Paint >());		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(127)
		bool tmp46 = !(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(127)
		if ((tmp46)){
			HX_STACK_LINE(128)
			::ru::stablex::ui::skins::Paint tmp47 = ::ru::stablex::ui::skins::Paint_obj::__new();		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(128)
			__ui__widget22->skin = tmp47;
			HX_STACK_LINE(129)
			::ru::stablex::ui::skins::Skin tmp48 = __ui__widget22->skin;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(129)
			::ru::stablex::ui::UIBuilder_obj::initCreatedWidget(tmp48);
		}
		HX_STACK_LINE(131)
		::ru::stablex::ui::skins::Paint tmp47;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(131)
		tmp47 = hx::TCast< ::ru::stablex::ui::skins::Paint >::cast(__ui__widget22->skin);
		HX_STACK_LINE(131)
		tmp47->border = (int)1;
		HX_STACK_LINE(132)
		::ru::stablex::ui::widgets::Button tmp48 = __ui__widget22;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(132)
		bool tmp49 = ::Std_obj::is(tmp48,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(132)
		if ((tmp49)){
			HX_STACK_LINE(133)
			::ru::stablex::ui::widgets::Widget tmp50;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(133)
			tmp50 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget22);
			HX_STACK_LINE(133)
			tmp50->_onInitialize();
		}
		HX_STACK_LINE(135)
		::ru::stablex::ui::widgets::Button tmp50 = __ui__widget22;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(135)
		bool tmp51 = ::Std_obj::is(tmp50,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(135)
		if ((tmp51)){
			HX_STACK_LINE(136)
			::ru::stablex::ui::widgets::Widget tmp52;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(136)
			tmp52 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget22);
			HX_STACK_LINE(136)
			tmp52->_onCreate();
		}
		HX_STACK_LINE(138)
		::ru::stablex::ui::widgets::Button tmp52 = __ui__widget22;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(138)
		__ui__widget1->addChild(tmp52);
		HX_STACK_LINE(139)
		::ru::stablex::ui::widgets::VBox tmp53 = __ui__widget1;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(139)
		bool tmp54 = ::Std_obj::is(tmp53,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(139)
		if ((tmp54)){
			HX_STACK_LINE(140)
			::ru::stablex::ui::widgets::Widget tmp55;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(140)
			tmp55 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(140)
			tmp55->_onCreate();
		}
		HX_STACK_LINE(142)
		::ru::stablex::ui::widgets::VBox tmp55 = __ui__widget1;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(142)
		tmp11 = tmp55;
	}
	HX_STACK_LINE(31)
	tmp10->addChild(tmp11);
	HX_STACK_LINE(32)
	::openfl::display::MovieClip tmp12 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1)
	::ru::stablex::ui::widgets::Text tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1)
	{
		HX_STACK_LINE(32)
		Dynamic __ui__arguments = null();		HX_STACK_VAR(__ui__arguments,"__ui__arguments");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::Text tmp14 = ::ru::stablex::ui::widgets::Text_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(2)
		::ru::stablex::ui::widgets::Text __ui__widget1 = tmp14;		HX_STACK_VAR(__ui__widget1,"__ui__widget1");
		HX_STACK_LINE(3)
		::haxe::ds::StringMap tmp15 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(3)
		bool tmp16 = tmp15->exists(HX_HCSTRING("Text","\xcd","\xf8","\xd2","\x37"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(3)
		if ((tmp16)){
			HX_STACK_LINE(4)
			Array< ::String > defs = HX_HCSTRING("Default","\xa1","\x00","\x15","\x69").split(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(defs,"defs");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp17 = ::ru::stablex::ui::UIBuilder_obj::defaults;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap tmp18 = tmp17->get(HX_HCSTRING("Text","\xcd","\xf8","\xd2","\x37"));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(5)
			::haxe::ds::StringMap defFns = tmp18;		HX_STACK_VAR(defFns,"defFns");
			HX_STACK_LINE(6)
			{
				HX_STACK_LINE(6)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(6)
				int _g = defs->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(6)
				while((true)){
					HX_STACK_LINE(6)
					bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(6)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(6)
					if ((tmp20)){
						HX_STACK_LINE(6)
						break;
					}
					HX_STACK_LINE(6)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(6)
					int i = tmp21;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(7)
					::String tmp22 = defs->__get(i);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(7)
					Dynamic tmp23 = defFns->get(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(7)
					Dynamic defaultsFn = tmp23;		HX_STACK_VAR(defaultsFn,"defaultsFn");
					HX_STACK_LINE(8)
					bool tmp24 = (defaultsFn != null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(8)
					if ((tmp24)){
						HX_STACK_LINE(8)
						::ru::stablex::ui::widgets::Text tmp25 = __ui__widget1;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(8)
						defaultsFn(tmp25).Cast< Void >();
					}
				}
			}
		}
		HX_STACK_LINE(11)
		__ui__widget1->set_top((int)260);
		HX_STACK_LINE(12)
		__ui__widget1->set_text(HX_HCSTRING("A Haxe GUI Calculator By Anguel Esperanza \n using Haxe, Stablexui, HaxeDevelop","\x8e","\x9a","\x54","\x27"));
		HX_STACK_LINE(13)
		__ui__widget1->set_left((int)30);
		HX_STACK_LINE(14)
		::ru::stablex::ui::widgets::Text tmp17 = __ui__widget1;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(14)
		bool tmp18 = ::Std_obj::is(tmp17,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(14)
		if ((tmp18)){
			HX_STACK_LINE(15)
			::ru::stablex::ui::widgets::Widget tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(15)
			tmp19 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(15)
			tmp19->_onInitialize();
		}
		HX_STACK_LINE(17)
		::ru::stablex::ui::widgets::Text tmp19 = __ui__widget1;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(17)
		bool tmp20 = ::Std_obj::is(tmp19,hx::ClassOf< ::ru::stablex::ui::widgets::Widget >());		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(17)
		if ((tmp20)){
			HX_STACK_LINE(18)
			::ru::stablex::ui::widgets::Widget tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(18)
			tmp21 = hx::TCast< ::ru::stablex::ui::widgets::Widget >::cast(__ui__widget1);
			HX_STACK_LINE(18)
			tmp21->_onCreate();
		}
		HX_STACK_LINE(20)
		::ru::stablex::ui::widgets::Text tmp21 = __ui__widget1;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(20)
		tmp13 = tmp21;
	}
	HX_STACK_LINE(32)
	tmp12->addChild(tmp13);
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}


Main_obj::Main_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

