#ifndef INCLUDED_motion_LinearPath
#define INCLUDED_motion_LinearPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_BezierPath
#include <motion/BezierPath.h>
#endif
HX_DECLARE_CLASS1(motion,BezierPath)
HX_DECLARE_CLASS1(motion,LinearPath)
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  LinearPath_obj : public ::motion::BezierPath_obj{
	public:
		typedef ::motion::BezierPath_obj super;
		typedef LinearPath_obj OBJ_;
		LinearPath_obj();
		Void __construct(Float end,Float strength);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="motion.LinearPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LinearPath_obj > __new(Float end,Float strength);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LinearPath_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("LinearPath","\x4a","\xbe","\x3b","\x38"); }

		virtual Float calculate( Float start,Float k);

};

} // end namespace motion

#endif /* INCLUDED_motion_LinearPath */ 
