#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoShape
#include <openfl/_internal/renderer/cairo/CairoShape.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GraphicsRenderer
#include <openfl/_internal/renderer/opengl/utils/GraphicsRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_geom_Transform
#include <openfl/geom/Transform.h>
#endif
namespace openfl{
namespace display{

Void DisplayObject_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObject","new",0xb225b469,"openfl.display.DisplayObject.new","openfl/display/DisplayObject.hx",43,0xc7539829)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(121)
	this->__cacheAsBitmapSmooth = true;
	HX_STACK_LINE(119)
	this->__cacheAsBitmap = false;
	HX_STACK_LINE(96)
	this->__maskCached = false;
	HX_STACK_LINE(139)
	super::__construct(null());
	HX_STACK_LINE(141)
	this->__alpha = (int)1;
	HX_STACK_LINE(142)
	::openfl::geom::Matrix tmp = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	this->__transform = tmp;
	HX_STACK_LINE(143)
	this->__visible = true;
	HX_STACK_LINE(145)
	this->__rotation = (int)0;
	HX_STACK_LINE(146)
	this->__rotationSine = (int)0;
	HX_STACK_LINE(147)
	this->__rotationCosine = (int)1;
	HX_STACK_LINE(149)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	this->__renderTransform = tmp1;
	HX_STACK_LINE(151)
	::openfl::geom::Point tmp2 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(151)
	this->__offset = tmp2;
	HX_STACK_LINE(152)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(152)
	this->__worldOffset = tmp3;
	HX_STACK_LINE(154)
	this->__worldAlpha = (int)1;
	HX_STACK_LINE(155)
	::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(155)
	this->__worldTransform = tmp4;
	HX_STACK_LINE(156)
	::openfl::geom::ColorTransform tmp5 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(156)
	this->__worldColorTransform = tmp5;
	HX_STACK_LINE(162)
	int tmp6 = ++(::openfl::display::DisplayObject_obj::__instanceCount);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(162)
	::String tmp7 = (HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(162)
	this->set_name(tmp7);
}
;
	return null();
}

//DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new()
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

DisplayObject_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< DisplayObject_obj >(this); }
::openfl::geom::Rectangle DisplayObject_obj::getBounds( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getBounds",0xdb0a2074,"openfl.display.DisplayObject.getBounds","openfl/display/DisplayObject.hx",167,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(169)
	::openfl::geom::Matrix matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(171)
	bool tmp = (targetCoordinateSpace != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(171)
	if ((tmp)){
		HX_STACK_LINE(173)
		::openfl::geom::Matrix tmp1 = this->__getWorldTransform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		::openfl::geom::Matrix tmp2 = tmp1->clone();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		matrix = tmp2;
		HX_STACK_LINE(174)
		::openfl::geom::Matrix tmp3 = targetCoordinateSpace->__getWorldTransform();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		::openfl::geom::Matrix tmp4 = tmp3->clone();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(174)
		::openfl::geom::Matrix tmp5 = tmp4->invert();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(174)
		matrix->concat(tmp5);
	}
	else{
		HX_STACK_LINE(178)
		::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		matrix = tmp1;
		HX_STACK_LINE(179)
		matrix->identity();
	}
	HX_STACK_LINE(183)
	::openfl::geom::Rectangle tmp1 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	::openfl::geom::Rectangle bounds = tmp1;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(184)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(184)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(186)
	::openfl::geom::Rectangle tmp4 = bounds;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(186)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getBounds,return )

::openfl::geom::Rectangle DisplayObject_obj::getRect( ::openfl::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("openfl.display.DisplayObject","getRect",0x17591963,"openfl.display.DisplayObject.getRect","openfl/display/DisplayObject.hx",191,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(194)
	::openfl::display::DisplayObject tmp = targetCoordinateSpace;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	::openfl::geom::Rectangle tmp1 = this->getBounds(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getRect,return )

::openfl::geom::Point DisplayObject_obj::globalToLocal( ::openfl::geom::Point pos){
	HX_STACK_FRAME("openfl.display.DisplayObject","globalToLocal",0x8c16f816,"openfl.display.DisplayObject.globalToLocal","openfl/display/DisplayObject.hx",199,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(201)
	::openfl::geom::Point tmp = pos->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	pos = tmp;
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		::openfl::geom::Matrix tmp1 = this->__getWorldTransform();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		::openfl::geom::Matrix _this = tmp1;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(202)
		Float tmp2 = (_this->a * _this->d);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(202)
		Float tmp3 = (_this->b * _this->c);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(202)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(202)
		Float norm = tmp4;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(202)
		bool tmp5 = (norm == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(202)
		if ((tmp5)){
			HX_STACK_LINE(202)
			Float tmp6 = _this->tx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(202)
			pos->x = tmp7;
			HX_STACK_LINE(202)
			Float tmp8 = _this->ty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(202)
			Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(202)
			pos->y = tmp9;
		}
		else{
			HX_STACK_LINE(202)
			Float tmp6 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			Float tmp7 = _this->c;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(202)
			Float tmp8 = (_this->ty - pos->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(202)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(202)
			Float tmp10 = _this->d;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(202)
			Float tmp11 = (pos->x - _this->tx);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(202)
			Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(202)
			Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(202)
			Float tmp14 = (tmp6 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(202)
			Float px = tmp14;		HX_STACK_VAR(px,"px");
			HX_STACK_LINE(202)
			Float tmp15 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(202)
			Float tmp16 = _this->a;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(202)
			Float tmp17 = (pos->y - _this->ty);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(202)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(202)
			Float tmp19 = _this->b;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(202)
			Float tmp20 = (_this->tx - pos->x);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(202)
			Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(202)
			Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(202)
			Float tmp23 = (tmp15 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(202)
			pos->y = tmp23;
			HX_STACK_LINE(202)
			pos->x = px;
		}
	}
	HX_STACK_LINE(203)
	::openfl::geom::Point tmp1 = pos;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

bool DisplayObject_obj::hitTestObject( ::openfl::display::DisplayObject obj){
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestObject",0xf7ccfe2d,"openfl.display.DisplayObject.hitTestObject","openfl/display/DisplayObject.hx",208,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(210)
	bool tmp = (obj != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(210)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(210)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(210)
	if ((tmp1)){
		HX_STACK_LINE(210)
		tmp2 = (obj->parent != null());
	}
	else{
		HX_STACK_LINE(210)
		tmp2 = false;
	}
	HX_STACK_LINE(210)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(210)
	if ((tmp2)){
		HX_STACK_LINE(210)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		::openfl::display::DisplayObjectContainer tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(210)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(210)
		tmp3 = false;
	}
	HX_STACK_LINE(210)
	if ((tmp3)){
		HX_STACK_LINE(212)
		::openfl::geom::Rectangle tmp4 = this->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(212)
		::openfl::geom::Rectangle currentBounds = tmp4;		HX_STACK_VAR(currentBounds,"currentBounds");
		HX_STACK_LINE(213)
		::openfl::geom::Rectangle tmp5 = obj->getBounds(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(213)
		::openfl::geom::Rectangle targetBounds = tmp5;		HX_STACK_VAR(targetBounds,"targetBounds");
		HX_STACK_LINE(215)
		::openfl::geom::Rectangle tmp6 = targetBounds;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(215)
		bool tmp7 = currentBounds->intersects(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(215)
		return tmp7;
	}
	HX_STACK_LINE(219)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hitTestObject,return )

bool DisplayObject_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_STACK_FRAME("openfl.display.DisplayObject","hitTestPoint",0x05917ca2,"openfl.display.DisplayObject.hitTestPoint","openfl/display/DisplayObject.hx",224,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
{
		HX_STACK_LINE(226)
		::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(226)
		if ((tmp1)){
			HX_STACK_LINE(228)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(228)
			::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(229)
			::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(229)
			::openfl::geom::Matrix tmp4 = this->__getWorldTransform();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(229)
			this->__getBounds(tmp3,tmp4);
			HX_STACK_LINE(231)
			::openfl::geom::Point tmp5 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(231)
			bool tmp6 = bounds->containsPoint(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(231)
			return tmp6;
		}
		HX_STACK_LINE(235)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

::openfl::geom::Point DisplayObject_obj::localToGlobal( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObject","localToGlobal",0x6853eb12,"openfl.display.DisplayObject.localToGlobal","openfl/display/DisplayObject.hx",240,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(242)
	::openfl::geom::Matrix tmp = this->__getWorldTransform();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	::openfl::geom::Point tmp1 = point;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	::openfl::geom::Point tmp2 = tmp->transformPoint(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(242)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

bool DisplayObject_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObject","__broadcast",0xe41880ea,"openfl.display.DisplayObject.__broadcast","openfl/display/DisplayObject.hx",247,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(249)
	::haxe::ds::StringMap tmp = this->__eventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	if ((tmp1)){
		HX_STACK_LINE(249)
		::String tmp3 = event->type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(249)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(249)
		tmp2 = this->hasEventListener(tmp4);
	}
	else{
		HX_STACK_LINE(249)
		tmp2 = false;
	}
	HX_STACK_LINE(249)
	if ((tmp2)){
		HX_STACK_LINE(251)
		::openfl::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		bool tmp4 = this->super::__dispatchEvent(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		bool result = tmp4;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(253)
		bool tmp5 = event->__isCanceled;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(253)
		if ((tmp5)){
			HX_STACK_LINE(255)
			return true;
		}
		HX_STACK_LINE(259)
		bool tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(259)
		return tmp6;
	}
	HX_STACK_LINE(263)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__broadcast,return )

bool DisplayObject_obj::__dispatchEvent( ::openfl::events::Event event){
	HX_STACK_FRAME("openfl.display.DisplayObject","__dispatchEvent",0xd8f34d69,"openfl.display.DisplayObject.__dispatchEvent","openfl/display/DisplayObject.hx",268,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(270)
	::openfl::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	bool tmp1 = this->super::__dispatchEvent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	bool result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(272)
	bool tmp2 = event->__isCanceled;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(272)
	if ((tmp2)){
		HX_STACK_LINE(274)
		return true;
	}
	HX_STACK_LINE(278)
	bool tmp3 = event->bubbles;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(278)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(278)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(278)
	if ((tmp4)){
		HX_STACK_LINE(278)
		::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(278)
		::openfl::display::DisplayObjectContainer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(278)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(278)
		tmp5 = (tmp8 != null());
	}
	else{
		HX_STACK_LINE(278)
		tmp5 = false;
	}
	HX_STACK_LINE(278)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(278)
	if ((tmp5)){
		HX_STACK_LINE(278)
		::openfl::display::DisplayObjectContainer tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(278)
		::openfl::display::DisplayObjectContainer tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(278)
		tmp6 = (tmp8 != hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(278)
		tmp6 = false;
	}
	HX_STACK_LINE(278)
	if ((tmp6)){
		HX_STACK_LINE(280)
		event->eventPhase = (int)3;
		HX_STACK_LINE(282)
		bool tmp7 = (event->target == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(282)
		if ((tmp7)){
			HX_STACK_LINE(284)
			event->target = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(288)
		::openfl::display::DisplayObjectContainer tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(288)
		::openfl::events::Event tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(288)
		tmp8->__dispatchEvent(tmp9);
	}
	HX_STACK_LINE(292)
	bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(292)
	return tmp7;
}


Void DisplayObject_obj::__enterFrame( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__enterFrame",0x5c5351ec,"openfl.display.DisplayObject.__enterFrame","openfl/display/DisplayObject.hx",297,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__enterFrame,(void))

Void DisplayObject_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getBounds",0xe772ed94,"openfl.display.DisplayObject.__getBounds","openfl/display/DisplayObject.hx",304,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(306)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		if ((tmp1)){
			HX_STACK_LINE(308)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(308)
			::openfl::geom::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(308)
			::openfl::geom::Matrix tmp4 = matrix;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(308)
			tmp2->__getBounds(tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getBounds,(void))

::lime::ui::MouseCursor DisplayObject_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getCursor",0xc03df5f5,"openfl.display.DisplayObject.__getCursor","openfl/display/DisplayObject.hx",317,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(317)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getCursor,return )

bool DisplayObject_obj::__getInteractive( Array< ::Dynamic > stack){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getInteractive",0xee1ea663,"openfl.display.DisplayObject.__getInteractive","openfl/display/DisplayObject.hx",324,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stack,"stack")
	HX_STACK_LINE(324)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getInteractive,return )

Void DisplayObject_obj::__getLocalBounds( ::openfl::geom::Rectangle rect){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getLocalBounds",0xd51d8ec1,"openfl.display.DisplayObject.__getLocalBounds","openfl/display/DisplayObject.hx",329,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(331)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		this->__getBounds(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__getLocalBounds,(void))

Void DisplayObject_obj::__getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__getRenderBounds",0xb06992ca,"openfl.display.DisplayObject.__getRenderBounds","openfl/display/DisplayObject.hx",336,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(338)
		::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(338)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(338)
		if ((tmp1)){
			HX_STACK_LINE(340)
			::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(340)
			::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(340)
			this->__getBounds(tmp2,tmp3);
		}
		else{
			HX_STACK_LINE(344)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(344)
			::openfl::geom::Rectangle r = tmp2;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(345)
			::openfl::geom::Rectangle tmp3 = this->__scrollRect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(345)
			r->copyFrom(tmp3);
			HX_STACK_LINE(346)
			::openfl::geom::Rectangle tmp4 = r;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(346)
			::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(346)
			r->__transform(tmp4,tmp5);
			HX_STACK_LINE(347)
			Float tmp6 = matrix->tx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(347)
			Float tmp7 = matrix->ty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(347)
			Float tmp8 = r->width;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(347)
			Float tmp9 = r->height;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(347)
			rect->__expand(tmp6,tmp7,tmp8,tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__getRenderBounds,(void))

::openfl::geom::Matrix DisplayObject_obj::__getWorldTransform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","__getWorldTransform",0x71693ad9,"openfl.display.DisplayObject.__getWorldTransform","openfl/display/DisplayObject.hx",354,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(356)
	bool tmp = this->__transformDirty;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(356)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(356)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(356)
	if ((tmp1)){
		HX_STACK_LINE(356)
		int tmp3 = ::openfl::display::DisplayObject_obj::__worldTransformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(356)
		tmp2 = true;
	}
	HX_STACK_LINE(356)
	if ((tmp2)){
		HX_STACK_LINE(358)
		Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(359)
		::openfl::display::DisplayObject current = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(360)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(360)
		bool transformDirty = tmp3;		HX_STACK_VAR(transformDirty,"transformDirty");
		HX_STACK_LINE(362)
		::openfl::display::DisplayObjectContainer tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(362)
		bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(362)
		if ((tmp5)){
			HX_STACK_LINE(364)
			bool tmp6 = transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(364)
			if ((tmp6)){
				HX_STACK_LINE(364)
				this->__update(true,false,null());
			}
		}
		else{
			HX_STACK_LINE(368)
			while((true)){
				HX_STACK_LINE(368)
				bool tmp6 = (current->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(368)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(368)
				if ((tmp7)){
					HX_STACK_LINE(368)
					break;
				}
				HX_STACK_LINE(370)
				::openfl::display::DisplayObject tmp8 = current;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(370)
				list->push(tmp8);
				HX_STACK_LINE(371)
				current = current->parent;
				HX_STACK_LINE(373)
				bool tmp9 = current->__transformDirty;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(373)
				if ((tmp9)){
					HX_STACK_LINE(375)
					transformDirty = true;
				}
			}
		}
		HX_STACK_LINE(383)
		bool tmp6 = transformDirty;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(383)
		if ((tmp6)){
			HX_STACK_LINE(385)
			int i = list->length;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(386)
			while((true)){
				HX_STACK_LINE(386)
				int tmp7 = --(i);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(386)
				bool tmp8 = (tmp7 >= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(386)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(386)
				if ((tmp9)){
					HX_STACK_LINE(386)
					break;
				}
				HX_STACK_LINE(388)
				::openfl::display::DisplayObject tmp10 = list->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(388)
				tmp10->__update(true,false,null());
			}
		}
	}
	HX_STACK_LINE(396)
	::openfl::geom::Matrix tmp3 = this->__worldTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(396)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__getWorldTransform,return )

bool DisplayObject_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	HX_STACK_FRAME("openfl.display.DisplayObject","__hitTest",0x5c63c1ee,"openfl.display.DisplayObject.__hitTest","openfl/display/DisplayObject.hx",401,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_ARG(hitObject,"hitObject")
	HX_STACK_LINE(403)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(403)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(403)
	if ((tmp1)){
		HX_STACK_LINE(405)
		bool tmp2 = hitObject->get_visible();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(405)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(405)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(405)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(405)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(405)
		if ((tmp5)){
			HX_STACK_LINE(405)
			tmp6 = this->__isMask;
		}
		else{
			HX_STACK_LINE(405)
			tmp6 = true;
		}
		HX_STACK_LINE(405)
		if ((tmp6)){
			HX_STACK_LINE(405)
			return false;
		}
		HX_STACK_LINE(406)
		::openfl::display::DisplayObject tmp7 = this->get_mask();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(406)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(406)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(406)
		if ((tmp8)){
			HX_STACK_LINE(406)
			::openfl::display::DisplayObject tmp10 = this->get_mask();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(406)
			::openfl::display::DisplayObject tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(406)
			Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(406)
			Float tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(406)
			Float tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(406)
			Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(406)
			bool tmp16 = tmp11->__hitTestMask(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(406)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(406)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(406)
			tmp9 = !(tmp18);
		}
		else{
			HX_STACK_LINE(406)
			tmp9 = false;
		}
		HX_STACK_LINE(406)
		if ((tmp9)){
			HX_STACK_LINE(406)
			return false;
		}
		HX_STACK_LINE(408)
		::openfl::display::Graphics tmp10 = this->__graphics;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(408)
		Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(408)
		Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(408)
		bool tmp13 = shapeFlag;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(408)
		::openfl::geom::Matrix tmp14 = this->__getWorldTransform();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(408)
		bool tmp15 = tmp10->__hitTest(tmp11,tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(408)
		if ((tmp15)){
			HX_STACK_LINE(410)
			bool tmp16 = (stack != null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(410)
			bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(410)
			if ((tmp16)){
				HX_STACK_LINE(410)
				bool tmp18 = interactiveOnly;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(410)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(410)
				tmp17 = !(tmp19);
			}
			else{
				HX_STACK_LINE(410)
				tmp17 = false;
			}
			HX_STACK_LINE(410)
			if ((tmp17)){
				HX_STACK_LINE(412)
				::openfl::display::DisplayObject tmp18 = hitObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(412)
				stack->push(tmp18);
			}
			HX_STACK_LINE(416)
			return true;
		}
	}
	HX_STACK_LINE(422)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC6(DisplayObject_obj,__hitTest,return )

bool DisplayObject_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.DisplayObject","__hitTestMask",0x5c65bdfa,"openfl.display.DisplayObject.__hitTestMask","openfl/display/DisplayObject.hx",427,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(429)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(429)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(429)
	if ((tmp1)){
		HX_STACK_LINE(431)
		::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(431)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(431)
		Float tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(431)
		::openfl::geom::Matrix tmp5 = this->__getWorldTransform();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(431)
		bool tmp6 = tmp2->__hitTest(tmp3,tmp4,true,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(431)
		if ((tmp6)){
			HX_STACK_LINE(433)
			return true;
		}
	}
	HX_STACK_LINE(439)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,__hitTestMask,return )

Void DisplayObject_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCairo",0x75ab477b,"openfl.display.DisplayObject.__renderCairo","openfl/display/DisplayObject.hx",444,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(446)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(446)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(446)
		if ((tmp1)){
			HX_STACK_LINE(448)
			::openfl::_internal::renderer::RenderSession tmp2 = renderSession;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(448)
			::openfl::_internal::renderer::cairo::CairoShape_obj::render(hx::ObjectPtr<OBJ_>(this),tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairo,(void))

Void DisplayObject_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCairoMask",0x9fd38e07,"openfl.display.DisplayObject.__renderCairoMask","openfl/display/DisplayObject.hx",455,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(457)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(457)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(457)
		if ((tmp1)){
			HX_STACK_LINE(459)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(459)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(459)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCairoMask,(void))

Void DisplayObject_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCanvas",0x83845285,"openfl.display.DisplayObject.__renderCanvas","openfl/display/DisplayObject.hx",466,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(468)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(468)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(468)
		if ((tmp1)){
			HX_STACK_LINE(470)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvas,(void))

Void DisplayObject_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderCanvasMask",0x388fe611,"openfl.display.DisplayObject.__renderCanvasMask","openfl/display/DisplayObject.hx",477,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(479)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(479)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(479)
		if ((tmp1)){
			HX_STACK_LINE(481)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(481)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(481)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderCanvasMask,(void))

Void DisplayObject_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderDOM",0xd2568ab5,"openfl.display.DisplayObject.__renderDOM","openfl/display/DisplayObject.hx",488,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(490)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(490)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(490)
		if ((tmp1)){
			HX_STACK_LINE(492)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderDOM,(void))

Void DisplayObject_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__renderGL",0xe0ccbd32,"openfl.display.DisplayObject.__renderGL","openfl/display/DisplayObject.hx",499,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(501)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(501)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(501)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(501)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(501)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(501)
		if ((tmp3)){
			HX_STACK_LINE(501)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(501)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(501)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(501)
			tmp4 = true;
		}
		HX_STACK_LINE(501)
		if ((tmp4)){
			HX_STACK_LINE(501)
			return null();
		}
		HX_STACK_LINE(503)
		bool tmp5 = this->__cacheAsBitmap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(503)
		if ((tmp5)){
			HX_STACK_LINE(504)
			{
				HX_STACK_LINE(504)
				::openfl::geom::Matrix tmp6 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(504)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(504)
				bool hasCacheMatrix = tmp7;		HX_STACK_VAR(hasCacheMatrix,"hasCacheMatrix");
				HX_STACK_LINE(504)
				::openfl::geom::Rectangle tmp8 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(504)
				Float x = tmp8->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(504)
				::openfl::geom::Rectangle tmp9 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(504)
				Float y = tmp9->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(504)
				::openfl::geom::Rectangle tmp10 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(504)
				Float w = tmp10->width;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(504)
				::openfl::geom::Rectangle tmp11 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(504)
				Float h = tmp11->height;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(504)
				::openfl::geom::Matrix tmp12 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(504)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(504)
				if ((tmp13)){
					HX_STACK_LINE(504)
					::openfl::geom::Matrix tmp14 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(504)
					this->__cacheGLMatrix = tmp14;
				}
				HX_STACK_LINE(504)
				bool tmp14 = hasCacheMatrix;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(504)
				if ((tmp14)){
					HX_STACK_LINE(504)
					::openfl::geom::Rectangle tmp15 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(504)
					::openfl::geom::Rectangle bmpBounds = tmp15;		HX_STACK_VAR(bmpBounds,"bmpBounds");
					HX_STACK_LINE(504)
					::openfl::geom::Rectangle tmp16 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(504)
					::openfl::geom::Rectangle tmp17 = bmpBounds;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(504)
					::openfl::geom::Matrix tmp18 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(504)
					tmp16->__transform(tmp17,tmp18);
					HX_STACK_LINE(504)
					x = bmpBounds->x;
					HX_STACK_LINE(504)
					y = bmpBounds->y;
					HX_STACK_LINE(504)
					w = bmpBounds->width;
					HX_STACK_LINE(504)
					h = bmpBounds->height;
					HX_STACK_LINE(504)
					::openfl::geom::Matrix tmp19 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(504)
					::openfl::geom::Matrix tmp20 = tmp19->clone();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(504)
					this->__cacheGLMatrix = tmp20;
				}
				else{
					HX_STACK_LINE(504)
					::openfl::geom::Matrix tmp15 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(504)
					tmp15->identity();
				}
				HX_STACK_LINE(504)
				bool tmp15 = (w <= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(504)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(504)
				if ((tmp15)){
					HX_STACK_LINE(504)
					tmp16 = (h <= (int)0);
				}
				else{
					HX_STACK_LINE(504)
					tmp16 = false;
				}
				HX_STACK_LINE(504)
				if ((tmp16)){
					HX_STACK_LINE(504)
					Dynamic();
				}
				else{
					HX_STACK_LINE(504)
					bool tmp17 = this->__updateCachedBitmap;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(504)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(504)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(504)
					if ((tmp18)){
						HX_STACK_LINE(504)
						tmp19 = this->__updateFilters;
					}
					else{
						HX_STACK_LINE(504)
						tmp19 = true;
					}
					HX_STACK_LINE(504)
					if ((tmp19)){
						HX_STACK_LINE(504)
						::openfl::geom::Rectangle tmp20 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(504)
						bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(504)
						if ((tmp21)){
							HX_STACK_LINE(504)
							::openfl::geom::Rectangle tmp22 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(504)
							Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(504)
							Float tmp24 = ::Math_obj::abs(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(504)
							::openfl::geom::Rectangle tmp25 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(504)
							Float tmp26 = tmp25->width;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(504)
							Float tmp27 = ::Math_obj::abs(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(504)
							Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(504)
							hx::AddEq(w,tmp28);
							HX_STACK_LINE(504)
							::openfl::geom::Rectangle tmp29 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(504)
							Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(504)
							Float tmp31 = ::Math_obj::abs(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(504)
							::openfl::geom::Rectangle tmp32 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(504)
							Float tmp33 = tmp32->height;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(504)
							Float tmp34 = ::Math_obj::abs(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(504)
							Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(504)
							hx::AddEq(h,tmp35);
						}
						HX_STACK_LINE(504)
						::openfl::display::BitmapData tmp22 = this->__cachedBitmap;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(504)
						bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(504)
						if ((tmp23)){
							HX_STACK_LINE(504)
							::openfl::display::BitmapData tmp24 = ::openfl::display::BitmapData_obj::__asRenderTexture(null(),null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(504)
							this->__cachedBitmap = tmp24;
						}
						HX_STACK_LINE(504)
						::openfl::display::BitmapData tmp24 = this->__cachedBitmap;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(504)
						Float tmp25 = w;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(504)
						int tmp26 = ::Math_obj::ceil(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(504)
						Float tmp27 = h;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(504)
						int tmp28 = ::Math_obj::ceil(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(504)
						tmp24->__resize(tmp26,tmp28);
						HX_STACK_LINE(504)
						::openfl::geom::Matrix tmp29 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(504)
						::openfl::geom::Matrix tmp30 = tmp29->clone();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(504)
						::openfl::geom::Matrix m = tmp30;		HX_STACK_VAR(m,"m");
						HX_STACK_LINE(504)
						Float tmp31 = x;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(504)
						Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(504)
						Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(504)
						Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(504)
						m->translate(tmp32,tmp34);
						HX_STACK_LINE(504)
						::openfl::display::Shader tmp35 = this->__shader;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(504)
						::openfl::display::Shader shader = tmp35;		HX_STACK_VAR(shader,"shader");
						HX_STACK_LINE(504)
						this->__shader = null();
						HX_STACK_LINE(504)
						::openfl::display::BitmapData tmp36 = this->__cachedBitmap;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(504)
						::openfl::_internal::renderer::RenderSession tmp37 = renderSession;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(504)
						::openfl::geom::Matrix tmp38 = m;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(504)
						tmp36->__drawGL(tmp37,hx::ObjectPtr<OBJ_>(this),tmp38,null(),null(),null(),true,false,true,null(),null());
						HX_STACK_LINE(504)
						this->__shader = shader;
						HX_STACK_LINE(504)
						this->__updateCachedBitmap = false;
					}
					HX_STACK_LINE(504)
					bool tmp20 = this->__updateFilters;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(504)
					if ((tmp20)){
						HX_STACK_LINE(504)
						::openfl::_internal::renderer::RenderSession tmp21 = renderSession;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(504)
						::openfl::display::BitmapData tmp22 = this->__cachedBitmap;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(504)
						::openfl::display::BitmapData tmp23 = this->__cachedBitmap;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(504)
						::openfl::filters::BitmapFilter_obj::__applyFilters(this->__filters,tmp21,tmp22,tmp23,null(),null());
						HX_STACK_LINE(504)
						this->__updateFilters = false;
					}
					HX_STACK_LINE(504)
					::openfl::geom::Matrix tmp21 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(504)
					tmp21->invert();
					HX_STACK_LINE(504)
					{
						HX_STACK_LINE(504)
						::openfl::geom::Matrix tmp22 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(504)
						::openfl::geom::Matrix _this = tmp22;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(504)
						Float tmp23 = (x * _this->a);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(504)
						Float tmp24 = (y * _this->c);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(504)
						Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(504)
						Float tmp26 = _this->tx;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(504)
						Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(504)
						_this->tx = tmp27;
						HX_STACK_LINE(504)
						Float tmp28 = (x * _this->b);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(504)
						Float tmp29 = (y * _this->d);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(504)
						Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(504)
						Float tmp31 = _this->ty;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(504)
						Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(504)
						_this->ty = tmp32;
					}
					HX_STACK_LINE(504)
					::openfl::geom::Matrix tmp22 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(504)
					::openfl::geom::Matrix tmp23 = this->__renderTransform;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(504)
					tmp22->concat(tmp23);
					HX_STACK_LINE(504)
					::openfl::geom::Matrix tmp24 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(504)
					::openfl::geom::Point tmp25 = this->__offset;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(504)
					Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(504)
					::openfl::geom::Point tmp27 = this->__offset;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(504)
					Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(504)
					tmp24->translate(tmp26,tmp28);
					HX_STACK_LINE(504)
					::openfl::display::BitmapData tmp29 = this->__cachedBitmap;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(504)
					bool tmp30 = this->__cacheAsBitmapSmooth;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(504)
					::openfl::geom::Matrix tmp31 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(504)
					::openfl::geom::ColorTransform tmp32 = this->__worldColorTransform;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(504)
					Float tmp33 = this->__worldAlpha;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(504)
					Dynamic tmp34 = this->blendMode;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(504)
					::openfl::display::Shader tmp35 = this->__shader;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(504)
					renderSession->spriteBatch->renderBitmapData(tmp29,tmp30,tmp31,tmp32,tmp33,tmp34,tmp35,((Dynamic)((int)0)),null());
				}
			}
			HX_STACK_LINE(505)
			return null();
		}
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			::openfl::geom::Rectangle tmp6 = this->__scrollRect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(508)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(508)
			if ((tmp7)){
				HX_STACK_LINE(508)
				::openfl::geom::Rectangle tmp8 = this->__scrollRect;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(508)
				::openfl::geom::Matrix tmp9 = this->__renderTransform;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(508)
				renderSession->maskManager->pushRect(tmp8,tmp9);
			}
			HX_STACK_LINE(508)
			::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(508)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(508)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(508)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(508)
			if ((tmp10)){
				HX_STACK_LINE(508)
				::openfl::display::Graphics tmp12 = this->__maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(508)
				::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(508)
				::openfl::display::Graphics tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(508)
				tmp11 = (tmp14 != null());
			}
			else{
				HX_STACK_LINE(508)
				tmp11 = false;
			}
			HX_STACK_LINE(508)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(508)
			if ((tmp11)){
				HX_STACK_LINE(508)
				::openfl::display::Graphics tmp13 = this->__maskGraphics;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(508)
				::openfl::display::Graphics tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(508)
				int tmp15 = tmp14->__commands->get_length();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(508)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(508)
				tmp12 = (tmp16 > (int)0);
			}
			else{
				HX_STACK_LINE(508)
				tmp12 = false;
			}
			HX_STACK_LINE(508)
			if ((tmp12)){
				HX_STACK_LINE(508)
				renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(509)
		{
			HX_STACK_LINE(509)
			::openfl::display::Graphics tmp6 = this->__graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(509)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(509)
			if ((tmp7)){
				HX_STACK_LINE(509)
				::openfl::display::Graphics tmp8 = this->__graphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(509)
				bool tmp9 = tmp8->__hardware;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(509)
				if ((tmp9)){
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::RenderSession tmp10 = renderSession;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(hx::ObjectPtr<OBJ_>(this),tmp10);
				}
				else{
					HX_STACK_LINE(509)
					::openfl::display::Graphics tmp10 = this->__graphics;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::RenderSession tmp11 = renderSession;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp10,tmp11);
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::RenderSession tmp12 = renderSession;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(509)
					::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp12,null());
				}
			}
		}
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			::openfl::display::DisplayObject tmp6 = this->__mask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(510)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(510)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(510)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(510)
			if ((tmp8)){
				HX_STACK_LINE(510)
				::openfl::display::Graphics tmp10 = this->__maskGraphics;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(510)
				::openfl::display::Graphics tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(510)
				::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(510)
				tmp9 = (tmp12 != null());
			}
			else{
				HX_STACK_LINE(510)
				tmp9 = false;
			}
			HX_STACK_LINE(510)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(510)
			if ((tmp9)){
				HX_STACK_LINE(510)
				::openfl::display::Graphics tmp11 = this->__maskGraphics;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(510)
				::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(510)
				int tmp13 = tmp12->__commands->get_length();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(510)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(510)
				tmp10 = (tmp14 > (int)0);
			}
			else{
				HX_STACK_LINE(510)
				tmp10 = false;
			}
			HX_STACK_LINE(510)
			if ((tmp10)){
				HX_STACK_LINE(510)
				renderSession->maskManager->popMask();
			}
			HX_STACK_LINE(510)
			::openfl::geom::Rectangle tmp11 = this->__scrollRect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(510)
			bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(510)
			if ((tmp12)){
				HX_STACK_LINE(510)
				renderSession->maskManager->popRect();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__renderGL,(void))

Void DisplayObject_obj::__drawGraphicsGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__drawGraphicsGL",0x8421324b,"openfl.display.DisplayObject.__drawGraphicsGL","openfl/display/DisplayObject.hx",514,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(516)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(516)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(516)
		if ((tmp1)){
			HX_STACK_LINE(518)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(518)
			bool tmp3 = tmp2->__hardware;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(518)
			if ((tmp3)){
				HX_STACK_LINE(520)
				::openfl::_internal::renderer::RenderSession tmp4 = renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(520)
				::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(hx::ObjectPtr<OBJ_>(this),tmp4);
			}
			else{
				HX_STACK_LINE(527)
				::openfl::display::Graphics tmp4 = this->__graphics;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(527)
				::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(527)
				::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp4,tmp5);
				HX_STACK_LINE(530)
				::openfl::_internal::renderer::RenderSession tmp6 = renderSession;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(530)
				::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp6,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__drawGraphicsGL,(void))

Void DisplayObject_obj::__preRenderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__preRenderGL",0x31250c67,"openfl.display.DisplayObject.__preRenderGL","openfl/display/DisplayObject.hx",538,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(540)
		::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(540)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(540)
		if ((tmp1)){
			HX_STACK_LINE(542)
			::openfl::geom::Rectangle tmp2 = this->__scrollRect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(542)
			::openfl::geom::Matrix tmp3 = this->__renderTransform;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(542)
			renderSession->maskManager->pushRect(tmp2,tmp3);
		}
		HX_STACK_LINE(546)
		::openfl::display::DisplayObject tmp2 = this->__mask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(546)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(546)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(546)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(546)
		if ((tmp4)){
			HX_STACK_LINE(546)
			::openfl::display::Graphics tmp6 = this->__maskGraphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(546)
			::openfl::display::Graphics tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(546)
			::openfl::display::Graphics tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(546)
			tmp5 = (tmp8 != null());
		}
		else{
			HX_STACK_LINE(546)
			tmp5 = false;
		}
		HX_STACK_LINE(546)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(546)
		if ((tmp5)){
			HX_STACK_LINE(546)
			::openfl::display::Graphics tmp7 = this->__maskGraphics;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(546)
			::openfl::display::Graphics tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(546)
			int tmp9 = tmp8->__commands->get_length();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(546)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(546)
			tmp6 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(546)
			tmp6 = false;
		}
		HX_STACK_LINE(546)
		if ((tmp6)){
			HX_STACK_LINE(548)
			renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__preRenderGL,(void))

Void DisplayObject_obj::__postRenderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__postRenderGL",0x83814532,"openfl.display.DisplayObject.__postRenderGL","openfl/display/DisplayObject.hx",555,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(557)
		::openfl::display::DisplayObject tmp = this->__mask;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(557)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(557)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(557)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(557)
		if ((tmp2)){
			HX_STACK_LINE(557)
			::openfl::display::Graphics tmp4 = this->__maskGraphics;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(557)
			::openfl::display::Graphics tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(557)
			::openfl::display::Graphics tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(557)
			tmp3 = (tmp6 != null());
		}
		else{
			HX_STACK_LINE(557)
			tmp3 = false;
		}
		HX_STACK_LINE(557)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(557)
		if ((tmp3)){
			HX_STACK_LINE(557)
			::openfl::display::Graphics tmp5 = this->__maskGraphics;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(557)
			::openfl::display::Graphics tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(557)
			int tmp7 = tmp6->__commands->get_length();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(557)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(557)
			tmp4 = (tmp8 > (int)0);
		}
		else{
			HX_STACK_LINE(557)
			tmp4 = false;
		}
		HX_STACK_LINE(557)
		if ((tmp4)){
			HX_STACK_LINE(559)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(563)
		::openfl::geom::Rectangle tmp5 = this->__scrollRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(563)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(563)
		if ((tmp6)){
			HX_STACK_LINE(565)
			renderSession->maskManager->popRect();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__postRenderGL,(void))

Void DisplayObject_obj::__cacheGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__cacheGL",0x9d05ce90,"openfl.display.DisplayObject.__cacheGL","openfl/display/DisplayObject.hx",572,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(574)
		::openfl::geom::Matrix tmp = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(574)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(574)
		bool hasCacheMatrix = tmp1;		HX_STACK_VAR(hasCacheMatrix,"hasCacheMatrix");
		HX_STACK_LINE(575)
		::openfl::geom::Rectangle tmp2 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(575)
		Float x = tmp2->x;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(576)
		::openfl::geom::Rectangle tmp3 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(576)
		Float y = tmp3->y;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(577)
		::openfl::geom::Rectangle tmp4 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(577)
		Float w = tmp4->width;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(578)
		::openfl::geom::Rectangle tmp5 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(578)
		Float h = tmp5->height;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(581)
		::openfl::geom::Matrix tmp6 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(581)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(581)
		if ((tmp7)){
			HX_STACK_LINE(581)
			::openfl::geom::Matrix tmp8 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(581)
			this->__cacheGLMatrix = tmp8;
		}
		HX_STACK_LINE(583)
		bool tmp8 = hasCacheMatrix;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(583)
		if ((tmp8)){
			HX_STACK_LINE(586)
			::openfl::geom::Rectangle tmp9 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(586)
			::openfl::geom::Rectangle bmpBounds = tmp9;		HX_STACK_VAR(bmpBounds,"bmpBounds");
			HX_STACK_LINE(587)
			::openfl::geom::Rectangle tmp10 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(587)
			::openfl::geom::Rectangle tmp11 = bmpBounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(587)
			::openfl::geom::Matrix tmp12 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(587)
			tmp10->__transform(tmp11,tmp12);
			HX_STACK_LINE(588)
			x = bmpBounds->x;
			HX_STACK_LINE(589)
			y = bmpBounds->y;
			HX_STACK_LINE(590)
			w = bmpBounds->width;
			HX_STACK_LINE(591)
			h = bmpBounds->height;
			HX_STACK_LINE(593)
			::openfl::geom::Matrix tmp13 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(593)
			::openfl::geom::Matrix tmp14 = tmp13->clone();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(593)
			this->__cacheGLMatrix = tmp14;
		}
		else{
			HX_STACK_LINE(597)
			::openfl::geom::Matrix tmp9 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(597)
			tmp9->identity();
		}
		HX_STACK_LINE(601)
		bool tmp9 = (w <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(601)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(601)
		if ((tmp9)){
			HX_STACK_LINE(601)
			tmp10 = (h <= (int)0);
		}
		else{
			HX_STACK_LINE(601)
			tmp10 = false;
		}
		HX_STACK_LINE(601)
		if ((tmp10)){
			HX_STACK_LINE(604)
			return null();
		}
		HX_STACK_LINE(608)
		bool tmp11 = this->__updateCachedBitmap;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(608)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(608)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(608)
		if ((tmp12)){
			HX_STACK_LINE(608)
			tmp13 = this->__updateFilters;
		}
		else{
			HX_STACK_LINE(608)
			tmp13 = true;
		}
		HX_STACK_LINE(608)
		if ((tmp13)){
			HX_STACK_LINE(610)
			::openfl::geom::Rectangle tmp14 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(610)
			bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(610)
			if ((tmp15)){
				HX_STACK_LINE(611)
				::openfl::geom::Rectangle tmp16 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(611)
				Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(611)
				Float tmp18 = ::Math_obj::abs(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(611)
				::openfl::geom::Rectangle tmp19 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(611)
				Float tmp20 = tmp19->width;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(611)
				Float tmp21 = ::Math_obj::abs(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(611)
				Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(611)
				hx::AddEq(w,tmp22);
				HX_STACK_LINE(612)
				::openfl::geom::Rectangle tmp23 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(612)
				Float tmp24 = tmp23->y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(612)
				Float tmp25 = ::Math_obj::abs(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(612)
				::openfl::geom::Rectangle tmp26 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(612)
				Float tmp27 = tmp26->height;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(612)
				Float tmp28 = ::Math_obj::abs(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(612)
				Float tmp29 = (tmp25 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(612)
				hx::AddEq(h,tmp29);
			}
			HX_STACK_LINE(615)
			::openfl::display::BitmapData tmp16 = this->__cachedBitmap;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(615)
			bool tmp17 = (tmp16 == null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(615)
			if ((tmp17)){
				HX_STACK_LINE(616)
				::openfl::display::BitmapData tmp18 = ::openfl::display::BitmapData_obj::__asRenderTexture(null(),null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(616)
				this->__cachedBitmap = tmp18;
			}
			HX_STACK_LINE(618)
			::openfl::display::BitmapData tmp18 = this->__cachedBitmap;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(618)
			Float tmp19 = w;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(618)
			int tmp20 = ::Math_obj::ceil(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(618)
			Float tmp21 = h;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(618)
			int tmp22 = ::Math_obj::ceil(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(618)
			tmp18->__resize(tmp20,tmp22);
			HX_STACK_LINE(621)
			::openfl::geom::Matrix tmp23 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(621)
			::openfl::geom::Matrix tmp24 = tmp23->clone();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(621)
			::openfl::geom::Matrix m = tmp24;		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(622)
			Float tmp25 = x;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(622)
			Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(622)
			Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(622)
			Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(622)
			m->translate(tmp26,tmp28);
			HX_STACK_LINE(624)
			::openfl::display::Shader tmp29 = this->__shader;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(624)
			::openfl::display::Shader shader = tmp29;		HX_STACK_VAR(shader,"shader");
			HX_STACK_LINE(625)
			this->__shader = null();
			HX_STACK_LINE(626)
			::openfl::display::BitmapData tmp30 = this->__cachedBitmap;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(626)
			::openfl::_internal::renderer::RenderSession tmp31 = renderSession;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(626)
			::openfl::geom::Matrix tmp32 = m;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(626)
			tmp30->__drawGL(tmp31,hx::ObjectPtr<OBJ_>(this),tmp32,null(),null(),null(),true,false,true,null(),null());
			HX_STACK_LINE(627)
			this->__shader = shader;
			HX_STACK_LINE(629)
			this->__updateCachedBitmap = false;
		}
		HX_STACK_LINE(632)
		bool tmp14 = this->__updateFilters;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(632)
		if ((tmp14)){
			HX_STACK_LINE(633)
			::openfl::_internal::renderer::RenderSession tmp15 = renderSession;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(633)
			::openfl::display::BitmapData tmp16 = this->__cachedBitmap;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(633)
			::openfl::display::BitmapData tmp17 = this->__cachedBitmap;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(633)
			::openfl::filters::BitmapFilter_obj::__applyFilters(this->__filters,tmp15,tmp16,tmp17,null(),null());
			HX_STACK_LINE(634)
			this->__updateFilters = false;
		}
		HX_STACK_LINE(638)
		::openfl::geom::Matrix tmp15 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(638)
		tmp15->invert();
		HX_STACK_LINE(639)
		{
			HX_STACK_LINE(639)
			::openfl::geom::Matrix tmp16 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(639)
			::openfl::geom::Matrix _this = tmp16;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(639)
			Float tmp17 = (x * _this->a);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(639)
			Float tmp18 = (y * _this->c);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(639)
			Float tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(639)
			Float tmp20 = _this->tx;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(639)
			Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(639)
			_this->tx = tmp21;
			HX_STACK_LINE(639)
			Float tmp22 = (x * _this->b);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(639)
			Float tmp23 = (y * _this->d);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(639)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(639)
			Float tmp25 = _this->ty;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(639)
			Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(639)
			_this->ty = tmp26;
		}
		HX_STACK_LINE(640)
		::openfl::geom::Matrix tmp16 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(640)
		::openfl::geom::Matrix tmp17 = this->__renderTransform;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(640)
		tmp16->concat(tmp17);
		HX_STACK_LINE(641)
		::openfl::geom::Matrix tmp18 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(641)
		::openfl::geom::Point tmp19 = this->__offset;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(641)
		Float tmp20 = tmp19->x;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(641)
		::openfl::geom::Point tmp21 = this->__offset;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(641)
		Float tmp22 = tmp21->y;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(641)
		tmp18->translate(tmp20,tmp22);
		HX_STACK_LINE(643)
		::openfl::display::BitmapData tmp23 = this->__cachedBitmap;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(643)
		bool tmp24 = this->__cacheAsBitmapSmooth;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(643)
		::openfl::geom::Matrix tmp25 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(643)
		::openfl::geom::ColorTransform tmp26 = this->__worldColorTransform;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(643)
		Float tmp27 = this->__worldAlpha;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(643)
		Dynamic tmp28 = this->blendMode;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(643)
		::openfl::display::Shader tmp29 = this->__shader;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(643)
		renderSession->spriteBatch->renderBitmapData(tmp23,tmp24,tmp25,tmp26,tmp27,tmp28,tmp29,((Dynamic)((int)0)),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__cacheGL,(void))

Void DisplayObject_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setStageReference",0xda522b58,"openfl.display.DisplayObject.__setStageReference","openfl/display/DisplayObject.hx",647,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(649)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(649)
		::openfl::display::Stage tmp1 = stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(649)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(649)
		if ((tmp2)){
			HX_STACK_LINE(651)
			::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(651)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(651)
			if ((tmp4)){
				HX_STACK_LINE(653)
				::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(653)
				::openfl::display::InteractiveObject tmp6 = tmp5->get_focus();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(653)
				bool tmp7 = (tmp6 == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(653)
				if ((tmp7)){
					HX_STACK_LINE(655)
					::openfl::display::Stage tmp8 = this->stage;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(655)
					tmp8->set_focus(null());
				}
				HX_STACK_LINE(659)
				::openfl::events::Event tmp8 = ::openfl::events::Event_obj::__new(HX_HCSTRING("removedFromStage","\x34","\x21","\x76","\xba"),false,false);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(659)
				this->dispatchEvent(tmp8);
			}
			HX_STACK_LINE(663)
			this->stage = stage;
			HX_STACK_LINE(665)
			bool tmp5 = (stage != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(665)
			if ((tmp5)){
				HX_STACK_LINE(667)
				::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),false,false);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(667)
				this->dispatchEvent(tmp6);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__setStageReference,(void))

Void DisplayObject_obj::__setRenderDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setRenderDirty",0x7766cdd1,"openfl.display.DisplayObject.__setRenderDirty","openfl/display/DisplayObject.hx",676,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(678)
		bool tmp = this->__renderDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(678)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(678)
		if ((tmp1)){
			HX_STACK_LINE(680)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(681)
			bool tmp2 = (this->get_filters() != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(681)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(681)
			if ((tmp2)){
				HX_STACK_LINE(681)
				int tmp4 = this->get_filters()->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(681)
				int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(681)
				tmp3 = (tmp5 > (int)0);
			}
			else{
				HX_STACK_LINE(681)
				tmp3 = false;
			}
			HX_STACK_LINE(681)
			this->__updateFilters = tmp3;
			HX_STACK_LINE(682)
			this->__renderDirty = true;
			HX_STACK_LINE(683)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setRenderDirty,(void))

Void DisplayObject_obj::__setTransformDirty( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__setTransformDirty",0x7e906131,"openfl.display.DisplayObject.__setTransformDirty","openfl/display/DisplayObject.hx",690,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_LINE(692)
		bool tmp = this->__transformDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(692)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(692)
		if ((tmp1)){
			HX_STACK_LINE(694)
			this->__transformDirty = true;
			HX_STACK_LINE(695)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,__setTransformDirty,(void))

Void DisplayObject_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__update",0x3f3ecc80,"openfl.display.DisplayObject.__update","openfl/display/DisplayObject.hx",702,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(704)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(704)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(704)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(704)
		if ((tmp1)){
			HX_STACK_LINE(704)
			Float tmp3 = this->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(704)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(704)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(704)
			tmp2 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(704)
			tmp2 = false;
		}
		HX_STACK_LINE(704)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(704)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(704)
		if ((tmp3)){
			HX_STACK_LINE(704)
			Float tmp5 = this->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(704)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(704)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(704)
			tmp4 = (tmp7 != (int)0);
		}
		else{
			HX_STACK_LINE(704)
			tmp4 = false;
		}
		HX_STACK_LINE(704)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(704)
		if ((tmp4)){
			HX_STACK_LINE(704)
			bool tmp6 = this->__isMask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(704)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(704)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(704)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(704)
			tmp5 = false;
		}
		HX_STACK_LINE(704)
		this->__renderable = tmp5;
		HX_STACK_LINE(706)
		this->__updateTransforms(null());
		HX_STACK_LINE(709)
		::openfl::display::DisplayObjectContainer tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(709)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(709)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(709)
		if ((tmp7)){
			HX_STACK_LINE(709)
			tmp8 = this->__isMask;
		}
		else{
			HX_STACK_LINE(709)
			tmp8 = false;
		}
		HX_STACK_LINE(709)
		if ((tmp8)){
			HX_STACK_LINE(711)
			this->__maskCached = false;
		}
		HX_STACK_LINE(715)
		bool tmp9 = updateChildren;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(715)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(715)
		if ((tmp9)){
			HX_STACK_LINE(715)
			tmp10 = this->__transformDirty;
		}
		else{
			HX_STACK_LINE(715)
			tmp10 = false;
		}
		HX_STACK_LINE(715)
		if ((tmp10)){
			HX_STACK_LINE(717)
			this->__transformDirty = false;
			HX_STACK_LINE(718)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
		HX_STACK_LINE(722)
		bool tmp11 = transformOnly;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(722)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(722)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(722)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(722)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(722)
		if ((tmp14)){
			HX_STACK_LINE(722)
			::openfl::display::DisplayObject tmp16 = this->__mask;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(722)
			::openfl::display::DisplayObject tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(722)
			::openfl::display::DisplayObject tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(722)
			tmp15 = (tmp18 != null());
		}
		else{
			HX_STACK_LINE(722)
			tmp15 = false;
		}
		HX_STACK_LINE(722)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(722)
		if ((tmp15)){
			HX_STACK_LINE(722)
			::openfl::display::DisplayObject tmp17 = this->__mask;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(722)
			::openfl::display::DisplayObject tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(722)
			bool tmp19 = tmp18->__maskCached;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(722)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(722)
			tmp16 = !(tmp20);
		}
		else{
			HX_STACK_LINE(722)
			tmp16 = false;
		}
		HX_STACK_LINE(722)
		if ((tmp16)){
			HX_STACK_LINE(724)
			::openfl::display::Graphics tmp17 = this->__maskGraphics;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(724)
			bool tmp18 = (tmp17 == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(724)
			if ((tmp18)){
				HX_STACK_LINE(726)
				::openfl::display::Graphics tmp19 = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(726)
				this->__maskGraphics = tmp19;
			}
			HX_STACK_LINE(730)
			::openfl::display::Graphics tmp19 = this->__maskGraphics;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(730)
			tmp19->clear();
			HX_STACK_LINE(732)
			::openfl::display::DisplayObject tmp20 = this->__mask;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(732)
			::openfl::display::Graphics tmp21 = this->__maskGraphics;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(732)
			tmp20->__update(true,true,tmp21);
			HX_STACK_LINE(733)
			::openfl::display::DisplayObject tmp22 = this->__mask;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(733)
			tmp22->__maskCached = true;
		}
		HX_STACK_LINE(737)
		bool tmp17 = (maskGraphics != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(737)
		if ((tmp17)){
			HX_STACK_LINE(739)
			::openfl::display::Graphics tmp18 = maskGraphics;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(739)
			this->__updateMask(tmp18);
		}
		HX_STACK_LINE(743)
		bool tmp18 = transformOnly;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(743)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(743)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(743)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(743)
		if ((tmp20)){
			HX_STACK_LINE(743)
			tmp21 = this->__cacheAsBitmap;
		}
		else{
			HX_STACK_LINE(743)
			tmp21 = false;
		}
		HX_STACK_LINE(743)
		if ((tmp21)){
			HX_STACK_LINE(746)
			bool tmp22 = this->__updateCachedBitmap;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(746)
			bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(746)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(746)
			if ((tmp23)){
				HX_STACK_LINE(746)
				tmp24 = this->__updateFilters;
			}
			else{
				HX_STACK_LINE(746)
				tmp24 = true;
			}
			HX_STACK_LINE(746)
			if ((tmp24)){
				HX_STACK_LINE(748)
				::openfl::geom::Rectangle tmp25 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(748)
				bool tmp26 = (tmp25 == null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(748)
				if ((tmp26)){
					HX_STACK_LINE(749)
					::openfl::geom::Rectangle tmp27 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(749)
					this->__cachedBitmapBounds = tmp27;
				}
				HX_STACK_LINE(752)
				::openfl::geom::Rectangle tmp27 = this->cacheAsBitmapBounds;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(752)
				bool tmp28 = (tmp27 != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(752)
				if ((tmp28)){
					HX_STACK_LINE(753)
					::openfl::geom::Rectangle tmp29 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(753)
					::openfl::geom::Rectangle tmp30 = this->cacheAsBitmapBounds;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(753)
					tmp29->copyFrom(tmp30);
				}
				else{
					HX_STACK_LINE(756)
					::openfl::geom::Rectangle tmp29 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(756)
					tmp29->setEmpty();
					HX_STACK_LINE(757)
					::openfl::geom::Rectangle tmp30 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(757)
					::openfl::geom::Matrix tmp31 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(757)
					this->__getRenderBounds(tmp30,tmp31);
				}
				HX_STACK_LINE(762)
				bool tmp29 = (this->__filters != null());		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(762)
				if ((tmp29)){
					HX_STACK_LINE(764)
					::openfl::geom::Rectangle tmp30 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(764)
					bool tmp31 = (tmp30 == null());		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(764)
					if ((tmp31)){
						HX_STACK_LINE(765)
						::openfl::geom::Rectangle tmp32 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(765)
						this->__cachedFilterBounds = tmp32;
					}
					HX_STACK_LINE(767)
					::openfl::geom::Rectangle tmp32 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(767)
					tmp32->setEmpty();
					HX_STACK_LINE(768)
					::openfl::geom::Rectangle tmp33 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(768)
					::openfl::geom::Matrix tmp34 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(768)
					::openfl::filters::BitmapFilter_obj::__expandBounds(this->__filters,tmp33,tmp34);
					HX_STACK_LINE(770)
					::openfl::geom::Rectangle tmp35 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(770)
					::openfl::geom::Rectangle tmp36 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(770)
					hx::AddEq(tmp36->x,tmp35->x);
					HX_STACK_LINE(771)
					::openfl::geom::Rectangle tmp37 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(771)
					::openfl::geom::Rectangle tmp38 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(771)
					hx::AddEq(tmp38->y,tmp37->y);
				}
			}
		}
		HX_STACK_LINE(779)
		bool tmp22 = transformOnly;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(779)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(779)
		if ((tmp23)){
			HX_STACK_LINE(797)
			::openfl::geom::ColorTransform tmp24 = this->__worldColorTransform;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(797)
			::openfl::geom::Transform tmp25 = this->get_transform();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(797)
			::openfl::geom::ColorTransform tmp26 = tmp25->get_colorTransform();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(797)
			bool tmp27 = tmp24->__equals(tmp26,null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(797)
			bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(797)
			if ((tmp28)){
				HX_STACK_LINE(799)
				::openfl::geom::Transform tmp29 = this->get_transform();		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(799)
				::openfl::geom::ColorTransform tmp30 = tmp29->get_colorTransform();		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(799)
				::openfl::geom::ColorTransform tmp31 = tmp30->__clone();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(799)
				this->__worldColorTransform = tmp31;
			}
			HX_STACK_LINE(803)
			::openfl::display::DisplayObjectContainer tmp29 = this->parent;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(803)
			bool tmp30 = (tmp29 != null());		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(803)
			if ((tmp30)){
				HX_STACK_LINE(807)
				Float tmp31 = this->get_alpha();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(807)
				::openfl::display::DisplayObjectContainer tmp32 = this->parent;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(807)
				Float tmp33 = tmp32->__worldAlpha;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(807)
				Float tmp34 = (tmp31 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(807)
				this->__worldAlpha = tmp34;
				HX_STACK_LINE(808)
				::openfl::geom::ColorTransform tmp35 = this->__worldColorTransform;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(808)
				::openfl::display::DisplayObjectContainer tmp36 = this->parent;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(808)
				::openfl::geom::ColorTransform tmp37 = tmp36->__worldColorTransform;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(808)
				tmp35->__combine(tmp37);
				HX_STACK_LINE(810)
				Dynamic tmp38 = this->blendMode;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(810)
				bool tmp39 = (tmp38 == null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(810)
				bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(810)
				bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(810)
				if ((tmp40)){
					HX_STACK_LINE(810)
					Dynamic tmp42 = this->blendMode;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(810)
					Dynamic tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(810)
					tmp41 = (tmp43 == ((Dynamic)((int)10)));
				}
				else{
					HX_STACK_LINE(810)
					tmp41 = true;
				}
				HX_STACK_LINE(810)
				if ((tmp41)){
					HX_STACK_LINE(812)
					::openfl::display::DisplayObjectContainer tmp42 = this->parent;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(812)
					this->__blendMode = tmp42->__blendMode;
				}
				HX_STACK_LINE(816)
				::openfl::display::Shader tmp42 = this->shader;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(816)
				bool tmp43 = (tmp42 == null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(816)
				if ((tmp43)){
					HX_STACK_LINE(817)
					::openfl::display::DisplayObjectContainer tmp44 = this->parent;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(817)
					this->__shader = tmp44->__shader;
				}
			}
			else{
				HX_STACK_LINE(855)
				Float tmp31 = this->get_alpha();		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(855)
				this->__worldAlpha = tmp31;
			}
			HX_STACK_LINE(880)
			bool tmp31 = updateChildren;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(880)
			bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(880)
			if ((tmp31)){
				HX_STACK_LINE(880)
				tmp32 = this->__renderDirty;
			}
			else{
				HX_STACK_LINE(880)
				tmp32 = false;
			}
			HX_STACK_LINE(880)
			if ((tmp32)){
				HX_STACK_LINE(882)
				this->__renderDirty = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,__update,(void))

Void DisplayObject_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateChildren",0xcfbb21df,"openfl.display.DisplayObject.__updateChildren","openfl/display/DisplayObject.hx",891,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(893)
		bool tmp = this->get_visible();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(893)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(893)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(893)
		if ((tmp1)){
			HX_STACK_LINE(893)
			Float tmp3 = this->get_scaleX();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(893)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(893)
			Float tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(893)
			tmp2 = (tmp5 != (int)0);
		}
		else{
			HX_STACK_LINE(893)
			tmp2 = false;
		}
		HX_STACK_LINE(893)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(893)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(893)
		if ((tmp3)){
			HX_STACK_LINE(893)
			Float tmp5 = this->get_scaleY();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(893)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(893)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(893)
			tmp4 = (tmp7 != (int)0);
		}
		else{
			HX_STACK_LINE(893)
			tmp4 = false;
		}
		HX_STACK_LINE(893)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(893)
		if ((tmp4)){
			HX_STACK_LINE(893)
			bool tmp6 = this->__isMask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(893)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(893)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(893)
			tmp5 = !(tmp8);
		}
		else{
			HX_STACK_LINE(893)
			tmp5 = false;
		}
		HX_STACK_LINE(893)
		this->__renderable = tmp5;
		HX_STACK_LINE(894)
		bool tmp6 = this->__renderable;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(894)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(894)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(894)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(894)
		if ((tmp8)){
			HX_STACK_LINE(894)
			bool tmp10 = this->__isMask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(894)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(894)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(894)
			tmp9 = !(tmp12);
		}
		else{
			HX_STACK_LINE(894)
			tmp9 = false;
		}
		HX_STACK_LINE(894)
		if ((tmp9)){
			HX_STACK_LINE(894)
			return null();
		}
		HX_STACK_LINE(895)
		Float tmp10 = this->get_alpha();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(895)
		this->__worldAlpha = tmp10;
		HX_STACK_LINE(897)
		bool tmp11 = this->__transformDirty;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(897)
		if ((tmp11)){
			HX_STACK_LINE(899)
			this->__transformDirty = false;
			HX_STACK_LINE(900)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateChildren,(void))

Void DisplayObject_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateMask",0x5b0e798c,"openfl.display.DisplayObject.__updateMask","openfl/display/DisplayObject.hx",907,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(909)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(909)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(909)
		if ((tmp1)){
			HX_STACK_LINE(911)
			::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(911)
			maskGraphics->__commands->overrideMatrix(tmp2);
			HX_STACK_LINE(912)
			::openfl::display::Graphics tmp3 = this->__graphics;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(912)
			::openfl::_internal::renderer::DrawCommandBuffer tmp4 = tmp3->__commands;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(912)
			maskGraphics->__commands->append(tmp4);
			HX_STACK_LINE(913)
			maskGraphics->set___dirty(true);
			HX_STACK_LINE(914)
			maskGraphics->__visible = true;
			HX_STACK_LINE(916)
			bool tmp5 = (maskGraphics->__bounds == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(916)
			if ((tmp5)){
				HX_STACK_LINE(918)
				::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(918)
				maskGraphics->__bounds = tmp6;
			}
			HX_STACK_LINE(922)
			::openfl::display::Graphics tmp6 = this->__graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(922)
			::openfl::geom::Rectangle tmp7 = maskGraphics->__bounds;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(922)
			::openfl::geom::Matrix tmp8 = ::openfl::geom::Matrix_obj::__identity;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(922)
			tmp6->__getBounds(tmp7,tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateMask,(void))

Void DisplayObject_obj::__updateTransforms( ::openfl::geom::Matrix overrideTransform){
{
		HX_STACK_FRAME("openfl.display.DisplayObject","__updateTransforms",0x37510227,"openfl.display.DisplayObject.__updateTransforms","openfl/display/DisplayObject.hx",929,0xc7539829)
		HX_STACK_THIS(this)
		HX_STACK_ARG(overrideTransform,"overrideTransform")
		HX_STACK_LINE(931)
		bool tmp = (overrideTransform != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(931)
		bool overrided = tmp;		HX_STACK_VAR(overrided,"overrided");
		HX_STACK_LINE(932)
		bool tmp1 = overrided;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(932)
		::openfl::geom::Matrix tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(932)
		if ((tmp1)){
			HX_STACK_LINE(932)
			tmp2 = overrideTransform->clone();
		}
		else{
			HX_STACK_LINE(932)
			tmp2 = this->__transform;
		}
		HX_STACK_LINE(932)
		::openfl::geom::Matrix local = tmp2;		HX_STACK_VAR(local,"local");
		HX_STACK_LINE(934)
		::openfl::geom::Matrix tmp3 = this->__worldTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(934)
		bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(934)
		if ((tmp4)){
			HX_STACK_LINE(936)
			::openfl::geom::Matrix tmp5 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(936)
			this->__worldTransform = tmp5;
		}
		HX_STACK_LINE(940)
		bool tmp5 = overrided;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(940)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(940)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(940)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(940)
		if ((tmp7)){
			HX_STACK_LINE(940)
			::openfl::display::DisplayObjectContainer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(940)
			::openfl::display::DisplayObjectContainer tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(940)
			tmp8 = (tmp10 != null());
		}
		else{
			HX_STACK_LINE(940)
			tmp8 = false;
		}
		HX_STACK_LINE(940)
		if ((tmp8)){
			HX_STACK_LINE(942)
			::openfl::display::DisplayObjectContainer tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(942)
			::openfl::geom::Matrix parentTransform = tmp9->__worldTransform;		HX_STACK_VAR(parentTransform,"parentTransform");
			HX_STACK_LINE(944)
			Float tmp10 = (local->a * parentTransform->a);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(944)
			Float tmp11 = (local->b * parentTransform->c);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(944)
			Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(944)
			::openfl::geom::Matrix tmp13 = this->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(944)
			tmp13->a = tmp12;
			HX_STACK_LINE(945)
			Float tmp14 = (local->a * parentTransform->b);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(945)
			Float tmp15 = (local->b * parentTransform->d);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(945)
			Float tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(945)
			::openfl::geom::Matrix tmp17 = this->__worldTransform;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(945)
			tmp17->b = tmp16;
			HX_STACK_LINE(946)
			Float tmp18 = (local->c * parentTransform->a);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(946)
			Float tmp19 = (local->d * parentTransform->c);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(946)
			Float tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(946)
			::openfl::geom::Matrix tmp21 = this->__worldTransform;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(946)
			tmp21->c = tmp20;
			HX_STACK_LINE(947)
			Float tmp22 = (local->c * parentTransform->b);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(947)
			Float tmp23 = (local->d * parentTransform->d);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(947)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(947)
			::openfl::geom::Matrix tmp25 = this->__worldTransform;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(947)
			tmp25->d = tmp24;
			HX_STACK_LINE(948)
			Float tmp26 = (local->tx * parentTransform->a);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(948)
			Float tmp27 = (local->ty * parentTransform->c);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(948)
			Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(948)
			Float tmp29 = parentTransform->tx;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(948)
			Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(948)
			::openfl::geom::Matrix tmp31 = this->__worldTransform;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(948)
			tmp31->tx = tmp30;
			HX_STACK_LINE(949)
			Float tmp32 = (local->tx * parentTransform->b);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(949)
			Float tmp33 = (local->ty * parentTransform->d);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(949)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(949)
			Float tmp35 = parentTransform->ty;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(949)
			Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(949)
			::openfl::geom::Matrix tmp37 = this->__worldTransform;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(949)
			tmp37->ty = tmp36;
			HX_STACK_LINE(951)
			::openfl::geom::Point tmp38 = this->__worldOffset;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(951)
			::openfl::display::DisplayObjectContainer tmp39 = this->parent;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(951)
			::openfl::geom::Point tmp40 = tmp39->__worldOffset;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(951)
			tmp38->copyFrom(tmp40);
		}
		else{
			HX_STACK_LINE(955)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(955)
			::openfl::geom::Matrix tmp10 = local;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(955)
			tmp9->copyFrom(tmp10);
			HX_STACK_LINE(956)
			::openfl::geom::Point tmp11 = this->__worldOffset;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(956)
			tmp11->setTo((int)0,(int)0);
		}
		HX_STACK_LINE(960)
		::openfl::geom::Rectangle tmp9 = this->__scrollRect;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(960)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(960)
		if ((tmp10)){
			HX_STACK_LINE(962)
			::openfl::geom::Matrix tmp11 = this->__worldTransform;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(962)
			::openfl::geom::Rectangle tmp12 = this->__scrollRect;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(962)
			::openfl::geom::Point tmp13 = tmp12->get_topLeft();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(962)
			::openfl::geom::Point tmp14 = tmp11->deltaTransformPoint(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(962)
			this->__offset = tmp14;
			HX_STACK_LINE(963)
			::openfl::geom::Point tmp15 = this->__worldOffset;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(963)
			::openfl::geom::Point tmp16 = this->__offset;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(963)
			Float tmp17 = tmp16->x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(963)
			::openfl::geom::Point tmp18 = this->__offset;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(963)
			Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(963)
			tmp15->offset(tmp17,tmp19);
		}
		else{
			HX_STACK_LINE(967)
			::openfl::geom::Point tmp11 = this->__offset;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(967)
			tmp11->setTo((int)0,(int)0);
		}
		HX_STACK_LINE(971)
		::openfl::geom::Matrix tmp11 = this->__renderTransform;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(971)
		::openfl::geom::Matrix tmp12 = this->__worldTransform;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(971)
		tmp11->copyFrom(tmp12);
		HX_STACK_LINE(972)
		::openfl::geom::Matrix tmp13 = this->__renderTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(972)
		::openfl::geom::Point tmp14 = this->__worldOffset;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(972)
		Float tmp15 = tmp14->x;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(972)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(972)
		::openfl::geom::Point tmp17 = this->__worldOffset;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(972)
		Float tmp18 = tmp17->y;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(972)
		Float tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(972)
		tmp13->translate(tmp16,tmp19);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,__updateTransforms,(void))

Float DisplayObject_obj::get_alpha( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_alpha",0x5dd6147e,"openfl.display.DisplayObject.get_alpha","openfl/display/DisplayObject.hx",984,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(986)
	Float tmp = this->__alpha;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(986)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

Float DisplayObject_obj::set_alpha( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_alpha",0x4127008a,"openfl.display.DisplayObject.set_alpha","openfl/display/DisplayObject.hx",991,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(993)
	bool tmp = (value > ((Float)1.0));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(993)
	if ((tmp)){
		HX_STACK_LINE(993)
		value = ((Float)1.0);
	}
	HX_STACK_LINE(994)
	Float tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(994)
	Float tmp2 = this->__alpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(994)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(994)
	if ((tmp3)){
		HX_STACK_LINE(994)
		bool tmp4 = this->__renderDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(994)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(994)
		if ((tmp5)){
			HX_STACK_LINE(994)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(994)
			bool tmp6 = (this->get_filters() != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(994)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(994)
			if ((tmp6)){
				HX_STACK_LINE(994)
				int tmp8 = this->get_filters()->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(994)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(994)
				tmp7 = (tmp9 > (int)0);
			}
			else{
				HX_STACK_LINE(994)
				tmp7 = false;
			}
			HX_STACK_LINE(994)
			this->__updateFilters = tmp7;
			HX_STACK_LINE(994)
			this->__renderDirty = true;
			HX_STACK_LINE(994)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(995)
	Float tmp4 = this->__alpha = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(995)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

Dynamic DisplayObject_obj::set_blendMode( Dynamic value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_blendMode",0x330a4380,"openfl.display.DisplayObject.set_blendMode","openfl/display/DisplayObject.hx",1000,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1002)
	this->__blendMode = value;
	HX_STACK_LINE(1003)
	Dynamic tmp = this->blendMode = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1003)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_blendMode,return )

::openfl::display::Shader DisplayObject_obj::set_shader( ::openfl::display::Shader value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_shader",0x9bde6c79,"openfl.display.DisplayObject.set_shader","openfl/display/DisplayObject.hx",1007,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1009)
	this->__shader = value;
	HX_STACK_LINE(1010)
	::openfl::display::Shader tmp = this->shader = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1010)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_shader,return )

bool DisplayObject_obj::get_cacheAsBitmap( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_cacheAsBitmap",0xa5311003,"openfl.display.DisplayObject.get_cacheAsBitmap","openfl/display/DisplayObject.hx",1015,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1017)
	bool tmp = this->__cacheAsBitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1017)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmap,return )

bool DisplayObject_obj::set_cacheAsBitmap( bool value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_cacheAsBitmap",0xc89ee80f,"openfl.display.DisplayObject.set_cacheAsBitmap","openfl/display/DisplayObject.hx",1022,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1024)
	{
		HX_STACK_LINE(1024)
		bool tmp = this->__renderDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1024)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1024)
		if ((tmp1)){
			HX_STACK_LINE(1024)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(1024)
			bool tmp2 = (this->get_filters() != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1024)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1024)
			if ((tmp2)){
				HX_STACK_LINE(1024)
				int tmp4 = this->get_filters()->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1024)
				int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1024)
				tmp3 = (tmp5 > (int)0);
			}
			else{
				HX_STACK_LINE(1024)
				tmp3 = false;
			}
			HX_STACK_LINE(1024)
			this->__updateFilters = tmp3;
			HX_STACK_LINE(1024)
			this->__renderDirty = true;
			HX_STACK_LINE(1024)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1025)
	bool tmp = this->__forceCacheAsBitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1025)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1025)
	if ((tmp)){
		HX_STACK_LINE(1025)
		tmp1 = true;
	}
	else{
		HX_STACK_LINE(1025)
		tmp1 = value;
	}
	HX_STACK_LINE(1025)
	bool tmp2 = this->__cacheAsBitmap = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1025)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmap,return )

::openfl::geom::Matrix DisplayObject_obj::get_cacheAsBitmapMatrix( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_cacheAsBitmapMatrix",0xe47a1ea4,"openfl.display.DisplayObject.get_cacheAsBitmapMatrix","openfl/display/DisplayObject.hx",1030,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1032)
	::openfl::geom::Matrix tmp = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1032)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmapMatrix,return )

::openfl::geom::Matrix DisplayObject_obj::set_cacheAsBitmapMatrix( ::openfl::geom::Matrix value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_cacheAsBitmapMatrix",0xe6db87b0,"openfl.display.DisplayObject.set_cacheAsBitmapMatrix","openfl/display/DisplayObject.hx",1037,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1039)
	{
		HX_STACK_LINE(1039)
		bool tmp = this->__renderDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1039)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1039)
		if ((tmp1)){
			HX_STACK_LINE(1039)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(1039)
			bool tmp2 = (this->get_filters() != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1039)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1039)
			if ((tmp2)){
				HX_STACK_LINE(1039)
				int tmp4 = this->get_filters()->length;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1039)
				int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1039)
				tmp3 = (tmp5 > (int)0);
			}
			else{
				HX_STACK_LINE(1039)
				tmp3 = false;
			}
			HX_STACK_LINE(1039)
			this->__updateFilters = tmp3;
			HX_STACK_LINE(1039)
			this->__renderDirty = true;
			HX_STACK_LINE(1039)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1040)
	::openfl::geom::Matrix tmp = value->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1040)
	::openfl::geom::Matrix tmp1 = this->__cacheAsBitmapMatrix = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1040)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmapMatrix,return )

bool DisplayObject_obj::get_cacheAsBitmapSmooth( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_cacheAsBitmapSmooth",0x301cf091,"openfl.display.DisplayObject.get_cacheAsBitmapSmooth","openfl/display/DisplayObject.hx",1045,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1047)
	bool tmp = this->__cacheAsBitmapSmooth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1047)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmapSmooth,return )

bool DisplayObject_obj::set_cacheAsBitmapSmooth( bool value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_cacheAsBitmapSmooth",0x327e599d,"openfl.display.DisplayObject.set_cacheAsBitmapSmooth","openfl/display/DisplayObject.hx",1052,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1054)
	bool tmp = this->__cacheAsBitmapSmooth = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1054)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmapSmooth,return )

Array< ::Dynamic > DisplayObject_obj::get_filters( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_filters",0x661396db,"openfl.display.DisplayObject.get_filters","openfl/display/DisplayObject.hx",1059,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1061)
	bool tmp = (this->__filters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1061)
	if ((tmp)){
		HX_STACK_LINE(1063)
		return Array_obj< ::Dynamic >::__new();
	}
	else{
		HX_STACK_LINE(1067)
		return this->__filters->copy();
	}
	HX_STACK_LINE(1061)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_filters,return )

Array< ::Dynamic > DisplayObject_obj::set_filters( Array< ::Dynamic > value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_filters",0x70809de7,"openfl.display.DisplayObject.set_filters","openfl/display/DisplayObject.hx",1074,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1076)
	bool tmp = (value != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1076)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1076)
	if ((tmp)){
		HX_STACK_LINE(1076)
		tmp1 = (value->length > (int)0);
	}
	else{
		HX_STACK_LINE(1076)
		tmp1 = false;
	}
	HX_STACK_LINE(1076)
	if ((tmp1)){
		HX_STACK_LINE(1078)
		this->__filters = value;
		HX_STACK_LINE(1079)
		this->__forceCacheAsBitmap = true;
		HX_STACK_LINE(1080)
		this->__cacheAsBitmap = true;
		HX_STACK_LINE(1081)
		this->__updateFilters = true;
	}
	else{
		HX_STACK_LINE(1085)
		this->__filters = null();
		HX_STACK_LINE(1086)
		this->__forceCacheAsBitmap = false;
		HX_STACK_LINE(1087)
		this->__cacheAsBitmap = false;
		HX_STACK_LINE(1088)
		this->__updateFilters = false;
	}
	HX_STACK_LINE(1092)
	{
		HX_STACK_LINE(1092)
		bool tmp2 = this->__renderDirty;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1092)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1092)
		if ((tmp3)){
			HX_STACK_LINE(1092)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(1092)
			bool tmp4 = (this->get_filters() != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1092)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1092)
			if ((tmp4)){
				HX_STACK_LINE(1092)
				int tmp6 = this->get_filters()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1092)
				int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1092)
				tmp5 = (tmp7 > (int)0);
			}
			else{
				HX_STACK_LINE(1092)
				tmp5 = false;
			}
			HX_STACK_LINE(1092)
			this->__updateFilters = tmp5;
			HX_STACK_LINE(1092)
			this->__renderDirty = true;
			HX_STACK_LINE(1092)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1094)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_filters,return )

Float DisplayObject_obj::get_height( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_height",0x7d8c16c7,"openfl.display.DisplayObject.get_height","openfl/display/DisplayObject.hx",1099,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1101)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1101)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1102)
	{
		HX_STACK_LINE(1102)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1102)
		::openfl::geom::Matrix tmp2 = this->__transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1102)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(1104)
	Float tmp1 = bounds->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1104)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_height",0x8109b53b,"openfl.display.DisplayObject.set_height","openfl/display/DisplayObject.hx",1109,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1111)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1111)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1113)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1113)
	::openfl::geom::Matrix matrix = tmp1;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(1114)
	matrix->identity();
	HX_STACK_LINE(1116)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1116)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1116)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(1118)
	bool tmp4 = (value != bounds->height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1118)
	if ((tmp4)){
		HX_STACK_LINE(1120)
		Float tmp5 = (Float(value) / Float(bounds->height));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1120)
		this->set_scaleY(tmp5);
	}
	else{
		HX_STACK_LINE(1124)
		this->set_scaleY((int)1);
	}
	HX_STACK_LINE(1128)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1128)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

::openfl::display::DisplayObject DisplayObject_obj::get_mask( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mask",0xd81ad7cc,"openfl.display.DisplayObject.get_mask","openfl/display/DisplayObject.hx",1133,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1135)
	::openfl::display::DisplayObject tmp = this->__mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1135)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mask,return )

::openfl::display::DisplayObject DisplayObject_obj::set_mask( ::openfl::display::DisplayObject value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_mask",0x86783140,"openfl.display.DisplayObject.set_mask","openfl/display/DisplayObject.hx",1140,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1142)
	::openfl::display::DisplayObject tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1142)
	::openfl::display::DisplayObject tmp1 = this->__mask;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1142)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1142)
	if ((tmp2)){
		HX_STACK_LINE(1143)
		{
			HX_STACK_LINE(1143)
			bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1143)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1143)
			if ((tmp4)){
				HX_STACK_LINE(1143)
				this->__transformDirty = true;
				HX_STACK_LINE(1143)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1144)
		{
			HX_STACK_LINE(1144)
			bool tmp3 = this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1144)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1144)
			if ((tmp4)){
				HX_STACK_LINE(1144)
				this->__updateCachedBitmap = true;
				HX_STACK_LINE(1144)
				bool tmp5 = (this->get_filters() != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1144)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1144)
				if ((tmp5)){
					HX_STACK_LINE(1144)
					int tmp7 = this->get_filters()->length;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1144)
					int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1144)
					tmp6 = (tmp8 > (int)0);
				}
				else{
					HX_STACK_LINE(1144)
					tmp6 = false;
				}
				HX_STACK_LINE(1144)
				this->__updateFilters = tmp6;
				HX_STACK_LINE(1144)
				this->__renderDirty = true;
				HX_STACK_LINE(1144)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(1146)
	::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1146)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1146)
	if ((tmp4)){
		HX_STACK_LINE(1147)
		::openfl::display::DisplayObject tmp5 = this->__mask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1147)
		tmp5->__isMask = false;
		HX_STACK_LINE(1148)
		::openfl::display::DisplayObject tmp6 = this->__mask;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1148)
		tmp6->__maskCached = false;
		HX_STACK_LINE(1149)
		{
			HX_STACK_LINE(1149)
			::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1149)
			::openfl::display::DisplayObject _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1149)
			bool tmp8 = _this->__transformDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1149)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1149)
			if ((tmp9)){
				HX_STACK_LINE(1149)
				_this->__transformDirty = true;
				HX_STACK_LINE(1149)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1150)
		{
			HX_STACK_LINE(1150)
			::openfl::display::DisplayObject tmp7 = this->__mask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1150)
			::openfl::display::DisplayObject _this = tmp7;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1150)
			bool tmp8 = _this->__renderDirty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1150)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1150)
			if ((tmp9)){
				HX_STACK_LINE(1150)
				_this->__updateCachedBitmap = true;
				HX_STACK_LINE(1150)
				bool tmp10 = (_this->get_filters() != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1150)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1150)
				if ((tmp10)){
					HX_STACK_LINE(1150)
					int tmp12 = _this->get_filters()->length;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1150)
					int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1150)
					tmp11 = (tmp13 > (int)0);
				}
				else{
					HX_STACK_LINE(1150)
					tmp11 = false;
				}
				HX_STACK_LINE(1150)
				_this->__updateFilters = tmp11;
				HX_STACK_LINE(1150)
				_this->__renderDirty = true;
				HX_STACK_LINE(1150)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(1151)
		this->__maskGraphics = null();
	}
	HX_STACK_LINE(1153)
	bool tmp5 = (value != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1153)
	if ((tmp5)){
		HX_STACK_LINE(1153)
		value->__isMask = true;
	}
	HX_STACK_LINE(1154)
	::openfl::display::DisplayObject tmp6 = this->__mask = value;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1154)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_mask,return )

Float DisplayObject_obj::get_mouseX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseX",0x474e5973,"openfl.display.DisplayObject.get_mouseX","openfl/display/DisplayObject.hx",1159,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1161)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1161)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1161)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1161)
	if ((tmp1)){
		HX_STACK_LINE(1161)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1161)
		tmp2 = tmp3->__mouseX;
	}
	else{
		HX_STACK_LINE(1161)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1161)
		tmp2 = tmp3->stage->__mouseX;
	}
	HX_STACK_LINE(1161)
	Float mouseX = tmp2;		HX_STACK_VAR(mouseX,"mouseX");
	HX_STACK_LINE(1162)
	::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1162)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1162)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1162)
	if ((tmp4)){
		HX_STACK_LINE(1162)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1162)
		tmp5 = tmp6->__mouseY;
	}
	else{
		HX_STACK_LINE(1162)
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1162)
		tmp5 = tmp6->stage->__mouseY;
	}
	HX_STACK_LINE(1162)
	Float mouseY = tmp5;		HX_STACK_VAR(mouseY,"mouseY");
	HX_STACK_LINE(1164)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1164)
	{
		HX_STACK_LINE(1164)
		::openfl::geom::Matrix tmp7 = this->__getWorldTransform();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1164)
		::openfl::geom::Matrix _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1164)
		Float tmp8 = (_this->a * _this->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1164)
		Float tmp9 = (_this->b * _this->c);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1164)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1164)
		Float norm = tmp10;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1164)
		bool tmp11 = (norm == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1164)
		if ((tmp11)){
			HX_STACK_LINE(1164)
			Float tmp12 = _this->tx;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1164)
			tmp6 = -(tmp12);
		}
		else{
			HX_STACK_LINE(1164)
			Float tmp12 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1164)
			Float tmp13 = _this->c;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1164)
			Float tmp14 = (_this->ty - mouseY);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1164)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1164)
			Float tmp16 = _this->d;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1164)
			Float tmp17 = (mouseX - _this->tx);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1164)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1164)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1164)
			tmp6 = (tmp12 * tmp19);
		}
	}
	HX_STACK_LINE(1164)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseX,return )

