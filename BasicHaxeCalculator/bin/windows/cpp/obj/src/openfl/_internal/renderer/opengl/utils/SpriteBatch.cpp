#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_DefaultShader
#include <openfl/_internal/renderer/opengl/shaders2/DefaultShader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_shaders2_Shader
#include <openfl/_internal/renderer/opengl/shaders2/Shader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_BlendModeManager
#include <openfl/_internal/renderer/opengl/utils/BlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture
#include <openfl/_internal/renderer/opengl/utils/PingPongTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_RenderTexture
#include <openfl/_internal/renderer/opengl/utils/RenderTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_ShaderManager
#include <openfl/_internal/renderer/opengl/utils/ShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexArray
#include <openfl/_internal/renderer/opengl/utils/VertexArray.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_VertexAttribute
#include <openfl/_internal/renderer/opengl/utils/VertexAttribute.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils__SpriteBatch_State
#include <openfl/_internal/renderer/opengl/utils/_SpriteBatch/State.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_GLShaderParameter
#include <openfl/display/GLShaderParameter.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
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
namespace _internal{
namespace renderer{
namespace opengl{
namespace utils{

Void SpriteBatch_obj::__construct(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{
HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","new",0x9b485926,"openfl._internal.renderer.opengl.utils.SpriteBatch.new","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",31,0x8289eb2d)
HX_STACK_THIS(this)
HX_STACK_ARG(gl,"gl")
HX_STACK_ARG(__o_maxSprites,"maxSprites")
int maxSprites = __o_maxSprites.Default(2000);
{
	HX_STACK_LINE(71)
	this->colorTransform = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(70)
	this->uvs = ::openfl::display::TextureUvs_obj::__new();
	HX_STACK_LINE(69)
	this->matrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(67)
	this->lastEnableColor = true;
	HX_STACK_LINE(65)
	this->enableColor = true;
	HX_STACK_LINE(63)
	this->attributes = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(60)
	this->writtenVertexBytes = (int)0;
	HX_STACK_LINE(49)
	this->drawing = false;
	HX_STACK_LINE(48)
	this->dirty = true;
	HX_STACK_LINE(38)
	this->states = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(74)
	this->maxSprites = maxSprites;
	HX_STACK_LINE(76)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("openfl_aPosition","\x7b","\x19","\xf2","\xd0"),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	this->attributes->push(tmp);
	HX_STACK_LINE(77)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp1 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)2,(int)5126,false,HX_HCSTRING("openfl_aTexCoord0","\x10","\x9c","\x05","\xd4"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(77)
	this->attributes->push(tmp1);
	HX_STACK_LINE(78)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = ::openfl::_internal::renderer::opengl::utils::VertexAttribute_obj::__new((int)4,(int)5121,true,HX_HCSTRING("openfl_aColor","\x51","\x21","\x0d","\xbc"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	this->attributes->push(tmp2);
	HX_STACK_LINE(80)
	::lime::utils::ArrayBufferView tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		cpp::ArrayBase array = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(80)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(80)
		bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(80)
		if ((tmp4)){
			HX_STACK_LINE(80)
			::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			this1 = tmp5;
		}
		else{
			HX_STACK_LINE(80)
			bool tmp5 = (array != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(80)
			if ((tmp5)){
				HX_STACK_LINE(80)
				::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				{
					HX_STACK_LINE(80)
					::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(80)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(80)
					_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
					HX_STACK_LINE(80)
					int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(80)
					_this->byteLength = tmp8;
					HX_STACK_LINE(80)
					::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(80)
						int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(80)
						::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(80)
						this2 = tmp11;
						HX_STACK_LINE(80)
						tmp9 = this2;
					}
					HX_STACK_LINE(80)
					_this->buffer = tmp9;
					HX_STACK_LINE(80)
					_this->copyFromArray(((Array< Float >)(array)),null());
					HX_STACK_LINE(80)
					tmp6 = _this;
				}
				HX_STACK_LINE(80)
				this1 = tmp6;
			}
			else{
				HX_STACK_LINE(80)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(80)
				if ((tmp6)){
					HX_STACK_LINE(80)
					::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(80)
						::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(80)
						::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(80)
						::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(80)
						int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(80)
						int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(80)
						int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(80)
						int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(80)
						int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(80)
						int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(80)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(80)
						int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(80)
						int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(80)
						bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(80)
						if ((tmp15)){
							HX_STACK_LINE(80)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(80)
							int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(80)
							int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(80)
							::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(80)
							{
								HX_STACK_LINE(80)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(80)
								int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(80)
								::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(80)
								this2 = tmp19;
								HX_STACK_LINE(80)
								tmp17 = this2;
							}
							HX_STACK_LINE(80)
							_this->buffer = tmp17;
							HX_STACK_LINE(80)
							::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(80)
							int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(80)
							int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(80)
							_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
						}
						else{
							HX_STACK_LINE(80)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(80)
						int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(80)
						_this->byteLength = tmp16;
						HX_STACK_LINE(80)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(80)
						_this->length = srcLength;
						HX_STACK_LINE(80)
						tmp7 = _this;
					}
					HX_STACK_LINE(80)
					this1 = tmp7;
				}
				else{
					HX_STACK_LINE(80)
					bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					if ((tmp7)){
						HX_STACK_LINE(80)
						::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(80)
						{
							HX_STACK_LINE(80)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(80)
							::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(80)
							bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(80)
							if ((tmp10)){
								HX_STACK_LINE(80)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(80)
							int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(80)
							bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(80)
							if ((tmp12)){
								HX_STACK_LINE(80)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(80)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(80)
							int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(80)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(80)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(80)
							bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(80)
							if ((tmp14)){
								HX_STACK_LINE(80)
								int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(80)
								newByteLength = tmp15;
								HX_STACK_LINE(80)
								int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(80)
								bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(80)
								if ((tmp17)){
									HX_STACK_LINE(80)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(80)
								bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(80)
								if ((tmp18)){
									HX_STACK_LINE(80)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(80)
								int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(80)
								newByteLength = tmp15;
								HX_STACK_LINE(80)
								int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(80)
								int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(80)
								bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(80)
								if ((tmp17)){
									HX_STACK_LINE(80)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(80)
							_this->buffer = null();
							HX_STACK_LINE(80)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(80)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(80)
							Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(80)
							int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(80)
							_this->length = tmp16;
							HX_STACK_LINE(80)
							tmp8 = _this;
						}
						HX_STACK_LINE(80)
						this1 = tmp8;
					}
					else{
						HX_STACK_LINE(80)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(80)
		tmp3 = this1;
	}
	HX_STACK_LINE(80)
	::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp4 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(80)
	tmp4->defaultValue = tmp3;
	HX_STACK_LINE(82)
	this->maxElementsPerVertex = (int)0;
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(84)
		while((true)){
			HX_STACK_LINE(84)
			bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			if ((tmp6)){
				HX_STACK_LINE(84)
				break;
			}
			HX_STACK_LINE(84)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp7 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(84)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp7;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(84)
			++(_g);
			HX_STACK_LINE(85)
			int tmp8 = a->components;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(85)
				int tmp10 = _g2;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(85)
				switch( (int)(tmp10)){
					case (int)5120: case (int)5121: {
						HX_STACK_LINE(85)
						tmp9 = (int)1;
					}
					;break;
					case (int)5122: case (int)5123: {
						HX_STACK_LINE(85)
						tmp9 = (int)2;
					}
					;break;
					default: {
						HX_STACK_LINE(85)
						tmp9 = (int)4;
					}
				}
			}
			HX_STACK_LINE(85)
			int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(85)
			Float tmp11 = (Float(tmp10) / Float((int)4));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(85)
			int tmp12 = ::Math_obj::floor(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(85)
			hx::AddEq(this->maxElementsPerVertex,tmp12);
		}
	}
	HX_STACK_LINE(88)
	int tmp5 = maxSprites;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(88)
	int tmp6 = this->maxElementsPerVertex;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(88)
	int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(88)
	int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(88)
	int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(88)
	this->vertexArraySize = tmp9;
	HX_STACK_LINE(89)
	int tmp10 = (maxSprites * (int)6);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(89)
	this->indexArraySize = tmp10;
	HX_STACK_LINE(91)
	int tmp11 = this->vertexArraySize;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(91)
	::openfl::_internal::renderer::opengl::utils::VertexArray tmp12 = ::openfl::_internal::renderer::opengl::utils::VertexArray_obj::__new(this->attributes,tmp11,false);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(91)
	this->vertexArray = tmp12;
	HX_STACK_LINE(92)
	::lime::utils::ArrayBufferView tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(92)
	{
		HX_STACK_LINE(92)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp14 = this->vertexArray;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(92)
		::haxe::io::Bytes buffer = tmp14->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(92)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(92)
		bool tmp15 = false;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(92)
		if ((tmp15)){
			HX_STACK_LINE(92)
			::lime::utils::ArrayBufferView tmp16 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(92)
			this1 = tmp16;
		}
		else{
			HX_STACK_LINE(92)
			bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(92)
			if ((tmp16)){
				HX_STACK_LINE(92)
				::lime::utils::ArrayBufferView tmp17;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(92)
				{
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView _this = tmp18;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(92)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(92)
					int tmp19 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(92)
					_this->length = tmp19;
					HX_STACK_LINE(92)
					int tmp20 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(92)
					_this->byteLength = tmp20;
					HX_STACK_LINE(92)
					::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(92)
						int tmp22 = _this->byteLength;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(92)
						::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(92)
						this2 = tmp23;
						HX_STACK_LINE(92)
						tmp21 = this2;
					}
					HX_STACK_LINE(92)
					_this->buffer = tmp21;
					HX_STACK_LINE(92)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(92)
					tmp17 = _this;
				}
				HX_STACK_LINE(92)
				this1 = tmp17;
			}
			else{
				HX_STACK_LINE(92)
				bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(92)
				if ((tmp17)){
					HX_STACK_LINE(92)
					::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(92)
						::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(92)
						::haxe::io::Bytes tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(92)
						::haxe::io::Bytes srcData = tmp20;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(92)
						int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(92)
						int srcLength = tmp21;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(92)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(92)
						int srcByteOffset = tmp22;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(92)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(92)
						int srcElementSize = tmp23;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(92)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(92)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(92)
						int tmp25 = _this->type;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(92)
						bool tmp26 = (tmp24 == tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(92)
						if ((tmp26)){
							HX_STACK_LINE(92)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(92)
							int tmp27 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(92)
							int cloneLength = tmp27;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(92)
							::haxe::io::Bytes tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(92)
							{
								HX_STACK_LINE(92)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(92)
								int tmp29 = cloneLength;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(92)
								::haxe::io::Bytes tmp30 = ::haxe::io::Bytes_obj::alloc(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(92)
								this2 = tmp30;
								HX_STACK_LINE(92)
								tmp28 = this2;
							}
							HX_STACK_LINE(92)
							_this->buffer = tmp28;
							HX_STACK_LINE(92)
							::haxe::io::Bytes tmp29 = srcData;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(92)
							int tmp30 = srcByteOffset;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(92)
							int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(92)
							_this->buffer->blit((int)0,tmp29,tmp30,tmp31);
						}
						else{
							HX_STACK_LINE(92)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(92)
						int tmp27 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(92)
						_this->byteLength = tmp27;
						HX_STACK_LINE(92)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(92)
						_this->length = srcLength;
						HX_STACK_LINE(92)
						tmp18 = _this;
					}
					HX_STACK_LINE(92)
					this1 = tmp18;
				}
				else{
					HX_STACK_LINE(92)
					bool tmp18 = (buffer != null());		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(92)
					if ((tmp18)){
						HX_STACK_LINE(92)
						::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(92)
						{
							HX_STACK_LINE(92)
							::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(92)
							::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(92)
							bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(92)
							if ((tmp21)){
								HX_STACK_LINE(92)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(92)
							int tmp22 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(92)
							bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(92)
							if ((tmp23)){
								HX_STACK_LINE(92)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(92)
							int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(92)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(92)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(92)
							bool tmp24 = true;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(92)
							if ((tmp24)){
								HX_STACK_LINE(92)
								int tmp25 = bufferByteLength;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(92)
								newByteLength = tmp25;
								HX_STACK_LINE(92)
								int tmp26 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(92)
								bool tmp27 = (tmp26 != (int)0);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(92)
								if ((tmp27)){
									HX_STACK_LINE(92)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(92)
								bool tmp28 = (newByteLength < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(92)
								if ((tmp28)){
									HX_STACK_LINE(92)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(92)
								int tmp25 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(92)
								newByteLength = tmp25;
								HX_STACK_LINE(92)
								int tmp26 = newByteLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(92)
								int newRange = tmp26;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(92)
								bool tmp27 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(92)
								if ((tmp27)){
									HX_STACK_LINE(92)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(92)
							_this->buffer = buffer;
							HX_STACK_LINE(92)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(92)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(92)
							Float tmp25 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(92)
							int tmp26 = ::Std_obj::_int(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(92)
							_this->length = tmp26;
							HX_STACK_LINE(92)
							tmp19 = _this;
						}
						HX_STACK_LINE(92)
						this1 = tmp19;
					}
					else{
						HX_STACK_LINE(92)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
					}
				}
			}
		}
		HX_STACK_LINE(92)
		tmp13 = this1;
	}
	HX_STACK_LINE(92)
	this->positions = tmp13;
	HX_STACK_LINE(93)
	::lime::utils::ArrayBufferView tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp15 = this->vertexArray;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(93)
		::haxe::io::Bytes buffer = tmp15->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(93)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(93)
		bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(93)
		if ((tmp16)){
			HX_STACK_LINE(93)
			::lime::utils::ArrayBufferView tmp17 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(93)
			this1 = tmp17;
		}
		else{
			HX_STACK_LINE(93)
			bool tmp17 = false;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(93)
			if ((tmp17)){
				HX_STACK_LINE(93)
				::lime::utils::ArrayBufferView tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(93)
				{
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView _this = tmp19;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(93)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(93)
					int tmp20 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(93)
					_this->length = tmp20;
					HX_STACK_LINE(93)
					int tmp21 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(93)
					_this->byteLength = tmp21;
					HX_STACK_LINE(93)
					::haxe::io::Bytes tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(93)
					{
						HX_STACK_LINE(93)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(93)
						int tmp23 = _this->byteLength;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(93)
						::haxe::io::Bytes tmp24 = ::haxe::io::Bytes_obj::alloc(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(93)
						this2 = tmp24;
						HX_STACK_LINE(93)
						tmp22 = this2;
					}
					HX_STACK_LINE(93)
					_this->buffer = tmp22;
					HX_STACK_LINE(93)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(93)
					tmp18 = _this;
				}
				HX_STACK_LINE(93)
				this1 = tmp18;
			}
			else{
				HX_STACK_LINE(93)
				bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(93)
				if ((tmp18)){
					HX_STACK_LINE(93)
					::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(93)
					{
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(93)
						::haxe::io::Bytes tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(93)
						::haxe::io::Bytes srcData = tmp21;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(93)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(93)
						int srcLength = tmp22;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(93)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(93)
						int srcByteOffset = tmp23;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(93)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(93)
						int srcElementSize = tmp24;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(93)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(93)
						int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(93)
						int tmp26 = _this->type;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(93)
						bool tmp27 = (tmp25 == tmp26);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(93)
						if ((tmp27)){
							HX_STACK_LINE(93)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(93)
							int tmp28 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(93)
							int cloneLength = tmp28;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(93)
							::haxe::io::Bytes tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(93)
							{
								HX_STACK_LINE(93)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(93)
								int tmp30 = cloneLength;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(93)
								::haxe::io::Bytes tmp31 = ::haxe::io::Bytes_obj::alloc(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(93)
								this2 = tmp31;
								HX_STACK_LINE(93)
								tmp29 = this2;
							}
							HX_STACK_LINE(93)
							_this->buffer = tmp29;
							HX_STACK_LINE(93)
							::haxe::io::Bytes tmp30 = srcData;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(93)
							int tmp31 = srcByteOffset;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(93)
							int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(93)
							_this->buffer->blit((int)0,tmp30,tmp31,tmp32);
						}
						else{
							HX_STACK_LINE(93)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(93)
						int tmp28 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(93)
						_this->byteLength = tmp28;
						HX_STACK_LINE(93)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(93)
						_this->length = srcLength;
						HX_STACK_LINE(93)
						tmp19 = _this;
					}
					HX_STACK_LINE(93)
					this1 = tmp19;
				}
				else{
					HX_STACK_LINE(93)
					bool tmp19 = (buffer != null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(93)
					if ((tmp19)){
						HX_STACK_LINE(93)
						::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(93)
						{
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(93)
							::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(93)
							bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(93)
							if ((tmp22)){
								HX_STACK_LINE(93)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(93)
							int tmp23 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(93)
							bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(93)
							if ((tmp24)){
								HX_STACK_LINE(93)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(93)
							int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(93)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(93)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(93)
							bool tmp25 = true;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(93)
							if ((tmp25)){
								HX_STACK_LINE(93)
								int tmp26 = bufferByteLength;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(93)
								newByteLength = tmp26;
								HX_STACK_LINE(93)
								int tmp27 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(93)
								bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(93)
								if ((tmp28)){
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(93)
								bool tmp29 = (newByteLength < (int)0);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(93)
								if ((tmp29)){
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(93)
								int tmp26 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(93)
								newByteLength = tmp26;
								HX_STACK_LINE(93)
								int tmp27 = newByteLength;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(93)
								int newRange = tmp27;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(93)
								bool tmp28 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(93)
								if ((tmp28)){
									HX_STACK_LINE(93)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(93)
							_this->buffer = buffer;
							HX_STACK_LINE(93)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(93)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(93)
							Float tmp26 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(93)
							int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(93)
							_this->length = tmp27;
							HX_STACK_LINE(93)
							tmp20 = _this;
						}
						HX_STACK_LINE(93)
						this1 = tmp20;
					}
					else{
						HX_STACK_LINE(93)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
					}
				}
			}
		}
		HX_STACK_LINE(93)
		tmp14 = this1;
	}
	HX_STACK_LINE(93)
	this->colors = tmp14;
	HX_STACK_LINE(95)
	::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		int tmp16 = this->indexArraySize;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(95)
		Dynamic elements = tmp16;		HX_STACK_VAR(elements,"elements");
		HX_STACK_LINE(95)
		::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(95)
		bool tmp17 = (elements != null());		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(95)
		if ((tmp17)){
			HX_STACK_LINE(95)
			::lime::utils::ArrayBufferView tmp18 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)6);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(95)
			this1 = tmp18;
		}
		else{
			HX_STACK_LINE(95)
			bool tmp18 = false;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(95)
			if ((tmp18)){
				HX_STACK_LINE(95)
				::lime::utils::ArrayBufferView tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(95)
				{
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView tmp20 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView _this = tmp20;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(95)
					_this->byteOffset = (int)0;
					HX_STACK_LINE(95)
					int tmp21 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(95)
					_this->length = tmp21;
					HX_STACK_LINE(95)
					int tmp22 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(95)
					_this->byteLength = tmp22;
					HX_STACK_LINE(95)
					::haxe::io::Bytes tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(95)
					{
						HX_STACK_LINE(95)
						::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(95)
						int tmp24 = _this->byteLength;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(95)
						::haxe::io::Bytes tmp25 = ::haxe::io::Bytes_obj::alloc(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(95)
						this2 = tmp25;
						HX_STACK_LINE(95)
						tmp23 = this2;
					}
					HX_STACK_LINE(95)
					_this->buffer = tmp23;
					HX_STACK_LINE(95)
					_this->copyFromArray(((Array< Float >)(null())),null());
					HX_STACK_LINE(95)
					tmp19 = _this;
				}
				HX_STACK_LINE(95)
				this1 = tmp19;
			}
			else{
				HX_STACK_LINE(95)
				bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(95)
				if ((tmp19)){
					HX_STACK_LINE(95)
					::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(95)
					{
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(95)
						::haxe::io::Bytes tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(95)
						::haxe::io::Bytes srcData = tmp22;		HX_STACK_VAR(srcData,"srcData");
						HX_STACK_LINE(95)
						int tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(95)
						int srcLength = tmp23;		HX_STACK_VAR(srcLength,"srcLength");
						HX_STACK_LINE(95)
						int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(95)
						int srcByteOffset = tmp24;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
						HX_STACK_LINE(95)
						int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(95)
						int srcElementSize = tmp25;		HX_STACK_VAR(srcElementSize,"srcElementSize");
						HX_STACK_LINE(95)
						int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
						HX_STACK_LINE(95)
						int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(95)
						int tmp27 = _this->type;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(95)
						bool tmp28 = (tmp26 == tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(95)
						if ((tmp28)){
							HX_STACK_LINE(95)
							int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
							HX_STACK_LINE(95)
							int tmp29 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(95)
							int cloneLength = tmp29;		HX_STACK_VAR(cloneLength,"cloneLength");
							HX_STACK_LINE(95)
							::haxe::io::Bytes tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(95)
							{
								HX_STACK_LINE(95)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(95)
								int tmp31 = cloneLength;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(95)
								::haxe::io::Bytes tmp32 = ::haxe::io::Bytes_obj::alloc(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(95)
								this2 = tmp32;
								HX_STACK_LINE(95)
								tmp30 = this2;
							}
							HX_STACK_LINE(95)
							_this->buffer = tmp30;
							HX_STACK_LINE(95)
							::haxe::io::Bytes tmp31 = srcData;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(95)
							int tmp32 = srcByteOffset;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(95)
							int tmp33 = cloneLength;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(95)
							_this->buffer->blit((int)0,tmp31,tmp32,tmp33);
						}
						else{
							HX_STACK_LINE(95)
							HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
						}
						HX_STACK_LINE(95)
						int tmp29 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(95)
						_this->byteLength = tmp29;
						HX_STACK_LINE(95)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(95)
						_this->length = srcLength;
						HX_STACK_LINE(95)
						tmp20 = _this;
					}
					HX_STACK_LINE(95)
					this1 = tmp20;
				}
				else{
					HX_STACK_LINE(95)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(95)
					if ((tmp20)){
						HX_STACK_LINE(95)
						::lime::utils::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(95)
						{
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(95)
							::lime::utils::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(95)
							bool tmp23 = false;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(95)
							if ((tmp23)){
								HX_STACK_LINE(95)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(95)
							int tmp24 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(95)
							bool tmp25 = (tmp24 != (int)0);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(95)
							if ((tmp25)){
								HX_STACK_LINE(95)
								HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
							}
							HX_STACK_LINE(95)
							int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(95)
							int bufferByteLength = tmp26;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
							HX_STACK_LINE(95)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(95)
							int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
							HX_STACK_LINE(95)
							bool tmp27 = true;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(95)
							if ((tmp27)){
								HX_STACK_LINE(95)
								int tmp28 = bufferByteLength;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(95)
								newByteLength = tmp28;
								HX_STACK_LINE(95)
								int tmp29 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(95)
								bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(95)
								if ((tmp30)){
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(95)
								bool tmp31 = (newByteLength < (int)0);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(95)
								if ((tmp31)){
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							else{
								HX_STACK_LINE(95)
								int tmp28 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(95)
								newByteLength = tmp28;
								HX_STACK_LINE(95)
								int tmp29 = newByteLength;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(95)
								int newRange = tmp29;		HX_STACK_VAR(newRange,"newRange");
								HX_STACK_LINE(95)
								bool tmp30 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(95)
								if ((tmp30)){
									HX_STACK_LINE(95)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
							}
							HX_STACK_LINE(95)
							_this->buffer = null();
							HX_STACK_LINE(95)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(95)
							_this->byteLength = newByteLength;
							HX_STACK_LINE(95)
							Float tmp28 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(95)
							int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(95)
							_this->length = tmp29;
							HX_STACK_LINE(95)
							tmp21 = _this;
						}
						HX_STACK_LINE(95)
						this1 = tmp21;
					}
					else{
						HX_STACK_LINE(95)
						HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
					}
				}
			}
		}
		HX_STACK_LINE(95)
		tmp15 = this1;
	}
	HX_STACK_LINE(95)
	this->indices = tmp15;
	HX_STACK_LINE(97)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(97)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(98)
	while((true)){
		HX_STACK_LINE(98)
		int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(98)
		int tmp17 = this->indexArraySize;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(98)
		bool tmp18 = (tmp16 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(98)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(98)
		if ((tmp19)){
			HX_STACK_LINE(98)
			break;
		}
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(99)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(99)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (i * (int)2)),j);
				HX_STACK_LINE(99)
				j;
			}
		}
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(100)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(100)
			int tmp21 = (j + (int)1);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(100)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(100)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)1)) * (int)2)),val);
				HX_STACK_LINE(100)
				val;
			}
		}
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(101)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(101)
			int tmp21 = (j + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(101)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(101)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)2)) * (int)2)),val);
				HX_STACK_LINE(101)
				val;
			}
		}
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(102)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(102)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)3)) * (int)2)),j);
				HX_STACK_LINE(102)
				j;
			}
		}
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(103)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(103)
			int tmp21 = (j + (int)2);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(103)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(103)
			{
				HX_STACK_LINE(103)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(103)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)4)) * (int)2)),val);
				HX_STACK_LINE(103)
				val;
			}
		}
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			::lime::utils::ArrayBufferView tmp20 = this->indices;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(104)
			::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(104)
			int tmp21 = (j + (int)3);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(104)
			int val = tmp21;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(104)
				::__hxcpp_memory_set_ui16(this1->buffer->b,(this1->byteOffset + (((i + (int)5)) * (int)2)),val);
				HX_STACK_LINE(104)
				val;
			}
		}
		HX_STACK_LINE(105)
		hx::AddEq(i,(int)6);
		HX_STACK_LINE(106)
		hx::AddEq(j,(int)4);
	}
	HX_STACK_LINE(109)
	::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp16 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(109)
	this->currentState = tmp16;
	HX_STACK_LINE(110)
	this->dirty = true;
	HX_STACK_LINE(111)
	this->drawing = false;
	HX_STACK_LINE(112)
	this->batchedSprites = (int)0;
	HX_STACK_LINE(114)
	::lime::graphics::GLRenderContext tmp17 = gl;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(114)
	this->setContext(tmp17);
}
;
	return null();
}

//SpriteBatch_obj::~SpriteBatch_obj() { }

Dynamic SpriteBatch_obj::__CreateEmpty() { return  new SpriteBatch_obj; }
hx::ObjectPtr< SpriteBatch_obj > SpriteBatch_obj::__new(::lime::graphics::GLRenderContext gl,hx::Null< int >  __o_maxSprites)
{  hx::ObjectPtr< SpriteBatch_obj > _result_ = new SpriteBatch_obj();
	_result_->__construct(gl,__o_maxSprites);
	return _result_;}

Dynamic SpriteBatch_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpriteBatch_obj > _result_ = new SpriteBatch_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void SpriteBatch_obj::destroy( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","destroy",0xc9b590c0,"openfl._internal.renderer.opengl.utils.SpriteBatch.destroy","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",118,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp = this->vertexArray;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		tmp->destroy();
		HX_STACK_LINE(120)
		this->vertexArray = null();
		HX_STACK_LINE(122)
		this->indices = null();
		HX_STACK_LINE(123)
		{
			HX_STACK_LINE(123)
			::lime::graphics::opengl::GLBuffer tmp1 = this->indexBuffer;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(123)
			::lime::graphics::opengl::GLBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				{
					HX_STACK_LINE(123)
					int buffer1 = buffer->id;		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(123)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_buffer.call(buffer1);
				}
				HX_STACK_LINE(123)
				buffer->invalidate();
			}
		}
		HX_STACK_LINE(125)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp1 = this->currentState;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		tmp1->destroy();
		HX_STACK_LINE(126)
		{
			HX_STACK_LINE(126)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(126)
			Array< ::Dynamic > _g1 = this->states;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(126)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(126)
				if ((tmp3)){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(126)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp4 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(126)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp4;		HX_STACK_VAR(state,"state");
				HX_STACK_LINE(126)
				++(_g);
				HX_STACK_LINE(127)
				state->destroy();
			}
		}
		HX_STACK_LINE(130)
		this->colorTransform = null();
		HX_STACK_LINE(132)
		this->gl = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,destroy,(void))

Void SpriteBatch_obj::begin( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","begin",0x5812b06f,"openfl._internal.renderer.opengl.utils.SpriteBatch.begin","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",135,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(137)
		this->renderSession = renderSession;
		HX_STACK_LINE(138)
		::openfl::_internal::renderer::opengl::shaders2::DefaultShader tmp = renderSession->shaderManager->defaultShader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		this->shader = tmp;
		HX_STACK_LINE(139)
		this->drawing = true;
		HX_STACK_LINE(140)
		::openfl::geom::Rectangle tmp1 = clipRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		this->start(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteBatch_obj,begin,(void))

Void SpriteBatch_obj::finish( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","finish",0xa3eff74d,"openfl._internal.renderer.opengl.utils.SpriteBatch.finish","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",144,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		this->stop();
		HX_STACK_LINE(146)
		this->clipRect = null();
		HX_STACK_LINE(147)
		this->drawing = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,finish,(void))

Void SpriteBatch_obj::start( ::openfl::geom::Rectangle clipRect){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","start",0x2bc83aa8,"openfl._internal.renderer.opengl.utils.SpriteBatch.start","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",150,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_LINE(151)
		bool tmp = this->drawing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(151)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(151)
		if ((tmp1)){
			HX_STACK_LINE(152)
			this->stop();
		}
		HX_STACK_LINE(154)
		this->dirty = true;
		HX_STACK_LINE(155)
		this->clipRect = clipRect;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,start,(void))

Void SpriteBatch_obj::stop( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","stop",0x475f147c,"openfl._internal.renderer.opengl.utils.SpriteBatch.stop","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",159,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		this->flush();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,stop,(void))

Void SpriteBatch_obj::renderBitmapData( ::openfl::display::BitmapData bitmapData,bool smoothing,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform ct,Dynamic __o_alpha,Dynamic blendMode,::openfl::display::Shader flashShader,Dynamic pixelSnapping,hx::Null< bool >  __o_bgra){
Dynamic alpha = __o_alpha.Default(1);
bool bgra = __o_bgra.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBitmapData",0x214be029,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBitmapData","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",162,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(ct,"ct")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(flashShader,"flashShader")
	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
	HX_STACK_ARG(bgra,"bgra")
{
		HX_STACK_LINE(163)
		bool tmp = (bitmapData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		if ((tmp)){
			HX_STACK_LINE(163)
			return null();
		}
		HX_STACK_LINE(164)
		::lime::graphics::GLRenderContext tmp1 = this->gl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(164)
		::lime::graphics::opengl::GLTexture tmp2 = bitmapData->getTexture(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		::lime::graphics::opengl::GLTexture texture = tmp2;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(166)
		int tmp3 = this->batchedSprites;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(166)
		int tmp4 = this->maxSprites;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(166)
		bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(166)
		if ((tmp5)){
			HX_STACK_LINE(167)
			this->flush();
		}
		HX_STACK_LINE(170)
		::openfl::display::TextureUvs uvs = bitmapData->__uvData;		HX_STACK_VAR(uvs,"uvs");
		HX_STACK_LINE(171)
		bool tmp6 = (uvs == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		if ((tmp6)){
			HX_STACK_LINE(171)
			return null();
		}
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			bool tmp7 = (flashShader != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(173)
			if ((tmp7)){
				HX_STACK_LINE(173)
				::lime::graphics::GLRenderContext tmp8 = this->gl;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(173)
				flashShader->__init(tmp8);
				HX_STACK_LINE(173)
				flashShader->__shader->wrapS = flashShader->repeatX;
				HX_STACK_LINE(173)
				flashShader->__shader->wrapT = flashShader->repeatY;
				HX_STACK_LINE(173)
				flashShader->__shader->smooth = flashShader->smooth;
				HX_STACK_LINE(173)
				flashShader->__shader->blendMode = flashShader->blendMode;
				HX_STACK_LINE(173)
				::String tmp9 = ::openfl::display::Shader_obj::uObjectSize;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(173)
				::openfl::display::GLShaderParameter tmp10 = flashShader->data->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(173)
				::openfl::display::GLShaderParameter objSize = tmp10;		HX_STACK_VAR(objSize,"objSize");
				HX_STACK_LINE(173)
				::String tmp11 = ::openfl::display::Shader_obj::uTextureSize;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(173)
				::openfl::display::GLShaderParameter tmp12 = flashShader->data->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(173)
				::openfl::display::GLShaderParameter texSize = tmp12;		HX_STACK_VAR(texSize,"texSize");
				HX_STACK_LINE(173)
				bool tmp13 = (bitmapData != null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(173)
				if ((tmp13)){
					HX_STACK_LINE(173)
					int tmp14 = bitmapData->width;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(173)
					objSize->value[(int)0] = tmp14;
					HX_STACK_LINE(173)
					int tmp15 = bitmapData->height;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(173)
					objSize->value[(int)1] = tmp15;
					HX_STACK_LINE(173)
					bool tmp16 = (bitmapData->__pingPongTexture != null());		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(173)
					if ((tmp16)){
						HX_STACK_LINE(173)
						::openfl::_internal::renderer::opengl::utils::RenderTexture tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = bitmapData->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							bool tmp18 = _this->__swapped;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(173)
							if ((tmp18)){
								HX_STACK_LINE(173)
								tmp17 = _this->__texture1;
							}
							else{
								HX_STACK_LINE(173)
								tmp17 = _this->__texture0;
							}
						}
						HX_STACK_LINE(173)
						int tmp18 = tmp17->__width;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(173)
						texSize->value[(int)0] = tmp18;
						HX_STACK_LINE(173)
						::openfl::_internal::renderer::opengl::utils::RenderTexture tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(173)
						{
							HX_STACK_LINE(173)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = bitmapData->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(173)
							bool tmp20 = _this->__swapped;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(173)
							if ((tmp20)){
								HX_STACK_LINE(173)
								tmp19 = _this->__texture1;
							}
							else{
								HX_STACK_LINE(173)
								tmp19 = _this->__texture0;
							}
						}
						HX_STACK_LINE(173)
						int tmp20 = tmp19->__height;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(173)
						texSize->value[(int)1] = tmp20;
					}
					else{
						HX_STACK_LINE(173)
						int tmp17 = bitmapData->width;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(173)
						texSize->value[(int)0] = tmp17;
						HX_STACK_LINE(173)
						int tmp18 = bitmapData->height;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(173)
						texSize->value[(int)1] = tmp18;
					}
				}
				else{
					HX_STACK_LINE(173)
					objSize->value[(int)0] = (int)0;
					HX_STACK_LINE(173)
					objSize->value[(int)1] = (int)0;
					HX_STACK_LINE(173)
					texSize->value[(int)0] = (int)0;
					HX_STACK_LINE(173)
					texSize->value[(int)1] = (int)0;
				}
			}
		}
		HX_STACK_LINE(175)
		Float tmp7 = (alpha * (int)255);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(175)
		int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(175)
		int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(175)
		int tmp10 = (int(tmp9) << int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(175)
		int tmp11 = (int(tmp10) | int((int)16777215));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(175)
		int color = tmp11;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(178)
			this->enableColor = tmp12;
			HX_STACK_LINE(178)
			bool tmp13 = this->enableColor;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(178)
			bool tmp14 = this->lastEnableColor;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(178)
			bool tmp15 = (tmp13 != tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(178)
			if ((tmp15)){
				HX_STACK_LINE(178)
				this->flush();
				HX_STACK_LINE(178)
				bool tmp16 = this->enableColor;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(178)
				this->lastEnableColor = tmp16;
			}
			HX_STACK_LINE(178)
			bool tmp16 = this->lastEnableColor;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(178)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp17 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(178)
			tmp17->enabled = tmp16;
			HX_STACK_LINE(178)
			int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(178)
				{
					HX_STACK_LINE(178)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(178)
					Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(178)
					while((true)){
						HX_STACK_LINE(178)
						bool tmp19 = (_g < _g1->length);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(178)
						bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(178)
						if ((tmp20)){
							HX_STACK_LINE(178)
							break;
						}
						HX_STACK_LINE(178)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp21 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(178)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(178)
						++(_g);
						HX_STACK_LINE(178)
						bool tmp22 = a->enabled;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(178)
						if ((tmp22)){
							HX_STACK_LINE(178)
							int tmp23 = a->components;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(178)
							int tmp24;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(178)
								int tmp25 = _g2;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(178)
								switch( (int)(tmp25)){
									case (int)5120: case (int)5121: {
										HX_STACK_LINE(178)
										tmp24 = (int)1;
									}
									;break;
									case (int)5122: case (int)5123: {
										HX_STACK_LINE(178)
										tmp24 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(178)
										tmp24 = (int)4;
									}
								}
							}
							HX_STACK_LINE(178)
							int tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(178)
							Float tmp26 = (Float(tmp25) / Float((int)4));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(178)
							int tmp27 = ::Math_obj::floor(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(178)
							hx::AddEq(r,tmp27);
						}
					}
				}
				HX_STACK_LINE(178)
				tmp18 = r;
			}
			HX_STACK_LINE(178)
			this->elementsPerVertex = tmp18;
		}
		HX_STACK_LINE(180)
		int tmp12 = this->batchedSprites;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(180)
		int tmp13 = (tmp12 * (int)4);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(180)
		int tmp14 = this->elementsPerVertex;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(180)
		int tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(180)
		int index = tmp15;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			Float width = bitmapData->width;		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(181)
			Float height = bitmapData->height;		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(181)
			Float a = matrix->a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(181)
			Float b = matrix->b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(181)
			Float c = matrix->c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(181)
			Float d = matrix->d;		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(181)
			Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
			HX_STACK_LINE(181)
			Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
			HX_STACK_LINE(181)
			bool tmp16 = (pixelSnapping == null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(181)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(181)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(181)
			if ((tmp17)){
				HX_STACK_LINE(181)
				tmp18 = (pixelSnapping == ((Dynamic)((int)2)));
			}
			else{
				HX_STACK_LINE(181)
				tmp18 = true;
			}
			HX_STACK_LINE(181)
			if ((tmp18)){
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),tx);
						HX_STACK_LINE(181)
						tx;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)1)) * (int)4)),ty);
						HX_STACK_LINE(181)
						ty;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (a * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float val = tmp22;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)5)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (b * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float val = tmp22;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)6)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (a * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = (c * height);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float tmp23 = tx;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(181)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(181)
					Float val = tmp24;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)10)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (d * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = (b * width);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float tmp23 = ty;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(181)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(181)
					Float val = tmp24;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)11)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (c * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float val = tmp22;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)15)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (d * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float val = tmp22;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)16)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
			}
			else{
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = tx;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = ::Math_obj::fround(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float val = tmp21;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = ty;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = ::Math_obj::fround(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float val = tmp21;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)1)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (a * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float tmp23 = ::Math_obj::fround(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(181)
					Float val = tmp23;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)5)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (b * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float tmp23 = ::Math_obj::fround(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(181)
					Float val = tmp23;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)6)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (a * width);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = (c * height);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float tmp23 = tx;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(181)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(181)
					Float tmp25 = ::Math_obj::fround(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(181)
					Float val = tmp25;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)10)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (d * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = (b * width);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float tmp23 = ty;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(181)
					Float tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(181)
					Float tmp25 = ::Math_obj::fround(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(181)
					Float val = tmp25;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)11)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (c * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = tx;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float tmp23 = ::Math_obj::fround(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(181)
					Float val = tmp23;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)15)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp19 = this->positions;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(181)
					Float tmp20 = (d * height);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(181)
					Float tmp21 = ty;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(181)
					Float tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					Float tmp23 = ::Math_obj::fround(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(181)
					Float val = tmp23;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)16)) * (int)4)),val);
						HX_STACK_LINE(181)
						val;
					}
				}
			}
			HX_STACK_LINE(181)
			bool tmp19 = this->enableColor;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(181)
			if ((tmp19)){
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView tmp20 = this->colors;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView tmp22 = this->colors;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(181)
					::lime::utils::ArrayBufferView this2 = tmp22;		HX_STACK_VAR(this2,"this2");
					HX_STACK_LINE(181)
					int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						::lime::utils::ArrayBufferView tmp24 = this->colors;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(181)
						::lime::utils::ArrayBufferView this3 = tmp24;		HX_STACK_VAR(this3,"this3");
						HX_STACK_LINE(181)
						int tmp25;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(181)
						{
							HX_STACK_LINE(181)
							::lime::utils::ArrayBufferView tmp26 = this->colors;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(181)
							::lime::utils::ArrayBufferView this4 = tmp26;		HX_STACK_VAR(this4,"this4");
							HX_STACK_LINE(181)
							{
								HX_STACK_LINE(181)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(181)
								::__hxcpp_memory_set_ui32(this4->buffer->b,(this4->byteOffset + (((index + (int)19)) * (int)4)),color);
								HX_STACK_LINE(181)
								tmp25 = color;
							}
						}
						HX_STACK_LINE(181)
						int val = tmp25;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(181)
						{
							HX_STACK_LINE(181)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(181)
							::__hxcpp_memory_set_ui32(this3->buffer->b,(this3->byteOffset + (((index + (int)14)) * (int)4)),val);
							HX_STACK_LINE(181)
							tmp23 = val;
						}
					}
					HX_STACK_LINE(181)
					int val = tmp23;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(181)
					{
						HX_STACK_LINE(181)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(181)
						::__hxcpp_memory_set_ui32(this2->buffer->b,(this2->byteOffset + (((index + (int)9)) * (int)4)),val);
						HX_STACK_LINE(181)
						tmp21 = val;
					}
				}
				HX_STACK_LINE(181)
				int val = tmp21;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(181)
					::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (((index + (int)4)) * (int)4)),val);
					HX_STACK_LINE(181)
					val;
				}
			}
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				Float val = uvs->x0;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(181)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)2)) * (int)4)),val);
					HX_STACK_LINE(181)
					val;
				}
			}
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				Float val = uvs->y0;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(181)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)3)) * (int)4)),val);
					HX_STACK_LINE(181)
					val;
				}
			}
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				Float val = uvs->x1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(181)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)7)) * (int)4)),val);
					HX_STACK_LINE(181)
					val;
				}
			}
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				Float val = uvs->y1;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(181)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)8)) * (int)4)),val);
					HX_STACK_LINE(181)
					val;
				}
			}
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				Float val = uvs->x2;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(181)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)12)) * (int)4)),val);
					HX_STACK_LINE(181)
					val;
				}
			}
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				Float val = uvs->y2;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(181)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)13)) * (int)4)),val);
					HX_STACK_LINE(181)
					val;
				}
			}
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				Float val = uvs->x3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(181)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)17)) * (int)4)),val);
					HX_STACK_LINE(181)
					val;
				}
			}
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView tmp20 = this->positions;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(181)
				Float val = uvs->y3;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(181)
				{
					HX_STACK_LINE(181)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(181)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)18)) * (int)4)),val);
					HX_STACK_LINE(181)
					val;
				}
			}
			HX_STACK_LINE(181)
			int tmp20 = (index + (int)20);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(181)
			this->writtenVertexBytes = tmp20;
		}
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			int tmp16 = this->batchedSprites;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(183)
			int index1 = tmp16;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(183)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp17 = this->states->__get(index1).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(183)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp17;		HX_STACK_VAR(state,"state");
			HX_STACK_LINE(183)
			bool tmp18 = (state == null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(183)
			if ((tmp18)){
				HX_STACK_LINE(183)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp19 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(183)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp20 = this->states[index1] = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(183)
				state = tmp20;
			}
			HX_STACK_LINE(183)
			state->texture = texture;
			HX_STACK_LINE(183)
			state->textureSmooth = smoothing;
			HX_STACK_LINE(183)
			state->blendMode = blendMode;
			HX_STACK_LINE(183)
			bool tmp19 = (ct != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(183)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(183)
			if ((tmp19)){
				HX_STACK_LINE(183)
				tmp20 = ct->__isDefault();
			}
			else{
				HX_STACK_LINE(183)
				tmp20 = false;
			}
			HX_STACK_LINE(183)
			state->skipColorTransform = tmp20;
			HX_STACK_LINE(183)
			bool tmp21 = state->skipColorTransform;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(183)
			bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(183)
			if ((tmp22)){
				HX_STACK_LINE(183)
				state->colorTransform->redMultiplier = ct->redMultiplier;
				HX_STACK_LINE(183)
				state->colorTransform->greenMultiplier = ct->greenMultiplier;
				HX_STACK_LINE(183)
				state->colorTransform->blueMultiplier = ct->blueMultiplier;
				HX_STACK_LINE(183)
				state->colorTransform->alphaMultiplier = ct->alphaMultiplier;
				HX_STACK_LINE(183)
				state->colorTransform->redOffset = ct->redOffset;
				HX_STACK_LINE(183)
				state->colorTransform->greenOffset = ct->greenOffset;
				HX_STACK_LINE(183)
				state->colorTransform->blueOffset = ct->blueOffset;
				HX_STACK_LINE(183)
				state->colorTransform->alphaOffset = ct->alphaOffset;
			}
			HX_STACK_LINE(183)
			state->skipColorTransformAlpha = true;
			HX_STACK_LINE(183)
			bool tmp23 = (flashShader == null());		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(183)
			if ((tmp23)){
				HX_STACK_LINE(183)
				state->shader = null();
				HX_STACK_LINE(183)
				state->shaderData = null();
			}
			else{
				HX_STACK_LINE(183)
				state->shader = flashShader->__shader;
				HX_STACK_LINE(183)
				state->shaderData = flashShader->data;
			}
		}
		HX_STACK_LINE(185)
		(this->batchedSprites)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(SpriteBatch_obj,renderBitmapData,(void))

Void SpriteBatch_obj::renderTiles( ::openfl::display::DisplayObject object,::openfl::display::Tilesheet sheet,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,::openfl::display::Shader flashShader,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderTiles",0xf159e915,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderTiles","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",188,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(flashShader,"flashShader")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(190)
		::lime::graphics::GLRenderContext tmp = this->gl;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		::lime::graphics::opengl::GLTexture tmp1 = sheet->__bitmap->getTexture(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		::lime::graphics::opengl::GLTexture texture = tmp1;		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(191)
		bool tmp2 = (texture == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		if ((tmp2)){
			HX_STACK_LINE(191)
			return null();
		}
		HX_STACK_LINE(193)
		int tmp3 = (int(flags) & int((int)1));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(193)
		bool useScale = tmp4;		HX_STACK_VAR(useScale,"useScale");
		HX_STACK_LINE(194)
		int tmp5 = (int(flags) & int((int)2));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(194)
		bool tmp6 = (tmp5 > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		bool useRotation = tmp6;		HX_STACK_VAR(useRotation,"useRotation");
		HX_STACK_LINE(195)
		int tmp7 = (int(flags) & int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(195)
		bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		bool useTransform = tmp8;		HX_STACK_VAR(useTransform,"useTransform");
		HX_STACK_LINE(196)
		int tmp9 = (int(flags) & int((int)4));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(196)
		bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(196)
		bool useRGB = tmp10;		HX_STACK_VAR(useRGB,"useRGB");
		HX_STACK_LINE(197)
		int tmp11 = (int(flags) & int((int)8));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(197)
		bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(197)
		bool useAlpha = tmp12;		HX_STACK_VAR(useAlpha,"useAlpha");
		HX_STACK_LINE(198)
		int tmp13 = (int(flags) & int((int)32));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(198)
		bool tmp14 = (tmp13 > (int)0);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(198)
		bool useRect = tmp14;		HX_STACK_VAR(useRect,"useRect");
		HX_STACK_LINE(199)
		int tmp15 = (int(flags) & int((int)64));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(199)
		bool tmp16 = (tmp15 > (int)0);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(199)
		bool useOrigin = tmp16;		HX_STACK_VAR(useOrigin,"useOrigin");
		HX_STACK_LINE(200)
		int tmp17 = (int(flags) & int((int)128));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(200)
		bool tmp18 = (tmp17 > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(200)
		bool useRGBOffset = tmp18;		HX_STACK_VAR(useRGBOffset,"useRGBOffset");
		HX_STACK_LINE(202)
		Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(202)
		{
			HX_STACK_LINE(202)
			int tmp20 = (int(flags) & int((int)983040));		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(202)
			int _g = tmp20;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(202)
			int tmp21 = _g;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(202)
			switch( (int)(tmp21)){
				case (int)65536: {
					HX_STACK_LINE(203)
					tmp19 = ((Dynamic)((int)0));
				}
				;break;
				case (int)131072: {
					HX_STACK_LINE(204)
					tmp19 = ((Dynamic)((int)9));
				}
				;break;
				case (int)262144: {
					HX_STACK_LINE(205)
					tmp19 = ((Dynamic)((int)12));
				}
				;break;
				case (int)524288: {
					HX_STACK_LINE(206)
					tmp19 = ((Dynamic)((int)14));
				}
				;break;
				default: {
					HX_STACK_LINE(207)
					int tmp22 = (int(flags) & int((int)15728640));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(207)
					int _g1 = tmp22;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(207)
					int tmp23 = _g1;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(207)
					switch( (int)(tmp23)){
						case (int)1048576: {
							HX_STACK_LINE(208)
							tmp19 = ((Dynamic)((int)2));
						}
						;break;
						case (int)2097152: {
							HX_STACK_LINE(209)
							tmp19 = ((Dynamic)((int)8));
						}
						;break;
						case (int)4194304: {
							HX_STACK_LINE(210)
							tmp19 = ((Dynamic)((int)11));
						}
						;break;
						case (int)8388608: {
							HX_STACK_LINE(211)
							tmp19 = ((Dynamic)((int)5));
						}
						;break;
						default: {
							HX_STACK_LINE(212)
							int tmp24 = (int(flags) & int((int)251658240));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(212)
							int _g2 = tmp24;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(212)
							int tmp25 = _g2;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(212)
							switch( (int)(tmp25)){
								case (int)16777216: {
									HX_STACK_LINE(213)
									tmp19 = ((Dynamic)((int)3));
								}
								;break;
								case (int)33554432: {
									HX_STACK_LINE(214)
									tmp19 = ((Dynamic)((int)6));
								}
								;break;
								default: {
									HX_STACK_LINE(215)
									tmp19 = ((Dynamic)((int)10));
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(202)
		Dynamic blendMode = tmp19;		HX_STACK_VAR(blendMode,"blendMode");
		HX_STACK_LINE(220)
		bool tmp20 = useTransform;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(220)
		if ((tmp20)){
			HX_STACK_LINE(220)
			useScale = false;
			HX_STACK_LINE(220)
			useRotation = false;
		}
		HX_STACK_LINE(222)
		int scaleIndex = (int)0;		HX_STACK_VAR(scaleIndex,"scaleIndex");
		HX_STACK_LINE(223)
		int rotationIndex = (int)0;		HX_STACK_VAR(rotationIndex,"rotationIndex");
		HX_STACK_LINE(224)
		int rgbIndex = (int)0;		HX_STACK_VAR(rgbIndex,"rgbIndex");
		HX_STACK_LINE(225)
		int rgbOffsetIndex = (int)0;		HX_STACK_VAR(rgbOffsetIndex,"rgbOffsetIndex");
		HX_STACK_LINE(226)
		int alphaIndex = (int)0;		HX_STACK_VAR(alphaIndex,"alphaIndex");
		HX_STACK_LINE(227)
		int transformIndex = (int)0;		HX_STACK_VAR(transformIndex,"transformIndex");
		HX_STACK_LINE(229)
		int numValues = (int)3;		HX_STACK_VAR(numValues,"numValues");
		HX_STACK_LINE(231)
		bool tmp21 = useRect;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(231)
		if ((tmp21)){
			HX_STACK_LINE(231)
			bool tmp22 = useOrigin;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(231)
			int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(231)
			if ((tmp22)){
				HX_STACK_LINE(231)
				tmp23 = (int)8;
			}
			else{
				HX_STACK_LINE(231)
				tmp23 = (int)6;
			}
			HX_STACK_LINE(231)
			numValues = tmp23;
		}
		HX_STACK_LINE(232)
		bool tmp22 = useScale;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(232)
		if ((tmp22)){
			HX_STACK_LINE(232)
			scaleIndex = numValues;
			HX_STACK_LINE(232)
			(numValues)++;
		}
		HX_STACK_LINE(233)
		bool tmp23 = useRotation;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(233)
		if ((tmp23)){
			HX_STACK_LINE(233)
			rotationIndex = numValues;
			HX_STACK_LINE(233)
			(numValues)++;
		}
		HX_STACK_LINE(234)
		bool tmp24 = useTransform;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(234)
		if ((tmp24)){
			HX_STACK_LINE(234)
			transformIndex = numValues;
			HX_STACK_LINE(234)
			hx::AddEq(numValues,(int)4);
		}
		HX_STACK_LINE(235)
		bool tmp25 = useRGB;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(235)
		if ((tmp25)){
			HX_STACK_LINE(235)
			rgbIndex = numValues;
			HX_STACK_LINE(235)
			hx::AddEq(numValues,(int)3);
		}
		HX_STACK_LINE(236)
		bool tmp26 = useAlpha;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(236)
		if ((tmp26)){
			HX_STACK_LINE(236)
			alphaIndex = numValues;
			HX_STACK_LINE(236)
			(numValues)++;
		}
		HX_STACK_LINE(237)
		bool tmp27 = useRGBOffset;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(237)
		if ((tmp27)){
			HX_STACK_LINE(237)
			rgbOffsetIndex = numValues;
			HX_STACK_LINE(237)
			hx::AddEq(numValues,(int)4);
		}
		HX_STACK_LINE(239)
		int totalCount = tileData->length;		HX_STACK_VAR(totalCount,"totalCount");
		HX_STACK_LINE(240)
		bool tmp28 = (count >= (int)0);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(240)
		bool tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(240)
		if ((tmp28)){
			HX_STACK_LINE(240)
			tmp29 = (totalCount > count);
		}
		else{
			HX_STACK_LINE(240)
			tmp29 = false;
		}
		HX_STACK_LINE(240)
		if ((tmp29)){
			HX_STACK_LINE(240)
			totalCount = count;
		}
		HX_STACK_LINE(241)
		Float tmp30 = (Float(totalCount) / Float(numValues));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(241)
		int tmp31 = ::Math_obj::ceil(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(241)
		int itemCount = tmp31;		HX_STACK_VAR(itemCount,"itemCount");
		HX_STACK_LINE(242)
		int iIndex = (int)0;		HX_STACK_VAR(iIndex,"iIndex");
		HX_STACK_LINE(244)
		int tileID = (int)-1;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(245)
		::openfl::geom::Rectangle rect = sheet->__rectTile;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(246)
		::openfl::geom::Rectangle tileUV = sheet->__rectUV;		HX_STACK_VAR(tileUV,"tileUV");
		HX_STACK_LINE(247)
		::openfl::geom::Point center = sheet->__point;		HX_STACK_VAR(center,"center");
		HX_STACK_LINE(248)
		Float x = ((Float)0.0);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(248)
		Float y = ((Float)0.0);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(249)
		Float alpha = ((Float)1.0);		HX_STACK_VAR(alpha,"alpha");
		HX_STACK_LINE(249)
		int tint = (int)16777215;		HX_STACK_VAR(tint,"tint");
		HX_STACK_LINE(249)
		int color = (int)-1;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(250)
		Float scale = ((Float)1.0);		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(250)
		Float rotation = ((Float)0.0);		HX_STACK_VAR(rotation,"rotation");
		HX_STACK_LINE(251)
		Float cosTheta = ((Float)1.0);		HX_STACK_VAR(cosTheta,"cosTheta");
		HX_STACK_LINE(251)
		Float sinTheta = ((Float)0.0);		HX_STACK_VAR(sinTheta,"sinTheta");
		HX_STACK_LINE(252)
		Float a = ((Float)0.0);		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(252)
		Float b = ((Float)0.0);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(252)
		Float c = ((Float)0.0);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(252)
		Float d = ((Float)0.0);		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(252)
		Float tx = ((Float)0.0);		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(252)
		Float ty = ((Float)0.0);		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(253)
		Float ox = ((Float)0.0);		HX_STACK_VAR(ox,"ox");
		HX_STACK_LINE(253)
		Float oy = ((Float)0.0);		HX_STACK_VAR(oy,"oy");
		HX_STACK_LINE(255)
		::openfl::geom::Matrix oMatrix = object->__worldTransform;		HX_STACK_VAR(oMatrix,"oMatrix");
		HX_STACK_LINE(257)
		int bIndex = (int)0;		HX_STACK_VAR(bIndex,"bIndex");
		HX_STACK_LINE(258)
		Float tMa = ((Float)1.0);		HX_STACK_VAR(tMa,"tMa");
		HX_STACK_LINE(258)
		Float tMb = ((Float)0.0);		HX_STACK_VAR(tMb,"tMb");
		HX_STACK_LINE(259)
		Float tMc = ((Float)0.0);		HX_STACK_VAR(tMc,"tMc");
		HX_STACK_LINE(259)
		Float tMd = ((Float)1.0);		HX_STACK_VAR(tMd,"tMd");
		HX_STACK_LINE(260)
		Float tMtx = ((Float)0.0);		HX_STACK_VAR(tMtx,"tMtx");
		HX_STACK_LINE(260)
		Float tMty = ((Float)0.0);		HX_STACK_VAR(tMty,"tMty");
		HX_STACK_LINE(262)
		Float oMa = oMatrix->a;		HX_STACK_VAR(oMa,"oMa");
		HX_STACK_LINE(263)
		Float oMb = oMatrix->b;		HX_STACK_VAR(oMb,"oMb");
		HX_STACK_LINE(264)
		Float oMc = oMatrix->c;		HX_STACK_VAR(oMc,"oMc");
		HX_STACK_LINE(265)
		Float oMd = oMatrix->d;		HX_STACK_VAR(oMd,"oMd");
		HX_STACK_LINE(266)
		Float oMtx = oMatrix->tx;		HX_STACK_VAR(oMtx,"oMtx");
		HX_STACK_LINE(267)
		Float oMty = oMatrix->ty;		HX_STACK_VAR(oMty,"oMty");
		HX_STACK_LINE(269)
		Float rx = ((Float)0.0);		HX_STACK_VAR(rx,"rx");
		HX_STACK_LINE(269)
		Float ry = ((Float)0.0);		HX_STACK_VAR(ry,"ry");
		HX_STACK_LINE(269)
		Float rw = ((Float)0.0);		HX_STACK_VAR(rw,"rw");
		HX_STACK_LINE(269)
		Float rh = ((Float)0.0);		HX_STACK_VAR(rh,"rh");
		HX_STACK_LINE(270)
		Float tuvx = ((Float)0.0);		HX_STACK_VAR(tuvx,"tuvx");
		HX_STACK_LINE(270)
		Float tuvy = ((Float)0.0);		HX_STACK_VAR(tuvy,"tuvy");
		HX_STACK_LINE(270)
		Float tuvw = ((Float)0.0);		HX_STACK_VAR(tuvw,"tuvw");
		HX_STACK_LINE(270)
		Float tuvh = ((Float)0.0);		HX_STACK_VAR(tuvh,"tuvh");
		HX_STACK_LINE(273)
		{
			HX_STACK_LINE(273)
			bool tmp32 = true;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(273)
			this->enableColor = tmp32;
			HX_STACK_LINE(273)
			bool tmp33 = this->enableColor;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(273)
			bool tmp34 = this->lastEnableColor;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(273)
			bool tmp35 = (tmp33 != tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(273)
			if ((tmp35)){
				HX_STACK_LINE(273)
				this->flush();
				HX_STACK_LINE(273)
				bool tmp36 = this->enableColor;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(273)
				this->lastEnableColor = tmp36;
			}
			HX_STACK_LINE(273)
			bool tmp36 = this->lastEnableColor;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(273)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp37 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(273)
			tmp37->enabled = tmp36;
			HX_STACK_LINE(273)
			int tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(273)
			{
				HX_STACK_LINE(273)
				int r = (int)0;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(273)
				{
					HX_STACK_LINE(273)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(273)
					Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(273)
					while((true)){
						HX_STACK_LINE(273)
						bool tmp39 = (_g < _g1->length);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(273)
						bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(273)
						if ((tmp40)){
							HX_STACK_LINE(273)
							break;
						}
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp41 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(273)
						::openfl::_internal::renderer::opengl::utils::VertexAttribute a1 = tmp41;		HX_STACK_VAR(a1,"a1");
						HX_STACK_LINE(273)
						++(_g);
						HX_STACK_LINE(273)
						bool tmp42 = a1->enabled;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(273)
						if ((tmp42)){
							HX_STACK_LINE(273)
							int tmp43 = a1->components;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(273)
							int tmp44;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(273)
							{
								HX_STACK_LINE(273)
								int _g2 = a1->type;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(273)
								int tmp45 = _g2;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(273)
								switch( (int)(tmp45)){
									case (int)5120: case (int)5121: {
										HX_STACK_LINE(273)
										tmp44 = (int)1;
									}
									;break;
									case (int)5122: case (int)5123: {
										HX_STACK_LINE(273)
										tmp44 = (int)2;
									}
									;break;
									default: {
										HX_STACK_LINE(273)
										tmp44 = (int)4;
									}
								}
							}
							HX_STACK_LINE(273)
							int tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(273)
							Float tmp46 = (Float(tmp45) / Float((int)4));		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(273)
							int tmp47 = ::Math_obj::floor(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(273)
							hx::AddEq(r,tmp47);
						}
					}
				}
				HX_STACK_LINE(273)
				tmp38 = r;
			}
			HX_STACK_LINE(273)
			this->elementsPerVertex = tmp38;
		}
		HX_STACK_LINE(275)
		{
			HX_STACK_LINE(275)
			bool tmp32 = (flashShader != null());		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(275)
			if ((tmp32)){
				HX_STACK_LINE(275)
				::lime::graphics::GLRenderContext tmp33 = this->gl;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(275)
				flashShader->__init(tmp33);
				HX_STACK_LINE(275)
				flashShader->__shader->wrapS = flashShader->repeatX;
				HX_STACK_LINE(275)
				flashShader->__shader->wrapT = flashShader->repeatY;
				HX_STACK_LINE(275)
				flashShader->__shader->smooth = flashShader->smooth;
				HX_STACK_LINE(275)
				flashShader->__shader->blendMode = flashShader->blendMode;
				HX_STACK_LINE(275)
				::String tmp34 = ::openfl::display::Shader_obj::uObjectSize;		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(275)
				::openfl::display::GLShaderParameter tmp35 = flashShader->data->get(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(275)
				::openfl::display::GLShaderParameter objSize = tmp35;		HX_STACK_VAR(objSize,"objSize");
				HX_STACK_LINE(275)
				::String tmp36 = ::openfl::display::Shader_obj::uTextureSize;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(275)
				::openfl::display::GLShaderParameter tmp37 = flashShader->data->get(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(275)
				::openfl::display::GLShaderParameter texSize = tmp37;		HX_STACK_VAR(texSize,"texSize");
				HX_STACK_LINE(275)
				bool tmp38 = false;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(275)
				if ((tmp38)){
					HX_STACK_LINE(275)
					int tmp39 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(275)
					objSize->value[(int)0] = tmp39;
					HX_STACK_LINE(275)
					int tmp40 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(275)
					objSize->value[(int)1] = tmp40;
					HX_STACK_LINE(275)
					::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp41 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(275)
					bool tmp42 = (tmp41 != null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(275)
					if ((tmp42)){
						HX_STACK_LINE(275)
						::openfl::_internal::renderer::opengl::utils::RenderTexture tmp43;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp44 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(275)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = tmp44;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(275)
							bool tmp45 = _this->__swapped;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(275)
							if ((tmp45)){
								HX_STACK_LINE(275)
								tmp43 = _this->__texture1;
							}
							else{
								HX_STACK_LINE(275)
								tmp43 = _this->__texture0;
							}
						}
						HX_STACK_LINE(275)
						int tmp44 = tmp43->__width;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(275)
						texSize->value[(int)0] = tmp44;
						HX_STACK_LINE(275)
						::openfl::_internal::renderer::opengl::utils::RenderTexture tmp45;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(275)
						{
							HX_STACK_LINE(275)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp46 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(275)
							::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = tmp46;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(275)
							bool tmp47 = _this->__swapped;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(275)
							if ((tmp47)){
								HX_STACK_LINE(275)
								tmp45 = _this->__texture1;
							}
							else{
								HX_STACK_LINE(275)
								tmp45 = _this->__texture0;
							}
						}
						HX_STACK_LINE(275)
						int tmp46 = tmp45->__height;		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(275)
						texSize->value[(int)1] = tmp46;
					}
					else{
						HX_STACK_LINE(275)
						int tmp43 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(275)
						texSize->value[(int)0] = tmp43;
						HX_STACK_LINE(275)
						int tmp44 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(275)
						texSize->value[(int)1] = tmp44;
					}
				}
				else{
					HX_STACK_LINE(275)
					objSize->value[(int)0] = (int)0;
					HX_STACK_LINE(275)
					objSize->value[(int)1] = (int)0;
					HX_STACK_LINE(275)
					texSize->value[(int)0] = (int)0;
					HX_STACK_LINE(275)
					texSize->value[(int)1] = (int)0;
				}
			}
		}
		HX_STACK_LINE(277)
		while((true)){
			HX_STACK_LINE(277)
			bool tmp32 = (iIndex < totalCount);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(277)
			bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(277)
			if ((tmp33)){
				HX_STACK_LINE(277)
				break;
			}
			HX_STACK_LINE(279)
			int tmp34 = this->batchedSprites;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(279)
			int tmp35 = this->maxSprites;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(279)
			bool tmp36 = (tmp34 >= tmp35);		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(279)
			if ((tmp36)){
				HX_STACK_LINE(280)
				this->flush();
			}
			HX_STACK_LINE(283)
			int tmp37 = iIndex;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(283)
			Float tmp38 = tileData->__get(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(283)
			x = tmp38;
			HX_STACK_LINE(284)
			int tmp39 = (iIndex + (int)1);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(284)
			Float tmp40 = tileData->__get(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(284)
			y = tmp40;
			HX_STACK_LINE(286)
			bool tmp41 = useRect;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(286)
			if ((tmp41)){
				HX_STACK_LINE(287)
				tileID = (int)-1;
				HX_STACK_LINE(289)
				int tmp42 = (iIndex + (int)2);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(289)
				Float tmp43 = tileData->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(289)
				rect->x = tmp43;
				HX_STACK_LINE(290)
				int tmp44 = (iIndex + (int)3);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(290)
				Float tmp45 = tileData->__get(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(290)
				rect->y = tmp45;
				HX_STACK_LINE(291)
				int tmp46 = (iIndex + (int)4);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(291)
				Float tmp47 = tileData->__get(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(291)
				rect->width = tmp47;
				HX_STACK_LINE(292)
				int tmp48 = (iIndex + (int)5);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(292)
				Float tmp49 = tileData->__get(tmp48);		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(292)
				rect->height = tmp49;
				HX_STACK_LINE(294)
				bool tmp50 = useOrigin;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(294)
				if ((tmp50)){
					HX_STACK_LINE(295)
					int tmp51 = (iIndex + (int)6);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(295)
					Float tmp52 = tileData->__get(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(295)
					center->x = tmp52;
					HX_STACK_LINE(296)
					int tmp53 = (iIndex + (int)7);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(296)
					Float tmp54 = tileData->__get(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(296)
					center->y = tmp54;
				}
				else{
					HX_STACK_LINE(298)
					center->setTo((int)0,(int)0);
				}
				HX_STACK_LINE(301)
				rw = rect->width;
				HX_STACK_LINE(301)
				rh = rect->height;
				HX_STACK_LINE(302)
				Float tmp51 = rect->get_left();		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(302)
				int tmp52 = sheet->__bitmap->width;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(302)
				Float tmp53 = (Float(tmp51) / Float(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(302)
				tuvx = tmp53;
				HX_STACK_LINE(303)
				Float tmp54 = rect->get_top();		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(303)
				int tmp55 = sheet->__bitmap->height;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(303)
				Float tmp56 = (Float(tmp54) / Float(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(303)
				tuvy = tmp56;
				HX_STACK_LINE(304)
				Float tmp57 = rect->get_right();		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(304)
				int tmp58 = sheet->__bitmap->width;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(304)
				Float tmp59 = (Float(tmp57) / Float(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(304)
				tuvw = tmp59;
				HX_STACK_LINE(305)
				Float tmp60 = rect->get_bottom();		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(305)
				int tmp61 = sheet->__bitmap->height;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(305)
				Float tmp62 = (Float(tmp60) / Float(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(305)
				tuvh = tmp62;
			}
			else{
				HX_STACK_LINE(307)
				int tmp42 = (iIndex + (int)2);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(307)
				Float tmp43 = tileData->__get(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(307)
				int tmp44 = ::Std_obj::_int(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(307)
				tileID = tmp44;
				HX_STACK_LINE(308)
				::openfl::geom::Rectangle tmp45 = sheet->__tileRects->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(308)
				rect = tmp45;
				HX_STACK_LINE(309)
				::openfl::geom::Point tmp46 = sheet->__centerPoints->__get(tileID).StaticCast< ::openfl::geom::Point >();		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(309)
				center = tmp46;
				HX_STACK_LINE(310)
				::openfl::geom::Rectangle tmp47 = sheet->__tileUVs->__get(tileID).StaticCast< ::openfl::geom::Rectangle >();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(310)
				tileUV = tmp47;
				HX_STACK_LINE(312)
				bool tmp48 = (rect != null());		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(312)
				if ((tmp48)){
					HX_STACK_LINE(313)
					rw = rect->width;
					HX_STACK_LINE(313)
					rh = rect->height;
					HX_STACK_LINE(314)
					tuvx = tileUV->x;
					HX_STACK_LINE(314)
					tuvy = tileUV->y;
					HX_STACK_LINE(314)
					tuvw = tileUV->width;
					HX_STACK_LINE(314)
					tuvh = tileUV->height;
				}
			}
			HX_STACK_LINE(318)
			bool tmp42 = (rect != null());		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(318)
			bool tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(318)
			bool tmp44;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(318)
			if ((tmp43)){
				HX_STACK_LINE(318)
				tmp44 = (rect->width > (int)0);
			}
			else{
				HX_STACK_LINE(318)
				tmp44 = false;
			}
			HX_STACK_LINE(318)
			bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(318)
			bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(318)
			if ((tmp45)){
				HX_STACK_LINE(318)
				tmp46 = (rect->height > (int)0);
			}
			else{
				HX_STACK_LINE(318)
				tmp46 = false;
			}
			HX_STACK_LINE(318)
			bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(318)
			if ((tmp46)){
				HX_STACK_LINE(318)
				tmp47 = (center != null());
			}
			else{
				HX_STACK_LINE(318)
				tmp47 = false;
			}
			HX_STACK_LINE(318)
			if ((tmp47)){
				HX_STACK_LINE(320)
				alpha = (int)1;
				HX_STACK_LINE(321)
				tint = (int)16777215;
				HX_STACK_LINE(322)
				scale = ((Float)1.0);
				HX_STACK_LINE(323)
				rotation = ((Float)0.0);
				HX_STACK_LINE(324)
				cosTheta = ((Float)1.0);
				HX_STACK_LINE(325)
				sinTheta = ((Float)0.0);
				HX_STACK_LINE(327)
				bool tmp48 = useAlpha;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(327)
				if ((tmp48)){
					HX_STACK_LINE(328)
					int tmp49 = (iIndex + alphaIndex);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(328)
					Float tmp50 = tileData->__get(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(328)
					Float tmp51 = object->__worldAlpha;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(328)
					Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(328)
					alpha = tmp52;
				}
				else{
					HX_STACK_LINE(330)
					alpha = object->__worldAlpha;
				}
				HX_STACK_LINE(333)
				bool tmp49 = useRGB;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(333)
				if ((tmp49)){
					HX_STACK_LINE(334)
					int tmp50 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(334)
					Float tmp51 = tileData->__get(tmp50);		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(334)
					Float tmp52 = (tmp51 * (int)255);		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(334)
					int tmp53 = ::Std_obj::_int(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(334)
					int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(334)
					int tmp55 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(334)
					int tmp56 = (tmp55 + (int)1);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(334)
					Float tmp57 = tileData->__get(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(334)
					Float tmp58 = (tmp57 * (int)255);		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(334)
					int tmp59 = ::Std_obj::_int(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(334)
					int tmp60 = (int(tmp59) << int((int)8));		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(334)
					int tmp61 = (int(tmp54) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(334)
					int tmp62 = (iIndex + rgbIndex);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(334)
					int tmp63 = (tmp62 + (int)2);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(334)
					Float tmp64 = tileData->__get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(334)
					Float tmp65 = (tmp64 * (int)255);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(334)
					int tmp66 = ::Std_obj::_int(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(334)
					int tmp67 = (int(tmp61) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(334)
					tint = tmp67;
				}
				HX_STACK_LINE(337)
				::openfl::geom::ColorTransform wct = object->__worldColorTransform;		HX_STACK_VAR(wct,"wct");
				HX_STACK_LINE(338)
				::openfl::geom::ColorTransform tmp50 = this->colorTransform;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(338)
				tmp50->redMultiplier = wct->redMultiplier;
				HX_STACK_LINE(339)
				::openfl::geom::ColorTransform tmp51 = this->colorTransform;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(339)
				tmp51->greenMultiplier = wct->greenMultiplier;
				HX_STACK_LINE(340)
				::openfl::geom::ColorTransform tmp52 = this->colorTransform;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(340)
				tmp52->blueMultiplier = wct->blueMultiplier;
				HX_STACK_LINE(341)
				::openfl::geom::ColorTransform tmp53 = this->colorTransform;		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(341)
				tmp53->alphaMultiplier = wct->alphaMultiplier;
				HX_STACK_LINE(342)
				::openfl::geom::ColorTransform tmp54 = this->colorTransform;		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(342)
				tmp54->redOffset = wct->redOffset;
				HX_STACK_LINE(343)
				::openfl::geom::ColorTransform tmp55 = this->colorTransform;		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(343)
				tmp55->greenOffset = wct->greenOffset;
				HX_STACK_LINE(344)
				::openfl::geom::ColorTransform tmp56 = this->colorTransform;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(344)
				tmp56->blueOffset = wct->blueOffset;
				HX_STACK_LINE(345)
				::openfl::geom::ColorTransform tmp57 = this->colorTransform;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(345)
				tmp57->alphaOffset = wct->alphaOffset;
				HX_STACK_LINE(347)
				bool tmp58 = useRGBOffset;		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(347)
				if ((tmp58)){
					HX_STACK_LINE(348)
					int tmp59 = (iIndex + rgbOffsetIndex);		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(348)
					int tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(348)
					Float tmp61 = tileData->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(348)
					::openfl::geom::ColorTransform tmp62 = this->colorTransform;		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(348)
					hx::AddEq(tmp62->redOffset,tmp61);
					HX_STACK_LINE(349)
					int tmp63 = (iIndex + rgbOffsetIndex);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(349)
					int tmp64 = (tmp63 + (int)1);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(349)
					Float tmp65 = tileData->__get(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(349)
					::openfl::geom::ColorTransform tmp66 = this->colorTransform;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(349)
					hx::AddEq(tmp66->greenOffset,tmp65);
					HX_STACK_LINE(350)
					int tmp67 = (iIndex + rgbOffsetIndex);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(350)
					int tmp68 = (tmp67 + (int)2);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(350)
					Float tmp69 = tileData->__get(tmp68);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(350)
					::openfl::geom::ColorTransform tmp70 = this->colorTransform;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(350)
					hx::AddEq(tmp70->blueOffset,tmp69);
					HX_STACK_LINE(351)
					int tmp71 = (iIndex + rgbOffsetIndex);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(351)
					int tmp72 = (tmp71 + (int)3);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(351)
					Float tmp73 = tileData->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(351)
					::openfl::geom::ColorTransform tmp74 = this->colorTransform;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(351)
					hx::AddEq(tmp74->alphaOffset,tmp73);
				}
				HX_STACK_LINE(354)
				bool tmp59 = useScale;		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(354)
				if ((tmp59)){
					HX_STACK_LINE(355)
					int tmp60 = (iIndex + scaleIndex);		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(355)
					Float tmp61 = tileData->__get(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(355)
					scale = tmp61;
				}
				HX_STACK_LINE(358)
				bool tmp60 = useRotation;		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(358)
				if ((tmp60)){
					HX_STACK_LINE(359)
					int tmp61 = (iIndex + rotationIndex);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(359)
					Float tmp62 = tileData->__get(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(359)
					rotation = tmp62;
					HX_STACK_LINE(360)
					Float tmp63 = rotation;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(360)
					Float tmp64 = ::Math_obj::cos(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(360)
					cosTheta = tmp64;
					HX_STACK_LINE(361)
					Float tmp65 = rotation;		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(361)
					Float tmp66 = ::Math_obj::sin(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(361)
					sinTheta = tmp66;
				}
				HX_STACK_LINE(364)
				bool tmp61 = useTransform;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(364)
				if ((tmp61)){
					HX_STACK_LINE(365)
					int tmp62 = (iIndex + transformIndex);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(365)
					int tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(365)
					Float tmp64 = tileData->__get(tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(365)
					a = tmp64;
					HX_STACK_LINE(366)
					int tmp65 = (iIndex + transformIndex);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(366)
					int tmp66 = (tmp65 + (int)1);		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(366)
					Float tmp67 = tileData->__get(tmp66);		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(366)
					b = tmp67;
					HX_STACK_LINE(367)
					int tmp68 = (iIndex + transformIndex);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(367)
					int tmp69 = (tmp68 + (int)2);		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(367)
					Float tmp70 = tileData->__get(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(367)
					c = tmp70;
					HX_STACK_LINE(368)
					int tmp71 = (iIndex + transformIndex);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(368)
					int tmp72 = (tmp71 + (int)3);		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(368)
					Float tmp73 = tileData->__get(tmp72);		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(368)
					d = tmp73;
				}
				else{
					HX_STACK_LINE(370)
					Float tmp62 = (scale * cosTheta);		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(370)
					a = tmp62;
					HX_STACK_LINE(371)
					Float tmp63 = (scale * sinTheta);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(371)
					b = tmp63;
					HX_STACK_LINE(372)
					Float tmp64 = b;		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(372)
					Float tmp65 = -(tmp64);		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(372)
					c = tmp65;
					HX_STACK_LINE(373)
					d = a;
				}
				HX_STACK_LINE(376)
				Float tmp62 = (center->x * a);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(376)
				Float tmp63 = (center->y * c);		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(376)
				Float tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(376)
				ox = tmp64;
				HX_STACK_LINE(377)
				Float tmp65 = (center->x * b);		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(377)
				Float tmp66 = (center->y * d);		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(377)
				Float tmp67 = (tmp65 + tmp66);		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(377)
				oy = tmp67;
				HX_STACK_LINE(379)
				Float tmp68 = (x - ox);		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(379)
				tx = tmp68;
				HX_STACK_LINE(380)
				Float tmp69 = (y - oy);		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(380)
				ty = tmp69;
				HX_STACK_LINE(384)
				Float tmp70 = (a * oMa);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(384)
				Float tmp71 = (b * oMc);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(384)
				Float tmp72 = (tmp70 + tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(384)
				Float tmp73 = rw;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(384)
				Float tmp74 = (tmp72 * tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(384)
				tMa = tmp74;
				HX_STACK_LINE(385)
				Float tmp75 = (a * oMb);		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(385)
				Float tmp76 = (b * oMd);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(385)
				Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
				HX_STACK_LINE(385)
				Float tmp78 = rw;		HX_STACK_VAR(tmp78,"tmp78");
				HX_STACK_LINE(385)
				Float tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
				HX_STACK_LINE(385)
				tMb = tmp79;
				HX_STACK_LINE(386)
				Float tmp80 = (c * oMa);		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(386)
				Float tmp81 = (d * oMc);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(386)
				Float tmp82 = (tmp80 + tmp81);		HX_STACK_VAR(tmp82,"tmp82");
				HX_STACK_LINE(386)
				Float tmp83 = rh;		HX_STACK_VAR(tmp83,"tmp83");
				HX_STACK_LINE(386)
				Float tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
				HX_STACK_LINE(386)
				tMc = tmp84;
				HX_STACK_LINE(387)
				Float tmp85 = (c * oMb);		HX_STACK_VAR(tmp85,"tmp85");
				HX_STACK_LINE(387)
				Float tmp86 = (d * oMd);		HX_STACK_VAR(tmp86,"tmp86");
				HX_STACK_LINE(387)
				Float tmp87 = (tmp85 + tmp86);		HX_STACK_VAR(tmp87,"tmp87");
				HX_STACK_LINE(387)
				Float tmp88 = rh;		HX_STACK_VAR(tmp88,"tmp88");
				HX_STACK_LINE(387)
				Float tmp89 = (tmp87 * tmp88);		HX_STACK_VAR(tmp89,"tmp89");
				HX_STACK_LINE(387)
				tMd = tmp89;
				HX_STACK_LINE(388)
				Float tmp90 = (tx * oMa);		HX_STACK_VAR(tmp90,"tmp90");
				HX_STACK_LINE(388)
				Float tmp91 = (ty * oMc);		HX_STACK_VAR(tmp91,"tmp91");
				HX_STACK_LINE(388)
				Float tmp92 = (tmp90 + tmp91);		HX_STACK_VAR(tmp92,"tmp92");
				HX_STACK_LINE(388)
				Float tmp93 = oMtx;		HX_STACK_VAR(tmp93,"tmp93");
				HX_STACK_LINE(388)
				Float tmp94 = (tmp92 + tmp93);		HX_STACK_VAR(tmp94,"tmp94");
				HX_STACK_LINE(388)
				tMtx = tmp94;
				HX_STACK_LINE(389)
				Float tmp95 = (tx * oMb);		HX_STACK_VAR(tmp95,"tmp95");
				HX_STACK_LINE(389)
				Float tmp96 = (ty * oMd);		HX_STACK_VAR(tmp96,"tmp96");
				HX_STACK_LINE(389)
				Float tmp97 = (tmp95 + tmp96);		HX_STACK_VAR(tmp97,"tmp97");
				HX_STACK_LINE(389)
				Float tmp98 = oMty;		HX_STACK_VAR(tmp98,"tmp98");
				HX_STACK_LINE(389)
				Float tmp99 = (tmp97 + tmp98);		HX_STACK_VAR(tmp99,"tmp99");
				HX_STACK_LINE(389)
				tMty = tmp99;
				HX_STACK_LINE(391)
				int tmp100 = this->batchedSprites;		HX_STACK_VAR(tmp100,"tmp100");
				HX_STACK_LINE(391)
				int tmp101 = (tmp100 * (int)4);		HX_STACK_VAR(tmp101,"tmp101");
				HX_STACK_LINE(391)
				int tmp102 = this->elementsPerVertex;		HX_STACK_VAR(tmp102,"tmp102");
				HX_STACK_LINE(391)
				int tmp103 = (tmp101 * tmp102);		HX_STACK_VAR(tmp103,"tmp103");
				HX_STACK_LINE(391)
				bIndex = tmp103;
				HX_STACK_LINE(393)
				{
					HX_STACK_LINE(393)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(393)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(393)
					{
						HX_STACK_LINE(393)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(393)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (bIndex * (int)4)),tMtx);
						HX_STACK_LINE(393)
						tMtx;
					}
				}
				HX_STACK_LINE(394)
				{
					HX_STACK_LINE(394)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(394)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(394)
					{
						HX_STACK_LINE(394)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(394)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)1)) * (int)4)),tMty);
						HX_STACK_LINE(394)
						tMty;
					}
				}
				HX_STACK_LINE(395)
				{
					HX_STACK_LINE(395)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(395)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(395)
					Float tmp105 = (tMa + tMtx);		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(395)
					Float val = tmp105;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(395)
					{
						HX_STACK_LINE(395)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(395)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)5)) * (int)4)),val);
						HX_STACK_LINE(395)
						val;
					}
				}
				HX_STACK_LINE(396)
				{
					HX_STACK_LINE(396)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(396)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(396)
					Float tmp105 = (tMb + tMty);		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(396)
					Float val = tmp105;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(396)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(396)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)6)) * (int)4)),val);
						HX_STACK_LINE(396)
						val;
					}
				}
				HX_STACK_LINE(397)
				{
					HX_STACK_LINE(397)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(397)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(397)
					Float tmp105 = (tMa + tMc);		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(397)
					Float tmp106 = tMtx;		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(397)
					Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(397)
					Float val = tmp107;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(397)
					{
						HX_STACK_LINE(397)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(397)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)10)) * (int)4)),val);
						HX_STACK_LINE(397)
						val;
					}
				}
				HX_STACK_LINE(398)
				{
					HX_STACK_LINE(398)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(398)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(398)
					Float tmp105 = (tMd + tMb);		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(398)
					Float tmp106 = tMty;		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(398)
					Float tmp107 = (tmp105 + tmp106);		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(398)
					Float val = tmp107;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(398)
					{
						HX_STACK_LINE(398)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(398)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)11)) * (int)4)),val);
						HX_STACK_LINE(398)
						val;
					}
				}
				HX_STACK_LINE(399)
				{
					HX_STACK_LINE(399)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(399)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(399)
					Float tmp105 = (tMc + tMtx);		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(399)
					Float val = tmp105;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(399)
					{
						HX_STACK_LINE(399)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(399)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)15)) * (int)4)),val);
						HX_STACK_LINE(399)
						val;
					}
				}
				HX_STACK_LINE(400)
				{
					HX_STACK_LINE(400)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(400)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(400)
					Float tmp105 = (tMd + tMty);		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(400)
					Float val = tmp105;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(400)
					{
						HX_STACK_LINE(400)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(400)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)16)) * (int)4)),val);
						HX_STACK_LINE(400)
						val;
					}
				}
				HX_STACK_LINE(402)
				{
					HX_STACK_LINE(402)
					::lime::utils::ArrayBufferView tmp104 = this->colors;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(402)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(402)
					int tmp105;		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(402)
					{
						HX_STACK_LINE(402)
						::lime::utils::ArrayBufferView tmp106 = this->colors;		HX_STACK_VAR(tmp106,"tmp106");
						HX_STACK_LINE(402)
						::lime::utils::ArrayBufferView this2 = tmp106;		HX_STACK_VAR(this2,"this2");
						HX_STACK_LINE(402)
						int tmp107;		HX_STACK_VAR(tmp107,"tmp107");
						HX_STACK_LINE(402)
						{
							HX_STACK_LINE(402)
							::lime::utils::ArrayBufferView tmp108 = this->colors;		HX_STACK_VAR(tmp108,"tmp108");
							HX_STACK_LINE(402)
							::lime::utils::ArrayBufferView this3 = tmp108;		HX_STACK_VAR(this3,"this3");
							HX_STACK_LINE(402)
							int tmp109;		HX_STACK_VAR(tmp109,"tmp109");
							HX_STACK_LINE(402)
							{
								HX_STACK_LINE(402)
								::lime::utils::ArrayBufferView tmp110 = this->colors;		HX_STACK_VAR(tmp110,"tmp110");
								HX_STACK_LINE(402)
								::lime::utils::ArrayBufferView this4 = tmp110;		HX_STACK_VAR(this4,"this4");
								HX_STACK_LINE(402)
								Float tmp111 = (alpha * (int)255);		HX_STACK_VAR(tmp111,"tmp111");
								HX_STACK_LINE(402)
								int tmp112 = ::Std_obj::_int(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
								HX_STACK_LINE(402)
								int tmp113 = (int(tmp112) & int((int)255));		HX_STACK_VAR(tmp113,"tmp113");
								HX_STACK_LINE(402)
								int tmp114 = (int(tmp113) << int((int)24));		HX_STACK_VAR(tmp114,"tmp114");
								HX_STACK_LINE(402)
								int tmp115 = tint;		HX_STACK_VAR(tmp115,"tmp115");
								HX_STACK_LINE(402)
								int tmp116 = (int(tmp114) | int(tmp115));		HX_STACK_VAR(tmp116,"tmp116");
								HX_STACK_LINE(402)
								int val = tmp116;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(402)
								{
									HX_STACK_LINE(402)
									bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
									HX_STACK_LINE(402)
									::__hxcpp_memory_set_ui32(this4->buffer->b,(this4->byteOffset + (((bIndex + (int)19)) * (int)4)),val);
									HX_STACK_LINE(402)
									tmp109 = val;
								}
							}
							HX_STACK_LINE(402)
							int val = tmp109;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(402)
							{
								HX_STACK_LINE(402)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(402)
								::__hxcpp_memory_set_ui32(this3->buffer->b,(this3->byteOffset + (((bIndex + (int)14)) * (int)4)),val);
								HX_STACK_LINE(402)
								tmp107 = val;
							}
						}
						HX_STACK_LINE(402)
						int val = tmp107;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(402)
						{
							HX_STACK_LINE(402)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(402)
							::__hxcpp_memory_set_ui32(this2->buffer->b,(this2->byteOffset + (((bIndex + (int)9)) * (int)4)),val);
							HX_STACK_LINE(402)
							tmp105 = val;
						}
					}
					HX_STACK_LINE(402)
					int val = tmp105;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(402)
					{
						HX_STACK_LINE(402)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(402)
						::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)4)) * (int)4)),val);
						HX_STACK_LINE(402)
						val;
					}
				}
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(404)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(404)
					{
						HX_STACK_LINE(404)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(404)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)2)) * (int)4)),tuvx);
						HX_STACK_LINE(404)
						tuvx;
					}
				}
				HX_STACK_LINE(405)
				{
					HX_STACK_LINE(405)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(405)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(405)
					{
						HX_STACK_LINE(405)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(405)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)3)) * (int)4)),tuvy);
						HX_STACK_LINE(405)
						tuvy;
					}
				}
				HX_STACK_LINE(406)
				{
					HX_STACK_LINE(406)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(406)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(406)
					{
						HX_STACK_LINE(406)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(406)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)7)) * (int)4)),tuvw);
						HX_STACK_LINE(406)
						tuvw;
					}
				}
				HX_STACK_LINE(407)
				{
					HX_STACK_LINE(407)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(407)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(407)
					{
						HX_STACK_LINE(407)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(407)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)8)) * (int)4)),tuvy);
						HX_STACK_LINE(407)
						tuvy;
					}
				}
				HX_STACK_LINE(408)
				{
					HX_STACK_LINE(408)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(408)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(408)
					{
						HX_STACK_LINE(408)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(408)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)12)) * (int)4)),tuvw);
						HX_STACK_LINE(408)
						tuvw;
					}
				}
				HX_STACK_LINE(409)
				{
					HX_STACK_LINE(409)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(409)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(409)
					{
						HX_STACK_LINE(409)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(409)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)13)) * (int)4)),tuvh);
						HX_STACK_LINE(409)
						tuvh;
					}
				}
				HX_STACK_LINE(410)
				{
					HX_STACK_LINE(410)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(410)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(410)
					{
						HX_STACK_LINE(410)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(410)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)17)) * (int)4)),tuvx);
						HX_STACK_LINE(410)
						tuvx;
					}
				}
				HX_STACK_LINE(411)
				{
					HX_STACK_LINE(411)
					::lime::utils::ArrayBufferView tmp104 = this->positions;		HX_STACK_VAR(tmp104,"tmp104");
					HX_STACK_LINE(411)
					::lime::utils::ArrayBufferView this1 = tmp104;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(411)
					{
						HX_STACK_LINE(411)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(411)
						::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((bIndex + (int)18)) * (int)4)),tuvh);
						HX_STACK_LINE(411)
						tuvh;
					}
				}
				HX_STACK_LINE(413)
				int tmp104 = (bIndex + (int)20);		HX_STACK_VAR(tmp104,"tmp104");
				HX_STACK_LINE(413)
				this->writtenVertexBytes = tmp104;
				HX_STACK_LINE(415)
				{
					HX_STACK_LINE(415)
					int tmp105 = this->batchedSprites;		HX_STACK_VAR(tmp105,"tmp105");
					HX_STACK_LINE(415)
					int index = tmp105;		HX_STACK_VAR(index,"index");
					HX_STACK_LINE(415)
					::openfl::geom::ColorTransform tmp106 = this->colorTransform;		HX_STACK_VAR(tmp106,"tmp106");
					HX_STACK_LINE(415)
					::openfl::geom::ColorTransform colorTransform = tmp106;		HX_STACK_VAR(colorTransform,"colorTransform");
					HX_STACK_LINE(415)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp107 = this->states->__get(index).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp107,"tmp107");
					HX_STACK_LINE(415)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp107;		HX_STACK_VAR(state,"state");
					HX_STACK_LINE(415)
					bool tmp108 = (state == null());		HX_STACK_VAR(tmp108,"tmp108");
					HX_STACK_LINE(415)
					if ((tmp108)){
						HX_STACK_LINE(415)
						::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp109 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp109,"tmp109");
						HX_STACK_LINE(415)
						::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp110 = this->states[index] = tmp109;		HX_STACK_VAR(tmp110,"tmp110");
						HX_STACK_LINE(415)
						state = tmp110;
					}
					HX_STACK_LINE(415)
					state->texture = texture;
					HX_STACK_LINE(415)
					state->textureSmooth = smooth;
					HX_STACK_LINE(415)
					state->blendMode = blendMode;
					HX_STACK_LINE(415)
					bool tmp109 = (colorTransform != null());		HX_STACK_VAR(tmp109,"tmp109");
					HX_STACK_LINE(415)
					bool tmp110;		HX_STACK_VAR(tmp110,"tmp110");
					HX_STACK_LINE(415)
					if ((tmp109)){
						HX_STACK_LINE(415)
						tmp110 = colorTransform->__isDefault();
					}
					else{
						HX_STACK_LINE(415)
						tmp110 = false;
					}
					HX_STACK_LINE(415)
					state->skipColorTransform = tmp110;
					HX_STACK_LINE(415)
					bool tmp111 = state->skipColorTransform;		HX_STACK_VAR(tmp111,"tmp111");
					HX_STACK_LINE(415)
					bool tmp112 = !(tmp111);		HX_STACK_VAR(tmp112,"tmp112");
					HX_STACK_LINE(415)
					if ((tmp112)){
						HX_STACK_LINE(415)
						state->colorTransform->redMultiplier = colorTransform->redMultiplier;
						HX_STACK_LINE(415)
						state->colorTransform->greenMultiplier = colorTransform->greenMultiplier;
						HX_STACK_LINE(415)
						state->colorTransform->blueMultiplier = colorTransform->blueMultiplier;
						HX_STACK_LINE(415)
						state->colorTransform->alphaMultiplier = colorTransform->alphaMultiplier;
						HX_STACK_LINE(415)
						state->colorTransform->redOffset = colorTransform->redOffset;
						HX_STACK_LINE(415)
						state->colorTransform->greenOffset = colorTransform->greenOffset;
						HX_STACK_LINE(415)
						state->colorTransform->blueOffset = colorTransform->blueOffset;
						HX_STACK_LINE(415)
						state->colorTransform->alphaOffset = colorTransform->alphaOffset;
					}
					HX_STACK_LINE(415)
					state->skipColorTransformAlpha = false;
					HX_STACK_LINE(415)
					bool tmp113 = (flashShader == null());		HX_STACK_VAR(tmp113,"tmp113");
					HX_STACK_LINE(415)
					if ((tmp113)){
						HX_STACK_LINE(415)
						state->shader = null();
						HX_STACK_LINE(415)
						state->shaderData = null();
					}
					else{
						HX_STACK_LINE(415)
						state->shader = flashShader->__shader;
						HX_STACK_LINE(415)
						state->shaderData = flashShader->data;
					}
				}
				HX_STACK_LINE(417)
				(this->batchedSprites)++;
			}
			HX_STACK_LINE(420)
			hx::AddEq(iIndex,numValues);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(SpriteBatch_obj,renderTiles,(void))

