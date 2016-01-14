#include <hxcpp.h>

#ifndef INCLUDED_CollectionGlobal
#include <CollectionGlobal.h>
#endif
#ifndef INCLUDED_CollectionPremadeTag
#include <CollectionPremadeTag.h>
#endif
#ifndef INCLUDED_EnumTagFeelType
#include <EnumTagFeelType.h>
#endif
#ifndef INCLUDED_EnumTagType
#include <EnumTagType.h>
#endif
#ifndef INCLUDED_ObjectTag
#include <ObjectTag.h>
#endif

Void CollectionPremadeTag_obj::__construct()
{
HX_STACK_FRAME("CollectionPremadeTag","new",0x99899cd2,"CollectionPremadeTag.new","CollectionPremadeTag.hx",3,0xe1b162de)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//CollectionPremadeTag_obj::~CollectionPremadeTag_obj() { }

Dynamic CollectionPremadeTag_obj::__CreateEmpty() { return  new CollectionPremadeTag_obj; }
hx::ObjectPtr< CollectionPremadeTag_obj > CollectionPremadeTag_obj::__new()
{  hx::ObjectPtr< CollectionPremadeTag_obj > _result_ = new CollectionPremadeTag_obj();
	_result_->__construct();
	return _result_;}

Dynamic CollectionPremadeTag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CollectionPremadeTag_obj > _result_ = new CollectionPremadeTag_obj();
	_result_->__construct();
	return _result_;}

