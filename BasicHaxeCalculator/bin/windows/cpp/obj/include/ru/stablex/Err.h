#ifndef INCLUDED_ru_stablex_Err
#define INCLUDED_ru_stablex_Err

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(ru,stablex,Err)
namespace ru{
namespace stablex{


class HXCPP_CLASS_ATTRIBUTES  Err_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Err_obj OBJ_;
		Err_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ru.stablex.Err")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Err_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Err_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Err","\x45","\xbf","\x34","\x00"); }

		static Void trigger( ::String msg);
		static Dynamic trigger_dyn();

};

} // end namespace ru
} // end namespace stablex

#endif /* INCLUDED_ru_stablex_Err */ 