Float DisplayObject_obj::get_mouseY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_mouseY",0x474e5974,"openfl.display.DisplayObject.get_mouseY","openfl/display/DisplayObject.hx",1169,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1171)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1171)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1171)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1171)
	if ((tmp1)){
		HX_STACK_LINE(1171)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1171)
		tmp2 = tmp3->__mouseX;
	}
	else{
		HX_STACK_LINE(1171)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1171)
		tmp2 = tmp3->stage->__mouseX;
	}
	HX_STACK_LINE(1171)
	Float mouseX = tmp2;		HX_STACK_VAR(mouseX,"mouseX");
	HX_STACK_LINE(1172)
	::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1172)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1172)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1172)
	if ((tmp4)){
		HX_STACK_LINE(1172)
		::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1172)
		tmp5 = tmp6->__mouseY;
	}
	else{
		HX_STACK_LINE(1172)
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1172)
		tmp5 = tmp6->stage->__mouseY;
	}
	HX_STACK_LINE(1172)
	Float mouseY = tmp5;		HX_STACK_VAR(mouseY,"mouseY");
	HX_STACK_LINE(1174)
	Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1174)
	{
		HX_STACK_LINE(1174)
		::openfl::geom::Matrix tmp7 = this->__getWorldTransform();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1174)
		::openfl::geom::Matrix _this = tmp7;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(1174)
		Float tmp8 = (_this->a * _this->d);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1174)
		Float tmp9 = (_this->b * _this->c);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1174)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1174)
		Float norm = tmp10;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(1174)
		bool tmp11 = (norm == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1174)
		if ((tmp11)){
			HX_STACK_LINE(1174)
			Float tmp12 = _this->ty;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1174)
			tmp6 = -(tmp12);
		}
		else{
			HX_STACK_LINE(1174)
			Float tmp12 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1174)
			Float tmp13 = _this->a;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1174)
			Float tmp14 = (mouseY - _this->ty);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1174)
			Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1174)
			Float tmp16 = _this->b;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1174)
			Float tmp17 = (_this->tx - mouseX);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1174)
			Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1174)
			Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1174)
			tmp6 = (tmp12 * tmp19);
		}
	}
	HX_STACK_LINE(1174)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseY,return )

