#ifndef INCLUDED_sys_io__Process_Stdout
#define INCLUDED_sys_io__Process_Stdout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS3(sys,io,_Process,Stdout)
namespace sys{
namespace io{
namespace _Process{


class HXCPP_CLASS_ATTRIBUTES  Stdout_obj : public ::haxe::io::Input_obj{
	public:
		typedef ::haxe::io::Input_obj super;
		typedef Stdout_obj OBJ_;
		Stdout_obj();
		Void __construct(Dynamic p,bool out);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="sys.io._Process.Stdout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stdout_obj > __new(Dynamic p,bool out);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stdout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Stdout","\xeb","\x33","\x88","\x3c"); }

		static void __boot();
		static Dynamic _stdout_read;
		static Dynamic &_stdout_read_dyn() { return _stdout_read;}
		static Dynamic _stderr_read;
		static Dynamic &_stderr_read_dyn() { return _stderr_read;}
		Dynamic p;
		bool out;
		::haxe::io::Bytes buf;
		virtual int readByte( );

		virtual int readBytes( ::haxe::io::Bytes str,int pos,int len);

};

} // end namespace sys
} // end namespace io
} // end namespace _Process

#endif /* INCLUDED_sys_io__Process_Stdout */ 
