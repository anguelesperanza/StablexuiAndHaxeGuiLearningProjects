#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_DrawPath
#include <openfl/_internal/renderer/opengl/utils/DrawPath.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_GLStack
#include <openfl/_internal/renderer/opengl/utils/GLStack.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_RenderTexture
#include <openfl/_internal/renderer/opengl/utils/RenderTexture.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsBitmapFill
#include <openfl/display/GraphicsBitmapFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsEndFill
#include <openfl/display/GraphicsEndFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#include <openfl/display/GraphicsGradientFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsSolidFill
#include <openfl/display/GraphicsSolidFill.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsStroke
#include <openfl/display/GraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsStroke
#include <openfl/display/IGraphicsStroke.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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

Void Graphics_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Graphics","new",0x7fd846a7,"openfl.display.Graphics.new","openfl/display/Graphics.hx",36,0x8d299ce7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(64)
	this->__glStack = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(63)
	this->__dirty = true;
	HX_STACK_LINE(87)
	::openfl::_internal::renderer::DrawCommandBuffer tmp = ::openfl::_internal::renderer::DrawCommandBuffer_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	this->__commands = tmp;
	HX_STACK_LINE(88)
	this->__strokePadding = (int)0;
	HX_STACK_LINE(89)
	this->__positionX = (int)0;
	HX_STACK_LINE(90)
	this->__positionY = (int)0;
	HX_STACK_LINE(91)
	this->__hardware = true;
}
;
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new()
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct();
	return _result_;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct();
	return _result_;}

