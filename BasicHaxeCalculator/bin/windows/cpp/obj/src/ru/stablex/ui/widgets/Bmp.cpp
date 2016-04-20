#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_ru_stablex_Assets
#include <ru/stablex/Assets.h>
#endif
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Bmp
#include <ru/stablex/ui/widgets/Bmp.h>
#endif
#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
namespace ru{
namespace stablex{
namespace ui{
namespace widgets{

Void Bmp_obj::__construct()
{
HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","new",0xd995cf7a,"ru.stablex.ui.widgets.Bmp.new","ru/stablex/ui/widgets/Bmp.hx",14,0x3465a876)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(51)
	this->drawPortion = false;
	HX_STACK_LINE(46)
	this->yOffset = (int)0;
	HX_STACK_LINE(44)
	this->xOffset = (int)0;
	HX_STACK_LINE(36)
	this->_bitmapData = null();
	HX_STACK_LINE(29)
	this->autoHeight = true;
	HX_STACK_LINE(27)
	this->autoWidth = true;
	HX_STACK_LINE(23)
	this->keepAspect = false;
	HX_STACK_LINE(21)
	this->stretch = false;
	HX_STACK_LINE(19)
	this->smooth = true;
	HX_STACK_LINE(17)
	this->_src = null();
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//Bmp_obj::~Bmp_obj() { }

Dynamic Bmp_obj::__CreateEmpty() { return  new Bmp_obj; }
hx::ObjectPtr< Bmp_obj > Bmp_obj::__new()
{  hx::ObjectPtr< Bmp_obj > _result_ = new Bmp_obj();
	_result_->__construct();
	return _result_;}

Dynamic Bmp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bmp_obj > _result_ = new Bmp_obj();
	_result_->__construct();
	return _result_;}

Void Bmp_obj::refresh( ){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","refresh",0x21396df5,"ru.stablex.ui.widgets.Bmp.refresh","ru/stablex/ui/widgets/Bmp.hx",89,0x3465a876)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::openfl::display::BitmapData tmp = this->_bitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		::openfl::display::BitmapData bmp = tmp;		HX_STACK_VAR(bmp,"bmp");
		HX_STACK_LINE(92)
		bool tmp1 = (bmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(92)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		if ((tmp1)){
			HX_STACK_LINE(92)
			::String tmp3 = this->_src;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(92)
			::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(92)
			tmp2 = false;
		}
		HX_STACK_LINE(92)
		if ((tmp2)){
			HX_STACK_LINE(93)
			::String tmp3 = this->_src;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			::openfl::display::BitmapData tmp4 = ::ru::stablex::Assets_obj::getBitmapData(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(93)
			bmp = tmp4;
			HX_STACK_LINE(94)
			bool tmp5 = (bmp == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			if ((tmp5)){
				HX_STACK_LINE(95)
				::String tmp6 = this->_src;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(95)
				::String tmp7 = (HX_HCSTRING("Bitmap not found: ","\xca","\x43","\x27","\xba") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(95)
				HX_STACK_DO_THROW(tmp7);
			}
		}
		HX_STACK_LINE(99)
		bool tmp3 = (bmp != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		if ((tmp3)){
			HX_STACK_LINE(102)
			bool tmp4 = this->autoWidth;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			if ((tmp5)){
				HX_STACK_LINE(102)
				tmp6 = this->autoHeight;
			}
			else{
				HX_STACK_LINE(102)
				tmp6 = false;
			}
			HX_STACK_LINE(102)
			bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			if ((tmp6)){
				HX_STACK_LINE(104)
				Float tmp8 = this->_width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(104)
				Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(104)
				bool tmp10 = this->drawPortion;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(104)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(104)
				Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(104)
				bool tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(104)
				if ((tmp13)){
					HX_STACK_LINE(104)
					int tmp14 = bmp->width;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(104)
					int tmp15 = this->xOffset;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(104)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(104)
					int tmp17 = (tmp14 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(104)
					tmp12 = tmp17;
				}
				else{
					HX_STACK_LINE(104)
					tmp12 = bmp->width;
				}
				HX_STACK_LINE(104)
				bool tmp14 = (tmp9 != tmp12);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(104)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(104)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(104)
				bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(104)
				bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(104)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(104)
				if ((tmp19)){
					HX_STACK_LINE(105)
					Float tmp20 = this->_height;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(105)
					Float tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(105)
					Float tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(105)
					bool tmp23 = this->drawPortion;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(105)
					bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(105)
					bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(105)
					Float tmp26;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(105)
					bool tmp27 = tmp25;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(105)
					bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(105)
					if ((tmp28)){
						HX_STACK_LINE(105)
						int tmp29 = bmp->height;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(105)
						int tmp30 = this->yOffset;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(105)
						int tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(105)
						int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(105)
						int tmp33 = (tmp29 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(105)
						int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(105)
						tmp26 = tmp34;
					}
					else{
						HX_STACK_LINE(105)
						tmp26 = bmp->height;
					}
					HX_STACK_LINE(105)
					tmp7 = (tmp22 != tmp26);
				}
				else{
					HX_STACK_LINE(104)
					tmp7 = true;
				}
			}
			else{
				HX_STACK_LINE(102)
				tmp7 = false;
			}
			HX_STACK_LINE(101)
			if ((tmp7)){
				HX_STACK_LINE(108)
				int tmp8 = bmp->width;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(108)
				int tmp9 = bmp->height;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(108)
				this->resize(tmp8,tmp9,null());
			}
			else{
				HX_STACK_LINE(109)
				bool tmp8 = this->autoWidth;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(109)
				bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(109)
				if ((tmp8)){
					HX_STACK_LINE(109)
					Float tmp10 = this->_width;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(109)
					Float tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(109)
					bool tmp12 = this->drawPortion;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(109)
					bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(109)
					Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(109)
					bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(109)
					if ((tmp15)){
						HX_STACK_LINE(109)
						int tmp16 = bmp->width;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(109)
						int tmp17 = this->xOffset;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(109)
						int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(109)
						int tmp19 = (tmp16 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(109)
						tmp14 = tmp19;
					}
					else{
						HX_STACK_LINE(109)
						tmp14 = bmp->width;
					}
					HX_STACK_LINE(109)
					tmp9 = (tmp11 != tmp14);
				}
				else{
					HX_STACK_LINE(109)
					tmp9 = false;
				}
				HX_STACK_LINE(109)
				if ((tmp9)){
					HX_STACK_LINE(110)
					bool tmp10 = this->drawPortion;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(110)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(110)
					if ((tmp10)){
						HX_STACK_LINE(110)
						int tmp12 = bmp->width;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(110)
						int tmp13 = this->xOffset;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(110)
						tmp11 = (tmp12 - tmp13);
					}
					else{
						HX_STACK_LINE(110)
						tmp11 = bmp->width;
					}
					HX_STACK_LINE(110)
					this->set_w(tmp11);
				}
				else{
					HX_STACK_LINE(111)
					bool tmp10 = this->autoHeight;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(111)
					bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(111)
					if ((tmp10)){
						HX_STACK_LINE(111)
						Float tmp12 = this->_height;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(111)
						Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(111)
						bool tmp14 = this->drawPortion;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(111)
						bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(111)
						Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(111)
						bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(111)
						if ((tmp17)){
							HX_STACK_LINE(111)
							int tmp18 = bmp->height;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(111)
							int tmp19 = this->yOffset;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(111)
							int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(111)
							int tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(111)
							tmp16 = tmp21;
						}
						else{
							HX_STACK_LINE(111)
							tmp16 = bmp->height;
						}
						HX_STACK_LINE(111)
						tmp11 = (tmp13 != tmp16);
					}
					else{
						HX_STACK_LINE(111)
						tmp11 = false;
					}
					HX_STACK_LINE(111)
					if ((tmp11)){
						HX_STACK_LINE(112)
						bool tmp12 = this->drawPortion;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(112)
						Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(112)
						if ((tmp12)){
							HX_STACK_LINE(112)
							int tmp14 = bmp->height;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(112)
							int tmp15 = this->yOffset;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(112)
							tmp13 = (tmp14 - tmp15);
						}
						else{
							HX_STACK_LINE(112)
							tmp13 = bmp->height;
						}
						HX_STACK_LINE(112)
						this->set_h(tmp13);
					}
				}
			}
			HX_STACK_LINE(115)
			this->super::refresh();
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(116)
				::openfl::display::Graphics tmp8 = this->get_graphics();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(116)
				tmp8->clear();
				HX_STACK_LINE(116)
				bool tmp9 = this->drawPortion;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(116)
				if ((tmp9)){
					HX_STACK_LINE(116)
					bool tmp10 = this->autoWidth;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(116)
					Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(116)
					if ((tmp10)){
						HX_STACK_LINE(116)
						tmp11 = bmp->width;
					}
					else{
						HX_STACK_LINE(116)
						Float tmp12 = this->_width;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(116)
						int tmp13 = bmp->width;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(116)
						int tmp14 = this->xOffset;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(116)
						int tmp15 = (tmp13 - tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(116)
						bool tmp16 = (tmp12 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(116)
						if ((tmp16)){
							HX_STACK_LINE(116)
							int tmp17 = bmp->width;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(116)
							int tmp18 = this->xOffset;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(116)
							tmp11 = (tmp17 - tmp18);
						}
						else{
							HX_STACK_LINE(116)
							tmp11 = this->_width;
						}
					}
					HX_STACK_LINE(116)
					Float width = tmp11;		HX_STACK_VAR(width,"width");
					HX_STACK_LINE(116)
					bool tmp12 = this->autoHeight;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(116)
					Float tmp13;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(116)
					if ((tmp12)){
						HX_STACK_LINE(116)
						tmp13 = bmp->height;
					}
					else{
						HX_STACK_LINE(116)
						Float tmp14 = this->_height;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(116)
						int tmp15 = bmp->height;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(116)
						int tmp16 = this->yOffset;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(116)
						int tmp17 = (tmp15 - tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(116)
						bool tmp18 = (tmp14 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(116)
						if ((tmp18)){
							HX_STACK_LINE(116)
							int tmp19 = bmp->height;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(116)
							int tmp20 = this->yOffset;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(116)
							tmp13 = (tmp19 - tmp20);
						}
						else{
							HX_STACK_LINE(116)
							Float tmp19 = this->_height;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(116)
							tmp13 = ::Std_obj::_int(tmp19);
						}
					}
					HX_STACK_LINE(116)
					Float height = tmp13;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(116)
					bool tmp14 = (width <= (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(116)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(116)
					bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(116)
					if ((tmp15)){
						HX_STACK_LINE(116)
						tmp16 = (height <= (int)0);
					}
					else{
						HX_STACK_LINE(116)
						tmp16 = true;
					}
					HX_STACK_LINE(116)
					if ((tmp16)){
						HX_STACK_LINE(116)
						Dynamic();
					}
					else{
						HX_STACK_LINE(116)
						::openfl::geom::Matrix tmp17 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(116)
						::openfl::geom::Matrix mx = tmp17;		HX_STACK_VAR(mx,"mx");
						HX_STACK_LINE(116)
						int tmp18 = this->xOffset;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(116)
						int tmp19 = -(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(116)
						int tmp20 = this->yOffset;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(116)
						int tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(116)
						mx->translate(tmp19,tmp21);
						HX_STACK_LINE(116)
						::openfl::display::Graphics tmp22 = this->get_graphics();		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(116)
						::openfl::display::BitmapData tmp23 = bmp;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(116)
						::openfl::geom::Matrix tmp24 = mx;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(116)
						bool tmp25 = this->smooth;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(116)
						tmp22->beginBitmapFill(tmp23,tmp24,false,tmp25);
						HX_STACK_LINE(116)
						::openfl::display::Graphics tmp26 = this->get_graphics();		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(116)
						Float tmp27 = width;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(116)
						Float tmp28 = height;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(116)
						tmp26->drawRect((int)0,(int)0,tmp27,tmp28);
						HX_STACK_LINE(116)
						::openfl::display::Graphics tmp29 = this->get_graphics();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(116)
						tmp29->endFill();
					}
				}
				else{
					HX_STACK_LINE(116)
					bool tmp10 = this->stretch;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(116)
					if ((tmp10)){
						HX_STACK_LINE(116)
						::openfl::geom::Matrix tmp11 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(116)
						::openfl::geom::Matrix mx = tmp11;		HX_STACK_VAR(mx,"mx");
						HX_STACK_LINE(116)
						{
							HX_STACK_LINE(116)
							bool tmp12 = this->stretch;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(116)
							if ((tmp12)){
								HX_STACK_LINE(116)
								bool tmp13 = this->keepAspect;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(116)
								if ((tmp13)){
									HX_STACK_LINE(116)
									bool tmp14 = this->autoWidth;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(116)
									Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(116)
									if ((tmp14)){
										HX_STACK_LINE(116)
										tmp15 = (int)1;
									}
									else{
										HX_STACK_LINE(116)
										Float tmp16 = this->get_w();		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(116)
										int tmp17 = bmp->width;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(116)
										tmp15 = (Float(tmp16) / Float(tmp17));
									}
									HX_STACK_LINE(116)
									bool tmp16 = this->autoHeight;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(116)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(116)
									if ((tmp16)){
										HX_STACK_LINE(116)
										tmp17 = (int)1;
									}
									else{
										HX_STACK_LINE(116)
										Float tmp18 = this->get_h();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(116)
										int tmp19 = bmp->height;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(116)
										tmp17 = (Float(tmp18) / Float(tmp19));
									}
									HX_STACK_LINE(116)
									Float tmp18 = ::Math_obj::min(tmp15,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(116)
									Float scale = tmp18;		HX_STACK_VAR(scale,"scale");
									HX_STACK_LINE(116)
									Float tmp19 = scale;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(116)
									Float tmp20 = scale;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(116)
									mx->scale(tmp19,tmp20);
								}
								else{
									HX_STACK_LINE(116)
									bool tmp14 = this->autoWidth;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(116)
									Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(116)
									if ((tmp14)){
										HX_STACK_LINE(116)
										tmp15 = (int)1;
									}
									else{
										HX_STACK_LINE(116)
										Float tmp16 = this->get_w();		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(116)
										int tmp17 = bmp->width;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(116)
										tmp15 = (Float(tmp16) / Float(tmp17));
									}
									HX_STACK_LINE(116)
									bool tmp16 = this->autoHeight;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(116)
									Float tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(116)
									if ((tmp16)){
										HX_STACK_LINE(116)
										tmp17 = (int)1;
									}
									else{
										HX_STACK_LINE(116)
										Float tmp18 = this->get_h();		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(116)
										int tmp19 = bmp->height;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(116)
										tmp17 = (Float(tmp18) / Float(tmp19));
									}
									HX_STACK_LINE(116)
									mx->scale(tmp15,tmp17);
								}
							}
						}
						HX_STACK_LINE(116)
						::openfl::display::Graphics tmp12 = this->get_graphics();		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(116)
						::openfl::display::BitmapData tmp13 = bmp;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(116)
						::openfl::geom::Matrix tmp14 = mx;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(116)
						bool tmp15 = this->smooth;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(116)
						tmp12->beginBitmapFill(tmp13,tmp14,false,tmp15);
						HX_STACK_LINE(116)
						::openfl::display::Graphics tmp16 = this->get_graphics();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(116)
						Float tmp17 = (bmp->width * mx->a);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(116)
						Float tmp18 = (bmp->height * mx->d);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(116)
						tmp16->drawRect((int)0,(int)0,tmp17,tmp18);
					}
					else{
						HX_STACK_LINE(116)
						::openfl::display::Graphics tmp11 = this->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(116)
						::openfl::display::BitmapData tmp12 = bmp;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(116)
						bool tmp13 = this->smooth;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(116)
						tmp11->beginBitmapFill(tmp12,null(),false,tmp13);
						HX_STACK_LINE(116)
						::openfl::display::Graphics tmp14 = this->get_graphics();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(116)
						int tmp15 = bmp->width;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(116)
						int tmp16 = bmp->height;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(116)
						tmp14->drawRect((int)0,(int)0,tmp15,tmp16);
					}
					HX_STACK_LINE(116)
					::openfl::display::Graphics tmp11 = this->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(116)
					tmp11->endFill();
				}
			}
		}
		else{
			HX_STACK_LINE(118)
			this->super::refresh();
		}
	}
return null();
}


Void Bmp_obj::_draw( ::openfl::display::BitmapData bmp){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","_draw",0x2294c17d,"ru.stablex.ui.widgets.Bmp._draw","ru/stablex/ui/widgets/Bmp.hx",129,0x3465a876)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bmp,"bmp")
		HX_STACK_LINE(130)
		::openfl::display::Graphics tmp = this->get_graphics();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		tmp->clear();
		HX_STACK_LINE(133)
		bool tmp1 = this->drawPortion;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(133)
		if ((tmp1)){
			HX_STACK_LINE(135)
			bool tmp2 = this->autoWidth;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			if ((tmp2)){
				HX_STACK_LINE(136)
				tmp3 = bmp->width;
			}
			else{
				HX_STACK_LINE(137)
				Float tmp4 = this->_width;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(137)
				int tmp5 = bmp->width;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(137)
				int tmp6 = this->xOffset;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(137)
				int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(137)
				bool tmp8 = (tmp4 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(137)
				if ((tmp8)){
					HX_STACK_LINE(137)
					int tmp9 = bmp->width;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(137)
					int tmp10 = this->xOffset;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(137)
					tmp3 = (tmp9 - tmp10);
				}
				else{
					HX_STACK_LINE(137)
					tmp3 = this->_width;
				}
			}
			HX_STACK_LINE(134)
			Float width = tmp3;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(140)
			bool tmp4 = this->autoHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(139)
			Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(140)
			if ((tmp4)){
				HX_STACK_LINE(141)
				tmp5 = bmp->height;
			}
			else{
				HX_STACK_LINE(142)
				Float tmp6 = this->_height;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(142)
				int tmp7 = bmp->height;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(142)
				int tmp8 = this->yOffset;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(142)
				int tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(142)
				bool tmp10 = (tmp6 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(142)
				if ((tmp10)){
					HX_STACK_LINE(142)
					int tmp11 = bmp->height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(142)
					int tmp12 = this->yOffset;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(142)
					tmp5 = (tmp11 - tmp12);
				}
				else{
					HX_STACK_LINE(142)
					Float tmp11 = this->_height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(142)
					tmp5 = ::Std_obj::_int(tmp11);
				}
			}
			HX_STACK_LINE(139)
			Float height = tmp5;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(146)
			bool tmp6 = (width <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(146)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(146)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(146)
			if ((tmp7)){
				HX_STACK_LINE(146)
				tmp8 = (height <= (int)0);
			}
			else{
				HX_STACK_LINE(146)
				tmp8 = true;
			}
			HX_STACK_LINE(146)
			if ((tmp8)){
				HX_STACK_LINE(147)
				return null();
			}
			else{
				HX_STACK_LINE(150)
				::openfl::geom::Matrix tmp9 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(150)
				::openfl::geom::Matrix mx = tmp9;		HX_STACK_VAR(mx,"mx");
				HX_STACK_LINE(154)
				int tmp10 = this->xOffset;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(154)
				int tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(154)
				int tmp12 = this->yOffset;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(154)
				int tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(154)
				mx->translate(tmp11,tmp13);
				HX_STACK_LINE(162)
				::openfl::display::Graphics tmp14 = this->get_graphics();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(162)
				::openfl::display::BitmapData tmp15 = bmp;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(162)
				::openfl::geom::Matrix tmp16 = mx;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(162)
				bool tmp17 = this->smooth;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(162)
				tmp14->beginBitmapFill(tmp15,tmp16,false,tmp17);
				HX_STACK_LINE(163)
				::openfl::display::Graphics tmp18 = this->get_graphics();		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(163)
				Float tmp19 = width;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(163)
				Float tmp20 = height;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(163)
				tmp18->drawRect((int)0,(int)0,tmp19,tmp20);
				HX_STACK_LINE(164)
				::openfl::display::Graphics tmp21 = this->get_graphics();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(164)
				tmp21->endFill();
			}
		}
		else{
			HX_STACK_LINE(169)
			bool tmp2 = this->stretch;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			if ((tmp2)){
				HX_STACK_LINE(170)
				::openfl::geom::Matrix tmp3 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(170)
				::openfl::geom::Matrix mx = tmp3;		HX_STACK_VAR(mx,"mx");
				HX_STACK_LINE(171)
				{
					HX_STACK_LINE(171)
					bool tmp4 = this->stretch;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(171)
					if ((tmp4)){
						HX_STACK_LINE(171)
						bool tmp5 = this->keepAspect;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(171)
						if ((tmp5)){
							HX_STACK_LINE(171)
							bool tmp6 = this->autoWidth;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(171)
							Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(171)
							if ((tmp6)){
								HX_STACK_LINE(171)
								tmp7 = (int)1;
							}
							else{
								HX_STACK_LINE(171)
								Float tmp8 = this->get_w();		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(171)
								int tmp9 = bmp->width;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(171)
								tmp7 = (Float(tmp8) / Float(tmp9));
							}
							HX_STACK_LINE(171)
							bool tmp8 = this->autoHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(171)
							Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(171)
							if ((tmp8)){
								HX_STACK_LINE(171)
								tmp9 = (int)1;
							}
							else{
								HX_STACK_LINE(171)
								Float tmp10 = this->get_h();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(171)
								int tmp11 = bmp->height;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(171)
								tmp9 = (Float(tmp10) / Float(tmp11));
							}
							HX_STACK_LINE(171)
							Float tmp10 = ::Math_obj::min(tmp7,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(171)
							Float scale = tmp10;		HX_STACK_VAR(scale,"scale");
							HX_STACK_LINE(171)
							Float tmp11 = scale;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(171)
							Float tmp12 = scale;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(171)
							mx->scale(tmp11,tmp12);
						}
						else{
							HX_STACK_LINE(171)
							bool tmp6 = this->autoWidth;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(171)
							Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(171)
							if ((tmp6)){
								HX_STACK_LINE(171)
								tmp7 = (int)1;
							}
							else{
								HX_STACK_LINE(171)
								Float tmp8 = this->get_w();		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(171)
								int tmp9 = bmp->width;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(171)
								tmp7 = (Float(tmp8) / Float(tmp9));
							}
							HX_STACK_LINE(171)
							bool tmp8 = this->autoHeight;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(171)
							Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(171)
							if ((tmp8)){
								HX_STACK_LINE(171)
								tmp9 = (int)1;
							}
							else{
								HX_STACK_LINE(171)
								Float tmp10 = this->get_h();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(171)
								int tmp11 = bmp->height;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(171)
								tmp9 = (Float(tmp10) / Float(tmp11));
							}
							HX_STACK_LINE(171)
							mx->scale(tmp7,tmp9);
						}
					}
				}
				HX_STACK_LINE(172)
				::openfl::display::Graphics tmp4 = this->get_graphics();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(172)
				::openfl::display::BitmapData tmp5 = bmp;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(172)
				::openfl::geom::Matrix tmp6 = mx;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(172)
				bool tmp7 = this->smooth;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(172)
				tmp4->beginBitmapFill(tmp5,tmp6,false,tmp7);
				HX_STACK_LINE(173)
				::openfl::display::Graphics tmp8 = this->get_graphics();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				Float tmp9 = (bmp->width * mx->a);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				Float tmp10 = (bmp->height * mx->d);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(173)
				tmp8->drawRect((int)0,(int)0,tmp9,tmp10);
			}
			else{
				HX_STACK_LINE(175)
				::openfl::display::Graphics tmp3 = this->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(175)
				::openfl::display::BitmapData tmp4 = bmp;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(175)
				bool tmp5 = this->smooth;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(175)
				tmp3->beginBitmapFill(tmp4,null(),false,tmp5);
				HX_STACK_LINE(176)
				::openfl::display::Graphics tmp6 = this->get_graphics();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(176)
				int tmp7 = bmp->width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(176)
				int tmp8 = bmp->height;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(176)
				tmp6->drawRect((int)0,(int)0,tmp7,tmp8);
			}
			HX_STACK_LINE(179)
			::openfl::display::Graphics tmp3 = this->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(179)
			tmp3->endFill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Bmp_obj,_draw,(void))

::String Bmp_obj::get_src( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","get_src",0x5ae50395,"ru.stablex.ui.widgets.Bmp.get_src","ru/stablex/ui/widgets/Bmp.hx",193,0x3465a876)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	::String tmp = this->_src;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Bmp_obj,get_src,return )

::String Bmp_obj::set_src( ::String src){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","set_src",0x4de694a1,"ru.stablex.ui.widgets.Bmp.set_src","ru/stablex/ui/widgets/Bmp.hx",202,0x3465a876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(src,"src")
	HX_STACK_LINE(203)
	bool tmp = (src != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	if ((tmp)){
		HX_STACK_LINE(204)
		this->_bitmapData = null();
	}
	HX_STACK_LINE(206)
	::String tmp1 = this->_src = src;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(206)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Bmp_obj,set_src,return )

::openfl::display::BitmapData Bmp_obj::get_bitmapData( ){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","get_bitmapData",0xa1b7c128,"ru.stablex.ui.widgets.Bmp.get_bitmapData","ru/stablex/ui/widgets/Bmp.hx",214,0x3465a876)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	::openfl::display::BitmapData tmp = this->_bitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(215)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Bmp_obj,get_bitmapData,return )

::openfl::display::BitmapData Bmp_obj::set_bitmapData( ::openfl::display::BitmapData bitmapData){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","set_bitmapData",0xc1d7a99c,"ru.stablex.ui.widgets.Bmp.set_bitmapData","ru/stablex/ui/widgets/Bmp.hx",223,0x3465a876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(224)
	bool tmp = (bitmapData != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	if ((tmp)){
		HX_STACK_LINE(225)
		this->_src = null();
	}
	HX_STACK_LINE(227)
	::openfl::display::BitmapData tmp1 = this->_bitmapData = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Bmp_obj,set_bitmapData,return )

bool Bmp_obj::set_autoSize( bool as){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","set_autoSize",0x2522b4f3,"ru.stablex.ui.widgets.Bmp.set_autoSize","ru/stablex/ui/widgets/Bmp.hx",235,0x3465a876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(as,"as")
	HX_STACK_LINE(236)
	bool tmp = this->autoHeight = as;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	bool tmp1 = this->autoWidth = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Bmp_obj,set_autoSize,return )

int Bmp_obj::set_xOffset( int x){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","set_xOffset",0x09a8c668,"ru.stablex.ui.widgets.Bmp.set_xOffset","ru/stablex/ui/widgets/Bmp.hx",244,0x3465a876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(245)
	this->drawPortion = true;
	HX_STACK_LINE(246)
	bool tmp = (x >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(246)
	if ((tmp)){
		HX_STACK_LINE(246)
		tmp1 = x;
	}
	else{
		HX_STACK_LINE(246)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(246)
	int tmp2 = this->xOffset = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(246)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Bmp_obj,set_xOffset,return )

int Bmp_obj::set_yOffset( int y){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","set_yOffset",0x333e3d29,"ru.stablex.ui.widgets.Bmp.set_yOffset","ru/stablex/ui/widgets/Bmp.hx",253,0x3465a876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(254)
	this->drawPortion = true;
	HX_STACK_LINE(255)
	bool tmp = (y >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(255)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(255)
	if ((tmp)){
		HX_STACK_LINE(255)
		tmp1 = y;
	}
	else{
		HX_STACK_LINE(255)
		tmp1 = (int)0;
	}
	HX_STACK_LINE(255)
	int tmp2 = this->yOffset = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(255)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Bmp_obj,set_yOffset,return )

Float Bmp_obj::set_w( Float w){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","set_w",0xa74314f4,"ru.stablex.ui.widgets.Bmp.set_w","ru/stablex/ui/widgets/Bmp.hx",262,0x3465a876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(w,"w")
	HX_STACK_LINE(263)
	this->autoWidth = false;
	HX_STACK_LINE(264)
	Float tmp = w;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(264)
	Float tmp1 = this->super::set_w(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(264)
	return tmp1;
}


Float Bmp_obj::set_widthPt( Float wp){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","set_widthPt",0x27c619e7,"ru.stablex.ui.widgets.Bmp.set_widthPt","ru/stablex/ui/widgets/Bmp.hx",272,0x3465a876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(wp,"wp")
	HX_STACK_LINE(273)
	this->autoWidth = false;
	HX_STACK_LINE(274)
	Float tmp = wp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	Float tmp1 = this->super::set_widthPt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	return tmp1;
}


Float Bmp_obj::set_heightPt( Float hp){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","set_heightPt",0x28f47aee,"ru.stablex.ui.widgets.Bmp.set_heightPt","ru/stablex/ui/widgets/Bmp.hx",282,0x3465a876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hp,"hp")
	HX_STACK_LINE(283)
	this->autoHeight = false;
	HX_STACK_LINE(284)
	Float tmp = hp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(284)
	Float tmp1 = this->super::set_heightPt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(284)
	return tmp1;
}


Float Bmp_obj::set_h( Float h){
	HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","set_h",0xa74314e5,"ru.stablex.ui.widgets.Bmp.set_h","ru/stablex/ui/widgets/Bmp.hx",292,0x3465a876)
	HX_STACK_THIS(this)
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(293)
	this->autoHeight = false;
	HX_STACK_LINE(294)
	Float tmp = h;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	Float tmp1 = this->super::set_h(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	return tmp1;
}


Void Bmp_obj::_applyScalingToMx( ::openfl::geom::Matrix mx,::openfl::display::BitmapData bmp,::ru::stablex::ui::widgets::Bmp widget){
{
		HX_STACK_FRAME("ru.stablex.ui.widgets.Bmp","_applyScalingToMx",0x9e5ebbd8,"ru.stablex.ui.widgets.Bmp._applyScalingToMx","ru/stablex/ui/widgets/Bmp.hx",61,0x3465a876)
		HX_STACK_ARG(mx,"mx")
		HX_STACK_ARG(bmp,"bmp")
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(62)
		bool tmp = widget->stretch;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		if ((tmp)){
			HX_STACK_LINE(64)
			bool tmp1 = widget->keepAspect;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(64)
			if ((tmp1)){
				HX_STACK_LINE(66)
				bool tmp2 = widget->autoWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(66)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(66)
				if ((tmp2)){
					HX_STACK_LINE(66)
					tmp3 = (int)1;
				}
				else{
					HX_STACK_LINE(66)
					Float tmp4 = widget->get_w();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(66)
					int tmp5 = bmp->width;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(66)
					tmp3 = (Float(tmp4) / Float(tmp5));
				}
				HX_STACK_LINE(67)
				bool tmp4 = widget->autoHeight;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(67)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(67)
				if ((tmp4)){
					HX_STACK_LINE(67)
					tmp5 = (int)1;
				}
				else{
					HX_STACK_LINE(67)
					Float tmp6 = widget->get_h();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(67)
					int tmp7 = bmp->height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(67)
					tmp5 = (Float(tmp6) / Float(tmp7));
				}
				HX_STACK_LINE(65)
				Float tmp6 = ::Math_obj::min(tmp3,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(65)
				Float scale = tmp6;		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(69)
				Float tmp7 = scale;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(69)
				Float tmp8 = scale;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(69)
				mx->scale(tmp7,tmp8);
			}
			else{
				HX_STACK_LINE(73)
				bool tmp2 = widget->autoWidth;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(73)
				Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(73)
				if ((tmp2)){
					HX_STACK_LINE(73)
					tmp3 = (int)1;
				}
				else{
					HX_STACK_LINE(73)
					Float tmp4 = widget->get_w();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(73)
					int tmp5 = bmp->width;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(73)
					tmp3 = (Float(tmp4) / Float(tmp5));
				}
				HX_STACK_LINE(74)
				bool tmp4 = widget->autoHeight;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(74)
				Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(74)
				if ((tmp4)){
					HX_STACK_LINE(74)
					tmp5 = (int)1;
				}
				else{
					HX_STACK_LINE(74)
					Float tmp6 = widget->get_h();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(74)
					int tmp7 = bmp->height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(74)
					tmp5 = (Float(tmp6) / Float(tmp7));
				}
				HX_STACK_LINE(72)
				mx->scale(tmp3,tmp5);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Bmp_obj,_applyScalingToMx,(void))


Bmp_obj::Bmp_obj()
{
}

void Bmp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bmp);
	HX_MARK_MEMBER_NAME(_src,"_src");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	HX_MARK_MEMBER_NAME(stretch,"stretch");
	HX_MARK_MEMBER_NAME(keepAspect,"keepAspect");
	HX_MARK_MEMBER_NAME(autoWidth,"autoWidth");
	HX_MARK_MEMBER_NAME(autoHeight,"autoHeight");
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_MARK_MEMBER_NAME(xOffset,"xOffset");
	HX_MARK_MEMBER_NAME(yOffset,"yOffset");
	HX_MARK_MEMBER_NAME(drawPortion,"drawPortion");
	::ru::stablex::ui::widgets::Widget_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bmp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_src,"_src");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	HX_VISIT_MEMBER_NAME(stretch,"stretch");
	HX_VISIT_MEMBER_NAME(keepAspect,"keepAspect");
	HX_VISIT_MEMBER_NAME(autoWidth,"autoWidth");
	HX_VISIT_MEMBER_NAME(autoHeight,"autoHeight");
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_VISIT_MEMBER_NAME(xOffset,"xOffset");
	HX_VISIT_MEMBER_NAME(yOffset,"yOffset");
	HX_VISIT_MEMBER_NAME(drawPortion,"drawPortion");
	::ru::stablex::ui::widgets::Widget_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bmp_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_src") ) { return _src; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_draw") ) { return _draw_dyn(); }
		if (HX_FIELD_EQ(inName,"set_w") ) { return set_w_dyn(); }
		if (HX_FIELD_EQ(inName,"set_h") ) { return set_h_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return smooth; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stretch") ) { return stretch; }
		if (HX_FIELD_EQ(inName,"xOffset") ) { return xOffset; }
		if (HX_FIELD_EQ(inName,"yOffset") ) { return yOffset; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { return autoWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keepAspect") ) { return keepAspect; }
		if (HX_FIELD_EQ(inName,"autoHeight") ) { return autoHeight; }
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return get_bitmapData(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return _bitmapData; }
		if (HX_FIELD_EQ(inName,"drawPortion") ) { return drawPortion; }
		if (HX_FIELD_EQ(inName,"set_xOffset") ) { return set_xOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_yOffset") ) { return set_yOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"set_widthPt") ) { return set_widthPt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_heightPt") ) { return set_heightPt_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_bitmapData") ) { return get_bitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Bmp_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_applyScalingToMx") ) { outValue = _applyScalingToMx_dyn(); return true;  }
	}
	return false;
}

Dynamic Bmp_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_src") ) { _src=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stretch") ) { stretch=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xOffset") ) { if (inCallProp == hx::paccAlways) return set_xOffset(inValue);xOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yOffset") ) { if (inCallProp == hx::paccAlways) return set_yOffset(inValue);yOffset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == hx::paccAlways) return set_autoSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoWidth") ) { autoWidth=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keepAspect") ) { keepAspect=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoHeight") ) { autoHeight=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return set_bitmapData(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawPortion") ) { drawPortion=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bmp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("_src","\xe5","\xeb","\x22","\x3f"));
	outFields->push(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"));
	outFields->push(HX_HCSTRING("stretch","\x05","\x3e","\x53","\xf6"));
	outFields->push(HX_HCSTRING("keepAspect","\x3d","\x8c","\x45","\xd9"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("autoWidth","\x17","\xf4","\x6d","\xa8"));
	outFields->push(HX_HCSTRING("autoHeight","\xb6","\x18","\x17","\x6e"));
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06"));
	outFields->push(HX_HCSTRING("xOffset","\x2b","\xb6","\xe3","\x12"));
	outFields->push(HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"));
	outFields->push(HX_HCSTRING("drawPortion","\x43","\x35","\xf4","\xcc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Bmp_obj,_src),HX_HCSTRING("_src","\xe5","\xeb","\x22","\x3f")},
	{hx::fsBool,(int)offsetof(Bmp_obj,smooth),HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07")},
	{hx::fsBool,(int)offsetof(Bmp_obj,stretch),HX_HCSTRING("stretch","\x05","\x3e","\x53","\xf6")},
	{hx::fsBool,(int)offsetof(Bmp_obj,keepAspect),HX_HCSTRING("keepAspect","\x3d","\x8c","\x45","\xd9")},
	{hx::fsBool,(int)offsetof(Bmp_obj,autoWidth),HX_HCSTRING("autoWidth","\x17","\xf4","\x6d","\xa8")},
	{hx::fsBool,(int)offsetof(Bmp_obj,autoHeight),HX_HCSTRING("autoHeight","\xb6","\x18","\x17","\x6e")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Bmp_obj,_bitmapData),HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06")},
	{hx::fsInt,(int)offsetof(Bmp_obj,xOffset),HX_HCSTRING("xOffset","\x2b","\xb6","\xe3","\x12")},
	{hx::fsInt,(int)offsetof(Bmp_obj,yOffset),HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c")},
	{hx::fsBool,(int)offsetof(Bmp_obj,drawPortion),HX_HCSTRING("drawPortion","\x43","\x35","\xf4","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_src","\xe5","\xeb","\x22","\x3f"),
	HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),
	HX_HCSTRING("stretch","\x05","\x3e","\x53","\xf6"),
	HX_HCSTRING("keepAspect","\x3d","\x8c","\x45","\xd9"),
	HX_HCSTRING("autoWidth","\x17","\xf4","\x6d","\xa8"),
	HX_HCSTRING("autoHeight","\xb6","\x18","\x17","\x6e"),
	HX_HCSTRING("_bitmapData","\xd8","\x82","\x4a","\x06"),
	HX_HCSTRING("xOffset","\x2b","\xb6","\xe3","\x12"),
	HX_HCSTRING("yOffset","\xec","\x2c","\x79","\x3c"),
	HX_HCSTRING("drawPortion","\x43","\x35","\xf4","\xcc"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("_draw","\xe3","\x47","\x81","\xf5"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	HX_HCSTRING("get_bitmapData","\x02","\x3e","\xb6","\xa9"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("set_xOffset","\x4e","\x1d","\x4b","\xa3"),
	HX_HCSTRING("set_yOffset","\x0f","\x94","\xe0","\xcc"),
	HX_HCSTRING("set_w","\x5a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_widthPt","\xcd","\x70","\x68","\xc1"),
	HX_HCSTRING("set_heightPt","\x48","\x2d","\x5e","\xfd"),
	HX_HCSTRING("set_h","\x4b","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bmp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bmp_obj::__mClass,"__mClass");
};

#endif

hx::Class Bmp_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_applyScalingToMx","\x3e","\x43","\xae","\xaf"),
	::String(null()) };

void Bmp_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.ui.widgets.Bmp","\x88","\x4a","\x6e","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bmp_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bmp_obj >;
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
} // end namespace widgets
