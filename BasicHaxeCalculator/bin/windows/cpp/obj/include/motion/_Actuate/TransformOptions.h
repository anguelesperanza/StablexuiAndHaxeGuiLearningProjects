#ifndef INCLUDED_motion__Actuate_TransformOptions
#define INCLUDED_motion__Actuate_TransformOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,_Actuate,TransformOptions)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
namespace motion{
namespace _Actuate{


class HXCPP_CLASS_ATTRIBUTES  TransformOptions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TransformOptions_obj OBJ_;
		TransformOptions_obj();
		Void __construct(Dynamic target,Float duration,bool overwrite);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="motion._Actuate.TransformOptions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TransformOptions_obj > __new(Dynamic target,Float duration,bool overwrite);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TransformOptions_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TransformOptions","\x72","\xcf","\x6e","\xa9"); }

		Float duration;
		bool overwrite;
		Dynamic target;
		virtual ::motion::actuators::IGenericActuator color( hx::Null< int >  value,hx::Null< Float >  strength,Dynamic alpha);
		Dynamic color_dyn();

		virtual ::motion::actuators::IGenericActuator sound( Dynamic volume,Dynamic pan);
		Dynamic sound_dyn();

};

} // end namespace motion
} // end namespace _Actuate

#endif /* INCLUDED_motion__Actuate_TransformOptions */ 
