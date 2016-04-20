#ifndef INCLUDED_motion_easing_IEasing
#define INCLUDED_motion_easing_IEasing

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,easing,IEasing)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  IEasing_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IEasing_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Float calculate( Float k)=0;
virtual Dynamic calculate_dyn()=0;
		virtual Float ease( Float t,Float b,Float c,Float d)=0;
virtual Dynamic ease_dyn()=0;
};



template<typename IMPL>
class IEasing_delegate_ : public IEasing_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IEasing_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Float calculate( Float k) { return mDelegate->calculate(k);}
		Dynamic calculate_dyn() { return mDelegate->calculate_dyn();}
		Float ease( Float t,Float b,Float c,Float d) { return mDelegate->ease(t,b,c,d);}
		Dynamic ease_dyn() { return mDelegate->ease_dyn();}
};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_IEasing */ 
