#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace display3D{

Void VertexBuffer3D_obj::__construct(::openfl::display3D::Context3D context,::lime::graphics::opengl::GLBuffer glBuffer,int numVertices,int data32PerVertex,int bufferUsage)
{
HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","new",0xf0b52080,"openfl.display3D.VertexBuffer3D.new","openfl/display3D/VertexBuffer3D.hx",21,0xb1ad396e)
HX_STACK_THIS(this)
HX_STACK_ARG(context,"context")
HX_STACK_ARG(glBuffer,"glBuffer")
HX_STACK_ARG(numVertices,"numVertices")
HX_STACK_ARG(data32PerVertex,"data32PerVertex")
HX_STACK_ARG(bufferUsage,"bufferUsage")
{
	HX_STACK_LINE(23)
	this->context = context;
	HX_STACK_LINE(24)
	this->glBuffer = glBuffer;
	HX_STACK_LINE(25)
	this->numVertices = numVertices;
	HX_STACK_LINE(26)
	this->data32PerVertex = data32PerVertex;
	HX_STACK_LINE(27)
	this->bufferUsage = bufferUsage;
}
;
	return null();
}

//VertexBuffer3D_obj::~VertexBuffer3D_obj() { }

Dynamic VertexBuffer3D_obj::__CreateEmpty() { return  new VertexBuffer3D_obj; }
hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__new(::openfl::display3D::Context3D context,::lime::graphics::opengl::GLBuffer glBuffer,int numVertices,int data32PerVertex,int bufferUsage)
{  hx::ObjectPtr< VertexBuffer3D_obj > _result_ = new VertexBuffer3D_obj();
	_result_->__construct(context,glBuffer,numVertices,data32PerVertex,bufferUsage);
	return _result_;}

Dynamic VertexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexBuffer3D_obj > _result_ = new VertexBuffer3D_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void VertexBuffer3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","dispose",0x6b6860bf,"openfl.display3D.VertexBuffer3D.dispose","openfl/display3D/VertexBuffer3D.hx",32,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		::openfl::display3D::Context3D tmp = this->context;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		tmp->__deleteVertexBuffer(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer3D_obj,dispose,(void))

