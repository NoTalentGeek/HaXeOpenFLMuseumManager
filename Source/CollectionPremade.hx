import CollectionEnum;





class CollectionPremade{




    private static var explanationGenericStringArray = [
        "Explanation 1.",
        "Explanation 2.",
        "Explanation 3."
    ];

    /*==================================================
    Constructor.*/
    public function new(){}
    /*==================================================*/





    /*==================================================
    Premade function to create all exhibition object.*/
    public static function PremadeExhibitionObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_001", "First Exhibition", "ROM_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_002", "Second Exhibition", "ROM_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_003", "Third Exhibition", "ROM_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_004", "Fourth Exhibition", "ROM_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_005", "Fifth Exhibition", "ROM_003", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_006", "Sixth Exhibition", "ROM_003", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_007", "Seventh Exhibition", "ROM_004", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "EXH_008", "Eighth Exhibition", "ROM_004", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), EXH);
    }
    /*==================================================*/





    /*==================================================
    Premade function to create all floor object.*/
    public static function PremadeFloorObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "FLR_001", "First Floor", "XXX_XXX", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), FLR);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "FLR_002", "Second Floor", "XXX_XXX", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), FLR);
    }
    /*==================================================*/





    /*==================================================
    Function to create all room object.*/
    public static function PremadeRoomObjectVoid(_collectionGlobalObject:CollectionGlobal){
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "ROM_001", "First Room", "FLR_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "ROM_002", "Second Room", "FLR_001", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "ROM_003", "Third Room", "FLR_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
        new ObjectMuseum(_collectionGlobalObject, explanationGenericStringArray, "ROM_004", "Fourth Room", "FLR_002", CollectionFunction.PickRandomTagObjectArray(_collectionGlobalObject), ROM);
    }
    /*==================================================*/





    /*==================================================
    Function to create all visitor object.*/
    public static function PremadeVisitorObjectVoid(_amountInt:Int, _collectionGlobalObject:CollectionGlobal){
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < _amountInt){
            var visitorObject:ObjectVisitor = new ObjectVisitor(_collectionGlobalObject, _collectionGlobalObject.PutIndexGlobalVisitorInt(), "Visitor " + _collectionGlobalObject.GetIndexGlobalVisitorInt());
            loopCounter1Int ++;
        }
    }
    /*==================================================*/





}