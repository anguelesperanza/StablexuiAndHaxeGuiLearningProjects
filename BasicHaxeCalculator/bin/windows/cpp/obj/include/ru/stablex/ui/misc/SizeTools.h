#ifndef INCLUDED_ru_stablex_ui_misc_SizeTools
#define INCLUDED_ru_stablex_ui_misc_SizeTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS4(ru,stablex,ui,misc,SizeTools)
namespace ru{
namespace stablex{
namespace ui{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES  SizeTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SizeTools_obj OBJ_;
		SizeTools_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ru.stablex.ui.misc.SizeTools")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SizeTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SizeTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SizeTools","\x7a","\xe5","\x97","\xb4"); }

		static Float width( ::openfl::display::DisplayObject obj);
		static Dynamic width_dyn();

		static Float height( ::openfl::display::DisplayObject obj);
		static Dynamic height_dyn();

		static Void setX( ::openfl::display::DisplayObject obj,Float x);
		static Dynamic setX_dyn();

		static Void setY( ::openfl::display::DisplayObject obj,Float y);
		static Dynamic setY_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace misc

#endif /* INCLUDED_ru_stablex_ui_misc_SizeTools */ 