::String DisplayObject_obj::get_name( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_name",0xd8c4092b,"openfl.display.DisplayObject.get_name","openfl/display/DisplayObject.hx",1179,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1181)
	::String tmp = this->__name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1181)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_name,return )

::String DisplayObject_obj::set_name( ::String value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_name",0x8721629f,"openfl.display.DisplayObject.set_name","openfl/display/DisplayObject.hx",1186,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1188)
	::String tmp = this->__name = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1188)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_name,return )

::openfl::display::DisplayObject DisplayObject_obj::get_root( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_root",0xdb738502,"openfl.display.DisplayObject.get_root","openfl/display/DisplayObject.hx",1193,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1195)
	::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1195)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1195)
	if ((tmp1)){
		HX_STACK_LINE(1197)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1197)
		return tmp2;
	}
	HX_STACK_LINE(1201)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_root,return )

Float DisplayObject_obj::get_rotation( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_rotation",0xdf0fc41e,"openfl.display.DisplayObject.get_rotation","openfl/display/DisplayObject.hx",1206,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1208)
	Float tmp = this->__rotation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1208)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotation,return )

Float DisplayObject_obj::set_rotation( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_rotation",0xf408e792,"openfl.display.DisplayObject.set_rotation","openfl/display/DisplayObject.hx",1213,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1215)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1215)
	Float tmp1 = this->__rotation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1215)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1215)
	if ((tmp2)){
		HX_STACK_LINE(1217)
		this->__rotation = value;
		HX_STACK_LINE(1218)
		Float tmp3 = this->__rotation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1218)
		Float tmp4 = ::Math_obj::PI;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1218)
		Float tmp5 = (Float(tmp4) / Float((int)180));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1218)
		Float tmp6 = (tmp3 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1218)
		Float radians = tmp6;		HX_STACK_VAR(radians,"radians");
		HX_STACK_LINE(1219)
		Float tmp7 = radians;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1219)
		Float tmp8 = ::Math_obj::sin(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1219)
		this->__rotationSine = tmp8;
		HX_STACK_LINE(1220)
		Float tmp9 = radians;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1220)
		Float tmp10 = ::Math_obj::cos(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1220)
		this->__rotationCosine = tmp10;
		HX_STACK_LINE(1222)
		Float tmp11 = this->get_scaleX();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1222)
		Float __scaleX = tmp11;		HX_STACK_VAR(__scaleX,"__scaleX");
		HX_STACK_LINE(1223)
		Float tmp12 = this->get_scaleY();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1223)
		Float __scaleY = tmp12;		HX_STACK_VAR(__scaleY,"__scaleY");
		HX_STACK_LINE(1225)
		Float tmp13 = this->__rotationCosine;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1225)
		Float tmp14 = __scaleX;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1225)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1225)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1225)
		tmp16->a = tmp15;
		HX_STACK_LINE(1226)
		Float tmp17 = this->__rotationSine;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1226)
		Float tmp18 = __scaleX;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1226)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1226)
		::openfl::geom::Matrix tmp20 = this->__transform;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1226)
		tmp20->b = tmp19;
		HX_STACK_LINE(1227)
		Float tmp21 = this->__rotationSine;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1227)
		Float tmp22 = -(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1227)
		Float tmp23 = __scaleY;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1227)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1227)
		::openfl::geom::Matrix tmp25 = this->__transform;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1227)
		tmp25->c = tmp24;
		HX_STACK_LINE(1228)
		Float tmp26 = this->__rotationCosine;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1228)
		Float tmp27 = __scaleY;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1228)
		Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(1228)
		::openfl::geom::Matrix tmp29 = this->__transform;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(1228)
		tmp29->d = tmp28;
		HX_STACK_LINE(1230)
		{
			HX_STACK_LINE(1230)
			bool tmp30 = this->__transformDirty;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1230)
			bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1230)
			if ((tmp31)){
				HX_STACK_LINE(1230)
				this->__transformDirty = true;
				HX_STACK_LINE(1230)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
	}
	HX_STACK_LINE(1234)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1234)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotation,return )

