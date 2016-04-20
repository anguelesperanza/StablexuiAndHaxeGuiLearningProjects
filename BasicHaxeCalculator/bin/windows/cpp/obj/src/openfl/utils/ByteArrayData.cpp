#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_lime_utils_LZMA
#include <lime/utils/LZMA.h>
#endif
#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
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
namespace utils{

Void ByteArrayData_obj::__construct(hx::Null< int >  __o_length)
{
HX_STACK_FRAME("openfl.utils.ByteArrayData","new",0x36383a32,"openfl.utils.ByteArrayData.new","openfl/utils/ByteArray.hx",240,0xaa5cee4a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_length,"length")
int length = __o_length.Default(0);
{
	HX_STACK_LINE(242)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(247)
	int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(247)
	super::__construct(tmp2,bytes->b);
	HX_STACK_LINE(250)
	this->__length = length;
	HX_STACK_LINE(251)
	this->__endian = ((Dynamic)((int)0));
	HX_STACK_LINE(252)
	this->position = (int)0;
}
;
	return null();
}

//ByteArrayData_obj::~ByteArrayData_obj() { }

Dynamic ByteArrayData_obj::__CreateEmpty() { return  new ByteArrayData_obj; }
hx::ObjectPtr< ByteArrayData_obj > ByteArrayData_obj::__new(hx::Null< int >  __o_length)
{  hx::ObjectPtr< ByteArrayData_obj > _result_ = new ByteArrayData_obj();
	_result_->__construct(__o_length);
	return _result_;}

Dynamic ByteArrayData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArrayData_obj > _result_ = new ByteArrayData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *ByteArrayData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::utils::IDataOutput_obj)) return operator ::openfl::utils::IDataOutput_obj *();
	if (inType==typeid( ::openfl::utils::IDataInput_obj)) return operator ::openfl::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

ByteArrayData_obj::operator ::openfl::utils::IDataOutput_obj *()
	{ return new ::openfl::utils::IDataOutput_delegate_< ByteArrayData_obj >(this); }
ByteArrayData_obj::operator ::openfl::utils::IDataInput_obj *()
	{ return new ::openfl::utils::IDataInput_delegate_< ByteArrayData_obj >(this); }
Void ByteArrayData_obj::clear( ){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","clear",0x0f8b73df,"openfl.utils.ByteArrayData.clear","openfl/utils/ByteArray.hx",257,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(259)
		this->__length = (int)0;
		HX_STACK_LINE(260)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,clear,(void))