Void CollectionPremadeTag_obj::PremadeTagStructVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructVoid",0xf0ef6e19,"CollectionPremadeTag.PremadeTagStructVoid","CollectionPremadeTag.hx",4,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(5)
		::CollectionGlobal tmp = _collectionGlobalObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(5)
		::CollectionPremadeTag_obj::PremadeTagStructAdjVoid(tmp);
		HX_STACK_LINE(6)
		::CollectionGlobal tmp1 = _collectionGlobalObject;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(6)
		::CollectionPremadeTag_obj::PremadeTagStructAdvVoid(tmp1);
		HX_STACK_LINE(7)
		::CollectionGlobal tmp2 = _collectionGlobalObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(7)
		::CollectionPremadeTag_obj::PremadeTagStructNounAliveAbstractVoid(tmp2);
		HX_STACK_LINE(8)
		::CollectionGlobal tmp3 = _collectionGlobalObject;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(8)
		::CollectionPremadeTag_obj::PremadeTagStructNounAliveConcreteVoid(tmp3);
		HX_STACK_LINE(9)
		::CollectionGlobal tmp4 = _collectionGlobalObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(9)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateHoldAbstractVoid(tmp4);
		HX_STACK_LINE(10)
		::CollectionGlobal tmp5 = _collectionGlobalObject;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(10)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateHoldConcreteVoid(tmp5);
		HX_STACK_LINE(11)
		::CollectionGlobal tmp6 = _collectionGlobalObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(11)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceAbstractVoid(tmp6);
		HX_STACK_LINE(12)
		::CollectionGlobal tmp7 = _collectionGlobalObject;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(12)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid(tmp7);
		HX_STACK_LINE(13)
		::CollectionGlobal tmp8 = _collectionGlobalObject;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(13)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceConcreteOwnerVoid(tmp8);
		HX_STACK_LINE(14)
		::CollectionGlobal tmp9 = _collectionGlobalObject;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(14)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateSeeAbstractVoid(tmp9);
		HX_STACK_LINE(15)
		::CollectionGlobal tmp10 = _collectionGlobalObject;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(15)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateSeeConcreteVoid(tmp10);
		HX_STACK_LINE(16)
		::CollectionGlobal tmp11 = _collectionGlobalObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(16)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateTitleAbstractVoid(tmp11);
		HX_STACK_LINE(17)
		::CollectionGlobal tmp12 = _collectionGlobalObject;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(17)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateWearAbstractVoid(tmp12);
		HX_STACK_LINE(18)
		::CollectionGlobal tmp13 = _collectionGlobalObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(18)
		::CollectionPremadeTag_obj::PremadeTagStructNounInanimateWearConcreteVoid(tmp13);
		HX_STACK_LINE(19)
		::CollectionGlobal tmp14 = _collectionGlobalObject;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(19)
		::CollectionPremadeTag_obj::PremadeTagStructVerbVoidIntransitiveVoid(tmp14);
		HX_STACK_LINE(20)
		::CollectionGlobal tmp15 = _collectionGlobalObject;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(20)
		::CollectionPremadeTag_obj::PremadeTagStructVerbVoidTransitiveVoid(tmp15);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructAdjVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructAdjVoid",0x8fba1f76,"CollectionPremadeTag.PremadeTagStructAdjVoid","CollectionPremadeTag.hx",22,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(23)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Awful","\xe7","\xe4","\x01","\xbc"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		tmp->SetAdjectiveStringObject(HX_HCSTRING("awful","\x07","\x75","\xd4","\x28"));
		HX_STACK_LINE(24)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Bad","\xa5","\x69","\x32","\x00"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		tmp1->SetAdjectiveStringObject(HX_HCSTRING("bad","\xc5","\xb1","\x4a","\x00"));
		HX_STACK_LINE(25)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Excellent","\x56","\xdf","\x85","\x98"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(25)
		tmp2->SetAdjectiveStringObject(HX_HCSTRING("excellent","\x76","\xff","\xb2","\xf6"));
		HX_STACK_LINE(26)
		::ObjectTag tmp3 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Good","\x5d","\xc1","\x42","\x2f"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		tmp3->SetAdjectiveStringObject(HX_HCSTRING("good","\x3d","\x95","\x69","\x44"));
		HX_STACK_LINE(27)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Soft","\x0a","\x49","\x31","\x37"),::EnumTagType_obj::ADJ);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(27)
		tmp4->SetAdjectiveStringObject(HX_HCSTRING("soft","\xea","\x1c","\x58","\x4c"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructAdjVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructAdvVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructAdvVoid",0x78891582,"CollectionPremadeTag.PremadeTagStructAdvVoid","CollectionPremadeTag.hx",29,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(30)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Desperate","\x87","\x96","\x40","\x82"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		tmp->SetAdverbStringObject(HX_HCSTRING("desperately","\xf4","\x4c","\x46","\x20"));
		HX_STACK_LINE(31)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Slow","\x21","\x0a","\x2f","\x37"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		tmp1->SetAdverbStringObject(HX_HCSTRING("bad","\xc5","\xb1","\x4a","\x00"));
		HX_STACK_LINE(32)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Perfect","\xed","\x6c","\x27","\x48"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		tmp2->SetAdverbStringObject(HX_HCSTRING("excellent","\x76","\xff","\xb2","\xf6"));
		HX_STACK_LINE(33)
		::ObjectTag tmp3 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Quick","\xcd","\xf6","\x1a","\xf1"),::EnumTagType_obj::ADV);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		tmp3->SetAdverbStringObject(HX_HCSTRING("good","\x3d","\x95","\x69","\x44"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructAdvVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounAliveAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounAliveAbstractVoid",0xaab17224,"CollectionPremadeTag.PremadeTagStructNounAliveAbstractVoid","CollectionPremadeTag.hx",35,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(36)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Assasin","\xf8","\xac","\x87","\x01"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("assasin","\x18","\x85","\x36","\x34"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		::ObjectTag tmp2 = tmp1->SetNounPosStringObject(HX_HCSTRING("assasin's","\x84","\x1d","\xb4","\x92"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::ObjectTag tmp3 = tmp2->SetNounSStringObject(HX_HCSTRING("assasins","\x5b","\xf0","\x7d","\x7b"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		tmp3->SetNounSPosStringObject(HX_HCSTRING("assasins'","\x6c","\x5f","\xb4","\x92"));
		HX_STACK_LINE(37)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Boy","\xec","\x75","\x32","\x00"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("boy","\x0c","\xbe","\x4a","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		::ObjectTag tmp6 = tmp5->SetNounPosStringObject(HX_HCSTRING("boy's","\x78","\x7b","\xff","\xb6"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		::ObjectTag tmp7 = tmp6->SetNounSStringObject(HX_HCSTRING("boys","\xe7","\x8c","\x1b","\x41"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		tmp7->SetNounSPosStringObject(HX_HCSTRING("boys'","\x60","\xbd","\xff","\xb6"));
		HX_STACK_LINE(38)
		::ObjectTag tmp8 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Dragon","\x33","\xe6","\x5e","\x14"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		::ObjectTag tmp9 = tmp8->SetNounStringObject(HX_HCSTRING("dragon","\x13","\x72","\xca","\xdf"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		::ObjectTag tmp10 = tmp9->SetNounPosStringObject(HX_HCSTRING("dragon's","\x3f","\x7f","\xd9","\x3c"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		::ObjectTag tmp11 = tmp10->SetNounSStringObject(HX_HCSTRING("dragons","\x00","\x5f","\x59","\xf1"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(38)
		tmp11->SetNounSPosStringObject(HX_HCSTRING("dragons'","\x27","\xc1","\xd9","\x3c"));
		HX_STACK_LINE(39)
		::ObjectTag tmp12 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Iraqi","\x10","\xa9","\xe4","\x53"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(39)
		::ObjectTag tmp13 = tmp12->SetNounStringObject(HX_HCSTRING("iraqi","\x30","\x39","\xb7","\xc0"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(39)
		::ObjectTag tmp14 = tmp13->SetNounPosStringObject(HX_HCSTRING("iraqi's","\x9c","\x07","\xdc","\xc7"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(39)
		::ObjectTag tmp15 = tmp14->SetNounSStringObject(HX_HCSTRING("iraqis","\x43","\xd1","\x9a","\xdf"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(39)
		tmp15->SetNounSPosStringObject(HX_HCSTRING("iraqis'","\x84","\x49","\xdc","\xc7"));
		HX_STACK_LINE(40)
		::ObjectTag tmp16 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Italian","\xa0","\x09","\x96","\x5e"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(40)
		::ObjectTag tmp17 = tmp16->SetNounStringObject(HX_HCSTRING("italian","\xc0","\xe1","\x44","\x91"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(40)
		::ObjectTag tmp18 = tmp17->SetNounPosStringObject(HX_HCSTRING("italian's","\x2c","\xf4","\x90","\x15"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(40)
		::ObjectTag tmp19 = tmp18->SetNounSStringObject(HX_HCSTRING("italians","\xb3","\xa6","\x00","\x8b"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(40)
		tmp19->SetNounSPosStringObject(HX_HCSTRING("italians'","\x14","\x36","\x91","\x15"));
		HX_STACK_LINE(41)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Painter","\x6b","\xdb","\x73","\x85"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(41)
		::ObjectTag tmp21 = tmp20->SetNounStringObject(HX_HCSTRING("painter","\x8b","\xb3","\x22","\xb8"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(41)
		::ObjectTag tmp22 = tmp21->SetNounPosStringObject(HX_HCSTRING("painter's","\xb7","\x0e","\xdf","\x0c"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(41)
		::ObjectTag tmp23 = tmp22->SetNounSStringObject(HX_HCSTRING("painters","\x88","\x66","\x3a","\x66"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(41)
		tmp23->SetNounSPosStringObject(HX_HCSTRING("painters'","\x9f","\x50","\xdf","\x0c"));
		HX_STACK_LINE(42)
		::ObjectTag tmp24 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Romanian","\xd9","\x1e","\xc1","\x11"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(42)
		::ObjectTag tmp25 = tmp24->SetNounStringObject(HX_HCSTRING("romanian","\xb9","\x62","\x0f","\x38"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(42)
		::ObjectTag tmp26 = tmp25->SetNounPosStringObject(HX_HCSTRING("romanian's","\x65","\x65","\xb8","\xe4"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(42)
		::ObjectTag tmp27 = tmp26->SetNounSStringObject(HX_HCSTRING("romanians","\x9a","\xff","\x66","\xd5"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(42)
		tmp27->SetNounSPosStringObject(HX_HCSTRING("romanians'","\x4d","\xa7","\xb8","\xe4"));
		HX_STACK_LINE(43)
		::ObjectTag tmp28 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Russian","\x33","\x82","\x09","\x9d"),::EnumTagType_obj::NOUN_ALIVE_ABSTRACT);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(43)
		::ObjectTag tmp29 = tmp28->SetNounStringObject(HX_HCSTRING("russian","\x53","\x5a","\xb8","\xcf"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(43)
		::ObjectTag tmp30 = tmp29->SetNounPosStringObject(HX_HCSTRING("russian's","\x7f","\xf7","\x41","\x72"));		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(43)
		::ObjectTag tmp31 = tmp30->SetNounSStringObject(HX_HCSTRING("russians","\xc0","\xae","\x96","\xf1"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(43)
		tmp31->SetNounSPosStringObject(HX_HCSTRING("russians'","\x67","\x39","\x42","\x72"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounAliveAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounAliveConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounAliveConcreteVoid",0xc563b907,"CollectionPremadeTag.PremadeTagStructNounAliveConcreteVoid","CollectionPremadeTag.hx",45,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(46)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Andy","\xe2","\xad","\x4a","\x2b"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("Andy","\xe2","\xad","\x4a","\x2b"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(46)
		tmp1->SetNounPosStringObject(HX_HCSTRING("Andy's","\xce","\x8c","\xbb","\x95"));
		HX_STACK_LINE(47)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Bodhisattva","\xd1","\xa6","\xa8","\x6c"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("Bodhisattva","\xd1","\xa6","\xa8","\x6c"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		tmp3->SetNounPosStringObject(HX_HCSTRING("Bodhisattva's","\x7d","\xdf","\x3c","\x65"));
		HX_STACK_LINE(48)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Buddha","\xec","\x41","\xd5","\x03"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("Buddha","\xec","\x41","\xd5","\x03"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(48)
		tmp5->SetNounPosStringObject(HX_HCSTRING("Buddha's","\x58","\xb7","\x1a","\x95"));
		HX_STACK_LINE(49)
		::ObjectTag tmp6 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Dimitri","\x8a","\x79","\x99","\x0f"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		::ObjectTag tmp7 = tmp6->SetNounStringObject(HX_HCSTRING("Dimitri","\x8a","\x79","\x99","\x0f"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(49)
		tmp7->SetNounPosStringObject(HX_HCSTRING("Dimitri's","\x76","\x92","\x12","\x44"));
		HX_STACK_LINE(50)
		::ObjectTag tmp8 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Julius Caesar","\xf7","\x7a","\x10","\xa6"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(50)
		::ObjectTag tmp9 = tmp8->SetNounStringObject(HX_HCSTRING("Julius Caesar","\xf7","\x7a","\x10","\xa6"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(50)
		tmp9->SetNounPosStringObject(HX_HCSTRING("Julius Caesar's","\x23","\x89","\x5e","\xa7"));
		HX_STACK_LINE(51)
		::ObjectTag tmp10 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Maria","\xd6","\x39","\x4f","\x96"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		::ObjectTag tmp11 = tmp10->SetNounStringObject(HX_HCSTRING("Maria","\xd6","\x39","\x4f","\x96"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(51)
		tmp11->SetNounPosStringObject(HX_HCSTRING("Maria's","\xc2","\xfd","\xf1","\x33"));
		HX_STACK_LINE(52)
		::ObjectTag tmp12 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Medusa","\xd7","\xe1","\x65","\x33"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(52)
		::ObjectTag tmp13 = tmp12->SetNounStringObject(HX_HCSTRING("Medusa","\xd7","\xe1","\x65","\x33"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(52)
		tmp13->SetNounPosStringObject(HX_HCSTRING("Medusa's","\x03","\x68","\x03","\x42"));
		HX_STACK_LINE(53)
		::ObjectTag tmp14 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Mikael","\xf9","\x78","\x91","\x85"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(53)
		::ObjectTag tmp15 = tmp14->SetNounStringObject(HX_HCSTRING("Mikael","\xf9","\x78","\x91","\x85"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(53)
		tmp15->SetNounPosStringObject(HX_HCSTRING("Mikael's","\xa5","\x8b","\x9c","\x27"));
		HX_STACK_LINE(54)
		::ObjectTag tmp16 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Napoleon","\xea","\xa1","\x23","\x28"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(54)
		::ObjectTag tmp17 = tmp16->SetNounStringObject(HX_HCSTRING("Napoleon","\xea","\xa1","\x23","\x28"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(54)
		tmp17->SetNounPosStringObject(HX_HCSTRING("Napoleon's","\xd6","\x92","\xbf","\x31"));
		HX_STACK_LINE(55)
		::ObjectTag tmp18 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Ramses","\xa3","\xb8","\x85","\xeb"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(55)
		::ObjectTag tmp19 = tmp18->SetNounStringObject(HX_HCSTRING("Ramses","\xa3","\xb8","\x85","\xeb"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(55)
		tmp19->SetNounPosStringObject(HX_HCSTRING("Ramses'","\x24","\xd6","\x7b","\x29"));
		HX_STACK_LINE(56)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Sphinx","\xc8","\x28","\x8e","\xf1"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(56)
		::ObjectTag tmp21 = tmp20->SetNounStringObject(HX_HCSTRING("Sphinx","\xc8","\x28","\x8e","\xf1"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(56)
		tmp21->SetNounPosStringObject(HX_HCSTRING("Sphinx's","\x34","\x0d","\x00","\x10"));
		HX_STACK_LINE(57)
		::ObjectTag tmp22 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Washington","\x70","\x1b","\x23","\x73"),::EnumTagType_obj::NOUN_ALIVE_CONCRETE);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(57)
		::ObjectTag tmp23 = tmp22->SetNounStringObject(HX_HCSTRING("Washington","\x70","\x1b","\x23","\x73"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(57)
		tmp23->SetNounPosStringObject(HX_HCSTRING("Washington's","\xdc","\xf9","\xb4","\xd6"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounAliveConcreteVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateHoldAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateHoldAbstractVoid",0x351a4d12,"CollectionPremadeTag.PremadeTagStructNounInanimateHoldAbstractVoid","CollectionPremadeTag.hx",59,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(60)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Grudge","\xf8","\xf1","\xa6","\x54"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("grudge","\xd8","\x7d","\x12","\x20"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		tmp1->SetNounSStringObject(HX_HCSTRING("grudges","\x9b","\x9f","\x1b","\xf0"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateHoldAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateHoldConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateHoldConcreteVoid",0x4fcc93f5,"CollectionPremadeTag.PremadeTagStructNounInanimateHoldConcreteVoid","CollectionPremadeTag.hx",62,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(63)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Bat","\xb5","\x69","\x32","\x00"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("bat","\xd5","\xb1","\x4a","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		tmp1->SetNounSStringObject(HX_HCSTRING("bats","\xfe","\xe8","\x10","\x41"));
		HX_STACK_LINE(64)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Gun","\x60","\x46","\x36","\x00"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("gun","\x80","\x8e","\x4e","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		tmp3->SetNounSStringObject(HX_HCSTRING("guns","\xf3","\x21","\x6e","\x44"));
		HX_STACK_LINE(65)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Hand","\x8f","\x57","\xe1","\x2f"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("hand","\x6f","\x2b","\x08","\x45"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		tmp5->SetNounSStringObject(HX_HCSTRING("hands","\x24","\xd6","\x1d","\x22"));
		HX_STACK_LINE(66)
		::ObjectTag tmp6 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Pencil","\xed","\x67","\x06","\x6d"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		::ObjectTag tmp7 = tmp6->SetNounStringObject(HX_HCSTRING("pencil","\xcd","\xf3","\x71","\x38"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		tmp7->SetNounSStringObject(HX_HCSTRING("pencils","\x06","\x60","\x43","\x2b"));
		HX_STACK_LINE(67)
		::ObjectTag tmp8 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Sword","\x9d","\x27","\x3f","\x19"),::EnumTagType_obj::NOUN_INANIMATE_HOLD_CONCRETE);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(67)
		::ObjectTag tmp9 = tmp8->SetNounStringObject(HX_HCSTRING("sword","\xbd","\xb7","\x11","\x86"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(67)
		tmp9->SetNounSStringObject(HX_HCSTRING("swords","\x16","\x0e","\x6f","\xc9"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateHoldConcreteVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimatePlaceAbstractVoid",0x6952ee40,"CollectionPremadeTag.PremadeTagStructNounInanimatePlaceAbstractVoid","CollectionPremadeTag.hx",69,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(70)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Mind","\xb2","\x7a","\x35","\x33"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("mind","\x92","\x4e","\x5c","\x48"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		tmp1->SetNounSStringObject(HX_HCSTRING("minds","\xa1","\x71","\x68","\x08"));
		HX_STACK_LINE(71)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Intuition","\x37","\xb8","\x0e","\x1c"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_ABSTRACT);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("intuition","\x57","\xd8","\x3b","\x7a"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		tmp3->SetNounSStringObject(HX_HCSTRING("intuitions","\x3c","\x74","\x21","\x7a"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimatePlaceAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid",0x628702b7,"CollectionPremadeTag.PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid","CollectionPremadeTag.hx",73,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(74)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("India","\x57","\x0e","\x42","\x51"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		tmp->SetNounStringObject(HX_HCSTRING("India","\x57","\x0e","\x42","\x51"));
		HX_STACK_LINE(75)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Italia","\x0e","\xa3","\xf8","\x3a"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		tmp1->SetNounStringObject(HX_HCSTRING("Italia","\x0e","\xa3","\xf8","\x3a"));
		HX_STACK_LINE(76)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Netherlands","\x70","\x0e","\x67","\x5f"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		tmp2->SetNounStringObject(HX_HCSTRING("Netherlands","\x70","\x0e","\x67","\x5f"));
		HX_STACK_LINE(77)
		::ObjectTag tmp3 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("RussiaRussia","\xf6","\x91","\xb1","\xc3"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		tmp3->SetNounStringObject(HX_HCSTRING("Russia","\xdb","\x9d","\x80","\x73"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimatePlaceConcreteOwnerVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimatePlaceConcreteOwnerVoid",0xca93bcf8,"CollectionPremadeTag.PremadeTagStructNounInanimatePlaceConcreteOwnerVoid","CollectionPremadeTag.hx",79,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(80)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Country","\x36","\xe2","\xaa","\xea"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("country","\x56","\xba","\x59","\x1d"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		tmp1->SetNounSStringObject(HX_HCSTRING("countries","\x34","\xb0","\xf1","\x72"));
		HX_STACK_LINE(81)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Harbor","\x6c","\x50","\x35","\xef"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("harbor","\x4c","\xdc","\xa0","\xba"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		tmp3->SetNounSStringObject(HX_HCSTRING("harbors","\xa7","\xe6","\x1f","\x92"));
		HX_STACK_LINE(82)
		::ObjectTag tmp4 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("House","\x80","\x9f","\x91","\xbe"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		::ObjectTag tmp5 = tmp4->SetNounStringObject(HX_HCSTRING("house","\xa0","\x2f","\x64","\x2b"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		tmp5->SetNounSStringObject(HX_HCSTRING("houses","\xd3","\x7c","\x45","\xcc"));
		HX_STACK_LINE(83)
		::ObjectTag tmp6 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("School","\x94","\x2c","\x5d","\x75"),::EnumTagType_obj::NOUN_INANIMATE_PLACE_CONCRETE_OWNER);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		::ObjectTag tmp7 = tmp6->SetNounStringObject(HX_HCSTRING("school","\x74","\xb8","\xc8","\x40"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(83)
		tmp7->SetNounSStringObject(HX_HCSTRING("schools","\x7f","\xad","\xd8","\x6e"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimatePlaceConcreteOwnerVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateSeeAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateSeeAbstractVoid",0xf85a204c,"CollectionPremadeTag.PremadeTagStructNounInanimateSeeAbstractVoid","CollectionPremadeTag.hx",85,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(86)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Vision","\x08","\x88","\x17","\x24"),::EnumTagType_obj::NOUN_INANIMATE_SEE_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		tmp->SetNounStringObject(HX_HCSTRING("vision","\xe8","\x13","\x83","\xef"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateSeeAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateSeeConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateSeeConcreteVoid",0x130c672f,"CollectionPremadeTag.PremadeTagStructNounInanimateSeeConcreteVoid","CollectionPremadeTag.hx",88,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(89)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Lightning","\xea","\x18","\x1d","\x79"),::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		tmp->SetNounStringObject(HX_HCSTRING("lightning","\x0a","\x39","\x4a","\xd7"));
		HX_STACK_LINE(90)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Moonlight","\x15","\xd0","\x88","\xb7"),::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		tmp1->SetNounStringObject(HX_HCSTRING("moonlight","\x35","\xf0","\xb5","\x15"));
		HX_STACK_LINE(91)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Rainbow","\x16","\x29","\x91","\xd8"),::EnumTagType_obj::NOUN_INANIMATE_SEE_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		tmp2->SetNounStringObject(HX_HCSTRING("rainbow","\x36","\x01","\x40","\x0b"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateSeeConcreteVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateTitleAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateTitleAbstractVoid",0x06568491,"CollectionPremadeTag.PremadeTagStructNounInanimateTitleAbstractVoid","CollectionPremadeTag.hx",93,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(94)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Commendation","\x26","\x26","\xb4","\x57"),::EnumTagType_obj::NOUN_INANIMATE_TITLE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(94)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("commendation","\x06","\xda","\xa1","\x8f"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		tmp1->SetNounSStringObject(HX_HCSTRING("commendations","\xad","\xeb","\xfc","\x1d"));
		HX_STACK_LINE(95)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Job","\xdd","\x87","\x38","\x00"),::EnumTagType_obj::NOUN_INANIMATE_TITLE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("job","\xfd","\xcf","\x50","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		tmp3->SetNounSStringObject(HX_HCSTRING("jobs","\xd6","\x2d","\x65","\x46"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateTitleAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateWearAbstractVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateWearAbstractVoid",0x822cc052,"CollectionPremadeTag.PremadeTagStructNounInanimateWearAbstractVoid","CollectionPremadeTag.hx",97,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(98)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Pride","\x48","\xbf","\xb8","\x5b"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		tmp->SetNounStringObject(HX_HCSTRING("pride","\x68","\x4f","\x8b","\xc8"));
		HX_STACK_LINE(99)
		::ObjectTag tmp1 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Shame","\x64","\x50","\x4a","\x0f"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_ABSTRACT);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		tmp1->SetNounStringObject(HX_HCSTRING("shame","\x84","\xe0","\x1c","\x7c"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateWearAbstractVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructNounInanimateWearConcreteVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructNounInanimateWearConcreteVoid",0x9cdf0735,"CollectionPremadeTag.PremadeTagStructNounInanimateWearConcreteVoid","CollectionPremadeTag.hx",101,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(102)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Crown","\xd7","\xd2","\x87","\xdf"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		::ObjectTag tmp1 = tmp->SetNounStringObject(HX_HCSTRING("crown","\xf7","\x62","\x5a","\x4c"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(102)
		tmp1->SetNounSStringObject(HX_HCSTRING("crowns","\x9c","\x35","\xbc","\x82"));
		HX_STACK_LINE(103)
		::ObjectTag tmp2 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Shirt","\xd6","\x66","\x50","\x0f"),::EnumTagType_obj::NOUN_INANIMATE_WEAR_CONCRETE);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(103)
		::ObjectTag tmp3 = tmp2->SetNounStringObject(HX_HCSTRING("shirt","\xf6","\xf6","\x22","\x7c"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(103)
		tmp3->SetNounSStringObject(HX_HCSTRING("shirts","\xbd","\x20","\x75","\x22"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructNounInanimateWearConcreteVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructVerbVoidIntransitiveVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructVerbVoidIntransitiveVoid",0x3af59936,"CollectionPremadeTag.PremadeTagStructVerbVoidIntransitiveVoid","CollectionPremadeTag.hx",105,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(106)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Die","\x20","\xf5","\x33","\x00"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		::ObjectTag tmp1 = tmp->SetVerb1StringObject(HX_HCSTRING("die","\x40","\x3d","\x4c","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		::ObjectTag tmp2 = tmp1->SetVerb2StringObject(HX_HCSTRING("died","\x24","\x5b","\x69","\x42"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		::ObjectTag tmp3 = tmp2->SetVerb3StringObject(HX_HCSTRING("died","\x24","\x5b","\x69","\x42"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		::ObjectTag tmp4 = tmp3->SetVerbIngStringObject(HX_HCSTRING("dying","\x6d","\xe0","\x5c","\xe4"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		tmp4->SetVerbSStringObject(HX_HCSTRING("dies","\x33","\x5b","\x69","\x42"));
		HX_STACK_LINE(107)
		::ObjectTag tmp5 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Jump","\x0e","\xf1","\x42","\x31"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(107)
		::ObjectTag tmp6 = tmp5->SetVerb1StringObject(HX_HCSTRING("jump","\xee","\xc4","\x69","\x46"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(107)
		::ObjectTag tmp7 = tmp6->SetVerb2StringObject(HX_HCSTRING("jumped","\xcd","\xb4","\x17","\x08"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(107)
		::ObjectTag tmp8 = tmp7->SetVerb3StringObject(HX_HCSTRING("jumped","\xcd","\xb4","\x17","\x08"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(107)
		::ObjectTag tmp9 = tmp8->SetVerbIngStringObject(HX_HCSTRING("jumping","\xb4","\x90","\xa9","\x0c"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(107)
		tmp9->SetVerbSStringObject(HX_HCSTRING("jumps","\xc5","\x8b","\x22","\x56"));
		HX_STACK_LINE(108)
		::ObjectTag tmp10 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Run","\x2b","\x9f","\x3e","\x00"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(108)
		::ObjectTag tmp11 = tmp10->SetVerb1StringObject(HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(108)
		::ObjectTag tmp12 = tmp11->SetVerb2StringObject(HX_HCSTRING("ran","\xdf","\xd5","\x56","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(108)
		::ObjectTag tmp13 = tmp12->SetVerb3StringObject(HX_HCSTRING("ran","\xdf","\xd5","\x56","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(108)
		::ObjectTag tmp14 = tmp13->SetVerbIngStringObject(HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(108)
		tmp14->SetVerbSStringObject(HX_HCSTRING("runs","\xc8","\x7a","\xb3","\x4b"));
		HX_STACK_LINE(109)
		::ObjectTag tmp15 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Sing","\x6f","\xc2","\x2c","\x37"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(109)
		::ObjectTag tmp16 = tmp15->SetVerb1StringObject(HX_HCSTRING("sing","\x4f","\x96","\x53","\x4c"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(109)
		::ObjectTag tmp17 = tmp16->SetVerb2StringObject(HX_HCSTRING("sang","\x47","\x84","\x4d","\x4c"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(109)
		::ObjectTag tmp18 = tmp17->SetVerb3StringObject(HX_HCSTRING("sung","\x5b","\xb1","\x5c","\x4c"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(109)
		::ObjectTag tmp19 = tmp18->SetVerbIngStringObject(HX_HCSTRING("singing","\xf3","\x11","\x16","\x44"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(109)
		tmp19->SetVerbSStringObject(HX_HCSTRING("sings","\x44","\xef","\xcf","\x7c"));
		HX_STACK_LINE(110)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Sleep","\xf7","\x2c","\xf2","\x11"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(110)
		::ObjectTag tmp21 = tmp20->SetVerb1StringObject(HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(110)
		::ObjectTag tmp22 = tmp21->SetVerb2StringObject(HX_HCSTRING("slept","\xb0","\xc6","\xc4","\x7e"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(110)
		::ObjectTag tmp23 = tmp22->SetVerb3StringObject(HX_HCSTRING("slept","\xb0","\xc6","\xc4","\x7e"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(110)
		::ObjectTag tmp24 = tmp23->SetVerbIngStringObject(HX_HCSTRING("sleeping","\x2b","\x58","\x93","\x10"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(110)
		tmp24->SetVerbSStringObject(HX_HCSTRING("sleeps","\x7c","\xb7","\x60","\x6d"));
		HX_STACK_LINE(111)
		::ObjectTag tmp25 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Work","\xf1","\x2d","\xd6","\x39"),::EnumTagType_obj::VERB_INTRANSITIVE);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(111)
		::ObjectTag tmp26 = tmp25->SetVerb1StringObject(HX_HCSTRING("work","\xd1","\x01","\xfd","\x4e"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(111)
		::ObjectTag tmp27 = tmp26->SetVerb2StringObject(HX_HCSTRING("worked","\x70","\x30","\x9e","\xc9"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(111)
		::ObjectTag tmp28 = tmp27->SetVerb3StringObject(HX_HCSTRING("worked","\x70","\x30","\x9e","\xc9"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(111)
		::ObjectTag tmp29 = tmp28->SetVerbIngStringObject(HX_HCSTRING("working","\xb1","\x43","\xcf","\xa0"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(111)
		tmp29->SetVerbSStringObject(HX_HCSTRING("works","\x82","\x95","\x64","\xce"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructVerbVoidIntransitiveVoid,(void))

Void CollectionPremadeTag_obj::PremadeTagStructVerbVoidTransitiveVoid( ::CollectionGlobal _collectionGlobalObject){
{
		HX_STACK_FRAME("CollectionPremadeTag","PremadeTagStructVerbVoidTransitiveVoid",0x16d26891,"CollectionPremadeTag.PremadeTagStructVerbVoidTransitiveVoid","CollectionPremadeTag.hx",113,0xe1b162de)
		HX_STACK_ARG(_collectionGlobalObject,"_collectionGlobalObject")
		HX_STACK_LINE(114)
		::ObjectTag tmp = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Buy","\x26","\x7b","\x32","\x00"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		::ObjectTag tmp1 = tmp->SetVerb1StringObject(HX_HCSTRING("buy","\x46","\xc3","\x4a","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		::ObjectTag tmp2 = tmp1->SetVerb2StringObject(HX_HCSTRING("bought","\x2b","\x3a","\x18","\x66"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		::ObjectTag tmp3 = tmp2->SetVerb3StringObject(HX_HCSTRING("bought","\x2b","\x3a","\x18","\x66"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		::ObjectTag tmp4 = tmp3->SetVerbIngStringObject(HX_HCSTRING("buying","\x5c","\x19","\x26","\xdd"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(114)
		tmp4->SetVerbSStringObject(HX_HCSTRING("buys","\x6d","\x1a","\x20","\x41"));
		HX_STACK_LINE(115)
		::ObjectTag tmp5 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Call","\xbe","\x44","\x93","\x2c"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		::ObjectTag tmp6 = tmp5->SetVerb1StringObject(HX_HCSTRING("call","\x9e","\x18","\xba","\x41"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		::ObjectTag tmp7 = tmp6->SetVerb2StringObject(HX_HCSTRING("called","\x7d","\x54","\xe8","\xb6"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(115)
		::ObjectTag tmp8 = tmp7->SetVerb3StringObject(HX_HCSTRING("called","\x7d","\x54","\xe8","\xb6"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(115)
		::ObjectTag tmp9 = tmp8->SetVerbIngStringObject(HX_HCSTRING("calling","\x04","\xab","\x64","\x54"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(115)
		tmp9->SetVerbSStringObject(HX_HCSTRING("calls","\x15","\x72","\x1b","\x41"));
		HX_STACK_LINE(116)
		::ObjectTag tmp10 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Desire","\xea","\xb9","\x10","\xa4"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(116)
		::ObjectTag tmp11 = tmp10->SetVerb1StringObject(HX_HCSTRING("desire","\xca","\x45","\x7c","\x6f"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(116)
		::ObjectTag tmp12 = tmp11->SetVerb2StringObject(HX_HCSTRING("desired","\x5a","\xcb","\x40","\x1d"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(116)
		::ObjectTag tmp13 = tmp12->SetVerb3StringObject(HX_HCSTRING("desired","\x5a","\xcb","\x40","\x1d"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(116)
		::ObjectTag tmp14 = tmp13->SetVerbIngStringObject(HX_HCSTRING("desiring","\x87","\x35","\x74","\x7b"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(116)
		tmp14->SetVerbSStringObject(HX_HCSTRING("desires","\x69","\xcb","\x40","\x1d"));
		HX_STACK_LINE(117)
		::ObjectTag tmp15 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Drink","\xf8","\xd1","\xe9","\x72"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(117)
		::ObjectTag tmp16 = tmp15->SetVerb1StringObject(HX_HCSTRING("drink","\x18","\x62","\xbc","\xdf"));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(117)
		::ObjectTag tmp17 = tmp16->SetVerb2StringObject(HX_HCSTRING("drunk","\x24","\x7d","\xc5","\xdf"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(117)
		::ObjectTag tmp18 = tmp17->SetVerb3StringObject(HX_HCSTRING("drank","\x10","\x50","\xb6","\xdf"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(117)
		::ObjectTag tmp19 = tmp18->SetVerbIngStringObject(HX_HCSTRING("drinking","\xca","\x09","\xda","\x74"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(117)
		tmp19->SetVerbSStringObject(HX_HCSTRING("drinks","\x5b","\x73","\x19","\xe5"));
		HX_STACK_LINE(118)
		::ObjectTag tmp20 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Drive","\xea","\xd8","\xe9","\x72"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(118)
		::ObjectTag tmp21 = tmp20->SetVerb1StringObject(HX_HCSTRING("drive","\x0a","\x69","\xbc","\xdf"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(118)
		::ObjectTag tmp22 = tmp21->SetVerb2StringObject(HX_HCSTRING("drove","\x90","\xf6","\xc0","\xdf"));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(118)
		::ObjectTag tmp23 = tmp22->SetVerb3StringObject(HX_HCSTRING("driven","\x24","\x80","\x1f","\xe5"));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(118)
		::ObjectTag tmp24 = tmp23->SetVerbIngStringObject(HX_HCSTRING("driving","\xc7","\xa8","\x73","\x96"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(118)
		tmp24->SetVerbSStringObject(HX_HCSTRING("drives","\x29","\x80","\x1f","\xe5"));
		HX_STACK_LINE(119)
		::ObjectTag tmp25 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Eat","\x78","\xb0","\x34","\x00"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(119)
		::ObjectTag tmp26 = tmp25->SetVerb1StringObject(HX_HCSTRING("eat","\x98","\xf8","\x4c","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(119)
		::ObjectTag tmp27 = tmp26->SetVerb2StringObject(HX_HCSTRING("ate","\x12","\x00","\x4a","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(119)
		::ObjectTag tmp28 = tmp27->SetVerb3StringObject(HX_HCSTRING("eaten","\x01","\xa7","\xee","\x67"));		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(119)
		::ObjectTag tmp29 = tmp28->SetVerbIngStringObject(HX_HCSTRING("eating","\x4a","\x83","\xe6","\x88"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(119)
		tmp29->SetVerbSStringObject(HX_HCSTRING("eats","\xdb","\x8c","\x0c","\x43"));
		HX_STACK_LINE(120)
		::ObjectTag tmp30 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Fight","\xb0","\x85","\xc2","\x93"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(120)
		::ObjectTag tmp31 = tmp30->SetVerb1StringObject(HX_HCSTRING("fight","\xd0","\x15","\x95","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(120)
		::ObjectTag tmp32 = tmp31->SetVerb2StringObject(HX_HCSTRING("fought","\xa7","\xab","\x85","\xff"));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(120)
		::ObjectTag tmp33 = tmp32->SetVerb3StringObject(HX_HCSTRING("fought","\xa7","\xab","\x85","\xff"));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(120)
		::ObjectTag tmp34 = tmp33->SetVerbIngStringObject(HX_HCSTRING("fighting","\x12","\x79","\xd2","\x35"));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(120)
		tmp34->SetVerbSStringObject(HX_HCSTRING("fights","\xa3","\x00","\xde","\x81"));
		HX_STACK_LINE(121)
		::ObjectTag tmp35 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Get","\x76","\x38","\x36","\x00"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(121)
		::ObjectTag tmp36 = tmp35->SetVerb1StringObject(HX_HCSTRING("get","\x96","\x80","\x4e","\x00"));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(121)
		::ObjectTag tmp37 = tmp36->SetVerb2StringObject(HX_HCSTRING("got","\x4c","\x89","\x4e","\x00"));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(121)
		::ObjectTag tmp38 = tmp37->SetVerb3StringObject(HX_HCSTRING("gotten","\x11","\xac","\x41","\x65"));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(121)
		::ObjectTag tmp39 = tmp38->SetVerbIngStringObject(HX_HCSTRING("getting","\x84","\x50","\xa6","\x34"));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(121)
		tmp39->SetVerbSStringObject(HX_HCSTRING("gets","\x1d","\x03","\x62","\x44"));
		HX_STACK_LINE(122)
		::ObjectTag tmp40 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEUTRAL,false,HX_HCSTRING("Grab","\xec","\xfb","\x44","\x2f"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(122)
		::ObjectTag tmp41 = tmp40->SetVerb1StringObject(HX_HCSTRING("grab","\xcc","\xcf","\x6b","\x44"));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(122)
		::ObjectTag tmp42 = tmp41->SetVerb2StringObject(HX_HCSTRING("grabed","\x2b","\xb3","\xd8","\x12"));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(122)
		::ObjectTag tmp43 = tmp42->SetVerb3StringObject(HX_HCSTRING("grabed","\x2b","\xb3","\xd8","\x12"));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(122)
		::ObjectTag tmp44 = tmp43->SetVerbIngStringObject(HX_HCSTRING("grabbing","\x8c","\x9b","\xd4","\xfe"));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(122)
		tmp44->SetVerbSStringObject(HX_HCSTRING("grabs","\x27","\x03","\xea","\x99"));
		HX_STACK_LINE(123)
		::ObjectTag tmp45 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::NEGATIVE,false,HX_HCSTRING("Kill","\xbe","\x0b","\xe3","\x31"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(123)
		::ObjectTag tmp46 = tmp45->SetVerb1StringObject(HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(123)
		::ObjectTag tmp47 = tmp46->SetVerb2StringObject(HX_HCSTRING("killed","\x7d","\xdb","\xf7","\x84"));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(123)
		::ObjectTag tmp48 = tmp47->SetVerb3StringObject(HX_HCSTRING("killed","\x7d","\xdb","\xf7","\x84"));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(123)
		::ObjectTag tmp49 = tmp48->SetVerbIngStringObject(HX_HCSTRING("killing","\x04","\x44","\xeb","\xd3"));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(123)
		tmp49->SetVerbSStringObject(HX_HCSTRING("kills","\x15","\xcb","\x99","\xe1"));
		HX_STACK_LINE(124)
		::ObjectTag tmp50 = ::ObjectTag_obj::__new(_collectionGlobalObject,::EnumTagFeelType_obj::POSITIVE,false,HX_HCSTRING("Love","\x92","\xd8","\x90","\x32"),::EnumTagType_obj::VERB_TRANSITIVE);		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(124)
		::ObjectTag tmp51 = tmp50->SetVerb1StringObject(HX_HCSTRING("love","\x72","\xac","\xb7","\x47"));		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(124)
		::ObjectTag tmp52 = tmp51->SetVerb2StringObject(HX_HCSTRING("loved","\xb2","\x37","\xff","\x78"));		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(124)
		::ObjectTag tmp53 = tmp52->SetVerb3StringObject(HX_HCSTRING("loved","\xb2","\x37","\xff","\x78"));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(124)
		::ObjectTag tmp54 = tmp53->SetVerbIngStringObject(HX_HCSTRING("loving","\x2f","\x96","\x54","\x66"));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(124)
		tmp54->SetVerbSStringObject(HX_HCSTRING("loves","\xc1","\x37","\xff","\x78"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CollectionPremadeTag_obj,PremadeTagStructVerbVoidTransitiveVoid,(void))


CollectionPremadeTag_obj::CollectionPremadeTag_obj()
{
}

bool CollectionPremadeTag_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"PremadeTagStructVoid") ) { outValue = PremadeTagStructVoid_dyn(); return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"PremadeTagStructAdjVoid") ) { outValue = PremadeTagStructAdjVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructAdvVoid") ) { outValue = PremadeTagStructAdvVoid_dyn(); return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounAliveAbstractVoid") ) { outValue = PremadeTagStructNounAliveAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounAliveConcreteVoid") ) { outValue = PremadeTagStructNounAliveConcreteVoid_dyn(); return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"PremadeTagStructVerbVoidTransitiveVoid") ) { outValue = PremadeTagStructVerbVoidTransitiveVoid_dyn(); return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"PremadeTagStructVerbVoidIntransitiveVoid") ) { outValue = PremadeTagStructVerbVoidIntransitiveVoid_dyn(); return true;  }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateSeeAbstractVoid") ) { outValue = PremadeTagStructNounInanimateSeeAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateSeeConcreteVoid") ) { outValue = PremadeTagStructNounInanimateSeeConcreteVoid_dyn(); return true;  }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateHoldAbstractVoid") ) { outValue = PremadeTagStructNounInanimateHoldAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateHoldConcreteVoid") ) { outValue = PremadeTagStructNounInanimateHoldConcreteVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateWearAbstractVoid") ) { outValue = PremadeTagStructNounInanimateWearAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateWearConcreteVoid") ) { outValue = PremadeTagStructNounInanimateWearConcreteVoid_dyn(); return true;  }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimatePlaceAbstractVoid") ) { outValue = PremadeTagStructNounInanimatePlaceAbstractVoid_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimateTitleAbstractVoid") ) { outValue = PremadeTagStructNounInanimateTitleAbstractVoid_dyn(); return true;  }
		break;
	case 51:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimatePlaceConcreteOwnerVoid") ) { outValue = PremadeTagStructNounInanimatePlaceConcreteOwnerVoid_dyn(); return true;  }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid") ) { outValue = PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CollectionPremadeTag_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CollectionPremadeTag_obj::__mClass,"__mClass");
};

#endif

hx::Class CollectionPremadeTag_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PremadeTagStructVoid","\xcb","\x5a","\xea","\x62"),
	HX_HCSTRING("PremadeTagStructAdjVoid","\x04","\xae","\x02","\x8a"),
	HX_HCSTRING("PremadeTagStructAdvVoid","\x10","\xa4","\xd1","\x72"),
	HX_HCSTRING("PremadeTagStructNounAliveAbstractVoid","\x32","\x1d","\x29","\x49"),
	HX_HCSTRING("PremadeTagStructNounAliveConcreteVoid","\x15","\x64","\xdb","\x63"),
	HX_HCSTRING("PremadeTagStructNounInanimateHoldAbstractVoid","\x20","\xb6","\xe8","\x6c"),
	HX_HCSTRING("PremadeTagStructNounInanimateHoldConcreteVoid","\x03","\xfd","\x9a","\x87"),
	HX_HCSTRING("PremadeTagStructNounInanimatePlaceAbstractVoid","\x72","\x71","\x20","\x06"),
	HX_HCSTRING("PremadeTagStructNounInanimatePlaceConcreteNoOwnerVoid","\xc5","\x29","\x9a","\xa5"),
	HX_HCSTRING("PremadeTagStructNounInanimatePlaceConcreteOwnerVoid","\x86","\x64","\xc3","\x64"),
	HX_HCSTRING("PremadeTagStructNounInanimateSeeAbstractVoid","\xfe","\x12","\xc0","\xf9"),
	HX_HCSTRING("PremadeTagStructNounInanimateSeeConcreteVoid","\xe1","\x59","\x72","\x14"),
	HX_HCSTRING("PremadeTagStructNounInanimateTitleAbstractVoid","\xc3","\x07","\x24","\xa3"),
	HX_HCSTRING("PremadeTagStructNounInanimateWearAbstractVoid","\x60","\x29","\xfb","\xb9"),
	HX_HCSTRING("PremadeTagStructNounInanimateWearConcreteVoid","\x43","\x70","\xad","\xd4"),
	HX_HCSTRING("PremadeTagStructVerbVoidIntransitiveVoid","\xe8","\xca","\x9b","\xd1"),
	HX_HCSTRING("PremadeTagStructVerbVoidTransitiveVoid","\xc3","\x69","\x10","\x21"),
	::String(null()) };

void CollectionPremadeTag_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("CollectionPremadeTag","\xe0","\x8b","\x6a","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CollectionPremadeTag_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CollectionPremadeTag_obj >;
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