Float DisplayObject_obj::get_scaleX( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleX",0xb765f96e,"openfl.display.DisplayObject.get_scaleX","openfl/display/DisplayObject.hx",1239,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1241)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1241)
	Float tmp1 = tmp->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1241)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1241)
	if ((tmp2)){
		HX_STACK_LINE(1243)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1243)
		Float tmp4 = tmp3->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1243)
		return tmp4;
	}
	else{
		HX_STACK_LINE(1247)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1247)
		Float tmp4 = tmp3->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1247)
		::openfl::geom::Matrix tmp5 = this->__transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1247)
		Float tmp6 = tmp5->a;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1247)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1247)
		::openfl::geom::Matrix tmp8 = this->__transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1247)
		Float tmp9 = tmp8->b;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1247)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1247)
		Float tmp11 = tmp10->b;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1247)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1247)
		Float tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1247)
		Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1247)
		return tmp14;
	}
	HX_STACK_LINE(1241)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleX,return )

Float DisplayObject_obj::set_scaleX( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleX",0xbae397e2,"openfl.display.DisplayObject.set_scaleX","openfl/display/DisplayObject.hx",1254,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1256)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1256)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1256)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1256)
	if ((tmp2)){
		HX_STACK_LINE(1258)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1258)
		::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1258)
		Float tmp5 = tmp4->a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1258)
		bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1258)
		if ((tmp6)){
			HX_STACK_LINE(1258)
			bool tmp7 = this->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1258)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1258)
			if ((tmp8)){
				HX_STACK_LINE(1258)
				this->__transformDirty = true;
				HX_STACK_LINE(1258)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1259)
		::openfl::geom::Matrix tmp7 = this->__transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1259)
		tmp7->a = value;
	}
	else{
		HX_STACK_LINE(1263)
		Float tmp3 = this->__rotationCosine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1263)
		Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1263)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1263)
		Float a = tmp5;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1264)
		Float tmp6 = this->__rotationSine;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1264)
		Float tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1264)
		Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1264)
		Float b = tmp8;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1266)
		::openfl::geom::Matrix tmp9 = this->__transform;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1266)
		Float tmp10 = tmp9->a;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1266)
		Float tmp11 = a;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1266)
		bool tmp12 = (tmp10 != tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1266)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1266)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1266)
		if ((tmp13)){
			HX_STACK_LINE(1266)
			::openfl::geom::Matrix tmp15 = this->__transform;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1266)
			::openfl::geom::Matrix tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1266)
			Float tmp17 = tmp16->b;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1266)
			Float tmp18 = b;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1266)
			tmp14 = (tmp17 != tmp18);
		}
		else{
			HX_STACK_LINE(1266)
			tmp14 = true;
		}
		HX_STACK_LINE(1266)
		if ((tmp14)){
			HX_STACK_LINE(1268)
			bool tmp15 = this->__transformDirty;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1268)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1268)
			if ((tmp16)){
				HX_STACK_LINE(1268)
				this->__transformDirty = true;
				HX_STACK_LINE(1268)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1272)
		::openfl::geom::Matrix tmp15 = this->__transform;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1272)
		tmp15->a = a;
		HX_STACK_LINE(1273)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1273)
		tmp16->b = b;
	}
	HX_STACK_LINE(1277)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1277)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleX,return )

