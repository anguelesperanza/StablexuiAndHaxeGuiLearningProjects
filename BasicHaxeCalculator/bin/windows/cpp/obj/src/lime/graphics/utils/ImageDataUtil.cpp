#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils__ImageDataUtil_ImageDataView
#include <lime/graphics/utils/_ImageDataUtil/ImageDataView.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_color__RGBA_RGBA_Impl_
#include <lime/math/color/_RGBA/RGBA_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace graphics{
namespace utils{

Void ImageDataUtil_obj::__construct()
{
	return null();
}

//ImageDataUtil_obj::~ImageDataUtil_obj() { }

Dynamic ImageDataUtil_obj::__CreateEmpty() { return  new ImageDataUtil_obj; }
hx::ObjectPtr< ImageDataUtil_obj > ImageDataUtil_obj::__new()
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ImageDataUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

Void ImageDataUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","colorTransform",0x2c17e9b7,"lime.graphics.utils.ImageDataUtil.colorTransform","lime/graphics/utils/ImageDataUtil.hx",29,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(31)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(32)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		if ((tmp1)){
			HX_STACK_LINE(32)
			return null();
		}
		HX_STACK_LINE(35)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(35)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_color_transform.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(colorMatrix));
		}
		else{
			HX_STACK_LINE(39)
			int tmp3 = image->buffer->format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			int format = tmp3;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(40)
			bool tmp4 = image->buffer->premultiplied;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(40)
			bool premultiplied = tmp4;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(42)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp5 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp5;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(44)
			::lime::utils::ArrayBufferView tmp6 = colorMatrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(44)
			::lime::utils::ArrayBufferView tmp7 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getAlphaTable(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(44)
			::lime::utils::ArrayBufferView alphaTable = tmp7;		HX_STACK_VAR(alphaTable,"alphaTable");
			HX_STACK_LINE(45)
			::lime::utils::ArrayBufferView tmp8 = colorMatrix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(45)
			::lime::utils::ArrayBufferView tmp9 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getRedTable(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(45)
			::lime::utils::ArrayBufferView redTable = tmp9;		HX_STACK_VAR(redTable,"redTable");
			HX_STACK_LINE(46)
			::lime::utils::ArrayBufferView tmp10 = colorMatrix;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(46)
			::lime::utils::ArrayBufferView tmp11 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getGreenTable(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(46)
			::lime::utils::ArrayBufferView greenTable = tmp11;		HX_STACK_VAR(greenTable,"greenTable");
			HX_STACK_LINE(47)
			::lime::utils::ArrayBufferView tmp12 = colorMatrix;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(47)
			::lime::utils::ArrayBufferView tmp13 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getBlueTable(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(47)
			::lime::utils::ArrayBufferView blueTable = tmp13;		HX_STACK_VAR(blueTable,"blueTable");
			HX_STACK_LINE(49)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(49)
			int offset;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(49)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(51)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(51)
				while((true)){
					HX_STACK_LINE(51)
					bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(51)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(51)
					if ((tmp15)){
						HX_STACK_LINE(51)
						break;
					}
					HX_STACK_LINE(51)
					int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(51)
					int y = tmp16;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(53)
					int tmp17 = dataView->offset;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(53)
					int tmp18 = (dataView->stride * y);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(53)
					int tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(53)
					row = tmp19;
					HX_STACK_LINE(55)
					{
						HX_STACK_LINE(55)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(55)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(55)
						while((true)){
							HX_STACK_LINE(55)
							bool tmp20 = (_g3 < _g2);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(55)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(55)
							if ((tmp21)){
								HX_STACK_LINE(55)
								break;
							}
							HX_STACK_LINE(55)
							int tmp22 = (_g3)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(55)
							int x = tmp22;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(57)
							int tmp23 = row;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(57)
							int tmp24 = (x * (int)4);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(57)
							int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(57)
							offset = tmp25;
							HX_STACK_LINE(59)
							{
								HX_STACK_LINE(59)
								int tmp26 = format;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(59)
								switch( (int)(tmp26)){
									case (int)2: {
										HX_STACK_LINE(59)
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(59)
										Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(59)
										int r = tmp28;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(59)
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(59)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(59)
										int g = tmp30;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(59)
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(59)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(59)
										int b = tmp32;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(59)
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(59)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(59)
										int a = tmp34;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(59)
										int tmp35 = (int(r) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(59)
										int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(59)
										int tmp37 = (int(g) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(59)
										int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(59)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(59)
										int tmp40 = (int(b) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(59)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(59)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(59)
										int tmp43 = (int(a) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(59)
										int tmp44 = (int(tmp42) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(59)
										pixel = tmp44;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(59)
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(59)
										Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(59)
										int r = tmp28;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(59)
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(59)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(59)
										int g = tmp30;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(59)
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(59)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(59)
										int b = tmp32;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(59)
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(59)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(59)
										int a = tmp34;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(59)
										int tmp35 = (int(r) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(59)
										int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(59)
										int tmp37 = (int(g) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(59)
										int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(59)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(59)
										int tmp40 = (int(b) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(59)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(59)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(59)
										int tmp43 = (int(a) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(59)
										int tmp44 = (int(tmp42) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(59)
										pixel = tmp44;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(59)
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(59)
										Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(59)
										int r = tmp28;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(59)
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(59)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(59)
										int g = tmp30;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(59)
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(59)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(59)
										int b = tmp32;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(59)
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(59)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(59)
										int a = tmp34;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(59)
										int tmp35 = (int(r) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(59)
										int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(59)
										int tmp37 = (int(g) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(59)
										int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(59)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(59)
										int tmp40 = (int(b) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(59)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(59)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(59)
										int tmp43 = (int(a) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(59)
										int tmp44 = (int(tmp42) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(59)
										pixel = tmp44;
									}
									;break;
								}
								HX_STACK_LINE(59)
								bool tmp27 = premultiplied;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(59)
								if ((tmp27)){
									HX_STACK_LINE(59)
									int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(59)
									bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(59)
									bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(59)
									if ((tmp29)){
										HX_STACK_LINE(59)
										int tmp31 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(59)
										int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(59)
										tmp30 = (tmp32 != (int)255);
									}
									else{
										HX_STACK_LINE(59)
										tmp30 = false;
									}
									HX_STACK_LINE(59)
									if ((tmp30)){
										HX_STACK_LINE(59)
										int tmp31 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(59)
										Float tmp32 = (Float(((Float)255.0)) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(59)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp32;
										HX_STACK_LINE(59)
										{
											HX_STACK_LINE(59)
											Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(59)
											{
												HX_STACK_LINE(59)
												::lime::utils::ArrayBufferView tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(59)
												::lime::utils::ArrayBufferView this1 = tmp34;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(59)
												int tmp35 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(59)
												int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(59)
												Float tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(59)
												Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(59)
												int tmp39 = ::Math_obj::round(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(59)
												int idx = tmp39;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(59)
												int tmp40 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(59)
												tmp33 = (int(tmp40) & int((int)255));
											}
											HX_STACK_LINE(59)
											int r = tmp33;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(59)
											Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(59)
											{
												HX_STACK_LINE(59)
												::lime::utils::ArrayBufferView tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(59)
												::lime::utils::ArrayBufferView this1 = tmp35;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(59)
												int tmp36 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(59)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(59)
												Float tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(59)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(59)
												int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(59)
												int idx = tmp40;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(59)
												int tmp41 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(59)
												tmp34 = (int(tmp41) & int((int)255));
											}
											HX_STACK_LINE(59)
											int g = tmp34;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(59)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(59)
											{
												HX_STACK_LINE(59)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(59)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(59)
												int tmp37 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(59)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(59)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(59)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(59)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(59)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(59)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(59)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(59)
											int b = tmp35;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(59)
											int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(59)
											int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(59)
											int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(59)
											int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(59)
											int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(59)
											int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(59)
											int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(59)
											int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(59)
											int tmp44 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(59)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(59)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(59)
											pixel = tmp46;
										}
									}
								}
							}
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								int tmp26 = ::__hxcpp_memory_get_byte(redTable->buffer->b,(redTable->byteOffset + ((int((int(pixel) >> int((int)24))) & int((int)255)))));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(60)
								Dynamic tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(60)
								int r = tmp27;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(60)
								int tmp28 = ::__hxcpp_memory_get_byte(greenTable->buffer->b,(greenTable->byteOffset + ((int((int(pixel) >> int((int)16))) & int((int)255)))));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(60)
								Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(60)
								int g = tmp29;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(60)
								int tmp30 = ::__hxcpp_memory_get_byte(blueTable->buffer->b,(blueTable->byteOffset + ((int((int(pixel) >> int((int)8))) & int((int)255)))));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(60)
								Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(60)
								int b = tmp31;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(60)
								int tmp32 = ::__hxcpp_memory_get_byte(alphaTable->buffer->b,(alphaTable->byteOffset + ((int(pixel) & int((int)255)))));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(60)
								Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(60)
								int a = tmp33;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(60)
								int tmp34 = (int(r) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(60)
								int tmp35 = (int(tmp34) << int((int)24));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(60)
								int tmp36 = (int(g) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(60)
								int tmp37 = (int(tmp36) << int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(60)
								int tmp38 = (int(tmp35) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(60)
								int tmp39 = (int(b) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(60)
								int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(60)
								int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(60)
								int tmp42 = (int(a) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(60)
								int tmp43 = (int(tmp41) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(60)
								pixel = tmp43;
							}
							HX_STACK_LINE(61)
							{
								HX_STACK_LINE(61)
								bool tmp26 = premultiplied;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(61)
								if ((tmp26)){
									HX_STACK_LINE(61)
									int tmp27 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(61)
									bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(61)
									if ((tmp28)){
										HX_STACK_LINE(61)
										bool tmp29 = (pixel != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(61)
										if ((tmp29)){
											HX_STACK_LINE(61)
											pixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(61)
										int tmp29 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(61)
										bool tmp30 = (tmp29 != (int)255);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(61)
										if ((tmp30)){
											HX_STACK_LINE(61)
											Dynamic tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::lime::utils::ArrayBufferView tmp32 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(61)
												::lime::utils::ArrayBufferView this1 = tmp32;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(61)
												{
													HX_STACK_LINE(61)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(61)
													tmp31 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(61)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp31;
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												int tmp32 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(61)
												int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(61)
												int tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(61)
												int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(61)
												int tmp36 = (int(tmp35) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(61)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(61)
												int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(61)
												int tmp39 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(61)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(61)
												int tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(61)
												int tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(61)
												int tmp43 = (int(tmp42) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(61)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(61)
												int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(61)
												int tmp46 = (int(tmp38) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(61)
												int tmp47 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(61)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(61)
												int tmp49 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(61)
												int tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(61)
												int tmp51 = (int(tmp50) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(61)
												int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(61)
												int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(61)
												int tmp54 = (int(tmp46) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(61)
												int tmp55 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(61)
												int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(61)
												int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(61)
												pixel = tmp57;
											}
										}
									}
								}
								HX_STACK_LINE(61)
								int tmp27 = format;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(61)
								switch( (int)(tmp27)){
									case (int)2: {
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(61)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(61)
												val;
											}
										}
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(61)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(61)
												val;
											}
										}
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(61)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(61)
												val;
											}
										}
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(61)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(61)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(61)
												val;
											}
										}
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(61)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(61)
												val;
											}
										}
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(61)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(61)
												val;
											}
										}
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(61)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(61)
												val;
											}
										}
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(61)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(61)
												val;
											}
										}
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(61)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(61)
												val;
											}
										}
										HX_STACK_LINE(61)
										{
											HX_STACK_LINE(61)
											int tmp28 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(61)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(61)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(61)
											{
												HX_STACK_LINE(61)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(61)
												val;
											}
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(69)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,colorTransform,(void))

Void ImageDataUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyChannel",0xa41162a0,"lime.graphics.utils.ImageDataUtil.copyChannel","lime/graphics/utils/ImageDataUtil.hx",74,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(76)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		switch( (int)(destChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(78)
				tmp = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(79)
				tmp = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(80)
				tmp = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(81)
				tmp = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(76)
		int destIdx = tmp;		HX_STACK_VAR(destIdx,"destIdx");
		HX_STACK_LINE(85)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		switch( (int)(sourceChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(87)
				tmp1 = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(88)
				tmp1 = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(89)
				tmp1 = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(90)
				tmp1 = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(85)
		int srcIdx = tmp1;		HX_STACK_VAR(srcIdx,"srcIdx");
		HX_STACK_LINE(94)
		::lime::utils::ArrayBufferView tmp2 = sourceImage->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(94)
		::lime::utils::ArrayBufferView srcData = tmp2;		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(95)
		::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		::lime::utils::ArrayBufferView destData = tmp3;		HX_STACK_VAR(destData,"destData");
		HX_STACK_LINE(97)
		bool tmp4 = (srcData == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(97)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		if ((tmp5)){
			HX_STACK_LINE(97)
			tmp6 = (destData == null());
		}
		else{
			HX_STACK_LINE(97)
			tmp6 = true;
		}
		HX_STACK_LINE(97)
		if ((tmp6)){
			HX_STACK_LINE(97)
			return null();
		}
		HX_STACK_LINE(100)
		bool tmp7 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(100)
		if ((tmp7)){
			HX_STACK_LINE(100)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),srcIdx,destIdx);
		}
		else{
			HX_STACK_LINE(104)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp8 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView srcView = tmp8;		HX_STACK_VAR(srcView,"srcView");
			HX_STACK_LINE(105)
			::lime::graphics::Image tmp9 = image;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(105)
			::lime::math::Rectangle tmp10 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,srcView->width,srcView->height);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(105)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp11 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(105)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp11;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(107)
			int tmp12 = sourceImage->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(107)
			int srcFormat = tmp12;		HX_STACK_VAR(srcFormat,"srcFormat");
			HX_STACK_LINE(108)
			int tmp13 = image->buffer->format;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(108)
			int destFormat = tmp13;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(109)
			bool tmp14 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(109)
			bool srcPremultiplied = tmp14;		HX_STACK_VAR(srcPremultiplied,"srcPremultiplied");
			HX_STACK_LINE(110)
			bool tmp15 = image->buffer->premultiplied;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(110)
			bool destPremultiplied = tmp15;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(112)
			int srcPosition;		HX_STACK_VAR(srcPosition,"srcPosition");
			HX_STACK_LINE(112)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(112)
			int srcPixel;		HX_STACK_VAR(srcPixel,"srcPixel");
			HX_STACK_LINE(112)
			int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
			HX_STACK_LINE(112)
			int value = (int)0;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(114)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(114)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(114)
				while((true)){
					HX_STACK_LINE(114)
					bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(114)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(114)
					if ((tmp17)){
						HX_STACK_LINE(114)
						break;
					}
					HX_STACK_LINE(114)
					int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(114)
					int y = tmp18;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(116)
					int tmp19 = srcView->offset;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(116)
					int tmp20 = (srcView->stride * y);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(116)
					int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(116)
					srcPosition = tmp21;
					HX_STACK_LINE(117)
					int tmp22 = destView->offset;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(117)
					int tmp23 = (destView->stride * y);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(117)
					int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(117)
					destPosition = tmp24;
					HX_STACK_LINE(119)
					{
						HX_STACK_LINE(119)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(119)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(119)
						while((true)){
							HX_STACK_LINE(119)
							bool tmp25 = (_g3 < _g2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(119)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(119)
							if ((tmp26)){
								HX_STACK_LINE(119)
								break;
							}
							HX_STACK_LINE(119)
							int tmp27 = (_g3)++;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(119)
							int x = tmp27;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								int tmp28 = srcFormat;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(121)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(121)
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(121)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(121)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(121)
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(121)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(121)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(121)
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(121)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(121)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(121)
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(121)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(121)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(121)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(121)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(121)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(121)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(121)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(121)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(121)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(121)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(121)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(121)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(121)
										srcPixel = tmp46;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(121)
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(121)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(121)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(121)
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(121)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(121)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(121)
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(121)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(121)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(121)
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(121)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(121)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(121)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(121)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(121)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(121)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(121)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(121)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(121)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(121)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(121)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(121)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(121)
										srcPixel = tmp46;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(121)
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(121)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(121)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(121)
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(121)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(121)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(121)
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(121)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(121)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(121)
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(121)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(121)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(121)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(121)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(121)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(121)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(121)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(121)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(121)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(121)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(121)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(121)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(121)
										srcPixel = tmp46;
									}
									;break;
								}
								HX_STACK_LINE(121)
								bool tmp29 = srcPremultiplied;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(121)
								if ((tmp29)){
									HX_STACK_LINE(121)
									int tmp30 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(121)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(121)
									bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(121)
									if ((tmp31)){
										HX_STACK_LINE(121)
										int tmp33 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(121)
										int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(121)
										tmp32 = (tmp34 != (int)255);
									}
									else{
										HX_STACK_LINE(121)
										tmp32 = false;
									}
									HX_STACK_LINE(121)
									if ((tmp32)){
										HX_STACK_LINE(121)
										int tmp33 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(121)
										Float tmp34 = (Float(((Float)255.0)) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(121)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp34;
										HX_STACK_LINE(121)
										{
											HX_STACK_LINE(121)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(121)
											{
												HX_STACK_LINE(121)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(121)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(121)
												int tmp37 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(121)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(121)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(121)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(121)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(121)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(121)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(121)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(121)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(121)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(121)
											{
												HX_STACK_LINE(121)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(121)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(121)
												int tmp38 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(121)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(121)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(121)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(121)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(121)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(121)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(121)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(121)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(121)
											Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(121)
											{
												HX_STACK_LINE(121)
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(121)
												::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(121)
												int tmp39 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(121)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(121)
												Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(121)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(121)
												int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(121)
												int idx = tmp43;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(121)
												int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(121)
												tmp37 = (int(tmp44) & int((int)255));
											}
											HX_STACK_LINE(121)
											int b = tmp37;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(121)
											int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(121)
											int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(121)
											int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(121)
											int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(121)
											int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(121)
											int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(121)
											int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(121)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(121)
											int tmp46 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(121)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(121)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(121)
											srcPixel = tmp48;
										}
									}
								}
							}
							HX_STACK_LINE(122)
							{
								HX_STACK_LINE(122)
								int tmp28 = destFormat;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(122)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(122)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(122)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(122)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(122)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(122)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(122)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(122)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(122)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(122)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(122)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(122)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(122)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(122)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(122)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(122)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(122)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(122)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(122)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(122)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(122)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(122)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(122)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(122)
										destPixel = tmp46;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(122)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(122)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(122)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(122)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(122)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(122)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(122)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(122)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(122)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(122)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(122)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(122)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(122)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(122)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(122)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(122)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(122)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(122)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(122)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(122)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(122)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(122)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(122)
										destPixel = tmp46;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(122)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(122)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(122)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(122)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(122)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(122)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(122)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(122)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(122)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(122)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(122)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(122)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(122)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(122)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(122)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(122)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(122)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(122)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(122)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(122)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(122)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(122)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(122)
										destPixel = tmp46;
									}
									;break;
								}
								HX_STACK_LINE(122)
								bool tmp29 = destPremultiplied;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(122)
								if ((tmp29)){
									HX_STACK_LINE(122)
									int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(122)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(122)
									bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(122)
									if ((tmp31)){
										HX_STACK_LINE(122)
										int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(122)
										int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(122)
										tmp32 = (tmp34 != (int)255);
									}
									else{
										HX_STACK_LINE(122)
										tmp32 = false;
									}
									HX_STACK_LINE(122)
									if ((tmp32)){
										HX_STACK_LINE(122)
										int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(122)
										Float tmp34 = (Float(((Float)255.0)) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(122)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp34;
										HX_STACK_LINE(122)
										{
											HX_STACK_LINE(122)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(122)
											{
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(122)
												int tmp37 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(122)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(122)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(122)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(122)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(122)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(122)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(122)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(122)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(122)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(122)
											{
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(122)
												int tmp38 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(122)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(122)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(122)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(122)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(122)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(122)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(122)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(122)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(122)
											Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(122)
											{
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(122)
												int tmp39 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(122)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(122)
												Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(122)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(122)
												int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(122)
												int idx = tmp43;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(122)
												int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(122)
												tmp37 = (int(tmp44) & int((int)255));
											}
											HX_STACK_LINE(122)
											int b = tmp37;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(122)
											int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(122)
											int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(122)
											int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(122)
											int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(122)
											int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(122)
											int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(122)
											int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(122)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(122)
											int tmp46 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(122)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(122)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(122)
											destPixel = tmp48;
										}
									}
								}
							}
							HX_STACK_LINE(124)
							int tmp28 = srcIdx;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(124)
							switch( (int)(tmp28)){
								case (int)0: {
									HX_STACK_LINE(126)
									int tmp29 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(126)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(126)
									value = tmp30;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(127)
									int tmp29 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(127)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(127)
									value = tmp30;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(128)
									int tmp29 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(128)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(128)
									value = tmp30;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(129)
									int tmp29 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(129)
									value = tmp29;
								}
								;break;
							}
							HX_STACK_LINE(133)
							int tmp29 = destIdx;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(133)
							switch( (int)(tmp29)){
								case (int)0: {
									HX_STACK_LINE(135)
									{
										HX_STACK_LINE(135)
										int tmp30 = (int(value) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(135)
										int tmp31 = (int(tmp30) << int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(135)
										int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(135)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(135)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(135)
										int tmp35 = (int(tmp34) << int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(135)
										int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(135)
										int tmp37 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(135)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(135)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(135)
										int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(135)
										int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(135)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(135)
										int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(135)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(135)
										destPixel = tmp44;
									}
									HX_STACK_LINE(135)
									value;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(136)
									{
										HX_STACK_LINE(136)
										int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(136)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(136)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(136)
										int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(136)
										int tmp34 = (int(value) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(136)
										int tmp35 = (int(tmp34) << int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(136)
										int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(136)
										int tmp37 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(136)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(136)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(136)
										int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(136)
										int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(136)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(136)
										int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(136)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(136)
										destPixel = tmp44;
									}
									HX_STACK_LINE(136)
									value;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(137)
									{
										HX_STACK_LINE(137)
										int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(137)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(137)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(137)
										int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(137)
										int tmp34 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(137)
										int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(137)
										int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(137)
										int tmp37 = (int(tmp36) << int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(137)
										int tmp38 = (int(tmp33) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(137)
										int tmp39 = (int(value) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(137)
										int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(137)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(137)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(137)
										int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(137)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(137)
										destPixel = tmp44;
									}
									HX_STACK_LINE(137)
									value;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(138)
									{
										HX_STACK_LINE(138)
										int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(138)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(138)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(138)
										int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(138)
										int tmp34 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(138)
										int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(138)
										int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(138)
										int tmp37 = (int(tmp36) << int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(138)
										int tmp38 = (int(tmp33) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(138)
										int tmp39 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(138)
										int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(138)
										int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(138)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(138)
										int tmp43 = (int(tmp38) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(138)
										int tmp44 = (int(value) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(138)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(138)
										destPixel = tmp45;
									}
									HX_STACK_LINE(138)
									value;
								}
								;break;
							}
							HX_STACK_LINE(142)
							{
								HX_STACK_LINE(142)
								bool tmp30 = destPremultiplied;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(142)
								if ((tmp30)){
									HX_STACK_LINE(142)
									int tmp31 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(142)
									bool tmp32 = (tmp31 == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(142)
									if ((tmp32)){
										HX_STACK_LINE(142)
										bool tmp33 = (destPixel != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(142)
										if ((tmp33)){
											HX_STACK_LINE(142)
											destPixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(142)
										int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(142)
										bool tmp34 = (tmp33 != (int)255);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(142)
										if ((tmp34)){
											HX_STACK_LINE(142)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(142)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(142)
												{
													HX_STACK_LINE(142)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(142)
													tmp35 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(142)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp35;
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												int tmp36 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(142)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(142)
												int tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(142)
												int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(142)
												int tmp40 = (int(tmp39) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(142)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(142)
												int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(142)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(142)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(142)
												int tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(142)
												int tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(142)
												int tmp47 = (int(tmp46) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(142)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(142)
												int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(142)
												int tmp50 = (int(tmp42) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(142)
												int tmp51 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(142)
												int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(142)
												int tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(142)
												int tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(142)
												int tmp55 = (int(tmp54) >> int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(142)
												int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(142)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(142)
												int tmp58 = (int(tmp50) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(142)
												int tmp59 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(142)
												int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(142)
												int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(142)
												destPixel = tmp61;
											}
										}
									}
								}
								HX_STACK_LINE(142)
								int tmp31 = destFormat;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(142)
								switch( (int)(tmp31)){
									case (int)2: {
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(142)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(142)
												val;
											}
										}
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(142)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(142)
												val;
											}
										}
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(142)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(142)
												val;
											}
										}
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int val = tmp32;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(142)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(142)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(142)
												val;
											}
										}
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(142)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(142)
												val;
											}
										}
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(142)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(142)
												val;
											}
										}
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int val = tmp32;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(142)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int val = tmp32;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(142)
												val;
											}
										}
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(142)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(142)
												val;
											}
										}
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(142)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(142)
												val;
											}
										}
										HX_STACK_LINE(142)
										{
											HX_STACK_LINE(142)
											int tmp32 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(142)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(142)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(142)
											{
												HX_STACK_LINE(142)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(142)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(144)
							hx::AddEq(srcPosition,(int)4);
							HX_STACK_LINE(145)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
		}
		HX_STACK_LINE(153)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,copyChannel,(void))

Void ImageDataUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyPixels",0x95aa37f0,"lime.graphics.utils.ImageDataUtil.copyPixels","lime/graphics/utils/ImageDataUtil.hx",158,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(161)
		bool tmp = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		if ((tmp)){
			HX_STACK_LINE(161)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),hx::DynamicPtr(alphaImage),hx::DynamicPtr(alphaPoint),mergeAlpha);
		}
		else{
			HX_STACK_LINE(165)
			::lime::utils::ArrayBufferView tmp1 = sourceImage->buffer->data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(165)
			::lime::utils::ArrayBufferView sourceData = tmp1;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(166)
			::lime::utils::ArrayBufferView tmp2 = image->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			::lime::utils::ArrayBufferView destData = tmp2;		HX_STACK_VAR(destData,"destData");
			HX_STACK_LINE(168)
			bool tmp3 = (sourceData == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(168)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(168)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			if ((tmp4)){
				HX_STACK_LINE(168)
				tmp5 = (destData == null());
			}
			else{
				HX_STACK_LINE(168)
				tmp5 = true;
			}
			HX_STACK_LINE(168)
			if ((tmp5)){
				HX_STACK_LINE(168)
				return null();
			}
			HX_STACK_LINE(170)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp6 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(170)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView sourceView = tmp6;		HX_STACK_VAR(sourceView,"sourceView");
			HX_STACK_LINE(171)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			::lime::math::Rectangle tmp8 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,sourceView->width,sourceView->height);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(171)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp9 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(171)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp9;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(173)
			int tmp10 = sourceImage->buffer->format;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(173)
			int sourceFormat = tmp10;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(174)
			int tmp11 = image->buffer->format;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(174)
			int destFormat = tmp11;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(175)
			bool tmp12 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(175)
			bool sourcePremultiplied = tmp12;		HX_STACK_VAR(sourcePremultiplied,"sourcePremultiplied");
			HX_STACK_LINE(176)
			bool tmp13 = image->buffer->premultiplied;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(176)
			bool destPremultiplied = tmp13;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(178)
			int sourcePosition;		HX_STACK_VAR(sourcePosition,"sourcePosition");
			HX_STACK_LINE(178)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(178)
			int sourcePixel;		HX_STACK_VAR(sourcePixel,"sourcePixel");
			HX_STACK_LINE(180)
			bool tmp14 = mergeAlpha;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(180)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(180)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(180)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(180)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(180)
			if ((tmp17)){
				HX_STACK_LINE(180)
				bool tmp19 = sourceImage->get_transparent();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(180)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(180)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(180)
				tmp18 = !(tmp21);
			}
			else{
				HX_STACK_LINE(180)
				tmp18 = true;
			}
			HX_STACK_LINE(180)
			if ((tmp18)){
				HX_STACK_LINE(182)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(182)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(182)
				while((true)){
					HX_STACK_LINE(182)
					bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(182)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(182)
					if ((tmp20)){
						HX_STACK_LINE(182)
						break;
					}
					HX_STACK_LINE(182)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(182)
					int y = tmp21;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(184)
					int tmp22 = sourceView->offset;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(184)
					int tmp23 = (sourceView->stride * y);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(184)
					int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(184)
					sourcePosition = tmp24;
					HX_STACK_LINE(185)
					int tmp25 = destView->offset;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(185)
					int tmp26 = (destView->stride * y);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(185)
					int tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(185)
					destPosition = tmp27;
					HX_STACK_LINE(187)
					{
						HX_STACK_LINE(187)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(187)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(187)
						while((true)){
							HX_STACK_LINE(187)
							bool tmp28 = (_g3 < _g2);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(187)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(187)
							if ((tmp29)){
								HX_STACK_LINE(187)
								break;
							}
							HX_STACK_LINE(187)
							int tmp30 = (_g3)++;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(187)
							int x = tmp30;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(189)
							{
								HX_STACK_LINE(189)
								int tmp31 = sourceFormat;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(189)
								switch( (int)(tmp31)){
									case (int)2: {
										HX_STACK_LINE(189)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(189)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(189)
										int r = tmp33;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(189)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(189)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(189)
										int g = tmp35;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(189)
										int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(189)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(189)
										int b = tmp37;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(189)
										int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(189)
										Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(189)
										int a = tmp39;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(189)
										int tmp40 = (int(r) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(189)
										int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(189)
										int tmp42 = (int(g) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(189)
										int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(189)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(189)
										int tmp45 = (int(b) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(189)
										int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(189)
										int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(189)
										int tmp48 = (int(a) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(189)
										int tmp49 = (int(tmp47) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(189)
										sourcePixel = tmp49;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(189)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(189)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(189)
										int r = tmp33;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(189)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(189)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(189)
										int g = tmp35;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(189)
										int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(189)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(189)
										int b = tmp37;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(189)
										int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(189)
										Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(189)
										int a = tmp39;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(189)
										int tmp40 = (int(r) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(189)
										int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(189)
										int tmp42 = (int(g) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(189)
										int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(189)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(189)
										int tmp45 = (int(b) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(189)
										int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(189)
										int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(189)
										int tmp48 = (int(a) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(189)
										int tmp49 = (int(tmp47) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(189)
										sourcePixel = tmp49;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(189)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(189)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(189)
										int r = tmp33;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(189)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(189)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(189)
										int g = tmp35;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(189)
										int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(189)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(189)
										int b = tmp37;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(189)
										int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(189)
										Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(189)
										int a = tmp39;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(189)
										int tmp40 = (int(r) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(189)
										int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(189)
										int tmp42 = (int(g) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(189)
										int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(189)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(189)
										int tmp45 = (int(b) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(189)
										int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(189)
										int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(189)
										int tmp48 = (int(a) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(189)
										int tmp49 = (int(tmp47) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(189)
										sourcePixel = tmp49;
									}
									;break;
								}
								HX_STACK_LINE(189)
								bool tmp32 = sourcePremultiplied;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(189)
								if ((tmp32)){
									HX_STACK_LINE(189)
									int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(189)
									bool tmp34 = (tmp33 != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(189)
									bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(189)
									if ((tmp34)){
										HX_STACK_LINE(189)
										int tmp36 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(189)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(189)
										tmp35 = (tmp37 != (int)255);
									}
									else{
										HX_STACK_LINE(189)
										tmp35 = false;
									}
									HX_STACK_LINE(189)
									if ((tmp35)){
										HX_STACK_LINE(189)
										int tmp36 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(189)
										Float tmp37 = (Float(((Float)255.0)) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(189)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp37;
										HX_STACK_LINE(189)
										{
											HX_STACK_LINE(189)
											Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(189)
											{
												HX_STACK_LINE(189)
												::lime::utils::ArrayBufferView tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(189)
												::lime::utils::ArrayBufferView this1 = tmp39;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(189)
												int tmp40 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(189)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(189)
												Float tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(189)
												Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(189)
												int tmp44 = ::Math_obj::round(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(189)
												int idx = tmp44;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(189)
												int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(189)
												tmp38 = (int(tmp45) & int((int)255));
											}
											HX_STACK_LINE(189)
											int r = tmp38;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(189)
											Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(189)
											{
												HX_STACK_LINE(189)
												::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(189)
												::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(189)
												int tmp41 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(189)
												int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(189)
												Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(189)
												Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(189)
												int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(189)
												int idx = tmp45;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(189)
												int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(189)
												tmp39 = (int(tmp46) & int((int)255));
											}
											HX_STACK_LINE(189)
											int g = tmp39;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(189)
											Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(189)
											{
												HX_STACK_LINE(189)
												::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(189)
												::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(189)
												int tmp42 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(189)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(189)
												Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(189)
												Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(189)
												int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(189)
												int idx = tmp46;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(189)
												int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(189)
												tmp40 = (int(tmp47) & int((int)255));
											}
											HX_STACK_LINE(189)
											int b = tmp40;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(189)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(189)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(189)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(189)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(189)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(189)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(189)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(189)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(189)
											int tmp49 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(189)
											int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(189)
											int tmp51 = (int(tmp48) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(189)
											sourcePixel = tmp51;
										}
									}
								}
							}
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								bool tmp31 = destPremultiplied;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(190)
								if ((tmp31)){
									HX_STACK_LINE(190)
									int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(190)
									bool tmp33 = (tmp32 == (int)0);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(190)
									if ((tmp33)){
										HX_STACK_LINE(190)
										bool tmp34 = (sourcePixel != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(190)
										if ((tmp34)){
											HX_STACK_LINE(190)
											sourcePixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(190)
										int tmp34 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(190)
										bool tmp35 = (tmp34 != (int)255);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(190)
										if ((tmp35)){
											HX_STACK_LINE(190)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(190)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(190)
												{
													HX_STACK_LINE(190)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(190)
													tmp36 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(sourcePixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(190)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp36;
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												int tmp37 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(190)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(190)
												int tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(190)
												int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(190)
												int tmp41 = (int(tmp40) >> int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(190)
												int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(190)
												int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(190)
												int tmp44 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(190)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(190)
												int tmp46 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(190)
												int tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(190)
												int tmp48 = (int(tmp47) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(190)
												int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(190)
												int tmp50 = (int(tmp49) << int((int)16));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(190)
												int tmp51 = (int(tmp43) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(190)
												int tmp52 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(190)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(190)
												int tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(190)
												int tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(190)
												int tmp56 = (int(tmp55) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(190)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(190)
												int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(190)
												int tmp59 = (int(tmp51) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(190)
												int tmp60 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(190)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(190)
												int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(190)
												sourcePixel = tmp62;
											}
										}
									}
								}
								HX_STACK_LINE(190)
								int tmp32 = destFormat;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(190)
								switch( (int)(tmp32)){
									case (int)2: {
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(190)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(190)
												val;
											}
										}
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(190)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(190)
												val;
											}
										}
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(190)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(190)
												val;
											}
										}
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(190)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(190)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(190)
												val;
											}
										}
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(190)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(190)
												val;
											}
										}
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(190)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(190)
												val;
											}
										}
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(190)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(190)
												val;
											}
										}
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(190)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(190)
												val;
											}
										}
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(190)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(190)
												val;
											}
										}
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											int tmp33 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(190)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(190)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(190)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(192)
							hx::AddEq(sourcePosition,(int)4);
							HX_STACK_LINE(193)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(201)
				Float sourceAlpha;		HX_STACK_VAR(sourceAlpha,"sourceAlpha");
				HX_STACK_LINE(201)
				Float destAlpha;		HX_STACK_VAR(destAlpha,"destAlpha");
				HX_STACK_LINE(201)
				Float oneMinusSourceAlpha;		HX_STACK_VAR(oneMinusSourceAlpha,"oneMinusSourceAlpha");
				HX_STACK_LINE(201)
				Float blendAlpha;		HX_STACK_VAR(blendAlpha,"blendAlpha");
				HX_STACK_LINE(202)
				int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
				HX_STACK_LINE(204)
				bool tmp19 = (alphaImage == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(204)
				if ((tmp19)){
					HX_STACK_LINE(206)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(206)
					int _g = destView->height;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(206)
					while((true)){
						HX_STACK_LINE(206)
						bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(206)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(206)
						if ((tmp21)){
							HX_STACK_LINE(206)
							break;
						}
						HX_STACK_LINE(206)
						int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(206)
						int y = tmp22;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(208)
						int tmp23 = sourceView->offset;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(208)
						int tmp24 = (sourceView->stride * y);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(208)
						int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(208)
						sourcePosition = tmp25;
						HX_STACK_LINE(209)
						int tmp26 = destView->offset;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(209)
						int tmp27 = (destView->stride * y);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(209)
						int tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(209)
						destPosition = tmp28;
						HX_STACK_LINE(211)
						{
							HX_STACK_LINE(211)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(211)
							int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(211)
							while((true)){
								HX_STACK_LINE(211)
								bool tmp29 = (_g3 < _g2);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(211)
								bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(211)
								if ((tmp30)){
									HX_STACK_LINE(211)
									break;
								}
								HX_STACK_LINE(211)
								int tmp31 = (_g3)++;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(211)
								int x = tmp31;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(213)
								{
									HX_STACK_LINE(213)
									int tmp32 = sourceFormat;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(213)
									switch( (int)(tmp32)){
										case (int)2: {
											HX_STACK_LINE(213)
											int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(213)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(213)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(213)
											int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(213)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(213)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(213)
											int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(213)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(213)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(213)
											int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(213)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(213)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(213)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(213)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(213)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(213)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(213)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(213)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(213)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(213)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(213)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(213)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(213)
											sourcePixel = tmp50;
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(213)
											int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(213)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(213)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(213)
											int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(213)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(213)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(213)
											int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(213)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(213)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(213)
											int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(213)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(213)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(213)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(213)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(213)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(213)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(213)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(213)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(213)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(213)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(213)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(213)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(213)
											sourcePixel = tmp50;
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(213)
											int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(213)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(213)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(213)
											int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(213)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(213)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(213)
											int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(213)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(213)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(213)
											int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(213)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(213)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(213)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(213)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(213)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(213)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(213)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(213)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(213)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(213)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(213)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(213)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(213)
											sourcePixel = tmp50;
										}
										;break;
									}
									HX_STACK_LINE(213)
									bool tmp33 = sourcePremultiplied;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(213)
									if ((tmp33)){
										HX_STACK_LINE(213)
										int tmp34 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(213)
										bool tmp35 = (tmp34 != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(213)
										bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(213)
										if ((tmp35)){
											HX_STACK_LINE(213)
											int tmp37 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(213)
											int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(213)
											tmp36 = (tmp38 != (int)255);
										}
										else{
											HX_STACK_LINE(213)
											tmp36 = false;
										}
										HX_STACK_LINE(213)
										if ((tmp36)){
											HX_STACK_LINE(213)
											int tmp37 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(213)
											Float tmp38 = (Float(((Float)255.0)) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(213)
											::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp38;
											HX_STACK_LINE(213)
											{
												HX_STACK_LINE(213)
												Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(213)
												{
													HX_STACK_LINE(213)
													::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(213)
													::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(213)
													int tmp41 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(213)
													int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(213)
													Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(213)
													Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(213)
													int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(213)
													int idx = tmp45;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(213)
													int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(213)
													tmp39 = (int(tmp46) & int((int)255));
												}
												HX_STACK_LINE(213)
												int r = tmp39;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(213)
												Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(213)
												{
													HX_STACK_LINE(213)
													::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(213)
													::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(213)
													int tmp42 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(213)
													int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(213)
													Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(213)
													Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(213)
													int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(213)
													int idx = tmp46;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(213)
													int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(213)
													tmp40 = (int(tmp47) & int((int)255));
												}
												HX_STACK_LINE(213)
												int g = tmp40;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(213)
												Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(213)
												{
													HX_STACK_LINE(213)
													::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(213)
													::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(213)
													int tmp43 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(213)
													int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(213)
													Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(213)
													Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(213)
													int tmp47 = ::Math_obj::round(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(213)
													int idx = tmp47;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(213)
													int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(213)
													tmp41 = (int(tmp48) & int((int)255));
												}
												HX_STACK_LINE(213)
												int b = tmp41;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(213)
												int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(213)
												int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(213)
												int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(213)
												int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(213)
												int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(213)
												int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(213)
												int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(213)
												int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(213)
												int tmp50 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(213)
												int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(213)
												int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(213)
												sourcePixel = tmp52;
											}
										}
									}
								}
								HX_STACK_LINE(214)
								{
									HX_STACK_LINE(214)
									int tmp32 = destFormat;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(214)
									switch( (int)(tmp32)){
										case (int)2: {
											HX_STACK_LINE(214)
											int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(214)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(214)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(214)
											int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(214)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(214)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(214)
											int tmp37 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(214)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(214)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(214)
											int tmp39 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(214)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(214)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(214)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(214)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(214)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(214)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(214)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(214)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(214)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(214)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(214)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(214)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(214)
											destPixel = tmp50;
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(214)
											int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(214)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(214)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(214)
											int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(214)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(214)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(214)
											int tmp37 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(214)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(214)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(214)
											int tmp39 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(214)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(214)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(214)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(214)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(214)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(214)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(214)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(214)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(214)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(214)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(214)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(214)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(214)
											destPixel = tmp50;
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(214)
											int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(214)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(214)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(214)
											int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(214)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(214)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(214)
											int tmp37 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(214)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(214)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(214)
											int tmp39 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(214)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(214)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(214)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(214)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(214)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(214)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(214)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(214)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(214)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(214)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(214)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(214)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(214)
											destPixel = tmp50;
										}
										;break;
									}
									HX_STACK_LINE(214)
									bool tmp33 = destPremultiplied;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(214)
									if ((tmp33)){
										HX_STACK_LINE(214)
										int tmp34 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(214)
										bool tmp35 = (tmp34 != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(214)
										bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(214)
										if ((tmp35)){
											HX_STACK_LINE(214)
											int tmp37 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(214)
											int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(214)
											tmp36 = (tmp38 != (int)255);
										}
										else{
											HX_STACK_LINE(214)
											tmp36 = false;
										}
										HX_STACK_LINE(214)
										if ((tmp36)){
											HX_STACK_LINE(214)
											int tmp37 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(214)
											Float tmp38 = (Float(((Float)255.0)) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(214)
											::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp38;
											HX_STACK_LINE(214)
											{
												HX_STACK_LINE(214)
												Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(214)
												{
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(214)
													int tmp41 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(214)
													int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(214)
													Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(214)
													Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(214)
													int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(214)
													int idx = tmp45;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(214)
													int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(214)
													tmp39 = (int(tmp46) & int((int)255));
												}
												HX_STACK_LINE(214)
												int r = tmp39;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(214)
												Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(214)
												{
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(214)
													int tmp42 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(214)
													int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(214)
													Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(214)
													Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(214)
													int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(214)
													int idx = tmp46;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(214)
													int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(214)
													tmp40 = (int(tmp47) & int((int)255));
												}
												HX_STACK_LINE(214)
												int g = tmp40;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(214)
												Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(214)
												{
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(214)
													int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(214)
													int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(214)
													Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(214)
													Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(214)
													int tmp47 = ::Math_obj::round(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(214)
													int idx = tmp47;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(214)
													int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(214)
													tmp41 = (int(tmp48) & int((int)255));
												}
												HX_STACK_LINE(214)
												int b = tmp41;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(214)
												int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(214)
												int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(214)
												int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(214)
												int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(214)
												int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(214)
												int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(214)
												int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(214)
												int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(214)
												int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(214)
												int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(214)
												int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(214)
												destPixel = tmp52;
											}
										}
									}
								}
								HX_STACK_LINE(216)
								int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(216)
								Float tmp33 = (Float(tmp32) / Float(((Float)255.0)));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(216)
								sourceAlpha = tmp33;
								HX_STACK_LINE(217)
								int tmp34 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(217)
								Float tmp35 = (Float(tmp34) / Float(((Float)255.0)));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(217)
								destAlpha = tmp35;
								HX_STACK_LINE(218)
								Float tmp36 = ((int)1 - sourceAlpha);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(218)
								oneMinusSourceAlpha = tmp36;
								HX_STACK_LINE(219)
								Float tmp37 = sourceAlpha;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(219)
								Float tmp38 = (destAlpha * oneMinusSourceAlpha);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(219)
								Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(219)
								blendAlpha = tmp39;
								HX_STACK_LINE(221)
								bool tmp40 = (blendAlpha == (int)0);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(221)
								if ((tmp40)){
									HX_STACK_LINE(223)
									destPixel = (int)0;
								}
								else{
									HX_STACK_LINE(227)
									{
										HX_STACK_LINE(227)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(227)
										{
											HX_STACK_LINE(227)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(227)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(227)
											int tmp43 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(227)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(227)
											Float tmp45 = sourceAlpha;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(227)
											Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(227)
											int tmp47 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(227)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(227)
											Float tmp49 = destAlpha;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(227)
											Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(227)
											Float tmp51 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(227)
											Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(227)
											Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(227)
											Float tmp54 = blendAlpha;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(227)
											Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(227)
											int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(227)
											int idx = tmp56;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(227)
											int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(227)
											tmp41 = (int(tmp57) & int((int)255));
										}
										HX_STACK_LINE(227)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(227)
										{
											HX_STACK_LINE(227)
											int tmp42 = (int(value) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(227)
											int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(227)
											int tmp44 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(227)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(227)
											int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(227)
											int tmp47 = (int(tmp46) << int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(227)
											int tmp48 = (int(tmp43) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(227)
											int tmp49 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(227)
											int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(227)
											int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(227)
											int tmp52 = (int(tmp51) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(227)
											int tmp53 = (int(tmp48) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(227)
											int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(227)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(227)
											int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(227)
											destPixel = tmp56;
										}
										HX_STACK_LINE(227)
										value;
									}
									HX_STACK_LINE(228)
									{
										HX_STACK_LINE(228)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(228)
										{
											HX_STACK_LINE(228)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(228)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(228)
											int tmp43 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(228)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(228)
											Float tmp45 = sourceAlpha;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(228)
											Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(228)
											int tmp47 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(228)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(228)
											Float tmp49 = destAlpha;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(228)
											Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(228)
											Float tmp51 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(228)
											Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(228)
											Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(228)
											Float tmp54 = blendAlpha;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(228)
											Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(228)
											int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(228)
											int idx = tmp56;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(228)
											int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(228)
											tmp41 = (int(tmp57) & int((int)255));
										}
										HX_STACK_LINE(228)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(228)
										{
											HX_STACK_LINE(228)
											int tmp42 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(228)
											int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(228)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(228)
											int tmp45 = (int(tmp44) << int((int)24));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(228)
											int tmp46 = (int(value) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(228)
											int tmp47 = (int(tmp46) << int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(228)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(228)
											int tmp49 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(228)
											int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(228)
											int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(228)
											int tmp52 = (int(tmp51) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(228)
											int tmp53 = (int(tmp48) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(228)
											int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(228)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(228)
											int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(228)
											destPixel = tmp56;
										}
										HX_STACK_LINE(228)
										value;
									}
									HX_STACK_LINE(229)
									{
										HX_STACK_LINE(229)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(229)
										{
											HX_STACK_LINE(229)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(229)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(229)
											int tmp43 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(229)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(229)
											Float tmp45 = sourceAlpha;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(229)
											Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(229)
											int tmp47 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(229)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(229)
											Float tmp49 = destAlpha;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(229)
											Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(229)
											Float tmp51 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(229)
											Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(229)
											Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(229)
											Float tmp54 = blendAlpha;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(229)
											Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(229)
											int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(229)
											int idx = tmp56;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(229)
											int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(229)
											tmp41 = (int(tmp57) & int((int)255));
										}
										HX_STACK_LINE(229)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(229)
										{
											HX_STACK_LINE(229)
											int tmp42 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(229)
											int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(229)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(229)
											int tmp45 = (int(tmp44) << int((int)24));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(229)
											int tmp46 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(229)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(229)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(229)
											int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(229)
											int tmp50 = (int(tmp45) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(229)
											int tmp51 = (int(value) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(229)
											int tmp52 = (int(tmp51) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(229)
											int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(229)
											int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(229)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(229)
											int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(229)
											destPixel = tmp56;
										}
										HX_STACK_LINE(229)
										value;
									}
									HX_STACK_LINE(230)
									{
										HX_STACK_LINE(230)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(230)
										{
											HX_STACK_LINE(230)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(230)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(230)
											Float tmp43 = (blendAlpha * ((Float)255.0));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(230)
											int tmp44 = ::Math_obj::round(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(230)
											int idx = tmp44;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(230)
											int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(230)
											tmp41 = (int(tmp45) & int((int)255));
										}
										HX_STACK_LINE(230)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(230)
										{
											HX_STACK_LINE(230)
											int tmp42 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(230)
											int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(230)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(230)
											int tmp45 = (int(tmp44) << int((int)24));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(230)
											int tmp46 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(230)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(230)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(230)
											int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(230)
											int tmp50 = (int(tmp45) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(230)
											int tmp51 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(230)
											int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(230)
											int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(230)
											int tmp54 = (int(tmp53) << int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(230)
											int tmp55 = (int(tmp50) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(230)
											int tmp56 = (int(value) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(230)
											int tmp57 = (int(tmp55) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(230)
											destPixel = tmp57;
										}
										HX_STACK_LINE(230)
										value;
									}
								}
								HX_STACK_LINE(234)
								{
									HX_STACK_LINE(234)
									bool tmp41 = destPremultiplied;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(234)
									if ((tmp41)){
										HX_STACK_LINE(234)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(234)
										bool tmp43 = (tmp42 == (int)0);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(234)
										if ((tmp43)){
											HX_STACK_LINE(234)
											bool tmp44 = (destPixel != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(234)
											if ((tmp44)){
												HX_STACK_LINE(234)
												destPixel = (int)0;
											}
										}
										else{
											HX_STACK_LINE(234)
											int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(234)
											bool tmp45 = (tmp44 != (int)255);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(234)
											if ((tmp45)){
												HX_STACK_LINE(234)
												Dynamic tmp46;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::lime::utils::ArrayBufferView tmp47 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(234)
													::lime::utils::ArrayBufferView this1 = tmp47;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(234)
													{
														HX_STACK_LINE(234)
														bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
														HX_STACK_LINE(234)
														tmp46 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
													}
												}
												HX_STACK_LINE(234)
												::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp46;
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													int tmp47 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(234)
													int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(234)
													int tmp49 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(234)
													int tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(234)
													int tmp51 = (int(tmp50) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(234)
													int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(234)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(234)
													int tmp54 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(234)
													int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(234)
													int tmp56 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(234)
													int tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(234)
													int tmp58 = (int(tmp57) >> int((int)16));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(234)
													int tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(234)
													int tmp60 = (int(tmp59) << int((int)16));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(234)
													int tmp61 = (int(tmp53) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(234)
													int tmp62 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(234)
													int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(234)
													int tmp64 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp64,"tmp64");
													HX_STACK_LINE(234)
													int tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
													HX_STACK_LINE(234)
													int tmp66 = (int(tmp65) >> int((int)16));		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(234)
													int tmp67 = (int(tmp66) & int((int)255));		HX_STACK_VAR(tmp67,"tmp67");
													HX_STACK_LINE(234)
													int tmp68 = (int(tmp67) << int((int)8));		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(234)
													int tmp69 = (int(tmp61) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
													HX_STACK_LINE(234)
													int tmp70 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp70,"tmp70");
													HX_STACK_LINE(234)
													int tmp71 = (int(tmp70) & int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(234)
													int tmp72 = (int(tmp69) | int(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(234)
													destPixel = tmp72;
												}
											}
										}
									}
									HX_STACK_LINE(234)
									int tmp42 = destFormat;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(234)
									switch( (int)(tmp42)){
										case (int)2: {
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(234)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(234)
													val;
												}
											}
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(234)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(234)
													val;
												}
											}
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(234)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(234)
													val;
												}
											}
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int val = tmp43;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(234)
													val;
												}
											}
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(234)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(234)
													val;
												}
											}
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(234)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(234)
													val;
												}
											}
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(234)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(234)
													val;
												}
											}
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int val = tmp43;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(234)
													val;
												}
											}
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int val = tmp43;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(234)
													val;
												}
											}
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(234)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(234)
													val;
												}
											}
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(234)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(234)
													val;
												}
											}
											HX_STACK_LINE(234)
											{
												HX_STACK_LINE(234)
												int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(234)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(234)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(234)
												{
													HX_STACK_LINE(234)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(234)
													val;
												}
											}
										}
										;break;
									}
								}
								HX_STACK_LINE(236)
								hx::AddEq(sourcePosition,(int)4);
								HX_STACK_LINE(237)
								hx::AddEq(destPosition,(int)4);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(245)
					bool tmp20 = (alphaPoint == null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(245)
					if ((tmp20)){
						HX_STACK_LINE(245)
						::lime::math::Vector2 tmp21 = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(245)
						alphaPoint = tmp21;
					}
					HX_STACK_LINE(247)
					::lime::utils::ArrayBufferView tmp21 = alphaImage->buffer->data;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(247)
					::lime::utils::ArrayBufferView alphaData = tmp21;		HX_STACK_VAR(alphaData,"alphaData");
					HX_STACK_LINE(248)
					int tmp22 = alphaImage->buffer->format;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(248)
					int alphaFormat = tmp22;		HX_STACK_VAR(alphaFormat,"alphaFormat");
					HX_STACK_LINE(249)
					bool tmp23 = alphaImage->buffer->premultiplied;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(249)
					bool alphaPremultiplied = tmp23;		HX_STACK_VAR(alphaPremultiplied,"alphaPremultiplied");
					HX_STACK_LINE(251)
					::lime::graphics::Image tmp24 = alphaImage;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(251)
					::lime::math::Rectangle tmp25 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,destView->width,destView->height);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(251)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp26 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(251)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView alphaView = tmp26;		HX_STACK_VAR(alphaView,"alphaView");
					HX_STACK_LINE(252)
					int alphaPosition;		HX_STACK_VAR(alphaPosition,"alphaPosition");
					HX_STACK_LINE(252)
					int alphaPixel;		HX_STACK_VAR(alphaPixel,"alphaPixel");
					HX_STACK_LINE(254)
					{
						HX_STACK_LINE(254)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(254)
						int _g = alphaView->height;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(254)
						while((true)){
							HX_STACK_LINE(254)
							bool tmp27 = (_g1 < _g);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(254)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(254)
							if ((tmp28)){
								HX_STACK_LINE(254)
								break;
							}
							HX_STACK_LINE(254)
							int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(254)
							int y = tmp29;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(256)
							int tmp30 = sourceView->offset;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(256)
							int tmp31 = (sourceView->stride * y);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(256)
							int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(256)
							sourcePosition = tmp32;
							HX_STACK_LINE(257)
							int tmp33 = destView->offset;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(257)
							int tmp34 = (destView->stride * y);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(257)
							int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(257)
							destPosition = tmp35;
							HX_STACK_LINE(258)
							int tmp36 = alphaView->offset;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(258)
							int tmp37 = (alphaView->stride * y);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(258)
							int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(258)
							alphaPosition = tmp38;
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(260)
								int _g2 = alphaView->width;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(260)
								while((true)){
									HX_STACK_LINE(260)
									bool tmp39 = (_g3 < _g2);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(260)
									bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(260)
									if ((tmp40)){
										HX_STACK_LINE(260)
										break;
									}
									HX_STACK_LINE(260)
									int tmp41 = (_g3)++;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(260)
									int x = tmp41;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(262)
									{
										HX_STACK_LINE(262)
										int tmp42 = sourceFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(262)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(262)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(262)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(262)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(262)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(262)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(262)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(262)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(262)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(262)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(262)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(262)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(262)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(262)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(262)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(262)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(262)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(262)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(262)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(262)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(262)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(262)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(262)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(262)
												sourcePixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(262)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(262)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(262)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(262)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(262)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(262)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(262)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(262)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(262)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(262)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(262)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(262)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(262)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(262)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(262)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(262)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(262)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(262)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(262)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(262)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(262)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(262)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(262)
												sourcePixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(262)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(262)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(262)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(262)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(262)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(262)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(262)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(262)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(262)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(262)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(262)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(262)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(262)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(262)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(262)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(262)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(262)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(262)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(262)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(262)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(262)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(262)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(262)
												sourcePixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(262)
										bool tmp43 = sourcePremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(262)
										if ((tmp43)){
											HX_STACK_LINE(262)
											int tmp44 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(262)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(262)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(262)
											if ((tmp45)){
												HX_STACK_LINE(262)
												int tmp47 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(262)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(262)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(262)
												tmp46 = false;
											}
											HX_STACK_LINE(262)
											if ((tmp46)){
												HX_STACK_LINE(262)
												int tmp47 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(262)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(262)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(262)
												{
													HX_STACK_LINE(262)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(262)
													{
														HX_STACK_LINE(262)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(262)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(262)
														int tmp51 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(262)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(262)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(262)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(262)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(262)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(262)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(262)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(262)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(262)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(262)
													{
														HX_STACK_LINE(262)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(262)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(262)
														int tmp52 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(262)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(262)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(262)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(262)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(262)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(262)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(262)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(262)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(262)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(262)
													{
														HX_STACK_LINE(262)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(262)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(262)
														int tmp53 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(262)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(262)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(262)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(262)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(262)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(262)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(262)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(262)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(262)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(262)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(262)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(262)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(262)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(262)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(262)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(262)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(262)
													int tmp60 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(262)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(262)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(262)
													sourcePixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(263)
									{
										HX_STACK_LINE(263)
										int tmp42 = destFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(263)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(263)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(263)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(263)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(263)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(263)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(263)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(263)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(263)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(263)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(263)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(263)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(263)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(263)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(263)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(263)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(263)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(263)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(263)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(263)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(263)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(263)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(263)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(263)
												destPixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(263)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(263)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(263)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(263)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(263)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(263)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(263)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(263)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(263)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(263)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(263)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(263)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(263)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(263)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(263)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(263)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(263)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(263)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(263)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(263)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(263)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(263)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(263)
												destPixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(263)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(263)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(263)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(263)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(263)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(263)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(263)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(263)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(263)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(263)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(263)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(263)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(263)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(263)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(263)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(263)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(263)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(263)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(263)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(263)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(263)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(263)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(263)
												destPixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(263)
										bool tmp43 = destPremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(263)
										if ((tmp43)){
											HX_STACK_LINE(263)
											int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(263)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(263)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(263)
											if ((tmp45)){
												HX_STACK_LINE(263)
												int tmp47 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(263)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(263)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(263)
												tmp46 = false;
											}
											HX_STACK_LINE(263)
											if ((tmp46)){
												HX_STACK_LINE(263)
												int tmp47 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(263)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(263)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(263)
												{
													HX_STACK_LINE(263)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(263)
													{
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(263)
														int tmp51 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(263)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(263)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(263)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(263)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(263)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(263)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(263)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(263)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(263)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(263)
													{
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(263)
														int tmp52 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(263)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(263)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(263)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(263)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(263)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(263)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(263)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(263)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(263)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(263)
													{
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(263)
														int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(263)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(263)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(263)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(263)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(263)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(263)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(263)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(263)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(263)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(263)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(263)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(263)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(263)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(263)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(263)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(263)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(263)
													int tmp60 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(263)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(263)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(263)
													destPixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(264)
									{
										HX_STACK_LINE(264)
										int tmp42 = alphaFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(264)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(264)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(264)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(264)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(264)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(264)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(264)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(264)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(264)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(264)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(264)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(264)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(264)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(264)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(264)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(264)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(264)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(264)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(264)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(264)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(264)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(264)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(264)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(264)
												alphaPixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(264)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(264)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(264)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(264)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(264)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(264)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(264)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(264)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(264)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(264)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(264)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(264)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(264)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(264)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(264)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(264)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(264)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(264)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(264)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(264)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(264)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(264)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(264)
												alphaPixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(264)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(264)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(264)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(264)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(264)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(264)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(264)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(264)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(264)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(264)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(264)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(264)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(264)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(264)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(264)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(264)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(264)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(264)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(264)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(264)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(264)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(264)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(264)
												alphaPixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(264)
										bool tmp43 = alphaPremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(264)
										if ((tmp43)){
											HX_STACK_LINE(264)
											int tmp44 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(264)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(264)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(264)
											if ((tmp45)){
												HX_STACK_LINE(264)
												int tmp47 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(264)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(264)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(264)
												tmp46 = false;
											}
											HX_STACK_LINE(264)
											if ((tmp46)){
												HX_STACK_LINE(264)
												int tmp47 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(264)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(264)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(264)
												{
													HX_STACK_LINE(264)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(264)
													{
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(264)
														int tmp51 = (int(alphaPixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(264)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(264)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(264)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(264)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(264)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(264)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(264)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(264)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(264)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(264)
													{
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(264)
														int tmp52 = (int(alphaPixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(264)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(264)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(264)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(264)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(264)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(264)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(264)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(264)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(264)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(264)
													{
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(264)
														int tmp53 = (int(alphaPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(264)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(264)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(264)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(264)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(264)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(264)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(264)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(264)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(264)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(264)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(264)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(264)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(264)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(264)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(264)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(264)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(264)
													int tmp60 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(264)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(264)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(264)
													alphaPixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(266)
									int tmp42 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(266)
									Float tmp43 = (Float(tmp42) / Float((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(266)
									sourceAlpha = tmp43;
									HX_STACK_LINE(267)
									int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(267)
									Float tmp45 = (Float(tmp44) / Float((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(267)
									destAlpha = tmp45;
									HX_STACK_LINE(268)
									Float tmp46 = ((int)1 - sourceAlpha);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(268)
									oneMinusSourceAlpha = tmp46;
									HX_STACK_LINE(269)
									Float tmp47 = sourceAlpha;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(269)
									Float tmp48 = (destAlpha * oneMinusSourceAlpha);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(269)
									Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(269)
									blendAlpha = tmp49;
									HX_STACK_LINE(271)
									bool tmp50 = (blendAlpha == (int)0);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(271)
									if ((tmp50)){
										HX_STACK_LINE(273)
										destPixel = (int)0;
									}
									else{
										HX_STACK_LINE(277)
										{
											HX_STACK_LINE(277)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(277)
											{
												HX_STACK_LINE(277)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(277)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(277)
												int tmp53 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(277)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(277)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(277)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(277)
												int tmp57 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(277)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(277)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(277)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(277)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(277)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(277)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(277)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(277)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(277)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(277)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(277)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(277)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(277)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(277)
											{
												HX_STACK_LINE(277)
												int tmp52 = (int(value) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(277)
												int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(277)
												int tmp54 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(277)
												int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(277)
												int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(277)
												int tmp57 = (int(tmp56) << int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(277)
												int tmp58 = (int(tmp53) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(277)
												int tmp59 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(277)
												int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(277)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(277)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(277)
												int tmp63 = (int(tmp58) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(277)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(277)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(277)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(277)
												destPixel = tmp66;
											}
											HX_STACK_LINE(277)
											value;
										}
										HX_STACK_LINE(278)
										{
											HX_STACK_LINE(278)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(278)
											{
												HX_STACK_LINE(278)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(278)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(278)
												int tmp53 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(278)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(278)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(278)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(278)
												int tmp57 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(278)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(278)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(278)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(278)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(278)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(278)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(278)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(278)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(278)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(278)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(278)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(278)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(278)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(278)
											{
												HX_STACK_LINE(278)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(278)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(278)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(278)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(278)
												int tmp56 = (int(value) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(278)
												int tmp57 = (int(tmp56) << int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(278)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(278)
												int tmp59 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(278)
												int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(278)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(278)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(278)
												int tmp63 = (int(tmp58) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(278)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(278)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(278)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(278)
												destPixel = tmp66;
											}
											HX_STACK_LINE(278)
											value;
										}
										HX_STACK_LINE(279)
										{
											HX_STACK_LINE(279)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(279)
											{
												HX_STACK_LINE(279)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(279)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(279)
												int tmp53 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(279)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(279)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(279)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(279)
												int tmp57 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(279)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(279)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(279)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(279)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(279)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(279)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(279)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(279)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(279)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(279)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(279)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(279)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(279)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(279)
											{
												HX_STACK_LINE(279)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(279)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(279)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(279)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(279)
												int tmp56 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(279)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(279)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(279)
												int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(279)
												int tmp60 = (int(tmp55) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(279)
												int tmp61 = (int(value) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(279)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(279)
												int tmp63 = (int(tmp60) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(279)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(279)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(279)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(279)
												destPixel = tmp66;
											}
											HX_STACK_LINE(279)
											value;
										}
										HX_STACK_LINE(280)
										{
											HX_STACK_LINE(280)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(280)
											{
												HX_STACK_LINE(280)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(280)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(280)
												Float tmp53 = (blendAlpha * ((Float)255.0));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(280)
												int tmp54 = ::Math_obj::round(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(280)
												int idx = tmp54;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(280)
												int tmp55 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(280)
												tmp51 = (int(tmp55) & int((int)255));
											}
											HX_STACK_LINE(280)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(280)
											{
												HX_STACK_LINE(280)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(280)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(280)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(280)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(280)
												int tmp56 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(280)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(280)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(280)
												int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(280)
												int tmp60 = (int(tmp55) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(280)
												int tmp61 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(280)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(280)
												int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(280)
												int tmp64 = (int(tmp63) << int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(280)
												int tmp65 = (int(tmp60) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(280)
												int tmp66 = (int(value) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(280)
												int tmp67 = (int(tmp65) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(280)
												destPixel = tmp67;
											}
											HX_STACK_LINE(280)
											value;
										}
									}
									HX_STACK_LINE(284)
									{
										HX_STACK_LINE(284)
										bool tmp51 = destPremultiplied;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(284)
										if ((tmp51)){
											HX_STACK_LINE(284)
											int tmp52 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(284)
											bool tmp53 = (tmp52 == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(284)
											if ((tmp53)){
												HX_STACK_LINE(284)
												bool tmp54 = (destPixel != (int)0);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(284)
												if ((tmp54)){
													HX_STACK_LINE(284)
													destPixel = (int)0;
												}
											}
											else{
												HX_STACK_LINE(284)
												int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(284)
												bool tmp55 = (tmp54 != (int)255);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(284)
												if ((tmp55)){
													HX_STACK_LINE(284)
													Dynamic tmp56;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::lime::utils::ArrayBufferView tmp57 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(284)
														::lime::utils::ArrayBufferView this1 = tmp57;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(284)
														{
															HX_STACK_LINE(284)
															bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
															HX_STACK_LINE(284)
															tmp56 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
														}
													}
													HX_STACK_LINE(284)
													::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp56;
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														int tmp57 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(284)
														int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(284)
														int tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(284)
														int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(284)
														int tmp61 = (int(tmp60) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(284)
														int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(284)
														int tmp63 = (int(tmp62) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(284)
														int tmp64 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(284)
														int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(284)
														int tmp66 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(284)
														int tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(284)
														int tmp68 = (int(tmp67) >> int((int)16));		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(284)
														int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(284)
														int tmp70 = (int(tmp69) << int((int)16));		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(284)
														int tmp71 = (int(tmp63) | int(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(284)
														int tmp72 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(284)
														int tmp73 = (int(tmp72) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(284)
														int tmp74 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(284)
														int tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(284)
														int tmp76 = (int(tmp75) >> int((int)16));		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(284)
														int tmp77 = (int(tmp76) & int((int)255));		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(284)
														int tmp78 = (int(tmp77) << int((int)8));		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(284)
														int tmp79 = (int(tmp71) | int(tmp78));		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(284)
														int tmp80 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(284)
														int tmp81 = (int(tmp80) & int((int)255));		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(284)
														int tmp82 = (int(tmp79) | int(tmp81));		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(284)
														destPixel = tmp82;
													}
												}
											}
										}
										HX_STACK_LINE(284)
										int tmp52 = destFormat;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(284)
										switch( (int)(tmp52)){
											case (int)2: {
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(284)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														HX_STACK_LINE(284)
														val;
													}
												}
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(284)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														HX_STACK_LINE(284)
														val;
													}
												}
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(284)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														HX_STACK_LINE(284)
														val;
													}
												}
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														HX_STACK_LINE(284)
														val;
													}
												}
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(284)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														HX_STACK_LINE(284)
														val;
													}
												}
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(284)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														HX_STACK_LINE(284)
														val;
													}
												}
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(284)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														HX_STACK_LINE(284)
														val;
													}
												}
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														HX_STACK_LINE(284)
														val;
													}
												}
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														HX_STACK_LINE(284)
														val;
													}
												}
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(284)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														HX_STACK_LINE(284)
														val;
													}
												}
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(284)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														HX_STACK_LINE(284)
														val;
													}
												}
												HX_STACK_LINE(284)
												{
													HX_STACK_LINE(284)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(284)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(284)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(284)
													{
														HX_STACK_LINE(284)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														HX_STACK_LINE(284)
														val;
													}
												}
											}
											;break;
										}
									}
									HX_STACK_LINE(286)
									hx::AddEq(sourcePosition,(int)4);
									HX_STACK_LINE(287)
									hx::AddEq(destPosition,(int)4);
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(299)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,copyPixels,(void))

Void ImageDataUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","fillRect",0x163460f5,"lime.graphics.utils.ImageDataUtil.fillRect","lime/graphics/utils/ImageDataUtil.hx",304,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(306)
		int fillColor;		HX_STACK_VAR(fillColor,"fillColor");
		HX_STACK_LINE(308)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(308)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(310)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(310)
				{
					HX_STACK_LINE(310)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(310)
					{
						HX_STACK_LINE(310)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(310)
							tmp2 = rgba;
						}
						HX_STACK_LINE(310)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(310)
						{
							HX_STACK_LINE(310)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(310)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(310)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(310)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(310)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(310)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(310)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(310)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(310)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(310)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(310)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(310)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(310)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(310)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(310)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(310)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(310)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(310)
							rgba = tmp19;
						}
						HX_STACK_LINE(310)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(310)
				fillColor = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(311)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(311)
							tmp2 = rgba;
						}
						HX_STACK_LINE(311)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(311)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(311)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(311)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(311)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(311)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(311)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(311)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(311)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(311)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(311)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(311)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(311)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(311)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(311)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(311)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(311)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(311)
							rgba = tmp19;
						}
						HX_STACK_LINE(311)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(311)
				fillColor = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(312)
				fillColor = color;
			}
		}
		HX_STACK_LINE(316)
		bool tmp1 = image->get_transparent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(316)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(316)
		if ((tmp2)){
			HX_STACK_LINE(318)
			{
				HX_STACK_LINE(318)
				int tmp3 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(318)
				int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(318)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(318)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(318)
				int tmp7 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(318)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(318)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(318)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(318)
				int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(318)
				int tmp12 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(318)
				int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(318)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(318)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(318)
				int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(318)
				int tmp17 = (int)255;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(318)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(318)
				fillColor = tmp18;
			}
			HX_STACK_LINE(318)
			(int)255;
		}
		HX_STACK_LINE(322)
		::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(322)
		::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(323)
		bool tmp4 = (data == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(323)
		if ((tmp4)){
			HX_STACK_LINE(323)
			return null();
		}
		HX_STACK_LINE(326)
		bool tmp5 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(326)
		if ((tmp5)){
			HX_STACK_LINE(326)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),(int((int(fillColor) >> int((int)16))) & int((int)65535)),(int(fillColor) & int((int)65535)));
		}
		else{
			HX_STACK_LINE(330)
			int tmp6 = image->buffer->format;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(330)
			int format1 = tmp6;		HX_STACK_VAR(format1,"format1");
			HX_STACK_LINE(331)
			bool tmp7 = image->buffer->premultiplied;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(331)
			bool premultiplied = tmp7;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(333)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp8 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(333)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp8;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(334)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(336)
			{
				HX_STACK_LINE(336)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(336)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(336)
				while((true)){
					HX_STACK_LINE(336)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(336)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(336)
					if ((tmp10)){
						HX_STACK_LINE(336)
						break;
					}
					HX_STACK_LINE(336)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(336)
					int y = tmp11;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(338)
					int tmp12 = dataView->offset;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(338)
					int tmp13 = (dataView->stride * y);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(338)
					int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(338)
					row = tmp14;
					HX_STACK_LINE(340)
					{
						HX_STACK_LINE(340)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(340)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(340)
						while((true)){
							HX_STACK_LINE(340)
							bool tmp15 = (_g3 < _g2);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(340)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(340)
							if ((tmp16)){
								HX_STACK_LINE(340)
								break;
							}
							HX_STACK_LINE(340)
							int tmp17 = (_g3)++;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(340)
							int x = tmp17;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(342)
							{
								HX_STACK_LINE(342)
								int tmp18 = row;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(342)
								int tmp19 = (x * (int)4);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(342)
								int tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(342)
								int offset = tmp20;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(342)
								bool tmp21 = premultiplied;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(342)
								if ((tmp21)){
									HX_STACK_LINE(342)
									int tmp22 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(342)
									bool tmp23 = (tmp22 == (int)0);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(342)
									if ((tmp23)){
										HX_STACK_LINE(342)
										bool tmp24 = (fillColor != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(342)
										if ((tmp24)){
											HX_STACK_LINE(342)
											fillColor = (int)0;
										}
									}
									else{
										HX_STACK_LINE(342)
										int tmp24 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(342)
										bool tmp25 = (tmp24 != (int)255);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(342)
										if ((tmp25)){
											HX_STACK_LINE(342)
											Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::lime::utils::ArrayBufferView tmp27 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(342)
												::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(342)
												{
													HX_STACK_LINE(342)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(342)
													tmp26 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(fillColor) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(342)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp26;
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												int tmp27 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(342)
												int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(342)
												int tmp29 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(342)
												int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(342)
												int tmp31 = (int(tmp30) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(342)
												int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(342)
												int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(342)
												int tmp34 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(342)
												int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(342)
												int tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(342)
												int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(342)
												int tmp38 = (int(tmp37) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(342)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(342)
												int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(342)
												int tmp41 = (int(tmp33) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(342)
												int tmp42 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(342)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(342)
												int tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(342)
												int tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(342)
												int tmp46 = (int(tmp45) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(342)
												int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(342)
												int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(342)
												int tmp49 = (int(tmp41) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(342)
												int tmp50 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(342)
												int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(342)
												int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(342)
												fillColor = tmp52;
											}
										}
									}
								}
								HX_STACK_LINE(342)
								int tmp22 = format1;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(342)
								switch( (int)(tmp22)){
									case (int)2: {
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(342)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(342)
												val;
											}
										}
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(342)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(342)
												val;
											}
										}
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(342)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(342)
												val;
											}
										}
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int val = tmp23;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(342)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(342)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(342)
												val;
											}
										}
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(342)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(342)
												val;
											}
										}
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(342)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(342)
												val;
											}
										}
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int val = tmp23;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(342)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int val = tmp23;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(342)
												val;
											}
										}
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(342)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(342)
												val;
											}
										}
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(342)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(342)
												val;
											}
										}
										HX_STACK_LINE(342)
										{
											HX_STACK_LINE(342)
											int tmp23 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(342)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(342)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(342)
											{
												HX_STACK_LINE(342)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(342)
												val;
											}
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(350)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,fillRect,(void))

Void ImageDataUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","floodFill",0xfbc79ff3,"lime.graphics.utils.ImageDataUtil.floodFill","lime/graphics/utils/ImageDataUtil.hx",355,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(357)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(357)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(358)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(358)
		if ((tmp1)){
			HX_STACK_LINE(358)
			return null();
		}
		HX_STACK_LINE(360)
		bool tmp2 = (format == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(360)
		if ((tmp2)){
			HX_STACK_LINE(360)
			int tmp3 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			int tmp4 = (int(tmp3) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(360)
			int tmp5 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(360)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(360)
			int tmp7 = (int(tmp4) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(360)
			color = tmp7;
		}
		HX_STACK_LINE(363)
		bool tmp3 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(363)
		if ((tmp3)){
			HX_STACK_LINE(363)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill.call(hx::DynamicPtr(image),x,y,(int((int(color) >> int((int)16))) & int((int)65535)),(int(color) & int((int)65535)));
		}
		else{
			HX_STACK_LINE(367)
			int tmp4 = image->buffer->format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(367)
			int format1 = tmp4;		HX_STACK_VAR(format1,"format1");
			HX_STACK_LINE(368)
			bool tmp5 = image->buffer->premultiplied;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(368)
			bool premultiplied = tmp5;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(370)
			int fillColor = color;		HX_STACK_VAR(fillColor,"fillColor");
			HX_STACK_LINE(372)
			int hitColor;		HX_STACK_VAR(hitColor,"hitColor");
			HX_STACK_LINE(373)
			{
				HX_STACK_LINE(373)
				int tmp6 = (y + image->offsetY);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(373)
				int tmp7 = image->buffer->width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(373)
				int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(373)
				int tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(373)
				int tmp10 = (x + image->offsetX);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(373)
				int tmp11 = (tmp10 * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(373)
				int tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(373)
				int offset = tmp12;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(373)
				int tmp13 = format1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(373)
				switch( (int)(tmp13)){
					case (int)2: {
						HX_STACK_LINE(373)
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(373)
						Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(373)
						int r = tmp15;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(373)
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(373)
						Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(373)
						int g = tmp17;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(373)
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(373)
						Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(373)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(373)
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(373)
						Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(373)
						int a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(373)
						int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(373)
						int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(373)
						int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(373)
						int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(373)
						int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(373)
						int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(373)
						int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(373)
						int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(373)
						int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(373)
						int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(373)
						hitColor = tmp31;
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(373)
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(373)
						Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(373)
						int r = tmp15;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(373)
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(373)
						Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(373)
						int g = tmp17;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(373)
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(373)
						Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(373)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(373)
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(373)
						Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(373)
						int a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(373)
						int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(373)
						int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(373)
						int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(373)
						int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(373)
						int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(373)
						int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(373)
						int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(373)
						int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(373)
						int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(373)
						int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(373)
						hitColor = tmp31;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(373)
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(373)
						Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(373)
						int r = tmp15;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(373)
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(373)
						Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(373)
						int g = tmp17;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(373)
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(373)
						Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(373)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(373)
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(373)
						Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(373)
						int a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(373)
						int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(373)
						int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(373)
						int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(373)
						int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(373)
						int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(373)
						int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(373)
						int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(373)
						int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(373)
						int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(373)
						int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(373)
						hitColor = tmp31;
					}
					;break;
				}
				HX_STACK_LINE(373)
				bool tmp14 = premultiplied;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(373)
				if ((tmp14)){
					HX_STACK_LINE(373)
					int tmp15 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(373)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(373)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(373)
					if ((tmp16)){
						HX_STACK_LINE(373)
						int tmp18 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(373)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(373)
						tmp17 = (tmp19 != (int)255);
					}
					else{
						HX_STACK_LINE(373)
						tmp17 = false;
					}
					HX_STACK_LINE(373)
					if ((tmp17)){
						HX_STACK_LINE(373)
						int tmp18 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(373)
						Float tmp19 = (Float(((Float)255.0)) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(373)
						::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp19;
						HX_STACK_LINE(373)
						{
							HX_STACK_LINE(373)
							Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(373)
							{
								HX_STACK_LINE(373)
								::lime::utils::ArrayBufferView tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(373)
								::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(373)
								int tmp22 = (int(hitColor) >> int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(373)
								int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(373)
								Float tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(373)
								Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(373)
								int tmp26 = ::Math_obj::round(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(373)
								int idx = tmp26;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(373)
								int tmp27 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(373)
								tmp20 = (int(tmp27) & int((int)255));
							}
							HX_STACK_LINE(373)
							int r = tmp20;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(373)
							Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(373)
							{
								HX_STACK_LINE(373)
								::lime::utils::ArrayBufferView tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(373)
								::lime::utils::ArrayBufferView this1 = tmp22;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(373)
								int tmp23 = (int(hitColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(373)
								int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(373)
								Float tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(373)
								Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(373)
								int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(373)
								int idx = tmp27;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(373)
								int tmp28 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(373)
								tmp21 = (int(tmp28) & int((int)255));
							}
							HX_STACK_LINE(373)
							int g = tmp21;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(373)
							Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(373)
							{
								HX_STACK_LINE(373)
								::lime::utils::ArrayBufferView tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(373)
								::lime::utils::ArrayBufferView this1 = tmp23;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(373)
								int tmp24 = (int(hitColor) >> int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(373)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(373)
								Float tmp26 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(373)
								Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(373)
								int tmp28 = ::Math_obj::round(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(373)
								int idx = tmp28;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(373)
								int tmp29 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(373)
								tmp22 = (int(tmp29) & int((int)255));
							}
							HX_STACK_LINE(373)
							int b = tmp22;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(373)
							int tmp23 = (int(r) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(373)
							int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(373)
							int tmp25 = (int(g) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(373)
							int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(373)
							int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(373)
							int tmp28 = (int(b) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(373)
							int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(373)
							int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(373)
							int tmp31 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(373)
							int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(373)
							int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(373)
							hitColor = tmp33;
						}
					}
				}
			}
			HX_STACK_LINE(375)
			bool tmp6 = image->get_transparent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(375)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(375)
			if ((tmp7)){
				HX_STACK_LINE(377)
				{
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						int tmp8 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(377)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(377)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(377)
						int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(377)
						int tmp12 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(377)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(377)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(377)
						int tmp15 = (int(tmp14) << int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(377)
						int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(377)
						int tmp17 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(377)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(377)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(377)
						int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(377)
						int tmp21 = (int(tmp16) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(377)
						int tmp22 = (int)255;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(377)
						int tmp23 = (int(tmp21) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(377)
						fillColor = tmp23;
					}
					HX_STACK_LINE(377)
					(int)255;
				}
				HX_STACK_LINE(378)
				{
					HX_STACK_LINE(378)
					{
						HX_STACK_LINE(378)
						int tmp8 = (int(hitColor) >> int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(378)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(378)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(378)
						int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(378)
						int tmp12 = (int(hitColor) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(378)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(378)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(378)
						int tmp15 = (int(tmp14) << int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(378)
						int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(378)
						int tmp17 = (int(hitColor) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(378)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(378)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(378)
						int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(378)
						int tmp21 = (int(tmp16) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(378)
						int tmp22 = (int)255;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(378)
						int tmp23 = (int(tmp21) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(378)
						hitColor = tmp23;
					}
					HX_STACK_LINE(378)
					(int)255;
				}
			}
			HX_STACK_LINE(382)
			bool tmp8 = (fillColor == hitColor);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(382)
			if ((tmp8)){
				HX_STACK_LINE(382)
				return null();
			}
			HX_STACK_LINE(384)
			Array< int > dx = Array_obj< int >::__new().Add((int)0).Add((int)-1).Add((int)1).Add((int)0);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(385)
			Array< int > dy = Array_obj< int >::__new().Add((int)-1).Add((int)0).Add((int)0).Add((int)1);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(387)
			int tmp9 = image->offsetX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(387)
			int tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(387)
			int minX = tmp10;		HX_STACK_VAR(minX,"minX");
			HX_STACK_LINE(388)
			int tmp11 = image->offsetY;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(388)
			int tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(388)
			int minY = tmp12;		HX_STACK_VAR(minY,"minY");
			HX_STACK_LINE(389)
			int tmp13 = (minX + image->width);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(389)
			int maxX = tmp13;		HX_STACK_VAR(maxX,"maxX");
			HX_STACK_LINE(390)
			int tmp14 = (minY + image->height);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(390)
			int maxY = tmp14;		HX_STACK_VAR(maxY,"maxY");
			HX_STACK_LINE(392)
			Array< int > queue = Array_obj< int >::__new();		HX_STACK_VAR(queue,"queue");
			HX_STACK_LINE(393)
			int tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(393)
			queue->push(tmp15);
			HX_STACK_LINE(394)
			int tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(394)
			queue->push(tmp16);
			HX_STACK_LINE(396)
			Dynamic curPointX;		HX_STACK_VAR(curPointX,"curPointX");
			HX_STACK_LINE(396)
			Dynamic curPointY;		HX_STACK_VAR(curPointY,"curPointY");
			HX_STACK_LINE(396)
			int nextPointX;		HX_STACK_VAR(nextPointX,"nextPointX");
			HX_STACK_LINE(396)
			int nextPointY;		HX_STACK_VAR(nextPointY,"nextPointY");
			HX_STACK_LINE(396)
			int nextPointOffset;		HX_STACK_VAR(nextPointOffset,"nextPointOffset");
			HX_STACK_LINE(396)
			int readColor;		HX_STACK_VAR(readColor,"readColor");
			HX_STACK_LINE(398)
			while((true)){
				HX_STACK_LINE(398)
				bool tmp17 = (queue->length > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(398)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(398)
				if ((tmp18)){
					HX_STACK_LINE(398)
					break;
				}
				HX_STACK_LINE(400)
				Dynamic tmp19 = queue->pop();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(400)
				curPointY = tmp19;
				HX_STACK_LINE(401)
				Dynamic tmp20 = queue->pop();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(401)
				curPointX = tmp20;
				HX_STACK_LINE(403)
				{
					HX_STACK_LINE(403)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(403)
					while((true)){
						HX_STACK_LINE(403)
						bool tmp21 = (_g < (int)4);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(403)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(403)
						if ((tmp22)){
							HX_STACK_LINE(403)
							break;
						}
						HX_STACK_LINE(403)
						int tmp23 = (_g)++;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(403)
						int i = tmp23;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(405)
						Dynamic tmp24 = curPointX;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(405)
						int tmp25 = dx->__get(i);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(405)
						int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(405)
						nextPointX = tmp26;
						HX_STACK_LINE(406)
						Dynamic tmp27 = curPointY;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(406)
						int tmp28 = dy->__get(i);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(406)
						int tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(406)
						nextPointY = tmp29;
						HX_STACK_LINE(408)
						bool tmp30 = (nextPointX < minX);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(408)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(408)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(408)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(408)
						if ((tmp32)){
							HX_STACK_LINE(408)
							tmp33 = (nextPointY < minY);
						}
						else{
							HX_STACK_LINE(408)
							tmp33 = true;
						}
						HX_STACK_LINE(408)
						bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(408)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(408)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(408)
						if ((tmp35)){
							HX_STACK_LINE(408)
							tmp36 = (nextPointX >= maxX);
						}
						else{
							HX_STACK_LINE(408)
							tmp36 = true;
						}
						HX_STACK_LINE(408)
						bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(408)
						bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(408)
						if ((tmp37)){
							HX_STACK_LINE(408)
							tmp38 = (nextPointY >= maxY);
						}
						else{
							HX_STACK_LINE(408)
							tmp38 = true;
						}
						HX_STACK_LINE(408)
						if ((tmp38)){
							HX_STACK_LINE(410)
							continue;
						}
						HX_STACK_LINE(414)
						int tmp39 = (nextPointY * image->width);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(414)
						int tmp40 = nextPointX;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(414)
						int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(414)
						int tmp42 = (tmp41 * (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(414)
						nextPointOffset = tmp42;
						HX_STACK_LINE(415)
						{
							HX_STACK_LINE(415)
							int tmp43 = format1;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(415)
							switch( (int)(tmp43)){
								case (int)2: {
									HX_STACK_LINE(415)
									int tmp44 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(415)
									Dynamic tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(415)
									int r = tmp45;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(415)
									int tmp46 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(415)
									Dynamic tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(415)
									int g = tmp47;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(415)
									int tmp48 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(415)
									Dynamic tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(415)
									int b = tmp49;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(415)
									int tmp50 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(415)
									Dynamic tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(415)
									int a = tmp51;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(415)
									int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(415)
									int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(415)
									int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(415)
									int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(415)
									int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(415)
									int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(415)
									int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(415)
									int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(415)
									int tmp60 = (int(a) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(415)
									int tmp61 = (int(tmp59) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(415)
									readColor = tmp61;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(415)
									int tmp44 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(415)
									Dynamic tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(415)
									int r = tmp45;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(415)
									int tmp46 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(415)
									Dynamic tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(415)
									int g = tmp47;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(415)
									int tmp48 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(415)
									Dynamic tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(415)
									int b = tmp49;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(415)
									int tmp50 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(415)
									Dynamic tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(415)
									int a = tmp51;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(415)
									int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(415)
									int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(415)
									int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(415)
									int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(415)
									int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(415)
									int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(415)
									int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(415)
									int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(415)
									int tmp60 = (int(a) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(415)
									int tmp61 = (int(tmp59) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(415)
									readColor = tmp61;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(415)
									int tmp44 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(415)
									Dynamic tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(415)
									int r = tmp45;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(415)
									int tmp46 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(415)
									Dynamic tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(415)
									int g = tmp47;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(415)
									int tmp48 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(415)
									Dynamic tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(415)
									int b = tmp49;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(415)
									int tmp50 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(415)
									Dynamic tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(415)
									int a = tmp51;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(415)
									int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(415)
									int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(415)
									int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(415)
									int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(415)
									int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(415)
									int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(415)
									int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(415)
									int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(415)
									int tmp60 = (int(a) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(415)
									int tmp61 = (int(tmp59) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(415)
									readColor = tmp61;
								}
								;break;
							}
							HX_STACK_LINE(415)
							bool tmp44 = premultiplied;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(415)
							if ((tmp44)){
								HX_STACK_LINE(415)
								int tmp45 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(415)
								bool tmp46 = (tmp45 != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(415)
								bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(415)
								if ((tmp46)){
									HX_STACK_LINE(415)
									int tmp48 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(415)
									int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(415)
									tmp47 = (tmp49 != (int)255);
								}
								else{
									HX_STACK_LINE(415)
									tmp47 = false;
								}
								HX_STACK_LINE(415)
								if ((tmp47)){
									HX_STACK_LINE(415)
									int tmp48 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(415)
									Float tmp49 = (Float(((Float)255.0)) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(415)
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp49;
									HX_STACK_LINE(415)
									{
										HX_STACK_LINE(415)
										Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(415)
										{
											HX_STACK_LINE(415)
											::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(415)
											::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(415)
											int tmp52 = (int(readColor) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(415)
											int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(415)
											Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(415)
											Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(415)
											int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(415)
											int idx = tmp56;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(415)
											int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(415)
											tmp50 = (int(tmp57) & int((int)255));
										}
										HX_STACK_LINE(415)
										int r = tmp50;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(415)
										Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(415)
										{
											HX_STACK_LINE(415)
											::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(415)
											::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(415)
											int tmp53 = (int(readColor) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(415)
											int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(415)
											Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(415)
											Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(415)
											int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(415)
											int idx = tmp57;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(415)
											int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(415)
											tmp51 = (int(tmp58) & int((int)255));
										}
										HX_STACK_LINE(415)
										int g = tmp51;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(415)
										Dynamic tmp52;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(415)
										{
											HX_STACK_LINE(415)
											::lime::utils::ArrayBufferView tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(415)
											::lime::utils::ArrayBufferView this1 = tmp53;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(415)
											int tmp54 = (int(readColor) >> int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(415)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(415)
											Float tmp56 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(415)
											Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(415)
											int tmp58 = ::Math_obj::round(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(415)
											int idx = tmp58;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(415)
											int tmp59 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(415)
											tmp52 = (int(tmp59) & int((int)255));
										}
										HX_STACK_LINE(415)
										int b = tmp52;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(415)
										int tmp53 = (int(r) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(415)
										int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(415)
										int tmp55 = (int(g) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(415)
										int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(415)
										int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(415)
										int tmp58 = (int(b) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(415)
										int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(415)
										int tmp60 = (int(tmp57) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(415)
										int tmp61 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(415)
										int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(415)
										int tmp63 = (int(tmp60) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(415)
										readColor = tmp63;
									}
								}
							}
						}
						HX_STACK_LINE(417)
						bool tmp43 = (readColor == hitColor);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(417)
						if ((tmp43)){
							HX_STACK_LINE(419)
							{
								HX_STACK_LINE(419)
								bool tmp44 = premultiplied;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(419)
								if ((tmp44)){
									HX_STACK_LINE(419)
									int tmp45 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(419)
									bool tmp46 = (tmp45 == (int)0);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(419)
									if ((tmp46)){
										HX_STACK_LINE(419)
										bool tmp47 = (fillColor != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(419)
										if ((tmp47)){
											HX_STACK_LINE(419)
											fillColor = (int)0;
										}
									}
									else{
										HX_STACK_LINE(419)
										int tmp47 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(419)
										bool tmp48 = (tmp47 != (int)255);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(419)
										if ((tmp48)){
											HX_STACK_LINE(419)
											Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(419)
												::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(419)
												{
													HX_STACK_LINE(419)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(419)
													tmp49 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(fillColor) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(419)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp49;
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												int tmp50 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(419)
												int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(419)
												int tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(419)
												int tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(419)
												int tmp54 = (int(tmp53) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(419)
												int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(419)
												int tmp56 = (int(tmp55) << int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(419)
												int tmp57 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(419)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(419)
												int tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(419)
												int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(419)
												int tmp61 = (int(tmp60) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(419)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(419)
												int tmp63 = (int(tmp62) << int((int)16));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(419)
												int tmp64 = (int(tmp56) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(419)
												int tmp65 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(419)
												int tmp66 = (int(tmp65) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(419)
												int tmp67 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(419)
												int tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(419)
												int tmp69 = (int(tmp68) >> int((int)16));		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(419)
												int tmp70 = (int(tmp69) & int((int)255));		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(419)
												int tmp71 = (int(tmp70) << int((int)8));		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(419)
												int tmp72 = (int(tmp64) | int(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(419)
												int tmp73 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(419)
												int tmp74 = (int(tmp73) & int((int)255));		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(419)
												int tmp75 = (int(tmp72) | int(tmp74));		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(419)
												fillColor = tmp75;
											}
										}
									}
								}
								HX_STACK_LINE(419)
								int tmp45 = format1;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(419)
								switch( (int)(tmp45)){
									case (int)2: {
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(419)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
												HX_STACK_LINE(419)
												val;
											}
										}
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(419)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
												HX_STACK_LINE(419)
												val;
											}
										}
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(419)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
												HX_STACK_LINE(419)
												val;
											}
										}
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int val = tmp46;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
												HX_STACK_LINE(419)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(419)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
												HX_STACK_LINE(419)
												val;
											}
										}
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(419)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
												HX_STACK_LINE(419)
												val;
											}
										}
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(419)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
												HX_STACK_LINE(419)
												val;
											}
										}
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int val = tmp46;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
												HX_STACK_LINE(419)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int val = tmp46;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
												HX_STACK_LINE(419)
												val;
											}
										}
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(419)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
												HX_STACK_LINE(419)
												val;
											}
										}
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(419)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
												HX_STACK_LINE(419)
												val;
											}
										}
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int tmp46 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(419)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(419)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(419)
											{
												HX_STACK_LINE(419)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
												HX_STACK_LINE(419)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(421)
							int tmp44 = nextPointX;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(421)
							queue->push(tmp44);
							HX_STACK_LINE(422)
							int tmp45 = nextPointY;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(422)
							queue->push(tmp45);
						}
					}
				}
			}
		}
		HX_STACK_LINE(432)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,floodFill,(void))

::lime::math::Rectangle ImageDataUtil_obj::getColorBoundsRect( ::lime::graphics::Image image,int mask,int color,hx::Null< bool >  __o_findColor,int format){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getColorBoundsRect",0xfea06eb4,"lime.graphics.utils.ImageDataUtil.getColorBoundsRect","lime/graphics/utils/ImageDataUtil.hx",437,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(439)
		int tmp = (image->width + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(439)
		int left = tmp;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(440)
		int right = (int)0;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(441)
		int tmp1 = (image->height + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(441)
		int top = tmp1;		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(442)
		int bottom = (int)0;		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(444)
		int _color;		HX_STACK_VAR(_color,"_color");
		HX_STACK_LINE(444)
		int _mask;		HX_STACK_VAR(_mask,"_mask");
		HX_STACK_LINE(446)
		int tmp2 = format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(446)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(450)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(450)
				{
					HX_STACK_LINE(450)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(450)
					{
						HX_STACK_LINE(450)
						int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(450)
						{
							HX_STACK_LINE(450)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(450)
							tmp4 = rgba;
						}
						HX_STACK_LINE(450)
						int rgba = tmp4;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(450)
						{
							HX_STACK_LINE(450)
							int tmp5 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(450)
							int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(450)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(450)
							int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(450)
							int tmp9 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(450)
							int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(450)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(450)
							int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(450)
							int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(450)
							int tmp14 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(450)
							int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(450)
							int tmp16 = (int(tmp15) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(450)
							int tmp17 = (int(tmp13) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(450)
							int tmp18 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(450)
							int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(450)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(450)
							int tmp21 = (int(tmp17) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(450)
							rgba = tmp21;
						}
						HX_STACK_LINE(450)
						tmp3 = rgba;
					}
				}
				HX_STACK_LINE(450)
				_color = tmp3;
				HX_STACK_LINE(451)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(451)
				{
					HX_STACK_LINE(451)
					int argb = mask;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(451)
					{
						HX_STACK_LINE(451)
						int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(451)
						{
							HX_STACK_LINE(451)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(451)
							tmp5 = rgba;
						}
						HX_STACK_LINE(451)
						int rgba = tmp5;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(451)
						{
							HX_STACK_LINE(451)
							int tmp6 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(451)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(451)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(451)
							int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(451)
							int tmp10 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(451)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(451)
							int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(451)
							int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(451)
							int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(451)
							int tmp15 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(451)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(451)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(451)
							int tmp18 = (int(tmp14) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(451)
							int tmp19 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(451)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(451)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(451)
							int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(451)
							rgba = tmp22;
						}
						HX_STACK_LINE(451)
						tmp4 = rgba;
					}
				}
				HX_STACK_LINE(451)
				_mask = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(455)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(455)
				{
					HX_STACK_LINE(455)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(455)
					{
						HX_STACK_LINE(455)
						int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(455)
						{
							HX_STACK_LINE(455)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(455)
							tmp4 = rgba;
						}
						HX_STACK_LINE(455)
						int rgba = tmp4;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(455)
						{
							HX_STACK_LINE(455)
							int tmp5 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(455)
							int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(455)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(455)
							int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(455)
							int tmp9 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(455)
							int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(455)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(455)
							int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(455)
							int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(455)
							int tmp14 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(455)
							int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(455)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(455)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(455)
							int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(455)
							int tmp19 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(455)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(455)
							int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(455)
							rgba = tmp21;
						}
						HX_STACK_LINE(455)
						tmp3 = rgba;
					}
				}
				HX_STACK_LINE(455)
				_color = tmp3;
				HX_STACK_LINE(456)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(456)
				{
					HX_STACK_LINE(456)
					int bgra = mask;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(456)
					{
						HX_STACK_LINE(456)
						int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(456)
						{
							HX_STACK_LINE(456)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(456)
							tmp5 = rgba;
						}
						HX_STACK_LINE(456)
						int rgba = tmp5;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(456)
						{
							HX_STACK_LINE(456)
							int tmp6 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(456)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(456)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(456)
							int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(456)
							int tmp10 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(456)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(456)
							int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(456)
							int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(456)
							int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(456)
							int tmp15 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(456)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(456)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(456)
							int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(456)
							int tmp19 = (int(tmp14) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(456)
							int tmp20 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(456)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(456)
							int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(456)
							rgba = tmp22;
						}
						HX_STACK_LINE(456)
						tmp4 = rgba;
					}
				}
				HX_STACK_LINE(456)
				_mask = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(460)
				_color = color;
				HX_STACK_LINE(461)
				_mask = mask;
			}
		}
		HX_STACK_LINE(465)
		bool tmp3 = image->get_transparent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(465)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(465)
		if ((tmp4)){
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				{
					HX_STACK_LINE(467)
					int tmp5 = (int(_color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(467)
					int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(467)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(467)
					int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(467)
					int tmp9 = (int(_color) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(467)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(467)
					int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(467)
					int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(467)
					int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(467)
					int tmp14 = (int(_color) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(467)
					int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(467)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(467)
					int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(467)
					int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(467)
					int tmp19 = (int)255;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(467)
					int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(467)
					_color = tmp20;
				}
				HX_STACK_LINE(467)
				(int)255;
			}
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				{
					HX_STACK_LINE(468)
					int tmp5 = (int(_mask) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(468)
					int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(468)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(468)
					int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(468)
					int tmp9 = (int(_mask) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(468)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(468)
					int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(468)
					int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(468)
					int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(468)
					int tmp14 = (int(_mask) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(468)
					int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(468)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(468)
					int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(468)
					int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(468)
					int tmp19 = (int)255;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(468)
					int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(468)
					_mask = tmp20;
				}
				HX_STACK_LINE(468)
				(int)255;
			}
		}
		HX_STACK_LINE(472)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(472)
		bool hit;		HX_STACK_VAR(hit,"hit");
		HX_STACK_LINE(474)
		{
			HX_STACK_LINE(474)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(474)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(474)
			while((true)){
				HX_STACK_LINE(474)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(474)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(474)
				if ((tmp6)){
					HX_STACK_LINE(474)
					break;
				}
				HX_STACK_LINE(474)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(474)
				int x = tmp7;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(476)
				hit = false;
				HX_STACK_LINE(478)
				{
					HX_STACK_LINE(478)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(478)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(478)
					while((true)){
						HX_STACK_LINE(478)
						bool tmp8 = (_g3 < _g2);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(478)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(478)
						if ((tmp9)){
							HX_STACK_LINE(478)
							break;
						}
						HX_STACK_LINE(478)
						int tmp10 = (_g3)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(478)
						int y = tmp10;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(480)
						int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(480)
						int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(480)
						int tmp13 = image->getPixel32(tmp11,tmp12,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(480)
						pixel = tmp13;
						HX_STACK_LINE(481)
						bool tmp14 = findColor;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(481)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(481)
						if ((tmp14)){
							HX_STACK_LINE(481)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(481)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(481)
							tmp15 = (tmp16 == tmp17);
						}
						else{
							HX_STACK_LINE(481)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(481)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(481)
							tmp15 = (tmp16 != tmp17);
						}
						HX_STACK_LINE(481)
						hit = tmp15;
						HX_STACK_LINE(483)
						bool tmp16 = hit;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(483)
						if ((tmp16)){
							HX_STACK_LINE(485)
							bool tmp17 = (x < left);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(485)
							if ((tmp17)){
								HX_STACK_LINE(485)
								left = x;
							}
							HX_STACK_LINE(486)
							break;
						}
					}
				}
				HX_STACK_LINE(492)
				bool tmp8 = hit;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(492)
				if ((tmp8)){
					HX_STACK_LINE(494)
					break;
				}
			}
		}
		HX_STACK_LINE(500)
		int ix;		HX_STACK_VAR(ix,"ix");
		HX_STACK_LINE(502)
		{
			HX_STACK_LINE(502)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(502)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(502)
			while((true)){
				HX_STACK_LINE(502)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(502)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(502)
				if ((tmp6)){
					HX_STACK_LINE(502)
					break;
				}
				HX_STACK_LINE(502)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(502)
				int x = tmp7;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(504)
				int tmp8 = (image->width - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(504)
				int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(504)
				int tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(504)
				ix = tmp10;
				HX_STACK_LINE(505)
				hit = false;
				HX_STACK_LINE(507)
				{
					HX_STACK_LINE(507)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(507)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(507)
					while((true)){
						HX_STACK_LINE(507)
						bool tmp11 = (_g3 < _g2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(507)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(507)
						if ((tmp12)){
							HX_STACK_LINE(507)
							break;
						}
						HX_STACK_LINE(507)
						int tmp13 = (_g3)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(507)
						int y = tmp13;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(509)
						int tmp14 = ix;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(509)
						int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(509)
						int tmp16 = image->getPixel32(tmp14,tmp15,(int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(509)
						pixel = tmp16;
						HX_STACK_LINE(510)
						bool tmp17 = findColor;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(510)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(510)
						if ((tmp17)){
							HX_STACK_LINE(510)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							tmp18 = (tmp19 == tmp20);
						}
						else{
							HX_STACK_LINE(510)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							tmp18 = (tmp19 != tmp20);
						}
						HX_STACK_LINE(510)
						hit = tmp18;
						HX_STACK_LINE(512)
						bool tmp19 = hit;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(512)
						if ((tmp19)){
							HX_STACK_LINE(514)
							bool tmp20 = (ix > right);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(514)
							if ((tmp20)){
								HX_STACK_LINE(514)
								right = ix;
							}
							HX_STACK_LINE(515)
							break;
						}
					}
				}
				HX_STACK_LINE(521)
				bool tmp11 = hit;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(521)
				if ((tmp11)){
					HX_STACK_LINE(523)
					break;
				}
			}
		}
		HX_STACK_LINE(529)
		{
			HX_STACK_LINE(529)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(529)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(529)
			while((true)){
				HX_STACK_LINE(529)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(529)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(529)
				if ((tmp6)){
					HX_STACK_LINE(529)
					break;
				}
				HX_STACK_LINE(529)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(529)
				int y = tmp7;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(531)
				hit = false;
				HX_STACK_LINE(533)
				{
					HX_STACK_LINE(533)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(533)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(533)
					while((true)){
						HX_STACK_LINE(533)
						bool tmp8 = (_g3 < _g2);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(533)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(533)
						if ((tmp9)){
							HX_STACK_LINE(533)
							break;
						}
						HX_STACK_LINE(533)
						int tmp10 = (_g3)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(533)
						int x = tmp10;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(535)
						int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(535)
						int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(535)
						int tmp13 = image->getPixel32(tmp11,tmp12,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(535)
						pixel = tmp13;
						HX_STACK_LINE(536)
						bool tmp14 = findColor;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(536)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(536)
						if ((tmp14)){
							HX_STACK_LINE(536)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(536)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(536)
							tmp15 = (tmp16 == tmp17);
						}
						else{
							HX_STACK_LINE(536)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(536)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(536)
							tmp15 = (tmp16 != tmp17);
						}
						HX_STACK_LINE(536)
						hit = tmp15;
						HX_STACK_LINE(538)
						bool tmp16 = hit;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(538)
						if ((tmp16)){
							HX_STACK_LINE(540)
							bool tmp17 = (y < top);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(540)
							if ((tmp17)){
								HX_STACK_LINE(540)
								top = y;
							}
							HX_STACK_LINE(541)
							break;
						}
					}
				}
				HX_STACK_LINE(547)
				bool tmp8 = hit;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(547)
				if ((tmp8)){
					HX_STACK_LINE(549)
					break;
				}
			}
		}
		HX_STACK_LINE(555)
		int iy;		HX_STACK_VAR(iy,"iy");
		HX_STACK_LINE(557)
		{
			HX_STACK_LINE(557)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(557)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(557)
			while((true)){
				HX_STACK_LINE(557)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(557)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(557)
				if ((tmp6)){
					HX_STACK_LINE(557)
					break;
				}
				HX_STACK_LINE(557)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(557)
				int y = tmp7;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(559)
				int tmp8 = (image->height - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(559)
				int tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(559)
				int tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(559)
				iy = tmp10;
				HX_STACK_LINE(560)
				hit = false;
				HX_STACK_LINE(562)
				{
					HX_STACK_LINE(562)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(562)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(562)
					while((true)){
						HX_STACK_LINE(562)
						bool tmp11 = (_g3 < _g2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(562)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(562)
						if ((tmp12)){
							HX_STACK_LINE(562)
							break;
						}
						HX_STACK_LINE(562)
						int tmp13 = (_g3)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(562)
						int x = tmp13;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(564)
						int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(564)
						int tmp15 = iy;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(564)
						int tmp16 = image->getPixel32(tmp14,tmp15,(int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(564)
						pixel = tmp16;
						HX_STACK_LINE(565)
						bool tmp17 = findColor;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(565)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(565)
						if ((tmp17)){
							HX_STACK_LINE(565)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(565)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(565)
							tmp18 = (tmp19 == tmp20);
						}
						else{
							HX_STACK_LINE(565)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(565)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(565)
							tmp18 = (tmp19 != tmp20);
						}
						HX_STACK_LINE(565)
						hit = tmp18;
						HX_STACK_LINE(567)
						bool tmp19 = hit;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(567)
						if ((tmp19)){
							HX_STACK_LINE(569)
							bool tmp20 = (iy > bottom);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(569)
							if ((tmp20)){
								HX_STACK_LINE(569)
								bottom = iy;
							}
							HX_STACK_LINE(570)
							break;
						}
					}
				}
				HX_STACK_LINE(576)
				bool tmp11 = hit;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(576)
				if ((tmp11)){
					HX_STACK_LINE(578)
					break;
				}
			}
		}
		HX_STACK_LINE(584)
		int tmp5 = (right - left);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(584)
		int w = tmp5;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(585)
		int tmp6 = (bottom - top);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(585)
		int h = tmp6;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(587)
		bool tmp7 = (w > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(587)
		if ((tmp7)){
			HX_STACK_LINE(587)
			(w)++;
		}
		HX_STACK_LINE(588)
		bool tmp8 = (h > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(588)
		if ((tmp8)){
			HX_STACK_LINE(588)
			(h)++;
		}
		HX_STACK_LINE(590)
		bool tmp9 = (w < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(590)
		if ((tmp9)){
			HX_STACK_LINE(590)
			w = (int)0;
		}
		HX_STACK_LINE(591)
		bool tmp10 = (h < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(591)
		if ((tmp10)){
			HX_STACK_LINE(591)
			h = (int)0;
		}
		HX_STACK_LINE(593)
		bool tmp11 = (left == right);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(593)
		if ((tmp11)){
			HX_STACK_LINE(593)
			w = (int)1;
		}
		HX_STACK_LINE(594)
		bool tmp12 = (top == bottom);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(594)
		if ((tmp12)){
			HX_STACK_LINE(594)
			h = (int)1;
		}
		HX_STACK_LINE(596)
		bool tmp13 = (left > image->width);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(596)
		if ((tmp13)){
			HX_STACK_LINE(596)
			left = (int)0;
		}
		HX_STACK_LINE(597)
		bool tmp14 = (top > image->height);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(597)
		if ((tmp14)){
			HX_STACK_LINE(597)
			top = (int)0;
		}
		HX_STACK_LINE(599)
		::lime::math::Rectangle tmp15 = ::lime::math::Rectangle_obj::__new(left,top,w,h);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(599)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,getColorBoundsRect,return )

int ImageDataUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel",0xcbf5f1be,"lime.graphics.utils.ImageDataUtil.getPixel","lime/graphics/utils/ImageDataUtil.hx",604,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(606)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(608)
	{
		HX_STACK_LINE(608)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(608)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(608)
		int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(608)
		int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(608)
		int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(608)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(608)
		int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(608)
		int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(608)
		int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(608)
		int offset = tmp7;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(608)
		int tmp8 = image->buffer->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(608)
		switch( (int)(tmp8)){
			case (int)2: {
				HX_STACK_LINE(608)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(608)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(608)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(608)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(608)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(608)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(608)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(608)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(608)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(608)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(608)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(608)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(608)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(608)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(608)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(608)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(608)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(608)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(608)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(608)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(608)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(608)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(608)
				pixel = tmp26;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(608)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(608)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(608)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(608)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(608)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(608)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(608)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(608)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(608)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(608)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(608)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(608)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(608)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(608)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(608)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(608)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(608)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(608)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(608)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(608)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(608)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(608)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(608)
				pixel = tmp26;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(608)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(608)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(608)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(608)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(608)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(608)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(608)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(608)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(608)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(608)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(608)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(608)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(608)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(608)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(608)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(608)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(608)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(608)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(608)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(608)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(608)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(608)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(608)
				pixel = tmp26;
			}
			;break;
		}
		HX_STACK_LINE(608)
		bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(608)
		if ((tmp9)){
			HX_STACK_LINE(608)
			int tmp10 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(608)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(608)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(608)
			if ((tmp11)){
				HX_STACK_LINE(608)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(608)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(608)
				tmp12 = (tmp14 != (int)255);
			}
			else{
				HX_STACK_LINE(608)
				tmp12 = false;
			}
			HX_STACK_LINE(608)
			if ((tmp12)){
				HX_STACK_LINE(608)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(608)
				Float tmp14 = (Float(((Float)255.0)) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(608)
				::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp14;
				HX_STACK_LINE(608)
				{
					HX_STACK_LINE(608)
					Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(608)
					{
						HX_STACK_LINE(608)
						::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(608)
						::lime::utils::ArrayBufferView this1 = tmp16;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(608)
						int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(608)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(608)
						Float tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(608)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(608)
						int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(608)
						int idx = tmp21;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(608)
						int tmp22 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(608)
						tmp15 = (int(tmp22) & int((int)255));
					}
					HX_STACK_LINE(608)
					int r = tmp15;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(608)
					Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(608)
					{
						HX_STACK_LINE(608)
						::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(608)
						::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(608)
						int tmp18 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(608)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(608)
						Float tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(608)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(608)
						int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(608)
						int idx = tmp22;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(608)
						int tmp23 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(608)
						tmp16 = (int(tmp23) & int((int)255));
					}
					HX_STACK_LINE(608)
					int g = tmp16;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(608)
					Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(608)
					{
						HX_STACK_LINE(608)
						::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(608)
						::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(608)
						int tmp19 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(608)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(608)
						Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(608)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(608)
						int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(608)
						int idx = tmp23;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(608)
						int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(608)
						tmp17 = (int(tmp24) & int((int)255));
					}
					HX_STACK_LINE(608)
					int b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(608)
					int tmp18 = (int(r) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(608)
					int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(608)
					int tmp20 = (int(g) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(608)
					int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(608)
					int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(608)
					int tmp23 = (int(b) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(608)
					int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(608)
					int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(608)
					int tmp26 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(608)
					int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(608)
					int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(608)
					pixel = tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(609)
	{
		HX_STACK_LINE(609)
		{
			HX_STACK_LINE(609)
			int tmp = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(609)
			int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(609)
			int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(609)
			int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(609)
			int tmp4 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(609)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(609)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(609)
			int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(609)
			int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(609)
			int tmp9 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(609)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(609)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(609)
			int tmp12 = (int(tmp11) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(609)
			int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(609)
			int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(609)
			int tmp15 = (int(tmp13) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(609)
			pixel = tmp15;
		}
		HX_STACK_LINE(609)
		(int)0;
	}
	HX_STACK_LINE(611)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(611)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(613)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(613)
			{
				HX_STACK_LINE(613)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(613)
				{
					HX_STACK_LINE(613)
					int argb = (int)0;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(613)
					tmp2 = argb;
				}
				HX_STACK_LINE(613)
				int argb = tmp2;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(613)
				{
					HX_STACK_LINE(613)
					int tmp3 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(613)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(613)
					int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(613)
					int tmp6 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(613)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(613)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(613)
					int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(613)
					int tmp10 = (int(tmp5) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(613)
					int tmp11 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(613)
					int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(613)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(613)
					int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(613)
					int tmp15 = (int(tmp10) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(613)
					int tmp16 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(613)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(613)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(613)
					int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(613)
					argb = tmp19;
				}
				HX_STACK_LINE(613)
				tmp1 = argb;
			}
			HX_STACK_LINE(613)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(613)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(614)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(614)
			{
				HX_STACK_LINE(614)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(614)
					int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(614)
					tmp2 = bgra;
				}
				HX_STACK_LINE(614)
				int bgra = tmp2;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(614)
					int tmp3 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(614)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(614)
					int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(614)
					int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(614)
					int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(614)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(614)
					int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(614)
					int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(614)
					int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(614)
					int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(614)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(614)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(614)
					int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(614)
					int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(614)
					int tmp17 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(614)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(614)
					int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(614)
					bgra = tmp19;
				}
				HX_STACK_LINE(614)
				tmp1 = bgra;
			}
			HX_STACK_LINE(614)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(614)
			return tmp2;
		}
		;break;
		default: {
			HX_STACK_LINE(615)
			int tmp1 = pixel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(615)
			return tmp1;
		}
	}
	HX_STACK_LINE(611)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel,return )

int ImageDataUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel32",0x2aa489dd,"lime.graphics.utils.ImageDataUtil.getPixel32","lime/graphics/utils/ImageDataUtil.hx",622,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(624)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(626)
	{
		HX_STACK_LINE(626)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(626)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(626)
		int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(626)
		int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(626)
		int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(626)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(626)
		int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(626)
		int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(626)
		int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(626)
		int offset = tmp7;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(626)
		int tmp8 = image->buffer->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(626)
		switch( (int)(tmp8)){
			case (int)2: {
				HX_STACK_LINE(626)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(626)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(626)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(626)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(626)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(626)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(626)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(626)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(626)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(626)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(626)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(626)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(626)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(626)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(626)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(626)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(626)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(626)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(626)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(626)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(626)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(626)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(626)
				pixel = tmp26;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(626)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(626)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(626)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(626)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(626)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(626)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(626)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(626)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(626)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(626)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(626)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(626)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(626)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(626)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(626)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(626)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(626)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(626)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(626)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(626)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(626)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(626)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(626)
				pixel = tmp26;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(626)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(626)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(626)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(626)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(626)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(626)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(626)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(626)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(626)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(626)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(626)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(626)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(626)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(626)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(626)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(626)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(626)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(626)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(626)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(626)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(626)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(626)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(626)
				pixel = tmp26;
			}
			;break;
		}
		HX_STACK_LINE(626)
		bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(626)
		if ((tmp9)){
			HX_STACK_LINE(626)
			int tmp10 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(626)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(626)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(626)
			if ((tmp11)){
				HX_STACK_LINE(626)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(626)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(626)
				tmp12 = (tmp14 != (int)255);
			}
			else{
				HX_STACK_LINE(626)
				tmp12 = false;
			}
			HX_STACK_LINE(626)
			if ((tmp12)){
				HX_STACK_LINE(626)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(626)
				Float tmp14 = (Float(((Float)255.0)) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(626)
				::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp14;
				HX_STACK_LINE(626)
				{
					HX_STACK_LINE(626)
					Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(626)
					{
						HX_STACK_LINE(626)
						::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(626)
						::lime::utils::ArrayBufferView this1 = tmp16;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(626)
						int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(626)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(626)
						Float tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(626)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(626)
						int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(626)
						int idx = tmp21;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(626)
						int tmp22 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(626)
						tmp15 = (int(tmp22) & int((int)255));
					}
					HX_STACK_LINE(626)
					int r = tmp15;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(626)
					Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(626)
					{
						HX_STACK_LINE(626)
						::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(626)
						::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(626)
						int tmp18 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(626)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(626)
						Float tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(626)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(626)
						int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(626)
						int idx = tmp22;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(626)
						int tmp23 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(626)
						tmp16 = (int(tmp23) & int((int)255));
					}
					HX_STACK_LINE(626)
					int g = tmp16;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(626)
					Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(626)
					{
						HX_STACK_LINE(626)
						::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(626)
						::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(626)
						int tmp19 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(626)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(626)
						Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(626)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(626)
						int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(626)
						int idx = tmp23;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(626)
						int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(626)
						tmp17 = (int(tmp24) & int((int)255));
					}
					HX_STACK_LINE(626)
					int b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(626)
					int tmp18 = (int(r) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(626)
					int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(626)
					int tmp20 = (int(g) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(626)
					int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(626)
					int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(626)
					int tmp23 = (int(b) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(626)
					int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(626)
					int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(626)
					int tmp26 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(626)
					int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(626)
					int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(626)
					pixel = tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(628)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(628)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(630)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(630)
			{
				HX_STACK_LINE(630)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(630)
				{
					HX_STACK_LINE(630)
					int argb = (int)0;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(630)
					tmp2 = argb;
				}
				HX_STACK_LINE(630)
				int argb = tmp2;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(630)
				{
					HX_STACK_LINE(630)
					int tmp3 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(630)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(630)
					int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(630)
					int tmp6 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(630)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(630)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(630)
					int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(630)
					int tmp10 = (int(tmp5) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(630)
					int tmp11 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(630)
					int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(630)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(630)
					int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(630)
					int tmp15 = (int(tmp10) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(630)
					int tmp16 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(630)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(630)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(630)
					int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(630)
					argb = tmp19;
				}
				HX_STACK_LINE(630)
				tmp1 = argb;
			}
			HX_STACK_LINE(630)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(630)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(631)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(631)
			{
				HX_STACK_LINE(631)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(631)
				{
					HX_STACK_LINE(631)
					int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(631)
					tmp2 = bgra;
				}
				HX_STACK_LINE(631)
				int bgra = tmp2;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(631)
				{
					HX_STACK_LINE(631)
					int tmp3 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(631)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(631)
					int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(631)
					int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(631)
					int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(631)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(631)
					int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(631)
					int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(631)
					int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(631)
					int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(631)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(631)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(631)
					int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(631)
					int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(631)
					int tmp17 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(631)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(631)
					int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(631)
					bgra = tmp19;
				}
				HX_STACK_LINE(631)
				tmp1 = bgra;
			}
			HX_STACK_LINE(631)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(631)
			return tmp2;
		}
		;break;
		default: {
			HX_STACK_LINE(632)
			int tmp1 = pixel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(632)
			return tmp1;
		}
	}
	HX_STACK_LINE(628)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel32,return )

::haxe::io::Bytes ImageDataUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixels",0xab3d94f5,"lime.graphics.utils.ImageDataUtil.getPixels","lime/graphics/utils/ImageDataUtil.hx",639,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(641)
	::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(641)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(641)
	if ((tmp1)){
		HX_STACK_LINE(641)
		return null();
	}
	HX_STACK_LINE(643)
	Float tmp2 = (rect->width * rect->height);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(643)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(643)
	int length = tmp3;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(644)
	int tmp4 = (length * (int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(644)
	::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::alloc(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(644)
	::haxe::io::Bytes bytes = tmp5;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(647)
	bool tmp6 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(647)
	if ((tmp6)){
		HX_STACK_LINE(647)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),format,hx::DynamicPtr(bytes));
	}
	else{
		HX_STACK_LINE(651)
		::lime::utils::ArrayBufferView tmp7 = image->buffer->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(651)
		::lime::utils::ArrayBufferView data = tmp7;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(652)
		int tmp8 = image->buffer->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(652)
		int sourceFormat = tmp8;		HX_STACK_VAR(sourceFormat,"sourceFormat");
		HX_STACK_LINE(653)
		bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(653)
		bool premultiplied = tmp9;		HX_STACK_VAR(premultiplied,"premultiplied");
		HX_STACK_LINE(655)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp10 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(655)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp10;		HX_STACK_VAR(dataView,"dataView");
		HX_STACK_LINE(656)
		int position;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(656)
		int argb;		HX_STACK_VAR(argb,"argb");
		HX_STACK_LINE(656)
		int bgra;		HX_STACK_VAR(bgra,"bgra");
		HX_STACK_LINE(656)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(657)
		int destPosition = (int)0;		HX_STACK_VAR(destPosition,"destPosition");
		HX_STACK_LINE(659)
		{
			HX_STACK_LINE(659)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(659)
			int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(659)
			while((true)){
				HX_STACK_LINE(659)
				bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(659)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(659)
				if ((tmp12)){
					HX_STACK_LINE(659)
					break;
				}
				HX_STACK_LINE(659)
				int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(659)
				int y = tmp13;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(661)
				int tmp14 = dataView->offset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(661)
				int tmp15 = (dataView->stride * y);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(661)
				int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(661)
				position = tmp16;
				HX_STACK_LINE(663)
				{
					HX_STACK_LINE(663)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(663)
					int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(663)
					while((true)){
						HX_STACK_LINE(663)
						bool tmp17 = (_g3 < _g2);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(663)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(663)
						if ((tmp18)){
							HX_STACK_LINE(663)
							break;
						}
						HX_STACK_LINE(663)
						int tmp19 = (_g3)++;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(663)
						int x = tmp19;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(665)
						{
							HX_STACK_LINE(665)
							int tmp20 = sourceFormat;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(665)
							switch( (int)(tmp20)){
								case (int)2: {
									HX_STACK_LINE(665)
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(665)
									Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(665)
									int r = tmp22;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(665)
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(665)
									Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(665)
									int g = tmp24;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(665)
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(665)
									Dynamic tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(665)
									int b = tmp26;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(665)
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(665)
									Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(665)
									int a = tmp28;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(665)
									int tmp29 = (int(r) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(665)
									int tmp30 = (int(tmp29) << int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(665)
									int tmp31 = (int(g) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(665)
									int tmp32 = (int(tmp31) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(665)
									int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(665)
									int tmp34 = (int(b) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(665)
									int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(665)
									int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(665)
									int tmp37 = (int(a) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(665)
									int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(665)
									pixel = tmp38;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(665)
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(665)
									Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(665)
									int r = tmp22;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(665)
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(665)
									Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(665)
									int g = tmp24;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(665)
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(665)
									Dynamic tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(665)
									int b = tmp26;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(665)
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(665)
									Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(665)
									int a = tmp28;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(665)
									int tmp29 = (int(r) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(665)
									int tmp30 = (int(tmp29) << int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(665)
									int tmp31 = (int(g) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(665)
									int tmp32 = (int(tmp31) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(665)
									int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(665)
									int tmp34 = (int(b) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(665)
									int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(665)
									int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(665)
									int tmp37 = (int(a) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(665)
									int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(665)
									pixel = tmp38;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(665)
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(665)
									Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(665)
									int r = tmp22;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(665)
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(665)
									Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(665)
									int g = tmp24;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(665)
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(665)
									Dynamic tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(665)
									int b = tmp26;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(665)
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(665)
									Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(665)
									int a = tmp28;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(665)
									int tmp29 = (int(r) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(665)
									int tmp30 = (int(tmp29) << int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(665)
									int tmp31 = (int(g) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(665)
									int tmp32 = (int(tmp31) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(665)
									int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(665)
									int tmp34 = (int(b) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(665)
									int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(665)
									int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(665)
									int tmp37 = (int(a) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(665)
									int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(665)
									pixel = tmp38;
								}
								;break;
							}
							HX_STACK_LINE(665)
							bool tmp21 = premultiplied;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(665)
							if ((tmp21)){
								HX_STACK_LINE(665)
								int tmp22 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(665)
								bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(665)
								bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(665)
								if ((tmp23)){
									HX_STACK_LINE(665)
									int tmp25 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(665)
									int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(665)
									tmp24 = (tmp26 != (int)255);
								}
								else{
									HX_STACK_LINE(665)
									tmp24 = false;
								}
								HX_STACK_LINE(665)
								if ((tmp24)){
									HX_STACK_LINE(665)
									int tmp25 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(665)
									Float tmp26 = (Float(((Float)255.0)) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(665)
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp26;
									HX_STACK_LINE(665)
									{
										HX_STACK_LINE(665)
										Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(665)
										{
											HX_STACK_LINE(665)
											::lime::utils::ArrayBufferView tmp28 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(665)
											::lime::utils::ArrayBufferView this1 = tmp28;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(665)
											int tmp29 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(665)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(665)
											Float tmp31 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(665)
											Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(665)
											int tmp33 = ::Math_obj::round(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(665)
											int idx = tmp33;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(665)
											int tmp34 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(665)
											tmp27 = (int(tmp34) & int((int)255));
										}
										HX_STACK_LINE(665)
										int r = tmp27;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(665)
										Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(665)
										{
											HX_STACK_LINE(665)
											::lime::utils::ArrayBufferView tmp29 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(665)
											::lime::utils::ArrayBufferView this1 = tmp29;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(665)
											int tmp30 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(665)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(665)
											Float tmp32 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(665)
											Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(665)
											int tmp34 = ::Math_obj::round(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(665)
											int idx = tmp34;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(665)
											int tmp35 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(665)
											tmp28 = (int(tmp35) & int((int)255));
										}
										HX_STACK_LINE(665)
										int g = tmp28;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(665)
										Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(665)
										{
											HX_STACK_LINE(665)
											::lime::utils::ArrayBufferView tmp30 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(665)
											::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(665)
											int tmp31 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(665)
											int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(665)
											Float tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(665)
											Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(665)
											int tmp35 = ::Math_obj::round(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(665)
											int idx = tmp35;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(665)
											int tmp36 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(665)
											tmp29 = (int(tmp36) & int((int)255));
										}
										HX_STACK_LINE(665)
										int b = tmp29;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(665)
										int tmp30 = (int(r) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(665)
										int tmp31 = (int(tmp30) << int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(665)
										int tmp32 = (int(g) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(665)
										int tmp33 = (int(tmp32) << int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(665)
										int tmp34 = (int(tmp31) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(665)
										int tmp35 = (int(b) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(665)
										int tmp36 = (int(tmp35) << int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(665)
										int tmp37 = (int(tmp34) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(665)
										int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(665)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(665)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(665)
										pixel = tmp40;
									}
								}
							}
						}
						HX_STACK_LINE(667)
						int tmp20 = format;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(667)
						switch( (int)(tmp20)){
							case (int)1: {
								HX_STACK_LINE(669)
								int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(669)
								{
									HX_STACK_LINE(669)
									int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(669)
									{
										HX_STACK_LINE(669)
										int argb1 = (int)0;		HX_STACK_VAR(argb1,"argb1");
										HX_STACK_LINE(669)
										tmp22 = argb1;
									}
									HX_STACK_LINE(669)
									int argb1 = tmp22;		HX_STACK_VAR(argb1,"argb1");
									HX_STACK_LINE(669)
									{
										HX_STACK_LINE(669)
										int tmp23 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(669)
										int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(669)
										int tmp25 = (int(tmp24) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(669)
										int tmp26 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(669)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(669)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(669)
										int tmp29 = (int(tmp28) << int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(669)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(669)
										int tmp31 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(669)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(669)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(669)
										int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(669)
										int tmp35 = (int(tmp30) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(669)
										int tmp36 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(669)
										int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(669)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(669)
										int tmp39 = (int(tmp35) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(669)
										argb1 = tmp39;
									}
									HX_STACK_LINE(669)
									tmp21 = argb1;
								}
								HX_STACK_LINE(669)
								argb = tmp21;
								HX_STACK_LINE(669)
								pixel = argb;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(670)
								int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(670)
								{
									HX_STACK_LINE(670)
									int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(670)
									{
										HX_STACK_LINE(670)
										int bgra1 = (int)0;		HX_STACK_VAR(bgra1,"bgra1");
										HX_STACK_LINE(670)
										tmp22 = bgra1;
									}
									HX_STACK_LINE(670)
									int bgra1 = tmp22;		HX_STACK_VAR(bgra1,"bgra1");
									HX_STACK_LINE(670)
									{
										HX_STACK_LINE(670)
										int tmp23 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(670)
										int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(670)
										int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(670)
										int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(670)
										int tmp27 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(670)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(670)
										int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(670)
										int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(670)
										int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(670)
										int tmp32 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(670)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(670)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(670)
										int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(670)
										int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(670)
										int tmp37 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(670)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(670)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(670)
										bgra1 = tmp39;
									}
									HX_STACK_LINE(670)
									tmp21 = bgra1;
								}
								HX_STACK_LINE(670)
								bgra = tmp21;
								HX_STACK_LINE(670)
								pixel = bgra;
							}
							;break;
							default: {
							}
						}
						HX_STACK_LINE(675)
						{
							HX_STACK_LINE(675)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(675)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(675)
							int tmp22 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(675)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(675)
							bytes->b[pos] = tmp23;
						}
						HX_STACK_LINE(676)
						{
							HX_STACK_LINE(676)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(676)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(676)
							int tmp22 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(676)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(676)
							bytes->b[pos] = tmp23;
						}
						HX_STACK_LINE(677)
						{
							HX_STACK_LINE(677)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(677)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(677)
							int tmp22 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(677)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(677)
							bytes->b[pos] = tmp23;
						}
						HX_STACK_LINE(678)
						{
							HX_STACK_LINE(678)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(678)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(678)
							int tmp22 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(678)
							bytes->b[pos] = tmp22;
						}
						HX_STACK_LINE(680)
						hx::AddEq(position,(int)4);
					}
				}
			}
		}
	}
	HX_STACK_LINE(688)
	::haxe::io::Bytes tmp7 = bytes;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(688)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,getPixels,return )

Void ImageDataUtil_obj::merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","merge",0xf0318e4a,"lime.graphics.utils.ImageDataUtil.merge","lime/graphics/utils/ImageDataUtil.hx",693,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(695)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(695)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(695)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(695)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(695)
		if ((tmp2)){
			HX_STACK_LINE(695)
			::lime::utils::ArrayBufferView tmp4 = sourceImage->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(695)
			::lime::utils::ArrayBufferView tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(695)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(695)
			tmp3 = true;
		}
		HX_STACK_LINE(695)
		if ((tmp3)){
			HX_STACK_LINE(695)
			return null();
		}
		HX_STACK_LINE(698)
		bool tmp4 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(698)
		if ((tmp4)){
			HX_STACK_LINE(698)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_merge.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
		}
		else{
			HX_STACK_LINE(702)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp5 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(702)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView sourceView = tmp5;		HX_STACK_VAR(sourceView,"sourceView");
			HX_STACK_LINE(703)
			::lime::graphics::Image tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(703)
			::lime::math::Rectangle tmp7 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,sourceView->width,sourceView->height);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(703)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp8 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(703)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp8;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(705)
			::lime::utils::ArrayBufferView tmp9 = sourceImage->buffer->data;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(705)
			::lime::utils::ArrayBufferView sourceData = tmp9;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(706)
			::lime::utils::ArrayBufferView tmp10 = image->buffer->data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(706)
			::lime::utils::ArrayBufferView destData = tmp10;		HX_STACK_VAR(destData,"destData");
			HX_STACK_LINE(707)
			int tmp11 = sourceImage->buffer->format;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(707)
			int sourceFormat = tmp11;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(708)
			int tmp12 = image->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(708)
			int destFormat = tmp12;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(709)
			bool tmp13 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(709)
			bool sourcePremultiplied = tmp13;		HX_STACK_VAR(sourcePremultiplied,"sourcePremultiplied");
			HX_STACK_LINE(710)
			bool tmp14 = image->buffer->premultiplied;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(710)
			bool destPremultiplied = tmp14;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(712)
			int sourcePosition;		HX_STACK_VAR(sourcePosition,"sourcePosition");
			HX_STACK_LINE(712)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(712)
			int sourcePixel;		HX_STACK_VAR(sourcePixel,"sourcePixel");
			HX_STACK_LINE(712)
			int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
			HX_STACK_LINE(714)
			{
				HX_STACK_LINE(714)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(714)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(714)
				while((true)){
					HX_STACK_LINE(714)
					bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(714)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(714)
					if ((tmp16)){
						HX_STACK_LINE(714)
						break;
					}
					HX_STACK_LINE(714)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(714)
					int y = tmp17;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(716)
					int tmp18 = sourceView->offset;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(716)
					int tmp19 = (sourceView->stride * y);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(716)
					int tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(716)
					sourcePosition = tmp20;
					HX_STACK_LINE(717)
					int tmp21 = destView->offset;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(717)
					int tmp22 = (destView->stride * y);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(717)
					int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(717)
					destPosition = tmp23;
					HX_STACK_LINE(719)
					{
						HX_STACK_LINE(719)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(719)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(719)
						while((true)){
							HX_STACK_LINE(719)
							bool tmp24 = (_g3 < _g2);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(719)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(719)
							if ((tmp25)){
								HX_STACK_LINE(719)
								break;
							}
							HX_STACK_LINE(719)
							int tmp26 = (_g3)++;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(719)
							int x = tmp26;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(721)
							{
								HX_STACK_LINE(721)
								int tmp27 = sourceFormat;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(721)
								switch( (int)(tmp27)){
									case (int)2: {
										HX_STACK_LINE(721)
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(721)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(721)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(721)
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(721)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(721)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(721)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(721)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(721)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(721)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(721)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(721)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(721)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(721)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(721)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(721)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(721)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(721)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(721)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(721)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(721)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(721)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(721)
										sourcePixel = tmp45;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(721)
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(721)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(721)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(721)
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(721)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(721)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(721)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(721)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(721)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(721)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(721)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(721)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(721)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(721)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(721)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(721)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(721)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(721)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(721)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(721)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(721)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(721)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(721)
										sourcePixel = tmp45;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(721)
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(721)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(721)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(721)
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(721)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(721)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(721)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(721)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(721)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(721)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(721)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(721)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(721)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(721)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(721)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(721)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(721)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(721)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(721)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(721)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(721)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(721)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(721)
										sourcePixel = tmp45;
									}
									;break;
								}
								HX_STACK_LINE(721)
								bool tmp28 = sourcePremultiplied;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(721)
								if ((tmp28)){
									HX_STACK_LINE(721)
									int tmp29 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(721)
									bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(721)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(721)
									if ((tmp30)){
										HX_STACK_LINE(721)
										int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(721)
										int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(721)
										tmp31 = (tmp33 != (int)255);
									}
									else{
										HX_STACK_LINE(721)
										tmp31 = false;
									}
									HX_STACK_LINE(721)
									if ((tmp31)){
										HX_STACK_LINE(721)
										int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(721)
										Float tmp33 = (Float(((Float)255.0)) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(721)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp33;
										HX_STACK_LINE(721)
										{
											HX_STACK_LINE(721)
											Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(721)
											{
												HX_STACK_LINE(721)
												::lime::utils::ArrayBufferView tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(721)
												::lime::utils::ArrayBufferView this1 = tmp35;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(721)
												int tmp36 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(721)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(721)
												Float tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(721)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(721)
												int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(721)
												int idx = tmp40;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(721)
												int tmp41 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(721)
												tmp34 = (int(tmp41) & int((int)255));
											}
											HX_STACK_LINE(721)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(721)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(721)
											{
												HX_STACK_LINE(721)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(721)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(721)
												int tmp37 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(721)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(721)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(721)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(721)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(721)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(721)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(721)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(721)
											int g = tmp35;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(721)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(721)
											{
												HX_STACK_LINE(721)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(721)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(721)
												int tmp38 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(721)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(721)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(721)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(721)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(721)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(721)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(721)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(721)
											int b = tmp36;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(721)
											int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(721)
											int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(721)
											int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(721)
											int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(721)
											int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(721)
											int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(721)
											int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(721)
											int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(721)
											int tmp45 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(721)
											int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(721)
											int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(721)
											sourcePixel = tmp47;
										}
									}
								}
							}
							HX_STACK_LINE(722)
							{
								HX_STACK_LINE(722)
								int tmp27 = destFormat;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(722)
								switch( (int)(tmp27)){
									case (int)2: {
										HX_STACK_LINE(722)
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(722)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(722)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(722)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(722)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(722)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(722)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(722)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(722)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(722)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(722)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(722)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(722)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(722)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(722)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(722)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(722)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(722)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(722)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(722)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(722)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(722)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(722)
										destPixel = tmp45;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(722)
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(722)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(722)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(722)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(722)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(722)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(722)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(722)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(722)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(722)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(722)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(722)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(722)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(722)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(722)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(722)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(722)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(722)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(722)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(722)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(722)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(722)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(722)
										destPixel = tmp45;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(722)
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(722)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(722)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(722)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(722)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(722)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(722)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(722)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(722)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(722)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(722)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(722)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(722)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(722)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(722)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(722)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(722)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(722)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(722)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(722)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(722)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(722)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(722)
										destPixel = tmp45;
									}
									;break;
								}
								HX_STACK_LINE(722)
								bool tmp28 = destPremultiplied;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(722)
								if ((tmp28)){
									HX_STACK_LINE(722)
									int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(722)
									bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(722)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(722)
									if ((tmp30)){
										HX_STACK_LINE(722)
										int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(722)
										int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(722)
										tmp31 = (tmp33 != (int)255);
									}
									else{
										HX_STACK_LINE(722)
										tmp31 = false;
									}
									HX_STACK_LINE(722)
									if ((tmp31)){
										HX_STACK_LINE(722)
										int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(722)
										Float tmp33 = (Float(((Float)255.0)) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(722)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp33;
										HX_STACK_LINE(722)
										{
											HX_STACK_LINE(722)
											Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(722)
											{
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView this1 = tmp35;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(722)
												int tmp36 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(722)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(722)
												Float tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(722)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(722)
												int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(722)
												int idx = tmp40;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(722)
												int tmp41 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(722)
												tmp34 = (int(tmp41) & int((int)255));
											}
											HX_STACK_LINE(722)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(722)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(722)
											{
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(722)
												int tmp37 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(722)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(722)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(722)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(722)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(722)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(722)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(722)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(722)
											int g = tmp35;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(722)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(722)
											{
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(722)
												int tmp38 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(722)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(722)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(722)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(722)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(722)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(722)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(722)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(722)
											int b = tmp36;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(722)
											int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(722)
											int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(722)
											int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(722)
											int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(722)
											int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(722)
											int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(722)
											int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(722)
											int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(722)
											int tmp45 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(722)
											int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(722)
											int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(722)
											destPixel = tmp47;
										}
									}
								}
							}
							HX_STACK_LINE(724)
							{
								HX_STACK_LINE(724)
								int tmp27 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(724)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(724)
								int tmp29 = redMultiplier;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(724)
								int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(724)
								int tmp31 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(724)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(724)
								int tmp33 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(724)
								int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(724)
								int tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(724)
								Float tmp36 = (Float(tmp35) / Float((int)256));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(724)
								int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(724)
								int value = tmp37;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(724)
								{
									HX_STACK_LINE(724)
									int tmp38 = (int(value) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(724)
									int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(724)
									int tmp40 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(724)
									int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(724)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(724)
									int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(724)
									int tmp44 = (int(tmp39) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(724)
									int tmp45 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(724)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(724)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(724)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(724)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(724)
									int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(724)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(724)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(724)
									destPixel = tmp52;
								}
								HX_STACK_LINE(724)
								value;
							}
							HX_STACK_LINE(725)
							{
								HX_STACK_LINE(725)
								int tmp27 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(725)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(725)
								int tmp29 = greenMultiplier;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(725)
								int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(725)
								int tmp31 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(725)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(725)
								int tmp33 = ((int)256 - greenMultiplier);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(725)
								int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(725)
								int tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(725)
								Float tmp36 = (Float(tmp35) / Float((int)256));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(725)
								int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(725)
								int value = tmp37;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(725)
								{
									HX_STACK_LINE(725)
									int tmp38 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(725)
									int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(725)
									int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(725)
									int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(725)
									int tmp42 = (int(value) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(725)
									int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(725)
									int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(725)
									int tmp45 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(725)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(725)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(725)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(725)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(725)
									int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(725)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(725)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(725)
									destPixel = tmp52;
								}
								HX_STACK_LINE(725)
								value;
							}
							HX_STACK_LINE(726)
							{
								HX_STACK_LINE(726)
								int tmp27 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(726)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(726)
								int tmp29 = blueMultiplier;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(726)
								int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(726)
								int tmp31 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(726)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(726)
								int tmp33 = ((int)256 - blueMultiplier);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(726)
								int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(726)
								int tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(726)
								Float tmp36 = (Float(tmp35) / Float((int)256));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(726)
								int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(726)
								int value = tmp37;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(726)
								{
									HX_STACK_LINE(726)
									int tmp38 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(726)
									int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(726)
									int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(726)
									int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(726)
									int tmp42 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(726)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(726)
									int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(726)
									int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(726)
									int tmp46 = (int(tmp41) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(726)
									int tmp47 = (int(value) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(726)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(726)
									int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(726)
									int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(726)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(726)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(726)
									destPixel = tmp52;
								}
								HX_STACK_LINE(726)
								value;
							}
							HX_STACK_LINE(727)
							{
								HX_STACK_LINE(727)
								int tmp27 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(727)
								int tmp28 = alphaMultiplier;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(727)
								int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(727)
								int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(727)
								int tmp31 = ((int)256 - alphaMultiplier);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(727)
								int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(727)
								int tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(727)
								Float tmp34 = (Float(tmp33) / Float((int)256));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(727)
								int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(727)
								int value = tmp35;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(727)
								{
									HX_STACK_LINE(727)
									int tmp36 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(727)
									int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(727)
									int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(727)
									int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(727)
									int tmp40 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(727)
									int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(727)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(727)
									int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(727)
									int tmp44 = (int(tmp39) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(727)
									int tmp45 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(727)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(727)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(727)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(727)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(727)
									int tmp50 = (int(value) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(727)
									int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(727)
									destPixel = tmp51;
								}
								HX_STACK_LINE(727)
								value;
							}
							HX_STACK_LINE(729)
							{
								HX_STACK_LINE(729)
								bool tmp27 = destPremultiplied;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(729)
								if ((tmp27)){
									HX_STACK_LINE(729)
									int tmp28 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(729)
									bool tmp29 = (tmp28 == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(729)
									if ((tmp29)){
										HX_STACK_LINE(729)
										bool tmp30 = (destPixel != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(729)
										if ((tmp30)){
											HX_STACK_LINE(729)
											destPixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(729)
										int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(729)
										bool tmp31 = (tmp30 != (int)255);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(729)
										if ((tmp31)){
											HX_STACK_LINE(729)
											Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::lime::utils::ArrayBufferView tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(729)
												::lime::utils::ArrayBufferView this1 = tmp33;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(729)
												{
													HX_STACK_LINE(729)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(729)
													tmp32 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(729)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp32;
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												int tmp33 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(729)
												int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(729)
												int tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(729)
												int tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(729)
												int tmp37 = (int(tmp36) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(729)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(729)
												int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(729)
												int tmp40 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(729)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(729)
												int tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(729)
												int tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(729)
												int tmp44 = (int(tmp43) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(729)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(729)
												int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(729)
												int tmp47 = (int(tmp39) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(729)
												int tmp48 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(729)
												int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(729)
												int tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(729)
												int tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(729)
												int tmp52 = (int(tmp51) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(729)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(729)
												int tmp54 = (int(tmp53) << int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(729)
												int tmp55 = (int(tmp47) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(729)
												int tmp56 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(729)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(729)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(729)
												destPixel = tmp58;
											}
										}
									}
								}
								HX_STACK_LINE(729)
								int tmp28 = destFormat;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(729)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(729)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(729)
												val;
											}
										}
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(729)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(729)
												val;
											}
										}
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(729)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(729)
												val;
											}
										}
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(729)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(729)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(729)
												val;
											}
										}
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(729)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(729)
												val;
											}
										}
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(729)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(729)
												val;
											}
										}
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(729)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(729)
												val;
											}
										}
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(729)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(729)
												val;
											}
										}
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(729)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(729)
												val;
											}
										}
										HX_STACK_LINE(729)
										{
											HX_STACK_LINE(729)
											int tmp29 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(729)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(729)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(729)
											{
												HX_STACK_LINE(729)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(729)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(731)
							hx::AddEq(sourcePosition,(int)4);
							HX_STACK_LINE(732)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
		}
		HX_STACK_LINE(740)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,merge,(void))

Void ImageDataUtil_obj::multiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","multiplyAlpha",0xb898c02c,"lime.graphics.utils.ImageDataUtil.multiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",745,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(747)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(747)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(748)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(748)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(748)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(748)
		if ((tmp2)){
			HX_STACK_LINE(748)
			bool tmp4 = image->buffer->transparent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(748)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(748)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(748)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(748)
			tmp3 = true;
		}
		HX_STACK_LINE(748)
		if ((tmp3)){
			HX_STACK_LINE(748)
			return null();
		}
		HX_STACK_LINE(751)
		bool tmp4 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(751)
		if ((tmp4)){
			HX_STACK_LINE(751)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha.call(hx::DynamicPtr(image));
		}
		else{
			HX_STACK_LINE(755)
			int tmp5 = image->buffer->format;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(755)
			int format = tmp5;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(756)
			int tmp6 = data->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(756)
			Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(756)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(756)
			int length = tmp8;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(757)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(759)
			{
				HX_STACK_LINE(759)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(759)
				while((true)){
					HX_STACK_LINE(759)
					bool tmp9 = (_g < length);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(759)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(759)
					if ((tmp10)){
						HX_STACK_LINE(759)
						break;
					}
					HX_STACK_LINE(759)
					int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(759)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(761)
					{
						HX_STACK_LINE(761)
						int tmp12 = (i * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(761)
						int offset = tmp12;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(761)
						int tmp13 = format;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(761)
						switch( (int)(tmp13)){
							case (int)2: {
								HX_STACK_LINE(761)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(761)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(761)
								int r = tmp15;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(761)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(761)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(761)
								int g = tmp17;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(761)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(761)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(761)
								int b = tmp19;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(761)
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(761)
								Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(761)
								int a = tmp21;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(761)
								int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(761)
								int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(761)
								int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(761)
								int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(761)
								int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(761)
								int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(761)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(761)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(761)
								int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(761)
								int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(761)
								pixel = tmp31;
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(761)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(761)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(761)
								int r = tmp15;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(761)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(761)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(761)
								int g = tmp17;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(761)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(761)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(761)
								int b = tmp19;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(761)
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(761)
								Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(761)
								int a = tmp21;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(761)
								int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(761)
								int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(761)
								int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(761)
								int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(761)
								int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(761)
								int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(761)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(761)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(761)
								int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(761)
								int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(761)
								pixel = tmp31;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(761)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(761)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(761)
								int r = tmp15;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(761)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(761)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(761)
								int g = tmp17;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(761)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(761)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(761)
								int b = tmp19;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(761)
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(761)
								Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(761)
								int a = tmp21;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(761)
								int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(761)
								int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(761)
								int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(761)
								int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(761)
								int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(761)
								int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(761)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(761)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(761)
								int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(761)
								int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(761)
								pixel = tmp31;
							}
							;break;
						}
						HX_STACK_LINE(761)
						{
						}
					}
					HX_STACK_LINE(762)
					{
						HX_STACK_LINE(762)
						int tmp12 = (i * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(762)
						int offset = tmp12;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(762)
						{
							HX_STACK_LINE(762)
							int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(762)
							bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(762)
							if ((tmp14)){
								HX_STACK_LINE(762)
								bool tmp15 = (pixel != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(762)
								if ((tmp15)){
									HX_STACK_LINE(762)
									pixel = (int)0;
								}
							}
							else{
								HX_STACK_LINE(762)
								int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(762)
								bool tmp16 = (tmp15 != (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(762)
								if ((tmp16)){
									HX_STACK_LINE(762)
									Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(762)
										::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(762)
										{
											HX_STACK_LINE(762)
											bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
											HX_STACK_LINE(762)
											tmp17 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
										}
									}
									HX_STACK_LINE(762)
									::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp17;
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										int tmp18 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(762)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(762)
										int tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(762)
										int tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(762)
										int tmp22 = (int(tmp21) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(762)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(762)
										int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(762)
										int tmp25 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(762)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(762)
										int tmp27 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(762)
										int tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(762)
										int tmp29 = (int(tmp28) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(762)
										int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(762)
										int tmp31 = (int(tmp30) << int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(762)
										int tmp32 = (int(tmp24) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(762)
										int tmp33 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(762)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(762)
										int tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(762)
										int tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(762)
										int tmp37 = (int(tmp36) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(762)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(762)
										int tmp39 = (int(tmp38) << int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(762)
										int tmp40 = (int(tmp32) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(762)
										int tmp41 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(762)
										int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(762)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(762)
										pixel = tmp43;
									}
								}
							}
						}
						HX_STACK_LINE(762)
						int tmp13 = format;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(762)
						switch( (int)(tmp13)){
							case (int)2: {
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(762)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(762)
										val;
									}
								}
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(762)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(762)
										val;
									}
								}
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(762)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(762)
										val;
									}
								}
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(762)
										val;
									}
								}
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(762)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(762)
										val;
									}
								}
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(762)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(762)
										val;
									}
								}
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(762)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(762)
										val;
									}
								}
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(762)
										val;
									}
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(762)
										val;
									}
								}
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(762)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(762)
										val;
									}
								}
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(762)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(762)
										val;
									}
								}
								HX_STACK_LINE(762)
								{
									HX_STACK_LINE(762)
									int tmp14 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(762)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(762)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(762)
									{
										HX_STACK_LINE(762)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(762)
										val;
									}
								}
							}
							;break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(768)
		image->buffer->premultiplied = true;
		HX_STACK_LINE(769)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,multiplyAlpha,(void))

Void ImageDataUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resize",0x3b9e8e22,"lime.graphics.utils.ImageDataUtil.resize","lime/graphics/utils/ImageDataUtil.hx",774,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(776)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(777)
		bool tmp = (buffer->width == newWidth);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(777)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(777)
		if ((tmp)){
			HX_STACK_LINE(777)
			tmp1 = (buffer->height == newHeight);
		}
		else{
			HX_STACK_LINE(777)
			tmp1 = false;
		}
		HX_STACK_LINE(777)
		if ((tmp1)){
			HX_STACK_LINE(777)
			return null();
		}
		HX_STACK_LINE(778)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(778)
		{
			HX_STACK_LINE(778)
			int tmp3 = (newWidth * newHeight);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(778)
			int tmp4 = (tmp3 * (int)4);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(778)
			Dynamic elements = tmp4;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(778)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(778)
			bool tmp5 = (elements != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(778)
			if ((tmp5)){
				HX_STACK_LINE(778)
				::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(778)
				this1 = tmp6;
			}
			else{
				HX_STACK_LINE(778)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(778)
				if ((tmp6)){
					HX_STACK_LINE(778)
					::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(778)
					{
						HX_STACK_LINE(778)
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(778)
						::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(778)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(778)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(778)
						_this->length = tmp9;
						HX_STACK_LINE(778)
						int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(778)
						_this->byteLength = tmp10;
						HX_STACK_LINE(778)
						::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(778)
						{
							HX_STACK_LINE(778)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(778)
							int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(778)
							::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(778)
							this2 = tmp13;
							HX_STACK_LINE(778)
							tmp11 = this2;
						}
						HX_STACK_LINE(778)
						_this->buffer = tmp11;
						HX_STACK_LINE(778)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(778)
						tmp7 = _this;
					}
					HX_STACK_LINE(778)
					this1 = tmp7;
				}
				else{
					HX_STACK_LINE(778)
					bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(778)
					if ((tmp7)){
						HX_STACK_LINE(778)
						::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(778)
						{
							HX_STACK_LINE(778)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(778)
							::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(778)
							::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(778)
							::haxe::io::Bytes srcData = tmp10;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(778)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(778)
							int srcLength = tmp11;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(778)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(778)
							int srcByteOffset = tmp12;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(778)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(778)
							int srcElementSize = tmp13;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(778)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(778)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(778)
							int tmp15 = _this->type;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(778)
							bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(778)
							if ((tmp16)){
								HX_STACK_LINE(778)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(778)
								int tmp17 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(778)
								int cloneLength = tmp17;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(778)
								::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(778)
								{
									HX_STACK_LINE(778)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(778)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(778)
									::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(778)
									this2 = tmp20;
									HX_STACK_LINE(778)
									tmp18 = this2;
								}
								HX_STACK_LINE(778)
								_this->buffer = tmp18;
								HX_STACK_LINE(778)
								::haxe::io::Bytes tmp19 = srcData;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(778)
								int tmp20 = srcByteOffset;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(778)
								int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(778)
								_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
							}
							else{
								HX_STACK_LINE(778)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(778)
							int tmp17 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(778)
							_this->byteLength = tmp17;
							HX_STACK_LINE(778)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(778)
							_this->length = srcLength;
							HX_STACK_LINE(778)
							tmp8 = _this;
						}
						HX_STACK_LINE(778)
						this1 = tmp8;
					}
					else{
						HX_STACK_LINE(778)
						bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(778)
						if ((tmp8)){
							HX_STACK_LINE(778)
							::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(778)
							{
								HX_STACK_LINE(778)
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(778)
								::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(778)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(778)
								if ((tmp11)){
									HX_STACK_LINE(778)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(778)
								int tmp12 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(778)
								bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(778)
								if ((tmp13)){
									HX_STACK_LINE(778)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(778)
								int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(778)
								int bufferByteLength = tmp14;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(778)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(778)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(778)
								bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(778)
								if ((tmp15)){
									HX_STACK_LINE(778)
									int tmp16 = bufferByteLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(778)
									newByteLength = tmp16;
									HX_STACK_LINE(778)
									int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(778)
									bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(778)
									if ((tmp18)){
										HX_STACK_LINE(778)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(778)
									bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(778)
									if ((tmp19)){
										HX_STACK_LINE(778)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(778)
									int tmp16 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(778)
									newByteLength = tmp16;
									HX_STACK_LINE(778)
									int tmp17 = newByteLength;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(778)
									int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(778)
									bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(778)
									if ((tmp18)){
										HX_STACK_LINE(778)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(778)
								_this->buffer = null();
								HX_STACK_LINE(778)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(778)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(778)
								Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(778)
								int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(778)
								_this->length = tmp17;
								HX_STACK_LINE(778)
								tmp9 = _this;
							}
							HX_STACK_LINE(778)
							this1 = tmp9;
						}
						else{
							HX_STACK_LINE(778)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(778)
			tmp2 = this1;
		}
		HX_STACK_LINE(778)
		int tmp3 = newWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(778)
		int tmp4 = newHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(778)
		::lime::graphics::ImageBuffer tmp5 = ::lime::graphics::ImageBuffer_obj::__new(tmp2,tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(778)
		::lime::graphics::ImageBuffer newBuffer = tmp5;		HX_STACK_VAR(newBuffer,"newBuffer");
		HX_STACK_LINE(781)
		bool tmp6 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(781)
		if ((tmp6)){
			HX_STACK_LINE(781)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_resize.call(hx::DynamicPtr(image),hx::DynamicPtr(newBuffer),newWidth,newHeight);
		}
		else{
			HX_STACK_LINE(785)
			int imageWidth = image->width;		HX_STACK_VAR(imageWidth,"imageWidth");
			HX_STACK_LINE(786)
			int imageHeight = image->height;		HX_STACK_VAR(imageHeight,"imageHeight");
			HX_STACK_LINE(788)
			::lime::utils::ArrayBufferView tmp7 = image->get_data();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(788)
			::lime::utils::ArrayBufferView data = tmp7;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(789)
			::lime::utils::ArrayBufferView newData = newBuffer->data;		HX_STACK_VAR(newData,"newData");
			HX_STACK_LINE(790)
			int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
			HX_STACK_LINE(790)
			int sourceIndexX;		HX_STACK_VAR(sourceIndexX,"sourceIndexX");
			HX_STACK_LINE(790)
			int sourceIndexY;		HX_STACK_VAR(sourceIndexY,"sourceIndexY");
			HX_STACK_LINE(790)
			int sourceIndexXY;		HX_STACK_VAR(sourceIndexXY,"sourceIndexXY");
			HX_STACK_LINE(790)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(791)
			int sourceX;		HX_STACK_VAR(sourceX,"sourceX");
			HX_STACK_LINE(791)
			int sourceY;		HX_STACK_VAR(sourceY,"sourceY");
			HX_STACK_LINE(792)
			Float u;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(792)
			Float v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(792)
			Float uRatio;		HX_STACK_VAR(uRatio,"uRatio");
			HX_STACK_LINE(792)
			Float vRatio;		HX_STACK_VAR(vRatio,"vRatio");
			HX_STACK_LINE(792)
			Float uOpposite;		HX_STACK_VAR(uOpposite,"uOpposite");
			HX_STACK_LINE(792)
			Float vOpposite;		HX_STACK_VAR(vOpposite,"vOpposite");
			HX_STACK_LINE(794)
			{
				HX_STACK_LINE(794)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(794)
				while((true)){
					HX_STACK_LINE(794)
					bool tmp8 = (_g < newHeight);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(794)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(794)
					if ((tmp9)){
						HX_STACK_LINE(794)
						break;
					}
					HX_STACK_LINE(794)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(794)
					int y = tmp10;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(796)
					{
						HX_STACK_LINE(796)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(796)
						while((true)){
							HX_STACK_LINE(796)
							bool tmp11 = (_g1 < newWidth);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(796)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(796)
							if ((tmp12)){
								HX_STACK_LINE(796)
								break;
							}
							HX_STACK_LINE(796)
							int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(796)
							int x = tmp13;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(800)
							Float tmp14 = (x + ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(800)
							int tmp15 = newWidth;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(800)
							Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(800)
							int tmp17 = imageWidth;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(800)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(800)
							Float tmp19 = (tmp18 - ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(800)
							u = tmp19;
							HX_STACK_LINE(801)
							Float tmp20 = (y + ((Float)0.5));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(801)
							int tmp21 = newHeight;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(801)
							Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(801)
							int tmp23 = imageHeight;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(801)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(801)
							Float tmp25 = (tmp24 - ((Float)0.5));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(801)
							v = tmp25;
							HX_STACK_LINE(803)
							Float tmp26 = u;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(803)
							int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(803)
							sourceX = tmp27;
							HX_STACK_LINE(804)
							Float tmp28 = v;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(804)
							int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(804)
							sourceY = tmp29;
							HX_STACK_LINE(806)
							int tmp30 = (sourceY * imageWidth);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(806)
							int tmp31 = sourceX;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(806)
							int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(806)
							int tmp33 = (tmp32 * (int)4);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(806)
							sourceIndex = tmp33;
							HX_STACK_LINE(807)
							int tmp34 = sourceX;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(807)
							int tmp35 = (imageWidth - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(807)
							bool tmp36 = (tmp34 < tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(807)
							int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(807)
							if ((tmp36)){
								HX_STACK_LINE(807)
								tmp37 = (sourceIndex + (int)4);
							}
							else{
								HX_STACK_LINE(807)
								tmp37 = sourceIndex;
							}
							HX_STACK_LINE(807)
							sourceIndexX = tmp37;
							HX_STACK_LINE(808)
							int tmp38 = sourceY;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(808)
							int tmp39 = (imageHeight - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(808)
							bool tmp40 = (tmp38 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(808)
							int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(808)
							if ((tmp40)){
								HX_STACK_LINE(808)
								int tmp42 = sourceIndex;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(808)
								int tmp43 = (imageWidth * (int)4);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(808)
								tmp41 = (tmp42 + tmp43);
							}
							else{
								HX_STACK_LINE(808)
								tmp41 = sourceIndex;
							}
							HX_STACK_LINE(808)
							sourceIndexY = tmp41;
							HX_STACK_LINE(809)
							bool tmp42 = (sourceIndexX != sourceIndex);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(809)
							int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(809)
							if ((tmp42)){
								HX_STACK_LINE(809)
								tmp43 = (sourceIndexY + (int)4);
							}
							else{
								HX_STACK_LINE(809)
								tmp43 = sourceIndexY;
							}
							HX_STACK_LINE(809)
							sourceIndexXY = tmp43;
							HX_STACK_LINE(811)
							int tmp44 = (y * newWidth);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(811)
							int tmp45 = x;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(811)
							int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(811)
							int tmp47 = (tmp46 * (int)4);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(811)
							index = tmp47;
							HX_STACK_LINE(813)
							Float tmp48 = (u - sourceX);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(813)
							uRatio = tmp48;
							HX_STACK_LINE(814)
							Float tmp49 = (v - sourceY);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(814)
							vRatio = tmp49;
							HX_STACK_LINE(815)
							Float tmp50 = ((int)1 - uRatio);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(815)
							uOpposite = tmp50;
							HX_STACK_LINE(816)
							Float tmp51 = ((int)1 - vRatio);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(816)
							vOpposite = tmp51;
							HX_STACK_LINE(818)
							{
								HX_STACK_LINE(818)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(818)
								{
									HX_STACK_LINE(818)
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(818)
									Dynamic tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(818)
									int a = tmp54;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(818)
									Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(818)
									{
										HX_STACK_LINE(818)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(818)
										bool tmp56 = (_int < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(818)
										if ((tmp56)){
											HX_STACK_LINE(818)
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(818)
											tmp55 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(818)
									Float tmp56 = uOpposite;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(818)
									tmp52 = (tmp55 * tmp56);
								}
								HX_STACK_LINE(818)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(818)
								{
									HX_STACK_LINE(818)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexX));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(818)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(818)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(818)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(818)
									{
										HX_STACK_LINE(818)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(818)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(818)
										if ((tmp57)){
											HX_STACK_LINE(818)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(818)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(818)
									Float tmp57 = uRatio;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(818)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(818)
								Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(818)
								Float tmp55 = vOpposite;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(818)
								Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(818)
								Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(818)
								{
									HX_STACK_LINE(818)
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexY));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(818)
									Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(818)
									int a = tmp59;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(818)
									Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(818)
									{
										HX_STACK_LINE(818)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(818)
										bool tmp61 = (_int < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(818)
										if ((tmp61)){
											HX_STACK_LINE(818)
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(818)
											tmp60 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(818)
									Float tmp61 = uOpposite;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(818)
									tmp57 = (tmp60 * tmp61);
								}
								HX_STACK_LINE(818)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(818)
								{
									HX_STACK_LINE(818)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexXY));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(818)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(818)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(818)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(818)
									{
										HX_STACK_LINE(818)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(818)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(818)
										if ((tmp62)){
											HX_STACK_LINE(818)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(818)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(818)
									Float tmp62 = uRatio;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(818)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(818)
								Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(818)
								Float tmp60 = vRatio;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(818)
								Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(818)
								Float tmp62 = (tmp56 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(818)
								int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(818)
								int val = tmp63;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(818)
								{
									HX_STACK_LINE(818)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val);
									HX_STACK_LINE(818)
									val;
								}
							}
							HX_STACK_LINE(819)
							{
								HX_STACK_LINE(819)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)1))));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(819)
									Dynamic tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(819)
									int a = tmp54;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(819)
									Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(819)
									{
										HX_STACK_LINE(819)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(819)
										bool tmp56 = (_int < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(819)
										if ((tmp56)){
											HX_STACK_LINE(819)
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(819)
											tmp55 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(819)
									Float tmp56 = uOpposite;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(819)
									tmp52 = (tmp55 * tmp56);
								}
								HX_STACK_LINE(819)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)1))));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(819)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(819)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(819)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(819)
									{
										HX_STACK_LINE(819)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(819)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(819)
										if ((tmp57)){
											HX_STACK_LINE(819)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(819)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(819)
									Float tmp57 = uRatio;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(819)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(819)
								Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(819)
								Float tmp55 = vOpposite;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(819)
								Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(819)
								Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)1))));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(819)
									Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(819)
									int a = tmp59;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(819)
									Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(819)
									{
										HX_STACK_LINE(819)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(819)
										bool tmp61 = (_int < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(819)
										if ((tmp61)){
											HX_STACK_LINE(819)
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(819)
											tmp60 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(819)
									Float tmp61 = uOpposite;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(819)
									tmp57 = (tmp60 * tmp61);
								}
								HX_STACK_LINE(819)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)1))));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(819)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(819)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(819)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(819)
									{
										HX_STACK_LINE(819)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(819)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(819)
										if ((tmp62)){
											HX_STACK_LINE(819)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(819)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(819)
									Float tmp62 = uRatio;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(819)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(819)
								Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(819)
								Float tmp60 = vRatio;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(819)
								Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(819)
								Float tmp62 = (tmp56 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(819)
								int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(819)
								int val = tmp63;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)1))),val);
									HX_STACK_LINE(819)
									val;
								}
							}
							HX_STACK_LINE(820)
							{
								HX_STACK_LINE(820)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(820)
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)2))));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(820)
									Dynamic tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(820)
									int a = tmp54;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(820)
									Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(820)
									{
										HX_STACK_LINE(820)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(820)
										bool tmp56 = (_int < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(820)
										if ((tmp56)){
											HX_STACK_LINE(820)
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(820)
											tmp55 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(820)
									Float tmp56 = uOpposite;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(820)
									tmp52 = (tmp55 * tmp56);
								}
								HX_STACK_LINE(820)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(820)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)2))));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(820)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(820)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(820)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(820)
									{
										HX_STACK_LINE(820)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(820)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(820)
										if ((tmp57)){
											HX_STACK_LINE(820)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(820)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(820)
									Float tmp57 = uRatio;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(820)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(820)
								Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(820)
								Float tmp55 = vOpposite;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(820)
								Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(820)
								Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(820)
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)2))));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(820)
									Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(820)
									int a = tmp59;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(820)
									Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(820)
									{
										HX_STACK_LINE(820)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(820)
										bool tmp61 = (_int < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(820)
										if ((tmp61)){
											HX_STACK_LINE(820)
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(820)
											tmp60 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(820)
									Float tmp61 = uOpposite;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(820)
									tmp57 = (tmp60 * tmp61);
								}
								HX_STACK_LINE(820)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(820)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)2))));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(820)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(820)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(820)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(820)
									{
										HX_STACK_LINE(820)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(820)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(820)
										if ((tmp62)){
											HX_STACK_LINE(820)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(820)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(820)
									Float tmp62 = uRatio;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(820)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(820)
								Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(820)
								Float tmp60 = vRatio;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(820)
								Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(820)
								Float tmp62 = (tmp56 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(820)
								int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(820)
								int val = tmp63;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(820)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)2))),val);
									HX_STACK_LINE(820)
									val;
								}
							}
							HX_STACK_LINE(824)
							bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(824)
							{
								HX_STACK_LINE(824)
								int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)3))));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(824)
								int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(824)
								Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(824)
								Dynamic tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(824)
								int a = tmp56;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(824)
								tmp52 = (a == (int)0);
							}
							HX_STACK_LINE(824)
							bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(824)
							bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(824)
							bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(824)
							if ((tmp54)){
								HX_STACK_LINE(824)
								int tmp56 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)3))));		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(824)
								int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(824)
								int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(824)
								Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(824)
								Dynamic tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(824)
								Dynamic tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(824)
								int a = tmp61;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(824)
								tmp55 = (a == (int)0);
							}
							else{
								HX_STACK_LINE(824)
								tmp55 = true;
							}
							HX_STACK_LINE(824)
							bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(824)
							bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(824)
							if ((tmp56)){
								HX_STACK_LINE(824)
								int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)3))));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(824)
								int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(824)
								Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(824)
								Dynamic tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(824)
								int a = tmp61;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(824)
								tmp57 = (a == (int)0);
							}
							else{
								HX_STACK_LINE(824)
								tmp57 = true;
							}
							HX_STACK_LINE(824)
							if ((tmp57)){
								HX_STACK_LINE(826)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),(int)0);
								HX_STACK_LINE(826)
								(int)0;
							}
							else{
								HX_STACK_LINE(830)
								int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)3))));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(830)
								Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(830)
								int val = tmp59;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(830)
								{
									HX_STACK_LINE(830)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),val);
									HX_STACK_LINE(830)
									val;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(840)
		buffer->data = newBuffer->data;
		HX_STACK_LINE(841)
		buffer->width = newWidth;
		HX_STACK_LINE(842)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resize,(void))

Void ImageDataUtil_obj::resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resizeBuffer",0x390004c2,"lime.graphics.utils.ImageDataUtil.resizeBuffer","lime/graphics/utils/ImageDataUtil.hx",847,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(849)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(850)
		::lime::utils::ArrayBufferView tmp = image->get_data();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(850)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(851)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(851)
		{
			HX_STACK_LINE(851)
			int tmp2 = (newWidth * newHeight);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(851)
			int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(851)
			Dynamic elements = tmp3;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(851)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(851)
			bool tmp4 = (elements != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(851)
			if ((tmp4)){
				HX_STACK_LINE(851)
				::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(851)
				this1 = tmp5;
			}
			else{
				HX_STACK_LINE(851)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(851)
				if ((tmp5)){
					HX_STACK_LINE(851)
					::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(851)
					{
						HX_STACK_LINE(851)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(851)
						::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(851)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(851)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(851)
						_this->length = tmp8;
						HX_STACK_LINE(851)
						int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(851)
						_this->byteLength = tmp9;
						HX_STACK_LINE(851)
						::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(851)
						{
							HX_STACK_LINE(851)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(851)
							int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(851)
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(851)
							this2 = tmp12;
							HX_STACK_LINE(851)
							tmp10 = this2;
						}
						HX_STACK_LINE(851)
						_this->buffer = tmp10;
						HX_STACK_LINE(851)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(851)
						tmp6 = _this;
					}
					HX_STACK_LINE(851)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(851)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(851)
					if ((tmp6)){
						HX_STACK_LINE(851)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(851)
						{
							HX_STACK_LINE(851)
							::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(851)
							::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(851)
							::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(851)
							::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(851)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(851)
							int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(851)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(851)
							int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(851)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(851)
							int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(851)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(851)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(851)
							int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(851)
							bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(851)
							if ((tmp15)){
								HX_STACK_LINE(851)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(851)
								int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(851)
								int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(851)
								::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(851)
								{
									HX_STACK_LINE(851)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(851)
									int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(851)
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(851)
									this2 = tmp19;
									HX_STACK_LINE(851)
									tmp17 = this2;
								}
								HX_STACK_LINE(851)
								_this->buffer = tmp17;
								HX_STACK_LINE(851)
								::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(851)
								int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(851)
								int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(851)
								_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
							}
							else{
								HX_STACK_LINE(851)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(851)
							int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(851)
							_this->byteLength = tmp16;
							HX_STACK_LINE(851)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(851)
							_this->length = srcLength;
							HX_STACK_LINE(851)
							tmp7 = _this;
						}
						HX_STACK_LINE(851)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(851)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(851)
						if ((tmp7)){
							HX_STACK_LINE(851)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(851)
							{
								HX_STACK_LINE(851)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(851)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(851)
								bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(851)
								if ((tmp10)){
									HX_STACK_LINE(851)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(851)
								int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(851)
								bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(851)
								if ((tmp12)){
									HX_STACK_LINE(851)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(851)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(851)
								int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(851)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(851)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(851)
								bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(851)
								if ((tmp14)){
									HX_STACK_LINE(851)
									int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(851)
									newByteLength = tmp15;
									HX_STACK_LINE(851)
									int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(851)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(851)
									if ((tmp17)){
										HX_STACK_LINE(851)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(851)
									bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(851)
									if ((tmp18)){
										HX_STACK_LINE(851)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(851)
									int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(851)
									newByteLength = tmp15;
									HX_STACK_LINE(851)
									int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(851)
									int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(851)
									bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(851)
									if ((tmp17)){
										HX_STACK_LINE(851)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(851)
								_this->buffer = null();
								HX_STACK_LINE(851)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(851)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(851)
								Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(851)
								int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(851)
								_this->length = tmp16;
								HX_STACK_LINE(851)
								tmp8 = _this;
							}
							HX_STACK_LINE(851)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(851)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(851)
			tmp1 = this1;
		}
		HX_STACK_LINE(851)
		::lime::utils::ArrayBufferView newData = tmp1;		HX_STACK_VAR(newData,"newData");
		HX_STACK_LINE(852)
		int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
		HX_STACK_LINE(852)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(854)
		{
			HX_STACK_LINE(854)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(854)
			int _g = buffer->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(854)
			while((true)){
				HX_STACK_LINE(854)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(854)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(854)
				if ((tmp3)){
					HX_STACK_LINE(854)
					break;
				}
				HX_STACK_LINE(854)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(854)
				int y = tmp4;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(856)
				{
					HX_STACK_LINE(856)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(856)
					int _g2 = buffer->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(856)
					while((true)){
						HX_STACK_LINE(856)
						bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(856)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(856)
						if ((tmp6)){
							HX_STACK_LINE(856)
							break;
						}
						HX_STACK_LINE(856)
						int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(856)
						int x = tmp7;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(858)
						int tmp8 = (y * buffer->width);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(858)
						int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(858)
						int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(858)
						int tmp11 = (tmp10 * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(858)
						sourceIndex = tmp11;
						HX_STACK_LINE(859)
						int tmp12 = (y * newWidth);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(859)
						int tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(859)
						int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(859)
						int tmp15 = (tmp14 * (int)4);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(859)
						index = tmp15;
						HX_STACK_LINE(861)
						{
							HX_STACK_LINE(861)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(861)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(861)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(861)
							{
								HX_STACK_LINE(861)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val);
								HX_STACK_LINE(861)
								val;
							}
						}
						HX_STACK_LINE(862)
						{
							HX_STACK_LINE(862)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(862)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(862)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(862)
							{
								HX_STACK_LINE(862)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)1))),val);
								HX_STACK_LINE(862)
								val;
							}
						}
						HX_STACK_LINE(863)
						{
							HX_STACK_LINE(863)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(863)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(863)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(863)
							{
								HX_STACK_LINE(863)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)2))),val);
								HX_STACK_LINE(863)
								val;
							}
						}
						HX_STACK_LINE(864)
						{
							HX_STACK_LINE(864)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)3))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(864)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(864)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(864)
							{
								HX_STACK_LINE(864)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),val);
								HX_STACK_LINE(864)
								val;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(870)
		buffer->data = newData;
		HX_STACK_LINE(871)
		buffer->width = newWidth;
		HX_STACK_LINE(872)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resizeBuffer,(void))

Void ImageDataUtil_obj::setFormat( ::lime::graphics::Image image,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setFormat",0xff73210b,"lime.graphics.utils.ImageDataUtil.setFormat","lime/graphics/utils/ImageDataUtil.hx",877,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(879)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(879)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(880)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(880)
		if ((tmp1)){
			HX_STACK_LINE(880)
			return null();
		}
		HX_STACK_LINE(883)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(883)
		if ((tmp2)){
			HX_STACK_LINE(883)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_format.call(hx::DynamicPtr(image),format);
		}
		else{
			HX_STACK_LINE(887)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(887)
			Dynamic a16;		HX_STACK_VAR(a16,"a16");
			HX_STACK_LINE(888)
			int tmp3 = data->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(888)
			Float tmp4 = (Float(tmp3) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(888)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(888)
			int length = tmp5;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(889)
			int r1;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(889)
			int g1;		HX_STACK_VAR(g1,"g1");
			HX_STACK_LINE(889)
			int b1;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(889)
			int a1;		HX_STACK_VAR(a1,"a1");
			HX_STACK_LINE(889)
			int r2;		HX_STACK_VAR(r2,"r2");
			HX_STACK_LINE(889)
			int g2;		HX_STACK_VAR(g2,"g2");
			HX_STACK_LINE(889)
			int b2;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(889)
			int a2;		HX_STACK_VAR(a2,"a2");
			HX_STACK_LINE(890)
			Dynamic r;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(890)
			Dynamic g;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(890)
			Dynamic b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(890)
			Dynamic a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(892)
			{
				HX_STACK_LINE(892)
				int tmp6 = image->get_format();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(892)
				int _g = tmp6;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(892)
				int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(892)
				switch( (int)(tmp7)){
					case (int)0: {
						HX_STACK_LINE(896)
						r1 = (int)0;
						HX_STACK_LINE(897)
						g1 = (int)1;
						HX_STACK_LINE(898)
						b1 = (int)2;
						HX_STACK_LINE(899)
						a1 = (int)3;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(903)
						r1 = (int)1;
						HX_STACK_LINE(904)
						g1 = (int)2;
						HX_STACK_LINE(905)
						b1 = (int)3;
						HX_STACK_LINE(906)
						a1 = (int)0;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(910)
						r1 = (int)2;
						HX_STACK_LINE(911)
						g1 = (int)1;
						HX_STACK_LINE(912)
						b1 = (int)0;
						HX_STACK_LINE(913)
						a1 = (int)3;
					}
					;break;
				}
			}
			HX_STACK_LINE(917)
			int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(917)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(921)
					r2 = (int)0;
					HX_STACK_LINE(922)
					g2 = (int)1;
					HX_STACK_LINE(923)
					b2 = (int)2;
					HX_STACK_LINE(924)
					a2 = (int)3;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(928)
					r2 = (int)1;
					HX_STACK_LINE(929)
					g2 = (int)2;
					HX_STACK_LINE(930)
					b2 = (int)3;
					HX_STACK_LINE(931)
					a2 = (int)0;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(935)
					r2 = (int)2;
					HX_STACK_LINE(936)
					g2 = (int)1;
					HX_STACK_LINE(937)
					b2 = (int)0;
					HX_STACK_LINE(938)
					a2 = (int)3;
				}
				;break;
			}
			HX_STACK_LINE(942)
			{
				HX_STACK_LINE(942)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(942)
				while((true)){
					HX_STACK_LINE(942)
					bool tmp7 = (_g < length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(942)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(942)
					if ((tmp8)){
						HX_STACK_LINE(942)
						break;
					}
					HX_STACK_LINE(942)
					int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(942)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(944)
					int tmp10 = (i * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(944)
					index = tmp10;
					HX_STACK_LINE(946)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + r1))));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(946)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(946)
					r = tmp12;
					HX_STACK_LINE(947)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + g1))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(947)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(947)
					g = tmp14;
					HX_STACK_LINE(948)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + b1))));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(948)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(948)
					b = tmp16;
					HX_STACK_LINE(949)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + a1))));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(949)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(949)
					a = tmp18;
					HX_STACK_LINE(951)
					{
						HX_STACK_LINE(951)
						int val = r;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(951)
						{
							HX_STACK_LINE(951)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + r2))),val);
							HX_STACK_LINE(951)
							val;
						}
					}
					HX_STACK_LINE(952)
					{
						HX_STACK_LINE(952)
						int val = g;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(952)
						{
							HX_STACK_LINE(952)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + g2))),val);
							HX_STACK_LINE(952)
							val;
						}
					}
					HX_STACK_LINE(953)
					{
						HX_STACK_LINE(953)
						int val = b;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(953)
						{
							HX_STACK_LINE(953)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + b2))),val);
							HX_STACK_LINE(953)
							val;
						}
					}
					HX_STACK_LINE(954)
					{
						HX_STACK_LINE(954)
						int val = a;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(954)
						{
							HX_STACK_LINE(954)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + a2))),val);
							HX_STACK_LINE(954)
							val;
						}
					}
				}
			}
		}
		HX_STACK_LINE(960)
		image->buffer->format = format;
		HX_STACK_LINE(961)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,setFormat,(void))

Void ImageDataUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel",0x7a534b32,"lime.graphics.utils.ImageDataUtil.setPixel","lime/graphics/utils/ImageDataUtil.hx",966,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(968)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(970)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(970)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(972)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(972)
				{
					HX_STACK_LINE(972)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(972)
					{
						HX_STACK_LINE(972)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(972)
						{
							HX_STACK_LINE(972)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(972)
							tmp2 = rgba;
						}
						HX_STACK_LINE(972)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(972)
						{
							HX_STACK_LINE(972)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(972)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(972)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(972)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(972)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(972)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(972)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(972)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(972)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(972)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(972)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(972)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(972)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(972)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(972)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(972)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(972)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(972)
							rgba = tmp19;
						}
						HX_STACK_LINE(972)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(972)
				pixel = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(973)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(973)
				{
					HX_STACK_LINE(973)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(973)
					{
						HX_STACK_LINE(973)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(973)
						{
							HX_STACK_LINE(973)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(973)
							tmp2 = rgba;
						}
						HX_STACK_LINE(973)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(973)
						{
							HX_STACK_LINE(973)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(973)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(973)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(973)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(973)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(973)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(973)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(973)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(973)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(973)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(973)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(973)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(973)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(973)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(973)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(973)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(973)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(973)
							rgba = tmp19;
						}
						HX_STACK_LINE(973)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(973)
				pixel = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(974)
				pixel = color;
			}
		}
		HX_STACK_LINE(980)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(980)
		{
			HX_STACK_LINE(980)
			int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
			HX_STACK_LINE(980)
			tmp1 = rgba;
		}
		HX_STACK_LINE(980)
		int source = tmp1;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(981)
		{
			HX_STACK_LINE(981)
			::lime::utils::ArrayBufferView tmp2 = image->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(981)
			::lime::utils::ArrayBufferView data = tmp2;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(981)
			int tmp3 = (y + image->offsetY);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(981)
			int tmp4 = ((int)4 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(981)
			int tmp5 = image->buffer->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(981)
			int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(981)
			int tmp7 = (x + image->offsetX);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(981)
			int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(981)
			int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(981)
			int offset = tmp9;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(981)
			int tmp10 = image->buffer->format;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(981)
			switch( (int)(tmp10)){
				case (int)2: {
					HX_STACK_LINE(981)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(981)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(981)
					int r = tmp12;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(981)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(981)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(981)
					int g = tmp14;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(981)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(981)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(981)
					int b = tmp16;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(981)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(981)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(981)
					int a = tmp18;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(981)
					int tmp19 = (int(r) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(981)
					int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(981)
					int tmp21 = (int(g) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(981)
					int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(981)
					int tmp23 = (int(tmp20) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(981)
					int tmp24 = (int(b) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(981)
					int tmp25 = (int(tmp24) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(981)
					int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(981)
					int tmp27 = (int(a) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(981)
					int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(981)
					source = tmp28;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(981)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(981)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(981)
					int r = tmp12;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(981)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(981)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(981)
					int g = tmp14;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(981)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(981)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(981)
					int b = tmp16;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(981)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(981)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(981)
					int a = tmp18;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(981)
					int tmp19 = (int(r) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(981)
					int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(981)
					int tmp21 = (int(g) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(981)
					int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(981)
					int tmp23 = (int(tmp20) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(981)
					int tmp24 = (int(b) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(981)
					int tmp25 = (int(tmp24) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(981)
					int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(981)
					int tmp27 = (int(a) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(981)
					int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(981)
					source = tmp28;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(981)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(981)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(981)
					int r = tmp12;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(981)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(981)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(981)
					int g = tmp14;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(981)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(981)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(981)
					int b = tmp16;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(981)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(981)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(981)
					int a = tmp18;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(981)
					int tmp19 = (int(r) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(981)
					int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(981)
					int tmp21 = (int(g) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(981)
					int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(981)
					int tmp23 = (int(tmp20) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(981)
					int tmp24 = (int(b) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(981)
					int tmp25 = (int(tmp24) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(981)
					int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(981)
					int tmp27 = (int(a) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(981)
					int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(981)
					source = tmp28;
				}
				;break;
			}
			HX_STACK_LINE(981)
			bool tmp11 = image->buffer->premultiplied;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(981)
			if ((tmp11)){
				HX_STACK_LINE(981)
				int tmp12 = (int(source) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(981)
				bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(981)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(981)
				if ((tmp13)){
					HX_STACK_LINE(981)
					int tmp15 = (int(source) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(981)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(981)
					tmp14 = (tmp16 != (int)255);
				}
				else{
					HX_STACK_LINE(981)
					tmp14 = false;
				}
				HX_STACK_LINE(981)
				if ((tmp14)){
					HX_STACK_LINE(981)
					int tmp15 = (int(source) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(981)
					Float tmp16 = (Float(((Float)255.0)) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(981)
					::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp16;
					HX_STACK_LINE(981)
					{
						HX_STACK_LINE(981)
						Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(981)
						{
							HX_STACK_LINE(981)
							::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(981)
							::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(981)
							int tmp19 = (int(source) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(981)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(981)
							Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(981)
							Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(981)
							int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(981)
							int idx = tmp23;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(981)
							int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(981)
							tmp17 = (int(tmp24) & int((int)255));
						}
						HX_STACK_LINE(981)
						int r = tmp17;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(981)
						Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(981)
						{
							HX_STACK_LINE(981)
							::lime::utils::ArrayBufferView tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(981)
							::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(981)
							int tmp20 = (int(source) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(981)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(981)
							Float tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(981)
							Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(981)
							int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(981)
							int idx = tmp24;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(981)
							int tmp25 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(981)
							tmp18 = (int(tmp25) & int((int)255));
						}
						HX_STACK_LINE(981)
						int g = tmp18;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(981)
						Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(981)
						{
							HX_STACK_LINE(981)
							::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(981)
							::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(981)
							int tmp21 = (int(source) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(981)
							int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(981)
							Float tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(981)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(981)
							int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(981)
							int idx = tmp25;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(981)
							int tmp26 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(981)
							tmp19 = (int(tmp26) & int((int)255));
						}
						HX_STACK_LINE(981)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(981)
						int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(981)
						int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(981)
						int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(981)
						int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(981)
						int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(981)
						int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(981)
						int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(981)
						int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(981)
						int tmp28 = (int(source) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(981)
						int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(981)
						int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(981)
						source = tmp30;
					}
				}
			}
		}
		HX_STACK_LINE(983)
		{
			HX_STACK_LINE(983)
			int tmp2 = (int(source) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(983)
			int value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(983)
			{
				HX_STACK_LINE(983)
				int tmp3 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(983)
				int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(983)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(983)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(983)
				int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(983)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(983)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(983)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(983)
				int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(983)
				int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(983)
				int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(983)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(983)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(983)
				int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(983)
				int tmp17 = (int(value) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(983)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(983)
				pixel = tmp18;
			}
			HX_STACK_LINE(983)
			value;
		}
		HX_STACK_LINE(984)
		{
			HX_STACK_LINE(984)
			::lime::utils::ArrayBufferView tmp2 = image->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(984)
			::lime::utils::ArrayBufferView data = tmp2;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(984)
			int tmp3 = (y + image->offsetY);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(984)
			int tmp4 = ((int)4 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(984)
			int tmp5 = image->buffer->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(984)
			int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(984)
			int tmp7 = (x + image->offsetX);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(984)
			int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(984)
			int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(984)
			int offset = tmp9;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(984)
			bool tmp10 = image->buffer->premultiplied;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(984)
			if ((tmp10)){
				HX_STACK_LINE(984)
				int tmp11 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(984)
				bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(984)
				if ((tmp12)){
					HX_STACK_LINE(984)
					bool tmp13 = (pixel != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(984)
					if ((tmp13)){
						HX_STACK_LINE(984)
						pixel = (int)0;
					}
				}
				else{
					HX_STACK_LINE(984)
					int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(984)
					bool tmp14 = (tmp13 != (int)255);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(984)
					if ((tmp14)){
						HX_STACK_LINE(984)
						Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(984)
							::lime::utils::ArrayBufferView this1 = tmp16;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(984)
							{
								HX_STACK_LINE(984)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(984)
								tmp15 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
							}
						}
						HX_STACK_LINE(984)
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp15;
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							int tmp16 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(984)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(984)
							int tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(984)
							int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(984)
							int tmp20 = (int(tmp19) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(984)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(984)
							int tmp22 = (int(tmp21) << int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(984)
							int tmp23 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(984)
							int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(984)
							int tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(984)
							int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(984)
							int tmp27 = (int(tmp26) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(984)
							int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(984)
							int tmp29 = (int(tmp28) << int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(984)
							int tmp30 = (int(tmp22) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(984)
							int tmp31 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(984)
							int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(984)
							int tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(984)
							int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(984)
							int tmp35 = (int(tmp34) >> int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(984)
							int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(984)
							int tmp37 = (int(tmp36) << int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(984)
							int tmp38 = (int(tmp30) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(984)
							int tmp39 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(984)
							int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(984)
							int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(984)
							pixel = tmp41;
						}
					}
				}
			}
			HX_STACK_LINE(984)
			int tmp11 = image->buffer->format;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(984)
			switch( (int)(tmp11)){
				case (int)2: {
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(984)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(984)
							val;
						}
					}
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(984)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(984)
							val;
						}
					}
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(984)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(984)
							val;
						}
					}
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(984)
							val;
						}
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(984)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(984)
							val;
						}
					}
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(984)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(984)
							val;
						}
					}
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(984)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(984)
							val;
						}
					}
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(984)
							val;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(984)
							val;
						}
					}
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(984)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(984)
							val;
						}
					}
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(984)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(984)
							val;
						}
					}
					HX_STACK_LINE(984)
					{
						HX_STACK_LINE(984)
						int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(984)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(984)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(984)
						{
							HX_STACK_LINE(984)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(984)
							val;
						}
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(986)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel,(void))

Void ImageDataUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel32",0x2e222851,"lime.graphics.utils.ImageDataUtil.setPixel32","lime/graphics/utils/ImageDataUtil.hx",991,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(993)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(995)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(995)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(997)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(997)
				{
					HX_STACK_LINE(997)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(997)
					{
						HX_STACK_LINE(997)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(997)
						{
							HX_STACK_LINE(997)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(997)
							tmp2 = rgba;
						}
						HX_STACK_LINE(997)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(997)
						{
							HX_STACK_LINE(997)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(997)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(997)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(997)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(997)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(997)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(997)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(997)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(997)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(997)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(997)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(997)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(997)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(997)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(997)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(997)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(997)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(997)
							rgba = tmp19;
						}
						HX_STACK_LINE(997)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(997)
				pixel = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(998)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(998)
				{
					HX_STACK_LINE(998)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(998)
					{
						HX_STACK_LINE(998)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(998)
						{
							HX_STACK_LINE(998)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(998)
							tmp2 = rgba;
						}
						HX_STACK_LINE(998)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(998)
						{
							HX_STACK_LINE(998)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(998)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(998)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(998)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(998)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(998)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(998)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(998)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(998)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(998)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(998)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(998)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(998)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(998)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(998)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(998)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(998)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(998)
							rgba = tmp19;
						}
						HX_STACK_LINE(998)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(998)
				pixel = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(999)
				pixel = color;
			}
		}
		HX_STACK_LINE(1003)
		bool tmp1 = image->get_transparent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1003)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1003)
		if ((tmp2)){
			HX_STACK_LINE(1003)
			{
				HX_STACK_LINE(1003)
				int tmp3 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1003)
				int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1003)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1003)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1003)
				int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1003)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1003)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1003)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1003)
				int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1003)
				int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1003)
				int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1003)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1003)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1003)
				int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1003)
				int tmp17 = (int)255;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1003)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1003)
				pixel = tmp18;
			}
			HX_STACK_LINE(1003)
			(int)255;
		}
		HX_STACK_LINE(1004)
		{
			HX_STACK_LINE(1004)
			::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1004)
			::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1004)
			int tmp4 = (y + image->offsetY);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1004)
			int tmp5 = ((int)4 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1004)
			int tmp6 = image->buffer->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1004)
			int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1004)
			int tmp8 = (x + image->offsetX);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1004)
			int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1004)
			int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1004)
			int offset = tmp10;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(1004)
			bool tmp11 = image->buffer->premultiplied;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1004)
			if ((tmp11)){
				HX_STACK_LINE(1004)
				int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1004)
				bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1004)
				if ((tmp13)){
					HX_STACK_LINE(1004)
					bool tmp14 = (pixel != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1004)
					if ((tmp14)){
						HX_STACK_LINE(1004)
						pixel = (int)0;
					}
				}
				else{
					HX_STACK_LINE(1004)
					int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1004)
					bool tmp15 = (tmp14 != (int)255);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1004)
					if ((tmp15)){
						HX_STACK_LINE(1004)
						Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1004)
							::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(1004)
							{
								HX_STACK_LINE(1004)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(1004)
								tmp16 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
							}
						}
						HX_STACK_LINE(1004)
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp16;
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1004)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1004)
							int tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1004)
							int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1004)
							int tmp21 = (int(tmp20) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1004)
							int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1004)
							int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1004)
							int tmp24 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1004)
							int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1004)
							int tmp26 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1004)
							int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1004)
							int tmp28 = (int(tmp27) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1004)
							int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1004)
							int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1004)
							int tmp31 = (int(tmp23) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1004)
							int tmp32 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1004)
							int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1004)
							int tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1004)
							int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1004)
							int tmp36 = (int(tmp35) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1004)
							int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1004)
							int tmp38 = (int(tmp37) << int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1004)
							int tmp39 = (int(tmp31) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1004)
							int tmp40 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1004)
							int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1004)
							int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1004)
							pixel = tmp42;
						}
					}
				}
			}
			HX_STACK_LINE(1004)
			int tmp12 = image->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1004)
			switch( (int)(tmp12)){
				case (int)2: {
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1004)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1004)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1004)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1004)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1004)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1004)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1004)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1004)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
					HX_STACK_LINE(1004)
					{
						HX_STACK_LINE(1004)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1004)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1004)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1004)
						{
							HX_STACK_LINE(1004)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(1004)
							val;
						}
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(1006)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel32,(void))

Void ImageDataUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::haxe::io::Bytes bytes,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixels",0x8e8e8101,"lime.graphics.utils.ImageDataUtil.setPixels","lime/graphics/utils/ImageDataUtil.hx",1011,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1013)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1013)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1013)
		if ((tmp1)){
			HX_STACK_LINE(1013)
			return null();
		}
		HX_STACK_LINE(1016)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1016)
		if ((tmp2)){
			HX_STACK_LINE(1016)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(bytes),format);
		}
		else{
			HX_STACK_LINE(1020)
			::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1020)
			::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1021)
			int tmp4 = image->buffer->format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1021)
			int sourceFormat = tmp4;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(1022)
			bool tmp5 = image->buffer->premultiplied;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1022)
			bool premultiplied = tmp5;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(1023)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp6 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1023)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp6;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(1024)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(1024)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(1024)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(1025)
			bool tmp7 = image->get_transparent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1025)
			bool transparent = tmp7;		HX_STACK_VAR(transparent,"transparent");
			HX_STACK_LINE(1026)
			int dataPosition = (int)0;		HX_STACK_VAR(dataPosition,"dataPosition");
			HX_STACK_LINE(1028)
			{
				HX_STACK_LINE(1028)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1028)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1028)
				while((true)){
					HX_STACK_LINE(1028)
					bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1028)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1028)
					if ((tmp9)){
						HX_STACK_LINE(1028)
						break;
					}
					HX_STACK_LINE(1028)
					int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1028)
					int y = tmp10;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1030)
					int tmp11 = dataView->offset;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1030)
					int tmp12 = (dataView->stride * y);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1030)
					int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1030)
					row = tmp13;
					HX_STACK_LINE(1032)
					{
						HX_STACK_LINE(1032)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1032)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1032)
						while((true)){
							HX_STACK_LINE(1032)
							bool tmp14 = (_g3 < _g2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1032)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1032)
							if ((tmp15)){
								HX_STACK_LINE(1032)
								break;
							}
							HX_STACK_LINE(1032)
							int tmp16 = (_g3)++;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1032)
							int x = tmp16;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1035)
							int tmp17 = (dataPosition + (int)3);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1035)
							int tmp18 = bytes->b->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1035)
							int tmp19 = (dataPosition + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1035)
							int tmp20 = bytes->b->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1035)
							int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1035)
							int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1035)
							int tmp23 = (dataPosition + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1035)
							int tmp24 = bytes->b->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1035)
							int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1035)
							int tmp26 = (int(tmp22) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1035)
							int tmp27 = bytes->b->__get(dataPosition);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1035)
							int tmp28 = (int(tmp27) << int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1035)
							int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1035)
							color = tmp29;
							HX_STACK_LINE(1036)
							hx::AddEq(dataPosition,(int)4);
							HX_STACK_LINE(1038)
							int tmp30 = format;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1038)
							switch( (int)(tmp30)){
								case (int)1: {
									HX_STACK_LINE(1040)
									int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1040)
									{
										HX_STACK_LINE(1040)
										int argb = color;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(1040)
										{
											HX_STACK_LINE(1040)
											int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1040)
											{
												HX_STACK_LINE(1040)
												int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
												HX_STACK_LINE(1040)
												tmp32 = rgba;
											}
											HX_STACK_LINE(1040)
											int rgba = tmp32;		HX_STACK_VAR(rgba,"rgba");
											HX_STACK_LINE(1040)
											{
												HX_STACK_LINE(1040)
												int tmp33 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1040)
												int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1040)
												int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1040)
												int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1040)
												int tmp37 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1040)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1040)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1040)
												int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1040)
												int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1040)
												int tmp42 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1040)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1040)
												int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1040)
												int tmp45 = (int(tmp41) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1040)
												int tmp46 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1040)
												int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1040)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1040)
												int tmp49 = (int(tmp45) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1040)
												rgba = tmp49;
											}
											HX_STACK_LINE(1040)
											tmp31 = rgba;
										}
									}
									HX_STACK_LINE(1040)
									pixel = tmp31;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(1041)
									int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1041)
									{
										HX_STACK_LINE(1041)
										int bgra = color;		HX_STACK_VAR(bgra,"bgra");
										HX_STACK_LINE(1041)
										{
											HX_STACK_LINE(1041)
											int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1041)
											{
												HX_STACK_LINE(1041)
												int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
												HX_STACK_LINE(1041)
												tmp32 = rgba;
											}
											HX_STACK_LINE(1041)
											int rgba = tmp32;		HX_STACK_VAR(rgba,"rgba");
											HX_STACK_LINE(1041)
											{
												HX_STACK_LINE(1041)
												int tmp33 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1041)
												int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1041)
												int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1041)
												int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1041)
												int tmp37 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1041)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1041)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1041)
												int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1041)
												int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1041)
												int tmp42 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1041)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1041)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1041)
												int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1041)
												int tmp46 = (int(tmp41) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1041)
												int tmp47 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1041)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1041)
												int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1041)
												rgba = tmp49;
											}
											HX_STACK_LINE(1041)
											tmp31 = rgba;
										}
									}
									HX_STACK_LINE(1041)
									pixel = tmp31;
								}
								;break;
								default: {
									HX_STACK_LINE(1042)
									pixel = color;
								}
							}
							HX_STACK_LINE(1046)
							bool tmp31 = transparent;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1046)
							bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1046)
							if ((tmp32)){
								HX_STACK_LINE(1046)
								{
									HX_STACK_LINE(1046)
									int tmp33 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1046)
									int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1046)
									int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1046)
									int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1046)
									int tmp37 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1046)
									int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1046)
									int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1046)
									int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1046)
									int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1046)
									int tmp42 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1046)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1046)
									int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1046)
									int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1046)
									int tmp46 = (int(tmp41) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1046)
									int tmp47 = (int)255;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1046)
									int tmp48 = (int(tmp46) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1046)
									pixel = tmp48;
								}
								HX_STACK_LINE(1046)
								(int)255;
							}
							HX_STACK_LINE(1047)
							{
								HX_STACK_LINE(1047)
								int tmp33 = row;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1047)
								int tmp34 = (x * (int)4);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1047)
								int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1047)
								int offset = tmp35;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(1047)
								bool tmp36 = premultiplied;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1047)
								if ((tmp36)){
									HX_STACK_LINE(1047)
									int tmp37 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1047)
									bool tmp38 = (tmp37 == (int)0);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1047)
									if ((tmp38)){
										HX_STACK_LINE(1047)
										bool tmp39 = (pixel != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1047)
										if ((tmp39)){
											HX_STACK_LINE(1047)
											pixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(1047)
										int tmp39 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1047)
										bool tmp40 = (tmp39 != (int)255);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1047)
										if ((tmp40)){
											HX_STACK_LINE(1047)
											Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1047)
												::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(1047)
												{
													HX_STACK_LINE(1047)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(1047)
													tmp41 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(1047)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp41;
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												int tmp42 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1047)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1047)
												int tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1047)
												int tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1047)
												int tmp46 = (int(tmp45) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1047)
												int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1047)
												int tmp48 = (int(tmp47) << int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1047)
												int tmp49 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1047)
												int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1047)
												int tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1047)
												int tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1047)
												int tmp53 = (int(tmp52) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1047)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1047)
												int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1047)
												int tmp56 = (int(tmp48) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1047)
												int tmp57 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1047)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1047)
												int tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1047)
												int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(1047)
												int tmp61 = (int(tmp60) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1047)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(1047)
												int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(1047)
												int tmp64 = (int(tmp56) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(1047)
												int tmp65 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(1047)
												int tmp66 = (int(tmp65) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(1047)
												int tmp67 = (int(tmp64) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(1047)
												pixel = tmp67;
											}
										}
									}
								}
								HX_STACK_LINE(1047)
								int tmp37 = sourceFormat;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1047)
								switch( (int)(tmp37)){
									case (int)2: {
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1047)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1047)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1047)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1047)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1047)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1047)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1047)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1047)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1047)
											int tmp38 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1047)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1047)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1047)
											{
												HX_STACK_LINE(1047)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(1047)
												val;
											}
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1055)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,setPixels,(void))

