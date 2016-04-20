#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
namespace display{

Void Sprite_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Sprite","new",0x3ff0c061,"openfl.display.Sprite.new","openfl/display/Sprite.hx",27,0xd5438ced)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(29)
	super::__construct();
	HX_STACK_LINE(31)
	this->buttonMode = false;
	HX_STACK_LINE(32)
	this->useHandCursor = true;
	HX_STACK_LINE(33)
	::openfl::display::LoaderInfo tmp = ::openfl::display::LoaderInfo_obj::create(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	this->loaderInfo = tmp;
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new()
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct();
	return _result_;}

Void Sprite_obj::startDrag( hx::Null< bool >  __o_lockCenter,::openfl::geom::Rectangle bounds){
bool lockCenter = __o_lockCenter.Default(false);
	HX_STACK_FRAME("openfl.display.Sprite","startDrag",0x20ea0c37,"openfl.display.Sprite.startDrag","openfl/display/Sprite.hx",38,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lockCenter,"lockCenter")
	HX_STACK_ARG(bounds,"bounds")
{
		HX_STACK_LINE(40)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		if ((tmp1)){
			HX_STACK_LINE(42)
			::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(42)
			bool tmp3 = lockCenter;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(42)
			::openfl::geom::Rectangle tmp4 = bounds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			tmp2->__startDrag(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,startDrag,(void))

Void Sprite_obj::stopDrag( ){
{
		HX_STACK_FRAME("openfl.display.Sprite","stopDrag",0x4d02dd75,"openfl.display.Sprite.stopDrag","openfl/display/Sprite.hx",49,0xd5438ced)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		if ((tmp1)){
			HX_STACK_LINE(53)
			::openfl::display::Stage tmp2 = this->stage;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(53)
			tmp2->__stopDrag(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,stopDrag,(void))

::lime::ui::MouseCursor Sprite_obj::__getCursor( ){
	HX_STACK_FRAME("openfl.display.Sprite","__getCursor",0x4a69b9ed,"openfl.display.Sprite.__getCursor","openfl/display/Sprite.hx",60,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	bool tmp = this->buttonMode;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	if ((tmp)){
		HX_STACK_LINE(62)
		tmp1 = this->useHandCursor;
	}
	else{
		HX_STACK_LINE(62)
		tmp1 = false;
	}
	HX_STACK_LINE(62)
	::lime::ui::MouseCursor tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	if ((tmp1)){
		HX_STACK_LINE(62)
		tmp2 = ::lime::ui::MouseCursor_obj::POINTER;
	}
	else{
		HX_STACK_LINE(62)
		tmp2 = null();
	}
	HX_STACK_LINE(62)
	return tmp2;
}


bool Sprite_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	HX_STACK_FRAME("openfl.display.Sprite","__hitTest",0x895417e6,"openfl.display.Sprite.__hitTest","openfl/display/Sprite.hx",67,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_ARG(hitObject,"hitObject")
	HX_STACK_LINE(69)
	::openfl::display::Sprite tmp = this->hitArea;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	if ((tmp1)){
		HX_STACK_LINE(71)
		::openfl::display::Sprite tmp2 = this->hitArea;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		bool tmp3 = tmp2->mouseEnabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		if ((tmp4)){
			HX_STACK_LINE(73)
			::openfl::display::Sprite tmp5 = this->hitArea;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(73)
			tmp5->mouseEnabled = true;
			HX_STACK_LINE(74)
			::openfl::display::Sprite tmp6 = this->hitArea;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(74)
			Float tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(74)
			Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(74)
			bool tmp9 = shapeFlag;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(74)
			::openfl::display::DisplayObject tmp10 = hitObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(74)
			bool tmp11 = tmp6->__hitTest(tmp7,tmp8,tmp9,null(),true,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(74)
			bool hitTest = tmp11;		HX_STACK_VAR(hitTest,"hitTest");
			HX_STACK_LINE(75)
			::openfl::display::Sprite tmp12 = this->hitArea;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(75)
			tmp12->mouseEnabled = false;
			HX_STACK_LINE(77)
			bool tmp13 = hitTest;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(77)
			if ((tmp13)){
				HX_STACK_LINE(78)
				::openfl::display::DisplayObject tmp14 = hitObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(78)
				stack[stack->length] = tmp14;
			}
			HX_STACK_LINE(81)
			bool tmp14 = hitTest;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(81)
			return tmp14;
		}
	}
	else{
		HX_STACK_LINE(86)
		bool tmp2 = hitObject->get_visible();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(86)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(86)
		if ((tmp6)){
			HX_STACK_LINE(86)
			tmp7 = this->__isMask;
		}
		else{
			HX_STACK_LINE(86)
			tmp7 = true;
		}
		HX_STACK_LINE(86)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(86)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(86)
		if ((tmp8)){
			HX_STACK_LINE(86)
			bool tmp10 = interactiveOnly;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(86)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(86)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(86)
			bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(86)
			if ((tmp13)){
				HX_STACK_LINE(86)
				bool tmp14 = this->mouseEnabled;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(86)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(86)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(86)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(86)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(86)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(86)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(86)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(86)
				tmp12 = tmp21;
			}
			else{
				HX_STACK_LINE(86)
				tmp12 = false;
			}
			HX_STACK_LINE(86)
			bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(86)
			if ((tmp14)){
				HX_STACK_LINE(86)
				bool tmp15 = this->mouseChildren;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(86)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(86)
				bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(86)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(86)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(86)
				tmp9 = !(tmp19);
			}
			else{
				HX_STACK_LINE(86)
				tmp9 = false;
			}
		}
		else{
			HX_STACK_LINE(86)
			tmp9 = true;
		}
		HX_STACK_LINE(86)
		if ((tmp9)){
			HX_STACK_LINE(86)
			return false;
		}
		HX_STACK_LINE(87)
		::openfl::display::DisplayObject tmp10 = this->get_mask();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(87)
		bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(87)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(87)
		if ((tmp11)){
			HX_STACK_LINE(87)
			::openfl::display::DisplayObject tmp13 = this->get_mask();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(87)
			::openfl::display::DisplayObject tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(87)
			Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(87)
			Float tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(87)
			Float tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(87)
			Float tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(87)
			bool tmp19 = tmp14->__hitTestMask(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(87)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(87)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(87)
			tmp12 = !(tmp21);
		}
		else{
			HX_STACK_LINE(87)
			tmp12 = false;
		}
		HX_STACK_LINE(87)
		if ((tmp12)){
			HX_STACK_LINE(87)
			return false;
		}
		HX_STACK_LINE(89)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(89)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(89)
		bool tmp15 = shapeFlag;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(89)
		bool tmp16 = interactiveOnly;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(89)
		::openfl::display::DisplayObject tmp17 = hitObject;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(89)
		bool tmp18 = this->super::__hitTest(tmp13,tmp14,tmp15,stack,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(89)
		if ((tmp18)){
			HX_STACK_LINE(91)
			bool tmp19 = interactiveOnly;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(91)
			return tmp19;
		}
		else{
			HX_STACK_LINE(93)
			bool tmp19 = interactiveOnly;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(93)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(93)
			bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(93)
			bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(93)
			bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(93)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(93)
			if ((tmp23)){
				HX_STACK_LINE(93)
				tmp24 = this->mouseEnabled;
			}
			else{
				HX_STACK_LINE(93)
				tmp24 = true;
			}
			HX_STACK_LINE(93)
			bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(93)
			bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(93)
			if ((tmp25)){
				HX_STACK_LINE(93)
				::openfl::display::Graphics tmp27 = this->__graphics;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(93)
				::openfl::display::Graphics tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(93)
				::openfl::display::Graphics tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(93)
				tmp26 = (tmp29 != null());
			}
			else{
				HX_STACK_LINE(93)
				tmp26 = false;
			}
			HX_STACK_LINE(93)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(93)
			if ((tmp26)){
				HX_STACK_LINE(93)
				::openfl::display::Graphics tmp28 = this->__graphics;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(93)
				::openfl::display::Graphics tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(93)
				Float tmp30 = x;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(93)
				Float tmp31 = y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(93)
				bool tmp32 = shapeFlag;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(93)
				::openfl::geom::Matrix tmp33 = this->__getWorldTransform();		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(93)
				::openfl::geom::Matrix tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(93)
				Float tmp35 = tmp30;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(93)
				Float tmp36 = tmp31;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(93)
				bool tmp37 = tmp32;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(93)
				::openfl::geom::Matrix tmp38 = tmp34;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(93)
				tmp27 = tmp29->__hitTest(tmp35,tmp36,tmp37,tmp38);
			}
			else{
				HX_STACK_LINE(93)
				tmp27 = false;
			}
			HX_STACK_LINE(93)
			if ((tmp27)){
				HX_STACK_LINE(95)
				bool tmp28 = (stack != null());		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(95)
				if ((tmp28)){
					HX_STACK_LINE(97)
					::openfl::display::DisplayObject tmp29 = hitObject;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(97)
					stack->push(tmp29);
				}
				HX_STACK_LINE(101)
				return true;
			}
		}
	}
	HX_STACK_LINE(107)
	return false;
}


bool Sprite_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.Sprite","__hitTestMask",0x9c046ff2,"openfl.display.Sprite.__hitTestMask","openfl/display/Sprite.hx",112,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(114)
	Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	bool tmp2 = this->super::__hitTestMask(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	if ((tmp2)){
		HX_STACK_LINE(116)
		return true;
	}
	else{
		HX_STACK_LINE(118)
		::openfl::display::Graphics tmp3 = this->__graphics;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		if ((tmp4)){
			HX_STACK_LINE(118)
			::openfl::display::Graphics tmp6 = this->__graphics;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(118)
			::openfl::display::Graphics tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(118)
			Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(118)
			Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			::openfl::geom::Matrix tmp10 = this->__getWorldTransform();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			::openfl::geom::Matrix tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(118)
			Float tmp12 = tmp8;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(118)
			Float tmp13 = tmp9;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(118)
			::openfl::geom::Matrix tmp14 = tmp11;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(118)
			tmp5 = tmp7->__hitTest(tmp12,tmp13,true,tmp14);
		}
		else{
			HX_STACK_LINE(118)
			tmp5 = false;
		}
		HX_STACK_LINE(118)
		if ((tmp5)){
			HX_STACK_LINE(120)
			return true;
		}
	}
	HX_STACK_LINE(124)
	return false;
}


::openfl::display::Graphics Sprite_obj::get_graphics( ){
	HX_STACK_FRAME("openfl.display.Sprite","get_graphics",0x451134b3,"openfl.display.Sprite.get_graphics","openfl/display/Sprite.hx",136,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	if ((tmp1)){
		HX_STACK_LINE(140)
		::openfl::display::Graphics tmp2 = ::openfl::display::Graphics_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		this->__graphics = tmp2;
		HX_STACK_LINE(141)
		::openfl::display::Graphics tmp3 = this->__graphics;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(141)
		tmp3->__owner = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(145)
	::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_graphics,return )

bool Sprite_obj::get_tabEnabled( ){
	HX_STACK_FRAME("openfl.display.Sprite","get_tabEnabled",0x5c66fc94,"openfl.display.Sprite.get_tabEnabled","openfl/display/Sprite.hx",150,0xd5438ced)
	HX_STACK_THIS(this)
	HX_STACK_LINE(152)
	bool tmp = this->__tabEnabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(152)
	if ((tmp1)){
		HX_STACK_LINE(152)
		tmp2 = this->buttonMode;
	}
	else{
		HX_STACK_LINE(152)
		tmp2 = true;
	}
	HX_STACK_LINE(152)
	return tmp2;
}



Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(buttonMode,"buttonMode");
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(hitArea,"hitArea");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonMode,"buttonMode");
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(hitArea,"hitArea");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hitArea") ) { return hitArea; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return inCallProp == hx::paccAlways ? get_graphics() : graphics; }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return stopDrag_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDrag") ) { return startDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { return buttonMode; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return __getCursor_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return get_graphics_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return useHandCursor; }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return get_tabEnabled_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hitArea") ) { hitArea=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { buttonMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"));
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	outFields->push(HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5"));
	outFields->push(HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Sprite_obj,buttonMode),HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2")},
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(Sprite_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Sprite_obj,hitArea),HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5")},
	{hx::fsBool,(int)offsetof(Sprite_obj,useHandCursor),HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"),
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("hitArea","\x80","\x23","\xfa","\xd5"),
	HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"),
	HX_HCSTRING("startDrag","\x76","\xa5","\x63","\xfb"),
	HX_HCSTRING("stopDrag","\x16","\x71","\x2a","\x95"),
	HX_HCSTRING("__getCursor","\xec","\x60","\x6b","\xe9"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("get_graphics","\xd4","\xac","\x81","\xc7"),
	HX_HCSTRING("get_tabEnabled","\xf5","\x7e","\xfe","\xb5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Sprite","\xef","\xfb","\xd6","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
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
