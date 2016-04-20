#ifndef INCLUDED_motion_easing_SineEaseIn
#define INCLUDED_motion_easing_SineEaseIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(motion,easing,SineEaseIn)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  SineEaseIn_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SineEaseIn_obj OBJ_;
		SineEaseIn_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="motion.easing.SineEaseIn")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SineEaseIn_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SineEaseIn_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::motion::easing::IEasing_obj *();
		::String __ToString() const { return HX_HCSTRING("SineEaseIn","\xc0","\x69","\x9c","\x95"); }

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_SineEaseIn */ 
