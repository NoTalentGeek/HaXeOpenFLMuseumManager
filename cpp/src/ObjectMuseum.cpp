#include <hxcpp.h>

#ifndef INCLUDED_CollectionFunction
#include <CollectionFunction.h>
#endif
#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_EnumMuseumType
#include <EnumMuseumType.h>
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

Void ObjectMuseum_obj::__construct(::CollectionGlobal _collectionGlobalObject,::String _nameAltString,::String _nameFullString,::String _parentNameAltString,::EnumMuseumType _typeEnum)
{
HX_STACK_FRAME("ObjectMuseum","new",0x743c1c83,"ObjectMuseum.new","ObjectMuseum.hx",4,0x96e8244d)
HX_STACK_THIS(this)
HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
HX_STACK_ARG(_nameAltString,"_nameAltString")
HX_STACK_ARG(_nameFullString,"_nameFullString")
HX_STACK_ARG(_parentNameAltString,"_parentNameAltString")
HX_STACK_ARG(_typeEnum,"_typeEnum")
{
	HX_STACK_LINE(17)
	this->visitorTotalInt = (int)0;
	HX_STACK_LINE(16)
	this->visitorCurrentInt = (int)0;
	HX_STACK_LINE(15)
	this->typeEnum = null();
	HX_STACK_LINE(14)
	this->tagObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(13)
	this->siblingObjectArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(12)
	this->parentObject = null();
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectMuseum.hx",11,0x96e8244d)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
				__result->Add(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(11)
	this->nameStruct = _Function_1_1::Block();
	HX_STACK_LINE(10)
	this->indexLocalInt = (int)-1;
	HX_STACK_LINE(9)
	this->indexGlobalInt = (int)-1;
	HX_STACK_LINE(8)
	this->fullBool = false;
	HX_STACK_LINE(7)
	this->explanationStringArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(6)
	this->collectionGlobalObject = null();
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ObjectMuseum.hx",5,0x96e8244d)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67") , Array_obj< ::Dynamic >::__new(),false);
				__result->Add(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c") , Array_obj< ::Dynamic >::__new(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(5)
	this->childStruct = _Function_1_2::Block();
	HX_STACK_LINE(25)
	this->collectionGlobalObject = _collectionGlobalObject;
	HX_STACK_LINE(26)
	Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	tmp->__FieldRef(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c")) = _nameAltString;
	HX_STACK_LINE(27)
	Dynamic tmp1 = this->nameStruct;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	tmp1->__FieldRef(HX_HCSTRING("nameFullString","\xeb","\xfd","\x77","\xd9")) = _nameFullString;
	HX_STACK_LINE(28)
	this->typeEnum = _typeEnum;
	HX_STACK_LINE(29)
	::String tmp2 = _parentNameAltString;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	this->ChangeParentVoid(tmp2);
	HX_STACK_LINE(30)
	::EnumMuseumType tmp3 = _typeEnum;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	this->AddThisToArray(tmp3);
}
;
	return null();
}

//ObjectMuseum_obj::~ObjectMuseum_obj() { }

Dynamic ObjectMuseum_obj::__CreateEmpty() { return  new ObjectMuseum_obj; }
hx::ObjectPtr< ObjectMuseum_obj > ObjectMuseum_obj::__new(::CollectionGlobal _collectionGlobalObject,::String _nameAltString,::String _nameFullString,::String _parentNameAltString,::EnumMuseumType _typeEnum)
{  hx::ObjectPtr< ObjectMuseum_obj > _result_ = new ObjectMuseum_obj();
	_result_->__construct(_collectionGlobalObject,_nameAltString,_nameFullString,_parentNameAltString,_typeEnum);
	return _result_;}

Dynamic ObjectMuseum_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectMuseum_obj > _result_ = new ObjectMuseum_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void ObjectMuseum_obj::AddChildVisitorVoid( ::ObjectVisitor _visitorObject){
{
		HX_STACK_FRAME("ObjectMuseum","AddChildVisitorVoid",0xc0ae382a,"ObjectMuseum.AddChildVisitorVoid","ObjectMuseum.hx",33,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorObject,"_visitorObject")
		HX_STACK_LINE(33)
		Dynamic tmp = this->childStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		::ObjectVisitor tmp1 = _visitorObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		tmp->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,AddChildVisitorVoid,(void))

Void ObjectMuseum_obj::AddTagVoid( ::ObjectTag _tagObject){
{
		HX_STACK_FRAME("ObjectMuseum","AddTagVoid",0xaae47d0a,"ObjectMuseum.AddTagVoid","ObjectMuseum.hx",34,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tagObject,"_tagObject")
		HX_STACK_LINE(34)
		::ObjectTag tmp = _tagObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		this->tagObjectArray->push(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,AddTagVoid,(void))

Void ObjectMuseum_obj::AddThisToArray( ::EnumMuseumType _typeEnum){
{
		HX_STACK_FRAME("ObjectMuseum","AddThisToArray",0x50174f9c,"ObjectMuseum.AddThisToArray","ObjectMuseum.hx",35,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_typeEnum,"_typeEnum")
		HX_STACK_LINE(36)
		bool tmp = (_typeEnum == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		if ((tmp)){
			HX_STACK_LINE(36)
			::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(36)
			tmp1->GetExhibitionObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(37)
			bool tmp1 = (_typeEnum == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(37)
			if ((tmp1)){
				HX_STACK_LINE(37)
				::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(37)
				tmp2->GetFloorObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
			}
			else{
				HX_STACK_LINE(38)
				bool tmp2 = (_typeEnum == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(38)
				if ((tmp2)){
					HX_STACK_LINE(38)
					::CollectionGlobal tmp3 = this->collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(38)
					tmp3->GetRoomObjectArray()->push(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,AddThisToArray,(void))

Void ObjectMuseum_obj::ChangeParentVoid( ::String _parentNameAltString){
{
		HX_STACK_FRAME("ObjectMuseum","ChangeParentVoid",0xe19d094b,"ObjectMuseum.ChangeParentVoid","ObjectMuseum.hx",40,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_parentNameAltString,"_parentNameAltString")
		HX_STACK_LINE(41)
		::ObjectMuseum tmp = this->parentObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		if ((tmp1)){
			HX_STACK_LINE(41)
			::ObjectMuseum tmp2 = this->parentObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(41)
			Dynamic tmp3 = tmp2->GetChildStruct();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(41)
			tmp3->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"), hx::paccDynamic )(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(42)
		::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		bool tmp3 = (tmp2 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(42)
		if ((tmp3)){
			HX_STACK_LINE(42)
			::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(42)
			::String tmp5 = _parentNameAltString;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(42)
			::ObjectMuseum tmp6 = ::CollectionFunction_obj::FindMuseumObject(tmp4,::EnumMuseumType_obj::ROM,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(42)
			this->parentObject = tmp6;
		}
		else{
			HX_STACK_LINE(43)
			::EnumMuseumType tmp4 = this->typeEnum;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(43)
			bool tmp5 = (tmp4 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			if ((tmp5)){
				HX_STACK_LINE(43)
				::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(43)
				::String tmp7 = _parentNameAltString;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(43)
				::ObjectMuseum tmp8 = ::CollectionFunction_obj::FindMuseumObject(tmp6,::EnumMuseumType_obj::FLR,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(43)
				this->parentObject = tmp8;
			}
			else{
				HX_STACK_LINE(44)
				this->parentObject = null();
			}
		}
		HX_STACK_LINE(45)
		::ObjectMuseum tmp4 = this->parentObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		if ((tmp5)){
			HX_STACK_LINE(46)
			::ObjectMuseum tmp6 = this->parentObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(46)
			tmp6->DetermineChildVoid();
			HX_STACK_LINE(47)
			this->DetermineSiblingVoid();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,ChangeParentVoid,(void))

Void ObjectMuseum_obj::DetermineFullVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineFullVoid",0x39b0f279,"ObjectMuseum.DetermineFullVoid","ObjectMuseum.hx",50,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		int tmp = this->visitorCurrentInt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::CollectionGlobal tmp1 = this->collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		int tmp2 = tmp1->GetExhibitionFullThresholdInt();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		bool tmp3 = (tmp >= tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		if ((tmp3)){
			HX_STACK_LINE(51)
			this->fullBool = true;
		}
		else{
			HX_STACK_LINE(52)
			int tmp4 = this->visitorCurrentInt;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(52)
			::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(52)
			int tmp6 = tmp5->GetExhibitionFullThresholdInt();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(52)
			bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(52)
			if ((tmp7)){
				HX_STACK_LINE(52)
				this->fullBool = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineFullVoid,(void))

Void ObjectMuseum_obj::DetermineIndexVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineIndexVoid",0x93890cd0,"ObjectMuseum.DetermineIndexVoid","ObjectMuseum.hx",54,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->DetermineIndexGlobalVoid();
		HX_STACK_LINE(56)
		this->DetermineIndexLocalVoid();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineIndexVoid,(void))

Void ObjectMuseum_obj::DetermineIndexGlobalVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineIndexGlobalVoid",0xa32e9cd3,"ObjectMuseum.DetermineIndexGlobalVoid","ObjectMuseum.hx",58,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
		HX_STACK_LINE(60)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		if ((tmp1)){
			HX_STACK_LINE(60)
			::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(60)
			tempObjectArray = tmp2->GetExhibitionObjectArray();
		}
		else{
			HX_STACK_LINE(61)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(61)
			bool tmp3 = (tmp2 == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(61)
			if ((tmp3)){
				HX_STACK_LINE(61)
				::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(61)
				tempObjectArray = tmp4->GetFloorObjectArray();
			}
			else{
				HX_STACK_LINE(62)
				::EnumMuseumType tmp4 = this->typeEnum;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(62)
				bool tmp5 = (tmp4 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(62)
				if ((tmp5)){
					HX_STACK_LINE(62)
					::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(62)
					tempObjectArray = tmp6->GetRoomObjectArray();
				}
			}
		}
		HX_STACK_LINE(63)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(64)
		while((true)){
			HX_STACK_LINE(64)
			bool tmp2 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(64)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(64)
			if ((tmp3)){
				HX_STACK_LINE(64)
				break;
			}
			HX_STACK_LINE(65)
			Dynamic tmp4 = this->nameStruct;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			::String tmp5 = tmp4->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			::ObjectMuseum tmp6 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(65)
			Dynamic tmp7 = tmp6->GetNameStruct();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(65)
			::String tmp8 = tmp7->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(65)
			bool tmp9 = (tmp5 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(65)
			if ((tmp9)){
				HX_STACK_LINE(66)
				this->indexGlobalInt = loopCounter1Int;
				HX_STACK_LINE(67)
				break;
			}
			HX_STACK_LINE(69)
			(loopCounter1Int)++;
		}
		HX_STACK_LINE(71)
		this->indexGlobalInt = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineIndexGlobalVoid,(void))

Void ObjectMuseum_obj::DetermineIndexLocalVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineIndexLocalVoid",0x6cd91f63,"ObjectMuseum.DetermineIndexLocalVoid","ObjectMuseum.hx",73,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(74)
		if ((tmp1)){
			HX_STACK_LINE(74)
			int tmp2 = this->indexGlobalInt;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(74)
			this->indexLocalInt = tmp2;
		}
		else{
			HX_STACK_LINE(75)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			bool tmp3 = (tmp2 != ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(75)
			if ((tmp3)){
				HX_STACK_LINE(76)
				int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
				HX_STACK_LINE(77)
				while((true)){
					HX_STACK_LINE(77)
					int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(77)
					int tmp5 = this->siblingObjectArray->length;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(77)
					bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(77)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(77)
					if ((tmp7)){
						HX_STACK_LINE(77)
						break;
					}
					HX_STACK_LINE(78)
					Dynamic tmp8 = this->nameStruct;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(78)
					::String tmp9 = tmp8->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(78)
					::ObjectMuseum tmp10 = this->siblingObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(78)
					Dynamic tmp11 = tmp10->GetNameStruct();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(78)
					::String tmp12 = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(78)
					bool tmp13 = (tmp9 == tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(78)
					if ((tmp13)){
						HX_STACK_LINE(79)
						this->indexLocalInt = loopCounter1Int;
						HX_STACK_LINE(80)
						break;
					}
					HX_STACK_LINE(82)
					(loopCounter1Int)++;
				}
			}
		}
		HX_STACK_LINE(85)
		this->indexLocalInt = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineIndexLocalVoid,(void))

Void ObjectMuseum_obj::DetermineSiblingVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineSiblingVoid",0x044fbd40,"ObjectMuseum.DetermineSiblingVoid","ObjectMuseum.hx",87,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		Array< ::Dynamic > tempObjectArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tempObjectArray,"tempObjectArray");
		HX_STACK_LINE(89)
		::EnumMuseumType tmp = this->typeEnum;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		bool tmp1 = (tmp == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		if ((tmp1)){
			HX_STACK_LINE(89)
			::CollectionGlobal tmp2 = this->collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(89)
			tempObjectArray = tmp2->GetExhibitionObjectArray();
		}
		else{
			HX_STACK_LINE(90)
			::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(90)
			bool tmp3 = (tmp2 == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			if ((tmp3)){
				HX_STACK_LINE(90)
				::CollectionGlobal tmp4 = this->collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(90)
				tempObjectArray = tmp4->GetFloorObjectArray();
			}
			else{
				HX_STACK_LINE(91)
				::EnumMuseumType tmp4 = this->typeEnum;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(91)
				bool tmp5 = (tmp4 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(91)
				if ((tmp5)){
					HX_STACK_LINE(91)
					::CollectionGlobal tmp6 = this->collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(91)
					tempObjectArray = tmp6->GetRoomObjectArray();
				}
			}
		}
		HX_STACK_LINE(92)
		int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
		HX_STACK_LINE(93)
		while((true)){
			HX_STACK_LINE(93)
			bool tmp2 = (loopCounter1Int < tempObjectArray->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(93)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			if ((tmp3)){
				HX_STACK_LINE(93)
				break;
			}
			HX_STACK_LINE(94)
			::ObjectMuseum tmp4 = this->parentObject;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			Dynamic tmp5 = tmp4->GetNameStruct();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(94)
			::String tmp6 = tmp5->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(94)
			::ObjectMuseum tmp7 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(94)
			::ObjectMuseum tmp8 = tmp7->GetParentObject();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			Dynamic tmp9 = tmp8->GetNameStruct();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			::String tmp10 = tmp9->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(94)
			bool tmp11 = (tmp6 == tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(94)
			if ((tmp11)){
				HX_STACK_LINE(95)
				::ObjectMuseum tmp12 = tempObjectArray->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(95)
				this->siblingObjectArray->push(tmp12);
			}
			HX_STACK_LINE(97)
			(loopCounter1Int)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineSiblingVoid,(void))

Void ObjectMuseum_obj::RemoveTagByNameAltVoid( ::String _nameAltString){
{
		HX_STACK_FRAME("ObjectMuseum","RemoveTagByNameAltVoid",0x5a04b902,"ObjectMuseum.RemoveTagByNameAltVoid","ObjectMuseum.hx",100,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_nameAltString,"_nameAltString")
		HX_STACK_LINE(100)
		::CollectionGlobal tmp = this->collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		::String tmp1 = _nameAltString;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(100)
		::ObjectTag tmp2 = ::CollectionFunction_obj::FindTagObject(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		this->tagObjectArray->remove(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,RemoveTagByNameAltVoid,(void))

Void ObjectMuseum_obj::RemoveTagByObjectVoid( ::ObjectTag _tagObject){
{
		HX_STACK_FRAME("ObjectMuseum","RemoveTagByObjectVoid",0xdc01c4c3,"ObjectMuseum.RemoveTagByObjectVoid","ObjectMuseum.hx",101,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tagObject,"_tagObject")
		HX_STACK_LINE(101)
		::ObjectTag tmp = _tagObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		this->tagObjectArray->remove(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,RemoveTagByObjectVoid,(void))

Void ObjectMuseum_obj::ResetVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","ResetVoid",0x96ab3506,"ObjectMuseum.ResetVoid","ObjectMuseum.hx",102,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		this->fullBool = false;
		HX_STACK_LINE(104)
		this->visitorCurrentInt = (int)0;
		HX_STACK_LINE(105)
		this->visitorTotalInt = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,ResetVoid,(void))

Void ObjectMuseum_obj::DetermineChildVoid( ){
{
		HX_STACK_FRAME("ObjectMuseum","DetermineChildVoid",0x6319285a,"ObjectMuseum.DetermineChildVoid","ObjectMuseum.hx",107,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		Dynamic tmp = this->childStruct;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		::CollectionFunction_obj::ClearArray(tmp->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic ));
		HX_STACK_LINE(109)
		Dynamic tmp1 = this->childStruct;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		::CollectionFunction_obj::ClearArray(tmp1->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic ));
		HX_STACK_LINE(110)
		::EnumMuseumType tmp2 = this->typeEnum;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		bool tmp3 = (tmp2 == ::EnumMuseumType_obj::EXH);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		if ((tmp3)){
			HX_STACK_LINE(111)
			int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
			HX_STACK_LINE(112)
			while((true)){
				HX_STACK_LINE(112)
				int tmp4 = loopCounter1Int;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(112)
				::CollectionGlobal tmp5 = this->collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(112)
				int tmp6 = tmp5->GetVisitorObjectArray()->length;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(112)
				bool tmp7 = (tmp4 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(112)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(112)
				if ((tmp8)){
					HX_STACK_LINE(112)
					break;
				}
				HX_STACK_LINE(113)
				Dynamic tmp9 = this->nameStruct;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(113)
				::String tmp10 = tmp9->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(113)
				::CollectionGlobal tmp11 = this->collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(113)
				::ObjectVisitor tmp12 = tmp11->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(113)
				::ObjectMuseum tmp13 = tmp12->GetExhibitionCurrentObject();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(113)
				Dynamic tmp14 = tmp13->GetNameStruct();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(113)
				::String tmp15 = tmp14->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(113)
				bool tmp16 = (tmp10 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(113)
				if ((tmp16)){
					HX_STACK_LINE(114)
					Dynamic tmp17 = this->childStruct;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(114)
					::CollectionGlobal tmp18 = this->collectionGlobalObject;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(114)
					::ObjectVisitor tmp19 = tmp18->GetVisitorObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectVisitor >();		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(114)
					tmp17->__Field(HX_HCSTRING("childVisitorObjectArray","\x08","\xc6","\xea","\x8c"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp19);
				}
				HX_STACK_LINE(116)
				(loopCounter1Int)++;
			}
		}
		else{
			HX_STACK_LINE(119)
			::EnumMuseumType tmp4 = this->typeEnum;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(119)
			bool tmp5 = (tmp4 == ::EnumMuseumType_obj::FLR);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(119)
			if ((tmp5)){
				HX_STACK_LINE(120)
				int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
				HX_STACK_LINE(121)
				while((true)){
					HX_STACK_LINE(121)
					int tmp6 = loopCounter1Int;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(121)
					::CollectionGlobal tmp7 = this->collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(121)
					int tmp8 = tmp7->GetRoomObjectArray()->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(121)
					bool tmp9 = (tmp6 < tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(121)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(121)
					if ((tmp10)){
						HX_STACK_LINE(121)
						break;
					}
					HX_STACK_LINE(122)
					Dynamic tmp11 = this->nameStruct;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(122)
					::String tmp12 = tmp11->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(122)
					::CollectionGlobal tmp13 = this->collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(122)
					::ObjectMuseum tmp14 = tmp13->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(122)
					::ObjectMuseum tmp15 = tmp14->GetParentObject();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(122)
					Dynamic tmp16 = tmp15->GetNameStruct();		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(122)
					::String tmp17 = tmp16->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(122)
					bool tmp18 = (tmp12 == tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(122)
					if ((tmp18)){
						HX_STACK_LINE(123)
						Dynamic tmp19 = this->childStruct;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(123)
						::CollectionGlobal tmp20 = this->collectionGlobalObject;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(123)
						::ObjectMuseum tmp21 = tmp20->GetRoomObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(123)
						tmp19->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp21);
					}
					HX_STACK_LINE(125)
					(loopCounter1Int)++;
				}
			}
			else{
				HX_STACK_LINE(128)
				::EnumMuseumType tmp6 = this->typeEnum;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(128)
				bool tmp7 = (tmp6 == ::EnumMuseumType_obj::ROM);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(128)
				if ((tmp7)){
					HX_STACK_LINE(129)
					int loopCounter1Int = (int)0;		HX_STACK_VAR(loopCounter1Int,"loopCounter1Int");
					HX_STACK_LINE(130)
					while((true)){
						HX_STACK_LINE(130)
						int tmp8 = loopCounter1Int;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(130)
						::CollectionGlobal tmp9 = this->collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(130)
						int tmp10 = tmp9->GetExhibitionObjectArray()->length;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(130)
						bool tmp11 = (tmp8 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(130)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(130)
						if ((tmp12)){
							HX_STACK_LINE(130)
							break;
						}
						HX_STACK_LINE(131)
						Dynamic tmp13 = this->nameStruct;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(131)
						::String tmp14 = tmp13->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(131)
						::CollectionGlobal tmp15 = this->collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(131)
						::ObjectMuseum tmp16 = tmp15->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(131)
						::ObjectMuseum tmp17 = tmp16->GetParentObject();		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(131)
						Dynamic tmp18 = tmp17->GetNameStruct();		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(131)
						::String tmp19 = tmp18->__Field(HX_HCSTRING("nameAltString","\x0f","\xa7","\x65","\x6c"), hx::paccDynamic );		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(131)
						bool tmp20 = (tmp14 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(131)
						if ((tmp20)){
							HX_STACK_LINE(132)
							Dynamic tmp21 = this->childStruct;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(132)
							::CollectionGlobal tmp22 = this->collectionGlobalObject;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(132)
							::ObjectMuseum tmp23 = tmp22->GetExhibitionObjectArray()->__get(loopCounter1Int).StaticCast< ::ObjectMuseum >();		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(132)
							tmp21->__Field(HX_HCSTRING("childMuseumObjectArray","\x6c","\x8f","\xed","\x67"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp23);
						}
						HX_STACK_LINE(134)
						(loopCounter1Int)++;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,DetermineChildVoid,(void))

Dynamic ObjectMuseum_obj::GetChildStruct( ){
	HX_STACK_FRAME("ObjectMuseum","GetChildStruct",0xe7838cf8,"ObjectMuseum.GetChildStruct","ObjectMuseum.hx",138,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	Dynamic tmp = this->childStruct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetChildStruct,return )

Array< ::String > ObjectMuseum_obj::GetExplanationStringArray( ){
	HX_STACK_FRAME("ObjectMuseum","GetExplanationStringArray",0x0bf34da8,"ObjectMuseum.GetExplanationStringArray","ObjectMuseum.hx",139,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	return this->explanationStringArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetExplanationStringArray,return )

bool ObjectMuseum_obj::GetFullBool( ){
	HX_STACK_FRAME("ObjectMuseum","GetFullBool",0x7d6b0f12,"ObjectMuseum.GetFullBool","ObjectMuseum.hx",140,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	bool tmp = this->fullBool;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetFullBool,return )

Dynamic ObjectMuseum_obj::GetNameStruct( ){
	HX_STACK_FRAME("ObjectMuseum","GetNameStruct",0x46430cf9,"ObjectMuseum.GetNameStruct","ObjectMuseum.hx",141,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	Dynamic tmp = this->nameStruct;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetNameStruct,return )

::ObjectMuseum ObjectMuseum_obj::GetParentObject( ){
	HX_STACK_FRAME("ObjectMuseum","GetParentObject",0x099b05c2,"ObjectMuseum.GetParentObject","ObjectMuseum.hx",142,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	::ObjectMuseum tmp = this->parentObject;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(142)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetParentObject,return )

Array< ::Dynamic > ObjectMuseum_obj::GetTagObjectArray( ){
	HX_STACK_FRAME("ObjectMuseum","GetTagObjectArray",0x31252499,"ObjectMuseum.GetTagObjectArray","ObjectMuseum.hx",143,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(143)
	return this->tagObjectArray;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetTagObjectArray,return )

int ObjectMuseum_obj::GetVisitorCurrentInt( ){
	HX_STACK_FRAME("ObjectMuseum","GetVisitorCurrentInt",0x43f11eab,"ObjectMuseum.GetVisitorCurrentInt","ObjectMuseum.hx",144,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(144)
	int tmp = this->visitorCurrentInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetVisitorCurrentInt,return )

int ObjectMuseum_obj::GetVisitorTotalInt( ){
	HX_STACK_FRAME("ObjectMuseum","GetVisitorTotalInt",0xf507f8c0,"ObjectMuseum.GetVisitorTotalInt","ObjectMuseum.hx",145,0x96e8244d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	int tmp = this->visitorTotalInt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ObjectMuseum_obj,GetVisitorTotalInt,return )

Void ObjectMuseum_obj::SetVisitorCurrentInt( int _visitorCurrentInt){
{
		HX_STACK_FRAME("ObjectMuseum","SetVisitorCurrentInt",0x10a8d61f,"ObjectMuseum.SetVisitorCurrentInt","ObjectMuseum.hx",146,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorCurrentInt,"_visitorCurrentInt")
		HX_STACK_LINE(146)
		this->visitorCurrentInt = _visitorCurrentInt;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetVisitorCurrentInt,(void))

Void ObjectMuseum_obj::SetVisitorTotalInt( int _visitorTotalInt){
{
		HX_STACK_FRAME("ObjectMuseum","SetVisitorTotalInt",0xd1b72b34,"ObjectMuseum.SetVisitorTotalInt","ObjectMuseum.hx",147,0x96e8244d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_visitorTotalInt,"_visitorTotalInt")
		HX_STACK_LINE(147)
		this->visitorTotalInt = _visitorTotalInt;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ObjectMuseum_obj,SetVisitorTotalInt,(void))


ObjectMuseum_obj::ObjectMuseum_obj()
{
}

void ObjectMuseum_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectMuseum);
	HX_MARK_MEMBER_NAME(childStruct,"childStruct");
	HX_MARK_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_MARK_MEMBER_NAME(explanationStringArray,"explanationStringArray");
	HX_MARK_MEMBER_NAME(fullBool,"fullBool");
	HX_MARK_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_MARK_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_MARK_MEMBER_NAME(nameStruct,"nameStruct");
	HX_MARK_MEMBER_NAME(parentObject,"parentObject");
	HX_MARK_MEMBER_NAME(siblingObjectArray,"siblingObjectArray");
	HX_MARK_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_MARK_MEMBER_NAME(typeEnum,"typeEnum");
	HX_MARK_MEMBER_NAME(visitorCurrentInt,"visitorCurrentInt");
	HX_MARK_MEMBER_NAME(visitorTotalInt,"visitorTotalInt");
	HX_MARK_END_CLASS();
}

void ObjectMuseum_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(childStruct,"childStruct");
	HX_VISIT_MEMBER_NAME(collectionGlobalObject,"collectionGlobalObject");
	HX_VISIT_MEMBER_NAME(explanationStringArray,"explanationStringArray");
	HX_VISIT_MEMBER_NAME(fullBool,"fullBool");
	HX_VISIT_MEMBER_NAME(indexGlobalInt,"indexGlobalInt");
	HX_VISIT_MEMBER_NAME(indexLocalInt,"indexLocalInt");
	HX_VISIT_MEMBER_NAME(nameStruct,"nameStruct");
	HX_VISIT_MEMBER_NAME(parentObject,"parentObject");
	HX_VISIT_MEMBER_NAME(siblingObjectArray,"siblingObjectArray");
	HX_VISIT_MEMBER_NAME(tagObjectArray,"tagObjectArray");
	HX_VISIT_MEMBER_NAME(typeEnum,"typeEnum");
	HX_VISIT_MEMBER_NAME(visitorCurrentInt,"visitorCurrentInt");
	HX_VISIT_MEMBER_NAME(visitorTotalInt,"visitorTotalInt");
}

Dynamic ObjectMuseum_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fullBool") ) { return fullBool; }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { return typeEnum; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ResetVoid") ) { return ResetVoid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameStruct") ) { return nameStruct; }
		if (HX_FIELD_EQ(inName,"AddTagVoid") ) { return AddTagVoid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"childStruct") ) { return childStruct; }
		if (HX_FIELD_EQ(inName,"GetFullBool") ) { return GetFullBool_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parentObject") ) { return parentObject; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { return indexLocalInt; }
		if (HX_FIELD_EQ(inName,"GetNameStruct") ) { return GetNameStruct_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { return indexGlobalInt; }
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { return tagObjectArray; }
		if (HX_FIELD_EQ(inName,"AddThisToArray") ) { return AddThisToArray_dyn(); }
		if (HX_FIELD_EQ(inName,"GetChildStruct") ) { return GetChildStruct_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visitorTotalInt") ) { return visitorTotalInt; }
		if (HX_FIELD_EQ(inName,"GetParentObject") ) { return GetParentObject_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"ChangeParentVoid") ) { return ChangeParentVoid_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"visitorCurrentInt") ) { return visitorCurrentInt; }
		if (HX_FIELD_EQ(inName,"DetermineFullVoid") ) { return DetermineFullVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetTagObjectArray") ) { return GetTagObjectArray_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"siblingObjectArray") ) { return siblingObjectArray; }
		if (HX_FIELD_EQ(inName,"DetermineIndexVoid") ) { return DetermineIndexVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"DetermineChildVoid") ) { return DetermineChildVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitorTotalInt") ) { return GetVisitorTotalInt_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVisitorTotalInt") ) { return SetVisitorTotalInt_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"AddChildVisitorVoid") ) { return AddChildVisitorVoid_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DetermineSiblingVoid") ) { return DetermineSiblingVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"GetVisitorCurrentInt") ) { return GetVisitorCurrentInt_dyn(); }
		if (HX_FIELD_EQ(inName,"SetVisitorCurrentInt") ) { return SetVisitorCurrentInt_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"RemoveTagByObjectVoid") ) { return RemoveTagByObjectVoid_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { return collectionGlobalObject; }
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { return explanationStringArray; }
		if (HX_FIELD_EQ(inName,"RemoveTagByNameAltVoid") ) { return RemoveTagByNameAltVoid_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"DetermineIndexLocalVoid") ) { return DetermineIndexLocalVoid_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"DetermineIndexGlobalVoid") ) { return DetermineIndexGlobalVoid_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"GetExplanationStringArray") ) { return GetExplanationStringArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ObjectMuseum_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fullBool") ) { fullBool=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"typeEnum") ) { typeEnum=inValue.Cast< ::EnumMuseumType >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nameStruct") ) { nameStruct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"childStruct") ) { childStruct=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"parentObject") ) { parentObject=inValue.Cast< ::ObjectMuseum >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"indexLocalInt") ) { indexLocalInt=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"indexGlobalInt") ) { indexGlobalInt=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tagObjectArray") ) { tagObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"visitorTotalInt") ) { visitorTotalInt=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"visitorCurrentInt") ) { visitorCurrentInt=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"siblingObjectArray") ) { siblingObjectArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"collectionGlobalObject") ) { collectionGlobalObject=inValue.Cast< ::CollectionGlobal >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explanationStringArray") ) { explanationStringArray=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectMuseum_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("childStruct","\x11","\x75","\xc0","\x1e"));
	outFields->push(HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"));
	outFields->push(HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd"));
	outFields->push(HX_HCSTRING("fullBool","\x59","\x0d","\x2f","\x55"));
	outFields->push(HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"));
	outFields->push(HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"));
	outFields->push(HX_HCSTRING("nameStruct","\x00","\x6b","\xb8","\x95"));
	outFields->push(HX_HCSTRING("parentObject","\x89","\x33","\xa9","\x27"));
	outFields->push(HX_HCSTRING("siblingObjectArray","\x78","\xf0","\x3f","\xd2"));
	outFields->push(HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"));
	outFields->push(HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf"));
	outFields->push(HX_HCSTRING("visitorCurrentInt","\x84","\x9f","\x64","\x13"));
	outFields->push(HX_HCSTRING("visitorTotalInt","\x59","\x61","\xdd","\xd5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectMuseum_obj,childStruct),HX_HCSTRING("childStruct","\x11","\x75","\xc0","\x1e")},
	{hx::fsObject /*::CollectionGlobal*/ ,(int)offsetof(ObjectMuseum_obj,collectionGlobalObject),HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ObjectMuseum_obj,explanationStringArray),HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd")},
	{hx::fsBool,(int)offsetof(ObjectMuseum_obj,fullBool),HX_HCSTRING("fullBool","\x59","\x0d","\x2f","\x55")},
	{hx::fsInt,(int)offsetof(ObjectMuseum_obj,indexGlobalInt),HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75")},
	{hx::fsInt,(int)offsetof(ObjectMuseum_obj,indexLocalInt),HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ObjectMuseum_obj,nameStruct),HX_HCSTRING("nameStruct","\x00","\x6b","\xb8","\x95")},
	{hx::fsObject /*::ObjectMuseum*/ ,(int)offsetof(ObjectMuseum_obj,parentObject),HX_HCSTRING("parentObject","\x89","\x33","\xa9","\x27")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectMuseum_obj,siblingObjectArray),HX_HCSTRING("siblingObjectArray","\x78","\xf0","\x3f","\xd2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ObjectMuseum_obj,tagObjectArray),HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91")},
	{hx::fsObject /*::EnumMuseumType*/ ,(int)offsetof(ObjectMuseum_obj,typeEnum),HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf")},
	{hx::fsInt,(int)offsetof(ObjectMuseum_obj,visitorCurrentInt),HX_HCSTRING("visitorCurrentInt","\x84","\x9f","\x64","\x13")},
	{hx::fsInt,(int)offsetof(ObjectMuseum_obj,visitorTotalInt),HX_HCSTRING("visitorTotalInt","\x59","\x61","\xdd","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("childStruct","\x11","\x75","\xc0","\x1e"),
	HX_HCSTRING("collectionGlobalObject","\x00","\x00","\xce","\x27"),
	HX_HCSTRING("explanationStringArray","\x2f","\x1a","\x41","\xcd"),
	HX_HCSTRING("fullBool","\x59","\x0d","\x2f","\x55"),
	HX_HCSTRING("indexGlobalInt","\xda","\xa5","\xb9","\x75"),
	HX_HCSTRING("indexLocalInt","\x76","\x29","\x37","\xab"),
	HX_HCSTRING("nameStruct","\x00","\x6b","\xb8","\x95"),
	HX_HCSTRING("parentObject","\x89","\x33","\xa9","\x27"),
	HX_HCSTRING("siblingObjectArray","\x78","\xf0","\x3f","\xd2"),
	HX_HCSTRING("tagObjectArray","\x20","\x92","\x6f","\x91"),
	HX_HCSTRING("typeEnum","\xdb","\x6e","\xe1","\xaf"),
	HX_HCSTRING("visitorCurrentInt","\x84","\x9f","\x64","\x13"),
	HX_HCSTRING("visitorTotalInt","\x59","\x61","\xdd","\xd5"),
	HX_HCSTRING("AddChildVisitorVoid","\x07","\x36","\x18","\xb3"),
	HX_HCSTRING("AddTagVoid","\xcd","\xae","\x05","\x86"),
	HX_HCSTRING("AddThisToArray","\xdf","\x1e","\x48","\xb9"),
	HX_HCSTRING("ChangeParentVoid","\x4e","\x6f","\x12","\x94"),
	HX_HCSTRING("DetermineFullVoid","\x16","\xcf","\xf4","\xad"),
	HX_HCSTRING("DetermineIndexVoid","\x93","\x39","\xa6","\xda"),
	HX_HCSTRING("DetermineIndexGlobalVoid","\xd6","\x3d","\x4e","\xfb"),
	HX_HCSTRING("DetermineIndexLocalVoid","\xc0","\xcf","\x13","\xe8"),
	HX_HCSTRING("DetermineSiblingVoid","\xc3","\xe0","\xa3","\x2e"),
	HX_HCSTRING("RemoveTagByNameAltVoid","\x45","\x03","\x4b","\xdc"),
	HX_HCSTRING("RemoveTagByObjectVoid","\xe0","\xb3","\x4c","\xbb"),
	HX_HCSTRING("ResetVoid","\xa3","\xac","\x12","\x36"),
	HX_HCSTRING("DetermineChildVoid","\x1d","\x55","\x36","\xaa"),
	HX_HCSTRING("GetChildStruct","\x3b","\x5c","\xb4","\x50"),
	HX_HCSTRING("GetExplanationStringArray","\x45","\x8f","\x80","\xcf"),
	HX_HCSTRING("GetFullBool","\xef","\x67","\x55","\x5f"),
	HX_HCSTRING("GetNameStruct","\x16","\x17","\x1b","\x3a"),
	HX_HCSTRING("GetParentObject","\x1f","\x91","\x1f","\xab"),
	HX_HCSTRING("GetTagObjectArray","\x36","\x01","\x69","\xa5"),
	HX_HCSTRING("GetVisitorCurrentInt","\x2e","\x42","\x45","\x6e"),
	HX_HCSTRING("GetVisitorTotalInt","\x83","\x25","\x25","\x3c"),
	HX_HCSTRING("SetVisitorCurrentInt","\xa2","\xf9","\xfc","\x3a"),
	HX_HCSTRING("SetVisitorTotalInt","\xf7","\x57","\xd4","\x18"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectMuseum_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectMuseum_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectMuseum_obj::__mClass;

void ObjectMuseum_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ObjectMuseum","\x11","\x1f","\x35","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectMuseum_obj >;
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

