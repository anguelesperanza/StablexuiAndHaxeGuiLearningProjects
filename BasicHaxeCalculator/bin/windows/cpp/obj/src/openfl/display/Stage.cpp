#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void
#include <lime/app/Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_ConsoleRenderContext
#include <lime/graphics/ConsoleRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif
#ifndef INCLUDED_lime_ui_Mouse
#include <lime/ui/Mouse.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Touch
#include <lime/ui/Touch.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_ui__KeyModifier_KeyModifier_Impl_
#include <lime/ui/_KeyModifier/KeyModifier_Impl_.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoRenderer
#include <openfl/_internal/renderer/cairo/CairoRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasRenderer
#include <openfl/_internal/renderer/canvas/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_console_ConsoleRenderer
#include <openfl/_internal/renderer/console/ConsoleRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMRenderer
#include <openfl/_internal/renderer/dom/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_FullScreenEvent
#include <openfl/events/FullScreenEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TouchEvent
#include <openfl/events/TouchEvent.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInput
#include <openfl/ui/GameInput.h>
#endif
#ifndef INCLUDED_openfl_ui_Keyboard
#include <openfl/ui/Keyboard.h>
#endif
namespace openfl{
namespace display{

Void Stage_obj::__construct(::lime::ui::Window window,Dynamic color)
{
HX_STACK_FRAME("openfl.display.Stage","new",0x908e7106,"openfl.display.Stage.new","openfl/display/Stage.hx",128,0xadca4c2c)
HX_STACK_THIS(this)
HX_STACK_ARG(window,"window")
HX_STACK_ARG(color,"color")
{
	HX_STACK_LINE(134)
	super::__construct();
	HX_STACK_LINE(136)
	this->application = window->application;
	HX_STACK_LINE(137)
	this->window = window;
	HX_STACK_LINE(139)
	bool tmp = (color == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	if ((tmp)){
		HX_STACK_LINE(141)
		this->__transparent = true;
		HX_STACK_LINE(142)
		this->set_color((int)0);
	}
	else{
		HX_STACK_LINE(146)
		Dynamic tmp1 = color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(146)
		this->set_color(tmp1);
	}
	HX_STACK_LINE(150)
	this->set_name(null());
	HX_STACK_LINE(152)
	this->__deltaTime = (int)0;
	HX_STACK_LINE(153)
	this->__displayState = ((Dynamic)((int)2));
	HX_STACK_LINE(154)
	this->__mouseX = (int)0;
	HX_STACK_LINE(155)
	this->__mouseY = (int)0;
	HX_STACK_LINE(156)
	this->__lastClickTime = (int)0;
	HX_STACK_LINE(158)
	Float tmp1 = (window->__width * window->__scale);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	this->stageWidth = tmp2;
	HX_STACK_LINE(159)
	Float tmp3 = (window->__height * window->__scale);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(159)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(159)
	this->stageHeight = tmp4;
	HX_STACK_LINE(161)
	this->stage = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(163)
	this->align = ((Dynamic)((int)6));
	HX_STACK_LINE(168)
	this->allowsFullScreen = true;
	HX_STACK_LINE(169)
	this->allowsFullScreenInteractive = true;
	HX_STACK_LINE(171)
	this->quality = ((Dynamic)((int)1));
	HX_STACK_LINE(172)
	this->scaleMode = ((Dynamic)((int)2));
	HX_STACK_LINE(173)
	this->stageFocusRect = true;
	HX_STACK_LINE(181)
	this->__clearBeforeRender = true;
	HX_STACK_LINE(182)
	this->__stack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(183)
	this->__mouseOutStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(185)
	Array< ::Dynamic > tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		Array< ::Dynamic > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(185)
		this1 = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(185)
		this1->__SetSizeExact(null());
		HX_STACK_LINE(185)
		tmp5 = this1;
	}
	HX_STACK_LINE(185)
	this->stage3Ds = tmp5;
	HX_STACK_LINE(186)
	{
		HX_STACK_LINE(186)
		::openfl::display::Stage3D tmp6 = ::openfl::display::Stage3D_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(186)
		::openfl::display::Stage3D x = tmp6;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(186)
		Array< ::Dynamic > tmp7 = this->stage3Ds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(186)
		::openfl::display::Stage3D tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(186)
		tmp7->push(tmp8);
	}
	HX_STACK_LINE(188)
	::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(188)
	::openfl::display::Stage tmp7 = tmp6->stage;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(188)
	bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(188)
	if ((tmp8)){
		HX_STACK_LINE(190)
		::openfl::display::Stage tmp9 = this->stage;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(190)
		::openfl::display::MovieClip tmp10 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(190)
		tmp9->addChild(tmp10);
	}
}
;
	return null();
}

//Stage_obj::~Stage_obj() { }

Dynamic Stage_obj::__CreateEmpty() { return  new Stage_obj; }
hx::ObjectPtr< Stage_obj > Stage_obj::__new(::lime::ui::Window window,Dynamic color)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(window,color);
	return _result_;}

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *Stage_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::lime::app::IModule_obj)) return operator ::lime::app::IModule_obj *();
	return super::__ToInterface(inType);
}

Stage_obj::operator ::lime::app::IModule_obj *()
	{ return new ::lime::app::IModule_delegate_< Stage_obj >(this); }
::openfl::geom::Point Stage_obj::globalToLocal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.Stage","globalToLocal",0xdbaa7af3,"openfl.display.Stage.globalToLocal","openfl/display/Stage.hx",197,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(199)
	::openfl::geom::Point tmp = pos->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	return tmp;
}