Float DisplayObject_obj::get_scaleY( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scaleY",0xb765f96f,"openfl.display.DisplayObject.get_scaleY","openfl/display/DisplayObject.hx",1282,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1284)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1284)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1284)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1284)
	if ((tmp2)){
		HX_STACK_LINE(1286)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1286)
		Float tmp4 = tmp3->d;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1286)
		return tmp4;
	}
	else{
		HX_STACK_LINE(1290)
		::openfl::geom::Matrix tmp3 = this->__transform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1290)
		Float tmp4 = tmp3->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1290)
		::openfl::geom::Matrix tmp5 = this->__transform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1290)
		Float tmp6 = tmp5->c;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1290)
		Float tmp7 = (tmp4 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1290)
		::openfl::geom::Matrix tmp8 = this->__transform;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1290)
		Float tmp9 = tmp8->d;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1290)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1290)
		Float tmp11 = tmp10->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1290)
		Float tmp12 = (tmp9 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1290)
		Float tmp13 = (tmp7 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1290)
		Float tmp14 = ::Math_obj::sqrt(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1290)
		return tmp14;
	}
	HX_STACK_LINE(1284)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleY,return )

Float DisplayObject_obj::set_scaleY( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scaleY",0xbae397e3,"openfl.display.DisplayObject.set_scaleY","openfl/display/DisplayObject.hx",1297,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1299)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1299)
	Float tmp1 = tmp->c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1299)
	bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1299)
	if ((tmp2)){
		HX_STACK_LINE(1301)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1301)
		::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1301)
		Float tmp5 = tmp4->d;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1301)
		bool tmp6 = (tmp3 != tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1301)
		if ((tmp6)){
			HX_STACK_LINE(1301)
			bool tmp7 = this->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1301)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1301)
			if ((tmp8)){
				HX_STACK_LINE(1301)
				this->__transformDirty = true;
				HX_STACK_LINE(1301)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1302)
		::openfl::geom::Matrix tmp7 = this->__transform;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1302)
		tmp7->d = value;
	}
	else{
		HX_STACK_LINE(1306)
		Float tmp3 = this->__rotationSine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1306)
		Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1306)
		Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1306)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1306)
		Float c = tmp6;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(1307)
		Float tmp7 = this->__rotationCosine;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1307)
		Float tmp8 = value;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1307)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1307)
		Float d = tmp9;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(1309)
		::openfl::geom::Matrix tmp10 = this->__transform;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1309)
		Float tmp11 = tmp10->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1309)
		Float tmp12 = d;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1309)
		bool tmp13 = (tmp11 != tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1309)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1309)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1309)
		if ((tmp14)){
			HX_STACK_LINE(1309)
			::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1309)
			::openfl::geom::Matrix tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1309)
			Float tmp18 = tmp17->c;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1309)
			Float tmp19 = c;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1309)
			tmp15 = (tmp18 != tmp19);
		}
		else{
			HX_STACK_LINE(1309)
			tmp15 = true;
		}
		HX_STACK_LINE(1309)
		if ((tmp15)){
			HX_STACK_LINE(1311)
			bool tmp16 = this->__transformDirty;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1311)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1311)
			if ((tmp17)){
				HX_STACK_LINE(1311)
				this->__transformDirty = true;
				HX_STACK_LINE(1311)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(1315)
		::openfl::geom::Matrix tmp16 = this->__transform;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1315)
		tmp16->c = c;
		HX_STACK_LINE(1316)
		::openfl::geom::Matrix tmp17 = this->__transform;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1316)
		tmp17->d = d;
	}
	HX_STACK_LINE(1320)
	Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1320)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleY,return )