Void VertexBuffer3D_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData byteArray,int byteArrayOffset,int startOffset,int count){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromByteArray",0x0096a806,"openfl.display3D.VertexBuffer3D.uploadFromByteArray","openfl/display3D/VertexBuffer3D.hx",39,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_ARG(startOffset,"startOffset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(41)
		int tmp = this->data32PerVertex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		int bytesPerVertex = tmp1;		HX_STACK_VAR(bytesPerVertex,"bytesPerVertex");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			::lime::graphics::opengl::GLBuffer tmp2 = this->glBuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(43)
			::lime::graphics::opengl::GLBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(43)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34962,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(45)
		int tmp2 = (count * bytesPerVertex);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		int length = tmp2;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(46)
		int tmp3 = byteArrayOffset;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(46)
		int tmp4 = (startOffset * bytesPerVertex);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		int tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		int offset = tmp5;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(47)
		::lime::utils::ArrayBufferView float32Array;		HX_STACK_VAR(float32Array,"float32Array");
		HX_STACK_LINE(62)
		::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			::openfl::utils::ByteArrayData tmp7 = byteArray;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			cpp::ArrayBase array = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytesData(tmp7);		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(62)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(62)
			bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			if ((tmp8)){
				HX_STACK_LINE(62)
				::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				this1 = tmp9;
			}
			else{
				HX_STACK_LINE(62)
				bool tmp9 = (array != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				if ((tmp9)){
					HX_STACK_LINE(62)
					::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					{
						HX_STACK_LINE(62)
						::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(62)
						::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(62)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(62)
						_this->length = array->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
						HX_STACK_LINE(62)
						int tmp12 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(62)
						_this->byteLength = tmp12;
						HX_STACK_LINE(62)
						::haxe::io::Bytes tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(62)
						{
							HX_STACK_LINE(62)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(62)
							int tmp14 = _this->byteLength;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(62)
							::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::alloc(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(62)
							this2 = tmp15;
							HX_STACK_LINE(62)
							tmp13 = this2;
						}
						HX_STACK_LINE(62)
						_this->buffer = tmp13;
						HX_STACK_LINE(62)
						_this->copyFromArray(((Array< Float >)(array)),null());
						HX_STACK_LINE(62)
						tmp10 = _this;
					}
					HX_STACK_LINE(62)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(62)
					bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(62)
					if ((tmp10)){
						HX_STACK_LINE(62)
						::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(62)
						{
							HX_STACK_LINE(62)
							::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(62)
							::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(62)
							::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(62)
							::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(62)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(62)
							int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(62)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(62)
							int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(62)
							int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(62)
							int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(62)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(62)
							int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(62)
							int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(62)
							bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(62)
							if ((tmp19)){
								HX_STACK_LINE(62)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(62)
								int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(62)
								int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(62)
								::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(62)
								{
									HX_STACK_LINE(62)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(62)
									int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(62)
									::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(62)
									this2 = tmp23;
									HX_STACK_LINE(62)
									tmp21 = this2;
								}
								HX_STACK_LINE(62)
								_this->buffer = tmp21;
								HX_STACK_LINE(62)
								::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(62)
								int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(62)
								int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(62)
								_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
							}
							else{
								HX_STACK_LINE(62)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(62)
							int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(62)
							_this->byteLength = tmp20;
							HX_STACK_LINE(62)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(62)
							_this->length = srcLength;
							HX_STACK_LINE(62)
							tmp11 = _this;
						}
						HX_STACK_LINE(62)
						this1 = tmp11;
					}
					else{
						HX_STACK_LINE(62)
						bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(62)
						if ((tmp11)){
							HX_STACK_LINE(62)
							::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(62)
							{
								HX_STACK_LINE(62)
								::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(62)
								::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(62)
								bool tmp14 = (offset < (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(62)
								if ((tmp14)){
									HX_STACK_LINE(62)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(62)
								int tmp15 = hx::Mod(offset,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(62)
								bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(62)
								if ((tmp16)){
									HX_STACK_LINE(62)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(62)
								int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(62)
								int bufferByteLength = tmp17;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(62)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(62)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(62)
								bool tmp18 = (length == null());		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(62)
								if ((tmp18)){
									HX_STACK_LINE(62)
									int tmp19 = (bufferByteLength - offset);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(62)
									newByteLength = tmp19;
									HX_STACK_LINE(62)
									int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(62)
									bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(62)
									if ((tmp21)){
										HX_STACK_LINE(62)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(62)
									bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(62)
									if ((tmp22)){
										HX_STACK_LINE(62)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(62)
									int tmp19 = (length * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(62)
									newByteLength = tmp19;
									HX_STACK_LINE(62)
									int tmp20 = (offset + newByteLength);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(62)
									int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(62)
									bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(62)
									if ((tmp21)){
										HX_STACK_LINE(62)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(62)
								_this->buffer = null();
								HX_STACK_LINE(62)
								_this->byteOffset = offset;
								HX_STACK_LINE(62)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(62)
								Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(62)
								int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(62)
								_this->length = tmp20;
								HX_STACK_LINE(62)
								tmp12 = _this;
							}
							HX_STACK_LINE(62)
							this1 = tmp12;
						}
						else{
							HX_STACK_LINE(62)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(62)
			tmp6 = this1;
		}
		HX_STACK_LINE(62)
		float32Array = tmp6;
		HX_STACK_LINE(65)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call((int)34962,hx::DynamicPtr(float32Array->buffer),float32Array->byteOffset,float32Array->byteLength,this->bufferUsage);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer3D_obj,uploadFromByteArray,(void))

Void VertexBuffer3D_obj::uploadFromFloat32Array( ::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromFloat32Array",0xa0c31ae9,"openfl.display3D.VertexBuffer3D.uploadFromFloat32Array","openfl/display3D/VertexBuffer3D.hx",70,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			::lime::graphics::opengl::GLBuffer tmp = this->glBuffer;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(72)
			::lime::graphics::opengl::GLBuffer buffer = tmp;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(72)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34962,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(73)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call((int)34962,hx::DynamicPtr(data->buffer),data->byteOffset,data->byteLength,this->bufferUsage);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VertexBuffer3D_obj,uploadFromFloat32Array,(void))

Void VertexBuffer3D_obj::uploadFromVector( Array< Float > data,int startVertex,int numVertices){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromVector",0xcf228b0e,"openfl.display3D.VertexBuffer3D.uploadFromVector","openfl/display3D/VertexBuffer3D.hx",78,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(startVertex,"startVertex")
		HX_STACK_ARG(numVertices,"numVertices")
		HX_STACK_LINE(80)
		int tmp = this->data32PerVertex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		int tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		int bytesPerVertex = tmp1;		HX_STACK_VAR(bytesPerVertex,"bytesPerVertex");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			::lime::graphics::opengl::GLBuffer tmp2 = this->glBuffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(82)
			::lime::graphics::opengl::GLBuffer buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(82)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call((int)34962,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(84)
		int tmp2 = numVertices;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		int tmp3 = this->data32PerVertex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		int length = tmp4;		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(85)
		int offset = startVertex;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(86)
		::lime::utils::ArrayBufferView float32Array;		HX_STACK_VAR(float32Array,"float32Array");
		HX_STACK_LINE(97)
		::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(97)
			bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(97)
			if ((tmp6)){
				HX_STACK_LINE(97)
				::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)8);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(97)
				this1 = tmp7;
			}
			else{
				HX_STACK_LINE(97)
				bool tmp7 = (data != null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(97)
				if ((tmp7)){
					HX_STACK_LINE(97)
					::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(97)
					{
						HX_STACK_LINE(97)
						::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(97)
						::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(97)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(97)
						_this->length = data->length;
						HX_STACK_LINE(97)
						int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(97)
						_this->byteLength = tmp10;
						HX_STACK_LINE(97)
						::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(97)
						{
							HX_STACK_LINE(97)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(97)
							int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(97)
							::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(97)
							this2 = tmp13;
							HX_STACK_LINE(97)
							tmp11 = this2;
						}
						HX_STACK_LINE(97)
						_this->buffer = tmp11;
						HX_STACK_LINE(97)
						_this->copyFromArray(data,null());
						HX_STACK_LINE(97)
						tmp8 = _this;
					}
					HX_STACK_LINE(97)
					this1 = tmp8;
				}
				else{
					HX_STACK_LINE(97)
					bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(97)
					if ((tmp8)){
						HX_STACK_LINE(97)
						::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(97)
						{
							HX_STACK_LINE(97)
							::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(97)
							::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(97)
							::haxe::io::Bytes tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(97)
							::haxe::io::Bytes srcData = tmp11;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(97)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(97)
							int srcLength = tmp12;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(97)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(97)
							int srcByteOffset = tmp13;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(97)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(97)
							int srcElementSize = tmp14;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(97)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(97)
							int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(97)
							int tmp16 = _this->type;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(97)
							bool tmp17 = (tmp15 == tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(97)
							if ((tmp17)){
								HX_STACK_LINE(97)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(97)
								int tmp18 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(97)
								int cloneLength = tmp18;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(97)
								::haxe::io::Bytes tmp19;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(97)
								{
									HX_STACK_LINE(97)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(97)
									int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(97)
									::haxe::io::Bytes tmp21 = ::haxe::io::Bytes_obj::alloc(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(97)
									this2 = tmp21;
									HX_STACK_LINE(97)
									tmp19 = this2;
								}
								HX_STACK_LINE(97)
								_this->buffer = tmp19;
								HX_STACK_LINE(97)
								::haxe::io::Bytes tmp20 = srcData;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(97)
								int tmp21 = srcByteOffset;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(97)
								int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(97)
								_this->buffer->blit((int)0,tmp20,tmp21,tmp22);
							}
							else{
								HX_STACK_LINE(97)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(97)
							int tmp18 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(97)
							_this->byteLength = tmp18;
							HX_STACK_LINE(97)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(97)
							_this->length = srcLength;
							HX_STACK_LINE(97)
							tmp9 = _this;
						}
						HX_STACK_LINE(97)
						this1 = tmp9;
					}
					else{
						HX_STACK_LINE(97)
						bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(97)
						if ((tmp9)){
							HX_STACK_LINE(97)
							::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(97)
							{
								HX_STACK_LINE(97)
								::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(97)
								::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(97)
								bool tmp12 = (offset < (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(97)
								if ((tmp12)){
									HX_STACK_LINE(97)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(97)
								int tmp13 = hx::Mod(offset,_this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(97)
								bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(97)
								if ((tmp14)){
									HX_STACK_LINE(97)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(97)
								int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(97)
								int bufferByteLength = tmp15;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(97)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(97)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(97)
								bool tmp16 = (length == null());		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(97)
								if ((tmp16)){
									HX_STACK_LINE(97)
									int tmp17 = (bufferByteLength - offset);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(97)
									newByteLength = tmp17;
									HX_STACK_LINE(97)
									int tmp18 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(97)
									bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(97)
									if ((tmp19)){
										HX_STACK_LINE(97)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(97)
									bool tmp20 = (newByteLength < (int)0);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(97)
									if ((tmp20)){
										HX_STACK_LINE(97)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(97)
									int tmp17 = (length * _this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(97)
									newByteLength = tmp17;
									HX_STACK_LINE(97)
									int tmp18 = (offset + newByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(97)
									int newRange = tmp18;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(97)
									bool tmp19 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(97)
									if ((tmp19)){
										HX_STACK_LINE(97)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(97)
								_this->buffer = null();
								HX_STACK_LINE(97)
								_this->byteOffset = offset;
								HX_STACK_LINE(97)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(97)
								Float tmp17 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(97)
								int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(97)
								_this->length = tmp18;
								HX_STACK_LINE(97)
								tmp10 = _this;
							}
							HX_STACK_LINE(97)
							this1 = tmp10;
						}
						else{
							HX_STACK_LINE(97)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
						}
					}
				}
			}
			HX_STACK_LINE(97)
			tmp5 = this1;
		}
		HX_STACK_LINE(97)
		float32Array = tmp5;
		HX_STACK_LINE(100)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call((int)34962,hx::DynamicPtr(float32Array->buffer),float32Array->byteOffset,float32Array->byteLength,this->bufferUsage);
		HX_STACK_LINE(102)
		float32Array = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer3D_obj,uploadFromVector,(void))


VertexBuffer3D_obj::VertexBuffer3D_obj()
{
}

void VertexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer3D);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(data32PerVertex,"data32PerVertex");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(numVertices,"numVertices");
	HX_MARK_MEMBER_NAME(bufferUsage,"bufferUsage");
	HX_MARK_END_CLASS();
}

void VertexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(data32PerVertex,"data32PerVertex");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(numVertices,"numVertices");
	HX_VISIT_MEMBER_NAME(bufferUsage,"bufferUsage");
}

Dynamic VertexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return context; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return numVertices; }
		if (HX_FIELD_EQ(inName,"bufferUsage") ) { return bufferUsage; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { return data32PerVertex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"uploadFromFloat32Array") ) { return uploadFromFloat32Array_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bufferUsage") ) { bufferUsage=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { data32PerVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("data32PerVertex","\x98","\x35","\x56","\x8c"));
	outFields->push(HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"));
	outFields->push(HX_HCSTRING("numVertices","\x5f","\x10","\x2c","\x56"));
	outFields->push(HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(VertexBuffer3D_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,data32PerVertex),HX_HCSTRING("data32PerVertex","\x98","\x35","\x56","\x8c")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(VertexBuffer3D_obj,glBuffer),HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,numVertices),HX_HCSTRING("numVertices","\x5f","\x10","\x2c","\x56")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,bufferUsage),HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("data32PerVertex","\x98","\x35","\x56","\x8c"),
	HX_HCSTRING("glBuffer","\x05","\x35","\x83","\x93"),
	HX_HCSTRING("numVertices","\x5f","\x10","\x2c","\x56"),
	HX_HCSTRING("bufferUsage","\x01","\xf0","\x7a","\x47"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromFloat32Array","\x09","\xd7","\x7d","\xf0"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class VertexBuffer3D_obj::__mClass;

void VertexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.VertexBuffer3D","\x8e","\x20","\x03","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VertexBuffer3D_obj >;
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
} // end namespace display3D