Void Stage_obj::invalidate( ){
{
		HX_STACK_FRAME("openfl.display.Stage","invalidate",0x70397995,"openfl.display.Stage.invalidate","openfl/display/Stage.hx",206,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(206)
		this->__invalidated = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,invalidate,(void))

::openfl::geom::Point Stage_obj::localToGlobal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.Stage","localToGlobal",0xb7e76def,"openfl.display.Stage.localToGlobal","openfl/display/Stage.hx",211,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(213)
	::openfl::geom::Point tmp = pos->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(213)
	return tmp;
}


Void Stage_obj::onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadAxisMove",0xc5912eda,"openfl.display.Stage.onGamepadAxisMove","openfl/display/Stage.hx",218,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(220)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		int tmp1 = axis;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		::openfl::ui::GameInput_obj::__onGamepadAxisMove(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onGamepadAxisMove,(void))

Void Stage_obj::onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadButtonDown",0xf94bb7fc,"openfl.display.Stage.onGamepadButtonDown","openfl/display/Stage.hx",225,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(227)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		::openfl::ui::GameInput_obj::__onGamepadButtonDown(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onGamepadButtonDown,(void))

Void Stage_obj::onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadButtonUp",0x91cf2b75,"openfl.display.Stage.onGamepadButtonUp","openfl/display/Stage.hx",232,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(234)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		int tmp1 = button;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		::openfl::ui::GameInput_obj::__onGamepadButtonUp(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onGamepadButtonUp,(void))

Void Stage_obj::onGamepadConnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadConnect",0xd0dcc662,"openfl.display.Stage.onGamepadConnect","openfl/display/Stage.hx",239,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(241)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(241)
		::openfl::ui::GameInput_obj::__onGamepadConnect(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onGamepadConnect,(void))

Void Stage_obj::onGamepadDisconnect( ::lime::ui::Gamepad gamepad){
{
		HX_STACK_FRAME("openfl.display.Stage","onGamepadDisconnect",0xb62bb4e4,"openfl.display.Stage.onGamepadDisconnect","openfl/display/Stage.hx",246,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gamepad,"gamepad")
		HX_STACK_LINE(248)
		::lime::ui::Gamepad tmp = gamepad;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(248)
		::openfl::ui::GameInput_obj::__onGamepadDisconnect(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onGamepadDisconnect,(void))

Void Stage_obj::onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickAxisMove",0x5fc8fe87,"openfl.display.Stage.onJoystickAxisMove","openfl/display/Stage.hx",253,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickAxisMove,(void))

Void Stage_obj::onJoystickButtonDown( ::lime::ui::Joystick joystick,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickButtonDown",0x6cd88ce9,"openfl.display.Stage.onJoystickButtonDown","openfl/display/Stage.hx",260,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onJoystickButtonDown,(void))

Void Stage_obj::onJoystickButtonUp( ::lime::ui::Joystick joystick,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickButtonUp",0x2c06fb22,"openfl.display.Stage.onJoystickButtonUp","openfl/display/Stage.hx",267,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(button,"button")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onJoystickButtonUp,(void))

Void Stage_obj::onJoystickConnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickConnect",0x9b994b55,"openfl.display.Stage.onJoystickConnect","openfl/display/Stage.hx",274,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onJoystickConnect,(void))

Void Stage_obj::onJoystickDisconnect( ::lime::ui::Joystick joystick){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickDisconnect",0x29b889d1,"openfl.display.Stage.onJoystickDisconnect","openfl/display/Stage.hx",281,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onJoystickDisconnect,(void))

Void Stage_obj::onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickHatMove",0x3124a777,"openfl.display.Stage.onJoystickHatMove","openfl/display/Stage.hx",288,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(hat,"hat")
		HX_STACK_ARG(position,"position")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickHatMove,(void))

Void Stage_obj::onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float value){
{
		HX_STACK_FRAME("openfl.display.Stage","onJoystickTrackballMove",0x38b5dfe6,"openfl.display.Stage.onJoystickTrackballMove","openfl/display/Stage.hx",295,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(joystick,"joystick")
		HX_STACK_ARG(trackball,"trackball")
		HX_STACK_ARG(value,"value")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onJoystickTrackballMove,(void))

Void Stage_obj::onKeyDown( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","onKeyDown",0x4ccfc368,"openfl.display.Stage.onKeyDown","openfl/display/Stage.hx",302,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(304)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(304)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(304)
		if ((tmp2)){
			HX_STACK_LINE(304)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(304)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(304)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(304)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(304)
			tmp3 = true;
		}
		HX_STACK_LINE(304)
		if ((tmp3)){
			HX_STACK_LINE(304)
			return null();
		}
		HX_STACK_LINE(306)
		int tmp4 = keyCode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		int tmp5 = modifier;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(306)
		this->__onKey(HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onKeyDown,(void))

Void Stage_obj::onKeyUp( ::lime::ui::Window window,int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","onKeyUp",0x5bcb43e1,"openfl.display.Stage.onKeyUp","openfl/display/Stage.hx",311,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(313)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(313)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(313)
		if ((tmp2)){
			HX_STACK_LINE(313)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(313)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(313)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(313)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(313)
			tmp3 = true;
		}
		HX_STACK_LINE(313)
		if ((tmp3)){
			HX_STACK_LINE(313)
			return null();
		}
		HX_STACK_LINE(315)
		int tmp4 = keyCode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(315)
		int tmp5 = modifier;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(315)
		this->__onKey(HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onKeyUp,(void))

Void Stage_obj::onModuleExit( int code){
{
		HX_STACK_FRAME("openfl.display.Stage","onModuleExit",0xdf5eda83,"openfl.display.Stage.onModuleExit","openfl/display/Stage.hx",320,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(322)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(322)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(322)
		if ((tmp1)){
			HX_STACK_LINE(324)
			::openfl::events::Event tmp2 = ::openfl::events::Event_obj::__new(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(324)
			::openfl::events::Event event = tmp2;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(325)
			::openfl::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(325)
			this->__broadcast(tmp3,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onModuleExit,(void))

Void Stage_obj::onMouseDown( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseDown",0x156a4aae,"openfl.display.Stage.onMouseDown","openfl/display/Stage.hx",332,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(334)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(334)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(334)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(334)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(334)
		if ((tmp2)){
			HX_STACK_LINE(334)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(334)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(334)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(334)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(334)
			tmp3 = true;
		}
		HX_STACK_LINE(334)
		if ((tmp3)){
			HX_STACK_LINE(334)
			return null();
		}
		HX_STACK_LINE(336)
		int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(336)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(336)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(338)
				tmp5 = HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(339)
				tmp5 = HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd");
			}
			;break;
			default: {
				HX_STACK_LINE(340)
				tmp5 = HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee");
			}
		}
		HX_STACK_LINE(336)
		::String type = tmp5;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(344)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(344)
		Float tmp7 = (x * window->__scale);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(344)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(344)
		Float tmp9 = (y * window->__scale);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(344)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(344)
		int tmp11 = button;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(344)
		this->__onMouse(tmp6,tmp8,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onMouseDown,(void))

Void Stage_obj::onMouseMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseMove",0x1b5d355d,"openfl.display.Stage.onMouseMove","openfl/display/Stage.hx",349,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(351)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(351)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(351)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(351)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(351)
		if ((tmp2)){
			HX_STACK_LINE(351)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(351)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(351)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(351)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(351)
			tmp3 = true;
		}
		HX_STACK_LINE(351)
		if ((tmp3)){
			HX_STACK_LINE(351)
			return null();
		}
		HX_STACK_LINE(353)
		Float tmp4 = (x * window->__scale);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(353)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(353)
		Float tmp6 = (y * window->__scale);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(353)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(353)
		this->__onMouse(HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),tmp5,tmp7,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseMove,(void))

Void Stage_obj::onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseMoveRelative",0xec53d349,"openfl.display.Stage.onMouseMoveRelative","openfl/display/Stage.hx",358,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseMoveRelative,(void))

Void Stage_obj::onMouseUp( ::lime::ui::Window window,Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseUp",0x70fb4da7,"openfl.display.Stage.onMouseUp","openfl/display/Stage.hx",365,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(367)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(367)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(367)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(367)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(367)
		if ((tmp2)){
			HX_STACK_LINE(367)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(367)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(367)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(367)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(367)
			tmp3 = true;
		}
		HX_STACK_LINE(367)
		if ((tmp3)){
			HX_STACK_LINE(367)
			return null();
		}
		HX_STACK_LINE(369)
		int tmp4 = button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(369)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(369)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(371)
				tmp5 = HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a");
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(372)
				tmp5 = HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab");
			}
			;break;
			default: {
				HX_STACK_LINE(373)
				tmp5 = HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0");
			}
		}
		HX_STACK_LINE(369)
		::String type = tmp5;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(377)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(377)
		Float tmp7 = (x * window->__scale);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(377)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(377)
		Float tmp9 = (y * window->__scale);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(377)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(377)
		int tmp11 = button;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(377)
		this->__onMouse(tmp6,tmp8,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onMouseUp,(void))

Void Stage_obj::onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("openfl.display.Stage","onMouseWheel",0x9385e4cf,"openfl.display.Stage.onMouseWheel","openfl/display/Stage.hx",382,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(384)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(384)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(384)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(384)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(384)
		if ((tmp2)){
			HX_STACK_LINE(384)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(384)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(384)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(384)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(384)
			tmp3 = true;
		}
		HX_STACK_LINE(384)
		if ((tmp3)){
			HX_STACK_LINE(384)
			return null();
		}
		HX_STACK_LINE(386)
		Float tmp4 = (deltaX * window->__scale);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(386)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(386)
		Float tmp6 = (deltaY * window->__scale);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(386)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(386)
		this->__onMouseWheel(tmp5,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouseWheel,(void))

Void Stage_obj::onPreloadComplete( ){
{
		HX_STACK_FRAME("openfl.display.Stage","onPreloadComplete",0xfd196e69,"openfl.display.Stage.onPreloadComplete","openfl/display/Stage.hx",391,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onPreloadComplete,(void))

Void Stage_obj::onPreloadProgress( int loaded,int total){
{
		HX_STACK_FRAME("openfl.display.Stage","onPreloadProgress",0x037c655d,"openfl.display.Stage.onPreloadProgress","openfl/display/Stage.hx",398,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(loaded,"loaded")
		HX_STACK_ARG(total,"total")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onPreloadProgress,(void))

Void Stage_obj::onRenderContextLost( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("openfl.display.Stage","onRenderContextLost",0xf63c6844,"openfl.display.Stage.onRenderContextLost","openfl/display/Stage.hx",405,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onRenderContextLost,(void))

Void Stage_obj::onRenderContextRestored( ::lime::graphics::Renderer renderer,::lime::graphics::RenderContext context){
{
		HX_STACK_FRAME("openfl.display.Stage","onRenderContextRestored",0x98dd6bb6,"openfl.display.Stage.onRenderContextRestored","openfl/display/Stage.hx",412,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_ARG(context,"context")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onRenderContextRestored,(void))

Void Stage_obj::onTextEdit( ::lime::ui::Window window,::String text,int start,int length){
{
		HX_STACK_FRAME("openfl.display.Stage","onTextEdit",0x0cd051b0,"openfl.display.Stage.onTextEdit","openfl/display/Stage.hx",419,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(length,"length")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,onTextEdit,(void))

Void Stage_obj::onTextInput( ::lime::ui::Window window,::String text){
{
		HX_STACK_FRAME("openfl.display.Stage","onTextInput",0x7db2eda4,"openfl.display.Stage.onTextInput","openfl/display/Stage.hx",426,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(428)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(428)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(428)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(428)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(428)
		if ((tmp2)){
			HX_STACK_LINE(428)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(428)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(428)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(428)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(428)
			tmp3 = true;
		}
		HX_STACK_LINE(428)
		if ((tmp3)){
			HX_STACK_LINE(428)
			return null();
		}
		HX_STACK_LINE(432)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(434)
		::openfl::display::InteractiveObject tmp4 = this->__focus;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(434)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(434)
		if ((tmp5)){
			HX_STACK_LINE(436)
			this->__getInteractive(stack);
		}
		else{
			HX_STACK_LINE(440)
			::openfl::display::InteractiveObject tmp6 = this->__focus;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(440)
			tmp6->__getInteractive(stack);
		}
		HX_STACK_LINE(444)
		::openfl::events::TextEvent tmp6 = ::openfl::events::TextEvent_obj::__new(HX_HCSTRING("textInput","\x1d","\x54","\x0b","\x57"),true,false,text);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(444)
		::openfl::events::TextEvent event = tmp6;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(445)
		bool tmp7 = (stack->length > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(445)
		if ((tmp7)){
			HX_STACK_LINE(447)
			stack->reverse();
			HX_STACK_LINE(448)
			::openfl::events::TextEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(448)
			this->__fireEvent(tmp8,stack);
		}
		else{
			HX_STACK_LINE(452)
			::openfl::events::TextEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(452)
			this->__broadcast(tmp8,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onTextInput,(void))

Void Stage_obj::onTouchMove( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchMove",0x34750bf7,"openfl.display.Stage.onTouchMove","openfl/display/Stage.hx",458,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(460)
		::lime::ui::Touch tmp = touch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(460)
		this->__onTouch(HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchMove,(void))

Void Stage_obj::onTouchEnd( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchEnd",0xc6cff9b5,"openfl.display.Stage.onTouchEnd","openfl/display/Stage.hx",465,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(467)
		::lime::ui::Touch tmp = touch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(467)
		this->__onTouch(HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchEnd,(void))

Void Stage_obj::onTouchStart( ::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","onTouchStart",0x299b14bc,"openfl.display.Stage.onTouchStart","openfl/display/Stage.hx",472,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(474)
		::lime::ui::Touch tmp = touch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(474)
		this->__onTouch(HX_HCSTRING("touchBegin","\xea","\xcd","\xe6","\xa9"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onTouchStart,(void))

Void Stage_obj::onWindowActivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowActivate",0xcfe358dc,"openfl.display.Stage.onWindowActivate","openfl/display/Stage.hx",479,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(481)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(481)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(481)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(481)
		if ((tmp2)){
			HX_STACK_LINE(481)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(481)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(481)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(481)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(481)
			tmp3 = true;
		}
		HX_STACK_LINE(481)
		if ((tmp3)){
			HX_STACK_LINE(481)
			return null();
		}
		HX_STACK_LINE(483)
		::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("activate","\xb3","\x1b","\xac","\xe5"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(483)
		::openfl::events::Event event = tmp4;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(484)
		::openfl::events::Event tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(484)
		this->__broadcast(tmp5,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowActivate,(void))

Void Stage_obj::onWindowClose( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowClose",0x0c1bf6ef,"openfl.display.Stage.onWindowClose","openfl/display/Stage.hx",489,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(491)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(491)
		::lime::ui::Window tmp1 = window;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(491)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(491)
		if ((tmp2)){
			HX_STACK_LINE(493)
			this->window = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowClose,(void))

Void Stage_obj::onWindowCreate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowCreate",0xfa19d7e5,"openfl.display.Stage.onWindowCreate","openfl/display/Stage.hx",500,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(502)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(502)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(502)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(502)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(502)
		if ((tmp2)){
			HX_STACK_LINE(502)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(502)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(502)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(502)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(502)
			tmp3 = true;
		}
		HX_STACK_LINE(502)
		if ((tmp3)){
			HX_STACK_LINE(502)
			return null();
		}
		HX_STACK_LINE(504)
		bool tmp4 = (window->renderer != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(504)
		if ((tmp4)){
			HX_STACK_LINE(506)
			{
				HX_STACK_LINE(506)
				::lime::graphics::RenderContext tmp5 = window->renderer->context;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(506)
				::lime::graphics::RenderContext _g = tmp5;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(506)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(506)
						::lime::graphics::GLRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(506)
						::lime::graphics::GLRenderContext gl = tmp6;		HX_STACK_VAR(gl,"gl");
						HX_STACK_LINE(508)
						{
							HX_STACK_LINE(511)
							int tmp7 = this->stageWidth;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(511)
							int tmp8 = this->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(511)
							::lime::graphics::GLRenderContext tmp9 = gl;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(511)
							::openfl::_internal::renderer::opengl::GLRenderer tmp10 = ::openfl::_internal::renderer::opengl::GLRenderer_obj::__new(tmp7,tmp8,tmp9,null(),null(),null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(511)
							this->__renderer = tmp10;
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(506)
						::lime::graphics::CanvasRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(506)
						::lime::graphics::CanvasRenderContext context = tmp6;		HX_STACK_VAR(context,"context");
						HX_STACK_LINE(514)
						{
							HX_STACK_LINE(516)
							int tmp7 = this->stageWidth;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(516)
							int tmp8 = this->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(516)
							::lime::graphics::CanvasRenderContext tmp9 = context;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(516)
							::openfl::_internal::renderer::canvas::CanvasRenderer tmp10 = ::openfl::_internal::renderer::canvas::CanvasRenderer_obj::__new(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(516)
							this->__renderer = tmp10;
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(506)
						::lime::graphics::DOMRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(506)
						::lime::graphics::DOMRenderContext element = tmp6;		HX_STACK_VAR(element,"element");
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(521)
							int tmp7 = this->stageWidth;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(521)
							int tmp8 = this->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(521)
							::lime::graphics::DOMRenderContext tmp9 = element;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(521)
							::openfl::_internal::renderer::dom::DOMRenderer tmp10 = ::openfl::_internal::renderer::dom::DOMRenderer_obj::__new(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(521)
							this->__renderer = tmp10;
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(506)
						::lime::graphics::cairo::Cairo tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(506)
						::lime::graphics::cairo::Cairo cairo = tmp6;		HX_STACK_VAR(cairo,"cairo");
						HX_STACK_LINE(524)
						{
							HX_STACK_LINE(527)
							int tmp7 = this->stageWidth;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(527)
							int tmp8 = this->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(527)
							::lime::graphics::cairo::Cairo tmp9 = cairo;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(527)
							::openfl::_internal::renderer::cairo::CairoRenderer tmp10 = ::openfl::_internal::renderer::cairo::CairoRenderer_obj::__new(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(527)
							this->__renderer = tmp10;
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(506)
						::lime::graphics::ConsoleRenderContext tmp6 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(506)
						::lime::graphics::ConsoleRenderContext ctx = tmp6;		HX_STACK_VAR(ctx,"ctx");
						HX_STACK_LINE(530)
						{
							HX_STACK_LINE(533)
							int tmp7 = this->stageWidth;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(533)
							int tmp8 = this->stageHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(533)
							::lime::graphics::ConsoleRenderContext tmp9 = ctx;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(533)
							::openfl::_internal::renderer::console::ConsoleRenderer tmp10 = ::openfl::_internal::renderer::console::ConsoleRenderer_obj::__new(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(533)
							this->__renderer = tmp10;
						}
					}
					;break;
					default: {
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowCreate,(void))

Void Stage_obj::onWindowDeactivate( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowDeactivate",0x9060f59d,"openfl.display.Stage.onWindowDeactivate","openfl/display/Stage.hx",545,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(547)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(547)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(547)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(547)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(547)
		if ((tmp2)){
			HX_STACK_LINE(547)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(547)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(547)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(547)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(547)
			tmp3 = true;
		}
		HX_STACK_LINE(547)
		if ((tmp3)){
			HX_STACK_LINE(547)
			return null();
		}
		HX_STACK_LINE(549)
		::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("deactivate","\x34","\x5c","\x01","\x3c"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(549)
		::openfl::events::Event event = tmp4;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(550)
		::openfl::events::Event tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(550)
		this->__broadcast(tmp5,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowDeactivate,(void))

Void Stage_obj::onWindowDropFile( ::lime::ui::Window window,::String file){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowDropFile",0xd38db374,"openfl.display.Stage.onWindowDropFile","openfl/display/Stage.hx",555,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(file,"file")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onWindowDropFile,(void))

Void Stage_obj::onWindowEnter( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowEnter",0x343f4c4f,"openfl.display.Stage.onWindowEnter","openfl/display/Stage.hx",562,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowEnter,(void))

Void Stage_obj::onWindowFocusIn( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFocusIn",0x0c9ba0d4,"openfl.display.Stage.onWindowFocusIn","openfl/display/Stage.hx",569,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(571)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(571)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(571)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(571)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(571)
		if ((tmp2)){
			HX_STACK_LINE(571)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(571)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(571)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(571)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(571)
			tmp3 = true;
		}
		HX_STACK_LINE(571)
		if ((tmp3)){
			HX_STACK_LINE(571)
			return null();
		}
		HX_STACK_LINE(573)
		::openfl::events::FocusEvent tmp4 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),true,false,null(),false,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(573)
		::openfl::events::FocusEvent event = tmp4;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(574)
		::openfl::events::FocusEvent tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(574)
		this->__broadcast(tmp5,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFocusIn,(void))

Void Stage_obj::onWindowFocusOut( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFocusOut",0xfb95acbf,"openfl.display.Stage.onWindowFocusOut","openfl/display/Stage.hx",579,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(581)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(581)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(581)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(581)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(581)
		if ((tmp2)){
			HX_STACK_LINE(581)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(581)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(581)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(581)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(581)
			tmp3 = true;
		}
		HX_STACK_LINE(581)
		if ((tmp3)){
			HX_STACK_LINE(581)
			return null();
		}
		HX_STACK_LINE(583)
		::openfl::events::FocusEvent tmp4 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),true,false,null(),false,(int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(583)
		::openfl::events::FocusEvent event = tmp4;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(584)
		::openfl::events::FocusEvent tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(584)
		this->__broadcast(tmp5,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFocusOut,(void))

Void Stage_obj::onWindowFullscreen( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowFullscreen",0x4e13d3a4,"openfl.display.Stage.onWindowFullscreen","openfl/display/Stage.hx",589,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(591)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(591)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(591)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(591)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(591)
		if ((tmp2)){
			HX_STACK_LINE(591)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(591)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(591)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(591)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(591)
			tmp3 = true;
		}
		HX_STACK_LINE(591)
		if ((tmp3)){
			HX_STACK_LINE(591)
			return null();
		}
		HX_STACK_LINE(593)
		Dynamic tmp4 = this->__displayState;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(593)
		bool tmp5 = (tmp4 == ((Dynamic)((int)2)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(593)
		if ((tmp5)){
			HX_STACK_LINE(595)
			this->__displayState = ((Dynamic)((int)1));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowFullscreen,(void))

Void Stage_obj::onWindowLeave( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowLeave",0x360c142e,"openfl.display.Stage.onWindowLeave","openfl/display/Stage.hx",602,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_LINE(604)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(604)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(604)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(604)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(604)
		if ((tmp2)){
			HX_STACK_LINE(604)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(604)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(604)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(604)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(604)
			tmp3 = true;
		}
		HX_STACK_LINE(604)
		if ((tmp3)){
			HX_STACK_LINE(604)
			return null();
		}
		HX_STACK_LINE(606)
		::openfl::events::Event tmp4 = ::openfl::events::Event_obj::__new(HX_HCSTRING("mouseLeave","\x92","\x28","\x20","\x90"),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(606)
		this->__dispatchEvent(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowLeave,(void))

Void Stage_obj::onWindowMinimize( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowMinimize",0x0bb07c47,"openfl.display.Stage.onWindowMinimize","openfl/display/Stage.hx",611,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowMinimize,(void))

Void Stage_obj::onWindowMove( ::lime::ui::Window window,Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowMove",0x7f3617ba,"openfl.display.Stage.onWindowMove","openfl/display/Stage.hx",618,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onWindowMove,(void))

Void Stage_obj::onWindowResize( ::lime::ui::Window window,int width,int height){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowResize",0x8685cadd,"openfl.display.Stage.onWindowResize","openfl/display/Stage.hx",625,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(627)
		::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(627)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(627)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(627)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(627)
		if ((tmp2)){
			HX_STACK_LINE(627)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(627)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(627)
			::lime::ui::Window tmp6 = window;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(627)
			tmp3 = (tmp5 != tmp6);
		}
		else{
			HX_STACK_LINE(627)
			tmp3 = true;
		}
		HX_STACK_LINE(627)
		if ((tmp3)){
			HX_STACK_LINE(627)
			return null();
		}
		HX_STACK_LINE(629)
		Dynamic tmp4 = this->__displayState;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(629)
		bool tmp5 = (tmp4 != ((Dynamic)((int)2)));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(629)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(629)
		if ((tmp5)){
			HX_STACK_LINE(629)
			bool tmp7 = window->__fullscreen;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(629)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(629)
			tmp6 = !(tmp8);
		}
		else{
			HX_STACK_LINE(629)
			tmp6 = false;
		}
		HX_STACK_LINE(629)
		if ((tmp6)){
			HX_STACK_LINE(631)
			this->__displayState = ((Dynamic)((int)2));
		}
		HX_STACK_LINE(635)
		Float tmp7 = (width * window->__scale);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(635)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(635)
		this->stageWidth = tmp8;
		HX_STACK_LINE(636)
		Float tmp9 = (height * window->__scale);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(636)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(636)
		this->stageHeight = tmp10;
		HX_STACK_LINE(638)
		::openfl::_internal::renderer::AbstractRenderer tmp11 = this->__renderer;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(638)
		bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(638)
		if ((tmp12)){
			HX_STACK_LINE(640)
			::openfl::_internal::renderer::AbstractRenderer tmp13 = this->__renderer;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(640)
			int tmp14 = this->stageWidth;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(640)
			int tmp15 = this->stageHeight;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(640)
			tmp13->resize(tmp14,tmp15);
		}
		HX_STACK_LINE(644)
		::openfl::events::Event tmp13 = ::openfl::events::Event_obj::__new(HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(644)
		::openfl::events::Event event = tmp13;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(645)
		::openfl::events::Event tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(645)
		this->__broadcast(tmp14,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onWindowResize,(void))

Void Stage_obj::onWindowRestore( ::lime::ui::Window window){
{
		HX_STACK_FRAME("openfl.display.Stage","onWindowRestore",0x35c8c245,"openfl.display.Stage.onWindowRestore","openfl/display/Stage.hx",650,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(window,"window")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onWindowRestore,(void))

Void Stage_obj::render( ::lime::graphics::Renderer renderer){
{
		HX_STACK_FRAME("openfl.display.Stage","render",0x050c3670,"openfl.display.Stage.render","openfl/display/Stage.hx",657,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderer,"renderer")
		HX_STACK_LINE(659)
		bool tmp = (renderer->window == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(659)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(659)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(659)
		if ((tmp1)){
			HX_STACK_LINE(659)
			::lime::ui::Window tmp3 = renderer->window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(659)
			::lime::ui::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(659)
			::lime::ui::Window tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(659)
			tmp2 = (tmp3 != tmp5);
		}
		else{
			HX_STACK_LINE(659)
			tmp2 = true;
		}
		HX_STACK_LINE(659)
		if ((tmp2)){
			HX_STACK_LINE(659)
			return null();
		}
		HX_STACK_LINE(663)
		::lime::app::Application tmp3 = this->application;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(663)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(663)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(663)
		if ((tmp4)){
			HX_STACK_LINE(663)
			::lime::app::Application tmp6 = this->application;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(663)
			::lime::app::Application tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(663)
			int tmp8 = tmp7->windows->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(663)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(663)
			tmp5 = (tmp9 > (int)0);
		}
		else{
			HX_STACK_LINE(663)
			tmp5 = false;
		}
		HX_STACK_LINE(663)
		if ((tmp5)){
			HX_STACK_LINE(665)
			{
				HX_STACK_LINE(665)
				bool tmp6 = this->__transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(665)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(665)
				if ((tmp7)){
					HX_STACK_LINE(665)
					this->__transformDirty = true;
					HX_STACK_LINE(665)
					(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
				}
			}
			HX_STACK_LINE(666)
			{
				HX_STACK_LINE(666)
				bool tmp6 = this->__renderDirty;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(666)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(666)
				if ((tmp7)){
					HX_STACK_LINE(666)
					this->__updateCachedBitmap = true;
					HX_STACK_LINE(666)
					bool tmp8 = (this->get_filters() != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(666)
					bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(666)
					if ((tmp8)){
						HX_STACK_LINE(666)
						int tmp10 = this->get_filters()->length;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(666)
						int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(666)
						tmp9 = (tmp11 > (int)0);
					}
					else{
						HX_STACK_LINE(666)
						tmp9 = false;
					}
					HX_STACK_LINE(666)
					this->__updateFilters = tmp9;
					HX_STACK_LINE(666)
					this->__renderDirty = true;
					HX_STACK_LINE(666)
					(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
				}
			}
		}
		HX_STACK_LINE(670)
		bool tmp6 = this->__rendering;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(670)
		if ((tmp6)){
			HX_STACK_LINE(670)
			return null();
		}
		HX_STACK_LINE(671)
		this->__rendering = true;
		HX_STACK_LINE(677)
		::openfl::events::Event tmp7 = ::openfl::events::Event_obj::__new(HX_HCSTRING("enterFrame","\xf5","\x03","\x50","\x02"),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(677)
		this->__broadcast(tmp7,true);
		HX_STACK_LINE(679)
		bool tmp8 = this->__invalidated;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(679)
		if ((tmp8)){
			HX_STACK_LINE(681)
			this->__invalidated = false;
			HX_STACK_LINE(682)
			::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(682)
			this->__broadcast(tmp9,true);
		}
		HX_STACK_LINE(691)
		this->__renderable = true;
		HX_STACK_LINE(693)
		int tmp9 = this->__deltaTime;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(693)
		this->__enterFrame(tmp9);
		HX_STACK_LINE(694)
		this->__deltaTime = (int)0;
		HX_STACK_LINE(695)
		this->__update(false,true,null());
		HX_STACK_LINE(697)
		::openfl::_internal::renderer::AbstractRenderer tmp10 = this->__renderer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(697)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(697)
		if ((tmp11)){
			HX_STACK_LINE(699)
			{
				HX_STACK_LINE(699)
				::lime::graphics::RenderContext _g = renderer->context;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(699)
				switch( (int)(_g->__Index())){
					case (int)4: {
						HX_STACK_LINE(699)
						::lime::graphics::cairo::Cairo tmp12 = (::lime::graphics::RenderContext(_g))->__Param(0);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(699)
						::lime::graphics::cairo::Cairo cairo = tmp12;		HX_STACK_VAR(cairo,"cairo");
						HX_STACK_LINE(701)
						{
							HX_STACK_LINE(703)
							::openfl::_internal::renderer::AbstractRenderer tmp13 = this->__renderer;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(703)
							::openfl::_internal::renderer::cairo::CairoRenderer tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(703)
							tmp14 = hx::TCast< ::openfl::_internal::renderer::cairo::CairoRenderer >::cast(tmp13);
							HX_STACK_LINE(703)
							tmp14->cairo = cairo;
							HX_STACK_LINE(704)
							::openfl::_internal::renderer::AbstractRenderer tmp15 = this->__renderer;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(704)
							tmp15->renderSession->cairo = cairo;
						}
					}
					;break;
					default: {
					}
				}
			}
			HX_STACK_LINE(710)
			::openfl::_internal::renderer::AbstractRenderer tmp12 = this->__renderer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(710)
			tmp12->render(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(719)
		this->__rendering = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,render,(void))

Void Stage_obj::update( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.Stage","update",0x86e85123,"openfl.display.Stage.update","openfl/display/Stage.hx",726,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(726)
		this->__deltaTime = deltaTime;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,update,(void))

Void Stage_obj::__drag( ::openfl::geom::Point mouse){
{
		HX_STACK_FRAME("openfl.display.Stage","__drag",0xf14b5a2e,"openfl.display.Stage.__drag","openfl/display/Stage.hx",731,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mouse,"mouse")
		HX_STACK_LINE(733)
		::openfl::display::Sprite tmp = this->__dragObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(733)
		::openfl::display::DisplayObjectContainer parent = tmp->parent;		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(734)
		bool tmp1 = (parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(734)
		if ((tmp1)){
			HX_STACK_LINE(736)
			::openfl::geom::Point tmp2 = mouse;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(736)
			::openfl::geom::Point tmp3 = parent->globalToLocal(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(736)
			mouse = tmp3;
		}
		HX_STACK_LINE(740)
		Float tmp2 = mouse->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(740)
		Float tmp3 = this->__dragOffsetX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(740)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(740)
		Float x = tmp4;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(741)
		Float tmp5 = mouse->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(741)
		Float tmp6 = this->__dragOffsetY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(741)
		Float tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(741)
		Float y = tmp7;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(743)
		::openfl::geom::Rectangle tmp8 = this->__dragBounds;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(743)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(743)
		if ((tmp9)){
			HX_STACK_LINE(745)
			Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(745)
			::openfl::geom::Rectangle tmp11 = this->__dragBounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(745)
			Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(745)
			bool tmp13 = (tmp10 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(745)
			if ((tmp13)){
				HX_STACK_LINE(747)
				::openfl::geom::Rectangle tmp14 = this->__dragBounds;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(747)
				x = tmp14->x;
			}
			else{
				HX_STACK_LINE(749)
				Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(749)
				::openfl::geom::Rectangle tmp15 = this->__dragBounds;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(749)
				Float tmp16 = tmp15->get_right();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(749)
				bool tmp17 = (tmp14 > tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(749)
				if ((tmp17)){
					HX_STACK_LINE(751)
					::openfl::geom::Rectangle tmp18 = this->__dragBounds;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(751)
					Float tmp19 = tmp18->get_right();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(751)
					x = tmp19;
				}
			}
			HX_STACK_LINE(755)
			Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(755)
			::openfl::geom::Rectangle tmp15 = this->__dragBounds;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(755)
			Float tmp16 = tmp15->y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(755)
			bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(755)
			if ((tmp17)){
				HX_STACK_LINE(757)
				::openfl::geom::Rectangle tmp18 = this->__dragBounds;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(757)
				y = tmp18->y;
			}
			else{
				HX_STACK_LINE(759)
				Float tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(759)
				::openfl::geom::Rectangle tmp19 = this->__dragBounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(759)
				Float tmp20 = tmp19->get_bottom();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(759)
				bool tmp21 = (tmp18 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(759)
				if ((tmp21)){
					HX_STACK_LINE(761)
					::openfl::geom::Rectangle tmp22 = this->__dragBounds;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(761)
					Float tmp23 = tmp22->get_bottom();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(761)
					y = tmp23;
				}
			}
		}
		HX_STACK_LINE(767)
		::openfl::display::Sprite tmp10 = this->__dragObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(767)
		Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(767)
		tmp10->set_x(tmp11);
		HX_STACK_LINE(768)
		::openfl::display::Sprite tmp12 = this->__dragObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(768)
		Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(768)
		tmp12->set_y(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__drag,(void))

Void Stage_obj::__fireEvent( ::openfl::events::Event event,Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("openfl.display.Stage","__fireEvent",0xa3fe300a,"openfl.display.Stage.__fireEvent","openfl/display/Stage.hx",773,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_ARG(stack,"stack")
		HX_STACK_LINE(775)
		int length = stack->length;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(777)
		bool tmp = (length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(777)
		if ((tmp)){
			HX_STACK_LINE(779)
			event->eventPhase = (int)2;
			HX_STACK_LINE(780)
			event->target->__Field(HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"), hx::paccDynamic )(event,false);
		}
		else{
			HX_STACK_LINE(784)
			event->eventPhase = (int)1;
			HX_STACK_LINE(785)
			int tmp1 = (stack->length - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(785)
			::openfl::display::DisplayObject tmp2 = stack->__get(tmp1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(785)
			event->target = tmp2;
			HX_STACK_LINE(787)
			{
				HX_STACK_LINE(787)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(787)
				int tmp3 = (length - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(787)
				int _g = tmp3;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(787)
				while((true)){
					HX_STACK_LINE(787)
					bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(787)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(787)
					if ((tmp5)){
						HX_STACK_LINE(787)
						break;
					}
					HX_STACK_LINE(787)
					int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(787)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(789)
					::openfl::display::DisplayObject tmp7 = stack->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(789)
					::openfl::events::Event tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(789)
					tmp7->__broadcast(tmp8,false);
					HX_STACK_LINE(791)
					bool tmp9 = event->__isCanceled;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(791)
					if ((tmp9)){
						HX_STACK_LINE(793)
						return null();
					}
				}
			}
			HX_STACK_LINE(799)
			event->eventPhase = (int)2;
			HX_STACK_LINE(800)
			event->target->__Field(HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"), hx::paccDynamic )(event,false);
			HX_STACK_LINE(802)
			bool tmp3 = event->__isCanceled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(802)
			if ((tmp3)){
				HX_STACK_LINE(804)
				return null();
			}
			HX_STACK_LINE(808)
			bool tmp4 = event->bubbles;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(808)
			if ((tmp4)){
				HX_STACK_LINE(810)
				event->eventPhase = (int)3;
				HX_STACK_LINE(811)
				int tmp5 = (length - (int)2);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(811)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(813)
				while((true)){
					HX_STACK_LINE(813)
					bool tmp6 = (i >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(813)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(813)
					if ((tmp7)){
						HX_STACK_LINE(813)
						break;
					}
					HX_STACK_LINE(815)
					::openfl::display::DisplayObject tmp8 = stack->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(815)
					::openfl::events::Event tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(815)
					tmp8->__broadcast(tmp9,false);
					HX_STACK_LINE(817)
					bool tmp10 = event->__isCanceled;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(817)
					if ((tmp10)){
						HX_STACK_LINE(819)
						return null();
					}
					HX_STACK_LINE(823)
					(i)--;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__fireEvent,(void))

bool Stage_obj::__getInteractive( Array< ::Dynamic > stack){
	HX_STACK_FRAME("openfl.display.Stage","__getInteractive",0xdc3c8ba6,"openfl.display.Stage.__getInteractive","openfl/display/Stage.hx",834,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(836)
	bool tmp = (stack != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(836)
	if ((tmp)){
		HX_STACK_LINE(838)
		stack->push(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(842)
	return true;
}


Void Stage_obj::__onKey( ::String type,int keyCode,int modifier){
{
		HX_STACK_FRAME("openfl.display.Stage","__onKey",0x83566246,"openfl.display.Stage.__onKey","openfl/display/Stage.hx",847,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(keyCode,"keyCode")
		HX_STACK_ARG(modifier,"modifier")
		HX_STACK_LINE(849)
		int tmp = modifier;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(849)
		bool tmp1 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(849)
		::openfl::events::MouseEvent_obj::__altKey = tmp1;
		HX_STACK_LINE(850)
		int tmp2 = modifier;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(850)
		bool tmp3 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(850)
		::openfl::events::MouseEvent_obj::__commandKey = tmp3;
		HX_STACK_LINE(851)
		int tmp4 = modifier;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(851)
		bool tmp5 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(851)
		::openfl::events::MouseEvent_obj::__ctrlKey = tmp5;
		HX_STACK_LINE(852)
		int tmp6 = modifier;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(852)
		bool tmp7 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(852)
		::openfl::events::MouseEvent_obj::__shiftKey = tmp7;
		HX_STACK_LINE(854)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(856)
		::openfl::display::InteractiveObject tmp8 = this->__focus;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(856)
		bool tmp9 = (tmp8 == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(856)
		if ((tmp9)){
			HX_STACK_LINE(858)
			this->__getInteractive(stack);
		}
		else{
			HX_STACK_LINE(862)
			::openfl::display::InteractiveObject tmp10 = this->__focus;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(862)
			tmp10->__getInteractive(stack);
		}
		HX_STACK_LINE(866)
		bool tmp10 = (stack->length > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(866)
		if ((tmp10)){
			HX_STACK_LINE(868)
			int tmp11 = keyCode;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(868)
			int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(868)
			switch( (int)(tmp11)){
				case (int)1073742048: case (int)1073742049: case (int)1073742050: case (int)1073742051: {
					HX_STACK_LINE(868)
					tmp12 = (int)1;
				}
				;break;
				case (int)1073742052: case (int)1073742053: case (int)1073742054: case (int)1073742055: {
					HX_STACK_LINE(868)
					tmp12 = (int)2;
				}
				;break;
				case (int)1073741908: case (int)1073741909: case (int)1073741910: case (int)1073741911: case (int)1073741912: case (int)1073741913: case (int)1073741914: case (int)1073741915: case (int)1073741916: case (int)1073741917: case (int)1073741918: case (int)1073741919: case (int)1073741920: case (int)1073741921: case (int)1073741922: case (int)1073741923: case (int)1073742044: {
					HX_STACK_LINE(868)
					tmp12 = (int)3;
				}
				;break;
				default: {
					HX_STACK_LINE(868)
					tmp12 = (int)0;
				}
			}
			HX_STACK_LINE(868)
			int keyLocation = tmp12;		HX_STACK_VAR(keyLocation,"keyLocation");
			HX_STACK_LINE(869)
			int tmp13 = keyCode;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(869)
			int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(869)
			switch( (int)(tmp13)){
				case (int)8: {
					HX_STACK_LINE(869)
					tmp14 = (int)8;
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(869)
					tmp14 = (int)9;
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(869)
					tmp14 = (int)13;
				}
				;break;
				case (int)27: {
					HX_STACK_LINE(869)
					tmp14 = (int)27;
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(869)
					tmp14 = (int)32;
				}
				;break;
				case (int)33: {
					HX_STACK_LINE(869)
					tmp14 = (int)49;
				}
				;break;
				case (int)34: {
					HX_STACK_LINE(869)
					tmp14 = (int)222;
				}
				;break;
				case (int)35: {
					HX_STACK_LINE(869)
					tmp14 = (int)51;
				}
				;break;
				case (int)36: {
					HX_STACK_LINE(869)
					tmp14 = (int)52;
				}
				;break;
				case (int)37: {
					HX_STACK_LINE(869)
					tmp14 = (int)53;
				}
				;break;
				case (int)38: {
					HX_STACK_LINE(869)
					tmp14 = (int)55;
				}
				;break;
				case (int)39: {
					HX_STACK_LINE(869)
					tmp14 = (int)222;
				}
				;break;
				case (int)40: {
					HX_STACK_LINE(869)
					tmp14 = (int)57;
				}
				;break;
				case (int)41: {
					HX_STACK_LINE(869)
					tmp14 = (int)48;
				}
				;break;
				case (int)42: {
					HX_STACK_LINE(869)
					tmp14 = (int)56;
				}
				;break;
				case (int)44: {
					HX_STACK_LINE(869)
					tmp14 = (int)188;
				}
				;break;
				case (int)45: {
					HX_STACK_LINE(869)
					tmp14 = (int)189;
				}
				;break;
				case (int)46: {
					HX_STACK_LINE(869)
					tmp14 = (int)190;
				}
				;break;
				case (int)47: {
					HX_STACK_LINE(869)
					tmp14 = (int)191;
				}
				;break;
				case (int)48: {
					HX_STACK_LINE(869)
					tmp14 = (int)48;
				}
				;break;
				case (int)49: {
					HX_STACK_LINE(869)
					tmp14 = (int)49;
				}
				;break;
				case (int)50: {
					HX_STACK_LINE(869)
					tmp14 = (int)50;
				}
				;break;
				case (int)51: {
					HX_STACK_LINE(869)
					tmp14 = (int)51;
				}
				;break;
				case (int)52: {
					HX_STACK_LINE(869)
					tmp14 = (int)52;
				}
				;break;
				case (int)53: {
					HX_STACK_LINE(869)
					tmp14 = (int)53;
				}
				;break;
				case (int)54: {
					HX_STACK_LINE(869)
					tmp14 = (int)54;
				}
				;break;
				case (int)55: {
					HX_STACK_LINE(869)
					tmp14 = (int)55;
				}
				;break;
				case (int)56: {
					HX_STACK_LINE(869)
					tmp14 = (int)56;
				}
				;break;
				case (int)57: {
					HX_STACK_LINE(869)
					tmp14 = (int)57;
				}
				;break;
				case (int)58: {
					HX_STACK_LINE(869)
					tmp14 = (int)186;
				}
				;break;
				case (int)59: {
					HX_STACK_LINE(869)
					tmp14 = (int)186;
				}
				;break;
				case (int)60: {
					HX_STACK_LINE(869)
					tmp14 = (int)60;
				}
				;break;
				case (int)61: {
					HX_STACK_LINE(869)
					tmp14 = (int)187;
				}
				;break;
				case (int)62: {
					HX_STACK_LINE(869)
					tmp14 = (int)190;
				}
				;break;
				case (int)63: {
					HX_STACK_LINE(869)
					tmp14 = (int)191;
				}
				;break;
				case (int)64: {
					HX_STACK_LINE(869)
					tmp14 = (int)50;
				}
				;break;
				case (int)91: {
					HX_STACK_LINE(869)
					tmp14 = (int)219;
				}
				;break;
				case (int)92: {
					HX_STACK_LINE(869)
					tmp14 = (int)220;
				}
				;break;
				case (int)93: {
					HX_STACK_LINE(869)
					tmp14 = (int)221;
				}
				;break;
				case (int)94: {
					HX_STACK_LINE(869)
					tmp14 = (int)54;
				}
				;break;
				case (int)95: {
					HX_STACK_LINE(869)
					tmp14 = (int)189;
				}
				;break;
				case (int)96: {
					HX_STACK_LINE(869)
					tmp14 = (int)192;
				}
				;break;
				case (int)97: {
					HX_STACK_LINE(869)
					tmp14 = (int)65;
				}
				;break;
				case (int)98: {
					HX_STACK_LINE(869)
					tmp14 = (int)66;
				}
				;break;
				case (int)99: {
					HX_STACK_LINE(869)
					tmp14 = (int)67;
				}
				;break;
				case (int)100: {
					HX_STACK_LINE(869)
					tmp14 = (int)68;
				}
				;break;
				case (int)101: {
					HX_STACK_LINE(869)
					tmp14 = (int)69;
				}
				;break;
				case (int)102: {
					HX_STACK_LINE(869)
					tmp14 = (int)70;
				}
				;break;
				case (int)103: {
					HX_STACK_LINE(869)
					tmp14 = (int)71;
				}
				;break;
				case (int)104: {
					HX_STACK_LINE(869)
					tmp14 = (int)72;
				}
				;break;
				case (int)105: {
					HX_STACK_LINE(869)
					tmp14 = (int)73;
				}
				;break;
				case (int)106: {
					HX_STACK_LINE(869)
					tmp14 = (int)74;
				}
				;break;
				case (int)107: {
					HX_STACK_LINE(869)
					tmp14 = (int)75;
				}
				;break;
				case (int)108: {
					HX_STACK_LINE(869)
					tmp14 = (int)76;
				}
				;break;
				case (int)109: {
					HX_STACK_LINE(869)
					tmp14 = (int)77;
				}
				;break;
				case (int)110: {
					HX_STACK_LINE(869)
					tmp14 = (int)78;
				}
				;break;
				case (int)111: {
					HX_STACK_LINE(869)
					tmp14 = (int)79;
				}
				;break;
				case (int)112: {
					HX_STACK_LINE(869)
					tmp14 = (int)80;
				}
				;break;
				case (int)113: {
					HX_STACK_LINE(869)
					tmp14 = (int)81;
				}
				;break;
				case (int)114: {
					HX_STACK_LINE(869)
					tmp14 = (int)82;
				}
				;break;
				case (int)115: {
					HX_STACK_LINE(869)
					tmp14 = (int)83;
				}
				;break;
				case (int)116: {
					HX_STACK_LINE(869)
					tmp14 = (int)84;
				}
				;break;
				case (int)117: {
					HX_STACK_LINE(869)
					tmp14 = (int)85;
				}
				;break;
				case (int)118: {
					HX_STACK_LINE(869)
					tmp14 = (int)86;
				}
				;break;
				case (int)119: {
					HX_STACK_LINE(869)
					tmp14 = (int)87;
				}
				;break;
				case (int)120: {
					HX_STACK_LINE(869)
					tmp14 = (int)88;
				}
				;break;
				case (int)121: {
					HX_STACK_LINE(869)
					tmp14 = (int)89;
				}
				;break;
				case (int)122: {
					HX_STACK_LINE(869)
					tmp14 = (int)90;
				}
				;break;
				case (int)127: {
					HX_STACK_LINE(869)
					tmp14 = (int)46;
				}
				;break;
				case (int)1073741881: {
					HX_STACK_LINE(869)
					tmp14 = (int)20;
				}
				;break;
				case (int)1073741882: {
					HX_STACK_LINE(869)
					tmp14 = (int)112;
				}
				;break;
				case (int)1073741883: {
					HX_STACK_LINE(869)
					tmp14 = (int)113;
				}
				;break;
				case (int)1073741884: {
					HX_STACK_LINE(869)
					tmp14 = (int)114;
				}
				;break;
				case (int)1073741885: {
					HX_STACK_LINE(869)
					tmp14 = (int)115;
				}
				;break;
				case (int)1073741886: {
					HX_STACK_LINE(869)
					tmp14 = (int)116;
				}
				;break;
				case (int)1073741887: {
					HX_STACK_LINE(869)
					tmp14 = (int)117;
				}
				;break;
				case (int)1073741888: {
					HX_STACK_LINE(869)
					tmp14 = (int)118;
				}
				;break;
				case (int)1073741889: {
					HX_STACK_LINE(869)
					tmp14 = (int)119;
				}
				;break;
				case (int)1073741890: {
					HX_STACK_LINE(869)
					tmp14 = (int)120;
				}
				;break;
				case (int)1073741891: {
					HX_STACK_LINE(869)
					tmp14 = (int)121;
				}
				;break;
				case (int)1073741892: {
					HX_STACK_LINE(869)
					tmp14 = (int)122;
				}
				;break;
				case (int)1073741893: {
					HX_STACK_LINE(869)
					tmp14 = (int)123;
				}
				;break;
				case (int)1073741894: {
					HX_STACK_LINE(869)
					tmp14 = (int)301;
				}
				;break;
				case (int)1073741895: {
					HX_STACK_LINE(869)
					tmp14 = (int)145;
				}
				;break;
				case (int)1073741896: {
					HX_STACK_LINE(869)
					tmp14 = (int)19;
				}
				;break;
				case (int)1073741897: {
					HX_STACK_LINE(869)
					tmp14 = (int)45;
				}
				;break;
				case (int)1073741898: {
					HX_STACK_LINE(869)
					tmp14 = (int)36;
				}
				;break;
				case (int)1073741899: {
					HX_STACK_LINE(869)
					tmp14 = (int)33;
				}
				;break;
				case (int)1073741901: {
					HX_STACK_LINE(869)
					tmp14 = (int)35;
				}
				;break;
				case (int)1073741902: {
					HX_STACK_LINE(869)
					tmp14 = (int)34;
				}
				;break;
				case (int)1073741903: {
					HX_STACK_LINE(869)
					tmp14 = (int)39;
				}
				;break;
				case (int)1073741904: {
					HX_STACK_LINE(869)
					tmp14 = (int)37;
				}
				;break;
				case (int)1073741905: {
					HX_STACK_LINE(869)
					tmp14 = (int)40;
				}
				;break;
				case (int)1073741906: {
					HX_STACK_LINE(869)
					tmp14 = (int)38;
				}
				;break;
				case (int)1073741907: {
					HX_STACK_LINE(869)
					tmp14 = (int)144;
				}
				;break;
				case (int)1073741908: {
					HX_STACK_LINE(869)
					tmp14 = (int)111;
				}
				;break;
				case (int)1073741909: {
					HX_STACK_LINE(869)
					tmp14 = (int)106;
				}
				;break;
				case (int)1073741910: {
					HX_STACK_LINE(869)
					tmp14 = (int)109;
				}
				;break;
				case (int)1073741911: {
					HX_STACK_LINE(869)
					tmp14 = (int)107;
				}
				;break;
				case (int)1073741912: {
					HX_STACK_LINE(869)
					tmp14 = (int)108;
				}
				;break;
				case (int)1073741913: {
					HX_STACK_LINE(869)
					tmp14 = (int)97;
				}
				;break;
				case (int)1073741914: {
					HX_STACK_LINE(869)
					tmp14 = (int)98;
				}
				;break;
				case (int)1073741915: {
					HX_STACK_LINE(869)
					tmp14 = (int)99;
				}
				;break;
				case (int)1073741916: {
					HX_STACK_LINE(869)
					tmp14 = (int)100;
				}
				;break;
				case (int)1073741917: {
					HX_STACK_LINE(869)
					tmp14 = (int)101;
				}
				;break;
				case (int)1073741918: {
					HX_STACK_LINE(869)
					tmp14 = (int)102;
				}
				;break;
				case (int)1073741919: {
					HX_STACK_LINE(869)
					tmp14 = (int)103;
				}
				;break;
				case (int)1073741920: {
					HX_STACK_LINE(869)
					tmp14 = (int)104;
				}
				;break;
				case (int)1073741921: {
					HX_STACK_LINE(869)
					tmp14 = (int)105;
				}
				;break;
				case (int)1073741922: {
					HX_STACK_LINE(869)
					tmp14 = (int)96;
				}
				;break;
				case (int)1073741923: {
					HX_STACK_LINE(869)
					tmp14 = (int)110;
				}
				;break;
				case (int)1073741925: {
					HX_STACK_LINE(869)
					tmp14 = (int)302;
				}
				;break;
				case (int)1073741928: {
					HX_STACK_LINE(869)
					tmp14 = (int)124;
				}
				;break;
				case (int)1073741929: {
					HX_STACK_LINE(869)
					tmp14 = (int)125;
				}
				;break;
				case (int)1073741930: {
					HX_STACK_LINE(869)
					tmp14 = (int)126;
				}
				;break;
				case (int)1073741982: {
					HX_STACK_LINE(869)
					tmp14 = (int)13;
				}
				;break;
				case (int)1073742044: {
					HX_STACK_LINE(869)
					tmp14 = (int)110;
				}
				;break;
				case (int)1073742048: {
					HX_STACK_LINE(869)
					tmp14 = (int)17;
				}
				;break;
				case (int)1073742049: {
					HX_STACK_LINE(869)
					tmp14 = (int)16;
				}
				;break;
				case (int)1073742050: {
					HX_STACK_LINE(869)
					tmp14 = (int)18;
				}
				;break;
				case (int)1073742051: {
					HX_STACK_LINE(869)
					tmp14 = (int)15;
				}
				;break;
				case (int)1073742052: {
					HX_STACK_LINE(869)
					tmp14 = (int)17;
				}
				;break;
				case (int)1073742053: {
					HX_STACK_LINE(869)
					tmp14 = (int)16;
				}
				;break;
				case (int)1073742054: {
					HX_STACK_LINE(869)
					tmp14 = (int)18;
				}
				;break;
				case (int)1073742055: {
					HX_STACK_LINE(869)
					tmp14 = (int)15;
				}
				;break;
				default: {
					HX_STACK_LINE(869)
					tmp14 = keyCode;
				}
			}
			HX_STACK_LINE(869)
			int keyCode1 = tmp14;		HX_STACK_VAR(keyCode1,"keyCode1");
			HX_STACK_LINE(870)
			int tmp15 = keyCode1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(870)
			int tmp16 = modifier;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(870)
			bool tmp17 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(870)
			int tmp18 = ::openfl::ui::Keyboard_obj::__getCharCode(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(870)
			int charCode = tmp18;		HX_STACK_VAR(charCode,"charCode");
			HX_STACK_LINE(872)
			::String tmp19 = type;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(872)
			int tmp20 = charCode;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(872)
			int tmp21 = keyCode1;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(872)
			int tmp22 = keyLocation;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(872)
			bool tmp23 = this->__macKeyboard;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(872)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(872)
			if ((tmp23)){
				HX_STACK_LINE(872)
				int tmp25 = modifier;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(872)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(872)
				bool tmp27 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(872)
				bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(872)
				if ((tmp28)){
					HX_STACK_LINE(872)
					int tmp29 = modifier;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(872)
					int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(872)
					tmp24 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp30);
				}
				else{
					HX_STACK_LINE(872)
					tmp24 = true;
				}
			}
			else{
				HX_STACK_LINE(872)
				int tmp25 = modifier;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(872)
				tmp24 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp25);
			}
			HX_STACK_LINE(872)
			int tmp25 = modifier;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(872)
			bool tmp26 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_altKey(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(872)
			int tmp27 = modifier;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(872)
			bool tmp28 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_shiftKey(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(872)
			int tmp29 = modifier;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(872)
			bool tmp30 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_ctrlKey(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(872)
			int tmp31 = modifier;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(872)
			bool tmp32 = ::lime::ui::_KeyModifier::KeyModifier_Impl__obj::get_metaKey(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(872)
			::openfl::events::KeyboardEvent tmp33 = ::openfl::events::KeyboardEvent_obj::__new(tmp19,true,false,tmp20,tmp21,tmp22,tmp24,tmp26,tmp28,tmp30,tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(872)
			::openfl::events::KeyboardEvent event = tmp33;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(874)
			stack->reverse();
			HX_STACK_LINE(875)
			::openfl::events::KeyboardEvent tmp34 = event;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(875)
			this->__fireEvent(tmp34,stack);
			HX_STACK_LINE(877)
			bool tmp35 = event->__isCanceled;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(877)
			if ((tmp35)){
				HX_STACK_LINE(879)
				bool tmp36 = (type == HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(879)
				if ((tmp36)){
					HX_STACK_LINE(881)
					::lime::ui::Window tmp37 = this->window;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(881)
					tmp37->onKeyDown->cancel();
				}
				else{
					HX_STACK_LINE(885)
					::lime::ui::Window tmp37 = this->window;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(885)
					tmp37->onKeyUp->cancel();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__onKey,(void))

Void Stage_obj::__onMouse( ::String type,Float x,Float y,int button){
{
		HX_STACK_FRAME("openfl.display.Stage","__onMouse",0xfccea68c,"openfl.display.Stage.__onMouse","openfl/display/Stage.hx",896,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(898)
		bool tmp = (button > (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(898)
		if ((tmp)){
			HX_STACK_LINE(898)
			return null();
		}
		HX_STACK_LINE(900)
		this->__mouseX = x;
		HX_STACK_LINE(901)
		this->__mouseY = y;
		HX_STACK_LINE(903)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(904)
		::openfl::display::InteractiveObject target = null();		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(905)
		::openfl::geom::Point tmp1 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(905)
		::openfl::geom::Point targetPoint = tmp1;		HX_STACK_VAR(targetPoint,"targetPoint");
		HX_STACK_LINE(907)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(907)
		Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(907)
		bool tmp4 = this->__hitTest(tmp2,tmp3,true,stack,true,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(907)
		if ((tmp4)){
			HX_STACK_LINE(909)
			int tmp5 = (stack->length - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(909)
			::openfl::display::DisplayObject tmp6 = stack->__get(tmp5).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(909)
			target = ((::openfl::display::InteractiveObject)(tmp6));
		}
		else{
			HX_STACK_LINE(913)
			target = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(914)
			stack = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(918)
		bool tmp5 = (target == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(918)
		if ((tmp5)){
			HX_STACK_LINE(918)
			target = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(920)
		::String clickType = null();		HX_STACK_VAR(clickType,"clickType");
		HX_STACK_LINE(922)
		::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(922)
		::String _switch_1 = (tmp6);
		if (  ( _switch_1==HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"))){
			HX_STACK_LINE(926)
			bool tmp7 = target->get_tabEnabled();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(926)
			if ((tmp7)){
				HX_STACK_LINE(928)
				::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(928)
				this->set_focus(tmp8);
			}
			else{
				HX_STACK_LINE(932)
				this->set_focus(null());
			}
			HX_STACK_LINE(936)
			this->__mouseDownLeft = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01"))){
			HX_STACK_LINE(940)
			this->__mouseDownMiddle = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd"))){
			HX_STACK_LINE(944)
			this->__mouseDownRight = target;
		}
		else if (  ( _switch_1==HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"))){
			HX_STACK_LINE(948)
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownLeft;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(948)
			::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(948)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(948)
			if ((tmp9)){
				HX_STACK_LINE(950)
				clickType = HX_HCSTRING("click","\x48","\x7c","\x5e","\x48");
			}
			HX_STACK_LINE(955)
			this->__mouseDownLeft = null();
		}
		else if (  ( _switch_1==HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a"))){
			HX_STACK_LINE(959)
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownMiddle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(959)
			::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(959)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(959)
			if ((tmp9)){
				HX_STACK_LINE(961)
				clickType = HX_HCSTRING("middleClick","\xb3","\xe4","\xe5","\x43");
			}
			HX_STACK_LINE(966)
			this->__mouseDownMiddle = null();
		}
		else if (  ( _switch_1==HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab"))){
			HX_STACK_LINE(970)
			::openfl::display::InteractiveObject tmp7 = this->__mouseDownRight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(970)
			::openfl::display::InteractiveObject tmp8 = target;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(970)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(970)
			if ((tmp9)){
				HX_STACK_LINE(972)
				clickType = HX_HCSTRING("rightClick","\xcc","\x62","\x23","\x4b");
			}
			HX_STACK_LINE(976)
			this->__mouseDownRight = null();
		}
		else  {
		}
;
;
		HX_STACK_LINE(983)
		::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(983)
		int tmp8 = button;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(983)
		Float tmp9 = this->__mouseX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(983)
		Float tmp10 = this->__mouseY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(983)
		bool tmp11 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(983)
		::openfl::geom::Point tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(983)
		if ((tmp11)){
			HX_STACK_LINE(983)
			tmp12 = targetPoint;
		}
		else{
			HX_STACK_LINE(983)
			::openfl::geom::Point tmp13 = targetPoint;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(983)
			tmp12 = target->globalToLocal(tmp13);
		}
		HX_STACK_LINE(983)
		::openfl::display::InteractiveObject tmp13 = target;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(983)
		::openfl::events::MouseEvent tmp14 = ::openfl::events::MouseEvent_obj::__create(tmp7,tmp8,tmp9,tmp10,tmp12,tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(983)
		this->__fireEvent(tmp14,stack);
		HX_STACK_LINE(985)
		bool tmp15 = (clickType != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(985)
		if ((tmp15)){
			HX_STACK_LINE(987)
			::String tmp16 = clickType;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(987)
			int tmp17 = button;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(987)
			Float tmp18 = this->__mouseX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(987)
			Float tmp19 = this->__mouseY;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(987)
			bool tmp20 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(987)
			::openfl::geom::Point tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(987)
			if ((tmp20)){
				HX_STACK_LINE(987)
				tmp21 = targetPoint;
			}
			else{
				HX_STACK_LINE(987)
				::openfl::geom::Point tmp22 = targetPoint;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(987)
				tmp21 = target->globalToLocal(tmp22);
			}
			HX_STACK_LINE(987)
			::openfl::display::InteractiveObject tmp22 = target;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(987)
			::openfl::events::MouseEvent tmp23 = ::openfl::events::MouseEvent_obj::__create(tmp16,tmp17,tmp18,tmp19,tmp21,tmp22,null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(987)
			this->__fireEvent(tmp23,stack);
			HX_STACK_LINE(989)
			bool tmp24 = (type == HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(989)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(989)
			if ((tmp24)){
				HX_STACK_LINE(989)
				::openfl::display::InteractiveObject tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(989)
				tmp26 = hx::TCast< ::openfl::display::InteractiveObject >::cast(target);
				HX_STACK_LINE(989)
				::openfl::display::InteractiveObject tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(989)
				tmp25 = tmp27->doubleClickEnabled;
			}
			else{
				HX_STACK_LINE(989)
				tmp25 = false;
			}
			HX_STACK_LINE(989)
			if ((tmp25)){
				HX_STACK_LINE(991)
				int tmp26 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(991)
				int currentTime = tmp26;		HX_STACK_VAR(currentTime,"currentTime");
				HX_STACK_LINE(992)
				int tmp27 = currentTime;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(992)
				int tmp28 = this->__lastClickTime;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(992)
				int tmp29 = (tmp27 - tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(992)
				bool tmp30 = (tmp29 < (int)500);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(992)
				if ((tmp30)){
					HX_STACK_LINE(994)
					int tmp31 = button;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(994)
					Float tmp32 = this->__mouseX;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(994)
					Float tmp33 = this->__mouseY;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(994)
					bool tmp34 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(994)
					::openfl::geom::Point tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(994)
					if ((tmp34)){
						HX_STACK_LINE(994)
						tmp35 = targetPoint;
					}
					else{
						HX_STACK_LINE(994)
						::openfl::geom::Point tmp36 = targetPoint;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(994)
						tmp35 = target->globalToLocal(tmp36);
					}
					HX_STACK_LINE(994)
					::openfl::display::InteractiveObject tmp36 = target;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(994)
					::openfl::events::MouseEvent tmp37 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("doubleClick","\x77","\x03","\x76","\xcd"),tmp31,tmp32,tmp33,tmp35,tmp36,null());		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(994)
					this->__fireEvent(tmp37,stack);
					HX_STACK_LINE(995)
					this->__lastClickTime = (int)0;
				}
				else{
					HX_STACK_LINE(999)
					this->__lastClickTime = currentTime;
				}
			}
		}
		HX_STACK_LINE(1007)
		::lime::ui::MouseCursor cursor = null();		HX_STACK_VAR(cursor,"cursor");
		HX_STACK_LINE(1009)
		{
			HX_STACK_LINE(1009)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1009)
			while((true)){
				HX_STACK_LINE(1009)
				bool tmp16 = (_g < stack->length);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1009)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1009)
				if ((tmp17)){
					HX_STACK_LINE(1009)
					break;
				}
				HX_STACK_LINE(1009)
				::openfl::display::DisplayObject tmp18 = stack->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1009)
				::openfl::display::DisplayObject target1 = tmp18;		HX_STACK_VAR(target1,"target1");
				HX_STACK_LINE(1009)
				++(_g);
				HX_STACK_LINE(1011)
				::lime::ui::MouseCursor tmp19 = target1->__getCursor();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1011)
				cursor = tmp19;
				HX_STACK_LINE(1013)
				bool tmp20 = (cursor != null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1013)
				if ((tmp20)){
					HX_STACK_LINE(1015)
					::lime::ui::MouseCursor tmp21 = cursor;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1015)
					::lime::ui::Mouse_obj::set_cursor(tmp21);
					HX_STACK_LINE(1016)
					break;
				}
			}
		}
		HX_STACK_LINE(1022)
		bool tmp16 = (cursor == null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1022)
		if ((tmp16)){
			HX_STACK_LINE(1024)
			::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::ARROW);
		}
		HX_STACK_LINE(1028)
		::openfl::events::MouseEvent event;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(1028)
		::openfl::geom::Point localPoint;		HX_STACK_VAR(localPoint,"localPoint");
		HX_STACK_LINE(1030)
		{
			HX_STACK_LINE(1030)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1030)
			Array< ::Dynamic > _g1 = this->__mouseOutStack;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1030)
			while((true)){
				HX_STACK_LINE(1030)
				bool tmp17 = (_g < _g1->length);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1030)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1030)
				if ((tmp18)){
					HX_STACK_LINE(1030)
					break;
				}
				HX_STACK_LINE(1030)
				::openfl::display::DisplayObject tmp19 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1030)
				::openfl::display::DisplayObject target1 = tmp19;		HX_STACK_VAR(target1,"target1");
				HX_STACK_LINE(1030)
				++(_g);
				HX_STACK_LINE(1032)
				::openfl::display::DisplayObject tmp20 = target1;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1032)
				int tmp21 = stack->indexOf(tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1032)
				bool tmp22 = (tmp21 == (int)-1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1032)
				if ((tmp22)){
					HX_STACK_LINE(1034)
					::openfl::display::DisplayObject tmp23 = target1;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1034)
					this->__mouseOutStack->remove(tmp23);
					HX_STACK_LINE(1036)
					::openfl::geom::Point tmp24 = targetPoint;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1036)
					::openfl::geom::Point tmp25 = target1->globalToLocal(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(1036)
					localPoint = tmp25;
					HX_STACK_LINE(1037)
					int tmp26 = button;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(1037)
					Float tmp27 = this->__mouseX;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1037)
					Float tmp28 = this->__mouseY;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1037)
					::openfl::geom::Point tmp29 = localPoint;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1037)
					::openfl::display::InteractiveObject tmp30 = ((::openfl::display::InteractiveObject)(target1));		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1037)
					::openfl::events::MouseEvent tmp31 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"),tmp26,tmp27,tmp28,tmp29,tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1037)
					event = tmp31;
					HX_STACK_LINE(1038)
					event->bubbles = false;
					HX_STACK_LINE(1039)
					::openfl::events::MouseEvent tmp32 = event;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1039)
					target1->__dispatchEvent(tmp32);
				}
			}
		}
		HX_STACK_LINE(1045)
		{
			HX_STACK_LINE(1045)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1045)
			while((true)){
				HX_STACK_LINE(1045)
				bool tmp17 = (_g < stack->length);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1045)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1045)
				if ((tmp18)){
					HX_STACK_LINE(1045)
					break;
				}
				HX_STACK_LINE(1045)
				::openfl::display::DisplayObject tmp19 = stack->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1045)
				::openfl::display::DisplayObject target1 = tmp19;		HX_STACK_VAR(target1,"target1");
				HX_STACK_LINE(1045)
				++(_g);
				HX_STACK_LINE(1047)
				::openfl::display::DisplayObject tmp20 = target1;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1047)
				int tmp21 = this->__mouseOutStack->indexOf(tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1047)
				bool tmp22 = (tmp21 == (int)-1);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1047)
				if ((tmp22)){
					HX_STACK_LINE(1049)
					bool tmp23 = target1->hasEventListener(HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6"));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(1049)
					if ((tmp23)){
						HX_STACK_LINE(1051)
						::openfl::geom::Point tmp24 = targetPoint;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(1051)
						::openfl::geom::Point tmp25 = target1->globalToLocal(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1051)
						localPoint = tmp25;
						HX_STACK_LINE(1052)
						int tmp26 = button;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(1052)
						Float tmp27 = this->__mouseX;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1052)
						Float tmp28 = this->__mouseY;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1052)
						::openfl::geom::Point tmp29 = localPoint;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1052)
						::openfl::display::InteractiveObject tmp30 = ((::openfl::display::InteractiveObject)(target1));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1052)
						::openfl::events::MouseEvent tmp31 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseOver","\x19","\x4a","\x0d","\xf6"),tmp26,tmp27,tmp28,tmp29,tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1052)
						event = tmp31;
						HX_STACK_LINE(1053)
						event->bubbles = false;
						HX_STACK_LINE(1054)
						::openfl::events::MouseEvent tmp32 = event;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1054)
						target1->__dispatchEvent(tmp32);
					}
					HX_STACK_LINE(1058)
					bool tmp24 = target1->hasEventListener(HX_HCSTRING("mouseOut","\x69","\xe7","\x1d","\xa4"));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(1058)
					if ((tmp24)){
						HX_STACK_LINE(1060)
						::openfl::display::DisplayObject tmp25 = target1;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(1060)
						this->__mouseOutStack->push(tmp25);
					}
				}
			}
		}
		HX_STACK_LINE(1068)
		::openfl::display::Sprite tmp17 = this->__dragObject;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1068)
		bool tmp18 = (tmp17 != null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1068)
		if ((tmp18)){
			HX_STACK_LINE(1070)
			::openfl::geom::Point tmp19 = targetPoint;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1070)
			this->__drag(tmp19);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Stage_obj,__onMouse,(void))

Void Stage_obj::__onMouseWheel( Float deltaX,Float deltaY){
{
		HX_STACK_FRAME("openfl.display.Stage","__onMouseWheel",0x6d35c26f,"openfl.display.Stage.__onMouseWheel","openfl/display/Stage.hx",1077,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaX,"deltaX")
		HX_STACK_ARG(deltaY,"deltaY")
		HX_STACK_LINE(1079)
		Float tmp = this->__mouseX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1079)
		Float x = tmp;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(1080)
		Float tmp1 = this->__mouseY;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1080)
		Float y = tmp1;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(1082)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(1084)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1084)
		Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1084)
		bool tmp4 = this->__hitTest(tmp2,tmp3,false,stack,true,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1084)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1084)
		if ((tmp5)){
			HX_STACK_LINE(1086)
			stack = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(1090)
		int tmp6 = (stack->length - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1090)
		::openfl::display::DisplayObject tmp7 = stack->__get(tmp6).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1090)
		::openfl::display::InteractiveObject target = ((::openfl::display::InteractiveObject)(tmp7));		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(1091)
		::openfl::geom::Point tmp8 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1091)
		::openfl::geom::Point targetPoint = tmp8;		HX_STACK_VAR(targetPoint,"targetPoint");
		HX_STACK_LINE(1092)
		Float tmp9 = deltaY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1092)
		int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1092)
		int delta = tmp10;		HX_STACK_VAR(delta,"delta");
		HX_STACK_LINE(1094)
		Float tmp11 = this->__mouseX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1094)
		Float tmp12 = this->__mouseY;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1094)
		bool tmp13 = (target == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1094)
		::openfl::geom::Point tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1094)
		if ((tmp13)){
			HX_STACK_LINE(1094)
			tmp14 = targetPoint;
		}
		else{
			HX_STACK_LINE(1094)
			::openfl::geom::Point tmp15 = targetPoint;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1094)
			tmp14 = target->globalToLocal(tmp15);
		}
		HX_STACK_LINE(1094)
		::openfl::display::InteractiveObject tmp15 = target;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1094)
		int tmp16 = delta;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1094)
		::openfl::events::MouseEvent tmp17 = ::openfl::events::MouseEvent_obj::__create(HX_HCSTRING("mouseWheel","\x36","\x28","\x87","\xe7"),(int)0,tmp11,tmp12,tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1094)
		this->__fireEvent(tmp17,stack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onMouseWheel,(void))

Void Stage_obj::__onTouch( ::String type,::lime::ui::Touch touch){
{
		HX_STACK_FRAME("openfl.display.Stage","__onTouch",0x049ca826,"openfl.display.Stage.__onTouch","openfl/display/Stage.hx",1099,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(touch,"touch")
		HX_STACK_LINE(1101)
		Float tmp = touch->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1101)
		int tmp1 = this->stageWidth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1101)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1101)
		Float tmp3 = touch->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1101)
		int tmp4 = this->stageHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1101)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1101)
		::openfl::geom::Point tmp6 = ::openfl::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1101)
		::openfl::geom::Point point = tmp6;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1103)
		this->__mouseX = point->x;
		HX_STACK_LINE(1104)
		this->__mouseY = point->y;
		HX_STACK_LINE(1106)
		Array< ::Dynamic > __stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(__stack,"__stack");
		HX_STACK_LINE(1108)
		Float tmp7 = this->__mouseX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1108)
		Float tmp8 = this->__mouseY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1108)
		bool tmp9 = this->__hitTest(tmp7,tmp8,false,__stack,true,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1108)
		if ((tmp9)){
			HX_STACK_LINE(1110)
			int tmp10 = (__stack->length - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1110)
			::openfl::display::DisplayObject tmp11 = __stack->__get(tmp10).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1110)
			::openfl::display::DisplayObject target = tmp11;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(1111)
			bool tmp12 = (target == null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1111)
			if ((tmp12)){
				HX_STACK_LINE(1111)
				target = hx::ObjectPtr<OBJ_>(this);
			}
			HX_STACK_LINE(1112)
			::openfl::geom::Point tmp13 = point;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1112)
			::openfl::geom::Point tmp14 = target->globalToLocal(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1112)
			::openfl::geom::Point localPoint = tmp14;		HX_STACK_VAR(localPoint,"localPoint");
			HX_STACK_LINE(1114)
			::String tmp15 = type;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1114)
			Float tmp16 = this->__mouseX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1114)
			Float tmp17 = this->__mouseY;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1114)
			::openfl::geom::Point tmp18 = localPoint;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1114)
			::openfl::display::InteractiveObject tmp19 = ((::openfl::display::InteractiveObject)(target));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1114)
			::openfl::events::TouchEvent tmp20 = ::openfl::events::TouchEvent_obj::__create(tmp15,null(),tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1114)
			::openfl::events::TouchEvent touchEvent = tmp20;		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1115)
			touchEvent->touchPointID = touch->id;
			HX_STACK_LINE(1117)
			touchEvent->isPrimaryTouchPoint = true;
			HX_STACK_LINE(1119)
			::openfl::events::TouchEvent tmp21 = touchEvent;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1119)
			this->__fireEvent(tmp21,__stack);
		}
		else{
			HX_STACK_LINE(1123)
			::String tmp10 = type;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1123)
			Float tmp11 = this->__mouseX;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1123)
			Float tmp12 = this->__mouseY;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1123)
			::openfl::geom::Point tmp13 = point;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1123)
			::openfl::events::TouchEvent tmp14 = ::openfl::events::TouchEvent_obj::__create(tmp10,null(),tmp11,tmp12,tmp13,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1123)
			::openfl::events::TouchEvent touchEvent = tmp14;		HX_STACK_VAR(touchEvent,"touchEvent");
			HX_STACK_LINE(1124)
			touchEvent->touchPointID = touch->id;
			HX_STACK_LINE(1126)
			touchEvent->isPrimaryTouchPoint = true;
			HX_STACK_LINE(1128)
			::openfl::events::TouchEvent tmp15 = touchEvent;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1128)
			::openfl::display::Stage tmp16 = this->stage;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1128)
			this->__fireEvent(tmp15,Array_obj< ::Dynamic >::__new().Add(tmp16));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,__onTouch,(void))

Void Stage_obj::__resize( ){
{
		HX_STACK_FRAME("openfl.display.Stage","__resize",0x872a0aae,"openfl.display.Stage.__resize","openfl/display/Stage.hx",1135,0xadca4c2c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,__resize,(void))

Void Stage_obj::__startDrag( ::openfl::display::Sprite sprite,bool lockCenter,::openfl::geom::Rectangle bounds){
{
		HX_STACK_FRAME("openfl.display.Stage","__startDrag",0x2df4a4fc,"openfl.display.Stage.__startDrag","openfl/display/Stage.hx",1196,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(lockCenter,"lockCenter")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(1198)
		bool tmp = (bounds == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1198)
		::openfl::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1198)
		if ((tmp)){
			HX_STACK_LINE(1198)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(1198)
			tmp1 = bounds->clone();
		}
		HX_STACK_LINE(1198)
		this->__dragBounds = tmp1;
		HX_STACK_LINE(1199)
		this->__dragObject = sprite;
		HX_STACK_LINE(1201)
		::openfl::display::Sprite tmp2 = this->__dragObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1201)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1201)
		if ((tmp3)){
			HX_STACK_LINE(1203)
			bool tmp4 = lockCenter;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1203)
			if ((tmp4)){
				HX_STACK_LINE(1205)
				::openfl::display::Sprite tmp5 = this->__dragObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1205)
				Float tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1205)
				Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1205)
				Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1205)
				this->__dragOffsetX = tmp8;
				HX_STACK_LINE(1206)
				::openfl::display::Sprite tmp9 = this->__dragObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1206)
				Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1206)
				Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1206)
				Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1206)
				this->__dragOffsetY = tmp12;
			}
			else{
				HX_STACK_LINE(1210)
				Float tmp5 = this->get_mouseX();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1210)
				Float tmp6 = this->get_mouseY();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1210)
				::openfl::geom::Point tmp7 = ::openfl::geom::Point_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1210)
				::openfl::geom::Point mouse = tmp7;		HX_STACK_VAR(mouse,"mouse");
				HX_STACK_LINE(1211)
				::openfl::display::Sprite tmp8 = this->__dragObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1211)
				::openfl::display::DisplayObjectContainer parent = tmp8->parent;		HX_STACK_VAR(parent,"parent");
				HX_STACK_LINE(1213)
				bool tmp9 = (parent != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1213)
				if ((tmp9)){
					HX_STACK_LINE(1215)
					::openfl::geom::Point tmp10 = mouse;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1215)
					::openfl::geom::Point tmp11 = parent->globalToLocal(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1215)
					mouse = tmp11;
				}
				HX_STACK_LINE(1219)
				::openfl::display::Sprite tmp10 = this->__dragObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1219)
				Float tmp11 = tmp10->get_x();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1219)
				Float tmp12 = mouse->x;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1219)
				Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1219)
				this->__dragOffsetX = tmp13;
				HX_STACK_LINE(1220)
				::openfl::display::Sprite tmp14 = this->__dragObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1220)
				Float tmp15 = tmp14->get_y();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1220)
				Float tmp16 = mouse->y;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1220)
				Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1220)
				this->__dragOffsetY = tmp17;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,__startDrag,(void))

Void Stage_obj::__stopDrag( ::openfl::display::Sprite sprite){
{
		HX_STACK_FRAME("openfl.display.Stage","__stopDrag",0x21724450,"openfl.display.Stage.__stopDrag","openfl/display/Stage.hx",1229,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(1231)
		this->__dragBounds = null();
		HX_STACK_LINE(1232)
		this->__dragObject = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,__stopDrag,(void))

Void Stage_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGrahpics){
{
		HX_STACK_FRAME("openfl.display.Stage","__update",0x05b436c3,"openfl.display.Stage.__update","openfl/display/Stage.hx",1237,0xadca4c2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGrahpics,"maskGrahpics")
		HX_STACK_LINE(1239)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1239)
		if ((tmp)){
			HX_STACK_LINE(1241)
			int tmp1 = ::openfl::display::DisplayObject_obj::__worldTransformDirty;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1241)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1241)
			if ((tmp2)){
				HX_STACK_LINE(1243)
				bool tmp3 = updateChildren;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1243)
				::openfl::display::Graphics tmp4 = maskGrahpics;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1243)
				this->super::__update(true,tmp3,tmp4);
				HX_STACK_LINE(1245)
				bool tmp5 = updateChildren;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1245)
				if ((tmp5)){
					HX_STACK_LINE(1247)
					::openfl::display::DisplayObject_obj::__worldTransformDirty = (int)0;
					HX_STACK_LINE(1248)
					this->__dirty = true;
				}
			}
		}
		else{
			HX_STACK_LINE(1256)
			int tmp1 = ::openfl::display::DisplayObject_obj::__worldTransformDirty;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1256)
			bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1256)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1256)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1256)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1256)
			if ((tmp4)){
				HX_STACK_LINE(1256)
				tmp5 = this->__dirty;
			}
			else{
				HX_STACK_LINE(1256)
				tmp5 = true;
			}
			HX_STACK_LINE(1256)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1256)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1256)
			if ((tmp6)){
				HX_STACK_LINE(1256)
				int tmp8 = ::openfl::display::DisplayObject_obj::__worldRenderDirty;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1256)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1256)
				tmp7 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(1256)
				tmp7 = true;
			}
			HX_STACK_LINE(1256)
			if ((tmp7)){
				HX_STACK_LINE(1258)
				bool tmp8 = updateChildren;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1258)
				::openfl::display::Graphics tmp9 = maskGrahpics;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1258)
				this->super::__update(false,tmp8,tmp9);
				HX_STACK_LINE(1260)
				bool tmp10 = updateChildren;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1260)
				if ((tmp10)){
					HX_STACK_LINE(1266)
					::openfl::display::DisplayObject_obj::__worldTransformDirty = (int)0;
					HX_STACK_LINE(1267)
					::openfl::display::DisplayObject_obj::__worldRenderDirty = (int)0;
					HX_STACK_LINE(1268)
					this->__dirty = false;
				}
			}
		}
	}
return null();
}


Float Stage_obj::get_mouseX( ){
	HX_STACK_FRAME("openfl.display.Stage","get_mouseX",0xa5a51a76,"openfl.display.Stage.get_mouseX","openfl/display/Stage.hx",1299,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1301)
	Float tmp = this->__mouseX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1301)
	return tmp;
}


Float Stage_obj::get_mouseY( ){
	HX_STACK_FRAME("openfl.display.Stage","get_mouseY",0xa5a51a77,"openfl.display.Stage.get_mouseY","openfl/display/Stage.hx",1306,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1308)
	Float tmp = this->__mouseY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1308)
	return tmp;
}


int Stage_obj::get_color( ){
	HX_STACK_FRAME("openfl.display.Stage","get_color",0x66e36ee0,"openfl.display.Stage.get_color","openfl/display/Stage.hx",1343,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1345)
	int tmp = this->__color;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1345)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_color,return )

int Stage_obj::set_color( int value){
	HX_STACK_FRAME("openfl.display.Stage","set_color",0x4a345aec,"openfl.display.Stage.set_color","openfl/display/Stage.hx",1350,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1352)
	int tmp = (int(value) & int((int)16711680));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1352)
	int tmp1 = hx::UShr(tmp,(int)16);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1352)
	int r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(1353)
	int tmp2 = (int(value) & int((int)65280));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1353)
	int tmp3 = hx::UShr(tmp2,(int)8);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1353)
	int g = tmp3;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(1354)
	int tmp4 = (int(value) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1354)
	int b = tmp4;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(1356)
	Float tmp5 = (Float(r) / Float((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1356)
	Float tmp6 = (Float(g) / Float((int)255));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1356)
	Float tmp7 = (Float(b) / Float((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1356)
	this->__colorSplit = Array_obj< Float >::__new().Add(tmp5).Add(tmp6).Add(tmp7);
	HX_STACK_LINE(1357)
	int tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1357)
	::String tmp9 = ::StringTools_obj::hex(tmp8,(int)6);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1357)
	::String tmp10 = (HX_HCSTRING("#","\x23","\x00","\x00","\x00") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1357)
	this->__colorString = tmp10;
	HX_STACK_LINE(1359)
	int tmp11 = this->__color = value;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1359)
	return tmp11;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_color,return )

Dynamic Stage_obj::get_displayState( ){
	HX_STACK_FRAME("openfl.display.Stage","get_displayState",0x7908a892,"openfl.display.Stage.get_displayState","openfl/display/Stage.hx",1364,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1366)
	Dynamic tmp = this->__displayState;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1366)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_displayState,return )

Dynamic Stage_obj::set_displayState( Dynamic value){
	HX_STACK_FRAME("openfl.display.Stage","set_displayState",0xcf4a9606,"openfl.display.Stage.set_displayState","openfl/display/Stage.hx",1371,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1373)
	::lime::ui::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1373)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1373)
	if ((tmp1)){
		HX_STACK_LINE(1375)
		Dynamic tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1375)
		switch( (int)(tmp2)){
			case (int)2: {
				HX_STACK_LINE(1379)
				::lime::ui::Window tmp3 = this->window;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1379)
				bool tmp4 = tmp3->__fullscreen;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1379)
				if ((tmp4)){
					HX_STACK_LINE(1382)
					::lime::ui::Window tmp5 = this->window;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1382)
					tmp5->set_fullscreen(false);
					HX_STACK_LINE(1384)
					::lime::ui::Window tmp6 = this->window;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1384)
					int tmp7 = tmp6->__width;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1384)
					::lime::ui::Window tmp8 = this->window;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1384)
					Float tmp9 = tmp8->__scale;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1384)
					Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1384)
					int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1384)
					this->stageWidth = tmp11;
					HX_STACK_LINE(1385)
					::lime::ui::Window tmp12 = this->window;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1385)
					int tmp13 = tmp12->__height;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1385)
					::lime::ui::Window tmp14 = this->window;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1385)
					Float tmp15 = tmp14->__scale;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1385)
					Float tmp16 = (tmp13 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1385)
					int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1385)
					this->stageHeight = tmp17;
					HX_STACK_LINE(1387)
					::openfl::events::FullScreenEvent tmp18 = ::openfl::events::FullScreenEvent_obj::__new(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),false,false,false,true);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1387)
					this->dispatchEvent(tmp18);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(1393)
				::lime::ui::Window tmp3 = this->window;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1393)
				bool tmp4 = tmp3->__fullscreen;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1393)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1393)
				if ((tmp5)){
					HX_STACK_LINE(1396)
					::lime::ui::Window tmp6 = this->window;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1396)
					tmp6->set_fullscreen(true);
					HX_STACK_LINE(1398)
					::lime::ui::Window tmp7 = this->window;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1398)
					int tmp8 = tmp7->__width;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1398)
					::lime::ui::Window tmp9 = this->window;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1398)
					Float tmp10 = tmp9->__scale;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1398)
					Float tmp11 = (tmp8 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1398)
					int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1398)
					this->stageWidth = tmp12;
					HX_STACK_LINE(1399)
					::lime::ui::Window tmp13 = this->window;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1399)
					int tmp14 = tmp13->__height;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1399)
					::lime::ui::Window tmp15 = this->window;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1399)
					Float tmp16 = tmp15->__scale;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1399)
					Float tmp17 = (tmp14 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1399)
					int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1399)
					this->stageHeight = tmp18;
					HX_STACK_LINE(1401)
					::openfl::events::FullScreenEvent tmp19 = ::openfl::events::FullScreenEvent_obj::__new(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),false,false,true,true);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1401)
					this->dispatchEvent(tmp19);
				}
			}
		}
	}
	HX_STACK_LINE(1409)
	Dynamic tmp2 = this->__displayState = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1409)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_displayState,return )

