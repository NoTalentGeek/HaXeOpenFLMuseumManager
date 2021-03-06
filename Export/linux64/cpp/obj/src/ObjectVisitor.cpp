#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumMuseumMode
#include <EnumMuseumMode.h>
#endif
#ifndef INCLUDED_EnumVisitorMode
#include <EnumVisitorMode.h>
#endif
#ifndef INCLUDED_ObjectGeneratorSentence
#include <ObjectGeneratorSentence.h>
#endif
#ifndef INCLUDED_ObjectMuseum
#include <ObjectMuseum.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif
#ifndef INCLUDED_ObjectVisitor
#include <ObjectVisitor.h>
#endif
#ifndef INCLUDED_ObjectVisitorUI
#include <ObjectVisitorUI.h>
#endif
#ifndef INCLUDED_UIPopupEditObjectVisitor
#include <UIPopupEditObjectVisitor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Absolute
#include <haxe/ui/toolkit/containers/Absolute.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
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
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

Void ObjectVisitor_obj::__construct(::CollectionGlobal _collectionGlobalObject,int _indexGlobalInt,::String _nameString)
{
HX_STACK_FRAME("ObjectVisitor","new",0x49949701,"ObjectVisitor.new","ObjectVisitor.hx",5,0xe713038f)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_indexGlobalInt,"_indexGlobalInt")
HX_STACK_ARG(_nameString,"_nameString")
{
	HX_STACK_LINE(32)
	this->visitorUIObject = null();
	HX_STACK_LINE(31)
	this->visitorModeEnum = null();
	HX_STACK_LINE(30)
	this->visitMuseumStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(29)
	this->visitExhibitionStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(28)
	this->visitedCorrectExhibitionBool = true;
	HX_STACK_LINE(27)
	this->timeMuseumInt = (int)0;
	HX_STACK_LINE(26)
	this->timeExhibitionInt = (int)0;
	HX_STACK_LINE(25)
	this->timeAIAutoExhibitionChangeFloat = ((Float)0);
	HX_STACK_LINE(24)
	this->targetInt = (int)3;
	HX_STACK_LINE(23)
	this->tagObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(22)
	this->tagCounterStructArray = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(21)
	this->sentenceStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(20)
	this->scoreInt = (int)0;
	HX_STACK_LINE(19)
	this->roomCurrentObject = null();
	HX_STACK_LINE(18)
	this->nameString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(17)
	this->indexLocalInt = (int)-1;
	HX_STACK_LINE(16)
	this->indexGlobalInt = (int)-1;
	HX_STACK_LINE(15)
	this->generatorSentenceObject = null();
	HX_STACK_LINE(14)
	this->floorCurrentObject = null();
	HX_STACK_LINE(13)
	this->finishedBool = false;
	HX_STACK_LINE(12)
	this->explanationStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(11)
	this->explanationCurrentString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(10)
	this->explanationCurrentIndexInt = (int)-1;
	HX_STACK_LINE(9)
	this->exhibitionVisitedObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(8)
	this->exhibitionTargetObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(7)
	this->exhibitionCurrentObject = null();
	HX_STACK_LINE(6)
	this->collectionGlobalObject = null();
	HX_STACK_LINE(39)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(40)
	::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	::ObjectGeneratorSentence tmp1 = ::ObjectGeneratorSentence_obj::__new(tmp,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	this->generatorSentenceObject = tmp1;
	HX_STACK_LINE(41)
	this->indexGlobalInt = _indexGlobalInt;
	HX_STACK_LINE(42)
	this->nameString = _nameString;
	HX_STACK_LINE(43)
	::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(43)
	tmp2->GetVisitorObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(44)
	::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(44)
	::ObjectVisitorUI tmp4 = ::ObjectVisitorUI_obj::__new(tmp3,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(44)
	this->visitorUIObject = tmp4;
	HX_STACK_LINE(45)
	::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	tmp5->DetermineExhibitionFullThresholdVoid();
	HX_STACK_LINE(46)
	int tmp6 = this->targetInt;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(46)
	this->GenerateExhibitionTargetVoid(tmp6);
	HX_STACK_LINE(47)
	this->visitorModeEnum = ::EnumVisitorMode_obj::SOFTWARE_AUTO;
}
;
	return null();
}

//ObjectVisitor_obj::~ObjectVisitor_obj() { }

Dynamic ObjectVisitor_obj::__CreateEmpty() { return  new ObjectVisitor_obj; }
hx::ObjectPtr< ObjectVisitor_obj > ObjectVisitor_obj::__new(::CollectionGlobal _collectionGlobalObject,int _indexGlobalInt,::String _nameString)
{  hx::ObjectPtr< ObjectVisitor_obj > _result_ = new ObjectVisitor_obj();
	_result_->__construct(_collectionGlobalObject,_indexGlobalInt,_nameString);
	return _result_;}

Dynamic ObjectVisitor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectVisitor_obj > _result_ = new ObjectVisitor_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ObjectVisitor_obj::AddRemoveVisitorFromExhibitionVoid( bool _isAdd){
{
		HX_STACK_FRAME("ObjectVisitor","AddRemoveVisitorFromExhibitionVoid",0x6050e235,"ObjectVisitor.AddRemoveVisitorFromExhibitionVoid","ObjectVisitor.hx",49,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_isAdd,"_isAdd")
		HX_STACK_LINE(50)
		bool tmp = (_isAdd == true);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		if ((tmp)){
			HX_STACK_LINE(50)
			::ObjectMuseum tmp1 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(50)
			Dynamic tmp2 = tmp1->GetChildStruct();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			tmp2->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(51)
			bool tmp1 = (_isAdd == false);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(51)
			if ((tmp1)){
				HX_STACK_LINE(51)
				::ObjectMuseum tmp2 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(51)
				Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(51)
				tmp3->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,AddRemoveVisitorFromExhibitionVoid,(void))

Void ObjectVisitor_obj::AddTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AddTagCounterVoid",0x7a07f078,"ObjectVisitor.AddTagCounterVoid","ObjectVisitor.hx",53,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(57)
		this->tagObjectArray = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(59)
		int tmp = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		bool tmp1 = (tmp >= (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(59)
		if ((tmp1)){
			HX_STACK_LINE(60)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(61)
			while((true)){
				HX_STACK_LINE(61)
				int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(61)
				int tmp3 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(61)
				int tmp4 = (tmp3 - (int)2);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				::ObjectMuseum tmp5 = this->exhibitionVisitedObjectArray->__get(tmp4).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(61)
				int tmp6 = tmp5->GetTagObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(61)
				bool tmp7 = (tmp2 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(61)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(61)
				if ((tmp8)){
					HX_STACK_LINE(61)
					break;
				}
				HX_STACK_LINE(62)
				int tmp9 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				int tmp10 = (tmp9 - (int)2);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				::ObjectMuseum tmp11 = this->exhibitionVisitedObjectArray->__get(tmp10).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				::ObjectTag tmp12 = tmp11->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(62)
				::ObjectTag tagObject = tmp12;		HX_STACK_VAR(tagObject,"tagObject");
				HX_STACK_LINE(63)
				::ObjectTag tmp13 = tagObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(63)
				int tmp14 = this->tagObjectArray->indexOf(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(63)
				bool tmp15 = (tmp14 == (int)-1);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(63)
				if ((tmp15)){
					HX_STACK_LINE(63)
					::ObjectTag tmp16 = tagObject;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(63)
					this->tagObjectArray->push(tmp16);
				}
				HX_STACK_LINE(64)
				(loopCounter1Int)++;
			}
		}
		HX_STACK_LINE(68)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(69)
		while((true)){
			HX_STACK_LINE(69)
			int tmp2 = loopCounter1Int;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(69)
			int tmp4 = tmp3->GetTagObjectArray()->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			bool tmp5 = (tmp2 < tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(69)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(69)
			if ((tmp6)){
				HX_STACK_LINE(69)
				break;
			}
			HX_STACK_LINE(70)
			bool newTagBool = true;		HX_STACK_VAR(newTagBool,"newTagBool");
			HX_STACK_LINE(71)
			::String tagNameString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tagNameString,"tagNameString");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",75,0xe713038f)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46") , null(),false);
						__result->Add(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(75)
			Dynamic tmp7 = _Function_2_1::Block();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(75)
			Dynamic tagCounterStruct = tmp7;		HX_STACK_VAR(tagCounterStruct,"tagCounterStruct");
			HX_STACK_LINE(80)
			int tagIndexInt = (int)0;		HX_STACK_VAR(tagIndexInt,"tagIndexInt");
			HX_STACK_LINE(81)
			::ObjectMuseum tmp8 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(81)
			::ObjectTag tmp9 = tmp8->GetTagObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(81)
			tagCounterStruct->__FieldRef(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46")) = tmp9;
			HX_STACK_LINE(82)
			::String tmp10 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(82)
			tagNameString = tmp10;
			HX_STACK_LINE(83)
			while((true)){
				HX_STACK_LINE(83)
				int tmp11 = tagIndexInt;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(83)
				int tmp12 = this->tagCounterStructArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(83)
				bool tmp13 = (tmp11 < tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(83)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(83)
				if ((tmp14)){
					HX_STACK_LINE(83)
					break;
				}
				HX_STACK_LINE(84)
				::String tmp15 = tagNameString;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(84)
				Dynamic tmp16 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(84)
				::String tmp17 = tmp16->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic )->__Field(HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"), hx::paccDynamic )();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(84)
				bool tmp18 = (tmp15 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(84)
				if ((tmp18)){
					HX_STACK_LINE(84)
					newTagBool = false;
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(85)
				(tagIndexInt)++;
			}
			HX_STACK_LINE(87)
			bool tmp11 = (newTagBool == true);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(87)
			if ((tmp11)){
				HX_STACK_LINE(87)
				Dynamic tmp12 = tagCounterStruct;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(87)
				this->tagCounterStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp12);
			}
			else{
				HX_STACK_LINE(88)
				bool tmp12 = (newTagBool == false);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(88)
				if ((tmp12)){
					HX_STACK_LINE(88)
					Dynamic tmp13 = this->tagCounterStructArray->__GetItem(tagIndexInt);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(88)
					(tmp13->__FieldRef(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff")))++;
				}
			}
			HX_STACK_LINE(90)
			::ObjectTag tmp12 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(90)
			int tmp13 = this->tagObjectArray->indexOf(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(90)
			bool tmp14 = (tmp13 == (int)-1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(90)
			if ((tmp14)){
				HX_STACK_LINE(91)
				::ObjectTag tmp15 = tagCounterStruct->__Field(HX_HCSTRING("tagObject","\xb9","\x8c","\x77","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(91)
				this->tagObjectArray->push(tmp15);
			}
			HX_STACK_LINE(93)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(95)
		this->SortTagCounterVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AddTagCounterVoid,(void))

Void ObjectVisitor_obj::ChangeExhibitionCurrentVoid( ::ObjectMuseum _exhibitionTargetObject){
{
		HX_STACK_FRAME("ObjectVisitor","ChangeExhibitionCurrentVoid",0xf235220f,"ObjectVisitor.ChangeExhibitionCurrentVoid","ObjectVisitor.hx",97,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_exhibitionTargetObject,"_exhibitionTargetObject")
		HX_STACK_LINE(98)
		Dynamic tmp = _exhibitionTargetObject->GetNameStruct();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		::String tmp1 = tmp->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(98)
		bool tmp2 = (tmp1 == HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		if ((tmp2)){
			HX_STACK_LINE(99)
			this->exhibitionCurrentObject = _exhibitionTargetObject;
			HX_STACK_LINE(100)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(100)
			this->roomCurrentObject = tmp3;
			HX_STACK_LINE(101)
			::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(101)
			this->floorCurrentObject = tmp4;
			HX_STACK_LINE(102)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			this->exhibitionVisitedObjectArray->push(tmp5);
			HX_STACK_LINE(105)
			::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(105)
			tmp6->GetVisitorObjectArray()->remove(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(106)
			this->UpdateHeavyVoid();
		}
		else{
			HX_STACK_LINE(109)
			::ObjectMuseum tmp3 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(109)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(109)
			if ((tmp4)){
				HX_STACK_LINE(110)
				::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(110)
				::ObjectMuseum tmp6 = tmp5->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(110)
				this->roomCurrentObject = tmp6;
				HX_STACK_LINE(111)
				::ObjectMuseum tmp7 = this->roomCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(111)
				::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(111)
				this->floorCurrentObject = tmp8;
				HX_STACK_LINE(112)
				this->AddRemoveVisitorFromExhibitionVoid(false);
				HX_STACK_LINE(113)
				::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(113)
				::ObjectMuseum tmp10 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(113)
				int tmp11 = tmp10->GetVisitorCurrentInt();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(113)
				int tmp12 = (tmp11 - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(113)
				tmp9->SetVisitorCurrentIntVoid(tmp12);
				HX_STACK_LINE(114)
				::ObjectMuseum tmp13 = this->roomCurrentObject;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(114)
				::ObjectMuseum tmp14 = this->roomCurrentObject;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(114)
				int tmp15 = tmp14->GetVisitorCurrentInt();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(114)
				int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(114)
				tmp13->SetVisitorCurrentIntVoid(tmp16);
				HX_STACK_LINE(115)
				::ObjectMuseum tmp17 = this->floorCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(115)
				::ObjectMuseum tmp18 = this->floorCurrentObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(115)
				int tmp19 = tmp18->GetVisitorCurrentInt();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(115)
				int tmp20 = (tmp19 - (int)1);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(115)
				tmp17->SetVisitorCurrentIntVoid(tmp20);
			}
			HX_STACK_LINE(117)
			this->exhibitionCurrentObject = _exhibitionTargetObject;
			HX_STACK_LINE(118)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(118)
			::ObjectMuseum tmp6 = tmp5->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(118)
			this->roomCurrentObject = tmp6;
			HX_STACK_LINE(119)
			::ObjectMuseum tmp7 = this->roomCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(119)
			::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(119)
			this->floorCurrentObject = tmp8;
			HX_STACK_LINE(120)
			::ObjectMuseum tmp9 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(120)
			this->exhibitionVisitedObjectArray->push(tmp9);
			HX_STACK_LINE(121)
			this->AddTagCounterVoid();
			HX_STACK_LINE(122)
			int tmp10 = this->targetInt;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(122)
			this->GenerateExhibitionTargetVoid(tmp10);
			HX_STACK_LINE(123)
			Array< int > indexIntArray = Array_obj< int >::__new();		HX_STACK_VAR(indexIntArray,"indexIntArray");
			HX_STACK_LINE(124)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(125)
			while((true)){
				HX_STACK_LINE(125)
				int tmp11 = loopCounter1Int;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(125)
				::ObjectMuseum tmp12 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(125)
				int tmp13 = tmp12->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(125)
				bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(125)
				bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(125)
				if ((tmp15)){
					HX_STACK_LINE(125)
					break;
				}
				HX_STACK_LINE(126)
				int tmp16 = loopCounter1Int;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(126)
				indexIntArray->push(tmp16);
				HX_STACK_LINE(127)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(129)
			Float tmp11 = ::Math_obj::random();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(129)
			int tmp12 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(129)
			Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(129)
			int tmp14 = ::Math_obj::round(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(129)
			int tmp15 = indexIntArray->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(129)
			int indexRandomInt = tmp15;		HX_STACK_VAR(indexRandomInt,"indexRandomInt");
			HX_STACK_LINE(130)
			int tmp16 = indexRandomInt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(130)
			indexIntArray->remove(tmp16);
			HX_STACK_LINE(131)
			::ObjectMuseum tmp17 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(131)
			::String tmp18 = tmp17->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(131)
			this->explanationCurrentString = tmp18;
			HX_STACK_LINE(132)
			this->explanationCurrentIndexInt = indexRandomInt;
			HX_STACK_LINE(133)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(134)
			while((true)){
				HX_STACK_LINE(135)
				::String tmp19 = this->explanationCurrentString;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(135)
				bool tmp20 = ::CollectionFunction_obj::IsExistInArrayBool(this->explanationStringArray,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(135)
				bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(135)
				bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(135)
				if ((tmp21)){
					HX_STACK_LINE(136)
					int tmp23 = loopCounter1Int;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(136)
					::ObjectMuseum tmp24 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(136)
					::ObjectMuseum tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(136)
					int tmp26 = tmp25->GetExplanationStringArray()->length;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(136)
					int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(136)
					tmp22 = (tmp23 < tmp27);
				}
				else{
					HX_STACK_LINE(135)
					tmp22 = false;
				}
				HX_STACK_LINE(135)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(134)
				if ((tmp23)){
					HX_STACK_LINE(134)
					break;
				}
				HX_STACK_LINE(138)
				Float tmp24 = ::Math_obj::random();		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(138)
				int tmp25 = (indexIntArray->length - (int)1);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(138)
				Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(138)
				int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(138)
				int tmp28 = indexIntArray->__get(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(138)
				indexRandomInt = tmp28;
				HX_STACK_LINE(139)
				int tmp29 = indexRandomInt;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(139)
				indexIntArray->remove(tmp29);
				HX_STACK_LINE(140)
				::ObjectMuseum tmp30 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(140)
				::String tmp31 = tmp30->GetExplanationStringArray()->__get(indexRandomInt);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(140)
				this->explanationCurrentString = tmp31;
				HX_STACK_LINE(141)
				this->explanationCurrentIndexInt = indexRandomInt;
				HX_STACK_LINE(142)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(144)
			::String tmp19 = this->explanationCurrentString;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(144)
			this->explanationStringArray->push(tmp19);
			HX_STACK_LINE(145)
			this->visitedCorrectExhibitionBool = false;
			HX_STACK_LINE(146)
			loopCounter1Int = (int)0;
			HX_STACK_LINE(147)
			while((true)){
				HX_STACK_LINE(147)
				int tmp20 = loopCounter1Int;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(147)
				int tmp21 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(147)
				bool tmp22 = (tmp20 < tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(147)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(147)
				if ((tmp23)){
					HX_STACK_LINE(147)
					break;
				}
				HX_STACK_LINE(148)
				::ObjectMuseum tmp24 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(148)
				Dynamic tmp25 = tmp24->GetNameStruct();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(148)
				::String tmp26 = tmp25->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(148)
				::ObjectMuseum tmp27 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(148)
				Dynamic tmp28 = tmp27->GetNameStruct();		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(148)
				::String tmp29 = tmp28->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(148)
				bool tmp30 = (tmp26 == tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(148)
				if ((tmp30)){
					HX_STACK_LINE(148)
					this->visitedCorrectExhibitionBool = true;
					HX_STACK_LINE(148)
					break;
				}
				HX_STACK_LINE(149)
				(loopCounter1Int)++;
			}
			HX_STACK_LINE(151)
			bool tmp20 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(151)
			bool tmp21 = (tmp20 == true);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(151)
			if ((tmp21)){
				HX_STACK_LINE(151)
				(this->scoreInt)++;
			}
			else{
				HX_STACK_LINE(152)
				bool tmp22 = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(152)
				bool tmp23 = (tmp22 == false);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(152)
				if ((tmp23)){
					HX_STACK_LINE(152)
					(this->scoreInt)--;
				}
			}
			HX_STACK_LINE(153)
			::ObjectMuseum tmp22 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(153)
			::ObjectMuseum tmp23 = tmp22->GetParentObject();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(153)
			this->roomCurrentObject = tmp23;
			HX_STACK_LINE(154)
			::ObjectMuseum tmp24 = this->roomCurrentObject;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(154)
			::ObjectMuseum tmp25 = tmp24->GetParentObject();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(154)
			this->floorCurrentObject = tmp25;
			HX_STACK_LINE(155)
			::ObjectMuseum tmp26 = this->floorCurrentObject;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(155)
			::ObjectMuseum tmp27 = this->roomCurrentObject;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(155)
			int tmp28 = tmp27->GetVisitorCurrentInt();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(155)
			int tmp29 = (tmp28 + (int)1);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(155)
			tmp26->SetVisitorCurrentIntVoid(tmp29);
			HX_STACK_LINE(156)
			::ObjectMuseum tmp30 = this->floorCurrentObject;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(156)
			::ObjectMuseum tmp31 = this->roomCurrentObject;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(156)
			int tmp32 = tmp31->GetVisitorTotalInt();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(156)
			int tmp33 = (tmp32 + (int)1);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(156)
			tmp30->SetVisitorTotalIntVoid(tmp33);
			HX_STACK_LINE(157)
			::ObjectMuseum tmp34 = this->roomCurrentObject;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(157)
			::ObjectMuseum tmp35 = this->floorCurrentObject;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(157)
			int tmp36 = tmp35->GetVisitorCurrentInt();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(157)
			int tmp37 = (tmp36 + (int)1);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(157)
			tmp34->SetVisitorCurrentIntVoid(tmp37);
			HX_STACK_LINE(158)
			::ObjectMuseum tmp38 = this->roomCurrentObject;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(158)
			::ObjectMuseum tmp39 = this->floorCurrentObject;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(158)
			int tmp40 = tmp39->GetVisitorTotalInt();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(158)
			int tmp41 = (tmp40 + (int)1);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(158)
			tmp38->SetVisitorTotalIntVoid(tmp41);
			HX_STACK_LINE(160)
			::ObjectGeneratorSentence tmp42 = this->generatorSentenceObject;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(160)
			::CollectionGlobal tmp43 = this->collectionGlobalObject;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(160)
			::String tmp44 = tmp42->GenerateSentence3String(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(160)
			::String threeSentenceString = tmp44;		HX_STACK_VAR(threeSentenceString,"threeSentenceString");
			HX_STACK_LINE(162)
			this->UpdateHeavyVoid();
			HX_STACK_LINE(164)
			int tmp45 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(164)
			bool tmp46 = (tmp45 > (int)1);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(164)
			if ((tmp46)){
				HX_STACK_LINE(165)
				::String tmp47 = threeSentenceString;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(165)
				this->sentenceStringArray->push(tmp47);
			}
			HX_STACK_LINE(167)
			int tmp47 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(167)
			::CollectionGlobal tmp48 = this->collectionGlobalObject;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(167)
			int tmp49 = tmp48->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(167)
			bool tmp50 = (tmp47 >= tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(167)
			if ((tmp50)){
				HX_STACK_LINE(167)
				this->finishedBool = true;
			}
			HX_STACK_LINE(168)
			this->timeExhibitionInt = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,ChangeExhibitionCurrentVoid,(void))

Void ObjectVisitor_obj::SortTagCounterVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","SortTagCounterVoid",0x876372d3,"ObjectVisitor.SortTagCounterVoid","ObjectVisitor.hx",171,0xe713038f)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		int run(Dynamic _a,Dynamic _b){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ObjectVisitor.hx",171,0xe713038f)
			HX_STACK_ARG(_a,"_a")
			HX_STACK_ARG(_b,"_b")
			{
				HX_STACK_LINE(171)
				int tmp = (_b->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ) - _a->__Field(HX_HCSTRING("tagCounterInt","\x4d","\x2e","\x20","\xff"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(171)
				return tmp;
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(171)
		this->tagCounterStructArray->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )( Dynamic(new _Function_1_1()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,SortTagCounterVoid,(void))

Void ObjectVisitor_obj::AIAutoExhibitionChangeVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","AIAutoExhibitionChangeVoid",0x2e2a95a9,"ObjectVisitor.AIAutoExhibitionChangeVoid","ObjectVisitor.hx",172,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		if ((tmp1)){
			HX_STACK_LINE(174)
			Float tmp2 = ::Math_obj::random();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(174)
			Float randomFloat = tmp2;		HX_STACK_VAR(randomFloat,"randomFloat");
			HX_STACK_LINE(175)
			hx::AddEq(this->timeAIAutoExhibitionChangeFloat,((Float)0.01));
			HX_STACK_LINE(176)
			Float tmp3 = randomFloat;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			Float tmp4 = this->timeAIAutoExhibitionChangeFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			Float tmp5 = (((Float)1.0) - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(176)
			bool tmp6 = (tmp3 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(176)
			if ((tmp6)){
				HX_STACK_LINE(177)
				Float tmp7 = ::Math_obj::random();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(177)
				int tmp8 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(177)
				int tmp9 = (tmp8 - (int)1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(177)
				Float tmp10 = (tmp7 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(177)
				int tmp11 = ::Math_obj::round(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(177)
				int randomInt = tmp11;		HX_STACK_VAR(randomInt,"randomInt");
				HX_STACK_LINE(178)
				::ObjectMuseum tmp12 = this->exhibitionTargetObjectArray->__get(randomInt).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(178)
				this->ChangeExhibitionCurrentVoid(tmp12);
				HX_STACK_LINE(179)
				this->timeAIAutoExhibitionChangeFloat = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,AIAutoExhibitionChangeVoid,(void))

Void ObjectVisitor_obj::DetermineIndexLocalVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","DetermineIndexLocalVoid",0x1f670ce1,"ObjectVisitor.DetermineIndexLocalVoid","ObjectVisitor.hx",184,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(184)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(184)
		if ((tmp1)){
			HX_STACK_LINE(184)
			::ObjectMuseum tmp2 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(184)
			int tmp4 = tmp3->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(184)
			this->indexLocalInt = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,DetermineIndexLocalVoid,(void))

Void ObjectVisitor_obj::GenerateExhibitionTargetVoid( int _targetInt){
{
		HX_STACK_FRAME("ObjectVisitor","GenerateExhibitionTargetVoid",0x8e68bfa8,"ObjectVisitor.GenerateExhibitionTargetVoid","ObjectVisitor.hx",185,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_targetInt,"_targetInt")
		HX_STACK_LINE(186)
		::CollectionFunction_obj::ClearArray(this->exhibitionTargetObjectArray);
		HX_STACK_LINE(187)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(189)
		while((true)){
			HX_STACK_LINE(189)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(189)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(189)
			int tmp2 = tmp1->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(189)
			bool tmp3 = (tmp < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(189)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(189)
			if ((tmp4)){
				HX_STACK_LINE(189)
				break;
			}
			HX_STACK_LINE(190)
			::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(190)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(190)
			if ((tmp6)){
				HX_STACK_LINE(191)
				::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(191)
				::ObjectMuseum tmp8 = tmp7->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(191)
				this->exhibitionTargetObjectArray->push(tmp8);
			}
			else{
				HX_STACK_LINE(194)
				::ObjectMuseum tmp7 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(194)
				Dynamic tmp8 = tmp7->GetNameStruct();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(194)
				::String tmp9 = tmp8->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(194)
				::CollectionGlobal tmp10 = this->collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(194)
				::ObjectMuseum tmp11 = tmp10->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(194)
				Dynamic tmp12 = tmp11->GetNameStruct();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(194)
				::String tmp13 = tmp12->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(194)
				bool tmp14 = (tmp9 != tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(194)
				if ((tmp14)){
					HX_STACK_LINE(195)
					::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(195)
					::ObjectMuseum tmp16 = tmp15->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(195)
					this->exhibitionTargetObjectArray->push(tmp16);
				}
			}
			HX_STACK_LINE(198)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(201)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(202)
		while((true)){
			HX_STACK_LINE(202)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(202)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(202)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			if ((tmp3)){
				HX_STACK_LINE(202)
				break;
			}
			HX_STACK_LINE(203)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(203)
			::EnumMuseumMode tmp5 = tmp4->GetMuseumModeEnum();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(203)
			bool tmp6 = (tmp5 == ::EnumMuseumMode_obj::MRK_DEL);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(203)
			if ((tmp6)){
				HX_STACK_LINE(204)
				::ObjectMuseum tmp7 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(204)
				this->exhibitionTargetObjectArray->remove(tmp7);
				HX_STACK_LINE(205)
				(loopCounter1Int)--;
			}
			HX_STACK_LINE(207)
			int tmp7 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(207)
			int tmp8 = _targetInt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(207)
			bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(207)
			if ((tmp9)){
				HX_STACK_LINE(207)
				return null();
			}
			HX_STACK_LINE(208)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(212)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(213)
		while((true)){
			HX_STACK_LINE(213)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(213)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(213)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(213)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(213)
			if ((tmp3)){
				HX_STACK_LINE(213)
				break;
			}
			HX_STACK_LINE(214)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(214)
			bool tmp5 = tmp4->GetFullBool();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(214)
			bool tmp6 = (tmp5 == true);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(214)
			if ((tmp6)){
				HX_STACK_LINE(215)
				::ObjectMuseum tmp7 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(215)
				this->exhibitionTargetObjectArray->remove(tmp7);
				HX_STACK_LINE(216)
				(loopCounter1Int)--;
			}
			HX_STACK_LINE(218)
			int tmp7 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(218)
			int tmp8 = _targetInt;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(218)
			bool tmp9 = (tmp7 <= tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(218)
			if ((tmp9)){
				HX_STACK_LINE(218)
				return null();
			}
			HX_STACK_LINE(219)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(222)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(223)
		while((true)){
			HX_STACK_LINE(223)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(223)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(223)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(223)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(223)
			if ((tmp3)){
				HX_STACK_LINE(223)
				break;
			}
			HX_STACK_LINE(224)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(225)
			while((true)){
				HX_STACK_LINE(225)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(225)
				int tmp5 = this->exhibitionVisitedObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(225)
				bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(225)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(225)
				if ((tmp7)){
					HX_STACK_LINE(225)
					break;
				}
				HX_STACK_LINE(226)
				::ObjectMuseum tmp8 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(226)
				Dynamic tmp9 = tmp8->GetNameStruct();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(226)
				::String tmp10 = tmp9->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(226)
				::ObjectMuseum tmp11 = this->exhibitionVisitedObjectArray->__get(loopCounter2Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(226)
				Dynamic tmp12 = tmp11->GetNameStruct();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(226)
				::String tmp13 = tmp12->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(226)
				bool tmp14 = (tmp10 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(226)
				if ((tmp14)){
					HX_STACK_LINE(227)
					Float tmp15 = ::Math_obj::random();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(227)
					bool tmp16 = (tmp15 > ((Float)0.9));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(227)
					if ((tmp16)){
						HX_STACK_LINE(228)
						::ObjectMuseum tmp17 = this->exhibitionVisitedObjectArray->__get(loopCounter2Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(228)
						this->exhibitionTargetObjectArray->remove(tmp17);
						HX_STACK_LINE(229)
						(loopCounter1Int)--;
						HX_STACK_LINE(230)
						bool tmp18 = (loopCounter1Int < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(230)
						if ((tmp18)){
							HX_STACK_LINE(230)
							loopCounter1Int = (int)0;
						}
					}
				}
				HX_STACK_LINE(233)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(235)
			int tmp4 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(235)
			int tmp5 = _targetInt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(235)
			bool tmp6 = (tmp4 <= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(235)
			if ((tmp6)){
				HX_STACK_LINE(235)
				return null();
			}
			HX_STACK_LINE(236)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(239)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(240)
		while((true)){
			HX_STACK_LINE(240)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(240)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(240)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(240)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(240)
			if ((tmp3)){
				HX_STACK_LINE(240)
				break;
			}
			HX_STACK_LINE(241)
			Float accumPercentageFloat = (int)0;		HX_STACK_VAR(accumPercentageFloat,"accumPercentageFloat");
			HX_STACK_LINE(242)
			Float basePercentageFloat = ((Float)0.1);		HX_STACK_VAR(basePercentageFloat,"basePercentageFloat");
			HX_STACK_LINE(243)
			int loopCounter2Int = (int)0;		HX_STACK_VAR(loopCounter2Int,"loopCounter2Int");
			HX_STACK_LINE(244)
			int tagSameCounterInt = (int)0;		HX_STACK_VAR(tagSameCounterInt,"tagSameCounterInt");
			HX_STACK_LINE(246)
			while((true)){
				HX_STACK_LINE(246)
				int tmp4 = loopCounter2Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(246)
				::ObjectMuseum tmp5 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(246)
				int tmp6 = tmp5->GetTagObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(246)
				bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(246)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(246)
				if ((tmp8)){
					HX_STACK_LINE(246)
					break;
				}
				HX_STACK_LINE(247)
				::ObjectMuseum tmp9 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(247)
				::ObjectTag tmp10 = tmp9->GetTagObjectArray()->__get(loopCounter2Int).StaticCast< ::ObjectTag >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(247)
				int tmp11 = this->tagObjectArray->indexOf(tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(247)
				bool tmp12 = (tmp11 > (int)-1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(247)
				if ((tmp12)){
					HX_STACK_LINE(248)
					(tagSameCounterInt)++;
				}
				HX_STACK_LINE(250)
				(loopCounter2Int)++;
			}
			HX_STACK_LINE(252)
			Float tmp4 = basePercentageFloat;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(252)
			Float tmp5 = (Float(tagSameCounterInt) / Float((int)10));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(252)
			Float tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(252)
			accumPercentageFloat = tmp6;
			HX_STACK_LINE(253)
			bool tmp7 = (accumPercentageFloat >= ((Float)1.0));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(253)
			if ((tmp7)){
				HX_STACK_LINE(253)
				accumPercentageFloat = ((Float)1.0);
			}
			HX_STACK_LINE(254)
			Float tmp8 = ::Math_obj::random();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(254)
			Float tmp9 = accumPercentageFloat;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(254)
			bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(254)
			if ((tmp10)){
				HX_STACK_LINE(255)
				::ObjectMuseum tmp11 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(255)
				this->exhibitionTargetObjectArray->remove(tmp11);
				HX_STACK_LINE(256)
				(loopCounter1Int)--;
			}
			HX_STACK_LINE(258)
			int tmp11 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(258)
			int tmp12 = _targetInt;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(258)
			bool tmp13 = (tmp11 <= tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(258)
			if ((tmp13)){
				HX_STACK_LINE(258)
				return null();
			}
			HX_STACK_LINE(259)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(262)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(263)
		while((true)){
			HX_STACK_LINE(263)
			int tmp = loopCounter1Int;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(263)
			int tmp1 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(263)
			bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(263)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(263)
			if ((tmp3)){
				HX_STACK_LINE(263)
				break;
			}
			HX_STACK_LINE(264)
			int sameCounterInt = (int)0;		HX_STACK_VAR(sameCounterInt,"sameCounterInt");
			HX_STACK_LINE(265)
			::ObjectMuseum tmp4 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(265)
			::ObjectMuseum tmp5 = tmp4->GetParentObject();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(265)
			::ObjectMuseum roomTargetObject = tmp5;		HX_STACK_VAR(roomTargetObject,"roomTargetObject");
			HX_STACK_LINE(266)
			::ObjectMuseum tmp6 = roomTargetObject->GetParentObject();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(266)
			::ObjectMuseum floorTargetObject = tmp6;		HX_STACK_VAR(floorTargetObject,"floorTargetObject");
			HX_STACK_LINE(267)
			::ObjectMuseum tmp7 = roomTargetObject;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(267)
			::ObjectMuseum tmp8 = this->roomCurrentObject;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(267)
			bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(267)
			if ((tmp9)){
				HX_STACK_LINE(267)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(268)
			::ObjectMuseum tmp10 = floorTargetObject;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(268)
			::ObjectMuseum tmp11 = this->floorCurrentObject;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(268)
			bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(268)
			if ((tmp12)){
				HX_STACK_LINE(268)
				(sameCounterInt)++;
			}
			HX_STACK_LINE(269)
			bool tmp13 = (sameCounterInt == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(269)
			if ((tmp13)){
				HX_STACK_LINE(270)
				Float tmp14 = ::Math_obj::random();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(270)
				bool tmp15 = (tmp14 > ((Float)0.50));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(270)
				if ((tmp15)){
					HX_STACK_LINE(271)
					::ObjectMuseum tmp16 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(271)
					this->exhibitionTargetObjectArray->remove(tmp16);
					HX_STACK_LINE(272)
					(loopCounter1Int)--;
				}
			}
			else{
				HX_STACK_LINE(275)
				bool tmp14 = (sameCounterInt == (int)2);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(275)
				if ((tmp14)){
					HX_STACK_LINE(276)
					Float tmp15 = ::Math_obj::random();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(276)
					bool tmp16 = (tmp15 > ((Float)0.25));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(276)
					if ((tmp16)){
						HX_STACK_LINE(277)
						::ObjectMuseum tmp17 = this->exhibitionTargetObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(277)
						this->exhibitionTargetObjectArray->remove(tmp17);
						HX_STACK_LINE(278)
						(loopCounter1Int)--;
					}
				}
			}
			HX_STACK_LINE(281)
			int tmp14 = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(281)
			int tmp15 = _targetInt;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(281)
			bool tmp16 = (tmp14 <= tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(281)
			if ((tmp16)){
				HX_STACK_LINE(281)
				return null();
			}
			HX_STACK_LINE(282)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(284)
		while((true)){
			HX_STACK_LINE(284)
			int tmp = this->exhibitionTargetObjectArray->length;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(284)
			int tmp1 = _targetInt;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(284)
			bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(284)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(284)
			if ((tmp3)){
				HX_STACK_LINE(284)
				break;
			}
			HX_STACK_LINE(284)
			this->exhibitionTargetObjectArray->pop().StaticCast< ::ObjectMuseum >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,GenerateExhibitionTargetVoid,(void))

::ObjectMuseum ObjectVisitor_obj::GetExhibitionCurrentObject( ){
	HX_STACK_FRAME("ObjectVisitor","GetExhibitionCurrentObject",0x04a84db2,"ObjectVisitor.GetExhibitionCurrentObject","ObjectVisitor.hx",286,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(286)
	::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(286)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExhibitionCurrentObject,return )

Array< ::Dynamic > ObjectVisitor_obj::GetExhibitionTargetObjectArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetExhibitionTargetObjectArray",0xa6360163,"ObjectVisitor.GetExhibitionTargetObjectArray","ObjectVisitor.hx",287,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(287)
	return this->exhibitionTargetObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExhibitionTargetObjectArray,return )

int ObjectVisitor_obj::GetExplanationCurrentIndexInt( ){
	HX_STACK_FRAME("ObjectVisitor","GetExplanationCurrentIndexInt",0x3a68b8f4,"ObjectVisitor.GetExplanationCurrentIndexInt","ObjectVisitor.hx",288,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(288)
	int tmp = this->explanationCurrentIndexInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(288)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExplanationCurrentIndexInt,return )

::String ObjectVisitor_obj::GetExplanationCurrentString( ){
	HX_STACK_FRAME("ObjectVisitor","GetExplanationCurrentString",0x4e944508,"ObjectVisitor.GetExplanationCurrentString","ObjectVisitor.hx",289,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(289)
	::String tmp = this->explanationCurrentString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(289)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExplanationCurrentString,return )

Array< ::String > ObjectVisitor_obj::GetExplanationStringArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetExplanationStringArray",0xeff616a6,"ObjectVisitor.GetExplanationStringArray","ObjectVisitor.hx",290,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	return this->explanationStringArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetExplanationStringArray,return )

bool ObjectVisitor_obj::GetFinishedBool( ){
	HX_STACK_FRAME("ObjectVisitor","GetFinishedBool",0x56cdf673,"ObjectVisitor.GetFinishedBool","ObjectVisitor.hx",291,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetFinishedBool,return )

int ObjectVisitor_obj::GetIndexGlobalInt( ){
	HX_STACK_FRAME("ObjectVisitor","GetIndexGlobalInt",0xd2c1d351,"ObjectVisitor.GetIndexGlobalInt","ObjectVisitor.hx",292,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(292)
	int tmp = this->indexGlobalInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetIndexGlobalInt,return )

int ObjectVisitor_obj::GetIndexLocalInt( ){
	HX_STACK_FRAME("ObjectVisitor","GetIndexLocalInt",0x9b8f97df,"ObjectVisitor.GetIndexLocalInt","ObjectVisitor.hx",293,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(293)
	int tmp = this->indexLocalInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetIndexLocalInt,return )

::String ObjectVisitor_obj::GetNameString( ){
	HX_STACK_FRAME("ObjectVisitor","GetNameString",0xa627bf73,"ObjectVisitor.GetNameString","ObjectVisitor.hx",294,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(294)
	::String tmp = this->nameString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetNameString,return )

int ObjectVisitor_obj::GetScoreInt( ){
	HX_STACK_FRAME("ObjectVisitor","GetScoreInt",0x032bdaf4,"ObjectVisitor.GetScoreInt","ObjectVisitor.hx",295,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(295)
	int tmp = this->scoreInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetScoreInt,return )

Array< ::String > ObjectVisitor_obj::GetSentenceStringArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetSentenceStringArray",0x830c324e,"ObjectVisitor.GetSentenceStringArray","ObjectVisitor.hx",296,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(296)
	return this->sentenceStringArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetSentenceStringArray,return )

cpp::ArrayBase ObjectVisitor_obj::GetTagCounterStructArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetTagCounterStructArray",0x729f3dcb,"ObjectVisitor.GetTagCounterStructArray","ObjectVisitor.hx",297,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	return this->tagCounterStructArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetTagCounterStructArray,return )

Array< ::Dynamic > ObjectVisitor_obj::GetTagObjectArray( ){
	HX_STACK_FRAME("ObjectVisitor","GetTagObjectArray",0xee77bf97,"ObjectVisitor.GetTagObjectArray","ObjectVisitor.hx",298,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(298)
	return this->tagObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetTagObjectArray,return )

bool ObjectVisitor_obj::GetVisitCorrectExhibitionBool( ){
	HX_STACK_FRAME("ObjectVisitor","GetVisitCorrectExhibitionBool",0x6c55624f,"ObjectVisitor.GetVisitCorrectExhibitionBool","ObjectVisitor.hx",299,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(299)
	bool tmp = this->visitedCorrectExhibitionBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(299)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetVisitCorrectExhibitionBool,return )

::EnumVisitorMode ObjectVisitor_obj::GetVisitorModeEnum( ){
	HX_STACK_FRAME("ObjectVisitor","GetVisitorModeEnum",0x1dd5307b,"ObjectVisitor.GetVisitorModeEnum","ObjectVisitor.hx",300,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(300)
	::EnumVisitorMode tmp = this->visitorModeEnum;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(300)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetVisitorModeEnum,return )

::ObjectVisitorUI ObjectVisitor_obj::GetVisitorUIObject( ){
	HX_STACK_FRAME("ObjectVisitor","GetVisitorUIObject",0xb3f4d08a,"ObjectVisitor.GetVisitorUIObject","ObjectVisitor.hx",301,0xe713038f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(301)
	::ObjectVisitorUI tmp = this->visitorUIObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(301)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,GetVisitorUIObject,return )

Void ObjectVisitor_obj::ResetVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","ResetVoid",0xb02ba204,"ObjectVisitor.ResetVoid","ObjectVisitor.hx",302,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		::CollectionFunction_obj::ClearArray(this->exhibitionVisitedObjectArray);
		HX_STACK_LINE(304)
		::CollectionFunction_obj::ClearArray(this->explanationStringArray);
		HX_STACK_LINE(305)
		::CollectionFunction_obj::ClearArray(this->sentenceStringArray);
		HX_STACK_LINE(306)
		this->finishedBool = false;
		HX_STACK_LINE(307)
		this->scoreInt = (int)0;
		HX_STACK_LINE(308)
		this->visitedCorrectExhibitionBool = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,ResetVoid,(void))

Void ObjectVisitor_obj::SetIndexLocalIntVoid( int _indexLocalInt){
{
		HX_STACK_FRAME("ObjectVisitor","SetIndexLocalIntVoid",0xfce71a47,"ObjectVisitor.SetIndexLocalIntVoid","ObjectVisitor.hx",310,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_indexLocalInt,"_indexLocalInt")
		HX_STACK_LINE(310)
		this->indexLocalInt = _indexLocalInt;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,SetIndexLocalIntVoid,(void))

Void ObjectVisitor_obj::SetNameStringVoid( ::String _nameString,::UIPopupEditObjectVisitor _uiPopupEditObjectVisitor){
{
		HX_STACK_FRAME("ObjectVisitor","SetNameStringVoid",0x6222bc73,"ObjectVisitor.SetNameStringVoid","ObjectVisitor.hx",311,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nameString,"_nameString")
		HX_STACK_ARG(_uiPopupEditObjectVisitor,"_uiPopupEditObjectVisitor")
		HX_STACK_LINE(312)
		this->nameString = _nameString;
		HX_STACK_LINE(314)
		::ObjectVisitorUI tmp = this->visitorUIObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		::haxe::ui::toolkit::controls::Button tmp1 = tmp->GetButtonObject();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		::String tmp2 = this->nameString;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		::String tmp3 = (HX_HCSTRING("Button*","\xd8","\x79","\xc6","\x97") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		tmp1->set_id(tmp3);
		HX_STACK_LINE(315)
		bool tmp4 = (_uiPopupEditObjectVisitor != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(315)
		if ((tmp4)){
			HX_STACK_LINE(316)
			_uiPopupEditObjectVisitor->UpdateVisitorButtonObjectArrayVoid();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVisitor_obj,SetNameStringVoid,(void))

Void ObjectVisitor_obj::SetVisitorModeEnumVoid( ::EnumVisitorMode _visitorModeEnum){
{
		HX_STACK_FRAME("ObjectVisitor","SetVisitorModeEnumVoid",0xa74ef5e3,"ObjectVisitor.SetVisitorModeEnumVoid","ObjectVisitor.hx",319,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorModeEnum,"_visitorModeEnum")
		HX_STACK_LINE(319)
		this->visitorModeEnum = _visitorModeEnum;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVisitor_obj,SetVisitorModeEnumVoid,(void))

Void ObjectVisitor_obj::UpdateHeavyVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","UpdateHeavyVoid",0xafd8eeb3,"ObjectVisitor.UpdateHeavyVoid","ObjectVisitor.hx",320,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		::ObjectMuseum tmp = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(321)
		::ObjectMuseum tmp1 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(321)
		int tmp2 = tmp1->GetVisitorCurrentInt();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(321)
		int tmp3 = (tmp2 + (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		tmp->SetVisitorCurrentIntVoid(tmp3);
		HX_STACK_LINE(322)
		::ObjectMuseum tmp4 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(322)
		::ObjectMuseum tmp5 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(322)
		int tmp6 = tmp5->GetVisitorTotalInt();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(322)
		int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(322)
		tmp4->SetVisitorTotalIntVoid(tmp7);
		HX_STACK_LINE(323)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(324)
		while((true)){
			HX_STACK_LINE(324)
			int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(324)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(324)
			int tmp10 = tmp9->GetFloorObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(324)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(324)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(324)
			if ((tmp12)){
				HX_STACK_LINE(324)
				break;
			}
			HX_STACK_LINE(325)
			::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(325)
			::ObjectMuseum tmp14 = tmp13->GetFloorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(325)
			tmp14->DetermineFullVoid();
			HX_STACK_LINE(326)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(328)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(329)
		while((true)){
			HX_STACK_LINE(329)
			int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(329)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(329)
			int tmp10 = tmp9->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(329)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(329)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(329)
			if ((tmp12)){
				HX_STACK_LINE(329)
				break;
			}
			HX_STACK_LINE(330)
			::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(330)
			::ObjectMuseum tmp14 = tmp13->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(330)
			tmp14->DetermineFullVoid();
			HX_STACK_LINE(331)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(333)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(334)
		while((true)){
			HX_STACK_LINE(334)
			int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(334)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(334)
			int tmp10 = tmp9->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(334)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(334)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(334)
			if ((tmp12)){
				HX_STACK_LINE(334)
				break;
			}
			HX_STACK_LINE(335)
			::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(335)
			::ObjectMuseum tmp14 = tmp13->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(335)
			Dynamic tmp15 = tmp14->GetNameStruct();		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(335)
			::String tmp16 = tmp15->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(335)
			bool tmp17 = (tmp16 != HX_HCSTRING("EXH_ARC","\x28","\x66","\x87","\x18"));		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(335)
			if ((tmp17)){
				HX_STACK_LINE(336)
				::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(336)
				::ObjectMuseum tmp19 = tmp18->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(336)
				tmp19->DetermineChildVoid();
				HX_STACK_LINE(337)
				::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(337)
				::ObjectMuseum tmp21 = tmp20->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(337)
				tmp21->DetermineFullVoid();
			}
			HX_STACK_LINE(339)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(341)
		loopCounter1Int = (int)0;
		HX_STACK_LINE(342)
		int necessaryHeightInt = (int)0;		HX_STACK_VAR(necessaryHeightInt,"necessaryHeightInt");
		HX_STACK_LINE(343)
		while((true)){
			HX_STACK_LINE(343)
			int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(343)
			::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(343)
			int tmp10 = tmp9->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(343)
			bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(343)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(343)
			if ((tmp12)){
				HX_STACK_LINE(343)
				break;
			}
			HX_STACK_LINE(344)
			::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(344)
			::ObjectVisitor tmp14 = tmp13->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(344)
			tmp14->DetermineIndexLocalVoid();
			HX_STACK_LINE(345)
			::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(345)
			::ObjectVisitor tmp16 = tmp15->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(345)
			int tmp17 = this->targetInt;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(345)
			tmp16->GenerateExhibitionTargetVoid(tmp17);
			HX_STACK_LINE(346)
			::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(346)
			::ObjectVisitor tmp19 = tmp18->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(346)
			::ObjectVisitorUI tmp20 = tmp19->GetVisitorUIObject();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(346)
			tmp20->UpdateVoid();
			HX_STACK_LINE(347)
			int tmp21 = necessaryHeightInt;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(347)
			::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(347)
			::ObjectVisitor tmp23 = tmp22->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(347)
			::ObjectVisitorUI tmp24 = tmp23->GetVisitorUIObject();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(347)
			::haxe::ui::toolkit::controls::Button tmp25 = tmp24->GetButtonObject();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(347)
			Float tmp26 = tmp25->get_y();		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(347)
			::CollectionGlobal tmp27 = this->collectionGlobalObject;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(347)
			::ObjectVisitor tmp28 = tmp27->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(347)
			::ObjectVisitorUI tmp29 = tmp28->GetVisitorUIObject();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(347)
			::haxe::ui::toolkit::controls::Button tmp30 = tmp29->GetButtonObject();		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(347)
			Float tmp31 = tmp30->get_height();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(347)
			Float tmp32 = (tmp26 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(347)
			int tmp33 = ::Math_obj::round(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(347)
			bool tmp34 = (tmp21 < tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(347)
			if ((tmp34)){
				HX_STACK_LINE(348)
				::CollectionGlobal tmp35 = this->collectionGlobalObject;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(348)
				::ObjectVisitor tmp36 = tmp35->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(348)
				::ObjectVisitorUI tmp37 = tmp36->GetVisitorUIObject();		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(348)
				::haxe::ui::toolkit::controls::Button tmp38 = tmp37->GetButtonObject();		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(348)
				Float tmp39 = tmp38->get_y();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(348)
				::CollectionGlobal tmp40 = this->collectionGlobalObject;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(348)
				::ObjectVisitor tmp41 = tmp40->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(348)
				::ObjectVisitorUI tmp42 = tmp41->GetVisitorUIObject();		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(348)
				::haxe::ui::toolkit::controls::Button tmp43 = tmp42->GetButtonObject();		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(348)
				Float tmp44 = tmp43->get_height();		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(348)
				Float tmp45 = (tmp39 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(348)
				int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(348)
				necessaryHeightInt = tmp46;
			}
			HX_STACK_LINE(350)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(352)
		::CollectionGlobal tmp8 = this->collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(352)
		::haxe::ui::toolkit::containers::Absolute tmp9 = tmp8->GetUIMuseumAbsoluteObject();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(352)
		int tmp10 = necessaryHeightInt;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(352)
		tmp9->set_height(tmp10);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectVisitor.hx",354,0xe713038f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b") , (int)0,false);
					__result->Add(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(354)
		Dynamic tmp11 = _Function_1_1::Block();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(354)
		Dynamic visitorVisitExhibitionStruct = tmp11;		HX_STACK_VAR(visitorVisitExhibitionStruct,"visitorVisitExhibitionStruct");
		HX_STACK_LINE(358)
		int tmp12 = this->timeExhibitionInt;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(358)
		visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("currentExhibitionTimeInt","\xda","\xc9","\x34","\x4b")) = tmp12;
		HX_STACK_LINE(359)
		::ObjectMuseum tmp13 = this->exhibitionCurrentObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(359)
		Dynamic tmp14 = tmp13->GetNameStruct();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(359)
		visitorVisitExhibitionStruct->__FieldRef(HX_HCSTRING("exhibitionNameAltString","\x40","\x09","\xca","\x3c")) = tmp14->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );
		HX_STACK_LINE(360)
		Dynamic tmp15 = visitorVisitExhibitionStruct;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(360)
		this->visitExhibitionStructArray->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp15);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,UpdateHeavyVoid,(void))

Void ObjectVisitor_obj::UpdateVoid( ){
{
		HX_STACK_FRAME("ObjectVisitor","UpdateVoid",0x5977719c,"ObjectVisitor.UpdateVoid","ObjectVisitor.hx",362,0xe713038f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(364)
		bool tmp = this->finishedBool;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		bool tmp1 = (tmp == false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(364)
		if ((tmp1)){
			HX_STACK_LINE(364)
			::EnumVisitorMode tmp3 = this->visitorModeEnum;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(364)
			::EnumVisitorMode tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(364)
			tmp2 = (tmp4 == ::EnumVisitorMode_obj::SOFTWARE_AUTO);
		}
		else{
			HX_STACK_LINE(364)
			tmp2 = false;
		}
		HX_STACK_LINE(364)
		if ((tmp2)){
			HX_STACK_LINE(365)
			this->AIAutoExhibitionChangeVoid();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVisitor_obj,UpdateVoid,(void))


ObjectVisitor_obj::ObjectVisitor_obj()
{
}

void ObjectVisitor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectVisitor);
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(exhibitionCurrentObject,"exhibitionCurrentObject");
	HX_MARK_MEMBER_NAME(exhibitionTargetObjectArray,"exhibitionTargetObjectArray");
	HX_MARK_MEMBER_NAME(exhibitionVisitedObjectArray,"exhibitionVisitedObjectArray");
	HX_MARK_MEMBER_NAME(explanationCurrentIndexInt,"explanationCurrentIndexInt");
	HX_MARK_MEMBER_NAME(explanationCurrentString,"explanationCurrentString");
	HX_MARK_MEMBER_NAME(explanationStringArray,"explanationStringArray");
	HX_MARK_MEMBER_NAME(finishedBool,"finishedBool");
	HX_MARK_MEMBER_NAME(floorCurrentObject,"floorCurrentObject");
	HX_MARK_MEMBER_NAME(generatorSentenceObject,"generatorSentenceObject");
	HX_MARK_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_MARK_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_MARK_MEMBER_NAME(nameString,"nameString");
	HX_MARK_MEMBER_NAME(roomCurrentObject,"roomCurrentObject");
	HX_MARK_MEMBER_NAME(scoreInt,"scoreInt");
	HX_MARK_MEMBER_NAME(sentenceStringArray,"sentenceStringArray");
	HX_MARK_MEMBER_NAME(tagCounterStructArray,"tagCounterStructArray");
	HX_MARK_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_MARK_MEMBER_NAME(targetInt,"targetInt");
	HX_MARK_MEMBER_NAME(timeAIAutoExhibitionChangeFloat,"timeAIAutoExhibitionChangeFloat");
	HX_MARK_MEMBER_NAME(timeExhibitionInt,"timeExhibitionInt");
	HX_MARK_MEMBER_NAME(timeMuseumInt,"timeMuseumInt");
	HX_MARK_MEMBER_NAME(visitedCorrectExhibitionBool,"visitedCorrectExhibitionBool");
	HX_MARK_MEMBER_NAME(visitExhibitionStructArray,"visitExhibitionStructArray");
	HX_MARK_MEMBER_NAME(visitMuseumStructArray,"visitMuseumStructArray");
	HX_MARK_MEMBER_NAME(visitorModeEnum,"visitorModeEnum");
	HX_MARK_MEMBER_NAME(visitorUIObject,"visitorUIObject");
	HX_MARK_END_CLASS();
}

void ObjectVisitor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(exhibitionCurrentObject,"exhibitionCurrentObject");
	HX_VISIT_MEMBER_NAME(exhibitionTargetObjectArray,"exhibitionTargetObjectArray");
	HX_VISIT_MEMBER_NAME(exhibitionVisitedObjectArray,"exhibitionVisitedObjectArray");
	HX_VISIT_MEMBER_NAME(explanationCurrentIndexInt,"explanationCurrentIndexInt");
	HX_VISIT_MEMBER_NAME(explanationCurrentString,"explanationCurrentString");
	HX_VISIT_MEMBER_NAME(explanationStringArray,"explanationStringArray");
	HX_VISIT_MEMBER_NAME(finishedBool,"finishedBool");
	HX_VISIT_MEMBER_NAME(floorCurrentObject,"floorCurrentObject");
	HX_VISIT_MEMBER_NAME(generatorSentenceObject,"generatorSentenceObject");
	HX_VISIT_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_VISIT_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_VISIT_MEMBER_NAME(nameString,"nameString");
	HX_VISIT_MEMBER_NAME(roomCurrentObject,"roomCurrentObject");
	HX_VISIT_MEMBER_NAME(scoreInt,"scoreInt");
	HX_VISIT_MEMBER_NAME(sentenceStringArray,"sentenceStringArray");
	HX_VISIT_MEMBER_NAME(tagCounterStructArray,"tagCounterStructArray");
	HX_VISIT_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_VISIT_MEMBER_NAME(targetInt,"targetInt");
	HX_VISIT_MEMBER_NAME(timeAIAutoExhibitionChangeFloat,"timeAIAutoExhibitionChangeFloat");
	HX_VISIT_MEMBER_NAME(timeExhibitionInt,"timeExhibitionInt");
	HX_VISIT_MEMBER_NAME(timeMuseumInt,"timeMuseumInt");
	HX_VISIT_MEMBER_NAME(visitedCorrectExhibitionBool,"visitedCorrectExhibitionBool");
	HX_VISIT_MEMBER_NAME(visitExhibitionStructArray,"visitExhibitionStructArray");
	HX_VISIT_MEMBER_NAME(visitMuseumStructArray,"visitMuseumStructArray");
	HX_VISIT_MEMBER_NAME(visitorModeEnum,"visitorModeEnum");
	HX_VISIT_MEMBER_NAME(visitorUIObject,"visitorUIObject");
}

Dynamic ObjectVisitor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"scoreInt") ) { return scoreInt; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"targetInt") ) { return targetInt; }
		if (HX_FIELD_EQ(inName,"ResetVoid") ) { return ResetVoid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameString") ) { return nameString; }
		if (HX_FIELD_EQ(inName,"UpdateVoid") ) { return UpdateVoid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"GetScoreInt") ) { return GetScoreInt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"finishedBool") ) { return finishedBool; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { return indexLocalInt; }
		if (HX_FIELD_EQ(inName,"timeMuseumInt") ) { return timeMuseumInt; }
		if (HX_FIELD_EQ(inName,"GetNameString") ) { return GetNameString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { return indexGlobalInt; }
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { return tagObjectArray; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visitorModeEnum") ) { return visitorModeEnum; }
		if (HX_FIELD_EQ(inName,"visitorUIObject") ) { return visitorUIObject; }
		if (HX_FIELD_EQ(inName,"GetFinishedBool") ) { return GetFinishedBool_dyn(); }
		if (HX_FIELD_EQ(inName,"UpdateHeavyVoid") ) { return UpdateHeavyVoid_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetIndexLocalInt") ) { return GetIndexLocalInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"roomCurrentObject") ) { return roomCurrentObject; }
		if (HX_FIELD_EQ(inName,"timeExhibitionInt") ) { return timeExhibitionInt; }
		if (HX_FIELD_EQ(inName,"AddTagCounterVoid") ) { return AddTagCounterVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetIndexGlobalInt") ) { return GetIndexGlobalInt_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTagObjectArray") ) { return GetTagObjectArray_dyn(); }
		if (HX_FIELD_EQ(inName,"SetNameStringVoid") ) { return SetNameStringVoid_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"floorCurrentObject") ) { return floorCurrentObject; }
		if (HX_FIELD_EQ(inName,"SortTagCounterVoid") ) { return SortTagCounterVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitorModeEnum") ) { return GetVisitorModeEnum_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitorUIObject") ) { return GetVisitorUIObject_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sentenceStringArray") ) { return sentenceStringArray; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"SetIndexLocalIntVoid") ) { return SetIndexLocalIntVoid_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tagCounterStructArray") ) { return tagCounterStructArray; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { return explanationStringArray; }
		if (HX_FIELD_EQ(inName,"visitMuseumStructArray") ) { return visitMuseumStructArray; }
		if (HX_FIELD_EQ(inName,"GetSentenceStringArray") ) { return GetSentenceStringArray_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVisitorModeEnumVoid") ) { return SetVisitorModeEnumVoid_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"exhibitionCurrentObject") ) { return exhibitionCurrentObject; }
		if (HX_FIELD_EQ(inName,"generatorSentenceObject") ) { return generatorSentenceObject; }
		if (HX_FIELD_EQ(inName,"DetermineIndexLocalVoid") ) { return DetermineIndexLocalVoid_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"explanationCurrentString") ) { return explanationCurrentString; }
		if (HX_FIELD_EQ(inName,"GetTagCounterStructArray") ) { return GetTagCounterStructArray_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"GetExplanationStringArray") ) { return GetExplanationStringArray_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"explanationCurrentIndexInt") ) { return explanationCurrentIndexInt; }
		if (HX_FIELD_EQ(inName,"visitExhibitionStructArray") ) { return visitExhibitionStructArray; }
		if (HX_FIELD_EQ(inName,"AIAutoExhibitionChangeVoid") ) { return AIAutoExhibitionChangeVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetExhibitionCurrentObject") ) { return GetExhibitionCurrentObject_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"exhibitionTargetObjectArray") ) { return exhibitionTargetObjectArray; }
		if (HX_FIELD_EQ(inName,"ChangeExhibitionCurrentVoid") ) { return ChangeExhibitionCurrentVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetExplanationCurrentString") ) { return GetExplanationCurrentString_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"exhibitionVisitedObjectArray") ) { return exhibitionVisitedObjectArray; }
		if (HX_FIELD_EQ(inName,"visitedCorrectExhibitionBool") ) { return visitedCorrectExhibitionBool; }
		if (HX_FIELD_EQ(inName,"GenerateExhibitionTargetVoid") ) { return GenerateExhibitionTargetVoid_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"GetExplanationCurrentIndexInt") ) { return GetExplanationCurrentIndexInt_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitCorrectExhibitionBool") ) { return GetVisitCorrectExhibitionBool_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"GetExhibitionTargetObjectArray") ) { return GetExhibitionTargetObjectArray_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"timeAIAutoExhibitionChangeFloat") ) { return timeAIAutoExhibitionChangeFloat; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"AddRemoveVisitorFromExhibitionVoid") ) { return AddRemoveVisitorFromExhibitionVoid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectVisitor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"scoreInt") ) { scoreInt=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"targetInt") ) { targetInt=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameString") ) { nameString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"finishedBool") ) { finishedBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { indexLocalInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeMuseumInt") ) { timeMuseumInt=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { indexGlobalInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { tagObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visitorModeEnum") ) { visitorModeEnum=inValue.Cast< ::EnumVisitorMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitorUIObject") ) { visitorUIObject=inValue.Cast< ::ObjectVisitorUI >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"roomCurrentObject") ) { roomCurrentObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeExhibitionInt") ) { timeExhibitionInt=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"floorCurrentObject") ) { floorCurrentObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sentenceStringArray") ) { sentenceStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tagCounterStructArray") ) { tagCounterStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { explanationStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitMuseumStructArray") ) { visitMuseumStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"exhibitionCurrentObject") ) { exhibitionCurrentObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		if (HX_FIELD_EQ(inName,"generatorSentenceObject") ) { generatorSentenceObject=inValue.Cast< ::ObjectGeneratorSentence >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"explanationCurrentString") ) { explanationCurrentString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"explanationCurrentIndexInt") ) { explanationCurrentIndexInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitExhibitionStructArray") ) { visitExhibitionStructArray=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"exhibitionTargetObjectArray") ) { exhibitionTargetObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"exhibitionVisitedObjectArray") ) { exhibitionVisitedObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visitedCorrectExhibitionBool") ) { visitedCorrectExhibitionBool=inValue.Cast< bool >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"timeAIAutoExhibitionChangeFloat") ) { timeAIAutoExhibitionChangeFloat=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectVisitor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("exhibitionCurrentObject","\x09","\x62","\x00","\xc9"));
	outFields->push(HX_HCSTRING("exhibitionTargetObjectArray","\x3a","\x8d","\x04","\x92"));
	outFields->push(HX_HCSTRING("exhibitionVisitedObjectArray","\xbf","\x87","\x10","\x7f"));
	outFields->push(HX_HCSTRING("explanationCurrentIndexInt","\xfd","\xb4","\xd6","\x2e"));
	outFields->push(HX_HCSTRING("explanationCurrentString","\xd1","\xfc","\x4d","\x57"));
	outFields->push(HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd"));
	outFields->push(HX_HCSTRING("finishedBool","\xbc","\xe4","\xf6","\xea"));
	outFields->push(HX_HCSTRING("floorCurrentObject","\x6c","\x4e","\x65","\x7b"));
	outFields->push(HX_HCSTRING("generatorSentenceObject","\x75","\x5b","\x5f","\x22"));
	outFields->push(HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"));
	outFields->push(HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"));
	outFields->push(HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"));
	outFields->push(HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b"));
	outFields->push(HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"));
	outFields->push(HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79"));
	outFields->push(HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a"));
	outFields->push(HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"));
	outFields->push(HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69"));
	outFields->push(HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc"));
	outFields->push(HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59"));
	outFields->push(HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b"));
	outFields->push(HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a"));
	outFields->push(HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71"));
	outFields->push(HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75"));
	outFields->push(HX_HCSTRING("visitorModeEnum","\xd2","\x95","\xb5","\x13"));
	outFields->push(HX_HCSTRING("visitorUIObject","\xe1","\x35","\xd5","\xa9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(ObjectVisitor_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectVisitor_obj,exhibitionCurrentObject),HX_HCSTRING("exhibitionCurrentObject","\x09","\x62","\x00","\xc9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectVisitor_obj,exhibitionTargetObjectArray),HX_HCSTRING("exhibitionTargetObjectArray","\x3a","\x8d","\x04","\x92")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectVisitor_obj,exhibitionVisitedObjectArray),HX_HCSTRING("exhibitionVisitedObjectArray","\xbf","\x87","\x10","\x7f")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,explanationCurrentIndexInt),HX_HCSTRING("explanationCurrentIndexInt","\xfd","\xb4","\xd6","\x2e")},
	{hx::fsString,(int)offsetof(ObjectVisitor_obj,explanationCurrentString),HX_HCSTRING("explanationCurrentString","\xd1","\xfc","\x4d","\x57")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectVisitor_obj,explanationStringArray),HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd")},
	{hx::fsBool,(int)offsetof(ObjectVisitor_obj,finishedBool),HX_HCSTRING("finishedBool","\xbc","\xe4","\xf6","\xea")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectVisitor_obj,floorCurrentObject),HX_HCSTRING("floorCurrentObject","\x6c","\x4e","\x65","\x7b")},
	{hx::fsObject /*::ObjectGeneratorSentence*/ ,(int)offsetof(ObjectVisitor_obj,generatorSentenceObject),HX_HCSTRING("generatorSentenceObject","\x75","\x5b","\x5f","\x22")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,indexGlobalInt),HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,indexLocalInt),HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab")},
	{hx::fsString,(int)offsetof(ObjectVisitor_obj,nameString),HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectVisitor_obj,roomCurrentObject),HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,scoreInt),HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectVisitor_obj,sentenceStringArray),HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,tagCounterStructArray),HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectVisitor_obj,tagObjectArray),HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,targetInt),HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69")},
	{hx::fsFloat,(int)offsetof(ObjectVisitor_obj,timeAIAutoExhibitionChangeFloat),HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,timeExhibitionInt),HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59")},
	{hx::fsInt,(int)offsetof(ObjectVisitor_obj,timeMuseumInt),HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b")},
	{hx::fsBool,(int)offsetof(ObjectVisitor_obj,visitedCorrectExhibitionBool),HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,visitExhibitionStructArray),HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVisitor_obj,visitMuseumStructArray),HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75")},
	{hx::fsObject /*::EnumVisitorMode*/ ,(int)offsetof(ObjectVisitor_obj,visitorModeEnum),HX_HCSTRING("visitorModeEnum","\xd2","\x95","\xb5","\x13")},
	{hx::fsObject /*::ObjectVisitorUI*/ ,(int)offsetof(ObjectVisitor_obj,visitorUIObject),HX_HCSTRING("visitorUIObject","\xe1","\x35","\xd5","\xa9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("exhibitionCurrentObject","\x09","\x62","\x00","\xc9"),
	HX_HCSTRING("exhibitionTargetObjectArray","\x3a","\x8d","\x04","\x92"),
	HX_HCSTRING("exhibitionVisitedObjectArray","\xbf","\x87","\x10","\x7f"),
	HX_HCSTRING("explanationCurrentIndexInt","\xfd","\xb4","\xd6","\x2e"),
	HX_HCSTRING("explanationCurrentString","\xd1","\xfc","\x4d","\x57"),
	HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd"),
	HX_HCSTRING("finishedBool","\xbc","\xe4","\xf6","\xea"),
	HX_HCSTRING("floorCurrentObject","\x6c","\x4e","\x65","\x7b"),
	HX_HCSTRING("generatorSentenceObject","\x75","\x5b","\x5f","\x22"),
	HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"),
	HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"),
	HX_HCSTRING("nameString","\x7c","\x59","\xaf","\x95"),
	HX_HCSTRING("roomCurrentObject","\xbd","\x6c","\xe8","\x6b"),
	HX_HCSTRING("scoreInt","\xbd","\xb0","\xbb","\x0e"),
	HX_HCSTRING("sentenceStringArray","\x25","\x8f","\x5f","\x79"),
	HX_HCSTRING("tagCounterStructArray","\x62","\xbe","\x24","\x2a"),
	HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"),
	HX_HCSTRING("targetInt","\x1e","\xfa","\x2e","\x69"),
	HX_HCSTRING("timeAIAutoExhibitionChangeFloat","\x19","\xf7","\x92","\xfc"),
	HX_HCSTRING("timeExhibitionInt","\x93","\x37","\xfa","\x59"),
	HX_HCSTRING("timeMuseumInt","\x70","\x37","\xd2","\x9b"),
	HX_HCSTRING("visitedCorrectExhibitionBool","\xd9","\x1e","\x9a","\x2a"),
	HX_HCSTRING("visitExhibitionStructArray","\x2a","\xe3","\xc5","\x71"),
	HX_HCSTRING("visitMuseumStructArray","\x07","\x1f","\xd7","\x75"),
	HX_HCSTRING("visitorModeEnum","\xd2","\x95","\xb5","\x13"),
	HX_HCSTRING("visitorUIObject","\xe1","\x35","\xd5","\xa9"),
	HX_HCSTRING("AddRemoveVisitorFromExhibitionVoid","\xb6","\xdd","\xf7","\x95"),
	HX_HCSTRING("AddTagCounterVoid","\x17","\x32","\xf9","\x30"),
	HX_HCSTRING("ChangeExhibitionCurrentVoid","\x6e","\x40","\xc6","\xa3"),
	HX_HCSTRING("SortTagCounterVoid","\x54","\x9c","\x8b","\xe3"),
	HX_HCSTRING("AIAutoExhibitionChangeVoid","\x2a","\xa8","\xc9","\xe7"),
	HX_HCSTRING("DetermineIndexLocalVoid","\xc0","\xcf","\x13","\xe8"),
	HX_HCSTRING("GenerateExhibitionTargetVoid","\x69","\x34","\xd2","\x3b"),
	HX_HCSTRING("GetExhibitionCurrentObject","\x33","\x60","\x47","\xbe"),
	HX_HCSTRING("GetExhibitionTargetObjectArray","\x64","\xe8","\x76","\x98"),
	HX_HCSTRING("GetExplanationCurrentIndexInt","\x13","\x6d","\x45","\x49"),
	HX_HCSTRING("GetExplanationCurrentString","\x67","\x63","\x25","\x00"),
	HX_HCSTRING("GetExplanationStringArray","\x45","\x8f","\x80","\xcf"),
	HX_HCSTRING("GetFinishedBool","\x52","\x42","\x6d","\x6e"),
	HX_HCSTRING("GetIndexGlobalInt","\xf0","\x14","\xb3","\x89"),
	HX_HCSTRING("GetIndexLocalInt","\x20","\xaf","\x52","\x2f"),
	HX_HCSTRING("GetNameString","\x92","\x05","\x12","\x3a"),
	HX_HCSTRING("GetScoreInt","\x53","\x0b","\xe2","\x18"),
	HX_HCSTRING("GetSentenceStringArray","\x4f","\xb0","\xad","\xc7"),
	HX_HCSTRING("GetTagCounterStructArray","\x0c","\xfe","\x1c","\x41"),
	HX_HCSTRING("GetTagObjectArray","\x36","\x01","\x69","\xa5"),
	HX_HCSTRING("GetVisitCorrectExhibitionBool","\x6e","\x16","\x32","\x7b"),
	HX_HCSTRING("GetVisitorModeEnum","\xfc","\x59","\xfd","\x79"),
	HX_HCSTRING("GetVisitorUIObject","\x0b","\xfa","\x1c","\x10"),
	HX_HCSTRING("ResetVoid","\xa3","\xac","\x12","\x36"),
	HX_HCSTRING("SetIndexLocalIntVoid","\x08","\x66","\x8d","\xd2"),
	HX_HCSTRING("SetNameStringVoid","\x12","\xfe","\x13","\x19"),
	HX_HCSTRING("SetVisitorModeEnumVoid","\xe4","\x73","\xf0","\xeb"),
	HX_HCSTRING("UpdateHeavyVoid","\x92","\x3a","\x78","\xc7"),
	HX_HCSTRING("UpdateVoid","\x1d","\xb2","\xb9","\xfd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectVisitor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectVisitor_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectVisitor_obj::__mClass;

void ObjectVisitor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectVisitor","\x8f","\x02","\xe3","\xd9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectVisitor_obj >;
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

