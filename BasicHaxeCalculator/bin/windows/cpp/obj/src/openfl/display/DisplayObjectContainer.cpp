#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
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
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
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
namespace openfl{
namespace display{

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",30,0x5f4d3d72)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	super::__construct();
	HX_STACK_LINE(34)
	this->mouseChildren = true;
	HX_STACK_LINE(36)
	this->__children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(37)
	this->__removedChildren = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",42,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(44)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	if ((tmp)){
		HX_STACK_LINE(46)
		bool tmp1 = (child->parent != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		if ((tmp1)){
			HX_STACK_LINE(48)
			::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			child->parent->removeChild(tmp2);
		}
		HX_STACK_LINE(52)
		::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		this->__children->push(tmp2);
		HX_STACK_LINE(53)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(55)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		if ((tmp4)){
			HX_STACK_LINE(59)
			::openfl::display::Stage tmp5 = this->stage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(59)
			child->__setStageReference(tmp5);
		}
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			bool tmp5 = child->__transformDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(63)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(63)
			if ((tmp6)){
				HX_STACK_LINE(63)
				child->__transformDirty = true;
				HX_STACK_LINE(63)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			bool tmp5 = child->__renderDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(64)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(64)
			if ((tmp6)){
				HX_STACK_LINE(64)
				child->__updateCachedBitmap = true;
				HX_STACK_LINE(64)
				bool tmp7 = (child->get_filters() != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(64)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(64)
				if ((tmp7)){
					HX_STACK_LINE(64)
					int tmp9 = child->get_filters()->length;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(64)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(64)
					tmp8 = (tmp10 > (int)0);
				}
				else{
					HX_STACK_LINE(64)
					tmp8 = false;
				}
				HX_STACK_LINE(64)
				child->__updateFilters = tmp8;
				HX_STACK_LINE(64)
				child->__renderDirty = true;
				HX_STACK_LINE(64)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			bool tmp5 = this->__renderDirty;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(65)
			if ((tmp6)){
				HX_STACK_LINE(65)
				this->__updateCachedBitmap = true;
				HX_STACK_LINE(65)
				bool tmp7 = (this->get_filters() != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(65)
				bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(65)
				if ((tmp7)){
					HX_STACK_LINE(65)
					int tmp9 = this->get_filters()->length;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(65)
					int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(65)
					tmp8 = (tmp10 > (int)0);
				}
				else{
					HX_STACK_LINE(65)
					tmp8 = false;
				}
				HX_STACK_LINE(65)
				this->__updateFilters = tmp8;
				HX_STACK_LINE(65)
				this->__renderDirty = true;
				HX_STACK_LINE(65)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(67)
		::openfl::events::Event tmp5 = ::openfl::events::Event_obj::__new(HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),true,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		::openfl::events::Event event = tmp5;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(68)
		event->target = child;
		HX_STACK_LINE(69)
		::openfl::events::Event tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		child->__dispatchEvent(tmp6);
	}
	HX_STACK_LINE(73)
	::openfl::display::DisplayObject tmp1 = child;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",78,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(80)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(80)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(80)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	if ((tmp3)){
		HX_STACK_LINE(80)
		tmp4 = (index < (int)0);
	}
	else{
		HX_STACK_LINE(80)
		tmp4 = true;
	}
	HX_STACK_LINE(80)
	if ((tmp4)){
		HX_STACK_LINE(82)
		::String tmp5 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(86)
	bool tmp5 = (child->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(86)
	if ((tmp5)){
		HX_STACK_LINE(88)
		::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		this->__children->remove(tmp6);
	}
	else{
		HX_STACK_LINE(92)
		bool tmp6 = (child->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(92)
		if ((tmp6)){
			HX_STACK_LINE(94)
			::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			child->parent->removeChild(tmp7);
		}
		HX_STACK_LINE(98)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(100)
		::openfl::display::Stage tmp7 = this->stage;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(100)
		if ((tmp8)){
			HX_STACK_LINE(104)
			::openfl::display::Stage tmp9 = this->stage;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			child->__setStageReference(tmp9);
		}
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			bool tmp9 = child->__transformDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(108)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(108)
			if ((tmp10)){
				HX_STACK_LINE(108)
				child->__transformDirty = true;
				HX_STACK_LINE(108)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(109)
		{
			HX_STACK_LINE(109)
			bool tmp9 = child->__renderDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(109)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(109)
			if ((tmp10)){
				HX_STACK_LINE(109)
				child->__updateCachedBitmap = true;
				HX_STACK_LINE(109)
				bool tmp11 = (child->get_filters() != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(109)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(109)
				if ((tmp11)){
					HX_STACK_LINE(109)
					int tmp13 = child->get_filters()->length;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(109)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(109)
					tmp12 = (tmp14 > (int)0);
				}
				else{
					HX_STACK_LINE(109)
					tmp12 = false;
				}
				HX_STACK_LINE(109)
				child->__updateFilters = tmp12;
				HX_STACK_LINE(109)
				child->__renderDirty = true;
				HX_STACK_LINE(109)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			bool tmp9 = this->__renderDirty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(110)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(110)
			if ((tmp10)){
				HX_STACK_LINE(110)
				this->__updateCachedBitmap = true;
				HX_STACK_LINE(110)
				bool tmp11 = (this->get_filters() != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(110)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(110)
				if ((tmp11)){
					HX_STACK_LINE(110)
					int tmp13 = this->get_filters()->length;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(110)
					int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(110)
					tmp12 = (tmp14 > (int)0);
				}
				else{
					HX_STACK_LINE(110)
					tmp12 = false;
				}
				HX_STACK_LINE(110)
				this->__updateFilters = tmp12;
				HX_STACK_LINE(110)
				this->__renderDirty = true;
				HX_STACK_LINE(110)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(112)
		::openfl::events::Event tmp9 = ::openfl::events::Event_obj::__new(HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),true,null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(112)
		::openfl::events::Event event = tmp9;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(113)
		event->target = child;
		HX_STACK_LINE(114)
		::openfl::events::Event tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(114)
		child->__dispatchEvent(tmp10);
	}
	HX_STACK_LINE(118)
	int tmp6 = index;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(118)
	::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(118)
	this->__children->insert(tmp6,tmp7);
	HX_STACK_LINE(120)
	::openfl::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(120)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",127,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(127)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",132,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(134)
	while((true)){
		HX_STACK_LINE(134)
		bool tmp = (child != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		if ((tmp)){
			HX_STACK_LINE(134)
			tmp1 = (child != null());
		}
		else{
			HX_STACK_LINE(134)
			tmp1 = false;
		}
		HX_STACK_LINE(134)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		if ((tmp2)){
			HX_STACK_LINE(134)
			break;
		}
		HX_STACK_LINE(136)
		child = child->parent;
	}
	HX_STACK_LINE(140)
	bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",145,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(147)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	if ((tmp)){
		HX_STACK_LINE(147)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(147)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(147)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(147)
		tmp1 = false;
	}
	HX_STACK_LINE(147)
	if ((tmp1)){
		HX_STACK_LINE(149)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		return tmp2;
	}
	HX_STACK_LINE(153)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",158,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(160)
	{
		HX_STACK_LINE(160)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(160)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(160)
		while((true)){
			HX_STACK_LINE(160)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(160)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(160)
			if ((tmp1)){
				HX_STACK_LINE(160)
				break;
			}
			HX_STACK_LINE(160)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(160)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(160)
			++(_g);
			HX_STACK_LINE(162)
			::String tmp3 = child->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(162)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(162)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(162)
			if ((tmp5)){
				HX_STACK_LINE(162)
				::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(162)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(166)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",171,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(173)
	{
		HX_STACK_LINE(173)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(173)
		int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(173)
		while((true)){
			HX_STACK_LINE(173)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(173)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(173)
			if ((tmp2)){
				HX_STACK_LINE(173)
				break;
			}
			HX_STACK_LINE(173)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(173)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(175)
			::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(175)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			if ((tmp6)){
				HX_STACK_LINE(175)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(175)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(179)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",184,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(186)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(187)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	this->__hitTest(tmp,tmp1,false,stack,false,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(188)
	stack->reverse();
	HX_STACK_LINE(189)
	return stack;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",194,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(196)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	if ((tmp)){
		HX_STACK_LINE(196)
		tmp1 = (child->parent == hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(196)
		tmp1 = false;
	}
	HX_STACK_LINE(196)
	if ((tmp1)){
		HX_STACK_LINE(198)
		::openfl::events::Event tmp2 = ::openfl::events::Event_obj::__new(HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3"),true,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		child->__dispatchEvent(tmp2);
		HX_STACK_LINE(200)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		if ((tmp4)){
			HX_STACK_LINE(202)
			child->__setStageReference(null());
		}
		HX_STACK_LINE(206)
		child->parent = null();
		HX_STACK_LINE(207)
		::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(207)
		this->__children->remove(tmp5);
		HX_STACK_LINE(208)
		::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(208)
		this->__removedChildren->push(tmp6);
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			bool tmp7 = child->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(209)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(209)
			if ((tmp8)){
				HX_STACK_LINE(209)
				child->__transformDirty = true;
				HX_STACK_LINE(209)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			bool tmp7 = child->__renderDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(210)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(210)
			if ((tmp8)){
				HX_STACK_LINE(210)
				child->__updateCachedBitmap = true;
				HX_STACK_LINE(210)
				bool tmp9 = (child->get_filters() != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(210)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(210)
				if ((tmp9)){
					HX_STACK_LINE(210)
					int tmp11 = child->get_filters()->length;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(210)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(210)
					tmp10 = (tmp12 > (int)0);
				}
				else{
					HX_STACK_LINE(210)
					tmp10 = false;
				}
				HX_STACK_LINE(210)
				child->__updateFilters = tmp10;
				HX_STACK_LINE(210)
				child->__renderDirty = true;
				HX_STACK_LINE(210)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			bool tmp7 = this->__renderDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(211)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(211)
			if ((tmp8)){
				HX_STACK_LINE(211)
				this->__updateCachedBitmap = true;
				HX_STACK_LINE(211)
				bool tmp9 = (this->get_filters() != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(211)
				bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(211)
				if ((tmp9)){
					HX_STACK_LINE(211)
					int tmp11 = this->get_filters()->length;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(211)
					int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(211)
					tmp10 = (tmp12 > (int)0);
				}
				else{
					HX_STACK_LINE(211)
					tmp10 = false;
				}
				HX_STACK_LINE(211)
				this->__updateFilters = tmp10;
				HX_STACK_LINE(211)
				this->__renderDirty = true;
				HX_STACK_LINE(211)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(215)
	::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(215)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",220,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(222)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(222)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	if ((tmp)){
		HX_STACK_LINE(222)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(222)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(222)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(222)
		tmp1 = false;
	}
	HX_STACK_LINE(222)
	if ((tmp1)){
		HX_STACK_LINE(224)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		::openfl::display::DisplayObject tmp3 = this->removeChild(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(224)
		return tmp3;
	}
	HX_STACK_LINE(228)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",233,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(235)
		bool tmp = (endIndex == (int)2147483647);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(235)
		if ((tmp)){
			HX_STACK_LINE(237)
			int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(237)
			int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(237)
			endIndex = tmp2;
			HX_STACK_LINE(239)
			bool tmp3 = (endIndex < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(239)
			if ((tmp3)){
				HX_STACK_LINE(241)
				return null();
			}
		}
		HX_STACK_LINE(247)
		int tmp1 = beginIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(247)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		if ((tmp4)){
			HX_STACK_LINE(249)
			return null();
		}
		else{
			HX_STACK_LINE(251)
			bool tmp5 = (endIndex < beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(251)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(251)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(251)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(251)
			if ((tmp7)){
				HX_STACK_LINE(251)
				tmp8 = (beginIndex < (int)0);
			}
			else{
				HX_STACK_LINE(251)
				tmp8 = true;
			}
			HX_STACK_LINE(251)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(251)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(251)
			if ((tmp9)){
				HX_STACK_LINE(251)
				int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(251)
				int tmp12 = this->__children->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(251)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(251)
				tmp10 = (tmp11 > tmp13);
			}
			else{
				HX_STACK_LINE(251)
				tmp10 = true;
			}
			HX_STACK_LINE(251)
			if ((tmp10)){
				HX_STACK_LINE(253)
				::openfl::errors::RangeError tmp11 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("The supplied index is out of bounds.","\x17","\x96","\x1b","\x51"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(253)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(257)
		int tmp5 = (endIndex - beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(257)
		int numRemovals = tmp5;		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(258)
		while((true)){
			HX_STACK_LINE(258)
			bool tmp6 = (numRemovals >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(258)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(258)
			if ((tmp7)){
				HX_STACK_LINE(258)
				break;
			}
			HX_STACK_LINE(260)
			int tmp8 = beginIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(260)
			this->removeChildAt(tmp8);
			HX_STACK_LINE(261)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

::openfl::display::DisplayObject DisplayObjectContainer_obj::resolve( ::String fieldName){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","resolve",0x8cca40c8,"openfl.display.DisplayObjectContainer.resolve","openfl/display/DisplayObjectContainer.hx",268,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fieldName,"fieldName")
	HX_STACK_LINE(270)
	bool tmp = (this->__children == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	if ((tmp)){
		HX_STACK_LINE(270)
		return null();
	}
	HX_STACK_LINE(272)
	{
		HX_STACK_LINE(272)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(272)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(272)
		while((true)){
			HX_STACK_LINE(272)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(272)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(272)
			if ((tmp2)){
				HX_STACK_LINE(272)
				break;
			}
			HX_STACK_LINE(272)
			::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(272)
			::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(272)
			++(_g);
			HX_STACK_LINE(274)
			::String tmp4 = child->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(274)
			::String tmp5 = fieldName;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(274)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(274)
			if ((tmp6)){
				HX_STACK_LINE(276)
				::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(276)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(282)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,resolve,return )

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",287,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(289)
		bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(289)
		if ((tmp1)){
			HX_STACK_LINE(289)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(289)
			int tmp4 = this->__children->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(289)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(289)
			tmp2 = (tmp3 <= tmp6);
		}
		else{
			HX_STACK_LINE(289)
			tmp2 = false;
		}
		HX_STACK_LINE(289)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(289)
		if ((tmp2)){
			HX_STACK_LINE(289)
			tmp3 = (child->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(289)
			tmp3 = false;
		}
		HX_STACK_LINE(289)
		if ((tmp3)){
			HX_STACK_LINE(291)
			::openfl::display::DisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(291)
			this->__children->remove(tmp4);
			HX_STACK_LINE(292)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(292)
			::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(292)
			this->__children->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",299,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(301)
		bool tmp = (child1->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		if ((tmp)){
			HX_STACK_LINE(301)
			tmp1 = (child2->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(301)
			tmp1 = false;
		}
		HX_STACK_LINE(301)
		if ((tmp1)){
			HX_STACK_LINE(305)
			::openfl::display::DisplayObject tmp2 = child1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(305)
			int tmp3 = this->__children->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(305)
			int index1 = tmp3;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(306)
			::openfl::display::DisplayObject tmp4 = child2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(306)
			int tmp5 = this->__children->indexOf(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(306)
			int index2 = tmp5;		HX_STACK_VAR(index2,"index2");
			HX_STACK_LINE(329)
			::openfl::display::DisplayObject tmp6 = child2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(329)
			this->__children[index1] = tmp6;
			HX_STACK_LINE(330)
			::openfl::display::DisplayObject tmp7 = child1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(330)
			this->__children[index2] = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",337,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
		HX_STACK_LINE(339)
		::openfl::display::DisplayObject tmp = this->__children->__get(index1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(339)
		::openfl::display::DisplayObject swap = tmp;		HX_STACK_VAR(swap,"swap");
		HX_STACK_LINE(340)
		::openfl::display::DisplayObject tmp1 = this->__children->__get(index2).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(340)
		this->__children[index1] = tmp1;
		HX_STACK_LINE(341)
		::openfl::display::DisplayObject tmp2 = swap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(341)
		this->__children[index2] = tmp2;
		HX_STACK_LINE(342)
		swap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::__broadcast( ::openfl::events::Event event,bool notifyChilden){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__broadcast",0xe3f237bd,"openfl.display.DisplayObjectContainer.__broadcast","openfl/display/DisplayObjectContainer.hx",347,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(notifyChilden,"notifyChilden")
	HX_STACK_LINE(349)
	bool tmp = (event->target == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(349)
	if ((tmp)){
		HX_STACK_LINE(351)
		event->target = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(355)
	::openfl::events::Event tmp1 = event;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(355)
	bool tmp2 = notifyChilden;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(355)
	bool tmp3 = this->super::__broadcast(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(355)
	bool result = tmp3;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(357)
	bool tmp4 = event->__isCanceled;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(357)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(357)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(357)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(357)
	if ((tmp6)){
		HX_STACK_LINE(357)
		tmp7 = notifyChilden;
	}
	else{
		HX_STACK_LINE(357)
		tmp7 = false;
	}
	HX_STACK_LINE(357)
	if ((tmp7)){
		HX_STACK_LINE(359)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(359)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(359)
		while((true)){
			HX_STACK_LINE(359)
			bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(359)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(359)
			if ((tmp9)){
				HX_STACK_LINE(359)
				break;
			}
			HX_STACK_LINE(359)
			::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(359)
			::openfl::display::DisplayObject child = tmp10;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(359)
			++(_g);
			HX_STACK_LINE(361)
			::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(361)
			child->__broadcast(tmp11,true);
			HX_STACK_LINE(363)
			bool tmp12 = event->__isCanceled;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(363)
			if ((tmp12)){
				HX_STACK_LINE(365)
				return true;
			}
		}
	}
	HX_STACK_LINE(373)
	bool tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(373)
	return tmp8;
}


Void DisplayObjectContainer_obj::__enterFrame( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__enterFrame",0x3af993b9,"openfl.display.DisplayObjectContainer.__enterFrame","openfl/display/DisplayObjectContainer.hx",380,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(380)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(380)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(380)
		while((true)){
			HX_STACK_LINE(380)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(380)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(380)
			if ((tmp1)){
				HX_STACK_LINE(380)
				break;
			}
			HX_STACK_LINE(380)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(380)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(380)
			++(_g);
			HX_STACK_LINE(382)
			int tmp3 = deltaTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(382)
			child->__enterFrame(tmp3);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",389,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(391)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(391)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(391)
		this->super::__getBounds(tmp,tmp1);
		HX_STACK_LINE(393)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(393)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(393)
		if ((tmp3)){
			HX_STACK_LINE(393)
			return null();
		}
		HX_STACK_LINE(395)
		bool tmp4 = (matrix != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(395)
		if ((tmp4)){
			HX_STACK_LINE(397)
			::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(397)
			this->__updateTransforms(tmp5);
			HX_STACK_LINE(398)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(402)
		{
			HX_STACK_LINE(402)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(402)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(402)
			while((true)){
				HX_STACK_LINE(402)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(402)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(402)
				if ((tmp6)){
					HX_STACK_LINE(402)
					break;
				}
				HX_STACK_LINE(402)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(402)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(402)
				++(_g);
				HX_STACK_LINE(404)
				Float tmp8 = child->get_scaleX();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(404)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(404)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(404)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(404)
				if ((tmp10)){
					HX_STACK_LINE(404)
					Float tmp12 = child->get_scaleY();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(404)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(404)
					tmp11 = (tmp13 == (int)0);
				}
				else{
					HX_STACK_LINE(404)
					tmp11 = true;
				}
				HX_STACK_LINE(404)
				if ((tmp11)){
					HX_STACK_LINE(404)
					continue;
				}
				HX_STACK_LINE(405)
				::openfl::geom::Rectangle tmp12 = rect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(405)
				::openfl::geom::Matrix tmp13 = child->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(405)
				child->__getBounds(tmp12,tmp13);
			}
		}
		HX_STACK_LINE(409)
		bool tmp5 = (matrix != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(409)
		if ((tmp5)){
			HX_STACK_LINE(411)
			this->__updateTransforms(null());
			HX_STACK_LINE(412)
			this->__updateChildren(true);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getRenderBounds",0x21a0a9dd,"openfl.display.DisplayObjectContainer.__getRenderBounds","openfl/display/DisplayObjectContainer.hx",419,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(421)
		::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(421)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(421)
		if ((tmp1)){
			HX_STACK_LINE(423)
			::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(423)
			::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(423)
			this->super::__getRenderBounds(tmp2,tmp3);
			HX_STACK_LINE(424)
			return null();
		}
		else{
			HX_STACK_LINE(428)
			::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(428)
			::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(428)
			this->super::__getBounds(tmp2,tmp3);
		}
		HX_STACK_LINE(432)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(432)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(432)
		if ((tmp3)){
			HX_STACK_LINE(432)
			return null();
		}
		HX_STACK_LINE(434)
		bool tmp4 = (matrix != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(434)
		if ((tmp4)){
			HX_STACK_LINE(436)
			::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(436)
			this->__updateTransforms(tmp5);
			HX_STACK_LINE(437)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(441)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(441)
			while((true)){
				HX_STACK_LINE(441)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(441)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(441)
				if ((tmp6)){
					HX_STACK_LINE(441)
					break;
				}
				HX_STACK_LINE(441)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(441)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(441)
				++(_g);
				HX_STACK_LINE(443)
				Float tmp8 = child->get_scaleX();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(443)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(443)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(443)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(443)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(443)
				if ((tmp11)){
					HX_STACK_LINE(443)
					Float tmp13 = child->get_scaleY();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(443)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(443)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(443)
					tmp12 = (tmp15 == (int)0);
				}
				else{
					HX_STACK_LINE(443)
					tmp12 = true;
				}
				HX_STACK_LINE(443)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(443)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(443)
				if ((tmp13)){
					HX_STACK_LINE(443)
					tmp14 = child->__isMask;
				}
				else{
					HX_STACK_LINE(443)
					tmp14 = true;
				}
				HX_STACK_LINE(443)
				if ((tmp14)){
					HX_STACK_LINE(443)
					continue;
				}
				HX_STACK_LINE(444)
				::openfl::geom::Rectangle tmp15 = rect;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(444)
				::openfl::geom::Matrix tmp16 = child->__worldTransform;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(444)
				child->__getRenderBounds(tmp15,tmp16);
			}
		}
		HX_STACK_LINE(448)
		bool tmp5 = (matrix != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(448)
		if ((tmp5)){
			HX_STACK_LINE(450)
			this->__updateTransforms(null());
			HX_STACK_LINE(451)
			this->__updateChildren(true);
		}
	}
return null();
}


bool DisplayObjectContainer_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",458,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_ARG(hitObject,"hitObject")
	HX_STACK_LINE(460)
	bool tmp = hitObject->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(460)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(460)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(460)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(460)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(460)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(460)
	if ((tmp4)){
		HX_STACK_LINE(460)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(460)
		tmp5 = true;
	}
	HX_STACK_LINE(460)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(460)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(460)
	if ((tmp6)){
		HX_STACK_LINE(460)
		bool tmp8 = interactiveOnly;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(460)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(460)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(460)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(460)
		if ((tmp11)){
			HX_STACK_LINE(460)
			bool tmp12 = this->mouseEnabled;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(460)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(460)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(460)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(460)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(460)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(460)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(460)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(460)
			tmp10 = tmp19;
		}
		else{
			HX_STACK_LINE(460)
			tmp10 = false;
		}
		HX_STACK_LINE(460)
		bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(460)
		if ((tmp12)){
			HX_STACK_LINE(460)
			bool tmp13 = this->mouseChildren;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(460)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(460)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(460)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(460)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(460)
			tmp7 = !(tmp17);
		}
		else{
			HX_STACK_LINE(460)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(460)
		tmp7 = true;
	}
	HX_STACK_LINE(460)
	if ((tmp7)){
		HX_STACK_LINE(460)
		return false;
	}
	HX_STACK_LINE(461)
	::openfl::display::DisplayObject tmp8 = this->get_mask();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(461)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(461)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(461)
	if ((tmp9)){
		HX_STACK_LINE(461)
		::openfl::display::DisplayObject tmp11 = this->get_mask();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(461)
		::openfl::display::DisplayObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(461)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(461)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(461)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(461)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(461)
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(461)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(461)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(461)
		tmp10 = !(tmp19);
	}
	else{
		HX_STACK_LINE(461)
		tmp10 = false;
	}
	HX_STACK_LINE(461)
	if ((tmp10)){
		HX_STACK_LINE(461)
		return false;
	}
	HX_STACK_LINE(462)
	::openfl::geom::Rectangle tmp11 = this->get_scrollRect();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(462)
	bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(462)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(462)
	if ((tmp12)){
		HX_STACK_LINE(462)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(462)
		::openfl::geom::Rectangle tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(462)
		::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(462)
		::openfl::geom::Point tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(462)
		::openfl::geom::Point tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(462)
		::openfl::geom::Point tmp19 = this->globalToLocal(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(462)
		::openfl::geom::Point tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(462)
		::openfl::geom::Point tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(462)
		bool tmp22 = tmp15->containsPoint(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(462)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(462)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(462)
		tmp13 = !(tmp24);
	}
	else{
		HX_STACK_LINE(462)
		tmp13 = false;
	}
	HX_STACK_LINE(462)
	if ((tmp13)){
		HX_STACK_LINE(462)
		return false;
	}
	HX_STACK_LINE(464)
	int tmp14 = this->__children->length;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(464)
	int i = tmp14;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(465)
	bool tmp15 = interactiveOnly;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(465)
	if ((tmp15)){
		HX_STACK_LINE(467)
		bool tmp16 = (stack == null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(467)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(467)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(467)
		if ((tmp17)){
			HX_STACK_LINE(467)
			bool tmp19 = this->mouseChildren;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(467)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(467)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(467)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(467)
			tmp18 = true;
		}
		HX_STACK_LINE(467)
		if ((tmp18)){
			HX_STACK_LINE(469)
			while((true)){
				HX_STACK_LINE(469)
				int tmp19 = --(i);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(469)
				bool tmp20 = (tmp19 >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(469)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(469)
				if ((tmp21)){
					HX_STACK_LINE(469)
					break;
				}
				HX_STACK_LINE(471)
				::openfl::display::DisplayObject tmp22 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(471)
				Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(471)
				Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(471)
				bool tmp25 = shapeFlag;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(471)
				::openfl::display::DisplayObject tmp26 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(471)
				::openfl::display::DisplayObject tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(471)
				bool tmp28 = tmp22->__hitTest(tmp23,tmp24,tmp25,null(),true,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(471)
				if ((tmp28)){
					HX_STACK_LINE(473)
					bool tmp29 = (stack != null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(473)
					if ((tmp29)){
						HX_STACK_LINE(475)
						::openfl::display::DisplayObject tmp30 = hitObject;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(475)
						stack->push(tmp30);
					}
					HX_STACK_LINE(479)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(485)
			bool tmp19 = (stack != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(485)
			if ((tmp19)){
				HX_STACK_LINE(487)
				int length = stack->length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(489)
				bool interactive = false;		HX_STACK_VAR(interactive,"interactive");
				HX_STACK_LINE(490)
				bool hitTest = false;		HX_STACK_VAR(hitTest,"hitTest");
				HX_STACK_LINE(492)
				while((true)){
					HX_STACK_LINE(492)
					int tmp20 = --(i);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(492)
					bool tmp21 = (tmp20 >= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(492)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(492)
					if ((tmp22)){
						HX_STACK_LINE(492)
						break;
					}
					HX_STACK_LINE(494)
					::openfl::display::DisplayObject tmp23 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(494)
					bool tmp24 = tmp23->__getInteractive(null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(494)
					interactive = tmp24;
					HX_STACK_LINE(496)
					bool tmp25 = interactive;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(496)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(496)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(496)
					if ((tmp26)){
						HX_STACK_LINE(496)
						bool tmp28 = this->mouseEnabled;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(496)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(496)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(496)
						if ((tmp30)){
							HX_STACK_LINE(496)
							bool tmp31 = hitTest;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(496)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(496)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(496)
							tmp27 = !(tmp33);
						}
						else{
							HX_STACK_LINE(496)
							tmp27 = false;
						}
					}
					else{
						HX_STACK_LINE(496)
						tmp27 = true;
					}
					HX_STACK_LINE(496)
					if ((tmp27)){
						HX_STACK_LINE(498)
						::openfl::display::DisplayObject tmp28 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(498)
						Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(498)
						Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(498)
						bool tmp31 = shapeFlag;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(498)
						::openfl::display::DisplayObject tmp32 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(498)
						::openfl::display::DisplayObject tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(498)
						bool tmp34 = tmp28->__hitTest(tmp29,tmp30,tmp31,stack,true,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(498)
						if ((tmp34)){
							HX_STACK_LINE(500)
							hitTest = true;
							HX_STACK_LINE(502)
							bool tmp35 = interactive;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(502)
							if ((tmp35)){
								HX_STACK_LINE(504)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(514)
				bool tmp20 = hitTest;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(514)
				if ((tmp20)){
					HX_STACK_LINE(516)
					int tmp21 = length;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(516)
					::openfl::display::DisplayObject tmp22 = hitObject;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(516)
					stack->insert(tmp21,tmp22);
					HX_STACK_LINE(517)
					return true;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(525)
		while((true)){
			HX_STACK_LINE(525)
			int tmp16 = --(i);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(525)
			bool tmp17 = (tmp16 >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(525)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(525)
			if ((tmp18)){
				HX_STACK_LINE(525)
				break;
			}
			HX_STACK_LINE(527)
			::openfl::display::DisplayObject tmp19 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(527)
			Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(527)
			Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(527)
			bool tmp22 = shapeFlag;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(527)
			::openfl::display::DisplayObject tmp23 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(527)
			::openfl::display::DisplayObject tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(527)
			tmp19->__hitTest(tmp20,tmp21,tmp22,stack,false,tmp24);
		}
	}
	HX_STACK_LINE(533)
	return false;
}


bool DisplayObjectContainer_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTestMask",0x4f390f8d,"openfl.display.DisplayObjectContainer.__hitTestMask","openfl/display/DisplayObjectContainer.hx",538,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(540)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(540)
	int i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(542)
	while((true)){
		HX_STACK_LINE(542)
		int tmp1 = --(i);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(542)
		bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(542)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(542)
		if ((tmp3)){
			HX_STACK_LINE(542)
			break;
		}
		HX_STACK_LINE(544)
		::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(544)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(544)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(544)
		bool tmp7 = tmp4->__hitTestMask(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(544)
		if ((tmp7)){
			HX_STACK_LINE(546)
			return true;
		}
	}
	HX_STACK_LINE(552)
	return false;
}


Void DisplayObjectContainer_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairo",0x687e990e,"openfl.display.DisplayObjectContainer.__renderCairo","openfl/display/DisplayObjectContainer.hx",557,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(559)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(559)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(559)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(559)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(559)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(559)
		if ((tmp3)){
			HX_STACK_LINE(559)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(559)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(559)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(559)
			tmp4 = true;
		}
		HX_STACK_LINE(559)
		if ((tmp4)){
			HX_STACK_LINE(559)
			return null();
		}
		HX_STACK_LINE(561)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(561)
		this->super::__renderCairo(tmp5);
		HX_STACK_LINE(563)
		::openfl::geom::Rectangle tmp6 = this->get_scrollRect();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(563)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(563)
		if ((tmp7)){
			HX_STACK_LINE(565)
			::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(565)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(565)
			renderSession->maskManager->pushRect(tmp8,tmp9);
		}
		HX_STACK_LINE(569)
		::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(569)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(569)
		if ((tmp9)){
			HX_STACK_LINE(571)
			::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(571)
			renderSession->maskManager->pushMask(tmp10);
		}
		HX_STACK_LINE(575)
		{
			HX_STACK_LINE(575)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(575)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(575)
			while((true)){
				HX_STACK_LINE(575)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(575)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(575)
				if ((tmp11)){
					HX_STACK_LINE(575)
					break;
				}
				HX_STACK_LINE(575)
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(575)
				::openfl::display::DisplayObject child = tmp12;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(575)
				++(_g);
				HX_STACK_LINE(577)
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(577)
				child->__renderCairo(tmp13);
			}
		}
		HX_STACK_LINE(581)
		int tmp10 = this->__removedChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(581)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(581)
		if ((tmp11)){
			HX_STACK_LINE(583)
			int tmp12 = this->__removedChildren->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(583)
			this->__removedChildren->splice((int)0,tmp12);
		}
		HX_STACK_LINE(587)
		::openfl::display::DisplayObject tmp12 = this->__mask;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(587)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(587)
		if ((tmp13)){
			HX_STACK_LINE(589)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(593)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(593)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(593)
		if ((tmp15)){
			HX_STACK_LINE(595)
			renderSession->maskManager->popRect();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairoMask",0x110aa51a,"openfl.display.DisplayObjectContainer.__renderCairoMask","openfl/display/DisplayObjectContainer.hx",602,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(604)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(604)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(604)
		if ((tmp1)){
			HX_STACK_LINE(606)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(606)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(606)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(615)
		{
			HX_STACK_LINE(615)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(615)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(615)
			while((true)){
				HX_STACK_LINE(615)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(615)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(615)
				if ((tmp3)){
					HX_STACK_LINE(615)
					break;
				}
				HX_STACK_LINE(615)
				::openfl::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(615)
				::openfl::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(615)
				++(_g);
				HX_STACK_LINE(617)
				::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(617)
				child->__renderCairoMask(tmp5);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvas",0x09986192,"openfl.display.DisplayObjectContainer.__renderCanvas","openfl/display/DisplayObjectContainer.hx",624,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(626)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(626)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(626)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(626)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(626)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(626)
		if ((tmp3)){
			HX_STACK_LINE(626)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(626)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(626)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(626)
			tmp4 = true;
		}
		HX_STACK_LINE(626)
		if ((tmp4)){
			HX_STACK_LINE(626)
			return null();
		}
		HX_STACK_LINE(630)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(630)
		this->super::__renderCanvas(tmp5);
		HX_STACK_LINE(632)
		::openfl::geom::Rectangle tmp6 = this->get_scrollRect();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(632)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(632)
		if ((tmp7)){
			HX_STACK_LINE(634)
			::openfl::geom::Rectangle tmp8 = this->get_scrollRect();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(634)
			::openfl::geom::Matrix tmp9 = this->__worldTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(634)
			renderSession->maskManager->pushRect(tmp8,tmp9);
		}
		HX_STACK_LINE(638)
		::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(638)
		bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(638)
		if ((tmp9)){
			HX_STACK_LINE(640)
			::openfl::display::DisplayObject tmp10 = this->__mask;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(640)
			renderSession->maskManager->pushMask(tmp10);
		}
		HX_STACK_LINE(644)
		{
			HX_STACK_LINE(644)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(644)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(644)
			while((true)){
				HX_STACK_LINE(644)
				bool tmp10 = (_g < _g1->length);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(644)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(644)
				if ((tmp11)){
					HX_STACK_LINE(644)
					break;
				}
				HX_STACK_LINE(644)
				::openfl::display::DisplayObject tmp12 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(644)
				::openfl::display::DisplayObject child = tmp12;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(644)
				++(_g);
				HX_STACK_LINE(646)
				::openfl::_internal::renderer::RenderSession tmp13 = renderSession;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(646)
				child->__renderCanvas(tmp13);
			}
		}
		HX_STACK_LINE(650)
		int tmp10 = this->__removedChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(650)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(650)
		if ((tmp11)){
			HX_STACK_LINE(652)
			int tmp12 = this->__removedChildren->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(652)
			this->__removedChildren->splice((int)0,tmp12);
		}
		HX_STACK_LINE(656)
		::openfl::display::DisplayObject tmp12 = this->__mask;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(656)
		bool tmp13 = (tmp12 != null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(656)
		if ((tmp13)){
			HX_STACK_LINE(658)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(662)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(662)
		bool tmp15 = (tmp14 != null());		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(662)
		if ((tmp15)){
			HX_STACK_LINE(664)
			renderSession->maskManager->popRect();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvasMask",0xd78cff9e,"openfl.display.DisplayObjectContainer.__renderCanvasMask","openfl/display/DisplayObjectContainer.hx",673,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(675)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(675)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(675)
		if ((tmp1)){
			HX_STACK_LINE(677)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(677)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(677)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(681)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(681)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(682)
		{
			HX_STACK_LINE(682)
			::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(682)
			::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(682)
			this->__getBounds(tmp3,tmp4);
		}
		HX_STACK_LINE(684)
		Float tmp3 = bounds->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(684)
		Float tmp4 = bounds->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(684)
		renderSession->context->rect((int)0,(int)0,tmp3,tmp4);
	}
return null();
}


Void DisplayObjectContainer_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderDOM",0xd2304188,"openfl.display.DisplayObjectContainer.__renderDOM","openfl/display/DisplayObjectContainer.hx",695,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(701)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(701)
		this->super::__renderDOM(tmp);
		HX_STACK_LINE(703)
		::openfl::display::DisplayObject tmp1 = this->__mask;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(703)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(703)
		if ((tmp2)){
			HX_STACK_LINE(705)
			::openfl::display::DisplayObject tmp3 = this->__mask;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(705)
			renderSession->maskManager->pushMask(tmp3);
		}
		HX_STACK_LINE(711)
		{
			HX_STACK_LINE(711)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(711)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(711)
			while((true)){
				HX_STACK_LINE(711)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(711)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(711)
				if ((tmp4)){
					HX_STACK_LINE(711)
					break;
				}
				HX_STACK_LINE(711)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(711)
				::openfl::display::DisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(711)
				++(_g);
				HX_STACK_LINE(713)
				::openfl::_internal::renderer::RenderSession tmp6 = renderSession;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(713)
				child->__renderDOM(tmp6);
			}
		}
		HX_STACK_LINE(717)
		{
			HX_STACK_LINE(717)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(717)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(717)
			while((true)){
				HX_STACK_LINE(717)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(717)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(717)
				if ((tmp4)){
					HX_STACK_LINE(717)
					break;
				}
				HX_STACK_LINE(717)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(717)
				::openfl::display::DisplayObject orphan = tmp5;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(717)
				++(_g);
				HX_STACK_LINE(719)
				bool tmp6 = (orphan->stage == null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(719)
				if ((tmp6)){
					HX_STACK_LINE(721)
					::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(721)
					orphan->__renderDOM(tmp7);
				}
			}
		}
		HX_STACK_LINE(727)
		int tmp3 = this->__removedChildren->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(727)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(727)
		if ((tmp4)){
			HX_STACK_LINE(729)
			int tmp5 = this->__removedChildren->length;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(729)
			this->__removedChildren->splice((int)0,tmp5);
		}
		HX_STACK_LINE(733)
		::openfl::display::DisplayObject tmp5 = this->__mask;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(733)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(733)
		if ((tmp6)){
			HX_STACK_LINE(735)
			renderSession->maskManager->popMask();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderGL",0x3eef01bf,"openfl.display.DisplayObjectContainer.__renderGL","openfl/display/DisplayObjectContainer.hx",744,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(746)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(746)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(746)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(746)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(746)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(746)
		if ((tmp3)){
			HX_STACK_LINE(746)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(746)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(746)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(746)
			tmp4 = true;
		}
		HX_STACK_LINE(746)
		if ((tmp4)){
			HX_STACK_LINE(746)
			return null();
		}
		HX_STACK_LINE(748)
		bool tmp5 = this->__cacheAsBitmap;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(748)
		if ((tmp5)){
			HX_STACK_LINE(749)
			{
				HX_STACK_LINE(749)
				::openfl::geom::Matrix tmp6 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(749)
				bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(749)
				bool hasCacheMatrix = tmp7;		HX_STACK_VAR(hasCacheMatrix,"hasCacheMatrix");
				HX_STACK_LINE(749)
				::openfl::geom::Rectangle tmp8 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(749)
				Float x = tmp8->x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(749)
				::openfl::geom::Rectangle tmp9 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(749)
				Float y = tmp9->y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(749)
				::openfl::geom::Rectangle tmp10 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(749)
				Float w = tmp10->width;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(749)
				::openfl::geom::Rectangle tmp11 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(749)
				Float h = tmp11->height;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(749)
				::openfl::geom::Matrix tmp12 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(749)
				bool tmp13 = (tmp12 == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(749)
				if ((tmp13)){
					HX_STACK_LINE(749)
					::openfl::geom::Matrix tmp14 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(749)
					this->__cacheGLMatrix = tmp14;
				}
				HX_STACK_LINE(749)
				bool tmp14 = hasCacheMatrix;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(749)
				if ((tmp14)){
					HX_STACK_LINE(749)
					::openfl::geom::Rectangle tmp15 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(749)
					::openfl::geom::Rectangle bmpBounds = tmp15;		HX_STACK_VAR(bmpBounds,"bmpBounds");
					HX_STACK_LINE(749)
					::openfl::geom::Rectangle tmp16 = this->__cachedBitmapBounds;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(749)
					::openfl::geom::Rectangle tmp17 = bmpBounds;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(749)
					::openfl::geom::Matrix tmp18 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(749)
					tmp16->__transform(tmp17,tmp18);
					HX_STACK_LINE(749)
					x = bmpBounds->x;
					HX_STACK_LINE(749)
					y = bmpBounds->y;
					HX_STACK_LINE(749)
					w = bmpBounds->width;
					HX_STACK_LINE(749)
					h = bmpBounds->height;
					HX_STACK_LINE(749)
					::openfl::geom::Matrix tmp19 = this->__cacheAsBitmapMatrix;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(749)
					::openfl::geom::Matrix tmp20 = tmp19->clone();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(749)
					this->__cacheGLMatrix = tmp20;
				}
				else{
					HX_STACK_LINE(749)
					::openfl::geom::Matrix tmp15 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(749)
					tmp15->identity();
				}
				HX_STACK_LINE(749)
				bool tmp15 = (w <= (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(749)
				bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(749)
				if ((tmp15)){
					HX_STACK_LINE(749)
					tmp16 = (h <= (int)0);
				}
				else{
					HX_STACK_LINE(749)
					tmp16 = false;
				}
				HX_STACK_LINE(749)
				if ((tmp16)){
					HX_STACK_LINE(749)
					Dynamic();
				}
				else{
					HX_STACK_LINE(749)
					bool tmp17 = this->__updateCachedBitmap;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(749)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(749)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(749)
					if ((tmp18)){
						HX_STACK_LINE(749)
						tmp19 = this->__updateFilters;
					}
					else{
						HX_STACK_LINE(749)
						tmp19 = true;
					}
					HX_STACK_LINE(749)
					if ((tmp19)){
						HX_STACK_LINE(749)
						::openfl::geom::Rectangle tmp20 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(749)
						bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(749)
						if ((tmp21)){
							HX_STACK_LINE(749)
							::openfl::geom::Rectangle tmp22 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(749)
							Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(749)
							Float tmp24 = ::Math_obj::abs(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(749)
							::openfl::geom::Rectangle tmp25 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(749)
							Float tmp26 = tmp25->width;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(749)
							Float tmp27 = ::Math_obj::abs(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(749)
							Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(749)
							hx::AddEq(w,tmp28);
							HX_STACK_LINE(749)
							::openfl::geom::Rectangle tmp29 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(749)
							Float tmp30 = tmp29->y;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(749)
							Float tmp31 = ::Math_obj::abs(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(749)
							::openfl::geom::Rectangle tmp32 = this->__cachedFilterBounds;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(749)
							Float tmp33 = tmp32->height;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(749)
							Float tmp34 = ::Math_obj::abs(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(749)
							Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(749)
							hx::AddEq(h,tmp35);
						}
						HX_STACK_LINE(749)
						::openfl::display::BitmapData tmp22 = this->__cachedBitmap;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(749)
						bool tmp23 = (tmp22 == null());		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(749)
						if ((tmp23)){
							HX_STACK_LINE(749)
							::openfl::display::BitmapData tmp24 = ::openfl::display::BitmapData_obj::__asRenderTexture(null(),null());		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(749)
							this->__cachedBitmap = tmp24;
						}
						HX_STACK_LINE(749)
						::openfl::display::BitmapData tmp24 = this->__cachedBitmap;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(749)
						Float tmp25 = w;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(749)
						int tmp26 = ::Math_obj::ceil(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(749)
						Float tmp27 = h;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(749)
						int tmp28 = ::Math_obj::ceil(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(749)
						tmp24->__resize(tmp26,tmp28);
						HX_STACK_LINE(749)
						::openfl::geom::Matrix tmp29 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(749)
						::openfl::geom::Matrix tmp30 = tmp29->clone();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(749)
						::openfl::geom::Matrix m = tmp30;		HX_STACK_VAR(m,"m");
						HX_STACK_LINE(749)
						Float tmp31 = x;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(749)
						Float tmp32 = -(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(749)
						Float tmp33 = y;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(749)
						Float tmp34 = -(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(749)
						m->translate(tmp32,tmp34);
						HX_STACK_LINE(749)
						::openfl::display::Shader tmp35 = this->__shader;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(749)
						::openfl::display::Shader shader = tmp35;		HX_STACK_VAR(shader,"shader");
						HX_STACK_LINE(749)
						this->__shader = null();
						HX_STACK_LINE(749)
						::openfl::display::BitmapData tmp36 = this->__cachedBitmap;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(749)
						::openfl::_internal::renderer::RenderSession tmp37 = renderSession;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(749)
						::openfl::geom::Matrix tmp38 = m;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(749)
						tmp36->__drawGL(tmp37,hx::ObjectPtr<OBJ_>(this),tmp38,null(),null(),null(),true,false,true,null(),null());
						HX_STACK_LINE(749)
						this->__shader = shader;
						HX_STACK_LINE(749)
						this->__updateCachedBitmap = false;
					}
					HX_STACK_LINE(749)
					bool tmp20 = this->__updateFilters;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(749)
					if ((tmp20)){
						HX_STACK_LINE(749)
						::openfl::_internal::renderer::RenderSession tmp21 = renderSession;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(749)
						::openfl::display::BitmapData tmp22 = this->__cachedBitmap;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(749)
						::openfl::display::BitmapData tmp23 = this->__cachedBitmap;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(749)
						::openfl::filters::BitmapFilter_obj::__applyFilters(this->__filters,tmp21,tmp22,tmp23,null(),null());
						HX_STACK_LINE(749)
						this->__updateFilters = false;
					}
					HX_STACK_LINE(749)
					::openfl::geom::Matrix tmp21 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(749)
					tmp21->invert();
					HX_STACK_LINE(749)
					{
						HX_STACK_LINE(749)
						::openfl::geom::Matrix tmp22 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(749)
						::openfl::geom::Matrix _this = tmp22;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(749)
						Float tmp23 = (x * _this->a);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(749)
						Float tmp24 = (y * _this->c);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(749)
						Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(749)
						Float tmp26 = _this->tx;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(749)
						Float tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(749)
						_this->tx = tmp27;
						HX_STACK_LINE(749)
						Float tmp28 = (x * _this->b);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(749)
						Float tmp29 = (y * _this->d);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(749)
						Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(749)
						Float tmp31 = _this->ty;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(749)
						Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(749)
						_this->ty = tmp32;
					}
					HX_STACK_LINE(749)
					::openfl::geom::Matrix tmp22 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(749)
					::openfl::geom::Matrix tmp23 = this->__renderTransform;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(749)
					tmp22->concat(tmp23);
					HX_STACK_LINE(749)
					::openfl::geom::Matrix tmp24 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(749)
					::openfl::geom::Point tmp25 = this->__offset;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(749)
					Float tmp26 = tmp25->x;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(749)
					::openfl::geom::Point tmp27 = this->__offset;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(749)
					Float tmp28 = tmp27->y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(749)
					tmp24->translate(tmp26,tmp28);
					HX_STACK_LINE(749)
					::openfl::display::BitmapData tmp29 = this->__cachedBitmap;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(749)
					bool tmp30 = this->__cacheAsBitmapSmooth;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(749)
					::openfl::geom::Matrix tmp31 = this->__cacheGLMatrix;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(749)
					::openfl::geom::ColorTransform tmp32 = this->__worldColorTransform;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(749)
					Float tmp33 = this->__worldAlpha;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(749)
					Dynamic tmp34 = this->blendMode;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(749)
					::openfl::display::Shader tmp35 = this->__shader;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(749)
					renderSession->spriteBatch->renderBitmapData(tmp29,tmp30,tmp31,tmp32,tmp33,tmp34,tmp35,((Dynamic)((int)0)),null());
				}
			}
			HX_STACK_LINE(750)
			return null();
		}
		HX_STACK_LINE(753)
		{
			HX_STACK_LINE(753)
			::openfl::geom::Rectangle tmp6 = this->__scrollRect;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(753)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(753)
			if ((tmp7)){
				HX_STACK_LINE(753)
				::openfl::geom::Rectangle tmp8 = this->__scrollRect;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(753)
				::openfl::geom::Matrix tmp9 = this->__renderTransform;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(753)
				renderSession->maskManager->pushRect(tmp8,tmp9);
			}
			HX_STACK_LINE(753)
			::openfl::display::DisplayObject tmp8 = this->__mask;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(753)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(753)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(753)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(753)
			if ((tmp10)){
				HX_STACK_LINE(753)
				::openfl::display::Graphics tmp12 = this->__maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(753)
				::openfl::display::Graphics tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(753)
				::openfl::display::Graphics tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(753)
				tmp11 = (tmp14 != null());
			}
			else{
				HX_STACK_LINE(753)
				tmp11 = false;
			}
			HX_STACK_LINE(753)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(753)
			if ((tmp11)){
				HX_STACK_LINE(753)
				::openfl::display::Graphics tmp13 = this->__maskGraphics;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(753)
				::openfl::display::Graphics tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(753)
				int tmp15 = tmp14->__commands->get_length();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(753)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(753)
				tmp12 = (tmp16 > (int)0);
			}
			else{
				HX_STACK_LINE(753)
				tmp12 = false;
			}
			HX_STACK_LINE(753)
			if ((tmp12)){
				HX_STACK_LINE(753)
				renderSession->maskManager->pushMask(hx::ObjectPtr<OBJ_>(this));
			}
		}
		HX_STACK_LINE(754)
		{
			HX_STACK_LINE(754)
			::openfl::display::Graphics tmp6 = this->__graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(754)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(754)
			if ((tmp7)){
				HX_STACK_LINE(754)
				::openfl::display::Graphics tmp8 = this->__graphics;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(754)
				bool tmp9 = tmp8->__hardware;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(754)
				if ((tmp9)){
					HX_STACK_LINE(754)
					::openfl::_internal::renderer::RenderSession tmp10 = renderSession;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(754)
					::openfl::_internal::renderer::opengl::utils::GraphicsRenderer_obj::render(hx::ObjectPtr<OBJ_>(this),tmp10);
				}
				else{
					HX_STACK_LINE(754)
					::openfl::display::Graphics tmp10 = this->__graphics;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(754)
					::openfl::_internal::renderer::RenderSession tmp11 = renderSession;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(754)
					::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp10,tmp11);
					HX_STACK_LINE(754)
					::openfl::_internal::renderer::RenderSession tmp12 = renderSession;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(754)
					::openfl::_internal::renderer::opengl::GLRenderer_obj::renderBitmap(hx::ObjectPtr<OBJ_>(this),tmp12,null());
				}
			}
		}
		HX_STACK_LINE(756)
		{
			HX_STACK_LINE(756)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(756)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(756)
			while((true)){
				HX_STACK_LINE(756)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(756)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(756)
				if ((tmp7)){
					HX_STACK_LINE(756)
					break;
				}
				HX_STACK_LINE(756)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(756)
				::openfl::display::DisplayObject child = tmp8;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(756)
				++(_g);
				HX_STACK_LINE(758)
				::openfl::_internal::renderer::RenderSession tmp9 = renderSession;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(758)
				child->__renderGL(tmp9);
			}
		}
		HX_STACK_LINE(762)
		{
			HX_STACK_LINE(762)
			::openfl::display::DisplayObject tmp6 = this->__mask;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(762)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(762)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(762)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(762)
			if ((tmp8)){
				HX_STACK_LINE(762)
				::openfl::display::Graphics tmp10 = this->__maskGraphics;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(762)
				::openfl::display::Graphics tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(762)
				::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(762)
				tmp9 = (tmp12 != null());
			}
			else{
				HX_STACK_LINE(762)
				tmp9 = false;
			}
			HX_STACK_LINE(762)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(762)
			if ((tmp9)){
				HX_STACK_LINE(762)
				::openfl::display::Graphics tmp11 = this->__maskGraphics;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(762)
				::openfl::display::Graphics tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(762)
				int tmp13 = tmp12->__commands->get_length();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(762)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(762)
				tmp10 = (tmp14 > (int)0);
			}
			else{
				HX_STACK_LINE(762)
				tmp10 = false;
			}
			HX_STACK_LINE(762)
			if ((tmp10)){
				HX_STACK_LINE(762)
				renderSession->maskManager->popMask();
			}
			HX_STACK_LINE(762)
			::openfl::geom::Rectangle tmp11 = this->__scrollRect;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(762)
			bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(762)
			if ((tmp12)){
				HX_STACK_LINE(762)
				renderSession->maskManager->popRect();
			}
		}
		HX_STACK_LINE(764)
		int tmp6 = this->__removedChildren->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(764)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(764)
		if ((tmp7)){
			HX_STACK_LINE(766)
			int tmp8 = this->__removedChildren->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(766)
			this->__removedChildren->splice((int)0,tmp8);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",773,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(775)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(775)
		::openfl::display::Stage tmp1 = stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(775)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(775)
		if ((tmp2)){
			HX_STACK_LINE(777)
			::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(777)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(777)
			if ((tmp4)){
				HX_STACK_LINE(779)
				::openfl::events::Event tmp5 = ::openfl::events::Event_obj::__new(HX_HCSTRING("removedFromStage","\x34","\x21","\x76","\xba"),false,false);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(779)
				this->__dispatchEvent(tmp5);
			}
			HX_STACK_LINE(783)
			this->stage = stage;
			HX_STACK_LINE(785)
			bool tmp5 = (stage != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(785)
			if ((tmp5)){
				HX_STACK_LINE(787)
				::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),false,false);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(787)
				this->__dispatchEvent(tmp6);
			}
			HX_STACK_LINE(791)
			bool tmp6 = (this->__children != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(791)
			if ((tmp6)){
				HX_STACK_LINE(793)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(793)
				Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(793)
				while((true)){
					HX_STACK_LINE(793)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(793)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(793)
					if ((tmp8)){
						HX_STACK_LINE(793)
						break;
					}
					HX_STACK_LINE(793)
					::openfl::display::DisplayObject tmp9 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(793)
					::openfl::display::DisplayObject child = tmp9;		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(793)
					++(_g);
					HX_STACK_LINE(795)
					::openfl::display::Stage tmp10 = stage;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(795)
					child->__setStageReference(tmp10);
				}
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",806,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(808)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(808)
		bool tmp1 = updateChildren;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(808)
		::openfl::display::Graphics tmp2 = maskGraphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(808)
		this->super::__update(tmp,tmp1,tmp2);
		HX_STACK_LINE(811)
		bool tmp3 = this->__renderable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(811)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(811)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(811)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(811)
		if ((tmp5)){
			HX_STACK_LINE(811)
			bool tmp7 = this->__isMask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(811)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(811)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(811)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(811)
			tmp6 = false;
		}
		HX_STACK_LINE(811)
		if ((tmp6)){
			HX_STACK_LINE(813)
			return null();
		}
		HX_STACK_LINE(819)
		bool tmp7 = updateChildren;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(819)
		if ((tmp7)){
			HX_STACK_LINE(821)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(821)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(821)
			while((true)){
				HX_STACK_LINE(821)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(821)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(821)
				if ((tmp9)){
					HX_STACK_LINE(821)
					break;
				}
				HX_STACK_LINE(821)
				::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(821)
				::openfl::display::DisplayObject child = tmp10;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(821)
				++(_g);
				HX_STACK_LINE(823)
				bool tmp11 = transformOnly;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(823)
				::openfl::display::Graphics tmp12 = maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(823)
				child->__update(tmp11,true,tmp12);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__updateChildren",0x0e3ace2c,"openfl.display.DisplayObjectContainer.__updateChildren","openfl/display/DisplayObjectContainer.hx",832,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(834)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(834)
		this->super::__updateChildren(tmp);
		HX_STACK_LINE(836)
		{
			HX_STACK_LINE(836)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(836)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(836)
			while((true)){
				HX_STACK_LINE(836)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(836)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(836)
				if ((tmp2)){
					HX_STACK_LINE(836)
					break;
				}
				HX_STACK_LINE(836)
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(836)
				::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(836)
				++(_g);
				HX_STACK_LINE(838)
				bool tmp4 = transformOnly;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(838)
				child->__update(tmp4,true,null());
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",852,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_LINE(854)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(854)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp == hx::paccAlways ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__broadcast") ) { return __broadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return __removedChildren; }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return __getRenderBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { __removedChildren=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"));
	outFields->push(HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff")},
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,tabChildren),HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__removedChildren),HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"),
	HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"),
	HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"),
	HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("areInaccessibleObjectsUnderPoint","\x3d","\x22","\x9b","\x1e"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChildByName","\x88","\xb9","\x73","\xa3"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("getObjectsUnderPoint","\x96","\x10","\xd5","\x80"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("__broadcast","\xe1","\xeb","\x45","\x0d"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getRenderBounds","\x01","\x11","\xb8","\x7b"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObjectContainer","\x4a","\x52","\xef","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectContainer_obj >;
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
