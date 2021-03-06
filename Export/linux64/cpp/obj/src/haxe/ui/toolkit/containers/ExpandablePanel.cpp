#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ExpandableButton
#include <haxe/ui/toolkit/containers/ExpandableButton.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ExpandablePanel
#include <haxe/ui/toolkit/containers/ExpandablePanel.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Stack
#include <haxe/ui/toolkit/containers/Stack.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Quart
#include <motion/easing/Quart.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ExpandablePanel_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","new",0x319ffa28,"haxe.ui.toolkit.containers.ExpandablePanel.new","haxe/ui/toolkit/containers/ExpandablePanel.hx",18,0xc8401d48)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->startExpanded = true;
	HX_STACK_LINE(26)
	super::__construct();
}
;
	return null();
}

//ExpandablePanel_obj::~ExpandablePanel_obj() { }

Dynamic ExpandablePanel_obj::__CreateEmpty() { return  new ExpandablePanel_obj; }
hx::ObjectPtr< ExpandablePanel_obj > ExpandablePanel_obj::__new()
{  hx::ObjectPtr< ExpandablePanel_obj > _result_ = new ExpandablePanel_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExpandablePanel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExpandablePanel_obj > _result_ = new ExpandablePanel_obj();
	_result_->__construct();
	return _result_;}

