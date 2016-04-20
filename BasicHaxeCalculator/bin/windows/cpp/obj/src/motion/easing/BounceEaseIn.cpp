#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BounceEaseIn
#include <motion/easing/BounceEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BounceEaseIn_obj::__construct()
{
HX_STACK_FRAME("motion.easing.BounceEaseIn","new",0x66965698,"motion.easing.BounceEaseIn.new","motion/easing/Bounce.hx",50,0xc6b45fab)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BounceEaseIn_obj::~BounceEaseIn_obj() { }

Dynamic BounceEaseIn_obj::__CreateEmpty() { return  new BounceEaseIn_obj; }
hx::ObjectPtr< BounceEaseIn_obj > BounceEaseIn_obj::__new()
{  hx::ObjectPtr< BounceEaseIn_obj > _result_ = new BounceEaseIn_obj();
	_result_->__construct();
	return _result_;}

Dynamic BounceEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BounceEaseIn_obj > _result_ = new BounceEaseIn_obj();
	_result_->__construct();
	return _result_;}

hx::Object *BounceEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

BounceEaseIn_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< BounceEaseIn_obj >(this); }
Float BounceEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BounceEaseIn","calculate",0xde07959e,"motion.easing.BounceEaseIn.calculate","motion/easing/Bounce.hx",56,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(57)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		Float tmp1 = ((int)1 - k);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		Float t = tmp1;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(57)
		Float tmp2 = hx::DivEq(t,(int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		Float tmp3 = ((Float)0.36363636363636365);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		bool tmp4 = (tmp2 < tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		if ((tmp4)){
			HX_STACK_LINE(57)
			Float tmp5 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(57)
			tmp = tmp8;
		}
		else{
			HX_STACK_LINE(57)
			Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(57)
			Float tmp6 = ((Float)0.72727272727272729);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(57)
			bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			if ((tmp7)){
				HX_STACK_LINE(57)
				Float tmp8 = ((Float)0.54545454545454541);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				Float tmp9 = hx::SubEq(t,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				Float tmp10 = (((Float)7.5625) * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(57)
				Float tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(57)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(57)
				Float tmp13 = (tmp12 + ((Float).75));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(57)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(57)
				tmp = tmp14;
			}
			else{
				HX_STACK_LINE(57)
				Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(57)
				Float tmp9 = ((Float)0.90909090909090906);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(57)
				bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(57)
				if ((tmp10)){
					HX_STACK_LINE(57)
					Float tmp11 = ((Float)0.81818181818181823);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(57)
					Float tmp12 = hx::SubEq(t,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(57)
					Float tmp13 = (((Float)7.5625) * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(57)
					Float tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(57)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(57)
					Float tmp16 = (tmp15 + ((Float).9375));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(57)
					Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(57)
					tmp = tmp17;
				}
				else{
					HX_STACK_LINE(57)
					Float tmp11 = ((Float)0.95454545454545459);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(57)
					Float tmp12 = hx::SubEq(t,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(57)
					Float tmp13 = (((Float)7.5625) * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(57)
					Float tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(57)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(57)
					Float tmp16 = (tmp15 + ((Float).984375));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(57)
					Float tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(57)
					tmp = tmp17;
				}
			}
		}
	}
	HX_STACK_LINE(57)
	Float tmp1 = ((int)1 - tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	Float tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BounceEaseIn_obj,calculate,return )

Float BounceEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BounceEaseIn","ease",0x56ff76b6,"motion.easing.BounceEaseIn.ease","motion/easing/Bounce.hx",61,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(62)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		Float tmp2 = (d - t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		Float t1 = tmp2;		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(62)
		Float tmp3 = hx::DivEq(t1,d);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		Float tmp4 = ((Float)0.36363636363636365);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(62)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		if ((tmp5)){
			HX_STACK_LINE(62)
			Float tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			Float tmp7 = (((Float)7.5625) * t1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			Float tmp8 = t1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(62)
			Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(62)
			tmp1 = tmp10;
		}
		else{
			HX_STACK_LINE(62)
			Float tmp6 = t1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			Float tmp7 = ((Float)0.72727272727272729);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(62)
			bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(62)
			if ((tmp8)){
				HX_STACK_LINE(62)
				Float tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				Float tmp10 = ((Float)0.54545454545454541);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				Float tmp11 = hx::SubEq(t1,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(62)
				Float tmp13 = t1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(62)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(62)
				Float tmp15 = (tmp14 + ((Float).75));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(62)
				Float tmp16 = (tmp9 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(62)
				tmp1 = tmp16;
			}
			else{
				HX_STACK_LINE(62)
				Float tmp9 = t1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				Float tmp10 = ((Float)0.90909090909090906);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				if ((tmp11)){
					HX_STACK_LINE(62)
					Float tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(62)
					Float tmp13 = ((Float)0.81818181818181823);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					Float tmp14 = hx::SubEq(t1,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(62)
					Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(62)
					Float tmp16 = t1;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(62)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(62)
					Float tmp18 = (tmp17 + ((Float).9375));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(62)
					Float tmp19 = (tmp12 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(62)
					tmp1 = tmp19;
				}
				else{
					HX_STACK_LINE(62)
					Float tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(62)
					Float tmp13 = ((Float)0.95454545454545459);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(62)
					Float tmp14 = hx::SubEq(t1,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(62)
					Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(62)
					Float tmp16 = t1;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(62)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(62)
					Float tmp18 = (tmp17 + ((Float).984375));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(62)
					Float tmp19 = (tmp12 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(62)
					tmp1 = tmp19;
				}
			}
		}
	}
	HX_STACK_LINE(62)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(62)
	Float tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(62)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC4(BounceEaseIn_obj,ease,return )

Float BounceEaseIn_obj::_ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BounceEaseIn","_ease",0x56b82c05,"motion.easing.BounceEaseIn._ease","motion/easing/Bounce.hx",65,0xc6b45fab)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(66)
	Float tmp = c;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		Float tmp2 = (d - t);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		Float t1 = tmp2;		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(66)
		Float tmp3 = hx::DivEq(t1,d);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		Float tmp4 = ((Float)0.36363636363636365);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		if ((tmp5)){
			HX_STACK_LINE(66)
			Float tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			Float tmp7 = (((Float)7.5625) * t1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(66)
			Float tmp8 = t1;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(66)
			Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(66)
			Float tmp10 = (tmp6 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(66)
			tmp1 = tmp10;
		}
		else{
			HX_STACK_LINE(66)
			Float tmp6 = t1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(66)
			Float tmp7 = ((Float)0.72727272727272729);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(66)
			bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(66)
			if ((tmp8)){
				HX_STACK_LINE(66)
				Float tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(66)
				Float tmp10 = ((Float)0.54545454545454541);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(66)
				Float tmp11 = hx::SubEq(t1,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(66)
				Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(66)
				Float tmp13 = t1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(66)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(66)
				Float tmp15 = (tmp14 + ((Float).75));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(66)
				Float tmp16 = (tmp9 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(66)
				tmp1 = tmp16;
			}
			else{
				HX_STACK_LINE(66)
				Float tmp9 = t1;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(66)
				Float tmp10 = ((Float)0.90909090909090906);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(66)
				bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(66)
				if ((tmp11)){
					HX_STACK_LINE(66)
					Float tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(66)
					Float tmp13 = ((Float)0.81818181818181823);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(66)
					Float tmp14 = hx::SubEq(t1,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(66)
					Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(66)
					Float tmp16 = t1;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(66)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(66)
					Float tmp18 = (tmp17 + ((Float).9375));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(66)
					Float tmp19 = (tmp12 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(66)
					tmp1 = tmp19;
				}
				else{
					HX_STACK_LINE(66)
					Float tmp12 = c;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(66)
					Float tmp13 = ((Float)0.95454545454545459);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(66)
					Float tmp14 = hx::SubEq(t1,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(66)
					Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(66)
					Float tmp16 = t1;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(66)
					Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(66)
					Float tmp18 = (tmp17 + ((Float).984375));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(66)
					Float tmp19 = (tmp12 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(66)
					tmp1 = tmp19;
				}
			}
		}
	}
	HX_STACK_LINE(66)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	Float tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(BounceEaseIn_obj,_ease,return )


BounceEaseIn_obj::BounceEaseIn_obj()
{
}

Dynamic BounceEaseIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool BounceEaseIn_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { outValue = _ease_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BounceEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BounceEaseIn_obj::__mClass,"__mClass");
};

#endif

hx::Class BounceEaseIn_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_ease","\xcd","\xa7","\x1d","\xf6"),
	::String(null()) };

void BounceEaseIn_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.BounceEaseIn","\xa6","\x6a","\x59","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BounceEaseIn_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BounceEaseIn_obj >;
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

} // end namespace motion
} // end namespace easing
