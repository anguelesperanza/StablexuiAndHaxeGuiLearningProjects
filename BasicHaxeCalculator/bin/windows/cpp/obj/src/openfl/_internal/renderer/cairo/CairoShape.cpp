#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

Void CairoShape_obj::__construct()
{
	return null();
}

//CairoShape_obj::~CairoShape_obj() { }

Dynamic CairoShape_obj::__CreateEmpty() { return  new CairoShape_obj; }
hx::ObjectPtr< CairoShape_obj > CairoShape_obj::__new()
{  hx::ObjectPtr< CairoShape_obj > _result_ = new CairoShape_obj();
	_result_->__construct();
	return _result_;}

Dynamic CairoShape_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CairoShape_obj > _result_ = new CairoShape_obj();
	_result_->__construct();
	return _result_;}

Void CairoShape_obj::render( ::openfl::display::DisplayObject shape,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoShape","render",0x363dce2a,"openfl._internal.renderer.cairo.CairoShape.render","openfl/_internal/renderer/cairo/CairoShape.hx",15,0xfc9b2624)
		HX_STACK_ARG(shape,"shape")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(18)
		bool tmp = shape->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(18)
		if ((tmp3)){
			HX_STACK_LINE(18)
			tmp4 = (shape->__worldAlpha <= (int)0);
		}
		else{
			HX_STACK_LINE(18)
			tmp4 = true;
		}
		HX_STACK_LINE(18)
		if ((tmp4)){
			HX_STACK_LINE(18)
			return null();
		}
		HX_STACK_LINE(20)
		::openfl::display::Graphics graphics = shape->__graphics;		HX_STACK_VAR(graphics,"graphics");
		HX_STACK_LINE(22)
		bool tmp5 = (graphics != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		if ((tmp5)){
			HX_STACK_LINE(24)
			::openfl::display::Graphics tmp6 = graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(24)
			::openfl::_internal::renderer::RenderSession tmp7 = renderSession;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(24)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(tmp6,tmp7);
			HX_STACK_LINE(25)
			::openfl::geom::Rectangle bounds = graphics->__bounds;		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(27)
			bool tmp8 = (graphics->__cairo != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(27)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(27)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(27)
			if ((tmp9)){
				HX_STACK_LINE(27)
				tmp10 = graphics->__visible;
			}
			else{
				HX_STACK_LINE(27)
				tmp10 = false;
			}
			HX_STACK_LINE(27)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(27)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(27)
			if ((tmp11)){
				HX_STACK_LINE(27)
				tmp12 = (bounds != null());
			}
			else{
				HX_STACK_LINE(27)
				tmp12 = false;
			}
			HX_STACK_LINE(27)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(27)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(27)
			if ((tmp13)){
				HX_STACK_LINE(27)
				tmp14 = (bounds->width >= (int)1);
			}
			else{
				HX_STACK_LINE(27)
				tmp14 = false;
			}
			HX_STACK_LINE(27)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(27)
			if ((tmp14)){
				HX_STACK_LINE(27)
				tmp15 = (bounds->height >= (int)1);
			}
			else{
				HX_STACK_LINE(27)
				tmp15 = false;
			}
			HX_STACK_LINE(27)
			if ((tmp15)){
				HX_STACK_LINE(29)
				bool tmp16 = (shape->__mask != null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(29)
				if ((tmp16)){
					HX_STACK_LINE(31)
					::openfl::display::DisplayObject tmp17 = shape->__mask;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(31)
					renderSession->maskManager->pushMask(tmp17);
				}
				HX_STACK_LINE(35)
				::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
				HX_STACK_LINE(36)
				::openfl::geom::Rectangle tmp17 = shape->get_scrollRect();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(36)
				::openfl::geom::Rectangle scrollRect = tmp17;		HX_STACK_VAR(scrollRect,"scrollRect");
				HX_STACK_LINE(37)
				::openfl::geom::Matrix transform = shape->__renderTransform;		HX_STACK_VAR(transform,"transform");
				HX_STACK_LINE(39)
				bool tmp18 = renderSession->roundPixels;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(39)
				if ((tmp18)){
					HX_STACK_LINE(41)
					::lime::math::Matrix3 tmp19 = transform->__toMatrix3();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(41)
					::lime::math::Matrix3 matrix = tmp19;		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(42)
					Float tmp20 = matrix->tx;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(42)
					int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(42)
					matrix->tx = tmp21;
					HX_STACK_LINE(43)
					Float tmp22 = matrix->ty;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(43)
					int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(43)
					matrix->ty = tmp23;
					HX_STACK_LINE(44)
					::lime::math::Matrix3 tmp24 = matrix;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(44)
					cairo->set_matrix(tmp24);
				}
				else{
					HX_STACK_LINE(48)
					::lime::math::Matrix3 tmp19 = transform->__toMatrix3();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(48)
					cairo->set_matrix(tmp19);
				}
				HX_STACK_LINE(52)
				Dynamic tmp19 = graphics->__cairo->get_target();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(52)
				Float tmp20 = graphics->__bounds->x;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(52)
				Float tmp21 = graphics->__bounds->y;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(52)
				cairo->setSourceSurface(tmp19,tmp20,tmp21);
				HX_STACK_LINE(54)
				bool tmp22 = (scrollRect != null());		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(54)
				if ((tmp22)){
					HX_STACK_LINE(56)
					cairo->pushGroup();
					HX_STACK_LINE(57)
					cairo->newPath();
					HX_STACK_LINE(58)
					Float tmp23 = graphics->__bounds->x;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(58)
					Float tmp24 = scrollRect->x;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(58)
					Float tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(58)
					Float tmp26 = graphics->__bounds->y;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(58)
					Float tmp27 = scrollRect->y;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(58)
					Float tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(58)
					Float tmp29 = scrollRect->width;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(58)
					Float tmp30 = scrollRect->height;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(58)
					cairo->rectangle(tmp25,tmp28,tmp29,tmp30);
					HX_STACK_LINE(59)
					cairo->fill();
					HX_STACK_LINE(60)
					cairo->popGroupToSource();
				}
				HX_STACK_LINE(64)
				Float tmp23 = shape->__worldAlpha;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(64)
				cairo->paintWithAlpha(tmp23);
				HX_STACK_LINE(66)
				bool tmp24 = (shape->__mask != null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(66)
				if ((tmp24)){
					HX_STACK_LINE(68)
					renderSession->maskManager->popMask();
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoShape_obj,render,(void))


CairoShape_obj::CairoShape_obj()
{
}

bool CairoShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoShape_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoShape_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

void CairoShape_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoShape","\x1a","\xeb","\xc9","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoShape_obj >;
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
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