::openfl::geom::Rectangle DisplayObject_obj::get_scrollRect( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_scrollRect",0xba87dab1,"openfl.display.DisplayObject.get_scrollRect","openfl/display/DisplayObject.hx",1325,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1327)
	::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1327)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1327)
	if ((tmp1)){
		HX_STACK_LINE(1327)
		return null();
	}
	HX_STACK_LINE(1329)
	::openfl::geom::Rectangle tmp2 = this->__scrollRect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1329)
	::openfl::geom::Rectangle tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1329)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scrollRect,return )

::openfl::geom::Rectangle DisplayObject_obj::set_scrollRect( ::openfl::geom::Rectangle value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_scrollRect",0xdaa7c325,"openfl.display.DisplayObject.set_scrollRect","openfl/display/DisplayObject.hx",1334,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1336)
	::openfl::geom::Rectangle tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1336)
	::openfl::geom::Rectangle tmp1 = this->__scrollRect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1336)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1336)
	if ((tmp2)){
		HX_STACK_LINE(1338)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1338)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1338)
		if ((tmp4)){
			HX_STACK_LINE(1338)
			this->__transformDirty = true;
			HX_STACK_LINE(1338)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1343)
	::openfl::geom::Rectangle tmp3 = this->__scrollRect = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1343)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scrollRect,return )

::openfl::geom::Transform DisplayObject_obj::get_transform( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_transform",0x275faa8c,"openfl.display.DisplayObject.get_transform","openfl/display/DisplayObject.hx",1348,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1350)
	::openfl::geom::Transform tmp = this->__objectTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1350)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1350)
	if ((tmp1)){
		HX_STACK_LINE(1352)
		::openfl::geom::Transform tmp2 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1352)
		this->__objectTransform = tmp2;
	}
	HX_STACK_LINE(1356)
	::openfl::geom::Transform tmp2 = this->__objectTransform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1356)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_transform,return )

