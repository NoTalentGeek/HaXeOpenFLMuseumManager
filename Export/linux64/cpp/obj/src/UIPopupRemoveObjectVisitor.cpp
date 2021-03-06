#include <hxcpp.h>

#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_UIPopupRemoveObjectVisitor
#include <UIPopupRemoveObjectVisitor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_ListSelector
#include <haxe/ui/toolkit/controls/selection/ListSelector.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif

Void UIPopupRemoveObjectVisitor_obj::__construct(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{
HX_STACK_FRAME("UIPopupRemoveObjectVisitor","new",0xcbd77de5,"UIPopupRemoveObjectVisitor.new","UIPopupRemoveObjectVisitor.hx",25,0x0581852b)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_root,"_root")
{
	HX_STACK_LINE(32)
	this->selectVisitorObject = null();
	HX_STACK_LINE(31)
	this->selectVisitorNameString = null();
	HX_STACK_LINE(30)
	this->selectVisitorListSelectorObject = null();
	HX_STACK_LINE(29)
	this->popupObject = null();
	HX_STACK_LINE(28)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(27)
	this->buttonObject = null();
	HX_STACK_LINE(34)
	::UIPopupRemoveObjectVisitor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(39)
	::haxe::ui::toolkit::controls::Button tmp = _root->findChild(HX_HCSTRING("UIPopupRemoveVisitorObjectButton","\xa3","\x8a","\x7f","\x00"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >(),true);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->buttonObject = tmp;
	HX_STACK_LINE(41)
	::haxe::ui::toolkit::controls::Button tmp1 = this->buttonObject;		HX_STACK_VAR(tmp1,"tmp1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::UIPopupRemoveObjectVisitor,_g)
	int __ArgCount() const { return 1; }
	Void run(::haxe::ui::toolkit::events::UIEvent _e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","UIPopupRemoveObjectVisitor.hx",41,0x0581852b)
		HX_STACK_ARG(_e,"_e")
		{
			HX_STACK_LINE(44)
			int buttonControlInt = (int)0;		HX_STACK_VAR(buttonControlInt,"buttonControlInt");
			HX_STACK_LINE(45)
			hx::OrEq(buttonControlInt,(int)1);
			HX_STACK_LINE(46)
			hx::OrEq(buttonControlInt,(int)4096);
			HX_STACK_LINE(48)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(HX_HCSTRING("layout/UIPopupRemoveObjectVisitor.xml","\x61","\xea","\x84","\xa0"));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject iDisplayObject = tmp2;		HX_STACK_VAR(iDisplayObject,"iDisplayObject");
			HX_STACK_LINE(49)
			::haxe::ui::toolkit::core::PopupManager tmp3 = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(49)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject tmp4 = iDisplayObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			int tmp5 = buttonControlInt;		HX_STACK_VAR(tmp5,"tmp5");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::UIPopupRemoveObjectVisitor,_g)
			int __ArgCount() const { return 1; }
			Void run(int _button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","UIPopupRemoveObjectVisitor.hx",49,0x0581852b)
				HX_STACK_ARG(_button,"_button")
				{
					HX_STACK_LINE(51)
					bool tmp6 = (_button == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(51)
					if ((tmp6)){
						HX_STACK_LINE(53)
						::CollectionGlobal tmp7 = _g->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(53)
						::String tmp8 = _g->selectVisitorNameString;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(53)
						::ObjectVisitor tmp9 = ::CollectionFunction_obj::FindVisitorObject(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(53)
						_g->selectVisitorObject = tmp9;
						HX_STACK_LINE(54)
						::ObjectMuseum tmp10 = _g->collectionGlobalObject->GetArchiveExhibitionObject();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(54)
						_g->selectVisitorObject->ChangeExhibitionCurrentVoid(tmp10);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(49)
			::haxe::ui::toolkit::controls::popups::Popup tmp6 = tmp3->showCustom(tmp4,HX_HCSTRING("Remove Visitor","\xd2","\xa3","\xcb","\x31"),tmp5, Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(49)
			_g->popupObject = tmp6;
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::controls::popups::PopupContent tmp7 = _g->popupObject->get_content();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(60)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp8 = tmp7->findChild(HX_HCSTRING("UIPopupRemoveObjectVisitor_SelectObjectVisitor","\xe7","\x7b","\xa0","\x0f"),hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >(),true);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(60)
			_g->selectVisitorListSelectorObject = tmp8;
			HX_STACK_LINE(63)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(64)
			while((true)){
				HX_STACK_LINE(64)
				int tmp9 = loopCounter1Int;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(64)
				int tmp10 = _g->collectionGlobalObject->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(64)
				bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(64)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(64)
				if ((tmp12)){
					HX_STACK_LINE(64)
					break;
				}
				HX_STACK_LINE(66)
				::haxe::ui::toolkit::data::IDataSource tmp13 = _g->selectVisitorListSelectorObject->get_dataSource();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(66)
				::ObjectVisitor tmp14 = _g->collectionGlobalObject->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(66)
				::String tmp15 = tmp14->GetNameString();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(66)
				tmp13->createFromString(tmp15,null());
				HX_STACK_LINE(67)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(71)
			_g->selectVisitorListSelectorObject->set_method(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));
			HX_STACK_LINE(72)
			_g->selectVisitorListSelectorObject->set_selectedIndex((int)-1);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(41)
	tmp1->set_onClick( Dynamic(new _Function_1_1(_g)));
}
;
	return null();
}

//UIPopupRemoveObjectVisitor_obj::~UIPopupRemoveObjectVisitor_obj() { }

Dynamic UIPopupRemoveObjectVisitor_obj::__CreateEmpty() { return  new UIPopupRemoveObjectVisitor_obj; }
hx::ObjectPtr< UIPopupRemoveObjectVisitor_obj > UIPopupRemoveObjectVisitor_obj::__new(::CollectionGlobal _collectionGlobalObject,::haxe::ui::toolkit::core::Root _root)
{  hx::ObjectPtr< UIPopupRemoveObjectVisitor_obj > _result_ = new UIPopupRemoveObjectVisitor_obj();
	_result_->__construct(_collectionGlobalObject,_root);
	return _result_;}

Dynamic UIPopupRemoveObjectVisitor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIPopupRemoveObjectVisitor_obj > _result_ = new UIPopupRemoveObjectVisitor_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void UIPopupRemoveObjectVisitor_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("UIPopupRemoveObjectVisitor","UpdateVoid",0xc6eaef38,"UIPopupRemoveObjectVisitor.UpdateVoid","UIPopupRemoveObjectVisitor.hx",77,0x0581852b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		::haxe::ui::toolkit::controls::popups::Popup tmp = this->popupObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(79)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		if ((tmp1)){
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp3 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(79)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(79)
			tmp2 = (tmp4 != null());
		}
		else{
			HX_STACK_LINE(79)
			tmp2 = false;
		}
		HX_STACK_LINE(79)
		if ((tmp2)){
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::controls::selection::ListSelector tmp3 = this->selectVisitorListSelectorObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(80)
			::String tmp4 = tmp3->get_text();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(80)
			this->selectVisitorNameString = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UIPopupRemoveObjectVisitor_obj,UpdateVoid,(void))


UIPopupRemoveObjectVisitor_obj::UIPopupRemoveObjectVisitor_obj()
{
}

void UIPopupRemoveObjectVisitor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIPopupRemoveObjectVisitor);
	HX_MARK_MEMBER_NAME(buttonObject,"buttonObject");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(popupObject,"popupObject");
	HX_MARK_MEMBER_NAME(selectVisitorListSelectorObject,"selectVisitorListSelectorObject");
	HX_MARK_MEMBER_NAME(selectVisitorNameString,"selectVisitorNameString");
	HX_MARK_MEMBER_NAME(selectVisitorObject,"selectVisitorObject");
	HX_MARK_END_CLASS();
}

void UIPopupRemoveObjectVisitor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonObject,"buttonObject");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(popupObject,"popupObject");
	HX_VISIT_MEMBER_NAME(selectVisitorListSelectorObject,"selectVisitorListSelectorObject");
	HX_VISIT_MEMBER_NAME(selectVisitorNameString,"selectVisitorNameString");
	HX_VISIT_MEMBER_NAME(selectVisitorObject,"selectVisitorObject");
}

Dynamic UIPopupRemoveObjectVisitor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"popupObject") ) { return popupObject; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { return buttonObject; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectVisitorObject") ) { return selectVisitorObject; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"selectVisitorNameString") ) { return selectVisitorNameString; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorObject") ) { return selectVisitorListSelectorObject; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIPopupRemoveObjectVisitor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"popupObject") ) { popupObject=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buttonObject") ) { buttonObject=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectVisitorObject") ) { selectVisitorObject=inValue.Cast< ::ObjectVisitor >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"selectVisitorNameString") ) { selectVisitorNameString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"selectVisitorListSelectorObject") ) { selectVisitorListSelectorObject=inValue.Cast< ::haxe::ui::toolkit::controls::selection::ListSelector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIPopupRemoveObjectVisitor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"));
	outFields->push(HX_HCSTRING("selectVisitorListSelectorObject","\xee","\x78","\xd8","\x97"));
	outFields->push(HX_HCSTRING("selectVisitorNameString","\x2e","\xb0","\x7d","\xb0"));
	outFields->push(HX_HCSTRING("selectVisitorObject","\x71","\x14","\x4c","\x88"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(UIPopupRemoveObjectVisitor_obj,buttonObject),HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(UIPopupRemoveObjectVisitor_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(UIPopupRemoveObjectVisitor_obj,popupObject),HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::selection::ListSelector*/ ,(int)offsetof(UIPopupRemoveObjectVisitor_obj,selectVisitorListSelectorObject),HX_HCSTRING("selectVisitorListSelectorObject","\xee","\x78","\xd8","\x97")},
	{hx::fsString,(int)offsetof(UIPopupRemoveObjectVisitor_obj,selectVisitorNameString),HX_HCSTRING("selectVisitorNameString","\x2e","\xb0","\x7d","\xb0")},
	{hx::fsObject /*::ObjectVisitor*/ ,(int)offsetof(UIPopupRemoveObjectVisitor_obj,selectVisitorObject),HX_HCSTRING("selectVisitorObject","\x71","\x14","\x4c","\x88")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonObject","\x51","\x56","\xfd","\xbc"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("popupObject","\x0b","\xe6","\x7c","\xaa"),
	HX_HCSTRING("selectVisitorListSelectorObject","\xee","\x78","\xd8","\x97"),
	HX_HCSTRING("selectVisitorNameString","\x2e","\xb0","\x7d","\xb0"),
	HX_HCSTRING("selectVisitorObject","\x71","\x14","\x4c","\x88"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIPopupRemoveObjectVisitor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIPopupRemoveObjectVisitor_obj::__mClass,"__mClass");
};

#endif

hx::Class UIPopupRemoveObjectVisitor_obj::__mClass;

void UIPopupRemoveObjectVisitor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("UIPopupRemoveObjectVisitor","\x73","\xa7","\xa7","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UIPopupRemoveObjectVisitor_obj >;
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

