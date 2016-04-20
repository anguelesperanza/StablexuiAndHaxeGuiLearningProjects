#include <hxcpp.h>

#ifndef INCLUDED_motion_BezierPath
#include <motion/BezierPath.h>
#endif
#ifndef INCLUDED_motion_ComponentPath
#include <motion/ComponentPath.h>
#endif
#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
namespace motion{

Void ComponentPath_obj::__construct()
{
HX_STACK_FRAME("motion.ComponentPath","new",0xeba5e69c,"motion.ComponentPath.new","motion/MotionPath.hx",109,0x95e57daa)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(111)
	this->paths = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(112)
	this->start = (int)0;
	HX_STACK_LINE(113)
	this->totalStrength = (int)0;
}
;
	return null();
}

//ComponentPath_obj::~ComponentPath_obj() { }

Dynamic ComponentPath_obj::__CreateEmpty() { return  new ComponentPath_obj; }
hx::ObjectPtr< ComponentPath_obj > ComponentPath_obj::__new()
{  hx::ObjectPtr< ComponentPath_obj > _result_ = new ComponentPath_obj();
	_result_->__construct();
	return _result_;}

Dynamic ComponentPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComponentPath_obj > _result_ = new ComponentPath_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ComponentPath_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::IComponentPath_obj)) return operator ::motion::IComponentPath_obj *();
	return super::__ToInterface(inType);
}

ComponentPath_obj::operator ::motion::IComponentPath_obj *()
	{ return new ::motion::IComponentPath_delegate_< ComponentPath_obj >(this); }
Void ComponentPath_obj::addPath( ::motion::BezierPath path){
{
		HX_STACK_FRAME("motion.ComponentPath","addPath",0xdfaf0ca2,"motion.ComponentPath.addPath","motion/MotionPath.hx",118,0x95e57daa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(120)
		::motion::BezierPath tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		this->paths->push(tmp);
		HX_STACK_LINE(121)
		hx::AddEq(this->totalStrength,path->strength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ComponentPath_obj,addPath,(void))

Float ComponentPath_obj::calculate( Float k){
	HX_STACK_FRAME("motion.ComponentPath","calculate",0xd17900a2,"motion.ComponentPath.calculate","motion/MotionPath.hx",126,0x95e57daa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(128)
	int tmp = this->paths->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	bool tmp1 = (tmp == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	if ((tmp1)){
		HX_STACK_LINE(130)
		::motion::BezierPath tmp2 = this->paths->__get((int)0).StaticCast< ::motion::BezierPath >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		Float tmp3 = this->start;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		Float tmp4 = k;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		Float tmp5 = tmp2->calculate(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		return tmp5;
	}
	else{
		HX_STACK_LINE(134)
		Float tmp2 = k;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		Float tmp3 = this->totalStrength;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		Float tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		Float ratio = tmp4;		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(135)
		Float tmp5 = this->start;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(135)
		Float lastEnd = tmp5;		HX_STACK_VAR(lastEnd,"lastEnd");
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			Array< ::Dynamic > _g1 = this->paths;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(137)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(137)
				if ((tmp7)){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(137)
				::motion::BezierPath tmp8 = _g1->__get(_g).StaticCast< ::motion::BezierPath >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(137)
				::motion::BezierPath path = tmp8;		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(137)
				++(_g);
				HX_STACK_LINE(139)
				bool tmp9 = (ratio > path->strength);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(139)
				if ((tmp9)){
					HX_STACK_LINE(141)
					hx::SubEq(ratio,path->strength);
					HX_STACK_LINE(142)
					lastEnd = path->end;
				}
				else{
					HX_STACK_LINE(146)
					Float tmp10 = lastEnd;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(146)
					Float tmp11 = (Float(ratio) / Float(path->strength));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(146)
					Float tmp12 = path->calculate(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(146)
					return tmp12;
				}
			}
		}
	}
	HX_STACK_LINE(154)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(ComponentPath_obj,calculate,return )

Float ComponentPath_obj::get_end( ){
	HX_STACK_FRAME("motion.ComponentPath","get_end",0x7fe1b0ae,"motion.ComponentPath.get_end","motion/MotionPath.hx",165,0x95e57daa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	int tmp = this->paths->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(167)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(167)
	if ((tmp1)){
		HX_STACK_LINE(169)
		int tmp2 = this->paths->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		::motion::BezierPath tmp4 = this->paths->__get(tmp3).StaticCast< ::motion::BezierPath >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(169)
		::motion::BezierPath path = tmp4;		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(170)
		Float tmp5 = path->end;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(170)
		return tmp5;
	}
	else{
		HX_STACK_LINE(174)
		Float tmp2 = this->start;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		return tmp2;
	}
	HX_STACK_LINE(167)
	return ((Float)0.);
}


HX_DEFINE_DYNAMIC_FUNC0(ComponentPath_obj,get_end,return )


ComponentPath_obj::ComponentPath_obj()
{
}

void ComponentPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentPath);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(paths,"paths");
	HX_MARK_MEMBER_NAME(totalStrength,"totalStrength");
	HX_MARK_END_CLASS();
}

void ComponentPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(paths,"paths");
	HX_VISIT_MEMBER_NAME(totalStrength,"totalStrength");
}

Dynamic ComponentPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return inCallProp == hx::paccAlways ? get_end() : end; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"paths") ) { return paths; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addPath") ) { return addPath_dyn(); }
		if (HX_FIELD_EQ(inName,"get_end") ) { return get_end_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"totalStrength") ) { return totalStrength; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ComponentPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paths") ) { paths=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"totalStrength") ) { totalStrength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("paths","\x2e","\x0b","\x57","\xbd"));
	outFields->push(HX_HCSTRING("totalStrength","\x65","\x46","\x52","\xc4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ComponentPath_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsFloat,(int)offsetof(ComponentPath_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ComponentPath_obj,paths),HX_HCSTRING("paths","\x2e","\x0b","\x57","\xbd")},
	{hx::fsFloat,(int)offsetof(ComponentPath_obj,totalStrength),HX_HCSTRING("totalStrength","\x65","\x46","\x52","\xc4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("paths","\x2e","\x0b","\x57","\xbd"),
	HX_HCSTRING("totalStrength","\x65","\x46","\x52","\xc4"),
	HX_HCSTRING("addPath","\x66","\x28","\x8f","\x86"),
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("get_end","\x72","\xcc","\xc1","\x26"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentPath_obj::__mClass,"__mClass");
};

#endif

hx::Class ComponentPath_obj::__mClass;

void ComponentPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.ComponentPath","\xaa","\xa8","\xd7","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ComponentPath_obj >;
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
