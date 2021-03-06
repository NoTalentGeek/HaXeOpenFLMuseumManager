import CollectionEnum;
import CollectionFunction;
import CollectionStruct;
import flash.display.Sprite;
import flash.events.Event;
import haxe.ui.toolkit.containers.Absolute;
import haxe.ui.toolkit.containers.Accordion;
import haxe.ui.toolkit.containers.Grid;
import haxe.ui.toolkit.containers.HBox;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.controls.popups.CustomPopupContent;
import haxe.ui.toolkit.controls.popups.Popup;
import haxe.ui.toolkit.controls.selection.ListSelector;
import haxe.ui.toolkit.controls.Text;
import haxe.ui.toolkit.controls.TextInput;
import haxe.ui.toolkit.core.interfaces.IDisplayObject;
import haxe.ui.toolkit.core.PopupManager;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.data.DataSource;
import haxe.ui.toolkit.events.UIEvent;

class UIPopupEditObjectMuseum{

    private var buttonObject                            :Button                         = null;                                 /*The main button to activate this popup.*/
    private var collectionGlobalObject                  :CollectionGlobal               = null;                                 /*Referece variable to collecrionGlobalObject that stores most of global variables.*/
    private var displayFullTextObject                   :Text                           = null;
    private var displayVisitorCurrentTextObject         :Text                           = null;
    private var displayVisitorTotalTextObject           :Text                           = null;
    private var gridObject                              :Grid                           = null;                                 /*Grid layout.*/
    private var listSelectorTagStructArray              :Array<StructListSelector>      = new Array<StructListSelector>();   /*Array of list selector to choose multiple tags.*/
    private var museumButtonObjectArray                 :Array<Button>                  = new Array<Button>();
    private var nameAltTextInputObject                  :TextInput                      = null;
    private var nameFullTextInputObject                 :TextInput                      = null;
    private var popupObject                             :Popup                          = null;
    private var selectedMuseumObject                    :ObjectMuseum                   = null;
    private var selectedMuseumPrevObject                :ObjectMuseum                   = null;
    private var selectObjectMuseumListSelectorObject    :ListSelector                   = null;
    private var selectParentNameFullListSelectorObject  :ListSelector                   = null;
    private var selectTypeListSelectorObject            :ListSelector                   = null;
    private var selectTypeListSelectorPrevString        :String                         = "";
    private var selectTypeListSelectorString            :String                         = "";

    private var textInputExplanationStructArray         :Array<StructTextInput>         = new Array<StructTextInput>();
    private var textInputExplanationLastIndexInt        :Int                            = -1;

