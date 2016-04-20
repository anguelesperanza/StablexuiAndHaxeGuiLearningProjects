#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BounceEaseOut
#include <motion/easing/BounceEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BounceEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.BounceEaseOut","new",0x46bb761f,"motion.easing.BounceEaseOut.new","motion/easing/Bounce.hx",109,0xc6b45fab)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BounceEaseOut_obj::~BounceEaseOut_obj() { }

Dynamic BounceEaseOut_obj::__CreateEmpty() { return  new BounceEaseOut_obj; }
hx::ObjectPtr< BounceEaseOut_obj > BounceEaseOut_obj::__new()
{  hx::ObjectPtr< BounceEaseOut_obj > _result_ = new BounceEaseOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic BounceEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BounceEaseOut_obj > _result_ = new BounceEaseOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *BounceEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

BounceEaseOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< BounceEaseOut_obj >(this); }
Float BounceEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BounceEaseOut","calculate",0xef1f9465,"motion.easing.BounceEaseOut.calculate","motion/easing/Bounce.hx",115,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(117)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		Float t = k;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(117)
		Float tmp1 = hx::DivEq(t,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		Float tmp2 = ((Float)0.36363636363636365);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(117)
		if ((tmp3)){
			HX_STACK_LINE(117)
			Float tmp4 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(117)
			Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(117)
			Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(117)
			Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(117)
			tmp = tmp7;
		}
		else{
			HX_STACK_LINE(117)
			Float tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(117)
			Float tmp5 = ((Float)0.72727272727272729);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(117)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(117)
			if ((tmp6)){
				HX_STACK_LINE(117)
				Float tmp7 = ((Float)0.54545454545454541);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(117)
				Float tmp8 = hx::SubEq(t,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(117)
				Float tmp9 = (((Float)7.5625) * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(117)
				Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(117)
				Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(117)
				Float tmp12 = (tmp11 + ((Float).75));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(117)
				Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(117)
				tmp = tmp13;
			}
			else{
				HX_STACK_LINE(117)
				Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(117)
				Float tmp8 = ((Float)0.90909090909090906);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(117)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(117)
				if ((tmp9)){
					HX_STACK_LINE(117)
					Float tmp10 = ((Float)0.81818181818181823);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(117)
					Float tmp11 = hx::SubEq(t,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(117)
					Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(117)
					Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(117)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(117)
					Float tmp15 = (tmp14 + ((Float).9375));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(117)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(117)
					tmp = tmp16;
				}
				else{
					HX_STACK_LINE(117)
					Float tmp10 = ((Float)0.95454545454545459);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(117)
					Float tmp11 = hx::SubEq(t,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(117)
					Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(117)
					Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(117)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(117)
					Float tmp15 = (tmp14 + ((Float).984375));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(117)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(117)
					tmp = tmp16;
				}
			}
		}
	}
	HX_STACK_LINE(117)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(BounceEaseOut_obj,calculate,return )

Float BounceEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BounceEaseOut","ease",0x9755ed4f,"motion.easing.BounceEaseOut.ease","motion/easing/Bounce.hx",122,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(124)
	Float tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		Float t1 = t;		HX_STACK_VAR(t1,"t1");
		HX_STACK_LINE(124)
		Float tmp1 = hx::DivEq(t1,d);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		Float tmp2 = ((Float)0.36363636363636365);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		if ((tmp3)){
			HX_STACK_LINE(124)
			Float tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			Float tmp5 = (((Float)7.5625) * t1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			Float tmp6 = t1;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			Float tmp8 = (tmp4 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			Float tmp9 = b;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(124)
			tmp = (tmp8 + tmp9);
		}
		else{
			HX_STACK_LINE(124)
			Float tmp4 = t1;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(124)
			Float tmp5 = ((Float)0.72727272727272729);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(124)
			if ((tmp6)){
				HX_STACK_LINE(124)
				Float tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(124)
				Float tmp8 = ((Float)0.54545454545454541);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(124)
				Float tmp9 = hx::SubEq(t1,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(124)
				Float tmp10 = (((Float)7.5625) * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(124)
				Float tmp11 = t1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(124)
				Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(124)
				Float tmp13 = (tmp12 + ((Float).75));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(124)
				Float tmp14 = (tmp7 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(124)
				Float tmp15 = b;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(124)
				tmp = (tmp14 + tmp15);
			}
			else{
				HX_STACK_LINE(124)
				Float tmp7 = t1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(124)
				Float tmp8 = ((Float)0.90909090909090906);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(124)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(124)
				if ((tmp9)){
					HX_STACK_LINE(124)
					Float tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(124)
					Float tmp11 = ((Float)0.81818181818181823);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(124)
					Float tmp12 = hx::SubEq(t1,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(124)
					Float tmp13 = (((Float)7.5625) * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(124)
					Float tmp14 = t1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(124)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(124)
					Float tmp16 = (tmp15 + ((Float).9375));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(124)
					Float tmp17 = (tmp10 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(124)
					Float tmp18 = b;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(124)
					tmp = (tmp17 + tmp18);
				}
				else{
					HX_STACK_LINE(124)
					Float tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(124)
					Float tmp11 = ((Float)0.95454545454545459);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(124)
					Float tmp12 = hx::SubEq(t1,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(124)
					Float tmp13 = (((Float)7.5625) * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(124)
					Float tmp14 = t1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(124)
					Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(124)
					Float tmp16 = (tmp15 + ((Float).984375));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(124)
					Float tmp17 = (tmp10 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(124)
					Float tmp18 = b;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(124)
					tmp = (tmp17 + tmp18);
				}
			}
		}
	}
	HX_STACK_LINE(124)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC4(BounceEaseOut_obj,ease,return )

Float BounceEaseOut_obj::_ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BounceEaseOut","_ease",0x62097b4c,"motion.easing.BounceEaseOut._ease","motion/easing/Bounce.hx",128,0xc6b45fab)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(129)
	Float tmp = hx::DivEq(t,d);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(129)
	Float tmp1 = ((Float)0.36363636363636365);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	if ((tmp2)){
		HX_STACK_LINE(130)
		Float tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		Float tmp4 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		Float tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		Float tmp7 = (tmp3 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		Float tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(130)
		return tmp9;
	}
	else{
		HX_STACK_LINE(131)
		Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(131)
		Float tmp4 = ((Float)0.72727272727272729);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(131)
		bool tmp5 = (tmp3 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(131)
		if ((tmp5)){
			HX_STACK_LINE(132)
			Float tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(132)
			Float tmp7 = ((Float)0.54545454545454541);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(132)
			Float tmp8 = hx::SubEq(t,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(132)
			Float tmp9 = (((Float)7.5625) * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(132)
			Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(132)
			Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(132)
			Float tmp12 = (tmp11 + ((Float).75));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(132)
			Float tmp13 = (tmp6 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(132)
			Float tmp14 = b;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(132)
			Float tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(132)
			return tmp15;
		}
		else{
			HX_STACK_LINE(133)
			Float tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(133)
			Float tmp7 = ((Float)0.90909090909090906);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(133)
			bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(133)
			if ((tmp8)){
				HX_STACK_LINE(134)
				Float tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(134)
				Float tmp10 = ((Float)0.81818181818181823);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(134)
				Float tmp11 = hx::SubEq(t,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(134)
				Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(134)
				Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(134)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(134)
				Float tmp15 = (tmp14 + ((Float).9375));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(134)
				Float tmp16 = (tmp9 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(134)
				Float tmp17 = b;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(134)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(134)
				return tmp18;
			}
			else{
				HX_STACK_LINE(136)
				Float tmp9 = c;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(136)
				Float tmp10 = ((Float)0.95454545454545459);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(136)
				Float tmp11 = hx::SubEq(t,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(136)
				Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(136)
				Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(136)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(136)
				Float tmp15 = (tmp14 + ((Float).984375));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(136)
				Float tmp16 = (tmp9 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(136)
				Float tmp17 = b;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(136)
				Float tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(136)
				return tmp18;
			}
		}
	}
	HX_STACK_LINE(129)
	return ((Float)0.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(BounceEaseOut_obj,_ease,return )


BounceEaseOut_obj::BounceEaseOut_obj()
{
}

Dynamic BounceEaseOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

bool BounceEaseOut_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	HX_MARK_MEMBER_NAME(BounceEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BounceEaseOut_obj::__mClass,"__mClass");
};

#endif

hx::Class BounceEaseOut_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_ease","\xcd","\xa7","\x1d","\xf6"),
	::String(null()) };

void BounceEaseOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.BounceEaseOut","\xad","\x7a","\xe8","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BounceEaseOut_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BounceEaseOut_obj >;
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
