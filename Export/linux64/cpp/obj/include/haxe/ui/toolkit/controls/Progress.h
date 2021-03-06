#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#define INCLUDED_haxe_ui_toolkit_controls_Progress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Progress)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDirectional)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IScrollable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  Progress_obj : public ::haxe::ui::toolkit::core::StateComponent_obj{
	public:
		typedef ::haxe::ui::toolkit::core::StateComponent_obj super;
		typedef Progress_obj OBJ_;
		Progress_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.ui.toolkit.controls.Progress")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Progress_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Progress_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::haxe::ui::toolkit::core::interfaces::IDirectional_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
		operator ::haxe::ui::toolkit::core::interfaces::IScrollable_obj *();
		::String __ToString() const { return HX_HCSTRING("Progress","\xcd","\xb3","\xdc","\x5f"); }

		::String _direction;
		Float _min;
		Float _max;
		Float _pos;
		Float _incrementSize;
		::haxe::ui::toolkit::core::StateComponent _valueBgComp;
		::haxe::ui::toolkit::core::StateComponent _valueComp;
		virtual Void initialize( );

		virtual ::String get_direction( );
		Dynamic get_direction_dyn();

		virtual ::String set_direction( ::String value);
		Dynamic set_direction_dyn();

		virtual Float get_min( );
		Dynamic get_min_dyn();

		virtual Float set_min( Float value);
		Dynamic set_min_dyn();

		virtual Float get_max( );
		Dynamic get_max_dyn();

		virtual Float set_max( Float value);
		Dynamic set_max_dyn();

		virtual Float get_pos( );
		Dynamic get_pos_dyn();

		virtual Float set_pos( Float value);
		Dynamic set_pos_dyn();

		virtual Float get_pageSize( );
		Dynamic get_pageSize_dyn();

		virtual Float set_pageSize( Float value);
		Dynamic set_pageSize_dyn();

		virtual Float get_incrementSize( );
		Dynamic get_incrementSize_dyn();

		virtual Float set_incrementSize( Float value);
		Dynamic set_incrementSize_dyn();

		virtual ::haxe::ui::toolkit::core::DisplayObject clone( );

		virtual ::haxe::ui::toolkit::core::DisplayObject self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_Progress */ 