int ImageDataUtil_obj::threshold( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::String operation,int threshold,int color,int mask,bool copySource,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","threshold",0xd6e0e03d,"lime.graphics.utils.ImageDataUtil.threshold","lime/graphics/utils/ImageDataUtil.hx",1060,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(1062)
	int _color;		HX_STACK_VAR(_color,"_color");
	HX_STACK_LINE(1062)
	int _mask;		HX_STACK_VAR(_mask,"_mask");
	HX_STACK_LINE(1062)
	int _threshold;		HX_STACK_VAR(_threshold,"_threshold");
	HX_STACK_LINE(1064)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1064)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(1068)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1068)
			{
				HX_STACK_LINE(1068)
				int argb = color;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(1068)
				{
					HX_STACK_LINE(1068)
					int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1068)
					{
						HX_STACK_LINE(1068)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1068)
						tmp2 = rgba;
					}
					HX_STACK_LINE(1068)
					int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1068)
					{
						HX_STACK_LINE(1068)
						int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1068)
						int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1068)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1068)
						int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1068)
						int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1068)
						int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1068)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1068)
						int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1068)
						int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1068)
						int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1068)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1068)
						int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1068)
						int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1068)
						int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1068)
						int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1068)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1068)
						int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1068)
						rgba = tmp19;
					}
					HX_STACK_LINE(1068)
					tmp1 = rgba;
				}
			}
			HX_STACK_LINE(1068)
			_color = tmp1;
			HX_STACK_LINE(1069)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1069)
			{
				HX_STACK_LINE(1069)
				int argb = mask;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(1069)
				{
					HX_STACK_LINE(1069)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1069)
					{
						HX_STACK_LINE(1069)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1069)
						tmp3 = rgba;
					}
					HX_STACK_LINE(1069)
					int rgba = tmp3;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1069)
					{
						HX_STACK_LINE(1069)
						int tmp4 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1069)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1069)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1069)
						int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1069)
						int tmp8 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1069)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1069)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1069)
						int tmp11 = (int(tmp10) << int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1069)
						int tmp12 = (int(tmp7) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1069)
						int tmp13 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1069)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1069)
						int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1069)
						int tmp16 = (int(tmp12) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1069)
						int tmp17 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1069)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1069)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1069)
						int tmp20 = (int(tmp16) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1069)
						rgba = tmp20;
					}
					HX_STACK_LINE(1069)
					tmp2 = rgba;
				}
			}
			HX_STACK_LINE(1069)
			_mask = tmp2;
			HX_STACK_LINE(1070)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1070)
			{
				HX_STACK_LINE(1070)
				int argb = threshold;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(1070)
				{
					HX_STACK_LINE(1070)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1070)
					{
						HX_STACK_LINE(1070)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1070)
						tmp4 = rgba;
					}
					HX_STACK_LINE(1070)
					int rgba = tmp4;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1070)
					{
						HX_STACK_LINE(1070)
						int tmp5 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1070)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1070)
						int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1070)
						int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1070)
						int tmp9 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1070)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1070)
						int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1070)
						int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1070)
						int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1070)
						int tmp14 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1070)
						int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1070)
						int tmp16 = (int(tmp15) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1070)
						int tmp17 = (int(tmp13) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1070)
						int tmp18 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1070)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1070)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1070)
						int tmp21 = (int(tmp17) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1070)
						rgba = tmp21;
					}
					HX_STACK_LINE(1070)
					tmp3 = rgba;
				}
			}
			HX_STACK_LINE(1070)
			_threshold = tmp3;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1074)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1074)
			{
				HX_STACK_LINE(1074)
				int bgra = color;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(1074)
				{
					HX_STACK_LINE(1074)
					int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(1074)
					{
						HX_STACK_LINE(1074)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1074)
						tmp2 = rgba;
					}
					HX_STACK_LINE(1074)
					int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1074)
					{
						HX_STACK_LINE(1074)
						int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(1074)
						int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1074)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1074)
						int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1074)
						int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1074)
						int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1074)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1074)
						int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1074)
						int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1074)
						int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1074)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1074)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1074)
						int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1074)
						int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1074)
						int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1074)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1074)
						int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1074)
						rgba = tmp19;
					}
					HX_STACK_LINE(1074)
					tmp1 = rgba;
				}
			}
			HX_STACK_LINE(1074)
			_color = tmp1;
			HX_STACK_LINE(1075)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1075)
			{
				HX_STACK_LINE(1075)
				int bgra = mask;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(1075)
				{
					HX_STACK_LINE(1075)
					int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1075)
					{
						HX_STACK_LINE(1075)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1075)
						tmp3 = rgba;
					}
					HX_STACK_LINE(1075)
					int rgba = tmp3;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1075)
					{
						HX_STACK_LINE(1075)
						int tmp4 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(1075)
						int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1075)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1075)
						int tmp7 = (int(tmp6) << int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1075)
						int tmp8 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1075)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1075)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1075)
						int tmp11 = (int(tmp10) << int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1075)
						int tmp12 = (int(tmp7) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1075)
						int tmp13 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1075)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1075)
						int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1075)
						int tmp16 = (int(tmp15) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1075)
						int tmp17 = (int(tmp12) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1075)
						int tmp18 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1075)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1075)
						int tmp20 = (int(tmp17) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1075)
						rgba = tmp20;
					}
					HX_STACK_LINE(1075)
					tmp2 = rgba;
				}
			}
			HX_STACK_LINE(1075)
			_mask = tmp2;
			HX_STACK_LINE(1076)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1076)
			{
				HX_STACK_LINE(1076)
				int bgra = threshold;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(1076)
				{
					HX_STACK_LINE(1076)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1076)
					{
						HX_STACK_LINE(1076)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(1076)
						tmp4 = rgba;
					}
					HX_STACK_LINE(1076)
					int rgba = tmp4;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(1076)
					{
						HX_STACK_LINE(1076)
						int tmp5 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1076)
						int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1076)
						int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(1076)
						int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(1076)
						int tmp9 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1076)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1076)
						int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1076)
						int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1076)
						int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1076)
						int tmp14 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1076)
						int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1076)
						int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1076)
						int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1076)
						int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(1076)
						int tmp19 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(1076)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(1076)
						int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(1076)
						rgba = tmp21;
					}
					HX_STACK_LINE(1076)
					tmp3 = rgba;
				}
			}
			HX_STACK_LINE(1076)
			_threshold = tmp3;
		}
		;break;
		default: {
			HX_STACK_LINE(1080)
			_color = color;
			HX_STACK_LINE(1081)
			_mask = mask;
			HX_STACK_LINE(1082)
			_threshold = threshold;
		}
	}
	HX_STACK_LINE(1086)
	::String tmp1 = operation;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1086)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1086)
	::String _switch_1 = (tmp1);
	if (  ( _switch_1==HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"))){
		HX_STACK_LINE(1088)
		tmp2 = (int)0;
	}
	else if (  ( _switch_1==HX_HCSTRING("==","\x60","\x35","\x00","\x00"))){
		HX_STACK_LINE(1089)
		tmp2 = (int)1;
	}
	else if (  ( _switch_1==HX_HCSTRING("<","\x3c","\x00","\x00","\x00"))){
		HX_STACK_LINE(1090)
		tmp2 = (int)2;
	}
	else if (  ( _switch_1==HX_HCSTRING("<=","\x81","\x34","\x00","\x00"))){
		HX_STACK_LINE(1091)
		tmp2 = (int)3;
	}
	else if (  ( _switch_1==HX_HCSTRING(">","\x3e","\x00","\x00","\x00"))){
		HX_STACK_LINE(1092)
		tmp2 = (int)4;
	}
	else if (  ( _switch_1==HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"))){
		HX_STACK_LINE(1093)
		tmp2 = (int)5;
	}
	else  {
		HX_STACK_LINE(1094)
		tmp2 = (int)-1;
	}
;
;
	HX_STACK_LINE(1086)
	int _operation = tmp2;		HX_STACK_VAR(_operation,"_operation");
	HX_STACK_LINE(1098)
	bool tmp3 = (_operation == (int)-1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1098)
	if ((tmp3)){
		HX_STACK_LINE(1098)
		return (int)0;
	}
	HX_STACK_LINE(1100)
	::lime::utils::ArrayBufferView tmp4 = sourceImage->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1100)
	::lime::utils::ArrayBufferView srcData = tmp4;		HX_STACK_VAR(srcData,"srcData");
	HX_STACK_LINE(1101)
	::lime::utils::ArrayBufferView tmp5 = image->buffer->data;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1101)
	::lime::utils::ArrayBufferView destData = tmp5;		HX_STACK_VAR(destData,"destData");
	HX_STACK_LINE(1103)
	bool tmp6 = (srcData == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1103)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1103)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1103)
	if ((tmp7)){
		HX_STACK_LINE(1103)
		tmp8 = (destData == null());
	}
	else{
		HX_STACK_LINE(1103)
		tmp8 = true;
	}
	HX_STACK_LINE(1103)
	if ((tmp8)){
		HX_STACK_LINE(1103)
		return (int)0;
	}
	HX_STACK_LINE(1105)
	int hits = (int)0;		HX_STACK_VAR(hits,"hits");
	HX_STACK_LINE(1108)
	bool tmp9 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1108)
	if ((tmp9)){
		HX_STACK_LINE(1108)
		hits = ::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_threshold.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),_operation,(int((int(_threshold) >> int((int)16))) & int((int)65535)),(int(_threshold) & int((int)65535)),(int((int(_color) >> int((int)16))) & int((int)65535)),(int(_color) & int((int)65535)),(int((int(_mask) >> int((int)16))) & int((int)65535)),(int(_mask) & int((int)65535)),copySource);
	}
	else{
		HX_STACK_LINE(1112)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp10 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1112)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView srcView = tmp10;		HX_STACK_VAR(srcView,"srcView");
		HX_STACK_LINE(1113)
		::lime::graphics::Image tmp11 = image;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1113)
		::lime::math::Rectangle tmp12 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,srcView->width,srcView->height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1113)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp13 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1113)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp13;		HX_STACK_VAR(destView,"destView");
		HX_STACK_LINE(1115)
		int tmp14 = sourceImage->buffer->format;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1115)
		int srcFormat = tmp14;		HX_STACK_VAR(srcFormat,"srcFormat");
		HX_STACK_LINE(1116)
		int tmp15 = image->buffer->format;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1116)
		int destFormat = tmp15;		HX_STACK_VAR(destFormat,"destFormat");
		HX_STACK_LINE(1117)
		bool tmp16 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1117)
		bool srcPremultiplied = tmp16;		HX_STACK_VAR(srcPremultiplied,"srcPremultiplied");
		HX_STACK_LINE(1118)
		bool tmp17 = image->buffer->premultiplied;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1118)
		bool destPremultiplied = tmp17;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
		HX_STACK_LINE(1120)
		int srcPosition;		HX_STACK_VAR(srcPosition,"srcPosition");
		HX_STACK_LINE(1120)
		int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
		HX_STACK_LINE(1120)
		int srcPixel;		HX_STACK_VAR(srcPixel,"srcPixel");
		HX_STACK_LINE(1120)
		int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
		HX_STACK_LINE(1120)
		int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
		HX_STACK_LINE(1120)
		bool test;		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(1120)
		int value;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(1122)
		{
			HX_STACK_LINE(1122)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1122)
			int _g = destView->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1122)
			while((true)){
				HX_STACK_LINE(1122)
				bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1122)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1122)
				if ((tmp19)){
					HX_STACK_LINE(1122)
					break;
				}
				HX_STACK_LINE(1122)
				int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1122)
				int y = tmp20;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(1124)
				int tmp21 = srcView->offset;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1124)
				int tmp22 = (srcView->stride * y);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1124)
				int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1124)
				srcPosition = tmp23;
				HX_STACK_LINE(1125)
				int tmp24 = destView->offset;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1125)
				int tmp25 = (destView->stride * y);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1125)
				int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1125)
				destPosition = tmp26;
				HX_STACK_LINE(1127)
				{
					HX_STACK_LINE(1127)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1127)
					int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1127)
					while((true)){
						HX_STACK_LINE(1127)
						bool tmp27 = (_g3 < _g2);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(1127)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(1127)
						if ((tmp28)){
							HX_STACK_LINE(1127)
							break;
						}
						HX_STACK_LINE(1127)
						int tmp29 = (_g3)++;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(1127)
						int x = tmp29;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(1129)
						{
							HX_STACK_LINE(1129)
							int tmp30 = srcFormat;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1129)
							switch( (int)(tmp30)){
								case (int)2: {
									HX_STACK_LINE(1129)
									int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1129)
									Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1129)
									int r = tmp32;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(1129)
									int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1129)
									Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1129)
									int g = tmp34;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1129)
									int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1129)
									Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1129)
									int b = tmp36;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1129)
									int tmp37 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1129)
									Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1129)
									int a = tmp38;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1129)
									int tmp39 = (int(r) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1129)
									int tmp40 = (int(tmp39) << int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1129)
									int tmp41 = (int(g) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1129)
									int tmp42 = (int(tmp41) << int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1129)
									int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1129)
									int tmp44 = (int(b) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1129)
									int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1129)
									int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1129)
									int tmp47 = (int(a) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1129)
									int tmp48 = (int(tmp46) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1129)
									srcPixel = tmp48;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(1129)
									int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1129)
									Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1129)
									int r = tmp32;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(1129)
									int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1129)
									Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1129)
									int g = tmp34;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1129)
									int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1129)
									Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1129)
									int b = tmp36;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1129)
									int tmp37 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1129)
									Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1129)
									int a = tmp38;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1129)
									int tmp39 = (int(r) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1129)
									int tmp40 = (int(tmp39) << int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1129)
									int tmp41 = (int(g) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1129)
									int tmp42 = (int(tmp41) << int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1129)
									int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1129)
									int tmp44 = (int(b) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1129)
									int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1129)
									int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1129)
									int tmp47 = (int(a) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1129)
									int tmp48 = (int(tmp46) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1129)
									srcPixel = tmp48;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(1129)
									int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1129)
									Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1129)
									int r = tmp32;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(1129)
									int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1129)
									Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1129)
									int g = tmp34;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1129)
									int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1129)
									Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1129)
									int b = tmp36;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1129)
									int tmp37 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1129)
									Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1129)
									int a = tmp38;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(1129)
									int tmp39 = (int(r) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1129)
									int tmp40 = (int(tmp39) << int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1129)
									int tmp41 = (int(g) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1129)
									int tmp42 = (int(tmp41) << int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1129)
									int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1129)
									int tmp44 = (int(b) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1129)
									int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1129)
									int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1129)
									int tmp47 = (int(a) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1129)
									int tmp48 = (int(tmp46) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1129)
									srcPixel = tmp48;
								}
								;break;
							}
							HX_STACK_LINE(1129)
							bool tmp31 = srcPremultiplied;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1129)
							if ((tmp31)){
								HX_STACK_LINE(1129)
								int tmp32 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1129)
								bool tmp33 = (tmp32 != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1129)
								bool tmp34;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1129)
								if ((tmp33)){
									HX_STACK_LINE(1129)
									int tmp35 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1129)
									int tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1129)
									tmp34 = (tmp36 != (int)255);
								}
								else{
									HX_STACK_LINE(1129)
									tmp34 = false;
								}
								HX_STACK_LINE(1129)
								if ((tmp34)){
									HX_STACK_LINE(1129)
									int tmp35 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1129)
									Float tmp36 = (Float(((Float)255.0)) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1129)
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp36;
									HX_STACK_LINE(1129)
									{
										HX_STACK_LINE(1129)
										Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(1129)
										{
											HX_STACK_LINE(1129)
											::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1129)
											::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(1129)
											int tmp39 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1129)
											int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1129)
											Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1129)
											Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1129)
											int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1129)
											int idx = tmp43;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(1129)
											int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1129)
											tmp37 = (int(tmp44) & int((int)255));
										}
										HX_STACK_LINE(1129)
										int r = tmp37;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(1129)
										Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1129)
										{
											HX_STACK_LINE(1129)
											::lime::utils::ArrayBufferView tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1129)
											::lime::utils::ArrayBufferView this1 = tmp39;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(1129)
											int tmp40 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1129)
											int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1129)
											Float tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1129)
											Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1129)
											int tmp44 = ::Math_obj::round(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1129)
											int idx = tmp44;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(1129)
											int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1129)
											tmp38 = (int(tmp45) & int((int)255));
										}
										HX_STACK_LINE(1129)
										int g = tmp38;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(1129)
										Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1129)
										{
											HX_STACK_LINE(1129)
											::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1129)
											::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(1129)
											int tmp41 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1129)
											int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1129)
											Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1129)
											Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1129)
											int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1129)
											int idx = tmp45;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(1129)
											int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1129)
											tmp39 = (int(tmp46) & int((int)255));
										}
										HX_STACK_LINE(1129)
										int b = tmp39;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(1129)
										int tmp40 = (int(r) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1129)
										int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(1129)
										int tmp42 = (int(g) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(1129)
										int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(1129)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(1129)
										int tmp45 = (int(b) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(1129)
										int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(1129)
										int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1129)
										int tmp48 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1129)
										int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1129)
										int tmp50 = (int(tmp47) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(1129)
										srcPixel = tmp50;
									}
								}
							}
						}
						HX_STACK_LINE(1131)
						int tmp30 = (int(srcPixel) & int(_mask));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(1131)
						pixelMask = tmp30;
						HX_STACK_LINE(1133)
						int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(1133)
						{
							HX_STACK_LINE(1133)
							int tmp110;		HX_STACK_VAR(tmp110,"tmp110");
							HX_STACK_LINE(1133)
							int tmp210;		HX_STACK_VAR(tmp210,"tmp210");
							HX_STACK_LINE(1133)
							int tmp32 = (int(pixelMask) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1133)
							int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1133)
							tmp110 = tmp33;
							HX_STACK_LINE(1133)
							int tmp34 = (int(_threshold) >> int((int)24));		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1133)
							int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1133)
							tmp210 = tmp35;
							HX_STACK_LINE(1133)
							bool tmp36 = (tmp110 != tmp210);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1133)
							if ((tmp36)){
								HX_STACK_LINE(1133)
								bool tmp37 = (tmp110 > tmp210);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1133)
								if ((tmp37)){
									HX_STACK_LINE(1133)
									tmp31 = (int)1;
								}
								else{
									HX_STACK_LINE(1133)
									tmp31 = (int)-1;
								}
							}
							else{
								HX_STACK_LINE(1133)
								int tmp37 = (int(pixelMask) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1133)
								int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(1133)
								tmp110 = tmp38;
								HX_STACK_LINE(1133)
								int tmp39 = (int(_threshold) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(1133)
								int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(1133)
								tmp210 = tmp40;
								HX_STACK_LINE(1133)
								bool tmp41 = (tmp110 != tmp210);		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(1133)
								if ((tmp41)){
									HX_STACK_LINE(1133)
									bool tmp42 = (tmp110 > tmp210);		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1133)
									if ((tmp42)){
										HX_STACK_LINE(1133)
										tmp31 = (int)1;
									}
									else{
										HX_STACK_LINE(1133)
										tmp31 = (int)-1;
									}
								}
								else{
									HX_STACK_LINE(1133)
									int tmp42 = (int(pixelMask) >> int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1133)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1133)
									tmp110 = tmp43;
									HX_STACK_LINE(1133)
									int tmp44 = (int(_threshold) >> int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1133)
									int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1133)
									tmp210 = tmp45;
									HX_STACK_LINE(1133)
									bool tmp46 = (tmp110 != tmp210);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1133)
									if ((tmp46)){
										HX_STACK_LINE(1133)
										bool tmp47 = (tmp110 > tmp210);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1133)
										if ((tmp47)){
											HX_STACK_LINE(1133)
											tmp31 = (int)1;
										}
										else{
											HX_STACK_LINE(1133)
											tmp31 = (int)-1;
										}
									}
									else{
										HX_STACK_LINE(1133)
										int tmp47 = (int(pixelMask) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1133)
										tmp110 = tmp47;
										HX_STACK_LINE(1133)
										int tmp48 = (int(_threshold) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1133)
										tmp210 = tmp48;
										HX_STACK_LINE(1133)
										bool tmp49 = (tmp110 != tmp210);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(1133)
										if ((tmp49)){
											HX_STACK_LINE(1133)
											bool tmp50 = (tmp110 > tmp210);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1133)
											if ((tmp50)){
												HX_STACK_LINE(1133)
												tmp31 = (int)1;
											}
											else{
												HX_STACK_LINE(1133)
												tmp31 = (int)-1;
											}
										}
										else{
											HX_STACK_LINE(1133)
											tmp31 = (int)0;
										}
									}
								}
							}
						}
						HX_STACK_LINE(1133)
						value = tmp31;
						HX_STACK_LINE(1135)
						int tmp32 = _operation;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(1135)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(1135)
						switch( (int)(tmp32)){
							case (int)0: {
								HX_STACK_LINE(1137)
								tmp33 = (value != (int)0);
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1138)
								tmp33 = (value == (int)0);
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(1139)
								tmp33 = (value == (int)-1);
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(1140)
								bool tmp34 = (value == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1140)
								bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1140)
								if ((tmp35)){
									HX_STACK_LINE(1140)
									tmp33 = (value == (int)-1);
								}
								else{
									HX_STACK_LINE(1140)
									tmp33 = true;
								}
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(1141)
								tmp33 = (value == (int)1);
							}
							;break;
							case (int)5: {
								HX_STACK_LINE(1142)
								bool tmp34 = (value == (int)0);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1142)
								bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1142)
								if ((tmp35)){
									HX_STACK_LINE(1142)
									tmp33 = (value == (int)1);
								}
								else{
									HX_STACK_LINE(1142)
									tmp33 = true;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(1143)
								tmp33 = false;
							}
						}
						HX_STACK_LINE(1135)
						test = tmp33;
						HX_STACK_LINE(1147)
						bool tmp34 = test;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(1147)
						if ((tmp34)){
							HX_STACK_LINE(1149)
							{
								HX_STACK_LINE(1149)
								bool tmp35 = destPremultiplied;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1149)
								if ((tmp35)){
									HX_STACK_LINE(1149)
									int tmp36 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1149)
									bool tmp37 = (tmp36 == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1149)
									if ((tmp37)){
										HX_STACK_LINE(1149)
										bool tmp38 = (_color != (int)0);		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1149)
										if ((tmp38)){
											HX_STACK_LINE(1149)
											_color = (int)0;
										}
									}
									else{
										HX_STACK_LINE(1149)
										int tmp38 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(1149)
										bool tmp39 = (tmp38 != (int)255);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1149)
										if ((tmp39)){
											HX_STACK_LINE(1149)
											Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1149)
												::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(1149)
												{
													HX_STACK_LINE(1149)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(1149)
													tmp40 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(_color) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(1149)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp40;
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												int tmp41 = (int(_color) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1149)
												int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1149)
												int tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1149)
												int tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1149)
												int tmp45 = (int(tmp44) >> int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1149)
												int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1149)
												int tmp47 = (int(tmp46) << int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1149)
												int tmp48 = (int(_color) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1149)
												int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1149)
												int tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1149)
												int tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1149)
												int tmp52 = (int(tmp51) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1149)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1149)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1149)
												int tmp55 = (int(tmp47) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1149)
												int tmp56 = (int(_color) >> int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1149)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1149)
												int tmp58 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1149)
												int tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1149)
												int tmp60 = (int(tmp59) >> int((int)16));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(1149)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1149)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(1149)
												int tmp63 = (int(tmp55) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(1149)
												int tmp64 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(1149)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(1149)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(1149)
												_color = tmp66;
											}
										}
									}
								}
								HX_STACK_LINE(1149)
								int tmp36 = destFormat;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1149)
								switch( (int)(tmp36)){
									case (int)2: {
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1149)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1149)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1149)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int val = tmp37;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1149)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1149)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1149)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int val = tmp37;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int val = tmp37;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1149)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1149)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
										HX_STACK_LINE(1149)
										{
											HX_STACK_LINE(1149)
											int tmp37 = (int(_color) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1149)
											int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1149)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1149)
											{
												HX_STACK_LINE(1149)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(1149)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(1150)
							(hits)++;
						}
						else{
							HX_STACK_LINE(1152)
							bool tmp35 = copySource;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1152)
							if ((tmp35)){
								HX_STACK_LINE(1154)
								bool tmp36 = destPremultiplied;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1154)
								if ((tmp36)){
									HX_STACK_LINE(1154)
									int tmp37 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1154)
									bool tmp38 = (tmp37 == (int)0);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1154)
									if ((tmp38)){
										HX_STACK_LINE(1154)
										bool tmp39 = (srcPixel != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1154)
										if ((tmp39)){
											HX_STACK_LINE(1154)
											srcPixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(1154)
										int tmp39 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1154)
										bool tmp40 = (tmp39 != (int)255);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1154)
										if ((tmp40)){
											HX_STACK_LINE(1154)
											Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1154)
												::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(1154)
												{
													HX_STACK_LINE(1154)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(1154)
													tmp41 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(srcPixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(1154)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp41;
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												int tmp42 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1154)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1154)
												int tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1154)
												int tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1154)
												int tmp46 = (int(tmp45) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1154)
												int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1154)
												int tmp48 = (int(tmp47) << int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1154)
												int tmp49 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1154)
												int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1154)
												int tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1154)
												int tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1154)
												int tmp53 = (int(tmp52) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1154)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1154)
												int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1154)
												int tmp56 = (int(tmp48) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1154)
												int tmp57 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1154)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1154)
												int tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1154)
												int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(1154)
												int tmp61 = (int(tmp60) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1154)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(1154)
												int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(1154)
												int tmp64 = (int(tmp56) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(1154)
												int tmp65 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(1154)
												int tmp66 = (int(tmp65) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(1154)
												int tmp67 = (int(tmp64) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(1154)
												srcPixel = tmp67;
											}
										}
									}
								}
								HX_STACK_LINE(1154)
								int tmp37 = destFormat;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1154)
								switch( (int)(tmp37)){
									case (int)2: {
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1154)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1154)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1154)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1154)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1154)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1154)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1154)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1154)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
										HX_STACK_LINE(1154)
										{
											HX_STACK_LINE(1154)
											int tmp38 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1154)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1154)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1154)
											{
												HX_STACK_LINE(1154)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(1154)
												val;
											}
										}
									}
									;break;
								}
							}
						}
						HX_STACK_LINE(1158)
						hx::AddEq(srcPosition,(int)4);
						HX_STACK_LINE(1159)
						hx::AddEq(destPosition,(int)4);
					}
				}
			}
		}
	}
	HX_STACK_LINE(1167)
	bool tmp10 = (hits > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1167)
	if ((tmp10)){
		HX_STACK_LINE(1169)
		image->dirty = true;
	}
	HX_STACK_LINE(1173)
	int tmp11 = hits;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1173)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC10(ImageDataUtil_obj,threshold,return )