Void ByteArrayData_obj::compress( Dynamic algorithm){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","compress",0xe3300490,"openfl.utils.ByteArrayData.compress","openfl/utils/ByteArray.hx",265,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(269)
		bool tmp = (algorithm == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		if ((tmp)){
			HX_STACK_LINE(271)
			algorithm = ((Dynamic)((int)2));
		}
		HX_STACK_LINE(275)
		bool tmp1 = (algorithm == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		if ((tmp1)){
			HX_STACK_LINE(277)
			::haxe::io::Bytes tmp2 = ::lime::utils::LZMA_obj::encode(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(277)
			::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(277)
			this->b = bytes->b;
			HX_STACK_LINE(277)
			this->length = bytes->length;
		}
		else{
			HX_STACK_LINE(281)
			bool tmp2 = (algorithm != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(281)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(281)
			if ((tmp2)){
				HX_STACK_LINE(281)
				Dynamic tmp4 = algorithm;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(281)
				switch( (int)(tmp4)){
					case (int)0: {
						HX_STACK_LINE(283)
						tmp3 = (int)-15;
					}
					;break;
					default: {
						HX_STACK_LINE(285)
						tmp3 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(285)
				tmp3 = (int)15;
			}
			HX_STACK_LINE(281)
			int windowBits = tmp3;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(292)
			{
				HX_STACK_LINE(292)
				::haxe::io::Bytes tmp4 = ::haxe::zip::Compress_obj::run(hx::ObjectPtr<OBJ_>(this),(int)8);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(292)
				::haxe::io::Bytes bytes = tmp4;		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(292)
				this->b = bytes->b;
				HX_STACK_LINE(292)
				this->length = bytes->length;
			}
		}
		HX_STACK_LINE(299)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(299)
		this->__length = tmp2;
		HX_STACK_LINE(300)
		int tmp3 = this->__length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(300)
		this->position = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,compress,(void))

Void ByteArrayData_obj::deflate( ){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","deflate",0x97ecc63d,"openfl.utils.ByteArrayData.deflate","openfl/utils/ByteArray.hx",307,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(307)
		this->compress(((Dynamic)((int)0)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,deflate,(void))

Void ByteArrayData_obj::inflate( ){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","inflate",0x010e5759,"openfl.utils.ByteArrayData.inflate","openfl/utils/ByteArray.hx",323,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(323)
		this->uncompress(((Dynamic)((int)0)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,inflate,(void))

bool ByteArrayData_obj::readBoolean( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readBoolean",0x98e809c4,"openfl.utils.ByteArrayData.readBoolean","openfl/utils/ByteArray.hx",328,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(330)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(330)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(330)
	if ((tmp2)){
		HX_STACK_LINE(332)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		{
			HX_STACK_LINE(332)
			int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(332)
			int pos = tmp4;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(332)
			tmp3 = this->b->__get(pos);
		}
		HX_STACK_LINE(332)
		bool tmp4 = (tmp3 != (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(332)
		return tmp4;
	}
	else{
		HX_STACK_LINE(336)
		::openfl::errors::EOFError tmp3 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(336)
		HX_STACK_DO_THROW(tmp3);
		HX_STACK_LINE(337)
		return false;
	}
	HX_STACK_LINE(330)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readBoolean,return )

int ByteArrayData_obj::readByte( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readByte",0xc88bb66c,"openfl.utils.ByteArrayData.readByte","openfl/utils/ByteArray.hx",344,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(346)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(346)
	int value = tmp;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(348)
	int tmp1 = (int(value) & int((int)128));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(348)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(348)
	if ((tmp2)){
		HX_STACK_LINE(350)
		int tmp3 = (value - (int)256);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(350)
		return tmp3;
	}
	else{
		HX_STACK_LINE(354)
		int tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(354)
		return tmp3;
	}
	HX_STACK_LINE(348)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readByte,return )

Void ByteArrayData_obj::readBytes( ::openfl::utils::ByteArrayData bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readBytes",0xb1b3e887,"openfl.utils.ByteArrayData.readBytes","openfl/utils/ByteArray.hx",361,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(363)
		bool tmp = (length == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		if ((tmp)){
			HX_STACK_LINE(363)
			int tmp1 = this->__length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(363)
			int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(363)
			int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(363)
			length = tmp3;
		}
		HX_STACK_LINE(365)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(365)
		int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(365)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(365)
		int tmp4 = this->__length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(365)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(365)
		if ((tmp5)){
			HX_STACK_LINE(367)
			::openfl::errors::EOFError tmp6 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(367)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(371)
		int tmp6 = bytes->__length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(371)
		int tmp7 = (offset + length);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(371)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(371)
		if ((tmp8)){
			HX_STACK_LINE(373)
			int tmp9 = (offset + length);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(373)
			bytes->__resize(tmp9);
		}
		HX_STACK_LINE(377)
		int tmp9 = offset;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(377)
		int tmp10 = this->position;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(377)
		int tmp11 = length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(377)
		bytes->blit(tmp9,hx::ObjectPtr<OBJ_>(this),tmp10,tmp11);
		HX_STACK_LINE(378)
		hx::AddEq(this->position,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArrayData_obj,readBytes,(void))

Float ByteArrayData_obj::readDouble( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readDouble",0xd7136375,"openfl.utils.ByteArrayData.readDouble","openfl/utils/ByteArray.hx",383,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(385)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(385)
	int tmp1 = (tmp + (int)8);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(385)
	int tmp2 = this->__length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(385)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(385)
	if ((tmp3)){
		HX_STACK_LINE(387)
		::openfl::errors::EOFError tmp4 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(387)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(391)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(392)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(392)
	{
		HX_STACK_LINE(392)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(392)
		int tmp6 = (tmp5 - (int)8);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(392)
		int pos = tmp6;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(392)
		bool tmp7 = (pos < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(392)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(392)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(392)
		if ((tmp8)){
			HX_STACK_LINE(392)
			int tmp10 = (pos + (int)8);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(392)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(392)
			int tmp12 = this->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(392)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(392)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(392)
			tmp9 = true;
		}
		HX_STACK_LINE(392)
		if ((tmp9)){
			HX_STACK_LINE(392)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(392)
		tmp4 = ::__hxcpp_memory_get_double(this->b,pos);
	}
	HX_STACK_LINE(392)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readDouble,return )

Float ByteArrayData_obj::readFloat( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readFloat",0xf6b2a5b8,"openfl.utils.ByteArrayData.readFloat","openfl/utils/ByteArray.hx",397,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(399)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(399)
	int tmp2 = this->__length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(399)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(399)
	if ((tmp3)){
		HX_STACK_LINE(401)
		::openfl::errors::EOFError tmp4 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(401)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(405)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(406)
	Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(406)
	{
		HX_STACK_LINE(406)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(406)
		int tmp6 = (tmp5 - (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(406)
		int pos = tmp6;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(406)
		bool tmp7 = (pos < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(406)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(406)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(406)
		if ((tmp8)){
			HX_STACK_LINE(406)
			int tmp10 = (pos + (int)4);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(406)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(406)
			int tmp12 = this->length;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(406)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(406)
			tmp9 = (tmp11 > tmp13);
		}
		else{
			HX_STACK_LINE(406)
			tmp9 = true;
		}
		HX_STACK_LINE(406)
		if ((tmp9)){
			HX_STACK_LINE(406)
			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
		}
		HX_STACK_LINE(406)
		tmp4 = ::__hxcpp_memory_get_float(this->b,pos);
	}
	HX_STACK_LINE(406)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readFloat,return )

int ByteArrayData_obj::readInt( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readInt",0xf7bc6e0b,"openfl.utils.ByteArrayData.readInt","openfl/utils/ByteArray.hx",411,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(413)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(413)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(414)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(414)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(415)
	int tmp2 = this->readUnsignedByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(415)
	int ch3 = tmp2;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(416)
	int tmp3 = this->readUnsignedByte();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(416)
	int ch4 = tmp3;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(418)
	Dynamic tmp4 = this->__endian;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(418)
	bool tmp5 = (tmp4 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(418)
	if ((tmp5)){
		HX_STACK_LINE(420)
		int tmp6 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(420)
		int tmp7 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(420)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(420)
		int tmp9 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(420)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(420)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(420)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(420)
		return tmp12;
	}
	else{
		HX_STACK_LINE(424)
		int tmp6 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(424)
		int tmp7 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(424)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(424)
		int tmp9 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(424)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(424)
		int tmp11 = ch4;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(424)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(424)
		return tmp12;
	}
	HX_STACK_LINE(418)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readInt,return )

::String ByteArrayData_obj::readMultiByte( int length,::String charSet){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readMultiByte",0x011f243d,"openfl.utils.ByteArrayData.readMultiByte","openfl/utils/ByteArray.hx",431,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(433)
	int tmp = length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(433)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(433)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArrayData_obj,readMultiByte,return )

int ByteArrayData_obj::readShort( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readShort",0x70436498,"openfl.utils.ByteArrayData.readShort","openfl/utils/ByteArray.hx",438,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(440)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(440)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(441)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(443)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(445)
	Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(445)
	bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(445)
	if ((tmp3)){
		HX_STACK_LINE(447)
		int tmp4 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(447)
		int tmp5 = ch1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(447)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(447)
		value = tmp6;
	}
	else{
		HX_STACK_LINE(451)
		int tmp4 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(451)
		int tmp5 = ch2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(451)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(451)
		value = tmp6;
	}
	HX_STACK_LINE(455)
	int tmp4 = (int(value) & int((int)32768));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(455)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(455)
	if ((tmp5)){
		HX_STACK_LINE(457)
		int tmp6 = (value - (int)65536);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(457)
		return tmp6;
	}
	else{
		HX_STACK_LINE(461)
		int tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(461)
		return tmp6;
	}
	HX_STACK_LINE(455)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readShort,return )

int ByteArrayData_obj::readUnsignedByte( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUnsignedByte",0x50ca6601,"openfl.utils.ByteArrayData.readUnsignedByte","openfl/utils/ByteArray.hx",468,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(470)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	int tmp1 = this->__length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(470)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(470)
	if ((tmp2)){
		HX_STACK_LINE(472)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(472)
		{
			HX_STACK_LINE(472)
			int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(472)
			int pos = tmp4;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(472)
			tmp3 = this->b->__get(pos);
		}
		HX_STACK_LINE(472)
		return tmp3;
	}
	else{
		HX_STACK_LINE(476)
		::openfl::errors::EOFError tmp3 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(476)
		HX_STACK_DO_THROW(tmp3);
		HX_STACK_LINE(477)
		return (int)0;
	}
	HX_STACK_LINE(470)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedByte,return )

int ByteArrayData_obj::readUnsignedInt( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUnsignedInt",0xac948816,"openfl.utils.ByteArrayData.readUnsignedInt","openfl/utils/ByteArray.hx",484,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(486)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(486)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(487)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(487)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(488)
	int tmp2 = this->readUnsignedByte();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(488)
	int ch3 = tmp2;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(489)
	int tmp3 = this->readUnsignedByte();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(489)
	int ch4 = tmp3;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(491)
	Dynamic tmp4 = this->__endian;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(491)
	bool tmp5 = (tmp4 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(491)
	if ((tmp5)){
		HX_STACK_LINE(493)
		int tmp6 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(493)
		int tmp7 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(493)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(493)
		int tmp9 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(493)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(493)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(493)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(493)
		return tmp12;
	}
	else{
		HX_STACK_LINE(497)
		int tmp6 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(497)
		int tmp7 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(497)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(497)
		int tmp9 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(497)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(497)
		int tmp11 = ch4;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(497)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(497)
		return tmp12;
	}
	HX_STACK_LINE(491)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedInt,return )

int ByteArrayData_obj::readUnsignedShort( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUnsignedShort",0x1ede5763,"openfl.utils.ByteArrayData.readUnsignedShort","openfl/utils/ByteArray.hx",504,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(506)
	int tmp = this->readUnsignedByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(506)
	int ch1 = tmp;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(507)
	int tmp1 = this->readUnsignedByte();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(507)
	int ch2 = tmp1;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(509)
	Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(509)
	if ((tmp3)){
		HX_STACK_LINE(511)
		int tmp4 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(511)
		int tmp5 = ch1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(511)
		int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(511)
		return tmp6;
	}
	else{
		HX_STACK_LINE(515)
		int tmp4 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(515)
		int tmp5 = ch2;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(515)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(515)
		return tmp6;
	}
	HX_STACK_LINE(509)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUnsignedShort,return )

::String ByteArrayData_obj::readUTF( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUTF",0xf7c57243,"openfl.utils.ByteArrayData.readUTF","openfl/utils/ByteArray.hx",522,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(524)
	int tmp = this->readUnsignedShort();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(524)
	int bytesCount = tmp;		HX_STACK_VAR(bytesCount,"bytesCount");
	HX_STACK_LINE(525)
	int tmp1 = bytesCount;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(525)
	::String tmp2 = this->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(525)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,readUTF,return )

::String ByteArrayData_obj::readUTFBytes( int length){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","readUTFBytes",0x87ebf328,"openfl.utils.ByteArrayData.readUTFBytes","openfl/utils/ByteArray.hx",530,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(532)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(532)
	int tmp1 = length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(532)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(532)
	int tmp3 = this->__length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(532)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(532)
	if ((tmp4)){
		HX_STACK_LINE(534)
		::openfl::errors::EOFError tmp5 = ::openfl::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(534)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(538)
	hx::AddEq(this->position,length);
	HX_STACK_LINE(540)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(540)
	int tmp6 = length;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(540)
	int tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(540)
	int tmp8 = length;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(540)
	::String tmp9 = this->getString(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(540)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,readUTFBytes,return )

Void ByteArrayData_obj::uncompress( Dynamic algorithm){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","uncompress",0xb44f8369,"openfl.utils.ByteArrayData.uncompress","openfl/utils/ByteArray.hx",545,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(549)
		bool tmp = (algorithm == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(549)
		if ((tmp)){
			HX_STACK_LINE(551)
			algorithm = ((Dynamic)((int)0));
		}
		HX_STACK_LINE(556)
		bool tmp1 = (algorithm == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(556)
		if ((tmp1)){
			HX_STACK_LINE(558)
			::haxe::io::Bytes tmp2 = ::lime::utils::LZMA_obj::decode(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(558)
			::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(558)
			this->b = bytes->b;
			HX_STACK_LINE(558)
			this->length = bytes->length;
		}
		else{
			HX_STACK_LINE(562)
			bool tmp2 = (algorithm != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(562)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(562)
			if ((tmp2)){
				HX_STACK_LINE(562)
				Dynamic tmp4 = algorithm;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(562)
				switch( (int)(tmp4)){
					case (int)0: {
						HX_STACK_LINE(564)
						tmp3 = (int)-15;
					}
					;break;
					default: {
						HX_STACK_LINE(566)
						tmp3 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(566)
				tmp3 = (int)15;
			}
			HX_STACK_LINE(562)
			int windowBits = tmp3;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(573)
			{
				HX_STACK_LINE(573)
				::haxe::io::Bytes tmp4 = ::haxe::zip::Uncompress_obj::run(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(573)
				::haxe::io::Bytes bytes = tmp4;		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(573)
				this->b = bytes->b;
				HX_STACK_LINE(573)
				this->length = bytes->length;
			}
		}
		HX_STACK_LINE(584)
		int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(584)
		this->__length = tmp2;
		HX_STACK_LINE(585)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,uncompress,(void))

Void ByteArrayData_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeBoolean",0x790a5b77,"openfl.utils.ByteArrayData.writeBoolean","openfl/utils/ByteArray.hx",590,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(592)
		bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(592)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(592)
		if ((tmp)){
			HX_STACK_LINE(592)
			tmp1 = (int)1;
		}
		else{
			HX_STACK_LINE(592)
			tmp1 = (int)0;
		}
		HX_STACK_LINE(592)
		this->writeByte(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeBoolean,(void))

Void ByteArrayData_obj::writeByte( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeByte",0x6d0ba6d9,"openfl.utils.ByteArrayData.writeByte","openfl/utils/ByteArray.hx",597,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(599)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(599)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(599)
		this->__resize(tmp1);
		HX_STACK_LINE(600)
		{
			HX_STACK_LINE(600)
			int tmp2 = (this->position)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(600)
			int pos = tmp2;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(600)
			int tmp3 = (int(value) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(600)
			this->b[pos] = tmp3;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeByte,(void))

Void ByteArrayData_obj::writeBytes( ::openfl::utils::ByteArrayData bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl.utils.ByteArrayData","writeBytes",0xfd26577a,"openfl.utils.ByteArrayData.writeBytes","openfl/utils/ByteArray.hx",605,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(607)
		::openfl::utils::ByteArrayData tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(607)
		int tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(607)
		bool tmp2 = (tmp1 == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(607)
		if ((tmp2)){
			HX_STACK_LINE(607)
			return null();
		}
		HX_STACK_LINE(608)
		bool tmp3 = (length == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(608)
		if ((tmp3)){
			HX_STACK_LINE(608)
			int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(608)
			{
				HX_STACK_LINE(608)
				::openfl::utils::ByteArrayData tmp5 = bytes;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(608)
				int tmp6 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(608)
				int a = tmp6;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(608)
				tmp4 = (a - offset);
			}
			HX_STACK_LINE(608)
			length = tmp4;
		}
		HX_STACK_LINE(610)
		int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(610)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(610)
		int tmp6 = length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(610)
		int tmp7 = (tmp5 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(610)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(610)
		this->__resize(tmp8);
		HX_STACK_LINE(611)
		int tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(611)
		::openfl::utils::ByteArrayData tmp10 = bytes;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(611)
		int tmp11 = offset;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(611)
		int tmp12 = length;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(611)
		this->blit(tmp9,tmp10,tmp11,tmp12);
		HX_STACK_LINE(613)
		int tmp13 = this->position;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(613)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(613)
		int tmp15 = length;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(613)
		int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(613)
		this->position = tmp16;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArrayData_obj,writeBytes,(void))

Void ByteArrayData_obj::writeDouble( Float value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeDouble",0x8fc20922,"openfl.utils.ByteArrayData.writeDouble","openfl/utils/ByteArray.hx",618,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(620)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(620)
		int tmp1 = (tmp + (int)8);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(620)
		this->__resize(tmp1);
		HX_STACK_LINE(621)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(621)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(621)
		this->setDouble(tmp2,tmp3);
		HX_STACK_LINE(622)
		hx::AddEq(this->position,(int)8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeDouble,(void))

Void ByteArrayData_obj::writeFloat( Float value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeFloat",0x422514ab,"openfl.utils.ByteArrayData.writeFloat","openfl/utils/ByteArray.hx",627,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(629)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(629)
		int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(629)
		this->__resize(tmp1);
		HX_STACK_LINE(630)
		int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(630)
		Float tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(630)
		this->setFloat(tmp2,tmp3);
		HX_STACK_LINE(631)
		hx::AddEq(this->position,(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeFloat,(void))

Void ByteArrayData_obj::writeInt( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeInt",0x83612a3e,"openfl.utils.ByteArrayData.writeInt","openfl/utils/ByteArray.hx",636,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(638)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(638)
		int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(638)
		this->__resize(tmp1);
		HX_STACK_LINE(640)
		Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(640)
		bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(640)
		if ((tmp3)){
			HX_STACK_LINE(642)
			{
				HX_STACK_LINE(642)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(642)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(642)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(642)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(643)
			{
				HX_STACK_LINE(643)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(643)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(643)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(643)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(644)
			{
				HX_STACK_LINE(644)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(644)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(644)
				int tmp5 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(644)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(645)
			{
				HX_STACK_LINE(645)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(645)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(645)
				int tmp5 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(645)
				this->b[pos] = tmp5;
			}
		}
		else{
			HX_STACK_LINE(649)
			{
				HX_STACK_LINE(649)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(649)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(649)
				int tmp5 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(649)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(650)
			{
				HX_STACK_LINE(650)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(650)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(650)
				int tmp5 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(650)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(651)
			{
				HX_STACK_LINE(651)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(651)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(651)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(651)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(652)
			{
				HX_STACK_LINE(652)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(652)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(652)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(652)
				this->b[pos] = tmp5;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeInt,(void))

Void ByteArrayData_obj::writeMultiByte( ::String value,::String charSet){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeMultiByte",0xebbf88b0,"openfl.utils.ByteArrayData.writeMultiByte","openfl/utils/ByteArray.hx",659,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(charSet,"charSet")
		HX_STACK_LINE(661)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(661)
		this->writeUTFBytes(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArrayData_obj,writeMultiByte,(void))

Void ByteArrayData_obj::writeShort( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeShort",0xbbb5d38b,"openfl.utils.ByteArrayData.writeShort","openfl/utils/ByteArray.hx",666,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(668)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(668)
		int tmp1 = (tmp + (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(668)
		this->__resize(tmp1);
		HX_STACK_LINE(670)
		Dynamic tmp2 = this->__endian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(670)
		bool tmp3 = (tmp2 == ((Dynamic)((int)1)));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(670)
		if ((tmp3)){
			HX_STACK_LINE(672)
			{
				HX_STACK_LINE(672)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(672)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(672)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(672)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(673)
			{
				HX_STACK_LINE(673)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(673)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(673)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(673)
				this->b[pos] = tmp5;
			}
		}
		else{
			HX_STACK_LINE(677)
			{
				HX_STACK_LINE(677)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(677)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(677)
				int tmp5 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(677)
				this->b[pos] = tmp5;
			}
			HX_STACK_LINE(678)
			{
				HX_STACK_LINE(678)
				int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(678)
				int pos = tmp4;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(678)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(678)
				this->b[pos] = tmp5;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeShort,(void))

Void ByteArrayData_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeUnsignedInt",0xcb6d2f49,"openfl.utils.ByteArrayData.writeUnsignedInt","openfl/utils/ByteArray.hx",685,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(687)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(687)
		this->writeInt(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUnsignedInt,(void))

Void ByteArrayData_obj::writeUTF( ::String value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeUTF",0x836a2e76,"openfl.utils.ByteArrayData.writeUTF","openfl/utils/ByteArray.hx",692,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(694)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(694)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(694)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(696)
		int tmp2 = bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(696)
		this->writeShort(tmp2);
		HX_STACK_LINE(697)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(697)
		::openfl::utils::ByteArrayData tmp4 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(697)
		this->writeBytes(tmp4,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUTF,(void))

Void ByteArrayData_obj::writeUTFBytes( ::String value){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","writeUTFBytes",0xc5d11e15,"openfl.utils.ByteArrayData.writeUTFBytes","openfl/utils/ByteArray.hx",702,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(704)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(704)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(704)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(705)
		::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(705)
		::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::ofString(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(705)
		::openfl::utils::ByteArrayData tmp4 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromArrayBuffer(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(705)
		this->writeBytes(tmp4,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,writeUTFBytes,(void))

Void ByteArrayData_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","__fromBytes",0x684ac753,"openfl.utils.ByteArrayData.__fromBytes","openfl/utils/ByteArray.hx",710,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(712)
		{
			HX_STACK_LINE(712)
			this->b = bytes->b;
			HX_STACK_LINE(712)
			this->length = bytes->length;
		}
		HX_STACK_LINE(713)
		this->__length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,__fromBytes,(void))

Void ByteArrayData_obj::__resize( int size){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","__resize",0x101b8202,"openfl.utils.ByteArrayData.__resize","openfl/utils/ByteArray.hx",718,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_LINE(720)
		int tmp = size;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(720)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(720)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(720)
		if ((tmp2)){
			HX_STACK_LINE(722)
			int tmp3 = (size + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(722)
			int tmp4 = (tmp3 * (int)3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(722)
			int tmp5 = (int(tmp4) >> int((int)1));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(722)
			::haxe::io::Bytes tmp6 = ::haxe::io::Bytes_obj::alloc(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(722)
			::haxe::io::Bytes bytes = tmp6;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(723)
			int tmp7 = this->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(723)
			bytes->blit((int)0,hx::ObjectPtr<OBJ_>(this),(int)0,tmp7);
			HX_STACK_LINE(724)
			{
				HX_STACK_LINE(724)
				this->b = bytes->b;
				HX_STACK_LINE(724)
				this->length = bytes->length;
			}
		}
		HX_STACK_LINE(728)
		int tmp3 = this->__length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(728)
		int tmp4 = size;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(728)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(728)
		if ((tmp5)){
			HX_STACK_LINE(730)
			this->__length = size;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,__resize,(void))

Void ByteArrayData_obj::__setData( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("openfl.utils.ByteArrayData","__setData",0xac6a7b1e,"openfl.utils.ByteArrayData.__setData","openfl/utils/ByteArray.hx",737,0xaa5cee4a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(739)
		this->b = bytes->b;
		HX_STACK_LINE(740)
		this->length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,__setData,(void))

int ByteArrayData_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","get_bytesAvailable",0x68329f15,"openfl.utils.ByteArrayData.get_bytesAvailable","openfl/utils/ByteArray.hx",756,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(758)
	int tmp = this->__length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(758)
	int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(758)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(758)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_bytesAvailable,return )

Dynamic ByteArrayData_obj::get_endian( ){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","get_endian",0x95dc5cd2,"openfl.utils.ByteArrayData.get_endian","openfl/utils/ByteArray.hx",763,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(765)
	Dynamic tmp = this->__endian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(765)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayData_obj,get_endian,return )

Dynamic ByteArrayData_obj::set_endian( Dynamic value){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","set_endian",0x9959fb46,"openfl.utils.ByteArrayData.set_endian","openfl/utils/ByteArray.hx",770,0xaa5cee4a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(772)
	Dynamic tmp = this->__endian = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(772)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,set_endian,return )

::openfl::utils::ByteArrayData ByteArrayData_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("openfl.utils.ByteArrayData","fromBytes",0x955585f3,"openfl.utils.ByteArrayData.fromBytes","openfl/utils/ByteArray.hx",312,0xaa5cee4a)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(314)
	::openfl::utils::ByteArrayData tmp = ::openfl::utils::ByteArrayData_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(314)
	::openfl::utils::ByteArrayData result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(315)
	::haxe::io::Bytes tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(315)
	result->__fromBytes(tmp1);
	HX_STACK_LINE(316)
	::openfl::utils::ByteArrayData tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(316)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArrayData_obj,fromBytes,return )


ByteArrayData_obj::ByteArrayData_obj()
{
}

void ByteArrayData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ByteArrayData);
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(position,"position");
	HX_MARK_MEMBER_NAME(__endian,"__endian");
	HX_MARK_MEMBER_NAME(__length,"__length");
	::haxe::io::Bytes_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ByteArrayData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(position,"position");
	HX_VISIT_MEMBER_NAME(__endian,"__endian");
	HX_VISIT_MEMBER_NAME(__length,"__length");
	::haxe::io::Bytes_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ByteArrayData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"__endian") ) { return __endian; }
		if (HX_FIELD_EQ(inName,"__length") ) { return __length; }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"__setData") ) { return __setData_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { if (inCallProp == hx::paccAlways) return get_bytesAvailable(); }
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return objectEncoding; }
		if (HX_FIELD_EQ(inName,"writeMultiByte") ) { return writeMultiByte_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteArrayData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
	}
	return false;
}

Dynamic ByteArrayData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp == hx::paccAlways) return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__endian") ) { __endian=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__length") ) { __length=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArrayData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"));
	outFields->push(HX_HCSTRING("endian","\x9b","\x98","\x88","\xfa"));
	outFields->push(HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("__endian","\xbb","\x03","\xb8","\xa2"));
	outFields->push(HX_HCSTRING("__length","\x06","\x00","\x37","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ByteArrayData_obj,objectEncoding),HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a")},
	{hx::fsInt,(int)offsetof(ByteArrayData_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ByteArrayData_obj,__endian),HX_HCSTRING("__endian","\xbb","\x03","\xb8","\xa2")},
	{hx::fsInt,(int)offsetof(ByteArrayData_obj,__length),HX_HCSTRING("__length","\x06","\x00","\x37","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("__endian","\xbb","\x03","\xb8","\xa2"),
	HX_HCSTRING("__length","\x06","\x00","\x37","\x47"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("deflate","\x6b","\x0b","\xfa","\xa2"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("readBoolean","\xf2","\x7d","\xea","\xd0"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readDouble","\x07","\x0f","\x47","\x2c"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readMultiByte","\xeb","\x7f","\xc9","\x15"),
	HX_HCSTRING("readShort","\x46","\xd1","\x0e","\x4d"),
	HX_HCSTRING("readUnsignedByte","\x13","\x0b","\xce","\x9b"),
	HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"),
	HX_HCSTRING("readUnsignedShort","\x11","\x22","\x0b","\x77"),
	HX_HCSTRING("readUTF","\x71","\xb7","\xd2","\x02"),
	HX_HCSTRING("readUTFBytes","\x3a","\x27","\x0f","\x52"),
	HX_HCSTRING("uncompress","\xfb","\x2e","\x83","\x09"),
	HX_HCSTRING("writeBoolean","\x89","\x8f","\x2d","\x43"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("writeDouble","\x50","\x7d","\xc4","\xc7"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeMultiByte","\x42","\x65","\x25","\xec"),
	HX_HCSTRING("writeShort","\x1d","\x7f","\xe9","\x10"),
	HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"),
	HX_HCSTRING("writeUTF","\x88","\x71","\xf9","\x23"),
	HX_HCSTRING("writeUTFBytes","\xc3","\x79","\x7b","\xda"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__setData","\xcc","\xe7","\x35","\x89"),
	HX_HCSTRING("get_bytesAvailable","\xa7","\x2c","\x37","\x37"),
	HX_HCSTRING("get_endian","\x64","\x08","\x10","\xeb"),
	HX_HCSTRING("set_endian","\xd8","\xa6","\x8d","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArrayData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArrayData_obj::__mClass,"__mClass");
};

#endif

hx::Class ByteArrayData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	::String(null()) };

void ByteArrayData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils.ByteArrayData","\x40","\xf9","\x66","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArrayData_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ByteArrayData_obj >;
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
} // end namespace utils