    public function new(
        _collectionGlobalObject     :CollectionGlobal,
        _root                       :Root
    ){

        collectionGlobalObject = _collectionGlobalObject;

        buttonObject = _root.findChild("UIPopupEditMuseumObjectButton", Button, true);
        buttonObject.onClick = function(_e){

            /*Adding OK and CANCEL button for the popup.*/
            var buttonControlInt:Int = 0;
            buttonControlInt |= PopupButton.OK;
            buttonControlInt |= PopupButton.CANCEL;

            var iDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/UIPopupEditObjectMuseum.xml");
            popupObject = PopupManager.instance.showCustom(iDisplayObject, "Edit Museum Object", buttonControlInt, function(_button){

                /*You can actually have this done with checking the component of a Popup controller.
                If a popup controller/component returns null then the popup is not active.*/
                if(_button == PopupButton.OK){
                    /*If button OK is pressed then add a museum object according to the inputted value.
                    PENDING: Check whethe the data inputted valid.
                    PENDING: Check how to make disable OK button of this popup.*/
                    var nameAltString:String = nameAltTextInputObject.text;
                    var nameFullString:String = nameFullTextInputObject.text;
                    var parentNameAltString:String = selectParentNameFullListSelectorObject.text;
                    var explanationStringArray:Array<String> = new Array<String>();
                    var tagObjectArray:Array<ObjectTag> = new Array<ObjectTag>();
                    var typeEnum:EnumMuseumType = null;
                    if(selectParentNameFullListSelectorObject.text == "Exhibition"){ typeEnum = EXH; }
                    else if(selectParentNameFullListSelectorObject.text == "Floor"){ typeEnum = FLR; }
                    else if(selectParentNameFullListSelectorObject.text == "Room"){ typeEnum = ROM; }

                    if(typeEnum == FLR){ parentNameAltString = "XXX_XXX"; }

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < textInputExplanationStructArray.length){
                        if(
                            textInputExplanationStructArray[loopCounter1Int].textInputObject.text != "" &&
                            textInputExplanationStructArray[loopCounter1Int].textInputObject.text != " "
                        ){
                            explanationStringArray.push(textInputExplanationStructArray[loopCounter1Int].textInputObject.text);
                        }
                        loopCounter1Int ++;
                    }
                    loopCounter1Int = 0;
                    while(loopCounter1Int < listSelectorTagStructArray.length){
                        var tagNameString:String = listSelectorTagStructArray[loopCounter1Int].listSelectorObject.text;
                        var tagObject:ObjectTag = CollectionFunction.FindTagObject(collectionGlobalObject, false, tagNameString);
                        if(tagObject == null){ tagObject = CollectionFunction.FindTagObject(collectionGlobalObject, true, tagNameString); }
                        if(tagObject != null){ tagObjectArray.push(tagObject); }
                        loopCounter1Int ++;
                    }

                    /*PENDING: Adding notification if user is not properly input new museum object information.*/
                    if(
                        nameAltString                   != "" || nameAltString          != " " || nameAltString         != null ||
                        nameFullString                  != "" || nameFullString         != " " || nameFullString        != null ||
                        parentNameAltString             != "" || parentNameAltString    != " " || parentNameAltString   != null ||
                        explanationStringArray.length   != 0  || tagObjectArray.length  != 0
                    ){

                        selectedMuseumObject.SetNameAltStringVoid(nameAltString);
                        selectedMuseumObject.SetNameFullStringVoid(nameFullString);
                        selectedMuseumObject.ChangeParentObject(parentNameAltString);
                        selectedMuseumObject.SetExplanationStringArrayVoid(explanationStringArray);
                        selectedMuseumObject.SetTagObjectArrayVoid(tagObjectArray);

                    }

                }

            });

            selectTypeListSelectorString = "";
            selectTypeListSelectorPrevString = "";

            displayFullTextObject = popupObject.content.findChild("UIPopupEditObjectMuseum_DisplayFull", Text, true);
            displayVisitorCurrentTextObject = popupObject.content.findChild("UIPopupEditObjectMuseum_DisplayVisitorCurrent", Text, true);
            displayVisitorTotalTextObject = popupObject.content.findChild("UIPopupEditObjectMuseum_DisplayVisitorTotal", Text, true);
            gridObject = popupObject.content.findChild("UIPopupEditObjectMuseum_Grid", Grid, true);
            nameAltTextInputObject = popupObject.content.findChild("UIPopupEditObjectMuseum_InputAltName", TextInput, true);
            nameAltTextInputObject.disabled = true;
            nameFullTextInputObject = popupObject.content.findChild("UIPopupEditObjectMuseum_InputFullName", TextInput, true);
            nameFullTextInputObject.disabled = true;
            selectObjectMuseumListSelectorObject = popupObject.content.findChild("UIPopupEditObjectMuseum_SelectObjectMuseum", ListSelector, true);
            selectObjectMuseumListSelectorObject.disabled = true;
            selectObjectMuseumListSelectorObject.method = "default";
            selectParentNameFullListSelectorObject = popupObject.content.findChild("UIPopupEditObjectMuseum_SelectParentObject", ListSelector, true);
            selectParentNameFullListSelectorObject.disabled = true;
            selectParentNameFullListSelectorObject.method = "default";
            selectTypeListSelectorObject = popupObject.content.findChild("UIPopupEditObjectMuseum_SelectType", ListSelector, true);
            selectTypeListSelectorObject.method = "default";

            /*Adding callback for the museum specific button.*/
            if(_e.component.userData != null){
                var string:String = "" + _e.component.userData;
                var stringArray:Array<String> = string.split("*");
                var nameAltString:String = stringArray[1];
                stringArray = nameAltString.split("_");
                var enumString:String = stringArray[0];
                var typeEnum:EnumMuseumType = Type.createEnum(EnumMuseumType, enumString);
                var museumObject:ObjectMuseum = CollectionFunction.FindMuseumObject(collectionGlobalObject, typeEnum, nameAltString);

                if(museumObject != null){

                    selectedMuseumObject = museumObject;

                    var fullString:String = "";
                    if(selectedMuseumObject.GetFullBool() == true){ fullString = "True"; }
                    else if(selectedMuseumObject.GetFullBool() == false){ fullString = "False"; }
                    displayFullTextObject.text = fullString;
                    displayVisitorCurrentTextObject.text = "" + selectedMuseumObject.GetVisitorCurrentInt();
                    displayVisitorTotalTextObject.text = "" + selectedMuseumObject.GetVisitorTotalInt();
                    nameAltTextInputObject.disabled = false;
                    nameAltTextInputObject.text = selectedMuseumObject.GetNameStruct().nameAltString;
                    nameFullTextInputObject.disabled = false;
                    nameFullTextInputObject.text = selectedMuseumObject.GetNameStruct().nameFullString;
                    selectTypeListSelectorObject.disabled = false;
                    var nameFullEnumString:String = "";
                    if(enumString == "EXH"){ nameFullEnumString = "Exhibition" ;}
                    else if(enumString == "FLR"){ nameFullEnumString = "Floor" ;}
                    else if(enumString == "ROM"){ nameFullEnumString = "Room" ;}
                    selectTypeListSelectorObject.text = nameFullEnumString;
                    selectTypeListSelectorString = selectTypeListSelectorObject.text;
                    selectTypeListSelectorPrevString = selectTypeListSelectorObject.text;

                    var tempObjectArray:Array<ObjectMuseum> = new Array<ObjectMuseum>();
                    if(selectTypeListSelectorString == "Exhibition"){ tempObjectArray = collectionGlobalObject.GetExhibitionObjectArray(); }
                    else if(selectTypeListSelectorString == "Floor"){ tempObjectArray = collectionGlobalObject.GetFloorObjectArray(); }
                    else if(selectTypeListSelectorString == "Room"){ tempObjectArray = collectionGlobalObject.GetRoomObjectArray(); }

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempObjectArray.length){
                        selectObjectMuseumListSelectorObject.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameFullString);
                        loopCounter1Int ++;
                    }
                    selectObjectMuseumListSelectorObject.disabled = false;
                    selectObjectMuseumListSelectorObject.selectedIndex = 0;
                    selectObjectMuseumListSelectorObject.text = nameFullTextInputObject.text;
                    if(museumObject.GetParentObject() != null){
                        selectParentNameFullListSelectorObject.disabled = false;
                        selectParentNameFullListSelectorObject.text = museumObject.GetParentObject().GetNameStruct().nameFullString;
                    }
                }
            }

            /*Adding the first explanation box.*/
            CollectionFunction.ClearArray(textInputExplanationStructArray);
            var textObject:Text = new Text();
            var textInputObject:TextInput = new TextInput();
            var textInputExplanationStruct  :StructTextInput = {
                textInputObject             :textInputObject,
                textObject                  :textObject
            };
            textInputExplanationStructArray.push(textInputExplanationStruct);
            textObject.id = "UIPopupEditObjectMuseum_InputExplanationText_" + textInputExplanationStructArray.length;
            textObject.text = "Explanation";
            textInputObject.disabled = true;
            textInputObject.id = "UIPopupEditObjectMuseum_InputExplanation_" + textInputExplanationStructArray.length;
            textInputObject.percentWidth = 100;
            gridObject.addChild(textInputObject);
            textInputExplanationLastIndexInt = gridObject.indexOfChild(textInputExplanationStructArray[textInputExplanationStructArray.length - 1].textInputObject) + 1;

            /*Adding the first tag selection box.*/
            CollectionFunction.ClearArray(listSelectorTagStructArray);
            var textObject:Text = new Text();
            var listSelectorObject:ListSelector = new ListSelector();
            var listSelectorTagStruct   :StructListSelector = {
                listSelectorObject      :listSelectorObject,
                textObject              :textObject
            };
            listSelectorTagStructArray.push(listSelectorTagStruct);
            textObject.id = "UIPopupEditObjectMuseum_SelectTagText_" + listSelectorTagStructArray.length;
            textObject.text = "Tags";
            gridObject.addChild(textObject);
            listSelectorObject.disabled = true;
            listSelectorObject.id = "UIPopupEditObjectMuseum_SelectTag_" + listSelectorTagStructArray.length;
            listSelectorObject.percentWidth = 100;
            listSelectorObject.selectedIndex = -1;
            listSelectorObject.text = " ";
            gridObject.addChild(listSelectorObject);
            listSelectorObject.method = "default";

        }

    }
    public function UpdateVoid(){

        var updateMuseumButtonBool:Bool = false;
        if(
            museumButtonObjectArray.length != (
                collectionGlobalObject.GetExhibitionObjectArray()   .length +
                collectionGlobalObject.GetFloorObjectArray()        .length +
                collectionGlobalObject.GetRoomObjectArray()         .length
            )
        ){ updateMuseumButtonBool = true; }
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){

            if(updateMuseumButtonBool == true){ break; }
            if(museumButtonObjectArray[loopCounter1Int] != collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject()){
                updateMuseumButtonBool = true;
                break;
            }
            loopCounter1Int ++;

        }
        loopCounter1Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetFloorObjectArray().length){

            if(updateMuseumButtonBool == true){ break; }
            if(museumButtonObjectArray[loopCounter1Int + collectionGlobalObject.GetExhibitionObjectArray().length] != collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject()){
                updateMuseumButtonBool = true;
                break;
            }
            loopCounter1Int ++;

        }
        loopCounter1Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){

            if(updateMuseumButtonBool == true){ break; }
            if(museumButtonObjectArray[loopCounter1Int + collectionGlobalObject.GetExhibitionObjectArray().length + collectionGlobalObject.GetFloorObjectArray().length] != collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject()){
                updateMuseumButtonBool = true;
                break;
            }
            loopCounter1Int ++;

        }
        if(updateMuseumButtonBool == true){
            CollectionFunction.ClearArray(museumButtonObjectArray);
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){
                collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().userData
                    = collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().id;
                museumButtonObjectArray.push(collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject());
                collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().onClick = buttonObject.onClick;
                loopCounter1Int ++;
            }
            loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetFloorObjectArray().length){
                collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().userData
                    = collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().id;
                museumButtonObjectArray.push(collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject());
                collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().onClick = buttonObject.onClick;
                loopCounter1Int ++;
            }
            loopCounter1Int = 0;
            while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){
                collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().userData
                    = collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().id;
                museumButtonObjectArray.push(collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject());
                collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].GetMuseumUIObject().GetButtonObject().onClick = buttonObject.onClick;
                loopCounter1Int ++;
            }
        }

        if(popupObject != null){

            if(
                selectTypeListSelectorObject.text                   == ""   ||
                selectTypeListSelectorObject.text                   == " "
            ){
                selectObjectMuseumListSelectorObject.disabled       = true;
                selectObjectMuseumListSelectorObject.selectedIndex  = -1;
                selectObjectMuseumListSelectorObject.text           = " ";
            }
            else{ selectObjectMuseumListSelectorObject.disabled = false; }
            if(
                selectObjectMuseumListSelectorObject.text           == ""   ||
                selectObjectMuseumListSelectorObject.text           == " "
            ){
                nameAltTextInputObject.disabled                     = true;
                nameFullTextInputObject.disabled                    = true;
                selectParentNameFullListSelectorObject.disabled     = true;
            }
            else{
                nameAltTextInputObject.disabled                     = false;
                nameFullTextInputObject.disabled                    = false;
                selectParentNameFullListSelectorObject.disabled     = false;
            }

            if(selectTypeListSelectorObject.selectedIndex != -1){

                selectTypeListSelectorString = selectTypeListSelectorObject.text;
                if(selectTypeListSelectorString != selectTypeListSelectorPrevString){

                    nameAltTextInputObject.disabled = false;
                    nameAltTextInputObject.text = " ";
                    nameFullTextInputObject.disabled = false;
                    nameFullTextInputObject.text = " ";
                    selectObjectMuseumListSelectorObject.dataSource.removeAll();
                    selectObjectMuseumListSelectorObject.disabled = false;
                    selectObjectMuseumListSelectorObject.selectedIndex = -1;
                    selectParentNameFullListSelectorObject.disabled = false;
                    selectParentNameFullListSelectorObject.selectedIndex = -1;

                    var tempObjectArray:Array<ObjectMuseum> = new Array<ObjectMuseum>();
                    if(selectTypeListSelectorString == "Exhibition"){ tempObjectArray = collectionGlobalObject.GetExhibitionObjectArray(); }
                    else if(selectTypeListSelectorString == "Floor"){ tempObjectArray = collectionGlobalObject.GetFloorObjectArray(); }
                    else if(selectTypeListSelectorString == "Room"){ tempObjectArray = collectionGlobalObject.GetRoomObjectArray(); }

                    var loopCounter1Int:Int = 0;
                    while(loopCounter1Int < tempObjectArray.length){
                        selectObjectMuseumListSelectorObject.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameFullString);
                        loopCounter1Int ++;
                    }

                    selectTypeListSelectorPrevString = selectTypeListSelectorString;

                }

            }

            if(selectTypeListSelectorObject.text == "Floor"){ selectParentNameFullListSelectorObject.disabled = true; }
            else if(
                selectTypeListSelectorObject.text == "Exhibition" ||
                selectTypeListSelectorObject.text == "Room"
            ){ selectParentNameFullListSelectorObject.disabled = false; }

            /*Check which object museum is selected.*/
            if(selectObjectMuseumListSelectorObject.selectedIndex != -1){

                var typeEnum:EnumMuseumType = null;
                if(selectTypeListSelectorString == "Exhibition"){ typeEnum = EXH; }
                else if(selectTypeListSelectorString == "Floor"){ typeEnum = FLR; }
                else if(selectTypeListSelectorString == "Room"){ typeEnum = ROM; }

                selectedMuseumObject = CollectionFunction.FindMuseumObject(collectionGlobalObject, typeEnum, selectObjectMuseumListSelectorObject.text);

                if(selectedMuseumObject != selectedMuseumPrevObject){

                    var loopCounter1Int:Int = 1;
                    while(loopCounter1Int <= listSelectorTagStructArray.length){

                        var textObject:Text = popupObject.content.findChild("UIPopupEditObjectMuseum_SelectTagText_" + loopCounter1Int, Text, true);
                        var listSelectorObject:ListSelector = popupObject.content.findChild("UIPopupEditObjectMuseum_SelectTag_" + loopCounter1Int, ListSelector, true);
                        gridObject.removeChild(textObject);
                        gridObject.removeChild(listSelectorObject);
                        loopCounter1Int ++;

                    }
                    CollectionFunction.ClearArray(listSelectorTagStructArray);

                    loopCounter1Int = 1;
                    while(loopCounter1Int <= textInputExplanationStructArray.length){

                        var textObject:Text = popupObject.content.findChild("UIPopupEditObjectMuseum_InputExplanationText_" + loopCounter1Int, Text, true);
                        var textInputObject:TextInput = popupObject.content.findChild("UIPopupEditObjectMuseum_InputExplanation_" + loopCounter1Int, TextInput, true);
                        gridObject.removeChild(textObject);
                        gridObject.removeChild(textInputObject);
                        loopCounter1Int ++;

                    }
                    CollectionFunction.ClearArray(textInputExplanationStructArray);

                    var fullString:String = "";
                    if(selectedMuseumObject.GetFullBool() == true){ fullString = "True"; }
                    else if(selectedMuseumObject.GetFullBool() == false){ fullString = "False"; }
                    displayFullTextObject.text = fullString;
                    displayVisitorCurrentTextObject.text = "" + selectedMuseumObject.GetVisitorCurrentInt();
                    displayVisitorTotalTextObject.text = "" + selectedMuseumObject.GetVisitorTotalInt();
                    nameAltTextInputObject.disabled = false;
                    nameAltTextInputObject.text = "";
                    nameFullTextInputObject.disabled = false;
                    nameFullTextInputObject.text = "";
                    selectParentNameFullListSelectorObject.disabled = false;
                    selectParentNameFullListSelectorObject.selectedIndex = -1;

                    var explanationAmountInt:Int = 0;
                    explanationAmountInt = selectedMuseumObject.GetExplanationStringArray().length;
                    textInputExplanationLastIndexInt = gridObject.indexOfChild(displayVisitorTotalTextObject) + 1;
                    loopCounter1Int = 0;
                    while(loopCounter1Int < explanationAmountInt){

                        var textObject:Text = new Text();
                        var textInputObject:TextInput = new TextInput();
                        var textInputExplanationStruct:StructTextInput = {

                            textInputObject     :textInputObject,
                            textObject          :textObject

                        };
                        textInputExplanationStructArray.push(textInputExplanationStruct);
                        textObject.id = "UIPopupEditObjectMuseum_InputExplanationText_" + textInputExplanationStructArray.length;
                        textObject.text = "Explanation";
                        gridObject.addChildAt(textObject, textInputExplanationLastIndexInt);
                        textInputExplanationLastIndexInt = gridObject.indexOfChild(textInputExplanationStructArray[textInputExplanationStructArray.length - 1].textObject) + 1;

                        textInputObject.disabled = false;
                        textInputObject.id = "UIPopupEditObjectMuseum_InputExplanation_" + textInputExplanationStructArray.length;
                        textInputObject.percentWidth = 100;
                        textInputObject.text = selectedMuseumObject.GetExplanationStringArray()[loopCounter1Int];
                        gridObject.addChildAt(textInputObject, textInputExplanationLastIndexInt);
                        textInputExplanationLastIndexInt = gridObject.indexOfChild(textInputExplanationStructArray[textInputExplanationStructArray.length - 1].textInputObject) + 1;

                        loopCounter1Int ++;

                    }
                    /*Set the GUI here.
                    So everytime the selected object change we reset the GUI so that it matched with information
                        received from the selectObjectMuseumListSelectorObject.*/
                    var tagAmountInt:Int = 0;
                    tagAmountInt = selectedMuseumObject.GetTagObjectArray().length;
                    loopCounter1Int = 0;
                    while(loopCounter1Int < tagAmountInt){

                        var textObject:Text = new Text();
                        var listSelectorObject:ListSelector = new ListSelector();
                        var listSelectorTagStruct = {

                            listSelectorObject  :listSelectorObject,
                            textObject          :textObject

                        }
                        listSelectorTagStructArray.push(listSelectorTagStruct);
                        textObject.id = "UIPopupEditObjectMuseum_SelectTagText_" + listSelectorTagStructArray.length;
                        textObject.text = "Tags";
                        gridObject.addChild(textObject);
                        listSelectorObject.disabled = false;
                        listSelectorObject.id = "UIPopupEditObjectMuseum_SelectTag_" + listSelectorTagStructArray.length;
                        listSelectorObject.percentWidth = 100;
                        /*CAUTION: I mask the index so the text is actually what it is from the selectedMuseumObject but the selected index
                            is the index after Remove entry.*/
                        listSelectorObject.selectedIndex = 1;
                        listSelectorObject.text =  selectedMuseumObject.GetTagObjectArray()[loopCounter1Int].GetNameString();
                        listSelectorObject.dataSource.createFromString("Remove");
                        /*Adding multiple data sources.*/
                        var loopCounter2Int:Int = 0;
                        while(loopCounter2Int < collectionGlobalObject.GetTagObjectArray().length){

                            var matchBool:Bool = false;
                            var loopCounter3Int:Int = 0;
                            while(loopCounter3Int < listSelectorTagStructArray.length){

                                if(collectionGlobalObject.GetTagObjectArray()[loopCounter2Int].GetNameString() == listSelectorTagStructArray[loopCounter3Int].listSelectorObject.text){ matchBool = true; }
                                loopCounter3Int ++;

                            }

                            if(matchBool == false){
                                listSelectorObject.dataSource.createFromString(collectionGlobalObject.GetTagObjectArray()[loopCounter2Int].GetNameString());
                            }

                            loopCounter2Int ++;

                        }
                        gridObject.addChild(listSelectorObject);
                        listSelectorObject.method = "default";

                        loopCounter1Int ++;

                    }
                    nameAltTextInputObject.text = selectedMuseumObject.GetNameStruct().nameAltString;
                    nameFullTextInputObject.text = selectedMuseumObject.GetNameStruct().nameFullString;
                    if(selectTypeListSelectorString != "Floor"){
                        selectParentNameFullListSelectorObject.text = selectedMuseumObject.GetParentObject().GetNameStruct().nameFullString;

                        var tempObjectArray:Array<ObjectMuseum> = null;
                        if(selectTypeListSelectorString == "Exhibition"){ tempObjectArray = collectionGlobalObject.GetRoomObjectArray(); }
                        else if(selectTypeListSelectorString == "Room"){ tempObjectArray = collectionGlobalObject.GetFloorObjectArray(); }

                        loopCounter1Int = 0;
                        while(loopCounter1Int < tempObjectArray.length){

                            selectParentNameFullListSelectorObject.dataSource.createFromString(tempObjectArray[loopCounter1Int].GetNameStruct().nameFullString);
                            loopCounter1Int ++;

                        }

                    }
                    else if(selectTypeListSelectorString == "Floor"){ selectParentNameFullListSelectorObject.disabled = true; }

                    selectedMuseumPrevObject = selectedMuseumObject;

                }

            }

        }

        if(popupObject != null && listSelectorTagStructArray.length > 0){

            /*For when the ListSelector struct array is having lenght equal to 1 and loopCounter1Int is not having index equal to the ListSelector array length minus 1,
                reset the value of the of the following ListSelector.
            If the condition other than those, remove the ListSelector from the ListSelector struct array and from the grid layout.
            This codes below affects when user deleting tags.*/
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < listSelectorTagStructArray.length){

                if(
                    listSelectorTagStructArray.length                                               >  1 &&
                    listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex    == 0
                ){
                    if(loopCounter1Int == listSelectorTagStructArray.length - 1){
                        listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex = -1;
                    }
                    else{
                        gridObject.removeChild(listSelectorTagStructArray[loopCounter1Int].listSelectorObject);
                        gridObject.removeChild(listSelectorTagStructArray[loopCounter1Int].textObject);
                        listSelectorTagStructArray.remove(listSelectorTagStructArray[loopCounter1Int]);

                        /*Re - adjust the list selector id.*/
                        var loopCounter2Int:Int = 1;
                        while(loopCounter2Int <= listSelectorTagStructArray.length){

                            listSelectorTagStructArray[loopCounter2Int - 1].listSelectorObject.id = "UIPopupEditObjectMuseum_SelectTag_" + loopCounter2Int;
                            listSelectorTagStructArray[loopCounter2Int - 1].textObject.id = "UIPopupEditObjectMuseum_SelectTagText_" + loopCounter2Int;
                            loopCounter2Int ++;

                        }
                    }
                }
                else if(listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex == 0 && listSelectorTagStructArray.length == 1){
                    listSelectorTagStructArray[loopCounter1Int].listSelectorObject.selectedIndex = -1;
                }
                loopCounter1Int ++;

            }

            if(listSelectorTagStructArray[listSelectorTagStructArray.length - 1].listSelectorObject.selectedIndex != -1 && listSelectorTagStructArray[listSelectorTagStructArray.length - 1].listSelectorObject.selectedIndex != 0){

                var listSelectorTagTextObject:Text = new Text();
                var listSelectorTagObject:ListSelector = new ListSelector();
                var listSelectorTagStruct = {
                    listSelectorObject  :listSelectorTagObject,
                    textObject          :listSelectorTagTextObject
                };
                listSelectorTagStructArray.push(listSelectorTagStruct);


                listSelectorTagTextObject = new Text();
                listSelectorTagTextObject.text = "Tags";
                listSelectorTagTextObject.id = "UIPopupEditObjectMuseum_SelectTagText_" + listSelectorTagStructArray.length;
                gridObject.addChild(listSelectorTagTextObject);

                listSelectorTagObject.dataSource.createFromString("Remove");

                listSelectorTagObject.id = "UIPopupEditObjectMuseum_SelectTag_" + listSelectorTagStructArray.length;
                listSelectorTagObject.percentWidth = 100;
                listSelectorTagObject.text = " ";
                gridObject.addChild(listSelectorTagObject);

                var tempUsedTagStringArray:Array<String> = new Array<String>();
                /*This loop is for adding every possible tags into the list selector.*/
                var loopCounter1Int:Int = 0;
                while(loopCounter1Int < collectionGlobalObject.GetTagObjectArray().length){
                    tempUsedTagStringArray.push(collectionGlobalObject.GetTagObjectArray()[loopCounter1Int].GetNameString());
                    loopCounter1Int ++;
                }
                /*This loop is for removing tag that is inputted in previous list selector.*/
                loopCounter1Int = 1;
                while(loopCounter1Int <= listSelectorTagStructArray.length){

                    var tempListSelectorTagObject:ListSelector = popupObject.content.findChild("UIPopupEditObjectMuseum_SelectTag_" + loopCounter1Int, ListSelector, true);
                    tempUsedTagStringArray.remove(tempListSelectorTagObject.text);
                    loopCounter1Int ++;

                }
                /*Add every tag that is not yet added within the museum object into the list selector.*/
                loopCounter1Int = 0;
                while(loopCounter1Int < tempUsedTagStringArray.length){

                    listSelectorTagObject.dataSource.createFromString(tempUsedTagStringArray[loopCounter1Int]);
                    loopCounter1Int ++;

                }

                listSelectorTagObject.method = "default"; /*For some reason you need this to be configured after the object is initialized in the screen.*/

            }

        }

        if(popupObject != null && textInputExplanationStructArray.length > 0){

            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < textInputExplanationStructArray.length){

                if(
                    (
                        textInputExplanationStructArray[loopCounter1Int].textInputObject.text == "" ||
                        textInputExplanationStructArray[loopCounter1Int].textInputObject.text == " "
                    ) &&
                    textInputExplanationStructArray.length > 1
                ){

                    /*PENDING: Might need some checking here due to it it quite different than the original
                        codes.*/
                    if(loopCounter1Int != textInputExplanationStructArray.length - 1){

                        gridObject.removeChild(textInputExplanationStructArray[loopCounter1Int].textInputObject);
                        gridObject.removeChild(textInputExplanationStructArray[loopCounter1Int].textObject);
                        textInputExplanationStructArray.remove(textInputExplanationStructArray[loopCounter1Int]);

                        var loopCounter2Int:Int = 1;
                        while(loopCounter2Int <= textInputExplanationStructArray.length){

                            textInputExplanationStructArray[loopCounter2Int - 1].textInputObject.id = "UIPopupEditObjectMuseum_InputExplanation_" + loopCounter2Int;
                            textInputExplanationStructArray[loopCounter2Int - 1].textObject.id = "UIPopupEditObjectMuseum_InputExplanationText_" + loopCounter2Int;
                            loopCounter2Int ++;

                        }
                        textInputExplanationLastIndexInt = gridObject.indexOfChild(textInputExplanationStructArray[textInputExplanationStructArray.length - 1].textInputObject) + 1;

                    }

                }
                loopCounter1Int ++;

            }

            if(
                textInputExplanationStructArray[textInputExplanationStructArray.length - 1].textInputObject.text != "" &&
                textInputExplanationStructArray[textInputExplanationStructArray.length - 1].textInputObject.text != " "
            ){

                var textInputExplanationTextObject:Text = new Text();
                var textInputExplanationObject:TextInput = new TextInput();
                var textInputExplanationStruct = {
                    textInputObject     : textInputExplanationObject,
                    textObject          : textInputExplanationTextObject
                };
                textInputExplanationStructArray.push(textInputExplanationStruct);

                textInputExplanationTextObject.text = "Explanation";
                textInputExplanationTextObject.id = "UIPopupEditObjectMuseum_InputExplanationText_" + textInputExplanationStructArray.length;
                gridObject.addChildAt(textInputExplanationTextObject, textInputExplanationLastIndexInt);
                textInputExplanationLastIndexInt = gridObject.indexOfChild(textInputExplanationTextObject) + 1;

                textInputExplanationObject.id = "UIPopupEditObjectMuseum_InputExplanation_" + textInputExplanationStructArray.length;
                textInputExplanationObject.percentWidth = 100;
                gridObject.addChildAt(textInputExplanationObject, textInputExplanationLastIndexInt);
                textInputExplanationLastIndexInt = gridObject.indexOfChild(textInputExplanationObject) + 1;

            }

        }

    }

}
