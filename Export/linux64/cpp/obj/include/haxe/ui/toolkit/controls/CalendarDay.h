#ifndef INCLUDED_haxe_ui_toolkit_controls_CalendarDay
#define INCLUDED_haxe_ui_toolkit_controls_CalendarDay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,CalendarDay)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  CalendarDay_obj : public ::haxe::ui::toolkit::controls::Button_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::Button_obj super;
		typedef CalendarDay_obj OBJ_;
		CalendarDay_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.CalendarDay")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CalendarDay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CalendarDay_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CalendarDay","\x1e","\x72","\x82","\x24"); }

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_CalendarDay */ 
