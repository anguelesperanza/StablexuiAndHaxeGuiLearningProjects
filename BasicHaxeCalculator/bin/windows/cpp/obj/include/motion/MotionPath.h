#ifndef INCLUDED_motion_MotionPath
#define INCLUDED_motion_MotionPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(motion,ComponentPath)
HX_DECLARE_CLASS1(motion,IComponentPath)
HX_DECLARE_CLASS1(motion,MotionPath)
HX_DECLARE_CLASS1(motion,RotationPath)
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  MotionPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MotionPath_obj OBJ_;
		MotionPath_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="motion.MotionPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MotionPath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MotionPath_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MotionPath","\x1b","\xef","\x17","\x33"); }

		::motion::RotationPath rotation;
		::motion::IComponentPath x;
		::motion::IComponentPath y;
		::motion::RotationPath _rotation;
		::motion::ComponentPath _x;
		::motion::ComponentPath _y;
		virtual ::motion::MotionPath bezier( Float x,Float y,Float controlX,Float controlY,hx::Null< Float >  strength);
		Dynamic bezier_dyn();

		virtual ::motion::MotionPath line( Float x,Float y,hx::Null< Float >  strength);
		Dynamic line_dyn();

		virtual ::motion::RotationPath get_rotation( );
		Dynamic get_rotation_dyn();

		virtual ::motion::IComponentPath get_x( );
		Dynamic get_x_dyn();

		virtual ::motion::IComponentPath get_y( );
		Dynamic get_y_dyn();

};

} // end namespace motion

#endif /* INCLUDED_motion_MotionPath */ 