Void SpriteBatch_obj::fillVertices( int index,Float width,Float height,::openfl::geom::Matrix matrix,::openfl::display::TextureUvs uvs,hx::Null< int >  __o_color,Dynamic pixelSnapping){
int color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","fillVertices",0x1e5d3416,"openfl._internal.renderer.opengl.utils.SpriteBatch.fillVertices","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",426,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(uvs,"uvs")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(pixelSnapping,"pixelSnapping")
{
		HX_STACK_LINE(428)
		Float a = matrix->a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(429)
		Float b = matrix->b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(430)
		Float c = matrix->c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(431)
		Float d = matrix->d;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(432)
		Float tx = matrix->tx;		HX_STACK_VAR(tx,"tx");
		HX_STACK_LINE(433)
		Float ty = matrix->ty;		HX_STACK_VAR(ty,"ty");
		HX_STACK_LINE(436)
		bool tmp = (pixelSnapping == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(436)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(436)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(436)
		if ((tmp1)){
			HX_STACK_LINE(436)
			tmp2 = (pixelSnapping == ((Dynamic)((int)2)));
		}
		else{
			HX_STACK_LINE(436)
			tmp2 = true;
		}
		HX_STACK_LINE(436)
		if ((tmp2)){
			HX_STACK_LINE(437)
			{
				HX_STACK_LINE(437)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(437)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(437)
				{
					HX_STACK_LINE(437)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(437)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),tx);
					HX_STACK_LINE(437)
					tx;
				}
			}
			HX_STACK_LINE(438)
			{
				HX_STACK_LINE(438)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(438)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(438)
				{
					HX_STACK_LINE(438)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(438)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)1)) * (int)4)),ty);
					HX_STACK_LINE(438)
					ty;
				}
			}
			HX_STACK_LINE(439)
			{
				HX_STACK_LINE(439)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(439)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(439)
				Float tmp4 = (a * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(439)
				Float tmp5 = tx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(439)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(439)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(439)
				{
					HX_STACK_LINE(439)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(439)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)5)) * (int)4)),val);
					HX_STACK_LINE(439)
					val;
				}
			}
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(440)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(440)
				Float tmp4 = (b * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(440)
				Float tmp5 = ty;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(440)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(440)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(440)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)6)) * (int)4)),val);
					HX_STACK_LINE(440)
					val;
				}
			}
			HX_STACK_LINE(441)
			{
				HX_STACK_LINE(441)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(441)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(441)
				Float tmp4 = (a * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(441)
				Float tmp5 = (c * height);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(441)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(441)
				Float tmp7 = tx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(441)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(441)
				Float val = tmp8;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(441)
				{
					HX_STACK_LINE(441)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(441)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)10)) * (int)4)),val);
					HX_STACK_LINE(441)
					val;
				}
			}
			HX_STACK_LINE(442)
			{
				HX_STACK_LINE(442)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(442)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(442)
				Float tmp4 = (d * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(442)
				Float tmp5 = (b * width);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(442)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(442)
				Float tmp7 = ty;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(442)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(442)
				Float val = tmp8;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(442)
				{
					HX_STACK_LINE(442)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(442)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)11)) * (int)4)),val);
					HX_STACK_LINE(442)
					val;
				}
			}
			HX_STACK_LINE(443)
			{
				HX_STACK_LINE(443)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(443)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(443)
				Float tmp4 = (c * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(443)
				Float tmp5 = tx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(443)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(443)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(443)
				{
					HX_STACK_LINE(443)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(443)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)15)) * (int)4)),val);
					HX_STACK_LINE(443)
					val;
				}
			}
			HX_STACK_LINE(444)
			{
				HX_STACK_LINE(444)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(444)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(444)
				Float tmp4 = (d * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(444)
				Float tmp5 = ty;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(444)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(444)
				Float val = tmp6;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(444)
				{
					HX_STACK_LINE(444)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(444)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)16)) * (int)4)),val);
					HX_STACK_LINE(444)
					val;
				}
			}
		}
		else{
			HX_STACK_LINE(446)
			{
				HX_STACK_LINE(446)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(446)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(446)
				Float tmp4 = tx;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(446)
				Float tmp5 = ::Math_obj::fround(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(446)
				Float val = tmp5;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(446)
				{
					HX_STACK_LINE(446)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(446)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (index * (int)4)),val);
					HX_STACK_LINE(446)
					val;
				}
			}
			HX_STACK_LINE(447)
			{
				HX_STACK_LINE(447)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(447)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(447)
				Float tmp4 = ty;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(447)
				Float tmp5 = ::Math_obj::fround(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(447)
				Float val = tmp5;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(447)
				{
					HX_STACK_LINE(447)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(447)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)1)) * (int)4)),val);
					HX_STACK_LINE(447)
					val;
				}
			}
			HX_STACK_LINE(448)
			{
				HX_STACK_LINE(448)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(448)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(448)
				Float tmp4 = (a * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(448)
				Float tmp5 = tx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(448)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(448)
				Float tmp7 = ::Math_obj::fround(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(448)
				Float val = tmp7;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(448)
				{
					HX_STACK_LINE(448)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(448)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)5)) * (int)4)),val);
					HX_STACK_LINE(448)
					val;
				}
			}
			HX_STACK_LINE(449)
			{
				HX_STACK_LINE(449)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(449)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(449)
				Float tmp4 = (b * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(449)
				Float tmp5 = ty;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(449)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(449)
				Float tmp7 = ::Math_obj::fround(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(449)
				Float val = tmp7;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(449)
				{
					HX_STACK_LINE(449)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(449)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)6)) * (int)4)),val);
					HX_STACK_LINE(449)
					val;
				}
			}
			HX_STACK_LINE(450)
			{
				HX_STACK_LINE(450)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(450)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(450)
				Float tmp4 = (a * width);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(450)
				Float tmp5 = (c * height);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(450)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(450)
				Float tmp7 = tx;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(450)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(450)
				Float tmp9 = ::Math_obj::fround(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(450)
				Float val = tmp9;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(450)
				{
					HX_STACK_LINE(450)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(450)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)10)) * (int)4)),val);
					HX_STACK_LINE(450)
					val;
				}
			}
			HX_STACK_LINE(451)
			{
				HX_STACK_LINE(451)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(451)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(451)
				Float tmp4 = (d * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(451)
				Float tmp5 = (b * width);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(451)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(451)
				Float tmp7 = ty;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(451)
				Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(451)
				Float tmp9 = ::Math_obj::fround(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(451)
				Float val = tmp9;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(451)
				{
					HX_STACK_LINE(451)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(451)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)11)) * (int)4)),val);
					HX_STACK_LINE(451)
					val;
				}
			}
			HX_STACK_LINE(452)
			{
				HX_STACK_LINE(452)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(452)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(452)
				Float tmp4 = (c * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(452)
				Float tmp5 = tx;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(452)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(452)
				Float tmp7 = ::Math_obj::fround(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(452)
				Float val = tmp7;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(452)
				{
					HX_STACK_LINE(452)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(452)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)15)) * (int)4)),val);
					HX_STACK_LINE(452)
					val;
				}
			}
			HX_STACK_LINE(453)
			{
				HX_STACK_LINE(453)
				::lime::utils::ArrayBufferView tmp3 = this->positions;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(453)
				::lime::utils::ArrayBufferView this1 = tmp3;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(453)
				Float tmp4 = (d * height);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(453)
				Float tmp5 = ty;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(453)
				Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(453)
				Float tmp7 = ::Math_obj::fround(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(453)
				Float val = tmp7;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(453)
				{
					HX_STACK_LINE(453)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(453)
					::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)16)) * (int)4)),val);
					HX_STACK_LINE(453)
					val;
				}
			}
		}
		HX_STACK_LINE(457)
		bool tmp3 = this->enableColor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(457)
		if ((tmp3)){
			HX_STACK_LINE(458)
			::lime::utils::ArrayBufferView tmp4 = this->colors;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(458)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(458)
			int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				::lime::utils::ArrayBufferView tmp6 = this->colors;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(458)
				::lime::utils::ArrayBufferView this2 = tmp6;		HX_STACK_VAR(this2,"this2");
				HX_STACK_LINE(458)
				int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					::lime::utils::ArrayBufferView tmp8 = this->colors;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(458)
					::lime::utils::ArrayBufferView this3 = tmp8;		HX_STACK_VAR(this3,"this3");
					HX_STACK_LINE(458)
					int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(458)
					{
						HX_STACK_LINE(458)
						::lime::utils::ArrayBufferView tmp10 = this->colors;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(458)
						::lime::utils::ArrayBufferView this4 = tmp10;		HX_STACK_VAR(this4,"this4");
						HX_STACK_LINE(458)
						{
							HX_STACK_LINE(458)
							bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
							HX_STACK_LINE(458)
							::__hxcpp_memory_set_ui32(this4->buffer->b,(this4->byteOffset + (((index + (int)19)) * (int)4)),color);
							HX_STACK_LINE(458)
							tmp9 = color;
						}
					}
					HX_STACK_LINE(458)
					int val = tmp9;		HX_STACK_VAR(val,"val");
					HX_STACK_LINE(458)
					{
						HX_STACK_LINE(458)
						bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
						HX_STACK_LINE(458)
						::__hxcpp_memory_set_ui32(this3->buffer->b,(this3->byteOffset + (((index + (int)14)) * (int)4)),val);
						HX_STACK_LINE(458)
						tmp7 = val;
					}
				}
				HX_STACK_LINE(458)
				int val = tmp7;		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(458)
				{
					HX_STACK_LINE(458)
					bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
					HX_STACK_LINE(458)
					::__hxcpp_memory_set_ui32(this2->buffer->b,(this2->byteOffset + (((index + (int)9)) * (int)4)),val);
					HX_STACK_LINE(458)
					tmp5 = val;
				}
			}
			HX_STACK_LINE(458)
			int val = tmp5;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(458)
			{
				HX_STACK_LINE(458)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(458)
				::__hxcpp_memory_set_ui32(this1->buffer->b,(this1->byteOffset + (((index + (int)4)) * (int)4)),val);
				HX_STACK_LINE(458)
				val;
			}
		}
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(462)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(462)
			Float val = uvs->x0;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(462)
			{
				HX_STACK_LINE(462)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(462)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)2)) * (int)4)),val);
				HX_STACK_LINE(462)
				val;
			}
		}
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(463)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(463)
			Float val = uvs->y0;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(463)
			{
				HX_STACK_LINE(463)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(463)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)3)) * (int)4)),val);
				HX_STACK_LINE(463)
				val;
			}
		}
		HX_STACK_LINE(464)
		{
			HX_STACK_LINE(464)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(464)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(464)
			Float val = uvs->x1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(464)
			{
				HX_STACK_LINE(464)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(464)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)7)) * (int)4)),val);
				HX_STACK_LINE(464)
				val;
			}
		}
		HX_STACK_LINE(465)
		{
			HX_STACK_LINE(465)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(465)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(465)
			Float val = uvs->y1;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(465)
			{
				HX_STACK_LINE(465)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(465)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)8)) * (int)4)),val);
				HX_STACK_LINE(465)
				val;
			}
		}
		HX_STACK_LINE(466)
		{
			HX_STACK_LINE(466)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(466)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(466)
			Float val = uvs->x2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(466)
			{
				HX_STACK_LINE(466)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(466)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)12)) * (int)4)),val);
				HX_STACK_LINE(466)
				val;
			}
		}
		HX_STACK_LINE(467)
		{
			HX_STACK_LINE(467)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(467)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(467)
			Float val = uvs->y2;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(467)
			{
				HX_STACK_LINE(467)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(467)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)13)) * (int)4)),val);
				HX_STACK_LINE(467)
				val;
			}
		}
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(468)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(468)
			Float val = uvs->x3;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(468)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)17)) * (int)4)),val);
				HX_STACK_LINE(468)
				val;
			}
		}
		HX_STACK_LINE(469)
		{
			HX_STACK_LINE(469)
			::lime::utils::ArrayBufferView tmp4 = this->positions;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(469)
			::lime::utils::ArrayBufferView this1 = tmp4;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(469)
			Float val = uvs->y3;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
				HX_STACK_LINE(469)
				::__hxcpp_memory_set_float(this1->buffer->b,(this1->byteOffset + (((index + (int)18)) * (int)4)),val);
				HX_STACK_LINE(469)
				val;
			}
		}
		HX_STACK_LINE(471)
		int tmp4 = (index + (int)20);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(471)
		this->writtenVertexBytes = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(SpriteBatch_obj,fillVertices,(void))