::openfl::geom::Transform DisplayObject_obj::set_transform( ::openfl::geom::Transform value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_transform",0x6c658c98,"openfl.display.DisplayObject.set_transform","openfl/display/DisplayObject.hx",1361,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1363)
	bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1363)
	if ((tmp)){
		HX_STACK_LINE(1365)
		::openfl::errors::TypeError tmp1 = ::openfl::errors::TypeError_obj::__new(HX_HCSTRING("Parameter transform must be non-null.","\x56","\x12","\xfe","\x6e"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1365)
		HX_STACK_DO_THROW(tmp1);
	}
	HX_STACK_LINE(1369)
	::openfl::geom::Transform tmp1 = this->__objectTransform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1369)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1369)
	if ((tmp2)){
		HX_STACK_LINE(1371)
		::openfl::geom::Transform tmp3 = ::openfl::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1371)
		this->__objectTransform = tmp3;
	}
	HX_STACK_LINE(1375)
	{
		HX_STACK_LINE(1375)
		bool tmp3 = this->__transformDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1375)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1375)
		if ((tmp4)){
			HX_STACK_LINE(1375)
			this->__transformDirty = true;
			HX_STACK_LINE(1375)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1376)
	::openfl::geom::Transform tmp3 = this->__objectTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1376)
	::openfl::geom::Matrix tmp4 = value->get_matrix();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1376)
	tmp3->set_matrix(tmp4);
	HX_STACK_LINE(1377)
	::openfl::geom::Transform tmp5 = this->__objectTransform;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1377)
	::openfl::geom::ColorTransform tmp6 = value->get_colorTransform();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1377)
	::openfl::geom::ColorTransform tmp7 = tmp6->__clone();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1377)
	tmp5->set_colorTransform(tmp7);
	HX_STACK_LINE(1379)
	::openfl::geom::Transform tmp8 = this->__objectTransform;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1379)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_transform,return )

bool DisplayObject_obj::get_visible( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_visible",0xfff16d92,"openfl.display.DisplayObject.get_visible","openfl/display/DisplayObject.hx",1384,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1386)
	bool tmp = this->__visible;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1386)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible( bool value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_visible",0x0a5e749e,"openfl.display.DisplayObject.set_visible","openfl/display/DisplayObject.hx",1391,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1393)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1393)
	bool tmp1 = this->__visible;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1393)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1393)
	if ((tmp2)){
		HX_STACK_LINE(1393)
		bool tmp3 = this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1393)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1393)
		if ((tmp4)){
			HX_STACK_LINE(1393)
			this->__updateCachedBitmap = true;
			HX_STACK_LINE(1393)
			bool tmp5 = (this->get_filters() != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1393)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1393)
			if ((tmp5)){
				HX_STACK_LINE(1393)
				int tmp7 = this->get_filters()->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1393)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1393)
				tmp6 = (tmp8 > (int)0);
			}
			else{
				HX_STACK_LINE(1393)
				tmp6 = false;
			}
			HX_STACK_LINE(1393)
			this->__updateFilters = tmp6;
			HX_STACK_LINE(1393)
			this->__renderDirty = true;
			HX_STACK_LINE(1393)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(1394)
	bool tmp3 = this->__visible = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1394)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

Float DisplayObject_obj::get_width( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_width",0x06a22326,"openfl.display.DisplayObject.get_width","openfl/display/DisplayObject.hx",1399,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1401)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1401)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1402)
	{
		HX_STACK_LINE(1402)
		::openfl::geom::Rectangle tmp1 = bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1402)
		::openfl::geom::Matrix tmp2 = this->__transform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1402)
		this->__getBounds(tmp1,tmp2);
	}
	HX_STACK_LINE(1404)
	Float tmp1 = bounds->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1404)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_width",0xe9f30f32,"openfl.display.DisplayObject.set_width","openfl/display/DisplayObject.hx",1409,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1411)
	::openfl::geom::Rectangle tmp = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1411)
	::openfl::geom::Rectangle bounds = tmp;		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1413)
	::openfl::geom::Matrix tmp1 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1413)
	::openfl::geom::Matrix matrix = tmp1;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(1414)
	matrix->identity();
	HX_STACK_LINE(1416)
	::openfl::geom::Rectangle tmp2 = bounds;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1416)
	::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1416)
	this->__getBounds(tmp2,tmp3);
	HX_STACK_LINE(1418)
	bool tmp4 = (value != bounds->width);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1418)
	if ((tmp4)){
		HX_STACK_LINE(1420)
		Float tmp5 = (Float(value) / Float(bounds->width));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1420)
		this->set_scaleX(tmp5);
	}
	else{
		HX_STACK_LINE(1424)
		this->set_scaleX((int)1);
	}
	HX_STACK_LINE(1428)
	Float tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1428)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_x( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_x",0xc67a5d98,"openfl.display.DisplayObject.get_x","openfl/display/DisplayObject.hx",1433,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1435)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1435)
	Float tmp1 = tmp->tx;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1435)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_x",0xaf4953a4,"openfl.display.DisplayObject.set_x","openfl/display/DisplayObject.hx",1440,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1442)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1442)
	::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1442)
	Float tmp2 = tmp1->tx;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1442)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1442)
	if ((tmp3)){
		HX_STACK_LINE(1442)
		bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1442)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1442)
		if ((tmp5)){
			HX_STACK_LINE(1442)
			this->__transformDirty = true;
			HX_STACK_LINE(1442)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1443)
	::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1443)
	Float tmp5 = tmp4->tx = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1443)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y( ){
	HX_STACK_FRAME("openfl.display.DisplayObject","get_y",0xc67a5d99,"openfl.display.DisplayObject.get_y","openfl/display/DisplayObject.hx",1448,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1450)
	::openfl::geom::Matrix tmp = this->__transform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1450)
	Float tmp1 = tmp->ty;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1450)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y( Float value){
	HX_STACK_FRAME("openfl.display.DisplayObject","set_y",0xaf4953a5,"openfl.display.DisplayObject.set_y","openfl/display/DisplayObject.hx",1455,0xc7539829)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1457)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1457)
	::openfl::geom::Matrix tmp1 = this->__transform;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1457)
	Float tmp2 = tmp1->ty;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1457)
	bool tmp3 = (tmp != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1457)
	if ((tmp3)){
		HX_STACK_LINE(1457)
		bool tmp4 = this->__transformDirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1457)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1457)
		if ((tmp5)){
			HX_STACK_LINE(1457)
			this->__transformDirty = true;
			HX_STACK_LINE(1457)
			(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
		}
	}
	HX_STACK_LINE(1458)
	::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1458)
	Float tmp5 = tmp4->ty = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1458)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

int DisplayObject_obj::__instanceCount;

int DisplayObject_obj::__worldRenderDirty;

int DisplayObject_obj::__worldTransformDirty;

bool DisplayObject_obj::__cacheAsBitmapMode;


