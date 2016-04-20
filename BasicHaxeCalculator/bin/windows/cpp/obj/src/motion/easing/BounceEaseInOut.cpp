#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BounceEaseInOut
#include <motion/easing/BounceEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void BounceEaseInOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.BounceEaseInOut","new",0x33d59e7a,"motion.easing.BounceEaseInOut.new","motion/easing/Bounce.hx",75,0xc6b45fab)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//BounceEaseInOut_obj::~BounceEaseInOut_obj() { }

Dynamic BounceEaseInOut_obj::__CreateEmpty() { return  new BounceEaseInOut_obj; }
hx::ObjectPtr< BounceEaseInOut_obj > BounceEaseInOut_obj::__new()
{  hx::ObjectPtr< BounceEaseInOut_obj > _result_ = new BounceEaseInOut_obj();
	_result_->__construct();
	return _result_;}

Dynamic BounceEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BounceEaseInOut_obj > _result_ = new BounceEaseInOut_obj();
	_result_->__construct();
	return _result_;}

hx::Object *BounceEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

BounceEaseInOut_obj::operator ::motion::easing::IEasing_obj *()
	{ return new ::motion::easing::IEasing_delegate_< BounceEaseInOut_obj >(this); }
Float BounceEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.BounceEaseInOut","calculate",0xce68f300,"motion.easing.BounceEaseInOut.calculate","motion/easing/Bounce.hx",81,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(83)
	bool tmp = (k < ((Float).5));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	if ((tmp)){
		HX_STACK_LINE(84)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			Float tmp2 = (k * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(84)
			Float tmp3 = ((int)1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(84)
			Float t = tmp3;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(84)
			Float tmp4 = hx::DivEq(t,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(84)
			Float tmp5 = ((Float)0.36363636363636365);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(84)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(84)
			if ((tmp6)){
				HX_STACK_LINE(84)
				Float tmp7 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(84)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(84)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(84)
				tmp1 = tmp10;
			}
			else{
				HX_STACK_LINE(84)
				Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(84)
				Float tmp8 = ((Float)0.72727272727272729);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(84)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(84)
				if ((tmp9)){
					HX_STACK_LINE(84)
					Float tmp10 = ((Float)0.54545454545454541);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(84)
					Float tmp11 = hx::SubEq(t,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(84)
					Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(84)
					Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(84)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(84)
					Float tmp15 = (tmp14 + ((Float).75));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(84)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(84)
					tmp1 = tmp16;
				}
				else{
					HX_STACK_LINE(84)
					Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(84)
					Float tmp11 = ((Float)0.90909090909090906);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(84)
					bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(84)
					if ((tmp12)){
						HX_STACK_LINE(84)
						Float tmp13 = ((Float)0.81818181818181823);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(84)
						Float tmp14 = hx::SubEq(t,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(84)
						Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(84)
						Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(84)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(84)
						Float tmp18 = (tmp17 + ((Float).9375));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(84)
						Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(84)
						tmp1 = tmp19;
					}
					else{
						HX_STACK_LINE(84)
						Float tmp13 = ((Float)0.95454545454545459);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(84)
						Float tmp14 = hx::SubEq(t,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(84)
						Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(84)
						Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(84)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(84)
						Float tmp18 = (tmp17 + ((Float).984375));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(84)
						Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(84)
						tmp1 = tmp19;
					}
				}
			}
		}
		HX_STACK_LINE(84)
		Float tmp2 = ((int)1 - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Float tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		Float tmp4 = (tmp3 * ((Float).5));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		return tmp4;
	}
	else{
		HX_STACK_LINE(86)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			Float tmp2 = (k * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			Float tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(86)
			Float t = tmp3;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(86)
			Float tmp4 = hx::DivEq(t,(int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(86)
			Float tmp5 = ((Float)0.36363636363636365);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(86)
			bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(86)
			if ((tmp6)){
				HX_STACK_LINE(86)
				Float tmp7 = (((Float)7.5625) * t);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(86)
				Float tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(86)
				Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(86)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(86)
				tmp1 = tmp10;
			}
			else{
				HX_STACK_LINE(86)
				Float tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(86)
				Float tmp8 = ((Float)0.72727272727272729);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(86)
				bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(86)
				if ((tmp9)){
					HX_STACK_LINE(86)
					Float tmp10 = ((Float)0.54545454545454541);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(86)
					Float tmp11 = hx::SubEq(t,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(86)
					Float tmp12 = (((Float)7.5625) * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(86)
					Float tmp13 = t;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(86)
					Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(86)
					Float tmp15 = (tmp14 + ((Float).75));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(86)
					Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(86)
					tmp1 = tmp16;
				}
				else{
					HX_STACK_LINE(86)
					Float tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(86)
					Float tmp11 = ((Float)0.90909090909090906);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(86)
					bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(86)
					if ((tmp12)){
						HX_STACK_LINE(86)
						Float tmp13 = ((Float)0.81818181818181823);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(86)
						Float tmp14 = hx::SubEq(t,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(86)
						Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(86)
						Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(86)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(86)
						Float tmp18 = (tmp17 + ((Float).9375));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(86)
						Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(86)
						tmp1 = tmp19;
					}
					else{
						HX_STACK_LINE(86)
						Float tmp13 = ((Float)0.95454545454545459);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(86)
						Float tmp14 = hx::SubEq(t,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(86)
						Float tmp15 = (((Float)7.5625) * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(86)
						Float tmp16 = t;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(86)
						Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(86)
						Float tmp18 = (tmp17 + ((Float).984375));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(86)
						Float tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(86)
						tmp1 = tmp19;
					}
				}
			}
		}
		HX_STACK_LINE(86)
		Float tmp2 = (tmp1 * ((Float).5));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		Float tmp3 = ((Float).5);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(86)
		Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(86)
		return tmp4;
	}
	HX_STACK_LINE(83)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC1(BounceEaseInOut_obj,calculate,return )

Float BounceEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.BounceEaseInOut","ease",0x211f1494,"motion.easing.BounceEaseInOut.ease","motion/easing/Bounce.hx",91,0xc6b45fab)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(93)
	Float tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	Float tmp1 = (Float(d) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	if ((tmp2)){
		HX_STACK_LINE(94)
		Float tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		Float tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			Float tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			Float tmp6 = (t * (int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(94)
			Float tmp7 = (tmp5 - tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			Float t1 = tmp7;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(94)
			Float tmp8 = hx::DivEq(t1,d);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			Float tmp9 = ((Float)0.36363636363636365);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			if ((tmp10)){
				HX_STACK_LINE(94)
				Float tmp11 = c;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(94)
				Float tmp12 = (((Float)7.5625) * t1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(94)
				Float tmp13 = t1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(94)
				Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(94)
				Float tmp15 = (tmp11 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(94)
				tmp4 = tmp15;
			}
			else{
				HX_STACK_LINE(94)
				Float tmp11 = t1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(94)
				Float tmp12 = ((Float)0.72727272727272729);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(94)
				bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(94)
				if ((tmp13)){
					HX_STACK_LINE(94)
					Float tmp14 = c;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(94)
					Float tmp15 = ((Float)0.54545454545454541);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(94)
					Float tmp16 = hx::SubEq(t1,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(94)
					Float tmp17 = (((Float)7.5625) * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(94)
					Float tmp18 = t1;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(94)
					Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(94)
					Float tmp20 = (tmp19 + ((Float).75));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(94)
					Float tmp21 = (tmp14 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(94)
					tmp4 = tmp21;
				}
				else{
					HX_STACK_LINE(94)
					Float tmp14 = t1;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(94)
					Float tmp15 = ((Float)0.90909090909090906);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(94)
					bool tmp16 = (tmp14 < tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(94)
					if ((tmp16)){
						HX_STACK_LINE(94)
						Float tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(94)
						Float tmp18 = ((Float)0.81818181818181823);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(94)
						Float tmp19 = hx::SubEq(t1,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(94)
						Float tmp20 = (((Float)7.5625) * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(94)
						Float tmp21 = t1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(94)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(94)
						Float tmp23 = (tmp22 + ((Float).9375));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(94)
						Float tmp24 = (tmp17 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(94)
						tmp4 = tmp24;
					}
					else{
						HX_STACK_LINE(94)
						Float tmp17 = c;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(94)
						Float tmp18 = ((Float)0.95454545454545459);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(94)
						Float tmp19 = hx::SubEq(t1,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(94)
						Float tmp20 = (((Float)7.5625) * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(94)
						Float tmp21 = t1;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(94)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(94)
						Float tmp23 = (tmp22 + ((Float).984375));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(94)
						Float tmp24 = (tmp17 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(94)
						tmp4 = tmp24;
					}
				}
			}
		}
		HX_STACK_LINE(94)
		Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(94)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		Float tmp7 = (tmp6 * ((Float).5));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		Float tmp8 = b;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(94)
		Float tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(94)
		return tmp9;
	}
	else{
		HX_STACK_LINE(96)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			Float tmp4 = (t * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			Float tmp5 = d;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			Float t1 = tmp6;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(96)
			Float tmp7 = hx::DivEq(t1,d);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(96)
			Float tmp8 = ((Float)0.36363636363636365);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(96)
			bool tmp9 = (tmp7 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(96)
			if ((tmp9)){
				HX_STACK_LINE(96)
				Float tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(96)
				Float tmp11 = (((Float)7.5625) * t1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(96)
				Float tmp12 = t1;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(96)
				Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(96)
				Float tmp14 = (tmp10 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(96)
				tmp3 = tmp14;
			}
			else{
				HX_STACK_LINE(96)
				Float tmp10 = t1;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(96)
				Float tmp11 = ((Float)0.72727272727272729);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(96)
				bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(96)
				if ((tmp12)){
					HX_STACK_LINE(96)
					Float tmp13 = c;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(96)
					Float tmp14 = ((Float)0.54545454545454541);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(96)
					Float tmp15 = hx::SubEq(t1,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(96)
					Float tmp16 = (((Float)7.5625) * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(96)
					Float tmp17 = t1;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(96)
					Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(96)
					Float tmp19 = (tmp18 + ((Float).75));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(96)
					Float tmp20 = (tmp13 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(96)
					tmp3 = tmp20;
				}
				else{
					HX_STACK_LINE(96)
					Float tmp13 = t1;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(96)
					Float tmp14 = ((Float)0.90909090909090906);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(96)
					bool tmp15 = (tmp13 < tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(96)
					if ((tmp15)){
						HX_STACK_LINE(96)
						Float tmp16 = c;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(96)
						Float tmp17 = ((Float)0.81818181818181823);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(96)
						Float tmp18 = hx::SubEq(t1,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(96)
						Float tmp19 = (((Float)7.5625) * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(96)
						Float tmp20 = t1;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(96)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(96)
						Float tmp22 = (tmp21 + ((Float).9375));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(96)
						Float tmp23 = (tmp16 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(96)
						tmp3 = tmp23;
					}
					else{
						HX_STACK_LINE(96)
						Float tmp16 = c;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(96)
						Float tmp17 = ((Float)0.95454545454545459);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(96)
						Float tmp18 = hx::SubEq(t1,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(96)
						Float tmp19 = (((Float)7.5625) * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(96)
						Float tmp20 = t1;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(96)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(96)
						Float tmp22 = (tmp21 + ((Float).984375));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(96)
						Float tmp23 = (tmp16 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(96)
						tmp3 = tmp23;
					}
				}
			}
		}
		HX_STACK_LINE(96)
		Float tmp4 = (tmp3 * ((Float).5));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		Float tmp5 = (c * ((Float).5));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		Float tmp7 = b;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		return tmp8;
	}
	HX_STACK_LINE(93)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC4(BounceEaseInOut_obj,ease,return )


BounceEaseInOut_obj::BounceEaseInOut_obj()
{
}

Dynamic BounceEaseInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BounceEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BounceEaseInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class BounceEaseInOut_obj::__mClass;

void BounceEaseInOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.BounceEaseInOut","\x88","\x99","\xda","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BounceEaseInOut_obj >;
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