::openfl::display::InteractiveObject Stage_obj::get_focus( ){
	HX_STACK_FRAME("openfl.display.Stage","get_focus",0x21105d55,"openfl.display.Stage.get_focus","openfl/display/Stage.hx",1414,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1416)
	::openfl::display::InteractiveObject tmp = this->__focus;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1416)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_focus,return )

::openfl::display::InteractiveObject Stage_obj::set_focus( ::openfl::display::InteractiveObject value){
	HX_STACK_FRAME("openfl.display.Stage","set_focus",0x04614961,"openfl.display.Stage.set_focus","openfl/display/Stage.hx",1421,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1423)
	::openfl::display::InteractiveObject tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1423)
	::openfl::display::InteractiveObject tmp1 = this->__focus;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1423)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1423)
	if ((tmp2)){
		HX_STACK_LINE(1425)
		::openfl::display::InteractiveObject tmp3 = this->__focus;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1425)
		::openfl::display::InteractiveObject oldFocus = tmp3;		HX_STACK_VAR(oldFocus,"oldFocus");
		HX_STACK_LINE(1426)
		this->__focus = value;
		HX_STACK_LINE(1428)
		bool tmp4 = (oldFocus != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1428)
		if ((tmp4)){
			HX_STACK_LINE(1430)
			::openfl::display::InteractiveObject tmp5 = this->__focus;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1430)
			::openfl::events::FocusEvent tmp6 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11"),true,false,tmp5,false,(int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1430)
			::openfl::events::FocusEvent event = tmp6;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1431)
			this->__stack = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(1432)
			oldFocus->__getInteractive(this->__stack);
			HX_STACK_LINE(1433)
			this->__stack->reverse();
			HX_STACK_LINE(1434)
			::openfl::events::FocusEvent tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1434)
			this->__fireEvent(tmp7,this->__stack);
		}
		HX_STACK_LINE(1438)
		::openfl::display::InteractiveObject tmp5 = this->__focus;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1438)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1438)
		if ((tmp6)){
			HX_STACK_LINE(1440)
			::openfl::events::FocusEvent tmp7 = ::openfl::events::FocusEvent_obj::__new(HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41"),true,false,oldFocus,false,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1440)
			::openfl::events::FocusEvent event = tmp7;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(1441)
			this->__stack = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(1442)
			value->__getInteractive(this->__stack);
			HX_STACK_LINE(1443)
			this->__stack->reverse();
			HX_STACK_LINE(1444)
			::openfl::events::FocusEvent tmp8 = event;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1444)
			this->__fireEvent(tmp8,this->__stack);
		}
	}
	HX_STACK_LINE(1450)
	::openfl::display::InteractiveObject tmp3 = this->__focus;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1450)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_focus,return )