Void ImageDataUtil_obj::unmultiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","unmultiplyAlpha",0xa6ce9eb3,"lime.graphics.utils.ImageDataUtil.unmultiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",1178,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1180)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1180)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1181)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1181)
		if ((tmp1)){
			HX_STACK_LINE(1181)
			return null();
		}
		HX_STACK_LINE(1184)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1184)
		if ((tmp2)){
			HX_STACK_LINE(1184)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha.call(hx::DynamicPtr(image));
		}
		else{
			HX_STACK_LINE(1188)
			int tmp3 = image->buffer->format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1188)
			int format = tmp3;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(1189)
			int tmp4 = data->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1189)
			Float tmp5 = (Float(tmp4) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1189)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1189)
			int length = tmp6;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(1190)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(1192)
			{
				HX_STACK_LINE(1192)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1192)
				while((true)){
					HX_STACK_LINE(1192)
					bool tmp7 = (_g < length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1192)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1192)
					if ((tmp8)){
						HX_STACK_LINE(1192)
						break;
					}
					HX_STACK_LINE(1192)
					int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1192)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1194)
					{
						HX_STACK_LINE(1194)
						int tmp10 = (i * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1194)
						int offset = tmp10;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(1194)
						int tmp11 = format;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1194)
						switch( (int)(tmp11)){
							case (int)2: {
								HX_STACK_LINE(1194)
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1194)
								Dynamic tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1194)
								int r = tmp13;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1194)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1194)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1194)
								int g = tmp15;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1194)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1194)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1194)
								int b = tmp17;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1194)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1194)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1194)
								int a = tmp19;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1194)
								int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1194)
								int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1194)
								int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1194)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1194)
								int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1194)
								int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1194)
								int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1194)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1194)
								int tmp28 = (int(a) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1194)
								int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1194)
								pixel = tmp29;
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(1194)
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1194)
								Dynamic tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1194)
								int r = tmp13;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1194)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1194)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1194)
								int g = tmp15;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1194)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1194)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1194)
								int b = tmp17;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1194)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1194)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1194)
								int a = tmp19;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1194)
								int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1194)
								int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1194)
								int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1194)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1194)
								int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1194)
								int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1194)
								int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1194)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1194)
								int tmp28 = (int(a) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1194)
								int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1194)
								pixel = tmp29;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1194)
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1194)
								Dynamic tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1194)
								int r = tmp13;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1194)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1194)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1194)
								int g = tmp15;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1194)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1194)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1194)
								int b = tmp17;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1194)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1194)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1194)
								int a = tmp19;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1194)
								int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1194)
								int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1194)
								int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1194)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1194)
								int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1194)
								int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1194)
								int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1194)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1194)
								int tmp28 = (int(a) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1194)
								int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1194)
								pixel = tmp29;
							}
							;break;
						}
						HX_STACK_LINE(1194)
						{
							HX_STACK_LINE(1194)
							int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1194)
							bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1194)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1194)
							if ((tmp13)){
								HX_STACK_LINE(1194)
								int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1194)
								int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1194)
								tmp14 = (tmp16 != (int)255);
							}
							else{
								HX_STACK_LINE(1194)
								tmp14 = false;
							}
							HX_STACK_LINE(1194)
							if ((tmp14)){
								HX_STACK_LINE(1194)
								int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1194)
								Float tmp16 = (Float(((Float)255.0)) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1194)
								::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp16;
								HX_STACK_LINE(1194)
								{
									HX_STACK_LINE(1194)
									Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1194)
									{
										HX_STACK_LINE(1194)
										::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1194)
										::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1194)
										int tmp19 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1194)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1194)
										Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1194)
										Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1194)
										int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1194)
										int idx = tmp23;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1194)
										int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1194)
										tmp17 = (int(tmp24) & int((int)255));
									}
									HX_STACK_LINE(1194)
									int r = tmp17;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(1194)
									Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1194)
									{
										HX_STACK_LINE(1194)
										::lime::utils::ArrayBufferView tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1194)
										::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1194)
										int tmp20 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1194)
										int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1194)
										Float tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1194)
										Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1194)
										int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1194)
										int idx = tmp24;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1194)
										int tmp25 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1194)
										tmp18 = (int(tmp25) & int((int)255));
									}
									HX_STACK_LINE(1194)
									int g = tmp18;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1194)
									Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1194)
									{
										HX_STACK_LINE(1194)
										::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1194)
										::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1194)
										int tmp21 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1194)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1194)
										Float tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1194)
										Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1194)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1194)
										int idx = tmp25;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1194)
										int tmp26 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1194)
										tmp19 = (int(tmp26) & int((int)255));
									}
									HX_STACK_LINE(1194)
									int b = tmp19;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1194)
									int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1194)
									int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1194)
									int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1194)
									int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1194)
									int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1194)
									int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1194)
									int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1194)
									int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1194)
									int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1194)
									int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1194)
									int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1194)
									pixel = tmp30;
								}
							}
						}
					}
					HX_STACK_LINE(1195)
					{
						HX_STACK_LINE(1195)
						int tmp10 = (i * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1195)
						int offset = tmp10;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(1195)
						int tmp11 = format;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1195)
						switch( (int)(tmp11)){
							case (int)2: {
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1195)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1195)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1195)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int val = tmp12;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1195)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1195)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1195)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int val = tmp12;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int val = tmp12;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1195)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1195)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
								HX_STACK_LINE(1195)
								{
									HX_STACK_LINE(1195)
									int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1195)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1195)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1195)
									{
										HX_STACK_LINE(1195)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(1195)
										val;
									}
								}
							}
							;break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1201)
		image->buffer->premultiplied = false;
		HX_STACK_LINE(1202)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,unmultiplyAlpha,(void))