Void Graphics_obj::beginBitmapFill( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl.display.Graphics","beginBitmapFill",0x31c80e62,"openfl.display.Graphics.beginBitmapFill","openfl/display/Graphics.hx",100,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(102)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		::openfl::display::BitmapData tmp1 = bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		bool tmp2 = (matrix != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		::openfl::geom::Matrix tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(102)
		if ((tmp2)){
			HX_STACK_LINE(102)
			tmp3 = matrix->clone();
		}
		else{
			HX_STACK_LINE(102)
			tmp3 = null();
		}
		HX_STACK_LINE(102)
		bool tmp4 = repeat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		bool tmp5 = smooth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(102)
		tmp->beginBitmapFill(tmp1,tmp3,tmp4,tmp5);
		HX_STACK_LINE(104)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

Void Graphics_obj::beginFill( hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_FRAME("openfl.display.Graphics","beginFill",0xf44a92d3,"openfl.display.Graphics.beginFill","openfl/display/Graphics.hx",109,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(111)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		int tmp1 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		Float tmp2 = alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		tmp->beginFill(tmp1,tmp2);
		HX_STACK_LINE(113)
		bool tmp3 = (alpha > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		if ((tmp3)){
			HX_STACK_LINE(113)
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

Void Graphics_obj::beginGradientFill( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic __o_spreadMethod,Dynamic __o_interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Dynamic spreadMethod = __o_spreadMethod.Default(0);
Dynamic interpolationMethod = __o_interpolationMethod.Default(1);
Float focalPointRatio = __o_focalPointRatio.Default(0);
	HX_STACK_FRAME("openfl.display.Graphics","beginGradientFill",0x99f380e3,"openfl.display.Graphics.beginGradientFill","openfl/display/Graphics.hx",118,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(120)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		Dynamic tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		::openfl::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		Dynamic tmp3 = spreadMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		Dynamic tmp4 = interpolationMethod;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		Float tmp5 = focalPointRatio;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		tmp->beginGradientFill(tmp1,colors,alphas,ratios,tmp2,tmp3,tmp4,tmp5);
		HX_STACK_LINE(121)
		this->__hardware = false;
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(123)
			while((true)){
				HX_STACK_LINE(123)
				bool tmp6 = (_g < alphas->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(123)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(123)
				if ((tmp7)){
					HX_STACK_LINE(123)
					break;
				}
				HX_STACK_LINE(123)
				Float tmp8 = alphas->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(123)
				Float alpha = tmp8;		HX_STACK_VAR(alpha,"alpha");
				HX_STACK_LINE(123)
				++(_g);
				HX_STACK_LINE(125)
				bool tmp9 = (alpha > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(125)
				if ((tmp9)){
					HX_STACK_LINE(127)
					this->__visible = true;
					HX_STACK_LINE(128)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

Void Graphics_obj::clear( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","clear",0x0a9f4794,"openfl.display.Graphics.clear","openfl/display/Graphics.hx",137,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(139)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		tmp->clear();
		HX_STACK_LINE(140)
		this->__strokePadding = (int)0;
		HX_STACK_LINE(142)
		::openfl::geom::Rectangle tmp1 = this->__bounds;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		if ((tmp2)){
			HX_STACK_LINE(144)
			this->set___dirty(true);
			HX_STACK_LINE(145)
			this->__transformDirty = true;
			HX_STACK_LINE(146)
			this->__bounds = null();
		}
		HX_STACK_LINE(150)
		this->__visible = false;
		HX_STACK_LINE(151)
		this->__hardware = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

Void Graphics_obj::copyFrom( ::openfl::display::Graphics sourceGraphics){
{
		HX_STACK_FRAME("openfl.display.Graphics","copyFrom",0x0a477418,"openfl.display.Graphics.copyFrom","openfl/display/Graphics.hx",160,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceGraphics,"sourceGraphics")
		HX_STACK_LINE(162)
		bool tmp = (sourceGraphics->__bounds != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		::openfl::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		if ((tmp)){
			HX_STACK_LINE(162)
			tmp1 = sourceGraphics->__bounds->clone();
		}
		else{
			HX_STACK_LINE(162)
			tmp1 = null();
		}
		HX_STACK_LINE(162)
		this->__bounds = tmp1;
		HX_STACK_LINE(163)
		::openfl::_internal::renderer::DrawCommandBuffer tmp2 = sourceGraphics->__commands->copy();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		this->__commands = tmp2;
		HX_STACK_LINE(164)
		this->set___dirty(true);
		HX_STACK_LINE(165)
		this->__strokePadding = sourceGraphics->__strokePadding;
		HX_STACK_LINE(166)
		this->__positionX = sourceGraphics->__positionX;
		HX_STACK_LINE(167)
		this->__positionY = sourceGraphics->__positionY;
		HX_STACK_LINE(168)
		this->__transformDirty = true;
		HX_STACK_LINE(169)
		this->__visible = sourceGraphics->__visible;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,copyFrom,(void))

Void Graphics_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.Graphics","cubicCurveTo",0x467410b9,"openfl.display.Graphics.cubicCurveTo","openfl/display/Graphics.hx",174,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX1,"controlX1")
		HX_STACK_ARG(controlY1,"controlY1")
		HX_STACK_ARG(controlX2,"controlX2")
		HX_STACK_ARG(controlY2,"controlY2")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(176)
		Float tmp = this->__positionX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		Float tmp1 = this->__strokePadding;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		Float tmp3 = this->__positionY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		Float tmp4 = this->__strokePadding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(176)
		this->__inflateBounds(tmp2,tmp5);
		HX_STACK_LINE(177)
		Float tmp6 = this->__positionX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(177)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(177)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(177)
		Float tmp9 = this->__positionY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(177)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(177)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(177)
		this->__inflateBounds(tmp8,tmp11);
		HX_STACK_LINE(179)
		Float ix1;		HX_STACK_VAR(ix1,"ix1");
		HX_STACK_LINE(179)
		Float iy1;		HX_STACK_VAR(iy1,"iy1");
		HX_STACK_LINE(179)
		Float ix2;		HX_STACK_VAR(ix2,"ix2");
		HX_STACK_LINE(179)
		Float iy2;		HX_STACK_VAR(iy2,"iy2");
		HX_STACK_LINE(181)
		ix1 = anchorX;
		HX_STACK_LINE(182)
		ix2 = anchorX;
		HX_STACK_LINE(184)
		bool tmp12 = (controlX1 < anchorX);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(184)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(184)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(184)
		if ((tmp13)){
			HX_STACK_LINE(184)
			Float tmp15 = controlX1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(184)
			Float tmp16 = this->__positionX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(184)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(184)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(184)
			tmp14 = (tmp15 > tmp18);
		}
		else{
			HX_STACK_LINE(184)
			tmp14 = false;
		}
		HX_STACK_LINE(184)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(184)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(184)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(184)
		if ((tmp16)){
			HX_STACK_LINE(184)
			bool tmp18 = (controlX1 > anchorX);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(184)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(184)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(184)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(184)
			bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(184)
			if ((tmp22)){
				HX_STACK_LINE(184)
				Float tmp23 = controlX1;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(184)
				Float tmp24 = this->__positionX;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(184)
				Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(184)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(184)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(184)
				tmp17 = (tmp23 < tmp27);
			}
			else{
				HX_STACK_LINE(184)
				tmp17 = false;
			}
		}
		else{
			HX_STACK_LINE(184)
			tmp17 = true;
		}
		HX_STACK_LINE(184)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(184)
		if ((tmp17)){
			HX_STACK_LINE(184)
			bool tmp19 = (controlX2 < anchorX);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(184)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(184)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(184)
			bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(184)
			bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(184)
			if ((tmp23)){
				HX_STACK_LINE(184)
				Float tmp24 = controlX2;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(184)
				Float tmp25 = this->__positionX;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(184)
				Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(184)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(184)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(184)
				bool tmp29 = (tmp24 > tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(184)
				tmp22 = tmp29;
			}
			else{
				HX_STACK_LINE(184)
				tmp22 = false;
			}
			HX_STACK_LINE(184)
			bool tmp24 = tmp22;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(184)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(184)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(184)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(184)
			if ((tmp27)){
				HX_STACK_LINE(184)
				bool tmp28 = (controlX2 > anchorX);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(184)
				bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(184)
				bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(184)
				bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(184)
				bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(184)
				if ((tmp32)){
					HX_STACK_LINE(184)
					Float tmp33 = controlX2;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(184)
					Float tmp34 = this->__positionX;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(184)
					Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(184)
					Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(184)
					Float tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(184)
					tmp18 = (tmp33 < tmp37);
				}
				else{
					HX_STACK_LINE(184)
					tmp18 = false;
				}
			}
			else{
				HX_STACK_LINE(184)
				tmp18 = true;
			}
		}
		else{
			HX_STACK_LINE(184)
			tmp18 = false;
		}
		HX_STACK_LINE(184)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(184)
		if ((tmp19)){
			HX_STACK_LINE(186)
			Float tmp20 = this->__positionX;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(186)
			Float tmp21 = ((int)2 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(186)
			Float tmp22 = ((int)4 * controlX1);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(186)
			Float tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(186)
			Float tmp24 = ((int)2 * controlX2);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(186)
			Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(186)
			Float u = tmp25;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(187)
			Float tmp26 = controlX1;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(187)
			Float tmp27 = this->__positionX;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(187)
			Float tmp28 = (tmp26 - tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(187)
			Float v = tmp28;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(188)
			Float tmp29 = this->__positionX;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(188)
			Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(188)
			Float tmp31 = ((int)3 * controlX1);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(188)
			Float tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(188)
			Float tmp33 = anchorX;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(188)
			Float tmp34 = (tmp32 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(188)
			Float tmp35 = ((int)3 * controlX2);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(188)
			Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(188)
			Float w = tmp36;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(190)
			Float tmp37 = u;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(190)
			Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(190)
			Float tmp39 = (u * u);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(190)
			Float tmp40 = ((int)4 * v);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(190)
			Float tmp41 = w;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(190)
			Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(190)
			Float tmp43 = (tmp39 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(190)
			Float tmp44 = ::Math_obj::sqrt(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(190)
			Float tmp45 = (tmp38 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(190)
			Float tmp46 = ((int)2 * w);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(190)
			Float tmp47 = (Float(tmp45) / Float(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(190)
			Float t1 = tmp47;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(191)
			Float tmp48 = u;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(191)
			Float tmp49 = -(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(191)
			Float tmp50 = (u * u);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(191)
			Float tmp51 = ((int)4 * v);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(191)
			Float tmp52 = w;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(191)
			Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(191)
			Float tmp54 = (tmp50 - tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(191)
			Float tmp55 = ::Math_obj::sqrt(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(191)
			Float tmp56 = (tmp49 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(191)
			Float tmp57 = ((int)2 * w);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(191)
			Float tmp58 = (Float(tmp56) / Float(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(191)
			Float t2 = tmp58;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(193)
			bool tmp59 = (t1 > (int)0);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(193)
			bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(193)
			if ((tmp59)){
				HX_STACK_LINE(193)
				tmp60 = (t1 < (int)1);
			}
			else{
				HX_STACK_LINE(193)
				tmp60 = false;
			}
			HX_STACK_LINE(193)
			if ((tmp60)){
				HX_STACK_LINE(195)
				Float tmp61 = t1;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(195)
				Float tmp62 = this->__positionX;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(195)
				Float tmp63 = controlX1;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(195)
				Float tmp64 = controlX2;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(195)
				Float tmp65 = anchorX;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(195)
				Float tmp66 = this->__calculateBezierCubicPoint(tmp61,tmp62,tmp63,tmp64,tmp65);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(195)
				ix1 = tmp66;
			}
			HX_STACK_LINE(199)
			bool tmp61 = (t2 > (int)0);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(199)
			bool tmp62;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(199)
			if ((tmp61)){
				HX_STACK_LINE(199)
				tmp62 = (t2 < (int)1);
			}
			else{
				HX_STACK_LINE(199)
				tmp62 = false;
			}
			HX_STACK_LINE(199)
			if ((tmp62)){
				HX_STACK_LINE(201)
				Float tmp63 = t2;		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(201)
				Float tmp64 = this->__positionX;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(201)
				Float tmp65 = controlX1;		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(201)
				Float tmp66 = controlX2;		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(201)
				Float tmp67 = anchorX;		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(201)
				Float tmp68 = this->__calculateBezierCubicPoint(tmp63,tmp64,tmp65,tmp66,tmp67);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(201)
				ix2 = tmp68;
			}
		}
		HX_STACK_LINE(207)
		iy1 = anchorY;
		HX_STACK_LINE(208)
		iy2 = anchorY;
		HX_STACK_LINE(210)
		bool tmp20 = (controlY1 < anchorY);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(210)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(210)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(210)
		if ((tmp21)){
			HX_STACK_LINE(210)
			Float tmp23 = controlY1;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(210)
			Float tmp24 = this->__positionX;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(210)
			Float tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(210)
			Float tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(210)
			tmp22 = (tmp23 > tmp26);
		}
		else{
			HX_STACK_LINE(210)
			tmp22 = false;
		}
		HX_STACK_LINE(210)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(210)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(210)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(210)
		if ((tmp24)){
			HX_STACK_LINE(210)
			bool tmp26 = (controlY1 > anchorY);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(210)
			bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(210)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(210)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(210)
			bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(210)
			if ((tmp30)){
				HX_STACK_LINE(210)
				Float tmp31 = controlY1;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(210)
				Float tmp32 = this->__positionX;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(210)
				Float tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(210)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(210)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(210)
				tmp25 = (tmp31 < tmp35);
			}
			else{
				HX_STACK_LINE(210)
				tmp25 = false;
			}
		}
		else{
			HX_STACK_LINE(210)
			tmp25 = true;
		}
		HX_STACK_LINE(210)
		bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(210)
		if ((tmp25)){
			HX_STACK_LINE(210)
			bool tmp27 = (controlY2 < anchorY);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(210)
			bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(210)
			bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(210)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(210)
			bool tmp31 = tmp29;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(210)
			if ((tmp31)){
				HX_STACK_LINE(210)
				Float tmp32 = controlY2;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(210)
				Float tmp33 = this->__positionX;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(210)
				Float tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(210)
				Float tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(210)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(210)
				bool tmp37 = (tmp32 > tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(210)
				tmp30 = tmp37;
			}
			else{
				HX_STACK_LINE(210)
				tmp30 = false;
			}
			HX_STACK_LINE(210)
			bool tmp32 = tmp30;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(210)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(210)
			bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(210)
			bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(210)
			if ((tmp35)){
				HX_STACK_LINE(210)
				bool tmp36 = (controlY2 > anchorY);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(210)
				bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(210)
				bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(210)
				bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(210)
				bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(210)
				if ((tmp40)){
					HX_STACK_LINE(210)
					Float tmp41 = controlY2;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(210)
					Float tmp42 = this->__positionX;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(210)
					Float tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(210)
					Float tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(210)
					Float tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(210)
					tmp26 = (tmp41 < tmp45);
				}
				else{
					HX_STACK_LINE(210)
					tmp26 = false;
				}
			}
			else{
				HX_STACK_LINE(210)
				tmp26 = true;
			}
		}
		else{
			HX_STACK_LINE(210)
			tmp26 = false;
		}
		HX_STACK_LINE(210)
		bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(210)
		if ((tmp27)){
			HX_STACK_LINE(212)
			Float tmp28 = this->__positionX;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(212)
			Float tmp29 = ((int)2 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(212)
			Float tmp30 = ((int)4 * controlY1);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(212)
			Float tmp31 = (tmp29 - tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(212)
			Float tmp32 = ((int)2 * controlY2);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(212)
			Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(212)
			Float u = tmp33;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(213)
			Float tmp34 = controlY1;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(213)
			Float tmp35 = this->__positionX;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(213)
			Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(213)
			Float v = tmp36;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(214)
			Float tmp37 = this->__positionX;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(214)
			Float tmp38 = -(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(214)
			Float tmp39 = ((int)3 * controlY1);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(214)
			Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(214)
			Float tmp41 = anchorY;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(214)
			Float tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(214)
			Float tmp43 = ((int)3 * controlY2);		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(214)
			Float tmp44 = (tmp42 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(214)
			Float w = tmp44;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(216)
			Float tmp45 = u;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(216)
			Float tmp46 = -(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(216)
			Float tmp47 = (u * u);		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(216)
			Float tmp48 = ((int)4 * v);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(216)
			Float tmp49 = w;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(216)
			Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(216)
			Float tmp51 = (tmp47 - tmp50);		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(216)
			Float tmp52 = ::Math_obj::sqrt(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(216)
			Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(216)
			Float tmp54 = ((int)2 * w);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(216)
			Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(216)
			Float t1 = tmp55;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(217)
			Float tmp56 = u;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(217)
			Float tmp57 = -(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(217)
			Float tmp58 = (u * u);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(217)
			Float tmp59 = ((int)4 * v);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(217)
			Float tmp60 = w;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(217)
			Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(217)
			Float tmp62 = (tmp58 - tmp61);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(217)
			Float tmp63 = ::Math_obj::sqrt(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(217)
			Float tmp64 = (tmp57 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(217)
			Float tmp65 = ((int)2 * w);		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(217)
			Float tmp66 = (Float(tmp64) / Float(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(217)
			Float t2 = tmp66;		HX_STACK_VAR(t2,"t2");
			HX_STACK_LINE(219)
			bool tmp67 = (t1 > (int)0);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(219)
			bool tmp68;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(219)
			if ((tmp67)){
				HX_STACK_LINE(219)
				tmp68 = (t1 < (int)1);
			}
			else{
				HX_STACK_LINE(219)
				tmp68 = false;
			}
			HX_STACK_LINE(219)
			if ((tmp68)){
				HX_STACK_LINE(221)
				Float tmp69 = t1;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(221)
				Float tmp70 = this->__positionX;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(221)
				Float tmp71 = controlY1;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(221)
				Float tmp72 = controlY2;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(221)
				Float tmp73 = anchorY;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(221)
				Float tmp74 = this->__calculateBezierCubicPoint(tmp69,tmp70,tmp71,tmp72,tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(221)
				iy1 = tmp74;
			}
			HX_STACK_LINE(225)
			bool tmp69 = (t2 > (int)0);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(225)
			bool tmp70;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(225)
			if ((tmp69)){
				HX_STACK_LINE(225)
				tmp70 = (t2 < (int)1);
			}
			else{
				HX_STACK_LINE(225)
				tmp70 = false;
			}
			HX_STACK_LINE(225)
			if ((tmp70)){
				HX_STACK_LINE(227)
				Float tmp71 = t2;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(227)
				Float tmp72 = this->__positionX;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(227)
				Float tmp73 = controlY1;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(227)
				Float tmp74 = controlY2;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(227)
				Float tmp75 = anchorY;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(227)
				Float tmp76 = this->__calculateBezierCubicPoint(tmp71,tmp72,tmp73,tmp74,tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(227)
				iy2 = tmp76;
			}
		}
		HX_STACK_LINE(233)
		Float tmp28 = ix1;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(233)
		Float tmp29 = this->__strokePadding;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(233)
		Float tmp30 = (tmp28 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(233)
		Float tmp31 = iy1;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(233)
		Float tmp32 = this->__strokePadding;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(233)
		Float tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(233)
		this->__inflateBounds(tmp30,tmp33);
		HX_STACK_LINE(234)
		Float tmp34 = ix1;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(234)
		Float tmp35 = this->__strokePadding;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(234)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(234)
		Float tmp37 = iy1;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(234)
		Float tmp38 = this->__strokePadding;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(234)
		Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(234)
		this->__inflateBounds(tmp36,tmp39);
		HX_STACK_LINE(235)
		Float tmp40 = ix2;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(235)
		Float tmp41 = this->__strokePadding;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(235)
		Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(235)
		Float tmp43 = iy2;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(235)
		Float tmp44 = this->__strokePadding;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(235)
		Float tmp45 = (tmp43 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(235)
		this->__inflateBounds(tmp42,tmp45);
		HX_STACK_LINE(236)
		Float tmp46 = ix2;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(236)
		Float tmp47 = this->__strokePadding;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(236)
		Float tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(236)
		Float tmp49 = iy2;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(236)
		Float tmp50 = this->__strokePadding;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(236)
		Float tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(236)
		this->__inflateBounds(tmp48,tmp51);
		HX_STACK_LINE(238)
		this->__positionX = anchorX;
		HX_STACK_LINE(239)
		this->__positionY = anchorY;
		HX_STACK_LINE(241)
		::openfl::_internal::renderer::DrawCommandBuffer tmp52 = this->__commands;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(241)
		Float tmp53 = controlX1;		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(241)
		Float tmp54 = controlY1;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(241)
		Float tmp55 = controlX2;		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(241)
		Float tmp56 = controlY2;		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(241)
		Float tmp57 = anchorX;		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(241)
		Float tmp58 = anchorY;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(241)
		tmp52->cubicCurveTo(tmp53,tmp54,tmp55,tmp56,tmp57,tmp58);
		HX_STACK_LINE(243)
		this->__hardware = false;
		HX_STACK_LINE(244)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,cubicCurveTo,(void))

Void Graphics_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.Graphics","curveTo",0x89f305d1,"openfl.display.Graphics.curveTo","openfl/display/Graphics.hx",249,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(251)
		Float tmp = this->__positionX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(251)
		Float tmp1 = this->__strokePadding;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(251)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(251)
		Float tmp3 = this->__positionY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		Float tmp4 = this->__strokePadding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		this->__inflateBounds(tmp2,tmp5);
		HX_STACK_LINE(252)
		Float tmp6 = this->__positionX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(252)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(252)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(252)
		Float tmp9 = this->__positionY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(252)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(252)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(252)
		this->__inflateBounds(tmp8,tmp11);
		HX_STACK_LINE(254)
		Float ix;		HX_STACK_VAR(ix,"ix");
		HX_STACK_LINE(254)
		Float iy;		HX_STACK_VAR(iy,"iy");
		HX_STACK_LINE(256)
		bool tmp12 = (controlX < anchorX);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(256)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(256)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(256)
		if ((tmp13)){
			HX_STACK_LINE(256)
			Float tmp15 = controlX;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(256)
			Float tmp16 = this->__positionX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(256)
			Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(256)
			Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(256)
			tmp14 = (tmp15 > tmp18);
		}
		else{
			HX_STACK_LINE(256)
			tmp14 = false;
		}
		HX_STACK_LINE(256)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(256)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(256)
		if ((tmp15)){
			HX_STACK_LINE(256)
			bool tmp17 = (controlX > anchorX);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(256)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(256)
			bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(256)
			if ((tmp19)){
				HX_STACK_LINE(256)
				Float tmp20 = controlX;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(256)
				Float tmp21 = this->__positionX;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(256)
				Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(256)
				Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(256)
				tmp16 = (tmp20 < tmp23);
			}
			else{
				HX_STACK_LINE(256)
				tmp16 = false;
			}
		}
		else{
			HX_STACK_LINE(256)
			tmp16 = true;
		}
		HX_STACK_LINE(256)
		if ((tmp16)){
			HX_STACK_LINE(258)
			ix = anchorX;
		}
		else{
			HX_STACK_LINE(262)
			Float tmp17 = this->__positionX;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(262)
			Float tmp18 = controlX;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(262)
			Float tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(262)
			Float tmp20 = this->__positionX;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(262)
			Float tmp21 = ((int)2 * controlX);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(262)
			Float tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(262)
			Float tmp23 = anchorX;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(262)
			Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(262)
			Float tmp25 = (Float(tmp19) / Float(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(262)
			Float tx = tmp25;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(263)
			Float tmp26 = tx;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(263)
			Float tmp27 = this->__positionX;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(263)
			Float tmp28 = controlX;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(263)
			Float tmp29 = anchorX;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(263)
			Float tmp30 = this->__calculateBezierQuadPoint(tmp26,tmp27,tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(263)
			ix = tmp30;
		}
		HX_STACK_LINE(267)
		bool tmp17 = (controlY < anchorY);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(267)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(267)
		bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(267)
		if ((tmp18)){
			HX_STACK_LINE(267)
			Float tmp20 = controlY;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(267)
			Float tmp21 = this->__positionY;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(267)
			Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(267)
			Float tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(267)
			tmp19 = (tmp20 > tmp23);
		}
		else{
			HX_STACK_LINE(267)
			tmp19 = false;
		}
		HX_STACK_LINE(267)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(267)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(267)
		if ((tmp20)){
			HX_STACK_LINE(267)
			bool tmp22 = (controlY > anchorY);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(267)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(267)
			bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(267)
			if ((tmp24)){
				HX_STACK_LINE(267)
				Float tmp25 = controlY;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(267)
				Float tmp26 = this->__positionY;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(267)
				Float tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(267)
				Float tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(267)
				tmp21 = (tmp25 < tmp28);
			}
			else{
				HX_STACK_LINE(267)
				tmp21 = false;
			}
		}
		else{
			HX_STACK_LINE(267)
			tmp21 = true;
		}
		HX_STACK_LINE(267)
		if ((tmp21)){
			HX_STACK_LINE(269)
			iy = anchorY;
		}
		else{
			HX_STACK_LINE(273)
			Float tmp22 = this->__positionY;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(273)
			Float tmp23 = controlY;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(273)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(273)
			Float tmp25 = this->__positionY;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(273)
			Float tmp26 = ((int)2 * controlY);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(273)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(273)
			Float tmp28 = anchorY;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(273)
			Float tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(273)
			Float tmp30 = (Float(tmp24) / Float(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(273)
			Float ty = tmp30;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(274)
			Float tmp31 = ty;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(274)
			Float tmp32 = this->__positionY;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(274)
			Float tmp33 = controlY;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(274)
			Float tmp34 = anchorY;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(274)
			Float tmp35 = this->__calculateBezierQuadPoint(tmp31,tmp32,tmp33,tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(274)
			iy = tmp35;
		}
		HX_STACK_LINE(278)
		Float tmp22 = ix;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(278)
		Float tmp23 = this->__strokePadding;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(278)
		Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(278)
		Float tmp25 = iy;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(278)
		Float tmp26 = this->__strokePadding;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(278)
		Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(278)
		this->__inflateBounds(tmp24,tmp27);
		HX_STACK_LINE(279)
		Float tmp28 = ix;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(279)
		Float tmp29 = this->__strokePadding;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(279)
		Float tmp30 = (tmp28 + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(279)
		Float tmp31 = iy;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(279)
		Float tmp32 = this->__strokePadding;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(279)
		Float tmp33 = (tmp31 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(279)
		this->__inflateBounds(tmp30,tmp33);
		HX_STACK_LINE(281)
		this->__positionX = anchorX;
		HX_STACK_LINE(282)
		this->__positionY = anchorY;
		HX_STACK_LINE(284)
		::openfl::_internal::renderer::DrawCommandBuffer tmp34 = this->__commands;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(284)
		Float tmp35 = controlX;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(284)
		Float tmp36 = controlY;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(284)
		Float tmp37 = anchorX;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(284)
		Float tmp38 = anchorY;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(284)
		tmp34->curveTo(tmp35,tmp36,tmp37,tmp38);
		HX_STACK_LINE(286)
		this->__hardware = false;
		HX_STACK_LINE(287)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

Void Graphics_obj::drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawCircle",0xee64ddcd,"openfl.display.Graphics.drawCircle","openfl/display/Graphics.hx",292,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(294)
		bool tmp = (radius <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		if ((tmp)){
			HX_STACK_LINE(294)
			return null();
		}
		HX_STACK_LINE(296)
		Float tmp1 = (x - radius);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(296)
		Float tmp2 = this->__strokePadding;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(296)
		Float tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(296)
		Float tmp4 = (y - radius);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(296)
		Float tmp5 = this->__strokePadding;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(296)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(296)
		this->__inflateBounds(tmp3,tmp6);
		HX_STACK_LINE(297)
		Float tmp7 = (x + radius);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(297)
		Float tmp8 = this->__strokePadding;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(297)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(297)
		Float tmp10 = (y + radius);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(297)
		Float tmp11 = this->__strokePadding;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(297)
		Float tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(297)
		this->__inflateBounds(tmp9,tmp12);
		HX_STACK_LINE(299)
		::openfl::_internal::renderer::DrawCommandBuffer tmp13 = this->__commands;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(299)
		Float tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(299)
		Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(299)
		Float tmp16 = radius;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(299)
		tmp13->drawCircle(tmp14,tmp15,tmp16);
		HX_STACK_LINE(301)
		this->__hardware = false;
		HX_STACK_LINE(302)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

Void Graphics_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawEllipse",0xbfad1a81,"openfl.display.Graphics.drawEllipse","openfl/display/Graphics.hx",307,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(309)
		bool tmp = (width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(309)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(309)
		if ((tmp1)){
			HX_STACK_LINE(309)
			tmp2 = (height <= (int)0);
		}
		else{
			HX_STACK_LINE(309)
			tmp2 = true;
		}
		HX_STACK_LINE(309)
		if ((tmp2)){
			HX_STACK_LINE(309)
			return null();
		}
		HX_STACK_LINE(311)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(311)
		Float tmp4 = this->__strokePadding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(311)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(311)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(311)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(311)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(311)
		this->__inflateBounds(tmp5,tmp8);
		HX_STACK_LINE(312)
		Float tmp9 = (x + width);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(312)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(312)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(312)
		Float tmp12 = (y + height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(312)
		Float tmp13 = this->__strokePadding;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(312)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(312)
		this->__inflateBounds(tmp11,tmp14);
		HX_STACK_LINE(314)
		::openfl::_internal::renderer::DrawCommandBuffer tmp15 = this->__commands;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(314)
		Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(314)
		Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(314)
		Float tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(314)
		Float tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(314)
		tmp15->drawEllipse(tmp16,tmp17,tmp18,tmp19);
		HX_STACK_LINE(316)
		this->__hardware = false;
		HX_STACK_LINE(317)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

Void Graphics_obj::drawGraphicsData( Array< ::openfl::display::IGraphicsData > graphicsData){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawGraphicsData",0x60ea9412,"openfl.display.Graphics.drawGraphicsData","openfl/display/Graphics.hx",322,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_LINE(324)
		::openfl::display::GraphicsSolidFill fill;		HX_STACK_VAR(fill,"fill");
		HX_STACK_LINE(325)
		::openfl::display::GraphicsBitmapFill bitmapFill;		HX_STACK_VAR(bitmapFill,"bitmapFill");
		HX_STACK_LINE(326)
		::openfl::display::GraphicsGradientFill gradientFill;		HX_STACK_VAR(gradientFill,"gradientFill");
		HX_STACK_LINE(327)
		::openfl::display::GraphicsStroke stroke;		HX_STACK_VAR(stroke,"stroke");
		HX_STACK_LINE(328)
		::openfl::display::GraphicsPath path;		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(330)
		{
			HX_STACK_LINE(330)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(330)
			while((true)){
				HX_STACK_LINE(330)
				int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(330)
				int tmp1 = graphicsData->length;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(330)
				bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(330)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(330)
				if ((tmp3)){
					HX_STACK_LINE(330)
					break;
				}
				HX_STACK_LINE(330)
				::openfl::display::IGraphicsData tmp4 = graphicsData->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(330)
				::openfl::display::IGraphicsData graphics = tmp4;		HX_STACK_VAR(graphics,"graphics");
				HX_STACK_LINE(330)
				++(_g);
				HX_STACK_LINE(332)
				::openfl::display::IGraphicsData tmp5 = graphics;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(332)
				bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::display::GraphicsSolidFill >());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(332)
				if ((tmp6)){
					HX_STACK_LINE(334)
					fill = ((::openfl::display::GraphicsSolidFill)(graphics));
					HX_STACK_LINE(335)
					int tmp7 = fill->color;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(335)
					Float tmp8 = fill->alpha;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(335)
					this->beginFill(tmp7,tmp8);
				}
				else{
					HX_STACK_LINE(337)
					::openfl::display::IGraphicsData tmp7 = graphics;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(337)
					bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::openfl::display::GraphicsBitmapFill >());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(337)
					if ((tmp8)){
						HX_STACK_LINE(339)
						bitmapFill = ((::openfl::display::GraphicsBitmapFill)(graphics));
						HX_STACK_LINE(340)
						::openfl::display::BitmapData tmp9 = bitmapFill->bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(340)
						::openfl::geom::Matrix tmp10 = bitmapFill->matrix;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(340)
						bool tmp11 = bitmapFill->repeat;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(340)
						bool tmp12 = bitmapFill->smooth;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(340)
						this->beginBitmapFill(tmp9,tmp10,tmp11,tmp12);
					}
					else{
						HX_STACK_LINE(342)
						::openfl::display::IGraphicsData tmp9 = graphics;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(342)
						bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::openfl::display::GraphicsGradientFill >());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(342)
						if ((tmp10)){
							HX_STACK_LINE(344)
							gradientFill = ((::openfl::display::GraphicsGradientFill)(graphics));
							HX_STACK_LINE(345)
							Dynamic tmp11 = gradientFill->type;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(345)
							::openfl::geom::Matrix tmp12 = gradientFill->matrix;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(345)
							Dynamic tmp13 = gradientFill->spreadMethod;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(345)
							Dynamic tmp14 = gradientFill->interpolationMethod;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(345)
							Float tmp15 = gradientFill->focalPointRatio;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(345)
							this->beginGradientFill(tmp11,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,tmp12,tmp13,tmp14,tmp15);
						}
						else{
							HX_STACK_LINE(347)
							::openfl::display::IGraphicsData tmp11 = graphics;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(347)
							bool tmp12 = ::Std_obj::is(tmp11,hx::ClassOf< ::openfl::display::GraphicsStroke >());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(347)
							if ((tmp12)){
								HX_STACK_LINE(349)
								stroke = ((::openfl::display::GraphicsStroke)(graphics));
								HX_STACK_LINE(351)
								::openfl::display::IGraphicsFill tmp13 = stroke->fill;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(351)
								bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::openfl::display::GraphicsSolidFill >());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(351)
								if ((tmp14)){
									HX_STACK_LINE(353)
									fill = ((::openfl::display::GraphicsSolidFill)(stroke->fill));
									HX_STACK_LINE(354)
									Float tmp15 = stroke->thickness;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(354)
									int tmp16 = fill->color;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(354)
									Float tmp17 = fill->alpha;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(354)
									bool tmp18 = stroke->pixelHinting;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(354)
									Dynamic tmp19 = stroke->scaleMode;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(354)
									Dynamic tmp20 = stroke->caps;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(354)
									Dynamic tmp21 = stroke->joints;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(354)
									Float tmp22 = stroke->miterLimit;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(354)
									this->lineStyle(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21,tmp22);
								}
								else{
									HX_STACK_LINE(358)
									Float tmp15 = stroke->thickness;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(358)
									bool tmp16 = stroke->pixelHinting;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(358)
									Dynamic tmp17 = stroke->scaleMode;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(358)
									Dynamic tmp18 = stroke->caps;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(358)
									Dynamic tmp19 = stroke->joints;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(358)
									Float tmp20 = stroke->miterLimit;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(358)
									this->lineStyle(tmp15,(int)0,(int)1,tmp16,tmp17,tmp18,tmp19,tmp20);
									HX_STACK_LINE(360)
									::openfl::display::IGraphicsFill tmp21 = stroke->fill;		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(360)
									bool tmp22 = ::Std_obj::is(tmp21,hx::ClassOf< ::openfl::display::GraphicsBitmapFill >());		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(360)
									if ((tmp22)){
										HX_STACK_LINE(362)
										bitmapFill = ((::openfl::display::GraphicsBitmapFill)(stroke->fill));
										HX_STACK_LINE(363)
										::openfl::display::BitmapData tmp23 = bitmapFill->bitmapData;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(363)
										::openfl::geom::Matrix tmp24 = bitmapFill->matrix;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(363)
										bool tmp25 = bitmapFill->repeat;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(363)
										bool tmp26 = bitmapFill->smooth;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(363)
										this->lineBitmapStyle(tmp23,tmp24,tmp25,tmp26);
									}
									else{
										HX_STACK_LINE(365)
										::openfl::display::IGraphicsFill tmp23 = stroke->fill;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(365)
										bool tmp24 = ::Std_obj::is(tmp23,hx::ClassOf< ::openfl::display::GraphicsGradientFill >());		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(365)
										if ((tmp24)){
											HX_STACK_LINE(367)
											gradientFill = ((::openfl::display::GraphicsGradientFill)(stroke->fill));
											HX_STACK_LINE(368)
											Dynamic tmp25 = gradientFill->type;		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(368)
											::openfl::geom::Matrix tmp26 = gradientFill->matrix;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(368)
											Dynamic tmp27 = gradientFill->spreadMethod;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(368)
											Dynamic tmp28 = gradientFill->interpolationMethod;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(368)
											Float tmp29 = gradientFill->focalPointRatio;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(368)
											this->lineGradientStyle(tmp25,gradientFill->colors,gradientFill->alphas,gradientFill->ratios,tmp26,tmp27,tmp28,tmp29);
										}
									}
								}
							}
							else{
								HX_STACK_LINE(374)
								::openfl::display::IGraphicsData tmp13 = graphics;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(374)
								bool tmp14 = ::Std_obj::is(tmp13,hx::ClassOf< ::openfl::display::GraphicsPath >());		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(374)
								if ((tmp14)){
									HX_STACK_LINE(376)
									path = ((::openfl::display::GraphicsPath)(graphics));
									HX_STACK_LINE(377)
									Array< int > tmp15 = path->commands;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(377)
									Array< Float > tmp16 = path->data;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(377)
									::String tmp17 = path->winding;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(377)
									this->drawPath(tmp15,tmp16,tmp17);
								}
								else{
									HX_STACK_LINE(379)
									::openfl::display::IGraphicsData tmp15 = graphics;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(379)
									bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::openfl::display::GraphicsEndFill >());		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(379)
									if ((tmp16)){
										HX_STACK_LINE(381)
										this->endFill();
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

Void Graphics_obj::drawPath( Array< int > commands,Array< Float > data,::String __o_winding){
::String winding = __o_winding.Default(HX_HCSTRING("evenOdd","\xb5","\xc6","\x7e","\x06"));
	HX_STACK_FRAME("openfl.display.Graphics","drawPath",0xa0a1f822,"openfl.display.Graphics.drawPath","openfl/display/Graphics.hx",390,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(winding,"winding")
{
		HX_STACK_LINE(392)
		int dataIndex = (int)0;		HX_STACK_VAR(dataIndex,"dataIndex");
		HX_STACK_LINE(394)
		{
			HX_STACK_LINE(394)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(394)
			while((true)){
				HX_STACK_LINE(394)
				int tmp = _g;		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(394)
				int tmp1 = commands->length;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(394)
				bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(394)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(394)
				if ((tmp3)){
					HX_STACK_LINE(394)
					break;
				}
				HX_STACK_LINE(394)
				int tmp4 = commands->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(394)
				Dynamic command = ((Dynamic)(tmp4));		HX_STACK_VAR(command,"command");
				HX_STACK_LINE(394)
				++(_g);
				HX_STACK_LINE(396)
				bool tmp5 = (command != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(396)
				if ((tmp5)){
					HX_STACK_LINE(396)
					Dynamic tmp6 = command;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(396)
					Dynamic _switch_1 = (tmp6);
					if (  ( _switch_1==(int)1)){
						HX_STACK_LINE(400)
						Float tmp7 = data->__get(dataIndex);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(400)
						Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(400)
						int tmp9 = (dataIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(400)
						Float tmp10 = data->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(400)
						Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(400)
						this->moveTo(tmp8,tmp11);
						HX_STACK_LINE(401)
						hx::AddEq(dataIndex,(int)2);
					}
					else if (  ( _switch_1==(int)2)){
						HX_STACK_LINE(405)
						Float tmp7 = data->__get(dataIndex);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(405)
						Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(405)
						int tmp9 = (dataIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(405)
						Float tmp10 = data->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(405)
						Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(405)
						this->lineTo(tmp8,tmp11);
						HX_STACK_LINE(406)
						hx::AddEq(dataIndex,(int)2);
					}
					else if (  ( _switch_1==(int)4)){
						HX_STACK_LINE(410)
						int tmp7 = (dataIndex + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(410)
						Float tmp8 = data->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(410)
						Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(410)
						int tmp10 = (dataIndex + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(410)
						Float tmp11 = data->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(410)
						Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(410)
						this->moveTo(tmp9,tmp12);
						HX_STACK_LINE(410)
						break;
						HX_STACK_LINE(411)
						hx::AddEq(dataIndex,(int)4);
					}
					else if (  ( _switch_1==(int)5)){
						HX_STACK_LINE(415)
						int tmp7 = (dataIndex + (int)2);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(415)
						Float tmp8 = data->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(415)
						Dynamic tmp9 = ((Dynamic)(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(415)
						int tmp10 = (dataIndex + (int)3);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(415)
						Float tmp11 = data->__get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(415)
						Dynamic tmp12 = ((Dynamic)(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(415)
						this->lineTo(tmp9,tmp12);
						HX_STACK_LINE(415)
						break;
						HX_STACK_LINE(416)
						hx::AddEq(dataIndex,(int)4);
					}
					else if (  ( _switch_1==(int)3)){
						HX_STACK_LINE(420)
						Float tmp7 = data->__get(dataIndex);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(420)
						Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(420)
						int tmp9 = (dataIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(420)
						Float tmp10 = data->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(420)
						Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(420)
						int tmp12 = (dataIndex + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(420)
						Float tmp13 = data->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(420)
						Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(420)
						int tmp15 = (dataIndex + (int)3);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(420)
						Float tmp16 = data->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(420)
						Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(420)
						this->curveTo(tmp8,tmp11,tmp14,tmp17);
						HX_STACK_LINE(421)
						hx::AddEq(dataIndex,(int)4);
					}
					else if (  ( _switch_1==(int)6)){
						HX_STACK_LINE(425)
						Float tmp7 = data->__get(dataIndex);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(425)
						Dynamic tmp8 = ((Dynamic)(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(425)
						int tmp9 = (dataIndex + (int)1);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(425)
						Float tmp10 = data->__get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(425)
						Dynamic tmp11 = ((Dynamic)(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(425)
						int tmp12 = (dataIndex + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(425)
						Float tmp13 = data->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(425)
						Dynamic tmp14 = ((Dynamic)(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(425)
						int tmp15 = (dataIndex + (int)3);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(425)
						Float tmp16 = data->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(425)
						Dynamic tmp17 = ((Dynamic)(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(425)
						int tmp18 = (dataIndex + (int)4);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(425)
						Float tmp19 = data->__get(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(425)
						Dynamic tmp20 = ((Dynamic)(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(425)
						int tmp21 = (dataIndex + (int)5);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(425)
						Float tmp22 = data->__get(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(425)
						Dynamic tmp23 = ((Dynamic)(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(425)
						this->cubicCurveTo(tmp8,tmp11,tmp14,tmp17,tmp20,tmp23);
						HX_STACK_LINE(426)
						hx::AddEq(dataIndex,(int)6);
					}
					else  {
					}
;
;
				}
				else{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

Void Graphics_obj::drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRect",0xa1f75fa1,"openfl.display.Graphics.drawRect","openfl/display/Graphics.hx",437,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(439)
		bool tmp = (width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(439)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(439)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(439)
		if ((tmp1)){
			HX_STACK_LINE(439)
			tmp2 = (height <= (int)0);
		}
		else{
			HX_STACK_LINE(439)
			tmp2 = true;
		}
		HX_STACK_LINE(439)
		if ((tmp2)){
			HX_STACK_LINE(439)
			return null();
		}
		HX_STACK_LINE(441)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(441)
		Float tmp4 = this->__strokePadding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(441)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(441)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(441)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(441)
		this->__inflateBounds(tmp5,tmp8);
		HX_STACK_LINE(442)
		Float tmp9 = (x + width);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(442)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(442)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(442)
		Float tmp12 = (y + height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(442)
		Float tmp13 = this->__strokePadding;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(442)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(442)
		this->__inflateBounds(tmp11,tmp14);
		HX_STACK_LINE(444)
		::openfl::_internal::renderer::DrawCommandBuffer tmp15 = this->__commands;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(444)
		Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(444)
		Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(444)
		Float tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(444)
		Float tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(444)
		tmp15->drawRect(tmp16,tmp17,tmp18,tmp19);
		HX_STACK_LINE(446)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

Void Graphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Dynamic ellipseHeight){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRoundRect",0xb24e78f5,"openfl.display.Graphics.drawRoundRect","openfl/display/Graphics.hx",451,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(ellipseWidth,"ellipseWidth")
		HX_STACK_ARG(ellipseHeight,"ellipseHeight")
		HX_STACK_LINE(453)
		bool tmp = (width <= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(453)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(453)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(453)
		if ((tmp1)){
			HX_STACK_LINE(453)
			tmp2 = (height <= (int)0);
		}
		else{
			HX_STACK_LINE(453)
			tmp2 = true;
		}
		HX_STACK_LINE(453)
		if ((tmp2)){
			HX_STACK_LINE(453)
			return null();
		}
		HX_STACK_LINE(455)
		Float tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(455)
		Float tmp4 = this->__strokePadding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(455)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(455)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(455)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(455)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(455)
		this->__inflateBounds(tmp5,tmp8);
		HX_STACK_LINE(456)
		Float tmp9 = (x + width);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(456)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(456)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(456)
		Float tmp12 = (y + height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(456)
		Float tmp13 = this->__strokePadding;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(456)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(456)
		this->__inflateBounds(tmp11,tmp14);
		HX_STACK_LINE(458)
		::openfl::_internal::renderer::DrawCommandBuffer tmp15 = this->__commands;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(458)
		Float tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(458)
		Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(458)
		Float tmp18 = width;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(458)
		Float tmp19 = height;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(458)
		Float tmp20 = ellipseWidth;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(458)
		Dynamic tmp21 = ellipseHeight;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(458)
		tmp15->drawRoundRect(tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
		HX_STACK_LINE(460)
		this->__hardware = false;
		HX_STACK_LINE(461)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

Void Graphics_obj::drawRoundRectComplex( Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius){
{
		HX_STACK_FRAME("openfl.display.Graphics","drawRoundRectComplex",0x06fa4dbb,"openfl.display.Graphics.drawRoundRectComplex","openfl/display/Graphics.hx",468,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(topLeftRadius,"topLeftRadius")
		HX_STACK_ARG(topRightRadius,"topRightRadius")
		HX_STACK_ARG(bottomLeftRadius,"bottomLeftRadius")
		HX_STACK_ARG(bottomRightRadius,"bottomRightRadius")
		HX_STACK_LINE(468)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("Graphics.drawRoundRectComplex","\x45","\xc0","\x68","\x95"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,drawRoundRectComplex,(void))

Void Graphics_obj::drawTiles( ::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,::openfl::display::Shader shader,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl.display.Graphics","drawTiles",0x3ff51868,"openfl.display.Graphics.drawTiles","openfl/display/Graphics.hx",473,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(475)
		int tmp = (int(flags) & int((int)1));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(475)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(475)
		bool useScale = tmp1;		HX_STACK_VAR(useScale,"useScale");
		HX_STACK_LINE(476)
		int tmp2 = (int(flags) & int((int)2));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(476)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(476)
		bool useRotation = tmp3;		HX_STACK_VAR(useRotation,"useRotation");
		HX_STACK_LINE(477)
		int tmp4 = (int(flags) & int((int)4));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(477)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(477)
		bool useRGB = tmp5;		HX_STACK_VAR(useRGB,"useRGB");
		HX_STACK_LINE(478)
		int tmp6 = (int(flags) & int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(478)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(478)
		bool useAlpha = tmp7;		HX_STACK_VAR(useAlpha,"useAlpha");
		HX_STACK_LINE(479)
		int tmp8 = (int(flags) & int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(479)
		bool tmp9 = (tmp8 > (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(479)
		bool useTransform = tmp9;		HX_STACK_VAR(useTransform,"useTransform");
		HX_STACK_LINE(480)
		int tmp10 = (int(flags) & int((int)128));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(480)
		bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(480)
		bool useColorTransform = tmp11;		HX_STACK_VAR(useColorTransform,"useColorTransform");
		HX_STACK_LINE(481)
		int tmp12 = (int(flags) & int((int)32));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(481)
		bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(481)
		bool useRect = tmp13;		HX_STACK_VAR(useRect,"useRect");
		HX_STACK_LINE(482)
		int tmp14 = (int(flags) & int((int)64));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(482)
		bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(482)
		bool useOrigin = tmp15;		HX_STACK_VAR(useOrigin,"useOrigin");
		HX_STACK_LINE(484)
		::openfl::geom::Rectangle tmp16 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(484)
		::openfl::geom::Rectangle rect = tmp16;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(485)
		::openfl::geom::Matrix tmp17 = ::openfl::geom::Matrix_obj::__temp;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(485)
		::openfl::geom::Matrix matrix = tmp17;		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(487)
		int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
		HX_STACK_LINE(488)
		int totalCount = count;		HX_STACK_VAR(totalCount,"totalCount");
		HX_STACK_LINE(490)
		bool tmp18 = (count < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(490)
		if ((tmp18)){
			HX_STACK_LINE(492)
			totalCount = tileData->length;
		}
		HX_STACK_LINE(496)
		bool tmp19 = useTransform;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(496)
		bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(496)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(496)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(496)
		if ((tmp21)){
			HX_STACK_LINE(496)
			tmp22 = useScale;
		}
		else{
			HX_STACK_LINE(496)
			tmp22 = true;
		}
		HX_STACK_LINE(496)
		bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(496)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(496)
		bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(496)
		if ((tmp24)){
			HX_STACK_LINE(496)
			tmp25 = useRotation;
		}
		else{
			HX_STACK_LINE(496)
			tmp25 = true;
		}
		HX_STACK_LINE(496)
		bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(496)
		bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(496)
		bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(496)
		if ((tmp27)){
			HX_STACK_LINE(496)
			tmp28 = useRGB;
		}
		else{
			HX_STACK_LINE(496)
			tmp28 = true;
		}
		HX_STACK_LINE(496)
		bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(496)
		bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(496)
		bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(496)
		if ((tmp30)){
			HX_STACK_LINE(496)
			tmp31 = useAlpha;
		}
		else{
			HX_STACK_LINE(496)
			tmp31 = true;
		}
		HX_STACK_LINE(496)
		bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(496)
		bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(496)
		if ((tmp32)){
			HX_STACK_LINE(496)
			tmp33 = useColorTransform;
		}
		else{
			HX_STACK_LINE(496)
			tmp33 = true;
		}
		HX_STACK_LINE(496)
		if ((tmp33)){
			HX_STACK_LINE(498)
			int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
			HX_STACK_LINE(499)
			int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
			HX_STACK_LINE(500)
			int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
			HX_STACK_LINE(502)
			bool tmp34 = useRect;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(502)
			if ((tmp34)){
				HX_STACK_LINE(502)
				bool tmp35 = useOrigin;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(502)
				int tmp36;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(502)
				if ((tmp35)){
					HX_STACK_LINE(502)
					tmp36 = (int)8;
				}
				else{
					HX_STACK_LINE(502)
					tmp36 = (int)6;
				}
				HX_STACK_LINE(502)
				numValues = tmp36;
			}
			HX_STACK_LINE(503)
			bool tmp35 = useScale;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(503)
			if ((tmp35)){
				HX_STACK_LINE(503)
				scaleIndex = numValues;
				HX_STACK_LINE(503)
				(numValues)++;
			}
			HX_STACK_LINE(504)
			bool tmp36 = useRotation;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(504)
			if ((tmp36)){
				HX_STACK_LINE(504)
				rotationIndex = numValues;
				HX_STACK_LINE(504)
				(numValues)++;
			}
			HX_STACK_LINE(505)
			bool tmp37 = useTransform;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(505)
			if ((tmp37)){
				HX_STACK_LINE(505)
				transformIndex = numValues;
				HX_STACK_LINE(505)
				hx::AddEq(numValues,(int)4);
			}
			HX_STACK_LINE(506)
			bool tmp38 = useRGB;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(506)
			if ((tmp38)){
				HX_STACK_LINE(506)
				hx::AddEq(numValues,(int)3);
			}
			HX_STACK_LINE(507)
			bool tmp39 = useAlpha;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(507)
			if ((tmp39)){
				HX_STACK_LINE(507)
				(numValues)++;
			}
			HX_STACK_LINE(508)
			bool tmp40 = useColorTransform;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(508)
			if ((tmp40)){
				HX_STACK_LINE(508)
				hx::AddEq(numValues,(int)4);
			}
			HX_STACK_LINE(510)
			Float tmp41 = (Float(totalCount) / Float(numValues));		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(510)
			int tmp42 = ::Std_obj::_int(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(510)
			int itemCount = tmp42;		HX_STACK_VAR(itemCount,"itemCount");
			HX_STACK_LINE(511)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(512)
			int cacheID = (int)-1;		HX_STACK_VAR(cacheID,"cacheID");
			HX_STACK_LINE(514)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(514)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(514)
			int id;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(514)
			Float scale;		HX_STACK_VAR(scale,"scale");
			HX_STACK_LINE(514)
			Float rotation;		HX_STACK_VAR(rotation,"rotation");
			HX_STACK_LINE(514)
			Float tileWidth;		HX_STACK_VAR(tileWidth,"tileWidth");
			HX_STACK_LINE(514)
			Float tileHeight;		HX_STACK_VAR(tileHeight,"tileHeight");
			HX_STACK_LINE(514)
			Float originX;		HX_STACK_VAR(originX,"originX");
			HX_STACK_LINE(514)
			Float originY;		HX_STACK_VAR(originY,"originY");
			HX_STACK_LINE(515)
			::openfl::geom::Rectangle tile = null();		HX_STACK_VAR(tile,"tile");
			HX_STACK_LINE(516)
			::openfl::geom::Point tilePoint = null();		HX_STACK_VAR(tilePoint,"tilePoint");
			HX_STACK_LINE(518)
			while((true)){
				HX_STACK_LINE(518)
				bool tmp43 = (index < totalCount);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(518)
				bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(518)
				if ((tmp44)){
					HX_STACK_LINE(518)
					break;
				}
				HX_STACK_LINE(520)
				Float tmp45 = tileData->__get(index);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(520)
				x = tmp45;
				HX_STACK_LINE(521)
				int tmp46 = (index + (int)1);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(521)
				Float tmp47 = tileData->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(521)
				y = tmp47;
				HX_STACK_LINE(522)
				bool tmp48 = useRect;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(522)
				bool tmp49 = !(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(522)
				int tmp50;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(522)
				if ((tmp49)){
					HX_STACK_LINE(522)
					int tmp51 = (index + (int)2);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(522)
					Float tmp52 = tileData->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(522)
					tmp50 = ::Std_obj::_int(tmp52);
				}
				else{
					HX_STACK_LINE(522)
					tmp50 = (int)-1;
				}
				HX_STACK_LINE(522)
				id = tmp50;
				HX_STACK_LINE(523)
				scale = ((Float)1.0);
				HX_STACK_LINE(524)
				rotation = ((Float)0.0);
				HX_STACK_LINE(526)
				bool tmp51 = useScale;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(526)
				if ((tmp51)){
					HX_STACK_LINE(528)
					int tmp52 = (index + scaleIndex);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(528)
					Float tmp53 = tileData->__get(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(528)
					scale = tmp53;
				}
				HX_STACK_LINE(532)
				bool tmp52 = useRotation;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(532)
				if ((tmp52)){
					HX_STACK_LINE(534)
					int tmp53 = (index + rotationIndex);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(534)
					Float tmp54 = tileData->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(534)
					rotation = tmp54;
				}
				HX_STACK_LINE(538)
				bool tmp53 = (id < (int)0);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(538)
				if ((tmp53)){
					HX_STACK_LINE(540)
					tile = null();
				}
				else{
					HX_STACK_LINE(544)
					bool tmp54 = useRect;		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(544)
					bool tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(544)
					bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(544)
					bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(544)
					if ((tmp56)){
						HX_STACK_LINE(544)
						tmp57 = (cacheID != id);
					}
					else{
						HX_STACK_LINE(544)
						tmp57 = false;
					}
					HX_STACK_LINE(544)
					if ((tmp57)){
						HX_STACK_LINE(546)
						cacheID = id;
						HX_STACK_LINE(547)
						::openfl::geom::Rectangle tmp58 = sheet->__tileRects->__get(id).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(547)
						tile = tmp58;
						HX_STACK_LINE(548)
						::openfl::geom::Point tmp59 = sheet->__centerPoints->__get(id).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(548)
						tilePoint = tmp59;
					}
					else{
						HX_STACK_LINE(550)
						bool tmp58 = useRect;		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(550)
						if ((tmp58)){
							HX_STACK_LINE(552)
							tile = sheet->__rectTile;
							HX_STACK_LINE(553)
							int tmp59 = (index + (int)2);		HX_STACK_VAR(tmp59,"tmp59");
							HX_STACK_LINE(553)
							Float tmp60 = tileData->__get(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
							HX_STACK_LINE(553)
							int tmp61 = (index + (int)3);		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(553)
							Float tmp62 = tileData->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(553)
							int tmp63 = (index + (int)4);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(553)
							Float tmp64 = tileData->__get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(553)
							int tmp65 = (index + (int)5);		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(553)
							Float tmp66 = tileData->__get(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(553)
							tile->setTo(tmp60,tmp62,tmp64,tmp66);
							HX_STACK_LINE(554)
							tilePoint = sheet->__point;
							HX_STACK_LINE(556)
							bool tmp67 = useOrigin;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(556)
							if ((tmp67)){
								HX_STACK_LINE(558)
								int tmp68 = (index + (int)6);		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(558)
								Float tmp69 = tileData->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(558)
								Float tmp70 = tile->width;		HX_STACK_VAR(tmp70,"tmp70");
								HX_STACK_LINE(558)
								Float tmp71 = (Float(tmp69) / Float(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
								HX_STACK_LINE(558)
								int tmp72 = (index + (int)7);		HX_STACK_VAR(tmp72,"tmp72");
								HX_STACK_LINE(558)
								Float tmp73 = tileData->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
								HX_STACK_LINE(558)
								Float tmp74 = tile->height;		HX_STACK_VAR(tmp74,"tmp74");
								HX_STACK_LINE(558)
								Float tmp75 = (Float(tmp73) / Float(tmp74));		HX_STACK_VAR(tmp75,"tmp75");
								HX_STACK_LINE(558)
								tilePoint->setTo(tmp71,tmp75);
							}
							else{
								HX_STACK_LINE(562)
								tilePoint->setTo((int)0,(int)0);
							}
						}
					}
				}
				HX_STACK_LINE(570)
				bool tmp54 = (tile != null());		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(570)
				if ((tmp54)){
					HX_STACK_LINE(572)
					bool tmp55 = useTransform;		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(572)
					if ((tmp55)){
						HX_STACK_LINE(574)
						Float tmp56 = tile->width;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(574)
						Float tmp57 = tile->height;		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(574)
						rect->setTo((int)0,(int)0,tmp56,tmp57);
						HX_STACK_LINE(575)
						int tmp58 = (index + transformIndex);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(575)
						Float tmp59 = tileData->__get(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(575)
						int tmp60 = (index + transformIndex);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(575)
						int tmp61 = (tmp60 + (int)1);		HX_STACK_VAR(tmp61,"tmp61");
						HX_STACK_LINE(575)
						Float tmp62 = tileData->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
						HX_STACK_LINE(575)
						int tmp63 = (index + transformIndex);		HX_STACK_VAR(tmp63,"tmp63");
						HX_STACK_LINE(575)
						int tmp64 = (tmp63 + (int)2);		HX_STACK_VAR(tmp64,"tmp64");
						HX_STACK_LINE(575)
						Float tmp65 = tileData->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
						HX_STACK_LINE(575)
						int tmp66 = (index + transformIndex);		HX_STACK_VAR(tmp66,"tmp66");
						HX_STACK_LINE(575)
						int tmp67 = (tmp66 + (int)3);		HX_STACK_VAR(tmp67,"tmp67");
						HX_STACK_LINE(575)
						Float tmp68 = tileData->__get(tmp67);		HX_STACK_VAR(tmp68,"tmp68");
						HX_STACK_LINE(575)
						matrix->setTo(tmp59,tmp62,tmp65,tmp68,(int)0,(int)0);
						HX_STACK_LINE(577)
						Float tmp69 = (tilePoint->x * scale);		HX_STACK_VAR(tmp69,"tmp69");
						HX_STACK_LINE(577)
						originX = tmp69;
						HX_STACK_LINE(578)
						Float tmp70 = (tilePoint->y * scale);		HX_STACK_VAR(tmp70,"tmp70");
						HX_STACK_LINE(578)
						originY = tmp70;
						HX_STACK_LINE(580)
						Float tmp71 = x;		HX_STACK_VAR(tmp71,"tmp71");
						HX_STACK_LINE(580)
						Float tmp72 = (originX * matrix->a);		HX_STACK_VAR(tmp72,"tmp72");
						HX_STACK_LINE(580)
						Float tmp73 = (originY * matrix->c);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(580)
						Float tmp74 = (tmp72 + tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(580)
						Float tmp75 = matrix->tx;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(580)
						Float tmp76 = (tmp74 + tmp75);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(580)
						Float tmp77 = (tmp71 - tmp76);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(580)
						Float tmp78 = y;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(580)
						Float tmp79 = (originX * matrix->b);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(580)
						Float tmp80 = (originY * matrix->d);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(580)
						Float tmp81 = (tmp79 + tmp80);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(580)
						Float tmp82 = matrix->ty;		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(580)
						Float tmp83 = (tmp81 + tmp82);		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(580)
						Float tmp84 = (tmp78 - tmp83);		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(580)
						matrix->translate(tmp77,tmp84);
						HX_STACK_LINE(582)
						::openfl::geom::Rectangle tmp85 = rect;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(582)
						::openfl::geom::Matrix tmp86 = matrix;		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(582)
						rect->__transform(tmp85,tmp86);
						HX_STACK_LINE(584)
						Float tmp87 = rect->x;		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(584)
						Float tmp88 = rect->y;		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(584)
						this->__inflateBounds(tmp87,tmp88);
						HX_STACK_LINE(585)
						Float tmp89 = rect->get_right();		HX_STACK_VAR(tmp89,"tmp89");
						HX_STACK_LINE(585)
						Float tmp90 = rect->get_bottom();		HX_STACK_VAR(tmp90,"tmp90");
						HX_STACK_LINE(585)
						this->__inflateBounds(tmp89,tmp90);
					}
					else{
						HX_STACK_LINE(589)
						Float tmp56 = (tile->width * scale);		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(589)
						tileWidth = tmp56;
						HX_STACK_LINE(590)
						Float tmp57 = (tile->height * scale);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(590)
						tileHeight = tmp57;
						HX_STACK_LINE(592)
						Float tmp58 = (tilePoint->x * tileWidth);		HX_STACK_VAR(tmp58,"tmp58");
						HX_STACK_LINE(592)
						hx::SubEq(x,tmp58);
						HX_STACK_LINE(593)
						Float tmp59 = (tilePoint->y * tileHeight);		HX_STACK_VAR(tmp59,"tmp59");
						HX_STACK_LINE(593)
						hx::SubEq(y,tmp59);
						HX_STACK_LINE(595)
						bool tmp60 = (rotation != (int)0);		HX_STACK_VAR(tmp60,"tmp60");
						HX_STACK_LINE(595)
						if ((tmp60)){
							HX_STACK_LINE(597)
							Float tmp61 = tileWidth;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(597)
							Float tmp62 = tileHeight;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(597)
							rect->setTo((int)0,(int)0,tmp61,tmp62);
							HX_STACK_LINE(599)
							matrix->identity();
							HX_STACK_LINE(600)
							Float tmp63 = rotation;		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(600)
							matrix->rotate(tmp63);
							HX_STACK_LINE(601)
							Float tmp64 = x;		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(601)
							Float tmp65 = y;		HX_STACK_VAR(tmp65,"tmp65");
							HX_STACK_LINE(601)
							matrix->translate(tmp64,tmp65);
							HX_STACK_LINE(603)
							::openfl::geom::Rectangle tmp66 = rect;		HX_STACK_VAR(tmp66,"tmp66");
							HX_STACK_LINE(603)
							::openfl::geom::Matrix tmp67 = matrix;		HX_STACK_VAR(tmp67,"tmp67");
							HX_STACK_LINE(603)
							rect->__transform(tmp66,tmp67);
							HX_STACK_LINE(605)
							Float tmp68 = rect->x;		HX_STACK_VAR(tmp68,"tmp68");
							HX_STACK_LINE(605)
							Float tmp69 = rect->y;		HX_STACK_VAR(tmp69,"tmp69");
							HX_STACK_LINE(605)
							this->__inflateBounds(tmp68,tmp69);
							HX_STACK_LINE(606)
							Float tmp70 = rect->get_right();		HX_STACK_VAR(tmp70,"tmp70");
							HX_STACK_LINE(606)
							Float tmp71 = rect->get_bottom();		HX_STACK_VAR(tmp71,"tmp71");
							HX_STACK_LINE(606)
							this->__inflateBounds(tmp70,tmp71);
						}
						else{
							HX_STACK_LINE(610)
							Float tmp61 = x;		HX_STACK_VAR(tmp61,"tmp61");
							HX_STACK_LINE(610)
							Float tmp62 = y;		HX_STACK_VAR(tmp62,"tmp62");
							HX_STACK_LINE(610)
							this->__inflateBounds(tmp61,tmp62);
							HX_STACK_LINE(611)
							Float tmp63 = (x + tileWidth);		HX_STACK_VAR(tmp63,"tmp63");
							HX_STACK_LINE(611)
							Float tmp64 = (y + tileHeight);		HX_STACK_VAR(tmp64,"tmp64");
							HX_STACK_LINE(611)
							this->__inflateBounds(tmp63,tmp64);
						}
					}
				}
				HX_STACK_LINE(619)
				hx::AddEq(index,numValues);
			}
		}
		else{
			HX_STACK_LINE(625)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(625)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(625)
			int id;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(625)
			::openfl::geom::Rectangle tile;		HX_STACK_VAR(tile,"tile");
			HX_STACK_LINE(625)
			::openfl::geom::Point centerPoint;		HX_STACK_VAR(centerPoint,"centerPoint");
			HX_STACK_LINE(625)
			Float originX;		HX_STACK_VAR(originX,"originX");
			HX_STACK_LINE(625)
			Float originY;		HX_STACK_VAR(originY,"originY");
			HX_STACK_LINE(626)
			::openfl::geom::Rectangle tmp34 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(626)
			::openfl::geom::Rectangle rect1 = tmp34;		HX_STACK_VAR(rect1,"rect1");
			HX_STACK_LINE(627)
			int index = (int)0;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(629)
			while((true)){
				HX_STACK_LINE(629)
				bool tmp35 = (index < totalCount);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(629)
				bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(629)
				if ((tmp36)){
					HX_STACK_LINE(629)
					break;
				}
				HX_STACK_LINE(631)
				int tmp37 = (index)++;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(631)
				Float tmp38 = tileData->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(631)
				x = tmp38;
				HX_STACK_LINE(632)
				int tmp39 = (index)++;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(632)
				Float tmp40 = tileData->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(632)
				y = tmp40;
				HX_STACK_LINE(642)
				bool tmp41 = useRect;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(642)
				bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(642)
				int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(642)
				if ((tmp42)){
					HX_STACK_LINE(642)
					int tmp44 = (index)++;		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(642)
					Float tmp45 = tileData->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(642)
					tmp43 = ::Std_obj::_int(tmp45);
				}
				else{
					HX_STACK_LINE(642)
					tmp43 = (int)-1;
				}
				HX_STACK_LINE(642)
				id = tmp43;
				HX_STACK_LINE(645)
				originX = ((Float)0.0);
				HX_STACK_LINE(646)
				originY = ((Float)0.0);
				HX_STACK_LINE(648)
				bool tmp44 = useRect;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(648)
				if ((tmp44)){
					HX_STACK_LINE(650)
					int tmp45 = (index)++;		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(650)
					Float tmp46 = tileData->__get(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(650)
					int tmp47 = (index)++;		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(650)
					Float tmp48 = tileData->__get(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(650)
					int tmp49 = (index)++;		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(650)
					Float tmp50 = tileData->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(650)
					int tmp51 = (index)++;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(650)
					Float tmp52 = tileData->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(650)
					rect1->setTo(tmp46,tmp48,tmp50,tmp52);
					HX_STACK_LINE(652)
					bool tmp53 = useOrigin;		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(652)
					if ((tmp53)){
						HX_STACK_LINE(654)
						int tmp54 = (index)++;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(654)
						Float tmp55 = tileData->__get(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(654)
						originX = tmp55;
						HX_STACK_LINE(655)
						int tmp56 = (index)++;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(655)
						Float tmp57 = tileData->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(655)
						originY = tmp57;
					}
					HX_STACK_LINE(659)
					Float tmp54 = (x - originX);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(659)
					Float tmp55 = (y - originY);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(659)
					this->__inflateBounds(tmp54,tmp55);
					HX_STACK_LINE(660)
					Float tmp56 = (x - originX);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(660)
					Float tmp57 = rect1->width;		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(660)
					Float tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(660)
					Float tmp59 = (y - originY);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(660)
					Float tmp60 = rect1->height;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(660)
					Float tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(660)
					this->__inflateBounds(tmp58,tmp61);
				}
				else{
					HX_STACK_LINE(664)
					::openfl::geom::Rectangle tmp45 = sheet->__tileRects->__get(id).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(664)
					tile = tmp45;
					HX_STACK_LINE(666)
					bool tmp46 = (tile != null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(666)
					if ((tmp46)){
						HX_STACK_LINE(668)
						::openfl::geom::Point tmp47 = sheet->__centerPoints->__get(id).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(668)
						centerPoint = tmp47;
						HX_STACK_LINE(669)
						Float tmp48 = (centerPoint->x * tile->width);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(669)
						originX = tmp48;
						HX_STACK_LINE(670)
						Float tmp49 = (centerPoint->y * tile->height);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(670)
						originY = tmp49;
						HX_STACK_LINE(672)
						Float tmp50 = (x - originX);		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(672)
						Float tmp51 = (y - originY);		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(672)
						this->__inflateBounds(tmp50,tmp51);
						HX_STACK_LINE(673)
						Float tmp52 = (x - originX);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(673)
						Float tmp53 = tile->width;		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(673)
						Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(673)
						Float tmp55 = (y - originY);		HX_STACK_VAR(tmp55,"tmp55");
						HX_STACK_LINE(673)
						Float tmp56 = tile->height;		HX_STACK_VAR(tmp56,"tmp56");
						HX_STACK_LINE(673)
						Float tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
						HX_STACK_LINE(673)
						this->__inflateBounds(tmp54,tmp57);
					}
				}
			}
		}
		HX_STACK_LINE(682)
		::openfl::_internal::renderer::DrawCommandBuffer tmp34 = this->__commands;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(682)
		::openfl::display::Tilesheet tmp35 = sheet;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(682)
		bool tmp36 = smooth;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(682)
		int tmp37 = flags;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(682)
		::openfl::display::Shader tmp38 = shader;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(682)
		int tmp39 = count;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(682)
		tmp34->drawTiles(tmp35,tileData,tmp36,tmp37,tmp38,tmp39);
		HX_STACK_LINE(684)
		this->set___dirty(true);
		HX_STACK_LINE(685)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawTiles,(void))

Void Graphics_obj::drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,Dynamic __o_culling){
Dynamic culling = __o_culling.Default(1);
	HX_STACK_FRAME("openfl.display.Graphics","drawTriangles",0xae0bf90e,"openfl.display.Graphics.drawTriangles","openfl/display/Graphics.hx",690,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(uvtData,"uvtData")
	HX_STACK_ARG(culling,"culling")
{
		HX_STACK_LINE(692)
		int tmp = vertices->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(692)
		Float tmp1 = (Float(tmp) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(692)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(692)
		int vlen = tmp2;		HX_STACK_VAR(vlen,"vlen");
		HX_STACK_LINE(694)
		bool tmp3 = (culling == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(694)
		if ((tmp3)){
			HX_STACK_LINE(696)
			culling = ((Dynamic)((int)1));
		}
		HX_STACK_LINE(700)
		bool tmp4 = (indices == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(700)
		if ((tmp4)){
			HX_STACK_LINE(702)
			int tmp5 = hx::Mod(vlen,(int)3);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(702)
			bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(702)
			if ((tmp6)){
				HX_STACK_LINE(704)
				::openfl::errors::ArgumentError tmp7 = ::openfl::errors::ArgumentError_obj::__new(HX_HCSTRING("Not enough vertices to close a triangle.","\xfe","\xc6","\x58","\x0d"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(704)
				HX_STACK_DO_THROW(tmp7);
			}
			HX_STACK_LINE(708)
			Array< int > tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(708)
			{
				HX_STACK_LINE(708)
				Array< int > this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(708)
				this1 = Array_obj< int >::__new();
				HX_STACK_LINE(708)
				this1->__SetSizeExact(null());
				HX_STACK_LINE(708)
				tmp7 = this1;
			}
			HX_STACK_LINE(708)
			indices = tmp7;
			HX_STACK_LINE(710)
			{
				HX_STACK_LINE(710)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(710)
				while((true)){
					HX_STACK_LINE(710)
					bool tmp8 = (_g < vlen);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(710)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(710)
					if ((tmp9)){
						HX_STACK_LINE(710)
						break;
					}
					HX_STACK_LINE(710)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(710)
					int i = tmp10;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(712)
					int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(712)
					indices->push(tmp11);
				}
			}
		}
		HX_STACK_LINE(718)
		this->__inflateBounds((int)0,(int)0);
		HX_STACK_LINE(720)
		Float tmp5 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(720)
		Float tmpx = tmp5;		HX_STACK_VAR(tmpx,"tmpx");
		HX_STACK_LINE(721)
		Float tmp6 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(721)
		Float tmpy = tmp6;		HX_STACK_VAR(tmpy,"tmpy");
		HX_STACK_LINE(722)
		Float tmp7 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(722)
		Float maxX = tmp7;		HX_STACK_VAR(maxX,"maxX");
		HX_STACK_LINE(723)
		Float tmp8 = ::Math_obj::NEGATIVE_INFINITY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(723)
		Float maxY = tmp8;		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(725)
		{
			HX_STACK_LINE(725)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(725)
			while((true)){
				HX_STACK_LINE(725)
				bool tmp9 = (_g < vlen);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(725)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(725)
				if ((tmp10)){
					HX_STACK_LINE(725)
					break;
				}
				HX_STACK_LINE(725)
				int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(725)
				int i = tmp11;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(727)
				int tmp12 = (i * (int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(727)
				Float tmp13 = vertices->__get(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(727)
				tmpx = ((Dynamic)(tmp13));
				HX_STACK_LINE(728)
				int tmp14 = (i * (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(728)
				int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(728)
				Float tmp16 = vertices->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(728)
				tmpy = ((Dynamic)(tmp16));
				HX_STACK_LINE(729)
				bool tmp17 = (maxX < tmpx);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(729)
				if ((tmp17)){
					HX_STACK_LINE(729)
					maxX = tmpx;
				}
				HX_STACK_LINE(730)
				bool tmp18 = (maxY < tmpy);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(730)
				if ((tmp18)){
					HX_STACK_LINE(730)
					maxY = tmpy;
				}
			}
		}
		HX_STACK_LINE(734)
		Float tmp9 = maxX;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(734)
		Float tmp10 = maxY;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(734)
		this->__inflateBounds(tmp9,tmp10);
		HX_STACK_LINE(735)
		::openfl::_internal::renderer::DrawCommandBuffer tmp11 = this->__commands;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(735)
		Array< Float > tmp12 = vertices;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(735)
		Array< int > tmp13 = indices;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(735)
		Array< Float > tmp14 = uvtData;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(735)
		Dynamic tmp15 = culling;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(735)
		tmp11->drawTriangles(tmp12,tmp13,tmp14,tmp15);
		HX_STACK_LINE(737)
		this->set___dirty(true);
		HX_STACK_LINE(738)
		this->__visible = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawTriangles,(void))

Void Graphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl.display.Graphics","endFill",0xe14b2dc5,"openfl.display.Graphics.endFill","openfl/display/Graphics.hx",743,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(745)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(745)
		tmp->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

Void Graphics_obj::lineBitmapStyle( ::openfl::display::BitmapData bitmap,::openfl::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl.display.Graphics","lineBitmapStyle",0x0ce183f5,"openfl.display.Graphics.lineBitmapStyle","openfl/display/Graphics.hx",750,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(752)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(752)
		::openfl::display::BitmapData tmp1 = bitmap;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(752)
		bool tmp2 = (matrix != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(752)
		::openfl::geom::Matrix tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(752)
		if ((tmp2)){
			HX_STACK_LINE(752)
			tmp3 = matrix->clone();
		}
		else{
			HX_STACK_LINE(752)
			tmp3 = null();
		}
		HX_STACK_LINE(752)
		bool tmp4 = repeat;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(752)
		bool tmp5 = smooth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(752)
		tmp->lineBitmapStyle(tmp1,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

Void Graphics_obj::lineGradientStyle( Dynamic type,Array< int > colors,Array< Float > alphas,Array< int > ratios,::openfl::geom::Matrix matrix,Dynamic __o_spreadMethod,Dynamic __o_interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Dynamic spreadMethod = __o_spreadMethod.Default(0);
Dynamic interpolationMethod = __o_interpolationMethod.Default(1);
Float focalPointRatio = __o_focalPointRatio.Default(0);
	HX_STACK_FRAME("openfl.display.Graphics","lineGradientStyle",0x2de26914,"openfl.display.Graphics.lineGradientStyle","openfl/display/Graphics.hx",757,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(759)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(759)
		Dynamic tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(759)
		::openfl::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(759)
		Dynamic tmp3 = spreadMethod;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(759)
		Dynamic tmp4 = interpolationMethod;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(759)
		Float tmp5 = focalPointRatio;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(759)
		tmp->lineGradientStyle(tmp1,colors,alphas,ratios,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

Void Graphics_obj::lineStyle( Dynamic thickness,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_pixelHinting,Dynamic __o_scaleMode,Dynamic caps,Dynamic joints,hx::Null< Float >  __o_miterLimit){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
bool pixelHinting = __o_pixelHinting.Default(false);
Dynamic scaleMode = __o_scaleMode.Default(2);
Float miterLimit = __o_miterLimit.Default(3);
	HX_STACK_FRAME("openfl.display.Graphics","lineStyle",0x32cd8e24,"openfl.display.Graphics.lineStyle","openfl/display/Graphics.hx",764,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(thickness,"thickness")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(pixelHinting,"pixelHinting")
	HX_STACK_ARG(scaleMode,"scaleMode")
	HX_STACK_ARG(caps,"caps")
	HX_STACK_ARG(joints,"joints")
	HX_STACK_ARG(miterLimit,"miterLimit")
{
		HX_STACK_LINE(766)
		bool tmp = (thickness != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(766)
		if ((tmp)){
			HX_STACK_LINE(768)
			bool tmp1 = (joints == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(768)
			if ((tmp1)){
				HX_STACK_LINE(770)
				Dynamic tmp2 = thickness;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(770)
				Float tmp3 = this->__strokePadding;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(770)
				bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(770)
				if ((tmp4)){
					HX_STACK_LINE(770)
					this->__strokePadding = thickness;
				}
			}
			else{
				HX_STACK_LINE(774)
				Float tmp2 = (Float(thickness) / Float((int)2));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(774)
				Float tmp3 = this->__strokePadding;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(774)
				bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(774)
				if ((tmp4)){
					HX_STACK_LINE(774)
					Float tmp5 = (Float(thickness) / Float((int)2));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(774)
					this->__strokePadding = tmp5;
				}
			}
		}
		HX_STACK_LINE(780)
		::openfl::_internal::renderer::DrawCommandBuffer tmp1 = this->__commands;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(780)
		Dynamic tmp2 = thickness;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(780)
		int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(780)
		Float tmp4 = alpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(780)
		bool tmp5 = pixelHinting;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(780)
		Dynamic tmp6 = scaleMode;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(780)
		Dynamic tmp7 = caps;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(780)
		Dynamic tmp8 = joints;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(780)
		Float tmp9 = miterLimit;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(780)
		tmp1->lineStyle(tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9);
		HX_STACK_LINE(782)
		bool tmp10 = (thickness != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(782)
		if ((tmp10)){
			HX_STACK_LINE(782)
			this->__visible = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

Void Graphics_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","lineTo",0x25b7b6a8,"openfl.display.Graphics.lineTo","openfl/display/Graphics.hx",787,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(791)
		Float tmp = this->__positionX;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(791)
		Float tmp1 = this->__strokePadding;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(791)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(791)
		Float tmp3 = this->__positionY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(791)
		Float tmp4 = this->__strokePadding;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(791)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(791)
		this->__inflateBounds(tmp2,tmp5);
		HX_STACK_LINE(792)
		Float tmp6 = this->__positionX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(792)
		Float tmp7 = this->__strokePadding;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(792)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(792)
		Float tmp9 = this->__positionY;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(792)
		Float tmp10 = this->__strokePadding;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(792)
		Float tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(792)
		this->__inflateBounds(tmp8,tmp11);
		HX_STACK_LINE(794)
		this->__positionX = x;
		HX_STACK_LINE(795)
		this->__positionY = y;
		HX_STACK_LINE(797)
		Float tmp12 = this->__positionX;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(797)
		Float tmp13 = this->__strokePadding;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(797)
		Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(797)
		Float tmp15 = this->__positionY;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(797)
		Float tmp16 = this->__strokePadding;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(797)
		Float tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(797)
		this->__inflateBounds(tmp14,tmp17);
		HX_STACK_LINE(798)
		Float tmp18 = this->__positionX;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(798)
		Float tmp19 = this->__strokePadding;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(798)
		Float tmp20 = (tmp19 * (int)2);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(798)
		Float tmp21 = (tmp18 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(798)
		Float tmp22 = this->__positionY;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(798)
		Float tmp23 = this->__strokePadding;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(798)
		Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(798)
		this->__inflateBounds(tmp21,tmp24);
		HX_STACK_LINE(800)
		::openfl::_internal::renderer::DrawCommandBuffer tmp25 = this->__commands;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(800)
		Float tmp26 = x;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(800)
		Float tmp27 = y;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(800)
		tmp25->lineTo(tmp26,tmp27);
		HX_STACK_LINE(802)
		this->__hardware = false;
		HX_STACK_LINE(803)
		this->set___dirty(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

Void Graphics_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","moveTo",0x05c44305,"openfl.display.Graphics.moveTo","openfl/display/Graphics.hx",808,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(810)
		this->__positionX = x;
		HX_STACK_LINE(811)
		this->__positionY = y;
		HX_STACK_LINE(813)
		::openfl::_internal::renderer::DrawCommandBuffer tmp = this->__commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(813)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(813)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(813)
		tmp->moveTo(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

Float Graphics_obj::__calculateBezierCubicPoint( Float t,Float p1,Float p2,Float p3,Float p4){
	HX_STACK_FRAME("openfl.display.Graphics","__calculateBezierCubicPoint",0xb6679552,"openfl.display.Graphics.__calculateBezierCubicPoint","openfl/display/Graphics.hx",818,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(p3,"p3")
	HX_STACK_ARG(p4,"p4")
	HX_STACK_LINE(820)
	Float tmp = ((int)1 - t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(820)
	Float iT = tmp;		HX_STACK_VAR(iT,"iT");
	HX_STACK_LINE(821)
	Float tmp1 = p1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(821)
	Float tmp2 = (iT * iT);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(821)
	Float tmp3 = iT;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(821)
	Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(821)
	Float tmp5 = (tmp1 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(821)
	Float tmp6 = ((int)3 * p2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(821)
	Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(821)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(821)
	Float tmp9 = (iT * iT);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(821)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(821)
	Float tmp11 = (tmp5 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(821)
	Float tmp12 = ((int)3 * p3);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(821)
	Float tmp13 = iT;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(821)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(821)
	Float tmp15 = (t * t);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(821)
	Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(821)
	Float tmp17 = (tmp11 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(821)
	Float tmp18 = p4;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(821)
	Float tmp19 = (t * t);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(821)
	Float tmp20 = t;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(821)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(821)
	Float tmp22 = (tmp18 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(821)
	Float tmp23 = (tmp17 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(821)
	return tmp23;
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,__calculateBezierCubicPoint,return )

Float Graphics_obj::__calculateBezierQuadPoint( Float t,Float p1,Float p2,Float p3){
	HX_STACK_FRAME("openfl.display.Graphics","__calculateBezierQuadPoint",0x2414b8dd,"openfl.display.Graphics.__calculateBezierQuadPoint","openfl/display/Graphics.hx",826,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(p1,"p1")
	HX_STACK_ARG(p2,"p2")
	HX_STACK_ARG(p3,"p3")
	HX_STACK_LINE(828)
	Float tmp = ((int)1 - t);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(828)
	Float iT = tmp;		HX_STACK_VAR(iT,"iT");
	HX_STACK_LINE(829)
	Float tmp1 = (iT * iT);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(829)
	Float tmp2 = p1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(829)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(829)
	Float tmp4 = ((int)2 * iT);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(829)
	Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(829)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(829)
	Float tmp7 = p2;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(829)
	Float tmp8 = (tmp6 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(829)
	Float tmp9 = (tmp3 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(829)
	Float tmp10 = (t * t);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(829)
	Float tmp11 = p3;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(829)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(829)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(829)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,__calculateBezierQuadPoint,return )

Void Graphics_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.Graphics","__getBounds",0x7b7eedd2,"openfl.display.Graphics.__getBounds","openfl/display/Graphics.hx",834,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(836)
		::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(836)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(836)
		if ((tmp1)){
			HX_STACK_LINE(836)
			return null();
		}
		HX_STACK_LINE(838)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(838)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(839)
		::openfl::geom::Rectangle tmp3 = this->__bounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(839)
		::openfl::geom::Rectangle tmp4 = bounds;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(839)
		::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(839)
		tmp3->__transform(tmp4,tmp5);
		HX_STACK_LINE(840)
		Float tmp6 = bounds->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(840)
		Float tmp7 = bounds->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(840)
		Float tmp8 = bounds->width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(840)
		Float tmp9 = bounds->height;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(840)
		rect->__expand(tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__getBounds,(void))

bool Graphics_obj::__hitTest( Float x,Float y,bool shapeFlag,::openfl::geom::Matrix matrix){
	HX_STACK_FRAME("openfl.display.Graphics","__hitTest",0xcb8296ac,"openfl.display.Graphics.__hitTest","openfl/display/Graphics.hx",845,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(847)
	::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(847)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(847)
	if ((tmp1)){
		HX_STACK_LINE(847)
		return false;
	}
	HX_STACK_LINE(849)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(849)
	{
		HX_STACK_LINE(849)
		Float tmp3 = (matrix->a * matrix->d);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(849)
		Float tmp4 = (matrix->b * matrix->c);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(849)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(849)
		Float norm = tmp5;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(849)
		bool tmp6 = (norm == (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(849)
		if ((tmp6)){
			HX_STACK_LINE(849)
			Float tmp7 = matrix->tx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(849)
			tmp2 = -(tmp7);
		}
		else{
			HX_STACK_LINE(849)
			Float tmp7 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(849)
			Float tmp8 = matrix->c;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(849)
			Float tmp9 = (matrix->ty - y);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(849)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(849)
			Float tmp11 = matrix->d;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(849)
			Float tmp12 = (x - matrix->tx);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(849)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(849)
			Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(849)
			tmp2 = (tmp7 * tmp14);
		}
	}
	HX_STACK_LINE(849)
	Float px = tmp2;		HX_STACK_VAR(px,"px");
	HX_STACK_LINE(850)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(850)
	{
		HX_STACK_LINE(850)
		Float tmp4 = (matrix->a * matrix->d);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(850)
		Float tmp5 = (matrix->b * matrix->c);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(850)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(850)
		Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
		HX_STACK_LINE(850)
		bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(850)
		if ((tmp7)){
			HX_STACK_LINE(850)
			Float tmp8 = matrix->ty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(850)
			tmp3 = -(tmp8);
		}
		else{
			HX_STACK_LINE(850)
			Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(850)
			Float tmp9 = matrix->a;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(850)
			Float tmp10 = (y - matrix->ty);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(850)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(850)
			Float tmp12 = matrix->b;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(850)
			Float tmp13 = (matrix->tx - x);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(850)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(850)
			Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(850)
			tmp3 = (tmp8 * tmp15);
		}
	}
	HX_STACK_LINE(850)
	Float py = tmp3;		HX_STACK_VAR(py,"py");
	HX_STACK_LINE(852)
	Float tmp4 = px;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(852)
	::openfl::geom::Rectangle tmp5 = this->__bounds;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(852)
	Float tmp6 = tmp5->x;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(852)
	bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(852)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(852)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(852)
	if ((tmp8)){
		HX_STACK_LINE(852)
		Float tmp10 = py;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(852)
		::openfl::geom::Rectangle tmp11 = this->__bounds;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(852)
		::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(852)
		::openfl::geom::Rectangle tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(852)
		Float tmp14 = tmp13->y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(852)
		tmp9 = (tmp10 > tmp14);
	}
	else{
		HX_STACK_LINE(852)
		tmp9 = false;
	}
	HX_STACK_LINE(852)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(852)
	if ((tmp9)){
		HX_STACK_LINE(852)
		::openfl::geom::Rectangle tmp11 = this->__bounds;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(852)
		::openfl::geom::Rectangle tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(852)
		Float tmp13 = px;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(852)
		Float tmp14 = py;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(852)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(852)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(852)
		tmp10 = tmp12->contains(tmp15,tmp16);
	}
	else{
		HX_STACK_LINE(852)
		tmp10 = false;
	}
	HX_STACK_LINE(852)
	if ((tmp10)){
		HX_STACK_LINE(854)
		bool tmp11 = shapeFlag;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(854)
		if ((tmp11)){
			HX_STACK_LINE(859)
			Float tmp12 = px;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(859)
			Float tmp13 = py;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(859)
			bool tmp14 = ::openfl::_internal::renderer::cairo::CairoGraphics_obj::hitTest(hx::ObjectPtr<OBJ_>(this),tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(859)
			return tmp14;
		}
		HX_STACK_LINE(864)
		return true;
	}
	HX_STACK_LINE(868)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,__hitTest,return )

Void Graphics_obj::__inflateBounds( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.Graphics","__inflateBounds",0x7eaeb403,"openfl.display.Graphics.__inflateBounds","openfl/display/Graphics.hx",872,0x8d299ce7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(874)
		::openfl::geom::Rectangle tmp = this->__bounds;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(874)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(874)
		if ((tmp1)){
			HX_STACK_LINE(876)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(x,y,(int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(876)
			this->__bounds = tmp2;
			HX_STACK_LINE(877)
			this->__transformDirty = true;
			HX_STACK_LINE(878)
			return null();
		}
		HX_STACK_LINE(882)
		Float tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(882)
		::openfl::geom::Rectangle tmp3 = this->__bounds;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(882)
		Float tmp4 = tmp3->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(882)
		bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(882)
		if ((tmp5)){
			HX_STACK_LINE(884)
			::openfl::geom::Rectangle tmp6 = this->__bounds;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(884)
			Float tmp7 = tmp6->x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(884)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(884)
			Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(884)
			::openfl::geom::Rectangle tmp10 = this->__bounds;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(884)
			hx::AddEq(tmp10->width,tmp9);
			HX_STACK_LINE(885)
			::openfl::geom::Rectangle tmp11 = this->__bounds;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(885)
			tmp11->x = x;
			HX_STACK_LINE(886)
			this->__transformDirty = true;
		}
		HX_STACK_LINE(890)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(890)
		::openfl::geom::Rectangle tmp7 = this->__bounds;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(890)
		Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(890)
		bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(890)
		if ((tmp9)){
			HX_STACK_LINE(892)
			::openfl::geom::Rectangle tmp10 = this->__bounds;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(892)
			Float tmp11 = tmp10->y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(892)
			Float tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(892)
			Float tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(892)
			::openfl::geom::Rectangle tmp14 = this->__bounds;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(892)
			hx::AddEq(tmp14->height,tmp13);
			HX_STACK_LINE(893)
			::openfl::geom::Rectangle tmp15 = this->__bounds;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(893)
			tmp15->y = y;
			HX_STACK_LINE(894)
			this->__transformDirty = true;
		}
		HX_STACK_LINE(898)
		Float tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(898)
		::openfl::geom::Rectangle tmp11 = this->__bounds;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(898)
		Float tmp12 = tmp11->x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(898)
		::openfl::geom::Rectangle tmp13 = this->__bounds;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(898)
		Float tmp14 = tmp13->width;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(898)
		Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(898)
		bool tmp16 = (tmp10 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(898)
		if ((tmp16)){
			HX_STACK_LINE(900)
			Float tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(900)
			::openfl::geom::Rectangle tmp18 = this->__bounds;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(900)
			Float tmp19 = tmp18->x;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(900)
			Float tmp20 = (tmp17 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(900)
			::openfl::geom::Rectangle tmp21 = this->__bounds;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(900)
			tmp21->width = tmp20;
		}
		HX_STACK_LINE(904)
		Float tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(904)
		::openfl::geom::Rectangle tmp18 = this->__bounds;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(904)
		Float tmp19 = tmp18->y;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(904)
		::openfl::geom::Rectangle tmp20 = this->__bounds;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(904)
		Float tmp21 = tmp20->height;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(904)
		Float tmp22 = (tmp19 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(904)
		bool tmp23 = (tmp17 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(904)
		if ((tmp23)){
			HX_STACK_LINE(906)
			Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(906)
			::openfl::geom::Rectangle tmp25 = this->__bounds;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(906)
			Float tmp26 = tmp25->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(906)
			Float tmp27 = (tmp24 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(906)
			::openfl::geom::Rectangle tmp28 = this->__bounds;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(906)
			tmp28->height = tmp27;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,__inflateBounds,(void))

bool Graphics_obj::set___dirty( bool value){
	HX_STACK_FRAME("openfl.display.Graphics","set___dirty",0x3f74a55c,"openfl.display.Graphics.set___dirty","openfl/display/Graphics.hx",920,0x8d299ce7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(922)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(922)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(922)
	if ((tmp)){
		HX_STACK_LINE(922)
		::openfl::display::DisplayObject tmp2 = this->__owner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(922)
		::openfl::display::DisplayObject tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(922)
		tmp1 = (tmp3 != null());
	}
	else{
		HX_STACK_LINE(922)
		tmp1 = false;
	}
	HX_STACK_LINE(922)
	if ((tmp1)){
		HX_STACK_LINE(924)
		::openfl::display::DisplayObject tmp2 = this->__owner;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(924)
		::openfl::display::DisplayObject _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(924)
		bool tmp3 = _this->__renderDirty;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(924)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(924)
		if ((tmp4)){
			HX_STACK_LINE(924)
			_this->__updateCachedBitmap = true;
			HX_STACK_LINE(924)
			bool tmp5 = (_this->get_filters() != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(924)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(924)
			if ((tmp5)){
				HX_STACK_LINE(924)
				int tmp7 = _this->get_filters()->length;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(924)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(924)
				tmp6 = (tmp8 > (int)0);
			}
			else{
				HX_STACK_LINE(924)
				tmp6 = false;
			}
			HX_STACK_LINE(924)
			_this->__updateFilters = tmp6;
			HX_STACK_LINE(924)
			_this->__renderDirty = true;
			HX_STACK_LINE(924)
			(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
		}
	}
	HX_STACK_LINE(928)
	bool tmp2 = this->__dirty = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(928)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,set___dirty,return )

int Graphics_obj::TILE_SCALE;

int Graphics_obj::TILE_ROTATION;

int Graphics_obj::TILE_RGB;

int Graphics_obj::TILE_ALPHA;

int Graphics_obj::TILE_TRANS_2x2;

int Graphics_obj::TILE_RECT;

int Graphics_obj::TILE_ORIGIN;

int Graphics_obj::TILE_BLEND_NORMAL;

int Graphics_obj::TILE_BLEND_ADD;

int Graphics_obj::TILE_BLEND_MULTIPLY;

int Graphics_obj::TILE_BLEND_SCREEN;

int Graphics_obj::TILE_BLEND_SUBTRACT;

int Graphics_obj::TILE_BLEND_DARKEN;

int Graphics_obj::TILE_BLEND_LIGHTEN;

int Graphics_obj::TILE_BLEND_OVERLAY;

int Graphics_obj::TILE_BLEND_HARDLIGHT;

int Graphics_obj::TILE_BLEND_DIFFERENCE;

int Graphics_obj::TILE_BLEND_INVERT;


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(__hardware,"__hardware");
	HX_MARK_MEMBER_NAME(__bounds,"__bounds");
	HX_MARK_MEMBER_NAME(__commands,"__commands");
	HX_MARK_MEMBER_NAME(__dirty,"__dirty");
	HX_MARK_MEMBER_NAME(__glStack,"__glStack");
	HX_MARK_MEMBER_NAME(__drawPaths,"__drawPaths");
	HX_MARK_MEMBER_NAME(__image,"__image");
	HX_MARK_MEMBER_NAME(__positionX,"__positionX");
	HX_MARK_MEMBER_NAME(__positionY,"__positionY");
	HX_MARK_MEMBER_NAME(__strokePadding,"__strokePadding");
	HX_MARK_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_MARK_MEMBER_NAME(__visible,"__visible");
	HX_MARK_MEMBER_NAME(__cachedTexture,"__cachedTexture");
	HX_MARK_MEMBER_NAME(__owner,"__owner");
	HX_MARK_MEMBER_NAME(__cairo,"__cairo");
	HX_MARK_MEMBER_NAME(__bitmap,"__bitmap");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__hardware,"__hardware");
	HX_VISIT_MEMBER_NAME(__bounds,"__bounds");
	HX_VISIT_MEMBER_NAME(__commands,"__commands");
	HX_VISIT_MEMBER_NAME(__dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(__glStack,"__glStack");
	HX_VISIT_MEMBER_NAME(__drawPaths,"__drawPaths");
	HX_VISIT_MEMBER_NAME(__image,"__image");
	HX_VISIT_MEMBER_NAME(__positionX,"__positionX");
	HX_VISIT_MEMBER_NAME(__positionY,"__positionY");
	HX_VISIT_MEMBER_NAME(__strokePadding,"__strokePadding");
	HX_VISIT_MEMBER_NAME(__transformDirty,"__transformDirty");
	HX_VISIT_MEMBER_NAME(__visible,"__visible");
	HX_VISIT_MEMBER_NAME(__cachedTexture,"__cachedTexture");
	HX_VISIT_MEMBER_NAME(__owner,"__owner");
	HX_VISIT_MEMBER_NAME(__cairo,"__cairo");
	HX_VISIT_MEMBER_NAME(__bitmap,"__bitmap");
}

Dynamic Graphics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return __dirty; }
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		if (HX_FIELD_EQ(inName,"__owner") ) { return __owner; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { return __cairo; }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { return __bounds; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return __bitmap; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__glStack") ) { return __glStack; }
		if (HX_FIELD_EQ(inName,"__visible") ) { return __visible; }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__hardware") ) { return __hardware; }
		if (HX_FIELD_EQ(inName,"__commands") ) { return __commands; }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { return __drawPaths; }
		if (HX_FIELD_EQ(inName,"__positionX") ) { return __positionX; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { return __positionY; }
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"set___dirty") ) { return set___dirty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { return __strokePadding; }
		if (HX_FIELD_EQ(inName,"__cachedTexture") ) { return __cachedTexture; }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"__inflateBounds") ) { return __inflateBounds_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return __transformDirty; }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return drawGraphicsData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { return drawRoundRectComplex_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__calculateBezierQuadPoint") ) { return __calculateBezierQuadPoint_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"__calculateBezierCubicPoint") ) { return __calculateBezierCubicPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { if (inCallProp == hx::paccAlways) return set___dirty(inValue);__dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__owner") ) { __owner=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cairo") ) { __cairo=inValue.Cast< ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bounds") ) { __bounds=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bitmap") ) { __bitmap=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__glStack") ) { __glStack=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__visible") ) { __visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__hardware") ) { __hardware=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__commands") ) { __commands=inValue.Cast< ::openfl::_internal::renderer::DrawCommandBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__drawPaths") ) { __drawPaths=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionX") ) { __positionX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__positionY") ) { __positionY=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__strokePadding") ) { __strokePadding=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__cachedTexture") ) { __cachedTexture=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::RenderTexture >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { __transformDirty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__hardware","\xc8","\x55","\x0c","\x19"));
	outFields->push(HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"));
	outFields->push(HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__glStack","\xc3","\xe7","\x34","\x82"));
	outFields->push(HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3"));
	outFields->push(HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"));
	outFields->push(HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe"));
	outFields->push(HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe"));
	outFields->push(HX_HCSTRING("__strokePadding","\xd9","\x6d","\xda","\xc4"));
	outFields->push(HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"));
	outFields->push(HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"));
	outFields->push(HX_HCSTRING("__cachedTexture","\xf9","\x69","\x14","\x5c"));
	outFields->push(HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2"));
	outFields->push(HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"));
	outFields->push(HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Graphics_obj,__hardware),HX_HCSTRING("__hardware","\xc8","\x55","\x0c","\x19")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Graphics_obj,__bounds),HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e")},
	{hx::fsObject /*::openfl::_internal::renderer::DrawCommandBuffer*/ ,(int)offsetof(Graphics_obj,__commands),HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,__glStack),HX_HCSTRING("__glStack","\xc3","\xe7","\x34","\x82")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Graphics_obj,__drawPaths),HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(Graphics_obj,__image),HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionX),HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__positionY),HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe")},
	{hx::fsFloat,(int)offsetof(Graphics_obj,__strokePadding),HX_HCSTRING("__strokePadding","\xd9","\x6d","\xda","\xc4")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__transformDirty),HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84")},
	{hx::fsBool,(int)offsetof(Graphics_obj,__visible),HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::RenderTexture*/ ,(int)offsetof(Graphics_obj,__cachedTexture),HX_HCSTRING("__cachedTexture","\xf9","\x69","\x14","\x5c")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(Graphics_obj,__owner),HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(Graphics_obj,__cairo),HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Graphics_obj,__bitmap),HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Graphics_obj::TILE_SCALE,HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ROTATION,HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_RGB,HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ALPHA,HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_TRANS_2x2,HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_RECT,HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ORIGIN,HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_NORMAL,HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_ADD,HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_MULTIPLY,HX_HCSTRING("TILE_BLEND_MULTIPLY","\x63","\xb4","\x29","\xf2")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_SCREEN,HX_HCSTRING("TILE_BLEND_SCREEN","\xeb","\xcb","\x55","\x43")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_SUBTRACT,HX_HCSTRING("TILE_BLEND_SUBTRACT","\x53","\x47","\xae","\x4f")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_DARKEN,HX_HCSTRING("TILE_BLEND_DARKEN","\xde","\xc6","\x32","\x1d")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_LIGHTEN,HX_HCSTRING("TILE_BLEND_LIGHTEN","\x40","\x29","\x69","\x97")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_OVERLAY,HX_HCSTRING("TILE_BLEND_OVERLAY","\x11","\x22","\x96","\x26")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_HARDLIGHT,HX_HCSTRING("TILE_BLEND_HARDLIGHT","\xcc","\x92","\x06","\xa5")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_DIFFERENCE,HX_HCSTRING("TILE_BLEND_DIFFERENCE","\xfc","\x9f","\xb6","\x5c")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_INVERT,HX_HCSTRING("TILE_BLEND_INVERT","\x95","\x77","\xd1","\x9b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__hardware","\xc8","\x55","\x0c","\x19"),
	HX_HCSTRING("__bounds","\x95","\xf1","\x4c","\x0e"),
	HX_HCSTRING("__commands","\xe8","\x23","\x8e","\x61"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__glStack","\xc3","\xe7","\x34","\x82"),
	HX_HCSTRING("__drawPaths","\x6a","\x89","\x8e","\xb3"),
	HX_HCSTRING("__image","\x3b","\x78","\xc7","\x27"),
	HX_HCSTRING("__positionX","\x6f","\x3c","\x7e","\xfe"),
	HX_HCSTRING("__positionY","\x70","\x3c","\x7e","\xfe"),
	HX_HCSTRING("__strokePadding","\xd9","\x6d","\xda","\xc4"),
	HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"),
	HX_HCSTRING("__visible","\x52","\xc9","\x72","\x24"),
	HX_HCSTRING("__cachedTexture","\xf9","\x69","\x14","\x5c"),
	HX_HCSTRING("__owner","\x13","\xf1","\xd4","\xa2"),
	HX_HCSTRING("__cairo","\x68","\x89","\x77","\xab"),
	HX_HCSTRING("__bitmap","\x0f","\x7b","\x3b","\x99"),
	HX_HCSTRING("beginBitmapFill","\x9b","\xc9","\x07","\x6a"),
	HX_HCSTRING("beginFill","\x4c","\xad","\x95","\x8c"),
	HX_HCSTRING("beginGradientFill","\x5c","\x3c","\x03","\x2e"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("copyFrom","\xbf","\x0b","\x61","\xc8"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawGraphicsData","\xb9","\xaa","\x6e","\x60"),
	HX_HCSTRING("drawPath","\xc9","\x8f","\xbb","\x5e"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawRoundRectComplex","\xe2","\x43","\x2c","\x11"),
	HX_HCSTRING("drawTiles","\xe1","\x32","\x40","\xd8"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("lineBitmapStyle","\x2e","\x3f","\x21","\x45"),
	HX_HCSTRING("lineGradientStyle","\x8d","\x24","\xf2","\xc1"),
	HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("__calculateBezierCubicPoint","\x0b","\xc2","\xaf","\xf4"),
	HX_HCSTRING("__calculateBezierQuadPoint","\x44","\x46","\xe8","\x5e"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__inflateBounds","\x3c","\x6f","\xee","\xb6"),
	HX_HCSTRING("set___dirty","\x15","\x10","\x96","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_DARKEN,"TILE_BLEND_DARKEN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_LIGHTEN,"TILE_BLEND_LIGHTEN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_OVERLAY,"TILE_BLEND_OVERLAY");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_HARDLIGHT,"TILE_BLEND_HARDLIGHT");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_DIFFERENCE,"TILE_BLEND_DIFFERENCE");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_INVERT,"TILE_BLEND_INVERT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_DARKEN,"TILE_BLEND_DARKEN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_LIGHTEN,"TILE_BLEND_LIGHTEN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_OVERLAY,"TILE_BLEND_OVERLAY");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_HARDLIGHT,"TILE_BLEND_HARDLIGHT");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_DIFFERENCE,"TILE_BLEND_DIFFERENCE");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_INVERT,"TILE_BLEND_INVERT");
};

#endif

hx::Class Graphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62"),
	HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62"),
	HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc"),
	HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a"),
	HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2"),
	HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f"),
	HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94"),
	HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c"),
	HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89"),
	HX_HCSTRING("TILE_BLEND_MULTIPLY","\x63","\xb4","\x29","\xf2"),
	HX_HCSTRING("TILE_BLEND_SCREEN","\xeb","\xcb","\x55","\x43"),
	HX_HCSTRING("TILE_BLEND_SUBTRACT","\x53","\x47","\xae","\x4f"),
	HX_HCSTRING("TILE_BLEND_DARKEN","\xde","\xc6","\x32","\x1d"),
	HX_HCSTRING("TILE_BLEND_LIGHTEN","\x40","\x29","\x69","\x97"),
	HX_HCSTRING("TILE_BLEND_OVERLAY","\x11","\x22","\x96","\x26"),
	HX_HCSTRING("TILE_BLEND_HARDLIGHT","\xcc","\x92","\x06","\xa5"),
	HX_HCSTRING("TILE_BLEND_DIFFERENCE","\xfc","\x9f","\xb6","\x5c"),
	HX_HCSTRING("TILE_BLEND_INVERT","\x95","\x77","\xd1","\x9b"),
	::String(null()) };

void Graphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Graphics","\x35","\x67","\x20","\x87");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics_obj >;
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

void Graphics_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
	TILE_BLEND_MULTIPLY= (int)131072;
	TILE_BLEND_SCREEN= (int)262144;
	TILE_BLEND_SUBTRACT= (int)524288;
	TILE_BLEND_DARKEN= (int)1048576;
	TILE_BLEND_LIGHTEN= (int)2097152;
	TILE_BLEND_OVERLAY= (int)4194304;
	TILE_BLEND_HARDLIGHT= (int)8388608;
	TILE_BLEND_DIFFERENCE= (int)16777216;
	TILE_BLEND_INVERT= (int)33554432;
}

} // end namespace openfl
} // end namespace display
