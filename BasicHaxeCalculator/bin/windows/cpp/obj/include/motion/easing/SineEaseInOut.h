#ifndef INCLUDED_motion_easing_SineEaseInOut
#define INCLUDED_motion_easing_SineEaseInOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(motion,easing,SineEaseInOut)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  SineEaseInOut_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SineEaseInOut_obj OBJ_;
		SineEaseInOut_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="motion.easing.SineEaseInOut")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SineEaseInOut_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SineEaseInOut_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::motion::easing::IEasing_obj *();
		::String __ToString() const { return HX_HCSTRING("SineEaseInOut","\xae","\x86","\x70","\xba"); }

		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		virtual Float ease( Float t,Float b,Float c,Float d);
		Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_SineEaseInOut */ 