int ImageDataUtil_obj::__pixelCompare( int n1,int n2){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","__pixelCompare",0x0cbb8c0d,"lime.graphics.utils.ImageDataUtil.__pixelCompare","lime/graphics/utils/ImageDataUtil.hx",1207,0x494d921f)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(1209)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1210)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1212)
	int tmp = (int(n1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1212)
	int tmp3 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1212)
	tmp1 = tmp3;
	HX_STACK_LINE(1213)
	int tmp4 = (int(n2) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1213)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1213)
	tmp2 = tmp5;
	HX_STACK_LINE(1215)
	bool tmp6 = (tmp1 != tmp2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1215)
	if ((tmp6)){
		HX_STACK_LINE(1217)
		bool tmp7 = (tmp1 > tmp2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1217)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1217)
		if ((tmp7)){
			HX_STACK_LINE(1217)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(1217)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(1217)
		return tmp8;
	}
	else{
		HX_STACK_LINE(1221)
		int tmp7 = (int(n1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1221)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1221)
		tmp1 = tmp8;
		HX_STACK_LINE(1222)
		int tmp9 = (int(n2) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1222)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1222)
		tmp2 = tmp10;
		HX_STACK_LINE(1224)
		bool tmp11 = (tmp1 != tmp2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1224)
		if ((tmp11)){
			HX_STACK_LINE(1226)
			bool tmp12 = (tmp1 > tmp2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1226)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1226)
			if ((tmp12)){
				HX_STACK_LINE(1226)
				tmp13 = (int)1;
			}
			else{
				HX_STACK_LINE(1226)
				tmp13 = (int)-1;
			}
			HX_STACK_LINE(1226)
			return tmp13;
		}
		else{
			HX_STACK_LINE(1230)
			int tmp12 = (int(n1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1230)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1230)
			tmp1 = tmp13;
			HX_STACK_LINE(1231)
			int tmp14 = (int(n2) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1231)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1231)
			tmp2 = tmp15;
			HX_STACK_LINE(1233)
			bool tmp16 = (tmp1 != tmp2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1233)
			if ((tmp16)){
				HX_STACK_LINE(1235)
				bool tmp17 = (tmp1 > tmp2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1235)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1235)
				if ((tmp17)){
					HX_STACK_LINE(1235)
					tmp18 = (int)1;
				}
				else{
					HX_STACK_LINE(1235)
					tmp18 = (int)-1;
				}
				HX_STACK_LINE(1235)
				return tmp18;
			}
			else{
				HX_STACK_LINE(1239)
				int tmp17 = (int(n1) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1239)
				tmp1 = tmp17;
				HX_STACK_LINE(1240)
				int tmp18 = (int(n2) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1240)
				tmp2 = tmp18;
				HX_STACK_LINE(1242)
				bool tmp19 = (tmp1 != tmp2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1242)
				if ((tmp19)){
					HX_STACK_LINE(1244)
					bool tmp20 = (tmp1 > tmp2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1244)
					int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1244)
					if ((tmp20)){
						HX_STACK_LINE(1244)
						tmp21 = (int)1;
					}
					else{
						HX_STACK_LINE(1244)
						tmp21 = (int)-1;
					}
					HX_STACK_LINE(1244)
					return tmp21;
				}
				else{
					HX_STACK_LINE(1248)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(1215)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,__pixelCompare,return )

