#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,Graphics)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IDrawable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IDrawable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::openfl::_legacy::display::Graphics get_graphics( )=0;
		virtual Dynamic get_graphics_dyn()=0;
		virtual Void paint( )=0;
		virtual Dynamic paint_dyn()=0;
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IDrawable \
virtual ::openfl::_legacy::display::Graphics get_graphics( ) { return mDelegate->get_graphics();}  \
virtual Dynamic get_graphics_dyn() { return mDelegate->get_graphics_dyn();}  \
virtual Void paint( ) { return mDelegate->paint();}  \
virtual Dynamic paint_dyn() { return mDelegate->paint_dyn();}  \


template<typename IMPL>
class IDrawable_delegate_ : public IDrawable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDrawable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IDrawable
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable */ 