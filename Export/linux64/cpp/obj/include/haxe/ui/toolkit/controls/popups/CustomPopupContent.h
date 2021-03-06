#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_CustomPopupContent
#define INCLUDED_haxe_ui_toolkit_controls_popups_CustomPopupContent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,popups,CustomPopupContent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,popups,PopupContent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace popups{


class HXCPP_CLASS_ATTRIBUTES  CustomPopupContent_obj : public ::haxe::ui::toolkit::controls::popups::PopupContent_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::popups::PopupContent_obj super;
		typedef CustomPopupContent_obj OBJ_;
		CustomPopupContent_obj();
		Void __construct(::haxe::ui::toolkit::core::interfaces::IDisplayObject display);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.popups.CustomPopupContent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CustomPopupContent_obj > __new(::haxe::ui::toolkit::core::interfaces::IDisplayObject display);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CustomPopupContent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("CustomPopupContent","\xde","\xc5","\x60","\xa4"); }

		::haxe::ui::toolkit::core::interfaces::IDisplayObject _display;
		virtual Void initialize( );

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace popups

#endif /* INCLUDED_haxe_ui_toolkit_controls_popups_CustomPopupContent */ 