Void ImageDataUtil_obj::lime_image_data_util_color_transform( Dynamic image,Dynamic rect,Dynamic colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_color_transform",0x3cac7168,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_color_transform","lime/graphics/utils/ImageDataUtil.hx",1269,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(1269)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_color_transform.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(colorMatrix));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,lime_image_data_util_color_transform,(void))

Void ImageDataUtil_obj::lime_image_data_util_copy_channel( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int srcChannel,int destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_copy_channel",0x470716e1,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_copy_channel","lime/graphics/utils/ImageDataUtil.hx",1270,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(srcChannel,"srcChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(1270)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),srcChannel,destChannel);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,lime_image_data_util_copy_channel,(void))

Void ImageDataUtil_obj::lime_image_data_util_copy_pixels( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,Dynamic alphaImage,Dynamic alphaPoint,bool mergeAlpha){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_copy_pixels",0x941986cf,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_copy_pixels","lime/graphics/utils/ImageDataUtil.hx",1271,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(alphaImage,"alphaImage")
		HX_STACK_ARG(alphaPoint,"alphaPoint")
		HX_STACK_ARG(mergeAlpha,"mergeAlpha")
		HX_STACK_LINE(1271)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),hx::DynamicPtr(alphaImage),hx::DynamicPtr(alphaPoint),mergeAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,lime_image_data_util_copy_pixels,(void))

Void ImageDataUtil_obj::lime_image_data_util_fill_rect( Dynamic image,Dynamic rect,int rg,int ba){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_fill_rect",0xea105ab8,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_fill_rect","lime/graphics/utils/ImageDataUtil.hx",1272,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(rg,"rg")
		HX_STACK_ARG(ba,"ba")
		HX_STACK_LINE(1272)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),rg,ba);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_fill_rect,(void))