DisplayObject_obj::DisplayObject_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(blendMode,"blendMode");
	HX_MARK_MEMBER_NAME(cacheAsBitmapBounds,"cacheAsBitmapBounds");
	HX_MARK_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__worldOffset,"__worldOffset");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__alpha,"__alpha");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	HX_MARK_MEMBER_NAME(__children,"__children");
	HX_MARK_MEMBER_NAME(__filters,"__filters");
	HX_MARK_MEMBER_NAME(__graphics,"__graphics");
	HX_MARK_MEMBER_NAME(__interactive,"__interactive");
	HX_MARK_MEMBER_NAME(__isMask,"__isMask");
	HX_MARK_MEMBER_NAME(__mask,"__mask");
	HX_MARK_MEMBER_NAME(__maskGraphics,"__maskGraphics");
	HX_MARK_MEMBER_NAME(__maskCached,"__maskCached");
	HX_MARK_MEMBER_NAME(__name,"__name");
	HX_MARK_MEMBER_NAME(__objectTransform,"__objectTransform");
	HX_MARK_MEMBER_NAME(__offset,"__offset");
	HX_MARK_MEMBER_NAME(__renderable,"__renderable");
	HX_MARK_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_MARK_MEMBER_NAME(__rotation,"__rotation");
	HX_MARK_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_MARK_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_MARK_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_MARK_MEMBER_NAME(__shader,"__shader");
	HX_MARK_MEMBER_NAME(__transform,"__transform");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_MARK_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_MARK_MEMBER_NAME(__worldClip,"__worldClip");
	HX_MARK_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_MARK_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_MARK_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_MARK_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_MARK_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_MARK_MEMBER_NAME(__worldZ,"__worldZ");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__cacheAsBitmapMatrix,"__cacheAsBitmapMatrix");
	HX_MARK_MEMBER_NAME(__cacheAsBitmapSmooth,"__cacheAsBitmapSmooth");
	HX_MARK_MEMBER_NAME(__forceCacheAsBitmap,"__forceCacheAsBitmap");
	HX_MARK_MEMBER_NAME(__updateCachedBitmap,"__updateCachedBitmap");
	HX_MARK_MEMBER_NAME(__cachedBitmap,"__cachedBitmap");
	HX_MARK_MEMBER_NAME(__cachedBitmapBounds,"__cachedBitmapBounds");
	HX_MARK_MEMBER_NAME(__cachedFilterBounds,"__cachedFilterBounds");
	HX_MARK_MEMBER_NAME(__cacheGLMatrix,"__cacheGLMatrix");
	HX_MARK_MEMBER_NAME(__updateFilters,"__updateFilters");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(blendMode,"blendMode");
	HX_VISIT_MEMBER_NAME(cacheAsBitmapBounds,"cacheAsBitmapBounds");
	HX_VISIT_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(opaqueBackground,"opaqueBackground");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(scale9Grid,"scale9Grid");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(__renderTransform,"__renderTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__worldOffset,"__worldOffset");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__alpha,"__alpha");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(__children,"__children");
	HX_VISIT_MEMBER_NAME(__filters,"__filters");
	HX_VISIT_MEMBER_NAME(__graphics,"__graphics");
	HX_VISIT_MEMBER_NAME(__interactive,"__interactive");
	HX_VISIT_MEMBER_NAME(__isMask,"__isMask");
	HX_VISIT_MEMBER_NAME(__mask,"__mask");
	HX_VISIT_MEMBER_NAME(__maskGraphics,"__maskGraphics");
	HX_VISIT_MEMBER_NAME(__maskCached,"__maskCached");
	HX_VISIT_MEMBER_NAME(__name,"__name");
	HX_VISIT_MEMBER_NAME(__objectTransform,"__objectTransform");
	HX_VISIT_MEMBER_NAME(__offset,"__offset");
	HX_VISIT_MEMBER_NAME(__renderable,"__renderable");
	HX_VISIT_MEMBER_NAME(__renderDirty,"__renderDirty");
	HX_VISIT_MEMBER_NAME(__rotation,"__rotation");
	HX_VISIT_MEMBER_NAME(__rotationCosine,"__rotationCosine");
	HX_VISIT_MEMBER_NAME(__rotationSine,"__rotationSine");
	HX_VISIT_MEMBER_NAME(__scrollRect,"__scrollRect");
	HX_VISIT_MEMBER_NAME(__shader,"__shader");
	HX_VISIT_MEMBER_NAME(__transform,"__transform");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__worldAlpha,"__worldAlpha");
	HX_VISIT_MEMBER_NAME(__worldAlphaChanged,"__worldAlphaChanged");
	HX_VISIT_MEMBER_NAME(__worldClip,"__worldClip");
	HX_VISIT_MEMBER_NAME(__worldClipChanged,"__worldClipChanged");
	HX_VISIT_MEMBER_NAME(__worldTransformCache,"__worldTransformCache");
	HX_VISIT_MEMBER_NAME(__worldTransformChanged,"__worldTransformChanged");
	HX_VISIT_MEMBER_NAME(__worldVisible,"__worldVisible");
	HX_VISIT_MEMBER_NAME(__worldVisibleChanged,"__worldVisibleChanged");
	HX_VISIT_MEMBER_NAME(__worldZ,"__worldZ");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmapMatrix,"__cacheAsBitmapMatrix");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmapSmooth,"__cacheAsBitmapSmooth");
	HX_VISIT_MEMBER_NAME(__forceCacheAsBitmap,"__forceCacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__updateCachedBitmap,"__updateCachedBitmap");
	HX_VISIT_MEMBER_NAME(__cachedBitmap,"__cachedBitmap");
	HX_VISIT_MEMBER_NAME(__cachedBitmapBounds,"__cachedBitmapBounds");
	HX_VISIT_MEMBER_NAME(__cachedFilterBounds,"__cachedFilterBounds");
	HX_VISIT_MEMBER_NAME(__cacheGLMatrix,"__cacheGLMatrix");
	HX_VISIT_MEMBER_NAME(__updateFilters,"__updateFilters");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return get_y(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return get_mask(); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return get_name(); }
		if (HX_FIELD_EQ(inName,"root") ) { return inCallProp == hx::paccAlways ? get_root() : root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return get_height(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp == hx::paccAlways ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp == hx::paccAlways ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return get_scaleY(); }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"__mask") ) { return __mask; }
		if (HX_FIELD_EQ(inName,"__name") ) { return __name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return get_filters(); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return get_visible(); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { return __alpha; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { return __isMask; }
		if (HX_FIELD_EQ(inName,"__offset") ) { return __offset; }
		if (HX_FIELD_EQ(inName,"__shader") ) { return __shader; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { return __worldZ; }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mask") ) { return get_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { return blendMode; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return get_transform(); }
		if (HX_FIELD_EQ(inName,"__filters") ) { return __filters; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		if (HX_FIELD_EQ(inName,"__cacheGL") ) { return __cacheGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { return loaderInfo; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { return scale9Grid; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return get_scrollRect(); }
		if (HX_FIELD_EQ(inName,"__children") ) { return __children; }
		if (HX_FIELD_EQ(inName,"__graphics") ) { return __graphics; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { return __rotation; }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"set_shader") ) { return set_shader_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"__transform") ) { return __transform; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { return __worldClip; }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__maskCached") ) { return __maskCached; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { return __renderable; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { return __scrollRect; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { return __worldAlpha; }
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == hx::paccAlways) return get_cacheAsBitmap(); }
		if (HX_FIELD_EQ(inName,"__worldOffset") ) { return __worldOffset; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { return __interactive; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { return __renderDirty; }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		if (HX_FIELD_EQ(inName,"__preRenderGL") ) { return __preRenderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return set_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__maskGraphics") ) { return __maskGraphics; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { return __rotationSine; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { return __worldVisible; }
		if (HX_FIELD_EQ(inName,"__cachedBitmap") ) { return __cachedBitmap; }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		if (HX_FIELD_EQ(inName,"__postRenderGL") ) { return __postRenderGL_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollRect") ) { return get_scrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollRect") ) { return set_scrollRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"__cacheGLMatrix") ) { return __cacheGLMatrix; }
		if (HX_FIELD_EQ(inName,"__updateFilters") ) { return __updateFilters; }
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return __dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { return opaqueBackground; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { return __rotationCosine; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"__getInteractive") ) { return __getInteractive_dyn(); }
		if (HX_FIELD_EQ(inName,"__getLocalBounds") ) { return __getLocalBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawGraphicsGL") ) { return __drawGraphicsGL_dyn(); }
		if (HX_FIELD_EQ(inName,"__setRenderDirty") ) { return __setRenderDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { return __renderTransform; }
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { return __objectTransform; }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return __getRenderBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmap") ) { return get_cacheAsBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmap") ) { return set_cacheAsBitmap_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { return __worldClipChanged; }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return __updateTransforms_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheAsBitmapMatrix") ) { if (inCallProp == hx::paccAlways) return get_cacheAsBitmapMatrix(); }
		if (HX_FIELD_EQ(inName,"cacheAsBitmapSmooth") ) { if (inCallProp == hx::paccAlways) return get_cacheAsBitmapSmooth(); }
		if (HX_FIELD_EQ(inName,"cacheAsBitmapBounds") ) { return cacheAsBitmapBounds; }
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { return __worldAlphaChanged; }
		if (HX_FIELD_EQ(inName,"__getWorldTransform") ) { return __getWorldTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		if (HX_FIELD_EQ(inName,"__setTransformDirty") ) { return __setTransformDirty_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__forceCacheAsBitmap") ) { return __forceCacheAsBitmap; }
		if (HX_FIELD_EQ(inName,"__updateCachedBitmap") ) { return __updateCachedBitmap; }
		if (HX_FIELD_EQ(inName,"__cachedBitmapBounds") ) { return __cachedBitmapBounds; }
		if (HX_FIELD_EQ(inName,"__cachedFilterBounds") ) { return __cachedFilterBounds; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { return __worldTransformCache; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { return __worldVisibleChanged; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMatrix") ) { return __cacheAsBitmapMatrix; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapSmooth") ) { return __cacheAsBitmapSmooth; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { return __worldTransformChanged; }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmapMatrix") ) { return get_cacheAsBitmapMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmapMatrix") ) { return set_cacheAsBitmapMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmapSmooth") ) { return get_cacheAsBitmapSmooth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmapSmooth") ) { return set_cacheAsBitmapSmooth_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

bool DisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { outValue = __instanceCount; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { outValue = __worldRenderDirty; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMode") ) { outValue = __cacheAsBitmapMode; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { outValue = __worldTransformDirty; return true;  }
	}
	return false;
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp == hx::paccAlways) return set_mask(inValue); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return set_name(inValue); }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return set_scaleY(inValue); }
		if (HX_FIELD_EQ(inName,"shader") ) { if (inCallProp == hx::paccAlways) return set_shader(inValue);shader=inValue.Cast< ::openfl::display::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__mask") ) { __mask=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__name") ) { __name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp == hx::paccAlways) return set_filters(inValue); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp == hx::paccAlways) return set_visible(inValue); }
		if (HX_FIELD_EQ(inName,"__alpha") ) { __alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return set_rotation(inValue); }
		if (HX_FIELD_EQ(inName,"__isMask") ) { __isMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__offset") ) { __offset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__shader") ) { __shader=inValue.Cast< ::openfl::display::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldZ") ) { __worldZ=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp == hx::paccAlways) return set_blendMode(inValue);blendMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp == hx::paccAlways) return set_transform(inValue); }
		if (HX_FIELD_EQ(inName,"__filters") ) { __filters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { loaderInfo=inValue.Cast< ::openfl::display::LoaderInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { scale9Grid=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp == hx::paccAlways) return set_scrollRect(inValue); }
		if (HX_FIELD_EQ(inName,"__children") ) { __children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphics") ) { __graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotation") ) { __rotation=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transform") ) { __transform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldClip") ) { __worldClip=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__maskCached") ) { __maskCached=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderable") ) { __renderable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scrollRect") ) { __scrollRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlpha") ) { __worldAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp == hx::paccAlways) return set_cacheAsBitmap(inValue); }
		if (HX_FIELD_EQ(inName,"__worldOffset") ) { __worldOffset=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__interactive") ) { __interactive=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__renderDirty") ) { __renderDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__maskGraphics") ) { __maskGraphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { __rotationSine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisible") ) { __worldVisible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cachedBitmap") ) { __cachedBitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheGLMatrix") ) { __cacheGLMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__updateFilters") ) { __updateFilters=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { opaqueBackground=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { __rotationCosine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderTransform") ) { __renderTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__objectTransform") ) { __objectTransform=inValue.Cast< ::openfl::geom::Transform >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldClipChanged") ) { __worldClipChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"cacheAsBitmapMatrix") ) { if (inCallProp == hx::paccAlways) return set_cacheAsBitmapMatrix(inValue); }
		if (HX_FIELD_EQ(inName,"cacheAsBitmapSmooth") ) { if (inCallProp == hx::paccAlways) return set_cacheAsBitmapSmooth(inValue); }
		if (HX_FIELD_EQ(inName,"cacheAsBitmapBounds") ) { cacheAsBitmapBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldAlphaChanged") ) { __worldAlphaChanged=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__forceCacheAsBitmap") ) { __forceCacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__updateCachedBitmap") ) { __updateCachedBitmap=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cachedBitmapBounds") ) { __cachedBitmapBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cachedFilterBounds") ) { __cachedFilterBounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldTransformCache") ) { __worldTransformCache=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__worldVisibleChanged") ) { __worldVisibleChanged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMatrix") ) { __cacheAsBitmapMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapSmooth") ) { __cacheAsBitmapSmooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__worldTransformChanged") ) { __worldTransformChanged=inValue.Cast< bool >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

bool DisplayObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__instanceCount") ) { __instanceCount=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__worldRenderDirty") ) { __worldRenderDirty=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmapMode") ) { __cacheAsBitmapMode=ioValue.Cast< bool >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldTransformDirty") ) { __worldTransformDirty=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("cacheAsBitmapMatrix","\x84","\xf9","\x81","\x95"));
	outFields->push(HX_HCSTRING("cacheAsBitmapSmooth","\x71","\xcb","\x24","\xe1"));
	outFields->push(HX_HCSTRING("cacheAsBitmapBounds","\xb8","\x49","\xd7","\x3f"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__worldOffset","\x65","\x6c","\x25","\x74"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"));
	outFields->push(HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"));
	outFields->push(HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"));
	outFields->push(HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"));
	outFields->push(HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"));
	outFields->push(HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"));
	outFields->push(HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"));
	outFields->push(HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b"));
	outFields->push(HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe"));
	outFields->push(HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"));
	outFields->push(HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54"));
	outFields->push(HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08"));
	outFields->push(HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"));
	outFields->push(HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"));
	outFields->push(HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"));
	outFields->push(HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"));
	outFields->push(HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"));
	outFields->push(HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"));
	outFields->push(HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"));
	outFields->push(HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"));
	outFields->push(HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"));
	outFields->push(HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"));
	outFields->push(HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"));
	outFields->push(HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"));
	outFields->push(HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"));
	outFields->push(HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad"));
	outFields->push(HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27"));
	outFields->push(HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"));
	outFields->push(HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"));
	outFields->push(HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"));
	outFields->push(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"));
	outFields->push(HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03"));
	outFields->push(HX_HCSTRING("__cacheAsBitmapSmooth","\x51","\xec","\x18","\x4f"));
	outFields->push(HX_HCSTRING("__forceCacheAsBitmap","\x18","\xa5","\xdf","\xcb"));
	outFields->push(HX_HCSTRING("__updateCachedBitmap","\x3a","\xd0","\x57","\x9c"));
	outFields->push(HX_HCSTRING("__cachedBitmap","\x91","\x7c","\xd7","\x65"));
	outFields->push(HX_HCSTRING("__cachedBitmapBounds","\xe6","\xb9","\xf6","\x6e"));
	outFields->push(HX_HCSTRING("__cachedFilterBounds","\x6f","\x46","\x2f","\x70"));
	outFields->push(HX_HCSTRING("__cacheGLMatrix","\x68","\x77","\xe7","\xbd"));
	outFields->push(HX_HCSTRING("__updateFilters","\x92","\x3f","\x67","\x5c"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,blendMode),HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,cacheAsBitmapBounds),HX_HCSTRING("cacheAsBitmapBounds","\xb8","\x49","\xd7","\x3f")},
	{hx::fsObject /*::openfl::display::LoaderInfo*/ ,(int)offsetof(DisplayObject_obj,loaderInfo),HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseX),HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseY),HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,opaqueBackground),HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a")},
	{hx::fsObject /*::openfl::display::DisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,scale9Grid),HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f")},
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(DisplayObject_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(DisplayObject_obj,stage),HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__renderTransform),HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(DisplayObject_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(DisplayObject_obj,__worldOffset),HX_HCSTRING("__worldOffset","\x65","\x6c","\x25","\x74")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__alpha),HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(DisplayObject_obj,__cairo),HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__children),HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObject_obj,__filters),HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__graphics),HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__interactive),HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__isMask),HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,__mask),HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,__maskGraphics),HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__maskCached),HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe")},
	{hx::fsString,(int)offsetof(DisplayObject_obj,__name),HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7")},
	{hx::fsObject /*::openfl::geom::Transform*/ ,(int)offsetof(DisplayObject_obj,__objectTransform),HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(DisplayObject_obj,__offset),HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderable),HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__renderDirty),HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotation),HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationCosine),HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__rotationSine),HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__scrollRect),HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41")},
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(DisplayObject_obj,__shader),HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__transform),HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__transformDirty),HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__visible),HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,__worldAlpha),HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldAlphaChanged),HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__worldClip),HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldClipChanged),HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__worldTransformCache),HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldTransformChanged),HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisible),HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__worldVisibleChanged),HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77")},
	{hx::fsInt,(int)offsetof(DisplayObject_obj,__worldZ),HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__cacheAsBitmap),HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__cacheAsBitmapMatrix),HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__cacheAsBitmapSmooth),HX_HCSTRING("__cacheAsBitmapSmooth","\x51","\xec","\x18","\x4f")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__forceCacheAsBitmap),HX_HCSTRING("__forceCacheAsBitmap","\x18","\xa5","\xdf","\xcb")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__updateCachedBitmap),HX_HCSTRING("__updateCachedBitmap","\x3a","\xd0","\x57","\x9c")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(DisplayObject_obj,__cachedBitmap),HX_HCSTRING("__cachedBitmap","\x91","\x7c","\xd7","\x65")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__cachedBitmapBounds),HX_HCSTRING("__cachedBitmapBounds","\xe6","\xb9","\xf6","\x6e")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,__cachedFilterBounds),HX_HCSTRING("__cachedFilterBounds","\x6f","\x46","\x2f","\x70")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(DisplayObject_obj,__cacheGLMatrix),HX_HCSTRING("__cacheGLMatrix","\x68","\x77","\xe7","\xbd")},
	{hx::fsBool,(int)offsetof(DisplayObject_obj,__updateFilters),HX_HCSTRING("__updateFilters","\x92","\x3f","\x67","\x5c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DisplayObject_obj::__instanceCount,HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f")},
	{hx::fsInt,(void *) &DisplayObject_obj::__worldRenderDirty,HX_HCSTRING("__worldRenderDirty","\xca","\xee","\xec","\xf2")},
	{hx::fsInt,(void *) &DisplayObject_obj::__worldTransformDirty,HX_HCSTRING("__worldTransformDirty","\xd8","\x61","\x34","\x46")},
	{hx::fsBool,(void *) &DisplayObject_obj::__cacheAsBitmapMode,HX_HCSTRING("__cacheAsBitmapMode","\xc6","\x58","\x18","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"),
	HX_HCSTRING("cacheAsBitmapBounds","\xb8","\x49","\xd7","\x3f"),
	HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("__renderTransform","\x16","\xb8","\x95","\xb1"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__worldOffset","\x65","\x6c","\x25","\x74"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__alpha","\x3e","\x00","\xf5","\x8b"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"),
	HX_HCSTRING("__children","\x5f","\x8c","\xa2","\x13"),
	HX_HCSTRING("__filters","\x9b","\xf2","\x94","\x8a"),
	HX_HCSTRING("__graphics","\xeb","\x6b","\xa0","\xb5"),
	HX_HCSTRING("__interactive","\xc2","\x7e","\xd1","\x84"),
	HX_HCSTRING("__isMask","\x16","\x71","\xec","\x0d"),
	HX_HCSTRING("__mask","\x0c","\xa4","\x4e","\xf7"),
	HX_HCSTRING("__maskGraphics","\xf7","\x44","\xfd","\x6b"),
	HX_HCSTRING("__maskCached","\x0e","\x09","\x6a","\xfe"),
	HX_HCSTRING("__name","\x6b","\xd5","\xf7","\xf7"),
	HX_HCSTRING("__objectTransform","\x8d","\x6f","\x30","\x54"),
	HX_HCSTRING("__offset","\xb3","\x02","\x6f","\x08"),
	HX_HCSTRING("__renderable","\x10","\xb7","\x2c","\x2b"),
	HX_HCSTRING("__renderDirty","\xbc","\xbd","\xf9","\xed"),
	HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"),
	HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"),
	HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"),
	HX_HCSTRING("__scrollRect","\xf1","\x56","\xfa","\x41"),
	HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"),
	HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"),
	HX_HCSTRING("__worldAlpha","\xcc","\xd2","\xd6","\xc5"),
	HX_HCSTRING("__worldAlphaChanged","\x88","\x37","\xd8","\xd0"),
	HX_HCSTRING("__worldClip","\x22","\x0b","\x0b","\x7d"),
	HX_HCSTRING("__worldClipChanged","\xf2","\x55","\x0d","\x68"),
	HX_HCSTRING("__worldTransformCache","\x08","\xac","\x78","\xad"),
	HX_HCSTRING("__worldTransformChanged","\x3a","\x40","\xad","\x27"),
	HX_HCSTRING("__worldVisible","\x60","\xdb","\x58","\xf8"),
	HX_HCSTRING("__worldVisibleChanged","\x74","\x29","\x51","\x77"),
	HX_HCSTRING("__worldZ","\xe8","\x5c","\xce","\x71"),
	HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"),
	HX_HCSTRING("__cacheAsBitmapMatrix","\x64","\x1a","\x76","\x03"),
	HX_HCSTRING("__cacheAsBitmapSmooth","\x51","\xec","\x18","\x4f"),
	HX_HCSTRING("__forceCacheAsBitmap","\x18","\xa5","\xdf","\xcb"),
	HX_HCSTRING("__updateCachedBitmap","\x3a","\xd0","\x57","\x9c"),
	HX_HCSTRING("__cachedBitmap","\x91","\x7c","\xd7","\x65"),
	HX_HCSTRING("__cachedBitmapBounds","\xe6","\xb9","\xf6","\x6e"),
	HX_HCSTRING("__cachedFilterBounds","\x6f","\x46","\x2f","\x70"),
	HX_HCSTRING("__cacheGLMatrix","\x68","\x77","\xe7","\xbd"),
	HX_HCSTRING("__updateFilters","\x92","\x3f","\x67","\x5c"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("hitTestObject","\xe4","\x54","\x64","\xd7"),
	HX_HCSTRING("hitTestPoint","\xcb","\xa9","\x21","\xe4"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"),
	HX_HCSTRING("__dispatchEvent","\xe0","\xff","\x16","\x4e"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__getInteractive","\x0c","\x1c","\x37","\xf8"),
	HX_HCSTRING("__getLocalBounds","\x6a","\x04","\x36","\xdf"),
	HX_HCSTRING("__getRenderBounds","\x01","\x11","\xb8","\x7b"),
	HX_HCSTRING("__getWorldTransform","\xd0","\xf4","\xfc","\x8b"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__drawGraphicsGL","\xf4","\xa7","\x39","\x8e"),
	HX_HCSTRING("__preRenderGL","\x1e","\x63","\xbc","\x10"),
	HX_HCSTRING("__postRenderGL","\x9b","\xce","\x55","\x48"),
	HX_HCSTRING("__cacheGL","\xc7","\xbd","\x6f","\xa4"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__setRenderDirty","\x7a","\x43","\x7f","\x81"),
	HX_HCSTRING("__setTransformDirty","\x28","\x1b","\x24","\x99"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("__updateTransforms","\x10","\xf4","\xb0","\x50"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_blendMode","\x37","\x9a","\xa1","\x12"),
	HX_HCSTRING("set_shader","\x62","\xcd","\x25","\x11"),
	HX_HCSTRING("get_cacheAsBitmap","\x3a","\x8e","\x7f","\x70"),
	HX_HCSTRING("set_cacheAsBitmap","\x46","\x66","\xed","\x93"),
	HX_HCSTRING("get_cacheAsBitmapMatrix","\x1b","\xa0","\xd7","\x9d"),
	HX_HCSTRING("set_cacheAsBitmapMatrix","\x27","\x09","\x39","\xa0"),
	HX_HCSTRING("get_cacheAsBitmapSmooth","\x08","\x72","\x7a","\xe9"),
	HX_HCSTRING("set_cacheAsBitmapSmooth","\x14","\xdb","\xdb","\xeb"),
	HX_HCSTRING("get_filters","\xd2","\x01","\x41","\x8f"),
	HX_HCSTRING("set_filters","\xde","\x08","\xae","\x99"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_mask","\x75","\xfc","\x10","\xc8"),
	HX_HCSTRING("set_mask","\xe9","\x55","\x6e","\x76"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("get_root","\xab","\xa9","\x69","\xcb"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_scaleX","\x57","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scaleY","\x58","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scrollRect","\x1a","\x64","\x5c","\x7f"),
	HX_HCSTRING("set_scrollRect","\x8e","\x4c","\x7c","\x9f"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__cacheAsBitmapMode,"__cacheAsBitmapMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__instanceCount,"__instanceCount");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldRenderDirty,"__worldRenderDirty");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__worldTransformDirty,"__worldTransformDirty");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__cacheAsBitmapMode,"__cacheAsBitmapMode");
};

#endif

hx::Class DisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__instanceCount","\xda","\x31","\x1e","\x3f"),
	HX_HCSTRING("__worldRenderDirty","\xca","\xee","\xec","\xf2"),
	HX_HCSTRING("__worldTransformDirty","\xd8","\x61","\x34","\x46"),
	HX_HCSTRING("__cacheAsBitmapMode","\xc6","\x58","\x18","\xcf"),
	::String(null()) };

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObject","\xf7","\x4b","\x6f","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplayObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObject_obj >;
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

void DisplayObject_obj::__boot()
{
	__instanceCount= (int)0;
	__worldRenderDirty= (int)0;
	__worldTransformDirty= (int)0;
	__cacheAsBitmapMode= false;
}

} // end namespace openfl
} // end namespace display