Float Stage_obj::get_frameRate( ){
	HX_STACK_FRAME("openfl.display.Stage","get_frameRate",0x6a8511aa,"openfl.display.Stage.get_frameRate","openfl/display/Stage.hx",1455,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1457)
	::lime::app::Application tmp = this->application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1457)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1457)
	if ((tmp1)){
		HX_STACK_LINE(1459)
		::lime::app::Application tmp2 = this->application;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1459)
		Float tmp3 = tmp2->backend->getFrameRate();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1459)
		return tmp3;
	}
	HX_STACK_LINE(1463)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_frameRate,return )

Float Stage_obj::set_frameRate( Float value){
	HX_STACK_FRAME("openfl.display.Stage","set_frameRate",0xaf8af3b6,"openfl.display.Stage.set_frameRate","openfl/display/Stage.hx",1468,0xadca4c2c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1470)
	::lime::app::Application tmp = this->application;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1470)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1470)
	if ((tmp1)){
		HX_STACK_LINE(1472)
		::lime::app::Application tmp2 = this->application;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1472)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1472)
		Float tmp4 = tmp2->backend->setFrameRate(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1472)
		return tmp4;
	}
	HX_STACK_LINE(1476)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1476)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_frameRate,return )


Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_MARK_MEMBER_NAME(allowsFullScreenInteractive,"allowsFullScreenInteractive");
	HX_MARK_MEMBER_NAME(application,"application");
	HX_MARK_MEMBER_NAME(quality,"quality");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_MARK_MEMBER_NAME(stageFocusRect,"stageFocusRect");
	HX_MARK_MEMBER_NAME(stageHeight,"stageHeight");
	HX_MARK_MEMBER_NAME(stageWidth,"stageWidth");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(__clearBeforeRender,"__clearBeforeRender");
	HX_MARK_MEMBER_NAME(__color,"__color");
	HX_MARK_MEMBER_NAME(__colorSplit,"__colorSplit");
	HX_MARK_MEMBER_NAME(__colorString,"__colorString");
	HX_MARK_MEMBER_NAME(__deltaTime,"__deltaTime");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__displayState,"__displayState");
	HX_MARK_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_MARK_MEMBER_NAME(__dragObject,"__dragObject");
	HX_MARK_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_MARK_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_MARK_MEMBER_NAME(__focus,"__focus");
	HX_MARK_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_MARK_MEMBER_NAME(__invalidated,"__invalidated");
	HX_MARK_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_MARK_MEMBER_NAME(__macKeyboard,"__macKeyboard");
	HX_MARK_MEMBER_NAME(__mouseDownLeft,"__mouseDownLeft");
	HX_MARK_MEMBER_NAME(__mouseDownMiddle,"__mouseDownMiddle");
	HX_MARK_MEMBER_NAME(__mouseDownRight,"__mouseDownRight");
	HX_MARK_MEMBER_NAME(__mouseOutStack,"__mouseOutStack");
	HX_MARK_MEMBER_NAME(__mouseX,"__mouseX");
	HX_MARK_MEMBER_NAME(__mouseY,"__mouseY");
	HX_MARK_MEMBER_NAME(__originalWidth,"__originalWidth");
	HX_MARK_MEMBER_NAME(__originalHeight,"__originalHeight");
	HX_MARK_MEMBER_NAME(__renderer,"__renderer");
	HX_MARK_MEMBER_NAME(__rendering,"__rendering");
	HX_MARK_MEMBER_NAME(__stack,"__stack");
	HX_MARK_MEMBER_NAME(__transparent,"__transparent");
	HX_MARK_MEMBER_NAME(__wasDirty,"__wasDirty");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(allowsFullScreen,"allowsFullScreen");
	HX_VISIT_MEMBER_NAME(allowsFullScreenInteractive,"allowsFullScreenInteractive");
	HX_VISIT_MEMBER_NAME(application,"application");
	HX_VISIT_MEMBER_NAME(quality,"quality");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(stage3Ds,"stage3Ds");
	HX_VISIT_MEMBER_NAME(stageFocusRect,"stageFocusRect");
	HX_VISIT_MEMBER_NAME(stageHeight,"stageHeight");
	HX_VISIT_MEMBER_NAME(stageWidth,"stageWidth");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(__clearBeforeRender,"__clearBeforeRender");
	HX_VISIT_MEMBER_NAME(__color,"__color");
	HX_VISIT_MEMBER_NAME(__colorSplit,"__colorSplit");
	HX_VISIT_MEMBER_NAME(__colorString,"__colorString");
	HX_VISIT_MEMBER_NAME(__deltaTime,"__deltaTime");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__displayState,"__displayState");
	HX_VISIT_MEMBER_NAME(__dragBounds,"__dragBounds");
	HX_VISIT_MEMBER_NAME(__dragObject,"__dragObject");
	HX_VISIT_MEMBER_NAME(__dragOffsetX,"__dragOffsetX");
	HX_VISIT_MEMBER_NAME(__dragOffsetY,"__dragOffsetY");
	HX_VISIT_MEMBER_NAME(__focus,"__focus");
	HX_VISIT_MEMBER_NAME(__fullscreen,"__fullscreen");
	HX_VISIT_MEMBER_NAME(__invalidated,"__invalidated");
	HX_VISIT_MEMBER_NAME(__lastClickTime,"__lastClickTime");
	HX_VISIT_MEMBER_NAME(__macKeyboard,"__macKeyboard");
	HX_VISIT_MEMBER_NAME(__mouseDownLeft,"__mouseDownLeft");
	HX_VISIT_MEMBER_NAME(__mouseDownMiddle,"__mouseDownMiddle");
	HX_VISIT_MEMBER_NAME(__mouseDownRight,"__mouseDownRight");
	HX_VISIT_MEMBER_NAME(__mouseOutStack,"__mouseOutStack");
	HX_VISIT_MEMBER_NAME(__mouseX,"__mouseX");
	HX_VISIT_MEMBER_NAME(__mouseY,"__mouseY");
	HX_VISIT_MEMBER_NAME(__originalWidth,"__originalWidth");
	HX_VISIT_MEMBER_NAME(__originalHeight,"__originalHeight");
	HX_VISIT_MEMBER_NAME(__renderer,"__renderer");
	HX_VISIT_MEMBER_NAME(__rendering,"__rendering");
	HX_VISIT_MEMBER_NAME(__stack,"__stack");
	HX_VISIT_MEMBER_NAME(__transparent,"__transparent");
	HX_VISIT_MEMBER_NAME(__wasDirty,"__wasDirty");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return align; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return get_color(); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return get_focus(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"__drag") ) { return __drag_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
		if (HX_FIELD_EQ(inName,"__color") ) { return __color; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__focus") ) { return __focus; }
		if (HX_FIELD_EQ(inName,"__stack") ) { return __stack; }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"__onKey") ) { return __onKey_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { return stage3Ds; }
		if (HX_FIELD_EQ(inName,"__mouseX") ) { return __mouseX; }
		if (HX_FIELD_EQ(inName,"__mouseY") ) { return __mouseY; }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return get_frameRate(); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return scaleMode; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouse") ) { return __onMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"__onTouch") ) { return __onTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return get_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return set_focus_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { return stageWidth; }
		if (HX_FIELD_EQ(inName,"__renderer") ) { return __renderer; }
		if (HX_FIELD_EQ(inName,"__wasDirty") ) { return __wasDirty; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextEdit") ) { return onTextEdit_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchEnd") ) { return onTouchEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopDrag") ) { return __stopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { return application; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { return stageHeight; }
		if (HX_FIELD_EQ(inName,"__deltaTime") ) { return __deltaTime; }
		if (HX_FIELD_EQ(inName,"__rendering") ) { return __rendering; }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onTextInput") ) { return onTextInput_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchMove") ) { return onTouchMove_dyn(); }
		if (HX_FIELD_EQ(inName,"__fireEvent") ) { return __fireEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"__startDrag") ) { return __startDrag_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp == hx::paccAlways) return get_displayState(); }
		if (HX_FIELD_EQ(inName,"__colorSplit") ) { return __colorSplit; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { return __dragBounds; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { return __dragObject; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { return __fullscreen; }
		if (HX_FIELD_EQ(inName,"onModuleExit") ) { return onModuleExit_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouchStart") ) { return onTouchStart_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMove") ) { return onWindowMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__colorString") ) { return __colorString; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { return __dragOffsetX; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { return __dragOffsetY; }
		if (HX_FIELD_EQ(inName,"__invalidated") ) { return __invalidated; }
		if (HX_FIELD_EQ(inName,"__macKeyboard") ) { return __macKeyboard; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { return __transparent; }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowClose") ) { return onWindowClose_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowEnter") ) { return onWindowEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowLeave") ) { return onWindowLeave_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return get_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { return stageFocusRect; }
		if (HX_FIELD_EQ(inName,"__displayState") ) { return __displayState; }
		if (HX_FIELD_EQ(inName,"onWindowCreate") ) { return onWindowCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowResize") ) { return onWindowResize_dyn(); }
		if (HX_FIELD_EQ(inName,"__onMouseWheel") ) { return __onMouseWheel_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { return __lastClickTime; }
		if (HX_FIELD_EQ(inName,"__mouseDownLeft") ) { return __mouseDownLeft; }
		if (HX_FIELD_EQ(inName,"__mouseOutStack") ) { return __mouseOutStack; }
		if (HX_FIELD_EQ(inName,"__originalWidth") ) { return __originalWidth; }
		if (HX_FIELD_EQ(inName,"onWindowFocusIn") ) { return onWindowFocusIn_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowRestore") ) { return onWindowRestore_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { return allowsFullScreen; }
		if (HX_FIELD_EQ(inName,"__mouseDownRight") ) { return __mouseDownRight; }
		if (HX_FIELD_EQ(inName,"__originalHeight") ) { return __originalHeight; }
		if (HX_FIELD_EQ(inName,"onGamepadConnect") ) { return onGamepadConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowActivate") ) { return onWindowActivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowDropFile") ) { return onWindowDropFile_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFocusOut") ) { return onWindowFocusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowMinimize") ) { return onWindowMinimize_dyn(); }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayState") ) { return get_displayState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayState") ) { return set_displayState_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__mouseDownMiddle") ) { return __mouseDownMiddle; }
		if (HX_FIELD_EQ(inName,"onGamepadAxisMove") ) { return onGamepadAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadButtonUp") ) { return onGamepadButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickConnect") ) { return onJoystickConnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickHatMove") ) { return onJoystickHatMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadComplete") ) { return onPreloadComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onPreloadProgress") ) { return onPreloadProgress_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onJoystickAxisMove") ) { return onJoystickAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickButtonUp") ) { return onJoystickButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowDeactivate") ) { return onWindowDeactivate_dyn(); }
		if (HX_FIELD_EQ(inName,"onWindowFullscreen") ) { return onWindowFullscreen_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__clearBeforeRender") ) { return __clearBeforeRender; }
		if (HX_FIELD_EQ(inName,"onGamepadButtonDown") ) { return onGamepadButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onGamepadDisconnect") ) { return onGamepadDisconnect_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMoveRelative") ) { return onMouseMoveRelative_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextLost") ) { return onRenderContextLost_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"onJoystickButtonDown") ) { return onJoystickButtonDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystickDisconnect") ) { return onJoystickDisconnect_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onJoystickTrackballMove") ) { return onJoystickTrackballMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onRenderContextRestored") ) { return onRenderContextRestored_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowsFullScreenInteractive") ) { return allowsFullScreenInteractive; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp == hx::paccAlways) return set_focus(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__color") ) { __color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dirty") ) { __dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__focus") ) { __focus=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__stack") ) { __stack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stage3Ds") ) { stage3Ds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseX") ) { __mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseY") ) { __mouseY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp == hx::paccAlways) return set_frameRate(inValue); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { stageWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderer") ) { __renderer=inValue.Cast< ::openfl::_internal::renderer::AbstractRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__wasDirty") ) { __wasDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=inValue.Cast< ::lime::app::Application >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageHeight") ) { stageHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__deltaTime") ) { __deltaTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rendering") ) { __rendering=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp == hx::paccAlways) return set_displayState(inValue); }
		if (HX_FIELD_EQ(inName,"__colorSplit") ) { __colorSplit=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragBounds") ) { __dragBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragObject") ) { __dragObject=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__fullscreen") ) { __fullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__colorString") ) { __colorString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetX") ) { __dragOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__dragOffsetY") ) { __dragOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__invalidated") ) { __invalidated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__macKeyboard") ) { __macKeyboard=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transparent") ) { __transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { stageFocusRect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__displayState") ) { __displayState=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__lastClickTime") ) { __lastClickTime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseDownLeft") ) { __mouseDownLeft=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseOutStack") ) { __mouseOutStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__originalWidth") ) { __originalWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"allowsFullScreen") ) { allowsFullScreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mouseDownRight") ) { __mouseDownRight=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__originalHeight") ) { __originalHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__mouseDownMiddle") ) { __mouseDownMiddle=inValue.Cast< ::openfl::display::InteractiveObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__clearBeforeRender") ) { __clearBeforeRender=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"allowsFullScreenInteractive") ) { allowsFullScreenInteractive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b"));
	outFields->push(HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8"));
	outFields->push(HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("displayState","\x6f","\x4c","\x64","\x90"));
	outFields->push(HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"));
	outFields->push(HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3"));
	outFields->push(HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74"));
	outFields->push(HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95"));
	outFields->push(HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3"));
	outFields->push(HX_HCSTRING("__color","\x43","\xca","\xba","\xb4"));
	outFields->push(HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde"));
	outFields->push(HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13"));
	outFields->push(HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1"));
	outFields->push(HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47"));
	outFields->push(HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6"));
	outFields->push(HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5"));
	outFields->push(HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5"));
	outFields->push(HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e"));
	outFields->push(HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"));
	outFields->push(HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06"));
	outFields->push(HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1"));
	outFields->push(HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8"));
	outFields->push(HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93"));
	outFields->push(HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d"));
	outFields->push(HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5"));
	outFields->push(HX_HCSTRING("__mouseOutStack","\xff","\xab","\x80","\x5d"));
	outFields->push(HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74"));
	outFields->push(HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74"));
	outFields->push(HX_HCSTRING("__originalWidth","\xd5","\xe4","\x05","\xad"));
	outFields->push(HX_HCSTRING("__originalHeight","\x38","\xce","\x71","\x6e"));
	outFields->push(HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56"));
	outFields->push(HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb"));
	outFields->push(HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee"));
	outFields->push(HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"));
	outFields->push(HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsBool,(int)offsetof(Stage_obj,allowsFullScreen),HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b")},
	{hx::fsBool,(int)offsetof(Stage_obj,allowsFullScreenInteractive),HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8")},
	{hx::fsObject /*::lime::app::Application*/ ,(int)offsetof(Stage_obj,application),HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,scaleMode),HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,stage3Ds),HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3")},
	{hx::fsBool,(int)offsetof(Stage_obj,stageFocusRect),HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageHeight),HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95")},
	{hx::fsInt,(int)offsetof(Stage_obj,stageWidth),HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Stage_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsBool,(int)offsetof(Stage_obj,__clearBeforeRender),HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3")},
	{hx::fsInt,(int)offsetof(Stage_obj,__color),HX_HCSTRING("__color","\x43","\xca","\xba","\xb4")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Stage_obj,__colorSplit),HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde")},
	{hx::fsString,(int)offsetof(Stage_obj,__colorString),HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13")},
	{hx::fsInt,(int)offsetof(Stage_obj,__deltaTime),HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23")},
	{hx::fsBool,(int)offsetof(Stage_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Stage_obj,__displayState),HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Stage_obj,__dragBounds),HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Stage_obj,__dragObject),HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetX),HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__dragOffsetY),HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__focus),HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e")},
	{hx::fsBool,(int)offsetof(Stage_obj,__fullscreen),HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32")},
	{hx::fsBool,(int)offsetof(Stage_obj,__invalidated),HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06")},
	{hx::fsInt,(int)offsetof(Stage_obj,__lastClickTime),HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1")},
	{hx::fsBool,(int)offsetof(Stage_obj,__macKeyboard),HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownLeft),HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownMiddle),HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d")},
	{hx::fsObject /*::openfl::display::InteractiveObject*/ ,(int)offsetof(Stage_obj,__mouseDownRight),HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__mouseOutStack),HX_HCSTRING("__mouseOutStack","\xff","\xab","\x80","\x5d")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__mouseX),HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74")},
	{hx::fsFloat,(int)offsetof(Stage_obj,__mouseY),HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74")},
	{hx::fsInt,(int)offsetof(Stage_obj,__originalWidth),HX_HCSTRING("__originalWidth","\xd5","\xe4","\x05","\xad")},
	{hx::fsInt,(int)offsetof(Stage_obj,__originalHeight),HX_HCSTRING("__originalHeight","\x38","\xce","\x71","\x6e")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractRenderer*/ ,(int)offsetof(Stage_obj,__renderer),HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56")},
	{hx::fsBool,(int)offsetof(Stage_obj,__rendering),HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,__stack),HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee")},
	{hx::fsBool,(int)offsetof(Stage_obj,__transparent),HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b")},
	{hx::fsBool,(int)offsetof(Stage_obj,__wasDirty),HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("allowsFullScreen","\xc5","\x66","\xdc","\x4b"),
	HX_HCSTRING("allowsFullScreenInteractive","\x1d","\x8b","\x2c","\xc8"),
	HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"),
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"),
	HX_HCSTRING("stage3Ds","\xa4","\x4e","\x30","\xe3"),
	HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74"),
	HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95"),
	HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("__clearBeforeRender","\x42","\xa3","\xd5","\xf3"),
	HX_HCSTRING("__color","\x43","\xca","\xba","\xb4"),
	HX_HCSTRING("__colorSplit","\x97","\x7d","\x6e","\xde"),
	HX_HCSTRING("__colorString","\x74","\xfb","\xd0","\x13"),
	HX_HCSTRING("__deltaTime","\x05","\x85","\x88","\x23"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__displayState","\x8f","\xcf","\x24","\xb1"),
	HX_HCSTRING("__dragBounds","\xa9","\x10","\x1d","\x47"),
	HX_HCSTRING("__dragObject","\xf3","\x08","\x3f","\xf6"),
	HX_HCSTRING("__dragOffsetX","\xb1","\x6c","\xfe","\xd5"),
	HX_HCSTRING("__dragOffsetY","\xb2","\x6c","\xfe","\xd5"),
	HX_HCSTRING("__focus","\xb8","\xb8","\xe7","\x6e"),
	HX_HCSTRING("__fullscreen","\x5b","\xb5","\x47","\x32"),
	HX_HCSTRING("__invalidated","\x69","\x73","\x24","\x06"),
	HX_HCSTRING("__lastClickTime","\x1f","\x4c","\xe7","\xb1"),
	HX_HCSTRING("__macKeyboard","\x36","\x6b","\x9a","\xd8"),
	HX_HCSTRING("__mouseDownLeft","\xae","\x3d","\x4b","\x93"),
	HX_HCSTRING("__mouseDownMiddle","\xbc","\x00","\x70","\x1d"),
	HX_HCSTRING("__mouseDownRight","\x55","\xc8","\x97","\xc5"),
	HX_HCSTRING("__mouseOutStack","\xff","\xab","\x80","\x5d"),
	HX_HCSTRING("__mouseX","\xb3","\xb5","\x3d","\x74"),
	HX_HCSTRING("__mouseY","\xb4","\xb5","\x3d","\x74"),
	HX_HCSTRING("__originalWidth","\xd5","\xe4","\x05","\xad"),
	HX_HCSTRING("__originalHeight","\x38","\xce","\x71","\x6e"),
	HX_HCSTRING("__renderer","\x63","\x38","\x14","\x56"),
	HX_HCSTRING("__rendering","\x2c","\x24","\xa0","\xfb"),
	HX_HCSTRING("__stack","\x28","\xc0","\x69","\xee"),
	HX_HCSTRING("__transparent","\x32","\x6c","\x32","\x6b"),
	HX_HCSTRING("__wasDirty","\x49","\xbd","\x55","\x63"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("onGamepadAxisMove","\xb4","\xf7","\xd4","\x24"),
	HX_HCSTRING("onGamepadButtonDown","\x56","\xeb","\xb6","\x87"),
	HX_HCSTRING("onGamepadButtonUp","\x4f","\xf4","\x12","\xf1"),
	HX_HCSTRING("onGamepadConnect","\xc8","\x56","\xd7","\xec"),
	HX_HCSTRING("onGamepadDisconnect","\x3e","\xe8","\x96","\x44"),
	HX_HCSTRING("onJoystickAxisMove","\x6d","\xf4","\xd4","\x5b"),
	HX_HCSTRING("onJoystickButtonDown","\x4f","\x48","\x3a","\x7c"),
	HX_HCSTRING("onJoystickButtonUp","\x08","\xf1","\x12","\x28"),
	HX_HCSTRING("onJoystickConnect","\x2f","\x14","\xdd","\xfa"),
	HX_HCSTRING("onJoystickDisconnect","\x37","\x45","\x1a","\x39"),
	HX_HCSTRING("onJoystickHatMove","\x51","\x70","\x68","\x90"),
	HX_HCSTRING("onJoystickTrackballMove","\x40","\xc8","\x46","\x1a"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onModuleExit","\xe9","\xbf","\xa3","\x0b"),
	HX_HCSTRING("onMouseDown","\x08","\x94","\x05","\x11"),
	HX_HCSTRING("onMouseMove","\xb7","\x7e","\xf8","\x16"),
	HX_HCSTRING("onMouseMoveRelative","\xa3","\x06","\xbf","\x7a"),
	HX_HCSTRING("onMouseUp","\x81","\xac","\x1d","\x98"),
	HX_HCSTRING("onMouseWheel","\x35","\xca","\xca","\xbf"),
	HX_HCSTRING("onPreloadComplete","\x43","\x37","\x5d","\x5c"),
	HX_HCSTRING("onPreloadProgress","\x37","\x2e","\xc0","\x62"),
	HX_HCSTRING("onRenderContextLost","\x9e","\x9b","\xa7","\x84"),
	HX_HCSTRING("onRenderContextRestored","\x10","\x54","\x6e","\x7a"),
	HX_HCSTRING("onTextEdit","\x96","\xf1","\xc0","\x23"),
	HX_HCSTRING("onTextInput","\xfe","\x36","\x4e","\x79"),
	HX_HCSTRING("onTouchMove","\x51","\x55","\x10","\x30"),
	HX_HCSTRING("onTouchEnd","\x9b","\x99","\xc0","\xdd"),
	HX_HCSTRING("onTouchStart","\x22","\xfa","\xdf","\x55"),
	HX_HCSTRING("onWindowActivate","\x42","\xe9","\xdd","\xeb"),
	HX_HCSTRING("onWindowClose","\xc9","\xca","\x1f","\x9c"),
	HX_HCSTRING("onWindowCreate","\xcb","\x62","\x6f","\x6d"),
	HX_HCSTRING("onWindowDeactivate","\x83","\xeb","\x6c","\x8c"),
	HX_HCSTRING("onWindowDropFile","\xda","\x43","\x88","\xef"),
	HX_HCSTRING("onWindowEnter","\x29","\x20","\x43","\xc4"),
	HX_HCSTRING("onWindowFocusIn","\x2e","\x9f","\x1f","\x84"),
	HX_HCSTRING("onWindowFocusOut","\x25","\x3d","\x90","\x17"),
	HX_HCSTRING("onWindowFullscreen","\x8a","\xc9","\x1f","\x4a"),
	HX_HCSTRING("onWindowLeave","\x08","\xe8","\x0f","\xc6"),
	HX_HCSTRING("onWindowMinimize","\xad","\x0c","\xab","\x27"),
	HX_HCSTRING("onWindowMove","\x20","\xfd","\x7a","\xab"),
	HX_HCSTRING("onWindowResize","\xc3","\x55","\xdb","\xf9"),
	HX_HCSTRING("onWindowRestore","\x9f","\xc0","\x4c","\xad"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("__drag","\x14","\x8f","\x68","\xf1"),
	HX_HCSTRING("__fireEvent","\x64","\x79","\x99","\x9f"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__onKey","\xa0","\x76","\xc7","\x9c"),
	HX_HCSTRING("__onMouse","\x66","\x05","\xf1","\x23"),
	HX_HCSTRING("__onMouseWheel","\x55","\x4d","\x8b","\xe0"),
	HX_HCSTRING("__onTouch","\x00","\x07","\xbf","\x2b"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__startDrag","\x56","\xee","\x8f","\x29"),
	HX_HCSTRING("__stopDrag","\x36","\xe4","\x62","\x38"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_displayState","\xf8","\x38","\x03","\x95"),
	HX_HCSTRING("set_displayState","\x6c","\x26","\x45","\xeb"),
	HX_HCSTRING("get_focus","\x2f","\xbc","\x32","\x48"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("get_frameRate","\x84","\xe5","\x88","\xfa"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
};

#endif

hx::Class Stage_obj::__mClass;

void Stage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Stage","\x14","\x36","\x7c","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage_obj >;
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

} // end namespace openfl
} // end namespace display