Void ImageDataUtil_obj::lime_image_data_util_flood_fill( Dynamic image,int x,int y,int rg,int ba){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_flood_fill",0x954481cc,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_flood_fill","lime/graphics/utils/ImageDataUtil.hx",1273,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(rg,"rg")
		HX_STACK_ARG(ba,"ba")
		HX_STACK_LINE(1273)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill.call(hx::DynamicPtr(image),x,y,rg,ba);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,lime_image_data_util_flood_fill,(void))

Void ImageDataUtil_obj::lime_image_data_util_get_pixels( Dynamic image,Dynamic rect,int format,Dynamic bytes){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_get_pixels",0xafc6d8de,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_get_pixels","lime/graphics/utils/ImageDataUtil.hx",1274,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(1274)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),format,hx::DynamicPtr(bytes));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_get_pixels,(void))

Void ImageDataUtil_obj::lime_image_data_util_merge( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_merge",0x6bf371d0,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_merge","lime/graphics/utils/ImageDataUtil.hx",1275,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(1275)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_merge.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,lime_image_data_util_merge,(void))

Void ImageDataUtil_obj::lime_image_data_util_multiply_alpha( Dynamic image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_multiply_alpha",0xa72191ab,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_multiply_alpha","lime/graphics/utils/ImageDataUtil.hx",1276,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1276)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha.call(hx::DynamicPtr(image));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,lime_image_data_util_multiply_alpha,(void))