Void SpriteBatch_obj::enableAttributes( Dynamic __o_color){
Dynamic color = __o_color.Default(-1);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","enableAttributes",0x7705b0b4,"openfl._internal.renderer.opengl.utils.SpriteBatch.enableAttributes","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",474,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(475)
		bool tmp = (color != (int)-1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(475)
		this->enableColor = tmp;
		HX_STACK_LINE(477)
		bool tmp1 = this->enableColor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(477)
		bool tmp2 = this->lastEnableColor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(477)
		bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(477)
		if ((tmp3)){
			HX_STACK_LINE(478)
			this->flush();
			HX_STACK_LINE(479)
			bool tmp4 = this->enableColor;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(479)
			this->lastEnableColor = tmp4;
		}
		HX_STACK_LINE(482)
		bool tmp4 = this->lastEnableColor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(482)
		::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp5 = this->attributes->__get((int)2).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(482)
		tmp5->enabled = tmp4;
		HX_STACK_LINE(484)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(484)
		{
			HX_STACK_LINE(484)
			int r = (int)0;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(484)
			{
				HX_STACK_LINE(484)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(484)
				Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(484)
				while((true)){
					HX_STACK_LINE(484)
					bool tmp7 = (_g < _g1->length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(484)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(484)
					if ((tmp8)){
						HX_STACK_LINE(484)
						break;
					}
					HX_STACK_LINE(484)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp9 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(484)
					::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp9;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(484)
					++(_g);
					HX_STACK_LINE(484)
					bool tmp10 = a->enabled;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(484)
					if ((tmp10)){
						HX_STACK_LINE(484)
						int tmp11 = a->components;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(484)
						int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(484)
						{
							HX_STACK_LINE(484)
							int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(484)
							int tmp13 = _g2;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(484)
							switch( (int)(tmp13)){
								case (int)5120: case (int)5121: {
									HX_STACK_LINE(484)
									tmp12 = (int)1;
								}
								;break;
								case (int)5122: case (int)5123: {
									HX_STACK_LINE(484)
									tmp12 = (int)2;
								}
								;break;
								default: {
									HX_STACK_LINE(484)
									tmp12 = (int)4;
								}
							}
						}
						HX_STACK_LINE(484)
						int tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(484)
						Float tmp14 = (Float(tmp13) / Float((int)4));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(484)
						int tmp15 = ::Math_obj::floor(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(484)
						hx::AddEq(r,tmp15);
					}
				}
			}
			HX_STACK_LINE(484)
			tmp6 = r;
		}
		HX_STACK_LINE(484)
		this->elementsPerVertex = tmp6;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,enableAttributes,(void))

Void SpriteBatch_obj::flush( ){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","flush",0xaa58290a,"openfl._internal.renderer.opengl.utils.SpriteBatch.flush","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",487,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(488)
		int tmp = this->batchedSprites;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(488)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(488)
		if ((tmp1)){
			HX_STACK_LINE(488)
			return null();
		}
		HX_STACK_LINE(490)
		::openfl::geom::Rectangle tmp2 = this->clipRect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(490)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(490)
		if ((tmp3)){
			HX_STACK_LINE(491)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call(this->gl->SCISSOR_TEST);
			HX_STACK_LINE(492)
			{
				HX_STACK_LINE(492)
				::openfl::geom::Rectangle tmp4 = this->clipRect;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(492)
				Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(492)
				int tmp6 = ::Math_obj::floor(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(492)
				int x = tmp6;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(493)
				::openfl::geom::Rectangle tmp7 = this->clipRect;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(493)
				Float tmp8 = tmp7->y;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(493)
				int tmp9 = ::Math_obj::floor(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(493)
				int y = tmp9;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(494)
				::openfl::geom::Rectangle tmp10 = this->clipRect;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(494)
				Float tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(494)
				int tmp12 = ::Math_obj::ceil(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(494)
				int width = tmp12;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(495)
				::openfl::geom::Rectangle tmp13 = this->clipRect;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(495)
				Float tmp14 = tmp13->height;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(495)
				int tmp15 = ::Math_obj::ceil(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(495)
				int height = tmp15;		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(492)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call(x,y,width,height);
			}
		}
		HX_STACK_LINE(499)
		bool tmp4 = this->dirty;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(499)
		if ((tmp4)){
			HX_STACK_LINE(500)
			this->dirty = false;
			HX_STACK_LINE(502)
			::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(502)
			tmp5->activeTextures = (int)1;
			HX_STACK_LINE(503)
			{
				HX_STACK_LINE(503)
				::openfl::_internal::renderer::opengl::utils::VertexArray tmp6 = this->vertexArray;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(503)
				::openfl::_internal::renderer::opengl::utils::VertexArray _this = tmp6;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(503)
				{
					HX_STACK_LINE(503)
					::lime::graphics::opengl::GLBuffer buffer = _this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
					HX_STACK_LINE(503)
					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(_this->gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
				}
			}
			HX_STACK_LINE(504)
			{
				HX_STACK_LINE(504)
				::lime::graphics::opengl::GLBuffer tmp6 = this->indexBuffer;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(504)
				::lime::graphics::opengl::GLBuffer buffer = tmp6;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(504)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(this->gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
			}
		}
		HX_STACK_LINE(507)
		int tmp5 = this->writtenVertexBytes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(507)
		int tmp6 = this->vertexArraySize;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(507)
		Float tmp7 = (tmp6 * ((Float)0.5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(507)
		bool tmp8 = (tmp5 > tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(507)
		if ((tmp8)){
			HX_STACK_LINE(508)
			::openfl::_internal::renderer::opengl::utils::VertexArray tmp9 = this->vertexArray;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(508)
			::lime::utils::ArrayBufferView tmp10 = this->positions;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(508)
			tmp9->upload(tmp10);
		}
		else{
			HX_STACK_LINE(510)
			::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(510)
			{
				HX_STACK_LINE(510)
				::lime::utils::ArrayBufferView tmp10 = this->positions;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(510)
				::lime::utils::ArrayBufferView this1 = tmp10;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(510)
				int tmp11 = this->writtenVertexBytes;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(510)
				Dynamic end = tmp11;		HX_STACK_VAR(end,"end");
				HX_STACK_LINE(510)
				bool tmp12 = (end == null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(510)
				if ((tmp12)){
					HX_STACK_LINE(510)
					Dynamic tmp13 = end;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(510)
					int tmp14 = this1->length;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(510)
					(tmp13 == tmp14);
				}
				HX_STACK_LINE(510)
				int tmp13 = end;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(510)
				int len = tmp13;		HX_STACK_VAR(len,"len");
				HX_STACK_LINE(510)
				int tmp14 = this1->bytesPerElement;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(510)
				int tmp15 = ((int)0 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(510)
				int byte_offset = tmp15;		HX_STACK_VAR(byte_offset,"byte_offset");
				HX_STACK_LINE(510)
				::lime::utils::ArrayBufferView tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(510)
				{
					HX_STACK_LINE(510)
					int tmp17 = this1->type;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(510)
					int _g = tmp17;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(510)
					int tmp18 = _g;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(510)
					switch( (int)(tmp18)){
						case (int)1: {
							HX_STACK_LINE(510)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(510)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(510)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							if ((tmp20)){
								HX_STACK_LINE(510)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)1);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(510)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								if ((tmp21)){
									HX_STACK_LINE(510)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									{
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(510)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(510)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(510)
										_this->length = tmp24;
										HX_STACK_LINE(510)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(510)
										_this->byteLength = tmp25;
										HX_STACK_LINE(510)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(510)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											this3 = tmp28;
											HX_STACK_LINE(510)
											tmp26 = this3;
										}
										HX_STACK_LINE(510)
										_this->buffer = tmp26;
										HX_STACK_LINE(510)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(510)
										tmp22 = _this;
									}
									HX_STACK_LINE(510)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(510)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									if ((tmp22)){
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(510)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(510)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(510)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(510)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(510)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(510)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(510)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(510)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(510)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(510)
											if ((tmp31)){
												HX_STACK_LINE(510)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(510)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(510)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(510)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(510)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(510)
													this3 = tmp35;
													HX_STACK_LINE(510)
													tmp33 = this3;
												}
												HX_STACK_LINE(510)
												_this->buffer = tmp33;
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(510)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(510)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(510)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(510)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(510)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(510)
											_this->byteLength = tmp32;
											HX_STACK_LINE(510)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(510)
											_this->length = srcLength;
											HX_STACK_LINE(510)
											tmp23 = _this;
										}
										HX_STACK_LINE(510)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(510)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										if ((tmp23)){
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											{
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(510)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(510)
												if ((tmp26)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(510)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(510)
												if ((tmp28)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(510)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(510)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(510)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(510)
												if ((tmp29)){
													HX_STACK_LINE(510)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(510)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(510)
													if ((tmp33)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(510)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(510)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(510)
												_this->buffer = buffer;
												HX_STACK_LINE(510)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(510)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(510)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(510)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(510)
												_this->length = tmp31;
												HX_STACK_LINE(510)
												tmp24 = _this;
											}
											HX_STACK_LINE(510)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(510)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int8Array","\x40","\x53","\xda","\x77"));
										}
									}
								}
							}
							HX_STACK_LINE(510)
							tmp16 = this2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(510)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(510)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(510)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							if ((tmp20)){
								HX_STACK_LINE(510)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)2);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(510)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								if ((tmp21)){
									HX_STACK_LINE(510)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									{
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(510)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(510)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(510)
										_this->length = tmp24;
										HX_STACK_LINE(510)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(510)
										_this->byteLength = tmp25;
										HX_STACK_LINE(510)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(510)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											this3 = tmp28;
											HX_STACK_LINE(510)
											tmp26 = this3;
										}
										HX_STACK_LINE(510)
										_this->buffer = tmp26;
										HX_STACK_LINE(510)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(510)
										tmp22 = _this;
									}
									HX_STACK_LINE(510)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(510)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									if ((tmp22)){
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(510)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(510)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(510)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(510)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(510)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(510)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(510)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(510)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(510)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(510)
											if ((tmp31)){
												HX_STACK_LINE(510)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(510)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(510)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(510)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(510)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(510)
													this3 = tmp35;
													HX_STACK_LINE(510)
													tmp33 = this3;
												}
												HX_STACK_LINE(510)
												_this->buffer = tmp33;
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(510)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(510)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(510)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(510)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(510)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(510)
											_this->byteLength = tmp32;
											HX_STACK_LINE(510)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(510)
											_this->length = srcLength;
											HX_STACK_LINE(510)
											tmp23 = _this;
										}
										HX_STACK_LINE(510)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(510)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										if ((tmp23)){
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											{
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)2);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(510)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(510)
												if ((tmp26)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(510)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(510)
												if ((tmp28)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(510)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(510)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(510)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(510)
												if ((tmp29)){
													HX_STACK_LINE(510)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(510)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(510)
													if ((tmp33)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(510)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(510)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(510)
												_this->buffer = buffer;
												HX_STACK_LINE(510)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(510)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(510)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(510)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(510)
												_this->length = tmp31;
												HX_STACK_LINE(510)
												tmp24 = _this;
											}
											HX_STACK_LINE(510)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(510)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int16Array","\x95","\xb2","\x95","\xa7"));
										}
									}
								}
							}
							HX_STACK_LINE(510)
							tmp16 = this2;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(510)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(510)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(510)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							if ((tmp20)){
								HX_STACK_LINE(510)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)3);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(510)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								if ((tmp21)){
									HX_STACK_LINE(510)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									{
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(510)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(510)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(510)
										_this->length = tmp24;
										HX_STACK_LINE(510)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(510)
										_this->byteLength = tmp25;
										HX_STACK_LINE(510)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(510)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											this3 = tmp28;
											HX_STACK_LINE(510)
											tmp26 = this3;
										}
										HX_STACK_LINE(510)
										_this->buffer = tmp26;
										HX_STACK_LINE(510)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(510)
										tmp22 = _this;
									}
									HX_STACK_LINE(510)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(510)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									if ((tmp22)){
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(510)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(510)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(510)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(510)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(510)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(510)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(510)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(510)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(510)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(510)
											if ((tmp31)){
												HX_STACK_LINE(510)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(510)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(510)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(510)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(510)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(510)
													this3 = tmp35;
													HX_STACK_LINE(510)
													tmp33 = this3;
												}
												HX_STACK_LINE(510)
												_this->buffer = tmp33;
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(510)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(510)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(510)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(510)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(510)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(510)
											_this->byteLength = tmp32;
											HX_STACK_LINE(510)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(510)
											_this->length = srcLength;
											HX_STACK_LINE(510)
											tmp23 = _this;
										}
										HX_STACK_LINE(510)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(510)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										if ((tmp23)){
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											{
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)3);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(510)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(510)
												if ((tmp26)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(510)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(510)
												if ((tmp28)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(510)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(510)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(510)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(510)
												if ((tmp29)){
													HX_STACK_LINE(510)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(510)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(510)
													if ((tmp33)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(510)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(510)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(510)
												_this->buffer = buffer;
												HX_STACK_LINE(510)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(510)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(510)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(510)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(510)
												_this->length = tmp31;
												HX_STACK_LINE(510)
												tmp24 = _this;
											}
											HX_STACK_LINE(510)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(510)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Int32Array","\x9b","\x2e","\x53","\x61"));
										}
									}
								}
							}
							HX_STACK_LINE(510)
							tmp16 = this2;
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(510)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(510)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(510)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							if ((tmp20)){
								HX_STACK_LINE(510)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(510)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								if ((tmp21)){
									HX_STACK_LINE(510)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									{
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(510)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(510)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(510)
										_this->length = tmp24;
										HX_STACK_LINE(510)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(510)
										_this->byteLength = tmp25;
										HX_STACK_LINE(510)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(510)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											this3 = tmp28;
											HX_STACK_LINE(510)
											tmp26 = this3;
										}
										HX_STACK_LINE(510)
										_this->buffer = tmp26;
										HX_STACK_LINE(510)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(510)
										tmp22 = _this;
									}
									HX_STACK_LINE(510)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(510)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									if ((tmp22)){
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(510)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(510)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(510)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(510)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(510)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(510)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(510)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(510)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(510)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(510)
											if ((tmp31)){
												HX_STACK_LINE(510)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(510)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(510)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(510)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(510)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(510)
													this3 = tmp35;
													HX_STACK_LINE(510)
													tmp33 = this3;
												}
												HX_STACK_LINE(510)
												_this->buffer = tmp33;
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(510)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(510)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(510)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(510)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(510)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(510)
											_this->byteLength = tmp32;
											HX_STACK_LINE(510)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(510)
											_this->length = srcLength;
											HX_STACK_LINE(510)
											tmp23 = _this;
										}
										HX_STACK_LINE(510)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(510)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										if ((tmp23)){
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											{
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(510)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(510)
												if ((tmp26)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(510)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(510)
												if ((tmp28)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(510)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(510)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(510)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(510)
												if ((tmp29)){
													HX_STACK_LINE(510)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(510)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(510)
													if ((tmp33)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(510)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(510)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(510)
												_this->buffer = buffer;
												HX_STACK_LINE(510)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(510)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(510)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(510)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(510)
												_this->length = tmp31;
												HX_STACK_LINE(510)
												tmp24 = _this;
											}
											HX_STACK_LINE(510)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(510)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
										}
									}
								}
							}
							HX_STACK_LINE(510)
							tmp16 = this2;
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(510)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(510)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(510)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							if ((tmp20)){
								HX_STACK_LINE(510)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)5);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(510)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								if ((tmp21)){
									HX_STACK_LINE(510)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									{
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(510)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(510)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(510)
										_this->length = tmp24;
										HX_STACK_LINE(510)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(510)
										_this->byteLength = tmp25;
										HX_STACK_LINE(510)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(510)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											this3 = tmp28;
											HX_STACK_LINE(510)
											tmp26 = this3;
										}
										HX_STACK_LINE(510)
										_this->buffer = tmp26;
										HX_STACK_LINE(510)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(510)
										tmp22 = _this;
									}
									HX_STACK_LINE(510)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(510)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									if ((tmp22)){
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(510)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(510)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(510)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(510)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(510)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(510)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(510)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(510)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(510)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(510)
											if ((tmp31)){
												HX_STACK_LINE(510)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(510)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(510)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(510)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(510)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(510)
													this3 = tmp35;
													HX_STACK_LINE(510)
													tmp33 = this3;
												}
												HX_STACK_LINE(510)
												_this->buffer = tmp33;
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(510)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(510)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(510)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(510)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(510)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(510)
											_this->byteLength = tmp32;
											HX_STACK_LINE(510)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(510)
											_this->length = srcLength;
											HX_STACK_LINE(510)
											tmp23 = _this;
										}
										HX_STACK_LINE(510)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(510)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										if ((tmp23)){
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											{
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)5);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(510)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(510)
												if ((tmp26)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(510)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(510)
												if ((tmp28)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(510)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(510)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(510)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(510)
												if ((tmp29)){
													HX_STACK_LINE(510)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(510)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(510)
													if ((tmp33)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(510)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(510)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(510)
												_this->buffer = buffer;
												HX_STACK_LINE(510)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(510)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(510)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(510)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(510)
												_this->length = tmp31;
												HX_STACK_LINE(510)
												tmp24 = _this;
											}
											HX_STACK_LINE(510)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(510)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8ClampedArray","\x6d","\x2a","\x7c","\xf9"));
										}
									}
								}
							}
							HX_STACK_LINE(510)
							tmp16 = this2;
						}
						;break;
						case (int)6: {
							HX_STACK_LINE(510)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(510)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(510)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							if ((tmp20)){
								HX_STACK_LINE(510)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)6);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(510)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								if ((tmp21)){
									HX_STACK_LINE(510)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									{
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(510)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(510)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(510)
										_this->length = tmp24;
										HX_STACK_LINE(510)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(510)
										_this->byteLength = tmp25;
										HX_STACK_LINE(510)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(510)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											this3 = tmp28;
											HX_STACK_LINE(510)
											tmp26 = this3;
										}
										HX_STACK_LINE(510)
										_this->buffer = tmp26;
										HX_STACK_LINE(510)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(510)
										tmp22 = _this;
									}
									HX_STACK_LINE(510)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(510)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									if ((tmp22)){
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(510)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(510)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(510)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(510)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(510)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(510)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(510)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(510)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(510)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(510)
											if ((tmp31)){
												HX_STACK_LINE(510)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(510)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(510)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(510)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(510)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(510)
													this3 = tmp35;
													HX_STACK_LINE(510)
													tmp33 = this3;
												}
												HX_STACK_LINE(510)
												_this->buffer = tmp33;
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(510)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(510)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(510)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(510)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(510)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(510)
											_this->byteLength = tmp32;
											HX_STACK_LINE(510)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(510)
											_this->length = srcLength;
											HX_STACK_LINE(510)
											tmp23 = _this;
										}
										HX_STACK_LINE(510)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(510)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										if ((tmp23)){
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											{
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)6);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(510)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(510)
												if ((tmp26)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(510)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(510)
												if ((tmp28)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(510)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(510)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(510)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(510)
												if ((tmp29)){
													HX_STACK_LINE(510)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(510)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(510)
													if ((tmp33)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(510)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(510)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(510)
												_this->buffer = buffer;
												HX_STACK_LINE(510)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(510)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(510)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(510)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(510)
												_this->length = tmp31;
												HX_STACK_LINE(510)
												tmp24 = _this;
											}
											HX_STACK_LINE(510)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(510)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint16Array","\xea","\xc2","\x7c","\xde"));
										}
									}
								}
							}
							HX_STACK_LINE(510)
							tmp16 = this2;
						}
						;break;
						case (int)7: {
							HX_STACK_LINE(510)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(510)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(510)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							if ((tmp20)){
								HX_STACK_LINE(510)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)7);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(510)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								if ((tmp21)){
									HX_STACK_LINE(510)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									{
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(510)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(510)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(510)
										_this->length = tmp24;
										HX_STACK_LINE(510)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(510)
										_this->byteLength = tmp25;
										HX_STACK_LINE(510)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(510)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											this3 = tmp28;
											HX_STACK_LINE(510)
											tmp26 = this3;
										}
										HX_STACK_LINE(510)
										_this->buffer = tmp26;
										HX_STACK_LINE(510)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(510)
										tmp22 = _this;
									}
									HX_STACK_LINE(510)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(510)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									if ((tmp22)){
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(510)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(510)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(510)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(510)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(510)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(510)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(510)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(510)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(510)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(510)
											if ((tmp31)){
												HX_STACK_LINE(510)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(510)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(510)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(510)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(510)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(510)
													this3 = tmp35;
													HX_STACK_LINE(510)
													tmp33 = this3;
												}
												HX_STACK_LINE(510)
												_this->buffer = tmp33;
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(510)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(510)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(510)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(510)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(510)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(510)
											_this->byteLength = tmp32;
											HX_STACK_LINE(510)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(510)
											_this->length = srcLength;
											HX_STACK_LINE(510)
											tmp23 = _this;
										}
										HX_STACK_LINE(510)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(510)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										if ((tmp23)){
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											{
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)7);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(510)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(510)
												if ((tmp26)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(510)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(510)
												if ((tmp28)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(510)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(510)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(510)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(510)
												if ((tmp29)){
													HX_STACK_LINE(510)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(510)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(510)
													if ((tmp33)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(510)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(510)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(510)
												_this->buffer = buffer;
												HX_STACK_LINE(510)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(510)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(510)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(510)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(510)
												_this->length = tmp31;
												HX_STACK_LINE(510)
												tmp24 = _this;
											}
											HX_STACK_LINE(510)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(510)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint32Array","\xf0","\x3e","\x3a","\x98"));
										}
									}
								}
							}
							HX_STACK_LINE(510)
							tmp16 = this2;
						}
						;break;
						case (int)8: {
							HX_STACK_LINE(510)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(510)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(510)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							if ((tmp20)){
								HX_STACK_LINE(510)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(510)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								if ((tmp21)){
									HX_STACK_LINE(510)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									{
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(510)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(510)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(510)
										_this->length = tmp24;
										HX_STACK_LINE(510)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(510)
										_this->byteLength = tmp25;
										HX_STACK_LINE(510)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(510)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											this3 = tmp28;
											HX_STACK_LINE(510)
											tmp26 = this3;
										}
										HX_STACK_LINE(510)
										_this->buffer = tmp26;
										HX_STACK_LINE(510)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(510)
										tmp22 = _this;
									}
									HX_STACK_LINE(510)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(510)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									if ((tmp22)){
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(510)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(510)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(510)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(510)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(510)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(510)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(510)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(510)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(510)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(510)
											if ((tmp31)){
												HX_STACK_LINE(510)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(510)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(510)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(510)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(510)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(510)
													this3 = tmp35;
													HX_STACK_LINE(510)
													tmp33 = this3;
												}
												HX_STACK_LINE(510)
												_this->buffer = tmp33;
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(510)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(510)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(510)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(510)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(510)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(510)
											_this->byteLength = tmp32;
											HX_STACK_LINE(510)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(510)
											_this->length = srcLength;
											HX_STACK_LINE(510)
											tmp23 = _this;
										}
										HX_STACK_LINE(510)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(510)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										if ((tmp23)){
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											{
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(510)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(510)
												if ((tmp26)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(510)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(510)
												if ((tmp28)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(510)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(510)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(510)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(510)
												if ((tmp29)){
													HX_STACK_LINE(510)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(510)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(510)
													if ((tmp33)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(510)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(510)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(510)
												_this->buffer = buffer;
												HX_STACK_LINE(510)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(510)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(510)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(510)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(510)
												_this->length = tmp31;
												HX_STACK_LINE(510)
												tmp24 = _this;
											}
											HX_STACK_LINE(510)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(510)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
										}
									}
								}
							}
							HX_STACK_LINE(510)
							tmp16 = this2;
						}
						;break;
						case (int)9: {
							HX_STACK_LINE(510)
							::haxe::io::Bytes tmp19 = this1->buffer;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(510)
							::haxe::io::Bytes buffer = tmp19;		HX_STACK_VAR(buffer,"buffer");
							HX_STACK_LINE(510)
							::lime::utils::ArrayBufferView this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(510)
							bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(510)
							if ((tmp20)){
								HX_STACK_LINE(510)
								::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)9);		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								this2 = tmp21;
							}
							else{
								HX_STACK_LINE(510)
								bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(510)
								if ((tmp21)){
									HX_STACK_LINE(510)
									::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									{
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(510)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(510)
										int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(510)
										_this->length = tmp24;
										HX_STACK_LINE(510)
										int tmp25 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(510)
										_this->byteLength = tmp25;
										HX_STACK_LINE(510)
										::haxe::io::Bytes tmp26;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
											HX_STACK_LINE(510)
											int tmp27 = _this->byteLength;		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp28 = ::haxe::io::Bytes_obj::alloc(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											this3 = tmp28;
											HX_STACK_LINE(510)
											tmp26 = this3;
										}
										HX_STACK_LINE(510)
										_this->buffer = tmp26;
										HX_STACK_LINE(510)
										_this->copyFromArray(((Array< Float >)(null())),null());
										HX_STACK_LINE(510)
										tmp22 = _this;
									}
									HX_STACK_LINE(510)
									this2 = tmp22;
								}
								else{
									HX_STACK_LINE(510)
									bool tmp22 = false;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(510)
									if ((tmp22)){
										HX_STACK_LINE(510)
										::lime::utils::ArrayBufferView tmp23;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										{
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView _this = tmp24;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(510)
											::haxe::io::Bytes tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
											HX_STACK_LINE(510)
											::haxe::io::Bytes srcData = tmp25;		HX_STACK_VAR(srcData,"srcData");
											HX_STACK_LINE(510)
											int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(510)
											int srcLength = tmp26;		HX_STACK_VAR(srcLength,"srcLength");
											HX_STACK_LINE(510)
											int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
											HX_STACK_LINE(510)
											int srcByteOffset = tmp27;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
											HX_STACK_LINE(510)
											int tmp28 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(510)
											int srcElementSize = tmp28;		HX_STACK_VAR(srcElementSize,"srcElementSize");
											HX_STACK_LINE(510)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(510)
											int tmp29 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(510)
											int tmp30 = _this->type;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(510)
											bool tmp31 = (tmp29 == tmp30);		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(510)
											if ((tmp31)){
												HX_STACK_LINE(510)
												int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
												HX_STACK_LINE(510)
												int tmp32 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(510)
												int cloneLength = tmp32;		HX_STACK_VAR(cloneLength,"cloneLength");
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp33;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(510)
												{
													HX_STACK_LINE(510)
													::haxe::io::Bytes this3;		HX_STACK_VAR(this3,"this3");
													HX_STACK_LINE(510)
													int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
													HX_STACK_LINE(510)
													::haxe::io::Bytes tmp35 = ::haxe::io::Bytes_obj::alloc(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
													HX_STACK_LINE(510)
													this3 = tmp35;
													HX_STACK_LINE(510)
													tmp33 = this3;
												}
												HX_STACK_LINE(510)
												_this->buffer = tmp33;
												HX_STACK_LINE(510)
												::haxe::io::Bytes tmp34 = srcData;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(510)
												int tmp35 = srcByteOffset;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(510)
												int tmp36 = cloneLength;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(510)
												_this->buffer->blit((int)0,tmp34,tmp35,tmp36);
											}
											else{
												HX_STACK_LINE(510)
												HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
											}
											HX_STACK_LINE(510)
											int tmp32 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(510)
											_this->byteLength = tmp32;
											HX_STACK_LINE(510)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(510)
											_this->length = srcLength;
											HX_STACK_LINE(510)
											tmp23 = _this;
										}
										HX_STACK_LINE(510)
										this2 = tmp23;
									}
									else{
										HX_STACK_LINE(510)
										bool tmp23 = (buffer != null());		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(510)
										if ((tmp23)){
											HX_STACK_LINE(510)
											::lime::utils::ArrayBufferView tmp24;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(510)
											{
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView tmp25 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)9);		HX_STACK_VAR(tmp25,"tmp25");
												HX_STACK_LINE(510)
												::lime::utils::ArrayBufferView _this = tmp25;		HX_STACK_VAR(_this,"_this");
												HX_STACK_LINE(510)
												bool tmp26 = (byte_offset < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
												HX_STACK_LINE(510)
												if ((tmp26)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int tmp27 = hx::Mod(byte_offset,_this->bytesPerElement);		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(510)
												bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(510)
												if ((tmp28)){
													HX_STACK_LINE(510)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(510)
												int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
												HX_STACK_LINE(510)
												int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
												HX_STACK_LINE(510)
												int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
												HX_STACK_LINE(510)
												bool tmp29 = (len == null());		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(510)
												if ((tmp29)){
													HX_STACK_LINE(510)
													int tmp30 = (bufferByteLength - byte_offset);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													bool tmp32 = (tmp31 != (int)0);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
													HX_STACK_LINE(510)
													bool tmp33 = (newByteLength < (int)0);		HX_STACK_VAR(tmp33,"tmp33");
													HX_STACK_LINE(510)
													if ((tmp33)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												else{
													HX_STACK_LINE(510)
													int tmp30 = (len * _this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
													HX_STACK_LINE(510)
													newByteLength = tmp30;
													HX_STACK_LINE(510)
													int tmp31 = (byte_offset + newByteLength);		HX_STACK_VAR(tmp31,"tmp31");
													HX_STACK_LINE(510)
													int newRange = tmp31;		HX_STACK_VAR(newRange,"newRange");
													HX_STACK_LINE(510)
													bool tmp32 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp32,"tmp32");
													HX_STACK_LINE(510)
													if ((tmp32)){
														HX_STACK_LINE(510)
														HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
													}
												}
												HX_STACK_LINE(510)
												_this->buffer = buffer;
												HX_STACK_LINE(510)
												_this->byteOffset = byte_offset;
												HX_STACK_LINE(510)
												_this->byteLength = newByteLength;
												HX_STACK_LINE(510)
												Float tmp30 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(510)
												int tmp31 = ::Std_obj::_int(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(510)
												_this->length = tmp31;
												HX_STACK_LINE(510)
												tmp24 = _this;
											}
											HX_STACK_LINE(510)
											this2 = tmp24;
										}
										else{
											HX_STACK_LINE(510)
											HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float64Array","\x8f","\xde","\x6b","\x1e"));
										}
									}
								}
							}
							HX_STACK_LINE(510)
							tmp16 = this2;
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(510)
							HX_STACK_DO_THROW(HX_HCSTRING("subarray on a blank ArrayBufferView","\x39","\x87","\xfd","\x19"));
						}
						;break;
					}
				}
				HX_STACK_LINE(510)
				::lime::utils::ArrayBufferView view = tmp16;		HX_STACK_VAR(view,"view");
				HX_STACK_LINE(510)
				tmp9 = view;
			}
			HX_STACK_LINE(510)
			::lime::utils::ArrayBufferView view = tmp9;		HX_STACK_VAR(view,"view");
			HX_STACK_LINE(511)
			::openfl::_internal::renderer::opengl::utils::VertexArray tmp10 = this->vertexArray;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(511)
			::lime::utils::ArrayBufferView tmp11 = view;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(511)
			tmp10->upload(tmp11);
		}
		HX_STACK_LINE(514)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State nextState;		HX_STACK_VAR(nextState,"nextState");
		HX_STACK_LINE(515)
		int batchSize = (int)0;		HX_STACK_VAR(batchSize,"batchSize");
		HX_STACK_LINE(516)
		int start = (int)0;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(518)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp9 = this->currentState;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(518)
		tmp9->shader = null();
		HX_STACK_LINE(519)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp10 = this->currentState;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(519)
		tmp10->shaderData = null();
		HX_STACK_LINE(520)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp11 = this->currentState;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(520)
		tmp11->texture = null();
		HX_STACK_LINE(521)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp12 = this->currentState;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(521)
		tmp12->textureSmooth = false;
		HX_STACK_LINE(522)
		::openfl::_internal::renderer::RenderSession tmp13 = this->renderSession;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(522)
		Dynamic tmp14 = tmp13->blendModeManager->currentBlendMode;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(522)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp15 = this->currentState;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(522)
		tmp15->blendMode = tmp14;
		HX_STACK_LINE(523)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp16 = this->currentState;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(523)
		tmp16->colorTransform = null();
		HX_STACK_LINE(524)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp17 = this->currentState;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(524)
		tmp17->skipColorTransformAlpha = false;
		HX_STACK_LINE(526)
		{
			HX_STACK_LINE(526)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(526)
			int tmp18 = this->batchedSprites;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(526)
			int _g = tmp18;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(526)
			while((true)){
				HX_STACK_LINE(526)
				bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(526)
				bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(526)
				if ((tmp20)){
					HX_STACK_LINE(526)
					break;
				}
				HX_STACK_LINE(526)
				int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(526)
				int i = tmp21;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(528)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp22 = this->states->__get(i).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(528)
				nextState = tmp22;
				HX_STACK_LINE(530)
				::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp23 = this->currentState;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(530)
				tmp23->skipColorTransformAlpha = nextState->skipColorTransformAlpha;
				HX_STACK_LINE(532)
				bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(532)
				{
					HX_STACK_LINE(532)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp25 = this->currentState;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(532)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State other = tmp25;		HX_STACK_VAR(other,"other");
					HX_STACK_LINE(532)
					bool tmp26 = (nextState->shader == null());		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(532)
					bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(532)
					bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(532)
					if ((tmp27)){
						HX_STACK_LINE(532)
						tmp28 = (other->shader == null());
					}
					else{
						HX_STACK_LINE(532)
						tmp28 = false;
					}
					HX_STACK_LINE(532)
					bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(532)
					bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(532)
					bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(532)
					if ((tmp30)){
						HX_STACK_LINE(532)
						bool tmp32 = (nextState->shader != null());		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(532)
						bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(532)
						bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(532)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(532)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(532)
						bool tmp37 = tmp35;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(532)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(532)
						if ((tmp38)){
							HX_STACK_LINE(532)
							bool tmp39 = (other->shader != null());		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(532)
							bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(532)
							tmp36 = tmp40;
						}
						else{
							HX_STACK_LINE(532)
							tmp36 = false;
						}
						HX_STACK_LINE(532)
						bool tmp39 = tmp36;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(532)
						bool tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(532)
						if ((tmp40)){
							HX_STACK_LINE(532)
							int tmp41 = nextState->shader->ID;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(532)
							int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(532)
							int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(532)
							int tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(532)
							int tmp45 = other->shader->ID;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(532)
							int tmp46 = tmp45;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(532)
							int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(532)
							int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(532)
							tmp31 = (tmp44 == tmp48);
						}
						else{
							HX_STACK_LINE(532)
							tmp31 = false;
						}
					}
					else{
						HX_STACK_LINE(532)
						tmp31 = true;
					}
					HX_STACK_LINE(532)
					bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(532)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(532)
					if ((tmp32)){
						HX_STACK_LINE(532)
						tmp33 = (nextState->texture == other->texture);
					}
					else{
						HX_STACK_LINE(532)
						tmp33 = false;
					}
					HX_STACK_LINE(532)
					bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(532)
					bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(532)
					if ((tmp34)){
						HX_STACK_LINE(532)
						tmp35 = (nextState->textureSmooth == other->textureSmooth);
					}
					else{
						HX_STACK_LINE(532)
						tmp35 = false;
					}
					HX_STACK_LINE(532)
					bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(532)
					bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(532)
					if ((tmp36)){
						HX_STACK_LINE(532)
						tmp37 = (nextState->blendMode == other->blendMode);
					}
					else{
						HX_STACK_LINE(532)
						tmp37 = false;
					}
					HX_STACK_LINE(532)
					if ((tmp37)){
						HX_STACK_LINE(532)
						bool tmp38 = nextState->skipColorTransform;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(532)
						bool tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(532)
						bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(532)
						bool tmp41 = tmp39;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(532)
						if ((tmp41)){
							HX_STACK_LINE(532)
							tmp40 = other->skipColorTransform;
						}
						else{
							HX_STACK_LINE(532)
							tmp40 = false;
						}
						HX_STACK_LINE(532)
						bool tmp42 = tmp40;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(532)
						bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(532)
						bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(532)
						bool tmp45 = tmp44;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(532)
						if ((tmp45)){
							HX_STACK_LINE(532)
							bool tmp46 = nextState->skipColorTransform;		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(532)
							bool tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(532)
							bool tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(532)
							bool tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(532)
							bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(532)
							bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(532)
							bool tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(532)
							bool tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(532)
							bool tmp54;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(532)
							bool tmp55 = tmp53;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(532)
							bool tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(532)
							if ((tmp56)){
								HX_STACK_LINE(532)
								bool tmp57 = other->skipColorTransform;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(532)
								bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(532)
								bool tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(532)
								bool tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(532)
								bool tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(532)
								bool tmp62 = !(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(532)
								bool tmp63 = tmp62;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(532)
								tmp54 = tmp63;
							}
							else{
								HX_STACK_LINE(532)
								tmp54 = false;
							}
							HX_STACK_LINE(532)
							bool tmp57 = tmp54;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(532)
							bool tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
							HX_STACK_LINE(532)
							if ((tmp58)){
								HX_STACK_LINE(532)
								::openfl::geom::ColorTransform tmp59 = other->colorTransform;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(532)
								bool tmp60 = nextState->skipColorTransformAlpha;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(532)
								::openfl::geom::ColorTransform tmp61 = tmp59;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(532)
								bool tmp62 = tmp60;		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(532)
								::openfl::geom::ColorTransform tmp63 = tmp61;		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(532)
								bool tmp64 = tmp62;		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(532)
								::openfl::geom::ColorTransform tmp65 = tmp63;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(532)
								bool tmp66 = tmp64;		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(532)
								tmp24 = nextState->colorTransform->__equals(tmp65,tmp66);
							}
							else{
								HX_STACK_LINE(532)
								tmp24 = false;
							}
						}
						else{
							HX_STACK_LINE(532)
							tmp24 = true;
						}
					}
					else{
						HX_STACK_LINE(532)
						tmp24 = false;
					}
				}
				HX_STACK_LINE(532)
				bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(532)
				if ((tmp25)){
					HX_STACK_LINE(534)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp26 = this->currentState;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(534)
					int tmp27 = batchSize;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(534)
					int tmp28 = start;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(534)
					this->renderBatch(tmp26,tmp27,tmp28);
					HX_STACK_LINE(536)
					start = i;
					HX_STACK_LINE(537)
					batchSize = (int)0;
					HX_STACK_LINE(539)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp29 = this->currentState;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(539)
					tmp29->shader = nextState->shader;
					HX_STACK_LINE(540)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp30 = this->currentState;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(540)
					tmp30->shaderData = nextState->shaderData;
					HX_STACK_LINE(541)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp31 = this->currentState;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(541)
					tmp31->texture = nextState->texture;
					HX_STACK_LINE(542)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp32 = this->currentState;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(542)
					tmp32->textureSmooth = nextState->textureSmooth;
					HX_STACK_LINE(543)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp33 = this->currentState;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(543)
					tmp33->blendMode = nextState->blendMode;
					HX_STACK_LINE(544)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp34 = this->currentState;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(544)
					tmp34->skipColorTransform = nextState->skipColorTransform;
					HX_STACK_LINE(545)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp35 = this->currentState;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(545)
					bool tmp36 = tmp35->skipColorTransform;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(545)
					::openfl::geom::ColorTransform tmp37;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(545)
					if ((tmp36)){
						HX_STACK_LINE(545)
						tmp37 = null();
					}
					else{
						HX_STACK_LINE(545)
						tmp37 = nextState->colorTransform;
					}
					HX_STACK_LINE(545)
					::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp38 = this->currentState;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(545)
					tmp38->colorTransform = tmp37;
				}
				HX_STACK_LINE(549)
				(batchSize)++;
			}
		}
		HX_STACK_LINE(552)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp18 = this->currentState;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(552)
		int tmp19 = batchSize;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(552)
		int tmp20 = start;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(552)
		this->renderBatch(tmp18,tmp19,tmp20);
		HX_STACK_LINE(553)
		this->batchedSprites = (int)0;
		HX_STACK_LINE(554)
		this->writtenVertexBytes = (int)0;
		HX_STACK_LINE(556)
		::openfl::geom::Rectangle tmp21 = this->clipRect;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(556)
		bool tmp22 = (tmp21 != null());		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(556)
		if ((tmp22)){
			HX_STACK_LINE(557)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call(this->gl->SCISSOR_TEST);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,flush,(void))

Void SpriteBatch_obj::renderBatch( ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state,int size,int start){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","renderBatch",0x8edfd34a,"openfl._internal.renderer.opengl.utils.SpriteBatch.renderBatch","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",563,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(start,"start")
		HX_STACK_LINE(564)
		bool tmp = (size == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(564)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(564)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(564)
		if ((tmp1)){
			HX_STACK_LINE(564)
			tmp2 = (state->texture == null());
		}
		else{
			HX_STACK_LINE(564)
			tmp2 = true;
		}
		HX_STACK_LINE(564)
		if ((tmp2)){
			HX_STACK_LINE(564)
			return null();
		}
		HX_STACK_LINE(566)
		bool tmp3 = (state->shader == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(566)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(566)
		if ((tmp3)){
			HX_STACK_LINE(566)
			::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(566)
			tmp4 = tmp5->shaderManager->defaultShader;
		}
		else{
			HX_STACK_LINE(566)
			tmp4 = state->shader;
		}
		HX_STACK_LINE(566)
		::openfl::_internal::renderer::opengl::shaders2::Shader shader = tmp4;		HX_STACK_VAR(shader,"shader");
		HX_STACK_LINE(567)
		::openfl::_internal::renderer::RenderSession tmp5 = this->renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(567)
		::openfl::_internal::renderer::opengl::shaders2::Shader tmp6 = shader;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(567)
		tmp5->shaderManager->setShader(tmp6,null());
		HX_STACK_LINE(570)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp7 = this->vertexArray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(570)
		shader->bindVertexArray(tmp7);
		HX_STACK_LINE(572)
		::openfl::_internal::renderer::RenderSession tmp8 = this->renderSession;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(572)
		bool tmp9 = (shader->blendMode != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(572)
		Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(572)
		if ((tmp9)){
			HX_STACK_LINE(572)
			tmp10 = shader->blendMode;
		}
		else{
			HX_STACK_LINE(572)
			tmp10 = state->blendMode;
		}
		HX_STACK_LINE(572)
		tmp8->blendModeManager->setBlendMode(tmp10,null());
		HX_STACK_LINE(574)
		{
			HX_STACK_LINE(574)
			int tmp11 = shader->getUniformLocation(HX_HCSTRING("openfl_uProjectionMatrix","\x16","\x8b","\xff","\x93"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(574)
			int location = tmp11;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(574)
			::openfl::_internal::renderer::RenderSession tmp12 = this->renderSession;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(574)
			::lime::utils::ArrayBufferView tmp13 = tmp12->projectionMatrix->toArray(true);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(574)
			::lime::utils::ArrayBufferView v = tmp13;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(574)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,false,hx::DynamicPtr(v->buffer),(int)3);
		}
		HX_STACK_LINE(576)
		bool tmp11 = (state->colorTransform != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(576)
		if ((tmp11)){
			HX_STACK_LINE(577)
			{
				HX_STACK_LINE(577)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uUseColorTransform","\x8a","\x6c","\x2b","\x8b"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(577)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(577)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,(int)1);
			}
			HX_STACK_LINE(578)
			::openfl::geom::ColorTransform ct = state->colorTransform;		HX_STACK_VAR(ct,"ct");
			HX_STACK_LINE(579)
			{
				HX_STACK_LINE(579)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uColorMultiplier","\x9e","\x72","\x0d","\x28"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(579)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(579)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,ct->redMultiplier,ct->greenMultiplier,ct->blueMultiplier,(  ((state->skipColorTransformAlpha)) ? Float((int)1) : Float(ct->alphaMultiplier) ));
			}
			HX_STACK_LINE(581)
			{
				HX_STACK_LINE(581)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uColorOffset","\x30","\x10","\x2f","\xe8"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(581)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(581)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,(Float(ct->redOffset) / Float(((Float)255.))),(Float(ct->greenOffset) / Float(((Float)255.))),(Float(ct->blueOffset) / Float(((Float)255.))),(Float(ct->alphaOffset) / Float(((Float)255.))));
			}
		}
		else{
			HX_STACK_LINE(584)
			{
				HX_STACK_LINE(584)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uUseColorTransform","\x8a","\x6c","\x2b","\x8b"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(584)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(584)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,(int)0);
			}
			HX_STACK_LINE(585)
			{
				HX_STACK_LINE(585)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uColorMultiplier","\x9e","\x72","\x0d","\x28"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(585)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(585)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,(int)1,(int)1,(int)1,(int)1);
			}
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uColorOffset","\x30","\x10","\x2f","\xe8"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(586)
				int location = tmp12;		HX_STACK_VAR(location,"location");
				HX_STACK_LINE(586)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,(int)0,(int)0,(int)0,(int)0);
			}
		}
		HX_STACK_LINE(589)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call(this->gl->TEXTURE0);
		HX_STACK_LINE(590)
		{
			HX_STACK_LINE(590)
			::lime::graphics::opengl::GLTexture texture = state->texture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(590)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(this->gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			int tmp12 = shader->getUniformLocation(HX_HCSTRING("openfl_uSampler0","\x0e","\x4f","\x96","\x4d"));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(591)
			int location = tmp12;		HX_STACK_VAR(location,"location");
			HX_STACK_LINE(591)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,(int)0);
		}
		HX_STACK_LINE(593)
		bool tmp12 = (shader->smooth != null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(593)
		bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(593)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(593)
		if ((tmp13)){
			HX_STACK_LINE(593)
			tmp14 = shader->smooth;
		}
		else{
			HX_STACK_LINE(593)
			tmp14 = false;
		}
		HX_STACK_LINE(593)
		bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(593)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(593)
		if ((tmp15)){
			HX_STACK_LINE(593)
			tmp16 = state->textureSmooth;
		}
		else{
			HX_STACK_LINE(593)
			tmp16 = true;
		}
		HX_STACK_LINE(593)
		if ((tmp16)){
			HX_STACK_LINE(594)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MAG_FILTER,this->gl->LINEAR);
			HX_STACK_LINE(595)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MIN_FILTER,this->gl->LINEAR);
		}
		else{
			HX_STACK_LINE(597)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MAG_FILTER,this->gl->NEAREST);
			HX_STACK_LINE(598)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_MIN_FILTER,this->gl->NEAREST);
		}
		HX_STACK_LINE(601)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_S,shader->wrapS);
		HX_STACK_LINE(602)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_T,shader->wrapT);
		HX_STACK_LINE(604)
		::haxe::ds::StringMap tmp17 = state->shaderData;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(604)
		::openfl::_internal::renderer::RenderSession tmp18 = this->renderSession;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(604)
		shader->applyData(tmp17,tmp18);
		HX_STACK_LINE(606)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_elements.call(this->gl->TRIANGLES,(size * (int)6),this->gl->UNSIGNED_SHORT,((start * (int)6) * (int)2));
		HX_STACK_LINE(608)
		::openfl::_internal::renderer::RenderSession tmp19 = this->renderSession;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(608)
		(tmp19->drawCount)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SpriteBatch_obj,renderBatch,(void))

Void SpriteBatch_obj::setState( int index,::lime::graphics::opengl::GLTexture texture,Dynamic __o_smooth,Dynamic blendMode,::openfl::geom::ColorTransform colorTransform,::openfl::display::Shader shader,Dynamic __o_skipAlpha){
Dynamic smooth = __o_smooth.Default(false);
Dynamic skipAlpha = __o_skipAlpha.Default(false);
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setState",0x7687c889,"openfl._internal.renderer.opengl.utils.SpriteBatch.setState","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",612,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(skipAlpha,"skipAlpha")
{
		HX_STACK_LINE(614)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp = this->states->__get(index).StaticCast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(614)
		::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State state = tmp;		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(615)
		bool tmp1 = (state == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(615)
		if ((tmp1)){
			HX_STACK_LINE(616)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp2 = ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(616)
			::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State tmp3 = this->states[index] = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(616)
			state = tmp3;
		}
		HX_STACK_LINE(618)
		state->texture = texture;
		HX_STACK_LINE(619)
		state->textureSmooth = smooth;
		HX_STACK_LINE(620)
		state->blendMode = blendMode;
		HX_STACK_LINE(623)
		bool tmp2 = (colorTransform != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(623)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(623)
		if ((tmp2)){
			HX_STACK_LINE(623)
			tmp3 = colorTransform->__isDefault();
		}
		else{
			HX_STACK_LINE(623)
			tmp3 = false;
		}
		HX_STACK_LINE(623)
		state->skipColorTransform = tmp3;
		HX_STACK_LINE(625)
		bool tmp4 = state->skipColorTransform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(625)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(625)
		if ((tmp5)){
			HX_STACK_LINE(626)
			state->colorTransform->redMultiplier = colorTransform->redMultiplier;
			HX_STACK_LINE(627)
			state->colorTransform->greenMultiplier = colorTransform->greenMultiplier;
			HX_STACK_LINE(628)
			state->colorTransform->blueMultiplier = colorTransform->blueMultiplier;
			HX_STACK_LINE(629)
			state->colorTransform->alphaMultiplier = colorTransform->alphaMultiplier;
			HX_STACK_LINE(630)
			state->colorTransform->redOffset = colorTransform->redOffset;
			HX_STACK_LINE(631)
			state->colorTransform->greenOffset = colorTransform->greenOffset;
			HX_STACK_LINE(632)
			state->colorTransform->blueOffset = colorTransform->blueOffset;
			HX_STACK_LINE(633)
			state->colorTransform->alphaOffset = colorTransform->alphaOffset;
		}
		HX_STACK_LINE(636)
		state->skipColorTransformAlpha = skipAlpha;
		HX_STACK_LINE(637)
		bool tmp6 = (shader == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(637)
		if ((tmp6)){
			HX_STACK_LINE(638)
			state->shader = null();
			HX_STACK_LINE(639)
			state->shaderData = null();
		}
		else{
			HX_STACK_LINE(641)
			state->shader = shader->__shader;
			HX_STACK_LINE(642)
			state->shaderData = shader->data;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(SpriteBatch_obj,setState,(void))

Void SpriteBatch_obj::setContext( ::lime::graphics::GLRenderContext gl){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","setContext",0xe1877667,"openfl._internal.renderer.opengl.utils.SpriteBatch.setContext","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",646,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gl,"gl")
		HX_STACK_LINE(647)
		this->gl = gl;
		HX_STACK_LINE(649)
		::openfl::_internal::renderer::opengl::utils::VertexArray tmp = this->vertexArray;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(649)
		::lime::graphics::GLRenderContext tmp1 = gl;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(649)
		::lime::utils::ArrayBufferView tmp2 = this->positions;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(649)
		tmp->setContext(tmp1,tmp2);
		HX_STACK_LINE(651)
		int tmp3 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(651)
		::lime::graphics::opengl::GLBuffer tmp4 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp3,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(651)
		this->indexBuffer = tmp4;
		HX_STACK_LINE(652)
		{
			HX_STACK_LINE(652)
			::lime::graphics::opengl::GLBuffer tmp5 = this->indexBuffer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(652)
			::lime::graphics::opengl::GLBuffer buffer = tmp5;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(652)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ELEMENT_ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(653)
		{
			HX_STACK_LINE(653)
			::lime::utils::ArrayBufferView tmp5 = this->indices;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(653)
			::lime::utils::ArrayBufferView data = tmp5;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(653)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call(gl->ELEMENT_ARRAY_BUFFER,hx::DynamicPtr(data->buffer),data->byteOffset,data->byteLength,gl->STATIC_DRAW);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpriteBatch_obj,setContext,(void))

Void SpriteBatch_obj::prepareShader( ::openfl::display::Shader flashShader,::openfl::display::BitmapData bd){
{
		HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","prepareShader",0x0c5ca052,"openfl._internal.renderer.opengl.utils.SpriteBatch.prepareShader","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",657,0x8289eb2d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flashShader,"flashShader")
		HX_STACK_ARG(bd,"bd")
		HX_STACK_LINE(658)
		bool tmp = (flashShader != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(658)
		if ((tmp)){
			HX_STACK_LINE(659)
			::lime::graphics::GLRenderContext tmp1 = this->gl;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(659)
			flashShader->__init(tmp1);
			HX_STACK_LINE(660)
			flashShader->__shader->wrapS = flashShader->repeatX;
			HX_STACK_LINE(661)
			flashShader->__shader->wrapT = flashShader->repeatY;
			HX_STACK_LINE(662)
			flashShader->__shader->smooth = flashShader->smooth;
			HX_STACK_LINE(663)
			flashShader->__shader->blendMode = flashShader->blendMode;
			HX_STACK_LINE(665)
			::String tmp2 = ::openfl::display::Shader_obj::uObjectSize;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(665)
			::openfl::display::GLShaderParameter tmp3 = flashShader->data->get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(665)
			::openfl::display::GLShaderParameter objSize = tmp3;		HX_STACK_VAR(objSize,"objSize");
			HX_STACK_LINE(666)
			::String tmp4 = ::openfl::display::Shader_obj::uTextureSize;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(666)
			::openfl::display::GLShaderParameter tmp5 = flashShader->data->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(666)
			::openfl::display::GLShaderParameter texSize = tmp5;		HX_STACK_VAR(texSize,"texSize");
			HX_STACK_LINE(667)
			bool tmp6 = (bd != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(667)
			if ((tmp6)){
				HX_STACK_LINE(668)
				int tmp7 = bd->width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(668)
				objSize->value[(int)0] = tmp7;
				HX_STACK_LINE(669)
				int tmp8 = bd->height;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(669)
				objSize->value[(int)1] = tmp8;
				HX_STACK_LINE(670)
				bool tmp9 = (bd->__pingPongTexture != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(670)
				if ((tmp9)){
					HX_STACK_LINE(671)
					::openfl::_internal::renderer::opengl::utils::RenderTexture tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(671)
					{
						HX_STACK_LINE(671)
						::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = bd->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(671)
						bool tmp11 = _this->__swapped;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(671)
						if ((tmp11)){
							HX_STACK_LINE(671)
							tmp10 = _this->__texture1;
						}
						else{
							HX_STACK_LINE(671)
							tmp10 = _this->__texture0;
						}
					}
					HX_STACK_LINE(671)
					int tmp11 = tmp10->__width;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(671)
					texSize->value[(int)0] = tmp11;
					HX_STACK_LINE(672)
					::openfl::_internal::renderer::opengl::utils::RenderTexture tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(672)
					{
						HX_STACK_LINE(672)
						::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = bd->__pingPongTexture;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(672)
						bool tmp13 = _this->__swapped;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(672)
						if ((tmp13)){
							HX_STACK_LINE(672)
							tmp12 = _this->__texture1;
						}
						else{
							HX_STACK_LINE(672)
							tmp12 = _this->__texture0;
						}
					}
					HX_STACK_LINE(672)
					int tmp13 = tmp12->__height;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(672)
					texSize->value[(int)1] = tmp13;
				}
				else{
					HX_STACK_LINE(674)
					int tmp10 = bd->width;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(674)
					texSize->value[(int)0] = tmp10;
					HX_STACK_LINE(675)
					int tmp11 = bd->height;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(675)
					texSize->value[(int)1] = tmp11;
				}
			}
			else{
				HX_STACK_LINE(678)
				objSize->value[(int)0] = (int)0;
				HX_STACK_LINE(679)
				objSize->value[(int)1] = (int)0;
				HX_STACK_LINE(680)
				texSize->value[(int)0] = (int)0;
				HX_STACK_LINE(681)
				texSize->value[(int)1] = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpriteBatch_obj,prepareShader,(void))

int SpriteBatch_obj::getElementsPerVertex( ){
	HX_STACK_FRAME("openfl._internal.renderer.opengl.utils.SpriteBatch","getElementsPerVertex",0x09fa41ee,"openfl._internal.renderer.opengl.utils.SpriteBatch.getElementsPerVertex","openfl/_internal/renderer/opengl/utils/SpriteBatch.hx",686,0x8289eb2d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(687)
	int r = (int)0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(689)
	{
		HX_STACK_LINE(689)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(689)
		Array< ::Dynamic > _g1 = this->attributes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(689)
		while((true)){
			HX_STACK_LINE(689)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(689)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(689)
			if ((tmp1)){
				HX_STACK_LINE(689)
				break;
			}
			HX_STACK_LINE(689)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::renderer::opengl::utils::VertexAttribute >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(689)
			::openfl::_internal::renderer::opengl::utils::VertexAttribute a = tmp2;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(689)
			++(_g);
			HX_STACK_LINE(690)
			bool tmp3 = a->enabled;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(690)
			if ((tmp3)){
				HX_STACK_LINE(690)
				int tmp4 = a->components;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(690)
				int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(690)
				{
					HX_STACK_LINE(690)
					int _g2 = a->type;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(690)
					int tmp6 = _g2;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(690)
					switch( (int)(tmp6)){
						case (int)5120: case (int)5121: {
							HX_STACK_LINE(690)
							tmp5 = (int)1;
						}
						;break;
						case (int)5122: case (int)5123: {
							HX_STACK_LINE(690)
							tmp5 = (int)2;
						}
						;break;
						default: {
							HX_STACK_LINE(690)
							tmp5 = (int)4;
						}
					}
				}
				HX_STACK_LINE(690)
				int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(690)
				Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(690)
				int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(690)
				hx::AddEq(r,tmp8);
			}
		}
	}
	HX_STACK_LINE(693)
	int tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(693)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(SpriteBatch_obj,getElementsPerVertex,return )

int SpriteBatch_obj::VERTS_PER_SPRITE;


SpriteBatch_obj::SpriteBatch_obj()
{
}

void SpriteBatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteBatch);
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(renderSession,"renderSession");
	HX_MARK_MEMBER_NAME(states,"states");
	HX_MARK_MEMBER_NAME(currentState,"currentState");
	HX_MARK_MEMBER_NAME(vertexArray,"vertexArray");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(clipRect,"clipRect");
	HX_MARK_MEMBER_NAME(maxSprites,"maxSprites");
	HX_MARK_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_MARK_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_MARK_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_MARK_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_MARK_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_MARK_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(attributes,"attributes");
	HX_MARK_MEMBER_NAME(enableColor,"enableColor");
	HX_MARK_MEMBER_NAME(lastEnableColor,"lastEnableColor");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(uvs,"uvs");
	HX_MARK_MEMBER_NAME(colorTransform,"colorTransform");
	HX_MARK_END_CLASS();
}

void SpriteBatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(renderSession,"renderSession");
	HX_VISIT_MEMBER_NAME(states,"states");
	HX_VISIT_MEMBER_NAME(currentState,"currentState");
	HX_VISIT_MEMBER_NAME(vertexArray,"vertexArray");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(indexBuffer,"indexBuffer");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(clipRect,"clipRect");
	HX_VISIT_MEMBER_NAME(maxSprites,"maxSprites");
	HX_VISIT_MEMBER_NAME(batchedSprites,"batchedSprites");
	HX_VISIT_MEMBER_NAME(vertexArraySize,"vertexArraySize");
	HX_VISIT_MEMBER_NAME(indexArraySize,"indexArraySize");
	HX_VISIT_MEMBER_NAME(maxElementsPerVertex,"maxElementsPerVertex");
	HX_VISIT_MEMBER_NAME(elementsPerVertex,"elementsPerVertex");
	HX_VISIT_MEMBER_NAME(writtenVertexBytes,"writtenVertexBytes");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(attributes,"attributes");
	HX_VISIT_MEMBER_NAME(enableColor,"enableColor");
	HX_VISIT_MEMBER_NAME(lastEnableColor,"lastEnableColor");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(uvs,"uvs");
	HX_VISIT_MEMBER_NAME(colorTransform,"colorTransform");
}

Dynamic SpriteBatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return gl; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { return uvs; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { return states; }
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		if (HX_FIELD_EQ(inName,"shader") ) { return shader; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return indices; }
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { return clipRect; }
		if (HX_FIELD_EQ(inName,"setState") ) { return setState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { return positions; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { return maxSprites; }
		if (HX_FIELD_EQ(inName,"attributes") ) { return attributes; }
		if (HX_FIELD_EQ(inName,"setContext") ) { return setContext_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { return vertexArray; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { return indexBuffer; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { return enableColor; }
		if (HX_FIELD_EQ(inName,"renderTiles") ) { return renderTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"renderBatch") ) { return renderBatch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { return currentState; }
		if (HX_FIELD_EQ(inName,"fillVertices") ) { return fillVertices_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { return renderSession; }
		if (HX_FIELD_EQ(inName,"prepareShader") ) { return prepareShader_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { return batchedSprites; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { return indexArraySize; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { return vertexArraySize; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { return lastEnableColor; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"renderBitmapData") ) { return renderBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"enableAttributes") ) { return enableAttributes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { return elementsPerVertex; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { return writtenVertexBytes; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { return maxElementsPerVertex; }
		if (HX_FIELD_EQ(inName,"getElementsPerVertex") ) { return getElementsPerVertex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpriteBatch_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast< ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { uvs=inValue.Cast< ::openfl::display::TextureUvs >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast< ::openfl::_internal::renderer::opengl::shaders2::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"clipRect") ) { clipRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxSprites") ) { maxSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"attributes") ) { attributes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"vertexArray") ) { vertexArray=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::VertexArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffer") ) { indexBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enableColor") ) { enableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentState") ) { currentState=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderSession") ) { renderSession=inValue.Cast< ::openfl::_internal::renderer::RenderSession >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"batchedSprites") ) { batchedSprites=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexArraySize") ) { indexArraySize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { colorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"vertexArraySize") ) { vertexArraySize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastEnableColor") ) { lastEnableColor=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"elementsPerVertex") ) { elementsPerVertex=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writtenVertexBytes") ) { writtenVertexBytes=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"maxElementsPerVertex") ) { maxElementsPerVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteBatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"));
	outFields->push(HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"));
	outFields->push(HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb"));
	outFields->push(HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"));
	outFields->push(HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"));
	outFields->push(HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"));
	outFields->push(HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"));
	outFields->push(HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9"));
	outFields->push(HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71"));
	outFields->push(HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87"));
	outFields->push(HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2"));
	outFields->push(HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82"));
	outFields->push(HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf"));
	outFields->push(HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3"));
	outFields->push(HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"));
	outFields->push(HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"));
	outFields->push(HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15"));
	outFields->push(HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("uvs","\xf2","\x2e","\x59","\x00"));
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(SpriteBatch_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::renderer::RenderSession*/ ,(int)offsetof(SpriteBatch_obj,renderSession),HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,states),HX_HCSTRING("states","\x42","\xd9","\xfb","\x05")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::_SpriteBatch::State*/ ,(int)offsetof(SpriteBatch_obj,currentState),HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::VertexArray*/ ,(int)offsetof(SpriteBatch_obj,vertexArray),HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(SpriteBatch_obj,positions),HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(SpriteBatch_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(SpriteBatch_obj,indexBuffer),HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(SpriteBatch_obj,indices),HX_HCSTRING("indices","\x27","\x47","\x54","\xe3")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,drawing),HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(SpriteBatch_obj,clipRect),HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxSprites),HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,batchedSprites),HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,vertexArraySize),HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,indexArraySize),HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,maxElementsPerVertex),HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,elementsPerVertex),HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf")},
	{hx::fsInt,(int)offsetof(SpriteBatch_obj,writtenVertexBytes),HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::shaders2::Shader*/ ,(int)offsetof(SpriteBatch_obj,shader),HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteBatch_obj,attributes),HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,enableColor),HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15")},
	{hx::fsBool,(int)offsetof(SpriteBatch_obj,lastEnableColor),HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(SpriteBatch_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::display::TextureUvs*/ ,(int)offsetof(SpriteBatch_obj,uvs),HX_HCSTRING("uvs","\xf2","\x2e","\x59","\x00")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(SpriteBatch_obj,colorTransform),HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SpriteBatch_obj::VERTS_PER_SPRITE,HX_HCSTRING("VERTS_PER_SPRITE","\x64","\x04","\x57","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("renderSession","\xa0","\x8a","\x85","\x8f"),
	HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"),
	HX_HCSTRING("currentState","\x18","\x5b","\x17","\xcb"),
	HX_HCSTRING("vertexArray","\x95","\x37","\xcb","\x39"),
	HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("indexBuffer","\xb2","\x65","\xa6","\xf5"),
	HX_HCSTRING("indices","\x27","\x47","\x54","\xe3"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("drawing","\x5e","\x3b","\xe8","\xfb"),
	HX_HCSTRING("clipRect","\x14","\x90","\x6a","\x58"),
	HX_HCSTRING("maxSprites","\x8a","\x22","\xaf","\xc9"),
	HX_HCSTRING("batchedSprites","\x35","\x23","\x1a","\x71"),
	HX_HCSTRING("vertexArraySize","\xf6","\xf2","\x13","\x87"),
	HX_HCSTRING("indexArraySize","\x88","\xcd","\xd4","\xb2"),
	HX_HCSTRING("maxElementsPerVertex","\xa6","\x4f","\xf4","\x82"),
	HX_HCSTRING("elementsPerVertex","\xea","\xd2","\xc7","\xbf"),
	HX_HCSTRING("writtenVertexBytes","\xd0","\x9e","\x8f","\xc3"),
	HX_HCSTRING("shader","\x25","\xbf","\x20","\x1d"),
	HX_HCSTRING("attributes","\xd7","\xa8","\x71","\x97"),
	HX_HCSTRING("enableColor","\xe0","\xb7","\x2b","\x15"),
	HX_HCSTRING("lastEnableColor","\x2a","\x59","\x68","\xb7"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("uvs","\xf2","\x2e","\x59","\x00"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("renderBitmapData","\xaf","\xec","\x66","\xde"),
	HX_HCSTRING("renderTiles","\x4f","\x2a","\xe6","\xdb"),
	HX_HCSTRING("fillVertices","\x9c","\x05","\x8a","\x6e"),
	HX_HCSTRING("enableAttributes","\x3a","\xbd","\x20","\x34"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("renderBatch","\x84","\x14","\x6c","\x79"),
	HX_HCSTRING("setState","\x0f","\xdf","\x3f","\x92"),
	HX_HCSTRING("setContext","\x6d","\xba","\x56","\x6c"),
	HX_HCSTRING("prepareShader","\x0c","\x24","\x67","\xe3"),
	HX_HCSTRING("getElementsPerVertex","\x74","\x09","\x3d","\xe7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SpriteBatch_obj::VERTS_PER_SPRITE,"VERTS_PER_SPRITE");
};

#endif

hx::Class SpriteBatch_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("VERTS_PER_SPRITE","\x64","\x04","\x57","\x9d"),
	::String(null()) };

void SpriteBatch_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.utils.SpriteBatch","\x34","\x8e","\xd7","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpriteBatch_obj >;
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

void SpriteBatch_obj::__boot()
{
	VERTS_PER_SPRITE= (int)4;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
} // end namespace utils
