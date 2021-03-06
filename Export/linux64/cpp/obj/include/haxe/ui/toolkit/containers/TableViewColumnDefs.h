#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDefs
#define INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDefs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,TableViewColumnDef)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,TableViewColumnDefs)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  TableViewColumnDefs_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TableViewColumnDefs_obj OBJ_;
		TableViewColumnDefs_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.containers.TableViewColumnDefs")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TableViewColumnDefs_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TableViewColumnDefs_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TableViewColumnDefs","\x57","\x78","\x28","\x70"); }

		Array< ::Dynamic > _columns;
		virtual Void add( ::String id,hx::Null< Float >  width,::String title);
		Dynamic add_dyn();

		virtual bool has( ::String id);
		Dynamic has_dyn();

		virtual Array< ::Dynamic > iterator( );
		Dynamic iterator_dyn();

		virtual ::haxe::ui::toolkit::containers::TableViewColumnDef findColumn( ::String id);
		Dynamic findColumn_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDefs */ 
