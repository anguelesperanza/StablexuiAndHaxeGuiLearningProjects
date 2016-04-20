#ifndef INCLUDED_motion_actuators_PropertyPathDetails
#define INCLUDED_motion_actuators_PropertyPathDetails

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
HX_DECLARE_CLASS1(motion,IComponentPath)
HX_DECLARE_CLASS2(motion,actuators,PropertyDetails)
HX_DECLARE_CLASS2(motion,actuators,PropertyPathDetails)
namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  PropertyPathDetails_obj : public ::motion::actuators::PropertyDetails_obj{
	public:
		typedef ::motion::actuators::PropertyDetails_obj super;
		typedef PropertyPathDetails_obj OBJ_;
		PropertyPathDetails_obj();
		Void __construct(Dynamic target,::String propertyName,::motion::IComponentPath path,hx::Null< bool >  __o_isField);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="motion.actuators.PropertyPathDetails")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PropertyPathDetails_obj > __new(Dynamic target,::String propertyName,::motion::IComponentPath path,hx::Null< bool >  __o_isField);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PropertyPathDetails_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PropertyPathDetails","\x28","\x7b","\xcc","\x44"); }

		::motion::IComponentPath path;
};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_PropertyPathDetails */ 