Void ExpandablePanel_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","initialize",0x809f5088,"haxe.ui.toolkit.containers.ExpandablePanel.initialize","haxe/ui/toolkit/containers/ExpandablePanel.hx",30,0xc8401d48)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::initialize();
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ExpandablePanel_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","addChild",0xf37630f3,"haxe.ui.toolkit.containers.ExpandablePanel.addChild","haxe/ui/toolkit/containers/ExpandablePanel.hx",33,0xc8401d48)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(35)
	::haxe::ui::toolkit::containers::ExpandableButton tmp = this->_button;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	if ((tmp1)){
		HX_STACK_LINE(36)
		::haxe::ui::toolkit::containers::ExpandableButton tmp2 = ::haxe::ui::toolkit::containers::ExpandableButton_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		this->_button = tmp2;
		HX_STACK_LINE(37)
		::haxe::ui::toolkit::containers::ExpandableButton tmp3 = this->_button;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(37)
		tmp3->set_percentWidth((int)100);
		HX_STACK_LINE(38)
		::haxe::ui::toolkit::containers::ExpandableButton tmp4 = this->_button;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		::String tmp5 = this->get_text();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		tmp4->set_text(tmp5);
		HX_STACK_LINE(39)
		::haxe::ui::toolkit::containers::ExpandableButton tmp6 = this->_button;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(39)
		tmp6->set_toggle(true);
		HX_STACK_LINE(40)
		::haxe::ui::toolkit::containers::ExpandableButton tmp7 = this->_button;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(40)
		bool tmp8 = this->startExpanded;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(40)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		if ((tmp8)){
			HX_STACK_LINE(40)
			tmp9 = true;
		}
		else{
			HX_STACK_LINE(40)
			tmp9 = false;
		}
		HX_STACK_LINE(40)
		tmp7->set_selected(tmp9);
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::containers::ExpandableButton tmp10 = this->_button;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(41)
		::String tmp11 = HX_HCSTRING("haxeui_change","\x55","\x86","\x4e","\x89");		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(41)
		Dynamic tmp12 = this->onClickButton_dyn();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(41)
		tmp10->addEventListener(tmp11,tmp12,null(),null(),null());
		HX_STACK_LINE(42)
		::haxe::ui::toolkit::containers::ExpandableButton tmp13 = this->_button;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(42)
		tmp13->set_styleName(HX_HCSTRING("expandable","\xf4","\x90","\xfa","\x55"));
		HX_STACK_LINE(43)
		::haxe::ui::toolkit::containers::ExpandableButton tmp14 = this->_button;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(43)
		this->super::addChild(tmp14);
	}
	HX_STACK_LINE(46)
	::haxe::ui::toolkit::containers::VBox tmp2 = this->_panel;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	if ((tmp3)){
		HX_STACK_LINE(47)
		::haxe::ui::toolkit::containers::VBox tmp4 = ::haxe::ui::toolkit::containers::VBox_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		this->_panel = tmp4;
		HX_STACK_LINE(48)
		::haxe::ui::toolkit::containers::VBox tmp5 = this->_panel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		tmp5->set_id(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
		HX_STACK_LINE(49)
		::haxe::ui::toolkit::containers::VBox tmp6 = this->_panel;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		tmp6->set_percentWidth((int)100);
		HX_STACK_LINE(50)
		::haxe::ui::toolkit::containers::VBox tmp7 = this->_panel;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		this->super::addChild(tmp7);
		HX_STACK_LINE(51)
		::haxe::ui::toolkit::containers::VBox tmp8 = this->_panel;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		::String tmp9 = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(51)
		Dynamic tmp10 = this->panelAdded_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		tmp8->addEventListener(tmp9,tmp10,null(),null(),null());
	}
	HX_STACK_LINE(56)
	::haxe::ui::toolkit::containers::VBox tmp4 = this->_panel;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(56)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(56)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp6 = tmp4->addChild(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(56)
	return tmp6;
}


Void ExpandablePanel_obj::onClickButton( ::haxe::ui::toolkit::events::UIEvent e){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","onClickButton",0x01090943,"haxe.ui.toolkit.containers.ExpandablePanel.onClickButton","haxe/ui/toolkit/containers/ExpandablePanel.hx",59,0xc8401d48)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(60)
		::haxe::ui::toolkit::containers::ExpandableButton tmp = this->_button;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		bool tmp1 = tmp->get_selected();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		if ((tmp1)){
			HX_STACK_LINE(61)
			this->showPanel();
		}
		else{
			HX_STACK_LINE(63)
			this->hidePanel();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExpandablePanel_obj,onClickButton,(void))

Void ExpandablePanel_obj::panelAdded( ::openfl::_legacy::events::Event e){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","panelAdded",0x7b927a54,"haxe.ui.toolkit.containers.ExpandablePanel.panelAdded","haxe/ui/toolkit/containers/ExpandablePanel.hx",67,0xc8401d48)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(68)
		::String tmp = ::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		Dynamic tmp1 = this->panelAdded_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		this->removeEventListener(tmp,tmp1,null());
		HX_STACK_LINE(70)
		bool tmp2 = this->startExpanded;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		if ((tmp3)){
			HX_STACK_LINE(71)
			::haxe::ui::toolkit::containers::VBox tmp4 = this->_panel;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			tmp4->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExpandablePanel_obj,panelAdded,(void))

Void ExpandablePanel_obj::showPanel( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","showPanel",0x8acc908f,"haxe.ui.toolkit.containers.ExpandablePanel.showPanel","haxe/ui/toolkit/containers/ExpandablePanel.hx",75,0xc8401d48)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		::haxe::ui::toolkit::containers::ExpandablePanel _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		::String tmp = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::ExpandablePanel >());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		::String transition = tmp;		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(78)
		Float tmp1 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Stack >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(78)
		Float transitionTime = tmp1;		HX_STACK_VAR(transitionTime,"transitionTime");
		HX_STACK_LINE(79)
		bool tmp2 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		if ((tmp2)){
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::containers::VBox tmp3 = this->_panel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			Float tmp4 = tmp3->get_height();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			Float startH = tmp4;		HX_STACK_VAR(startH,"startH");
			HX_STACK_LINE(82)
			::haxe::ui::toolkit::containers::VBox tmp5 = this->_panel;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			tmp5->invalidate((int)256,null());
			HX_STACK_LINE(83)
			::haxe::ui::toolkit::containers::VBox tmp6 = this->_panel;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(83)
			Float tmp7 = tmp6->get_height();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(83)
			Float finalH = tmp7;		HX_STACK_VAR(finalH,"finalH");
			HX_STACK_LINE(85)
			::haxe::ui::toolkit::containers::VBox tmp8 = this->_panel;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			tmp8->set_visible(true);
			HX_STACK_LINE(87)
			::haxe::ui::toolkit::containers::VBox tmp9 = this->_panel;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			Float tmp10 = startH;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(87)
			::Reflect_obj::setField(tmp9,HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),tmp10);
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::containers::VBox tmp11 = this->_panel;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(88)
			Float tmp12 = startH;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(88)
			tmp11->set_clipHeight(tmp12);
			HX_STACK_LINE(89)
			::haxe::ui::toolkit::containers::VBox tmp13 = this->_panel;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(89)
			Float tmp14 = transitionTime;		HX_STACK_VAR(tmp14,"tmp14");
			struct _Function_2_1{
				inline static Dynamic Block( Float &finalH){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ExpandablePanel.hx",89,0xc8401d48)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70") , finalH,false);
						__result->Add(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38") , finalH,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(89)
			Dynamic tmp15 = _Function_2_1::Block(finalH);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(89)
			::motion::actuators::GenericActuator tmp16 = ::motion::Actuate_obj::tween(tmp13,tmp14,tmp15,true,null());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(89)
			::motion::easing::IEasing tmp17 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(89)
			::motion::actuators::GenericActuator tmp18 = tmp16->ease(tmp17);		HX_STACK_VAR(tmp18,"tmp18");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::haxe::ui::toolkit::containers::ExpandablePanel,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/containers/ExpandablePanel.hx",90,0xc8401d48)
				{
					HX_STACK_LINE(90)
					_g->invalidate((int)256,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(89)
			tmp18->onUpdate( Dynamic(new _Function_2_2(_g)),null());
		}
		else{
			HX_STACK_LINE(93)
			::haxe::ui::toolkit::containers::VBox tmp3 = this->_panel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			tmp3->set_visible(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExpandablePanel_obj,showPanel,(void))

Void ExpandablePanel_obj::hidePanel( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","hidePanel",0xb7c6e6aa,"haxe.ui.toolkit.containers.ExpandablePanel.hidePanel","haxe/ui/toolkit/containers/ExpandablePanel.hx",98,0xc8401d48)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		::haxe::ui::toolkit::containers::ExpandablePanel _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		::String tmp = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::ExpandablePanel >());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		::String transition = tmp;		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(101)
		Float tmp1 = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionTimeForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Stack >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		Float transitionTime = tmp1;		HX_STACK_VAR(transitionTime,"transitionTime");
		HX_STACK_LINE(102)
		bool tmp2 = (transition == HX_HCSTRING("slide","\x31","\xc5","\xc7","\x7e"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(102)
		if ((tmp2)){
			HX_STACK_LINE(103)
			::haxe::ui::toolkit::containers::VBox tmp3 = this->_panel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			Float tmp4 = transitionTime;		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ExpandablePanel.hx",103,0xc8401d48)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70") , (int)0,false);
						__result->Add(HX_HCSTRING("clipHeight","\xd7","\xe6","\x99","\x38") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(103)
			Dynamic tmp5 = _Function_2_1::Block();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			::motion::actuators::GenericActuator tmp6 = ::motion::Actuate_obj::tween(tmp3,tmp4,tmp5,true,null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(103)
			::motion::easing::IEasing tmp7 = ::motion::easing::Quart_obj::get_easeOut();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(103)
			::motion::actuators::GenericActuator tmp8 = tmp6->ease(tmp7);		HX_STACK_VAR(tmp8,"tmp8");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,::haxe::ui::toolkit::containers::ExpandablePanel,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/containers/ExpandablePanel.hx",104,0xc8401d48)
				{
					HX_STACK_LINE(104)
					_g->invalidate((int)256,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(103)
			::motion::actuators::GenericActuator tmp9 = tmp8->onUpdate( Dynamic(new _Function_2_2(_g)),null());		HX_STACK_VAR(tmp9,"tmp9");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,::haxe::ui::toolkit::containers::ExpandablePanel,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","haxe/ui/toolkit/containers/ExpandablePanel.hx",105,0xc8401d48)
				{
					HX_STACK_LINE(105)
					_g->_panel->set_visible(false);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(103)
			tmp9->onComplete( Dynamic(new _Function_2_3(_g)),null());
		}
		else{
			HX_STACK_LINE(107)
			::haxe::ui::toolkit::containers::VBox tmp3 = this->_panel;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(107)
			tmp3->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExpandablePanel_obj,hidePanel,(void))

::haxe::ui::toolkit::core::DisplayObject ExpandablePanel_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","clone",0x84633f25,"haxe.ui.toolkit.containers.ExpandablePanel.clone","src/haxe/ui/toolkit/containers/ExpandablePanel.hx",1,0xa3484d9d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::VBox tmp = hx::TCast< ::haxe::ui::toolkit::containers::VBox >::cast(this->super::clone());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ExpandablePanel c = ((::haxe::ui::toolkit::containers::ExpandablePanel)(tmp));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::haxe::ui::toolkit::containers::ExpandablePanel tmp1 = c;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(3)
	return tmp1;
}


::haxe::ui::toolkit::core::DisplayObject ExpandablePanel_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","self",0x3da8f0c4,"haxe.ui.toolkit.containers.ExpandablePanel.self","src/haxe/ui/toolkit/containers/ExpandablePanel.hx",1,0xa3484d9d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ExpandablePanel tmp = ::haxe::ui::toolkit::containers::ExpandablePanel_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(2)
	return tmp;
}



ExpandablePanel_obj::ExpandablePanel_obj()
{
}

void ExpandablePanel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExpandablePanel);
	HX_MARK_MEMBER_NAME(_button,"_button");
	HX_MARK_MEMBER_NAME(_panel,"_panel");
	HX_MARK_MEMBER_NAME(startExpanded,"startExpanded");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ExpandablePanel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_button,"_button");
	HX_VISIT_MEMBER_NAME(_panel,"_panel");
	HX_VISIT_MEMBER_NAME(startExpanded,"startExpanded");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ExpandablePanel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_panel") ) { return _panel; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { return _button; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showPanel") ) { return showPanel_dyn(); }
		if (HX_FIELD_EQ(inName,"hidePanel") ) { return hidePanel_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"panelAdded") ) { return panelAdded_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startExpanded") ) { return startExpanded; }
		if (HX_FIELD_EQ(inName,"onClickButton") ) { return onClickButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExpandablePanel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_panel") ) { _panel=inValue.Cast< ::haxe::ui::toolkit::containers::VBox >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast< ::haxe::ui::toolkit::containers::ExpandableButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startExpanded") ) { startExpanded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ExpandablePanel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_button","\x91","\x73","\x57","\x48"));
	outFields->push(HX_HCSTRING("_panel","\x45","\xc2","\x39","\xb9"));
	outFields->push(HX_HCSTRING("startExpanded","\xbb","\x73","\x8a","\xfe"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::ExpandableButton*/ ,(int)offsetof(ExpandablePanel_obj,_button),HX_HCSTRING("_button","\x91","\x73","\x57","\x48")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::VBox*/ ,(int)offsetof(ExpandablePanel_obj,_panel),HX_HCSTRING("_panel","\x45","\xc2","\x39","\xb9")},
	{hx::fsBool,(int)offsetof(ExpandablePanel_obj,startExpanded),HX_HCSTRING("startExpanded","\xbb","\x73","\x8a","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_button","\x91","\x73","\x57","\x48"),
	HX_HCSTRING("_panel","\x45","\xc2","\x39","\xb9"),
	HX_HCSTRING("startExpanded","\xbb","\x73","\x8a","\xfe"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("onClickButton","\x7b","\xd5","\xcb","\x6b"),
	HX_HCSTRING("panelAdded","\x1c","\x5b","\xae","\xe7"),
	HX_HCSTRING("showPanel","\xc7","\xe0","\xb6","\xeb"),
	HX_HCSTRING("hidePanel","\xe2","\x36","\xb1","\x18"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExpandablePanel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpandablePanel_obj::__mClass,"__mClass");
};

#endif

hx::Class ExpandablePanel_obj::__mClass;

void ExpandablePanel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.ui.toolkit.containers.ExpandablePanel","\x36","\x06","\xc6","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExpandablePanel_obj >;
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

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