Void ImageDataUtil_obj::lime_image_data_util_resize( Dynamic image,Dynamic buffer,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_resize",0x0983bfdc,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_resize","lime/graphics/utils/ImageDataUtil.hx",1277,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1277)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_resize.call(hx::DynamicPtr(image),hx::DynamicPtr(buffer),width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_resize,(void))

Void ImageDataUtil_obj::lime_image_data_util_set_format( Dynamic image,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_set_format",0x2429175c,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_set_format","lime/graphics/utils/ImageDataUtil.hx",1278,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1278)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_format.call(hx::DynamicPtr(image),format);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,lime_image_data_util_set_format,(void))

Void ImageDataUtil_obj::lime_image_data_util_set_pixels( Dynamic image,Dynamic rect,Dynamic bytes,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_set_pixels",0xb3447752,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_set_pixels","lime/graphics/utils/ImageDataUtil.hx",1279,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1279)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(bytes),format);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_set_pixels,(void))

int ImageDataUtil_obj::lime_image_data_util_threshold( Dynamic image,::lime::graphics::Image sourceImage,Dynamic sourceRect,Dynamic destPoint,int operation,int thresholdRG,int thresholdBA,int colorRG,int colorBA,int maskRG,int maskBA,bool copySource){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_threshold",0xe481fec3,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_threshold","lime/graphics/utils/ImageDataUtil.hx",1280,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(thresholdRG,"thresholdRG")
	HX_STACK_ARG(thresholdBA,"thresholdBA")
	HX_STACK_ARG(colorRG,"colorRG")
	HX_STACK_ARG(colorBA,"colorBA")
	HX_STACK_ARG(maskRG,"maskRG")
	HX_STACK_ARG(maskBA,"maskBA")
	HX_STACK_ARG(copySource,"copySource")
	HX_STACK_LINE(1280)
	return ::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_threshold.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),operation,thresholdRG,thresholdBA,colorRG,colorBA,maskRG,maskBA,copySource);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(ImageDataUtil_obj,lime_image_data_util_threshold,return )

Void ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha( Dynamic image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_unmultiply_alpha",0x26f04bc4,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_unmultiply_alpha","lime/graphics/utils/ImageDataUtil.hx",1281,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1281)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha.call(hx::DynamicPtr(image));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,lime_image_data_util_unmultiply_alpha,(void))

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_color_transform;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) > ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect;

::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_merge;

::cpp::Function< void ( ::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_resize;

::cpp::Function< void ( ::hx::Object * ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_set_format;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels;

::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) > ImageDataUtil_obj::cffi_lime_image_data_util_threshold;

::cpp::Function< void ( ::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha;


ImageDataUtil_obj::ImageDataUtil_obj()
{
}

bool ImageDataUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { outValue = floodFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixels") ) { outValue = getPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFormat") ) { outValue = setFormat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixels") ) { outValue = setPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"threshold") ) { outValue = threshold_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { outValue = copyPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { outValue = getPixel32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { outValue = setPixel32_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyChannel") ) { outValue = copyChannel_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resizeBuffer") ) { outValue = resizeBuffer_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__pixelCompare") ) { outValue = __pixelCompare_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { outValue = getColorBoundsRect_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_merge") ) { outValue = lime_image_data_util_merge_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_resize") ) { outValue = lime_image_data_util_resize_dyn(); return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_fill_rect") ) { outValue = lime_image_data_util_fill_rect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_threshold") ) { outValue = lime_image_data_util_threshold_dyn(); return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_flood_fill") ) { outValue = lime_image_data_util_flood_fill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_get_pixels") ) { outValue = lime_image_data_util_get_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_format") ) { outValue = lime_image_data_util_set_format_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_pixels") ) { outValue = lime_image_data_util_set_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_merge") ) { outValue = cffi_lime_image_data_util_merge; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_pixels") ) { outValue = lime_image_data_util_copy_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_resize") ) { outValue = cffi_lime_image_data_util_resize; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_channel") ) { outValue = lime_image_data_util_copy_channel_dyn(); return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_multiply_alpha") ) { outValue = lime_image_data_util_multiply_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_fill_rect") ) { outValue = cffi_lime_image_data_util_fill_rect; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_threshold") ) { outValue = cffi_lime_image_data_util_threshold; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_color_transform") ) { outValue = lime_image_data_util_color_transform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_flood_fill") ) { outValue = cffi_lime_image_data_util_flood_fill; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_get_pixels") ) { outValue = cffi_lime_image_data_util_get_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_format") ) { outValue = cffi_lime_image_data_util_set_format; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_pixels") ) { outValue = cffi_lime_image_data_util_set_pixels; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_unmultiply_alpha") ) { outValue = lime_image_data_util_unmultiply_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_pixels") ) { outValue = cffi_lime_image_data_util_copy_pixels; return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_channel") ) { outValue = cffi_lime_image_data_util_copy_channel; return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_multiply_alpha") ) { outValue = cffi_lime_image_data_util_multiply_alpha; return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_color_transform") ) { outValue = cffi_lime_image_data_util_color_transform; return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_unmultiply_alpha") ) { outValue = cffi_lime_image_data_util_unmultiply_alpha; return true;  }
	}
	return false;
}

bool ImageDataUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_merge") ) { cffi_lime_image_data_util_merge=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_resize") ) { cffi_lime_image_data_util_resize=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_fill_rect") ) { cffi_lime_image_data_util_fill_rect=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_threshold") ) { cffi_lime_image_data_util_threshold=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) > >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_flood_fill") ) { cffi_lime_image_data_util_flood_fill=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_get_pixels") ) { cffi_lime_image_data_util_get_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_format") ) { cffi_lime_image_data_util_set_format=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_pixels") ) { cffi_lime_image_data_util_set_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) > >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_pixels") ) { cffi_lime_image_data_util_copy_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) > >(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_channel") ) { cffi_lime_image_data_util_copy_channel=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_multiply_alpha") ) { cffi_lime_image_data_util_multiply_alpha=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_color_transform") ) { cffi_lime_image_data_util_color_transform=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_unmultiply_alpha") ) { cffi_lime_image_data_util_unmultiply_alpha=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_color_transform,HX_HCSTRING("cffi_lime_image_data_util_color_transform","\x33","\xb4","\x2f","\xf1")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel,HX_HCSTRING("cffi_lime_image_data_util_copy_channel","\x36","\xf7","\xde","\x9a")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels,HX_HCSTRING("cffi_lime_image_data_util_copy_pixels","\x1a","\xc8","\x5a","\xd9")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect,HX_HCSTRING("cffi_lime_image_data_util_fill_rect","\x43","\x23","\xe6","\xb7")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill,HX_HCSTRING("cffi_lime_image_data_util_flood_fill","\xe1","\x32","\x7e","\xe2")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels,HX_HCSTRING("cffi_lime_image_data_util_get_pixels","\xf3","\x89","\x00","\xfd")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_merge,HX_HCSTRING("cffi_lime_image_data_util_merge","\xdb","\x58","\xe1","\x59")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha,HX_HCSTRING("cffi_lime_image_data_util_multiply_alpha","\x40","\xf1","\xf1","\x88")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_resize,HX_HCSTRING("cffi_lime_image_data_util_resize","\x71","\x02","\xc0","\x4b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_set_format,HX_HCSTRING("cffi_lime_image_data_util_set_format","\x71","\xc8","\x62","\x71")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels,HX_HCSTRING("cffi_lime_image_data_util_set_pixels","\x67","\x28","\x7e","\x00")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_threshold,HX_HCSTRING("cffi_lime_image_data_util_threshold","\x4e","\xc7","\x57","\xb2")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha,HX_HCSTRING("cffi_lime_image_data_util_unmultiply_alpha","\x99","\x7a","\x47","\x65")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_color_transform,"cffi_lime_image_data_util_color_transform");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel,"cffi_lime_image_data_util_copy_channel");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels,"cffi_lime_image_data_util_copy_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect,"cffi_lime_image_data_util_fill_rect");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill,"cffi_lime_image_data_util_flood_fill");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels,"cffi_lime_image_data_util_get_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_merge,"cffi_lime_image_data_util_merge");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha,"cffi_lime_image_data_util_multiply_alpha");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_resize,"cffi_lime_image_data_util_resize");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_format,"cffi_lime_image_data_util_set_format");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels,"cffi_lime_image_data_util_set_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_threshold,"cffi_lime_image_data_util_threshold");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha,"cffi_lime_image_data_util_unmultiply_alpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_color_transform,"cffi_lime_image_data_util_color_transform");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel,"cffi_lime_image_data_util_copy_channel");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels,"cffi_lime_image_data_util_copy_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect,"cffi_lime_image_data_util_fill_rect");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill,"cffi_lime_image_data_util_flood_fill");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels,"cffi_lime_image_data_util_get_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_merge,"cffi_lime_image_data_util_merge");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha,"cffi_lime_image_data_util_multiply_alpha");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_resize,"cffi_lime_image_data_util_resize");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_format,"cffi_lime_image_data_util_set_format");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels,"cffi_lime_image_data_util_set_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_threshold,"cffi_lime_image_data_util_threshold");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha,"cffi_lime_image_data_util_unmultiply_alpha");
};

#endif

hx::Class ImageDataUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("multiplyAlpha","\x9a","\xf2","\x1c","\x6b"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("resizeBuffer","\x14","\x7a","\xa2","\xb4"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("unmultiplyAlpha","\xa1","\xc8","\x96","\x28"),
	HX_HCSTRING("__pixelCompare","\xdf","\x79","\xe3","\x8d"),
	HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),
	HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),
	HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),
	HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),
	HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),
	HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),
	HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),
	HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),
	HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),
	HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),
	HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),
	HX_HCSTRING("lime_image_data_util_threshold","\x95","\x30","\x16","\x89"),
	HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),
	HX_HCSTRING("cffi_lime_image_data_util_color_transform","\x33","\xb4","\x2f","\xf1"),
	HX_HCSTRING("cffi_lime_image_data_util_copy_channel","\x36","\xf7","\xde","\x9a"),
	HX_HCSTRING("cffi_lime_image_data_util_copy_pixels","\x1a","\xc8","\x5a","\xd9"),
	HX_HCSTRING("cffi_lime_image_data_util_fill_rect","\x43","\x23","\xe6","\xb7"),
	HX_HCSTRING("cffi_lime_image_data_util_flood_fill","\xe1","\x32","\x7e","\xe2"),
	HX_HCSTRING("cffi_lime_image_data_util_get_pixels","\xf3","\x89","\x00","\xfd"),
	HX_HCSTRING("cffi_lime_image_data_util_merge","\xdb","\x58","\xe1","\x59"),
	HX_HCSTRING("cffi_lime_image_data_util_multiply_alpha","\x40","\xf1","\xf1","\x88"),
	HX_HCSTRING("cffi_lime_image_data_util_resize","\x71","\x02","\xc0","\x4b"),
	HX_HCSTRING("cffi_lime_image_data_util_set_format","\x71","\xc8","\x62","\x71"),
	HX_HCSTRING("cffi_lime_image_data_util_set_pixels","\x67","\x28","\x7e","\x00"),
	HX_HCSTRING("cffi_lime_image_data_util_threshold","\x4e","\xc7","\x57","\xb2"),
	HX_HCSTRING("cffi_lime_image_data_util_unmultiply_alpha","\x99","\x7a","\x47","\x65"),
	::String(null()) };

void ImageDataUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.utils.ImageDataUtil","\x80","\x72","\x23","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageDataUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &ImageDataUtil_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageDataUtil_obj >;
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

void ImageDataUtil_obj::__boot()
{
	cffi_lime_image_data_util_color_transform= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),HX_HCSTRING("ooov","\x47","\x4a","\xb3","\x49"),false));
	cffi_lime_image_data_util_copy_channel= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),HX_HCSTRING("ooooiiv","\x56","\xa6","\x94","\x9c"),false));
	cffi_lime_image_data_util_copy_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),HX_HCSTRING("oooooobv","\x34","\xa9","\x78","\x69"),false));
	cffi_lime_image_data_util_fill_rect= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),HX_HCSTRING("ooiiv","\x76","\x1b","\x29","\x33"),false));
	cffi_lime_image_data_util_flood_fill= ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),HX_HCSTRING("oiiiiv","\xe7","\x65","\x67","\x1c"),false));
	cffi_lime_image_data_util_get_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),HX_HCSTRING("ooiov","\xb0","\x20","\x29","\x33"),false));
	cffi_lime_image_data_util_merge= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),HX_HCSTRING("ooooiiiiv","\x76","\xe6","\xc1","\x67"),false));
	cffi_lime_image_data_util_multiply_alpha= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_image_data_util_resize= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),HX_HCSTRING("ooiiv","\x76","\x1b","\x29","\x33"),false));
	cffi_lime_image_data_util_set_format= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_image_data_util_set_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),HX_HCSTRING("oooiv","\xfc","\xa8","\x2d","\x33"),false));
	cffi_lime_image_data_util_threshold= ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,int ,int ,int ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_threshold","\x95","\x30","\x16","\x89"),HX_HCSTRING("ooooiiiiiiibi","\x90","\x38","\x77","\xc0"),false));
	cffi_lime_image_data_util_unmultiply_alpha= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace graphics
} // end namespace utils
