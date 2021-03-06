import CollectionEnum;
import CollectionStruct;
import flash.display.*;
import flash.events.*;
import haxe.ui.toolkit.containers.*;
import haxe.ui.toolkit.controls.*;
import haxe.ui.toolkit.controls.popups.*;
import haxe.ui.toolkit.controls.selection.*;
import haxe.ui.toolkit.core.*;
import haxe.ui.toolkit.core.interfaces.*;
import haxe.ui.toolkit.core.PopupManager;
import haxe.ui.toolkit.data.*;
import haxe.ui.toolkit.events.*;
#if (cpp)
    import hxSerial.Serial;
#end




/*Main loop class with the main thread.
The extension to Sprite class is necessary to addEventListener.
And then from this addEventListener I assign a function a main loop.*/
class Main extends Sprite{




    /*Global variable database for the whole application.*/
    var collectionGlobalObject                  :CollectionGlobal               = new CollectionGlobal();
    /*Main loop counter.
    We need it to be placed as a class local variable because it need to be accessed everytime,
        but the value is not necessailry to be initiated over time.*/
    var loopCounterMainInt                      :Int                            = 0;
    var loopCounterCompanyWordInt               :Int                            = 0;
    /*Popup objects.*/
    var sendInstructionToArduinoStringArray     :Array<String>                  = new Array<String>();
    var serialCounterInt                        :Int                            = 0;
    var serialEstablishedBool                   :Bool                           = false;
    var serialIndexInt                          :Int                            = 0;
    var serialLength                            :Int                            = 0;
    var soundProgressBool                       :Bool                           = false;
    var tagAmountInt                            :Int                            = -1;
    var uiPopupAddMuseumObject                  :UIPopupAddObjectMuseum         = null;
    var uiPopupAddTagObject                     :UIPopupAddObjectTag            = null;
    var uiPopupAddVisitorObject                 :UIPopupAddObjectVisitor        = null;
    var uiPopupEditMuseumObject                 :UIPopupEditObjectMuseum        = null;
    var uiPopupEditTagObject                    :UIPopupEditObjectTag           = null;
    var uiPopupEditVisitorObject                :UIPopupEditObjectVisitor       = null;
    var uiPopupLoadingWordObject                :Popup                          = null;
    var uiPopupRemoveMuseumObject               :UIPopupRemoveObjectMuseum      = null;
    var uiPopupRemoveTagObject                  :UIPopupRemoveObjectTag         = null;
    var uiPopupRemoveVisitorObject              :UIPopupRemoveObjectVisitor     = null;
    var updateAfterBool                         :Bool                           = false;
    #if (cpp)
        var serialObject                        :Serial                         = null;
    #end





    /*==================================================
    Constructor.*/
    private function new(){

        /*super() to extends the functionality of Sprite object.*/
        super();

        #if (cpp)
            serialLength = hxSerial.Serial.getDeviceList().length;
        #end

        /*Initiate Toolkit static object to prepare HaXeUI to run.*/
        Toolkit.init();

        /*Set all animation controller in HaXeUI to show no animation.
        The animation is currently bugged in HaXeUI version number 1.8.6.*/
        Toolkit.setTransitionForClass(Accordion, "none");
        Toolkit.setTransitionForClass(Popup, "none");

        /*Toolkit.openFullScreen is used to initiate all HaXeUI objects.*/
        Toolkit.openFullscreen(function(_root:Root){

            /*Init GUI object here.*/
            var uiMainObject:IDisplayObject = Toolkit.processXmlResource("layout/UIMain.xml");
            /*Set back this object in to the CollectionGlobal class so that
                we can refer this GUI in another class easily.*/
            collectionGlobalObject.SetUIMainObjectVoid(uiMainObject);
            /*Add the main GUI to _root, otherwise it will not be displayed.*/
            _root.addChild(uiMainObject);

            /*Initiate all possible pop up object that can be
                displayed using main menu buttons.*/
            uiPopupAddMuseumObject      = new UIPopupAddObjectMuseum        (collectionGlobalObject, _root);
            uiPopupAddTagObject         = new UIPopupAddObjectTag           (collectionGlobalObject, _root);
            uiPopupAddVisitorObject     = new UIPopupAddObjectVisitor       (collectionGlobalObject, _root);
            uiPopupEditMuseumObject     = new UIPopupEditObjectMuseum       (collectionGlobalObject, _root);
            uiPopupEditTagObject        = new UIPopupEditObjectTag          (collectionGlobalObject, _root);
            uiPopupEditVisitorObject    = new UIPopupEditObjectVisitor      (collectionGlobalObject, _root);
            uiPopupRemoveMuseumObject   = new UIPopupRemoveObjectMuseum     (collectionGlobalObject, _root);
            uiPopupRemoveTagObject      = new UIPopupRemoveObjectTag        (collectionGlobalObject, _root);
            uiPopupRemoveVisitorObject  = new UIPopupRemoveObjectVisitor    (collectionGlobalObject, _root);

            /*Initiate the absolute layout object for the display of museum object
                button user interface.*/
            var uiMuseumAbsoluteObject:Absolute = _root.findChild("UIMuseumAbsolute", Absolute, true);
            /*Refer it back to the CollectionGlobal so that I can acces this
                absolute layout later on.*/
            collectionGlobalObject.SetUIMuseumAbsoluteObjectVoid(uiMuseumAbsoluteObject);

        });
        /*By here I have done initiating all user interface object.*/

        /*Create all the necessary premade object.*/
        CollectionTagGeneral    .TagGeneralStructVoid           (collectionGlobalObject);
        CollectionPremadeTag    .PremadeTagStructVoid           (collectionGlobalObject);
        CollectionPremade       .PremadeFloorNewObjectVoid      (collectionGlobalObject);
        CollectionPremade       .PremadeRoomNewObjectVoid       (collectionGlobalObject);
        CollectionPremade       .PremadeExhibitionNewObjectVoid (collectionGlobalObject);
        /*
        CollectionPremade       .PremadeFloorObjectVoid         (collectionGlobalObject);
        CollectionPremade       .PremadeRoomObjectVoid          (collectionGlobalObject);
        CollectionPremade       .PremadeExhibitionObjectVoid    (collectionGlobalObject);
        */
        /*Change the number (first parameter) to change the initial visitor when the application starts.*/
        CollectionPremade       .PremadeVisitorObjectVoid       (30, collectionGlobalObject);

        tagAmountInt = collectionGlobalObject.GetTagGeneralObjectArray().length + collectionGlobalObject.GetTagObjectArray().length;
        uiPopupLoadingWordObject = PopupManager.instance.showBusy("Cooking words!!!");
        PopupManager.instance.showPopup(uiPopupLoadingWordObject);

        /*Refer UpdateVoid function as main loop function.*/
        addEventListener(Event.ENTER_FRAME, UpdateVoid);

    }
    /*==================================================*/





    /*========================================
    Function to loop through all available Serial port and to find which Serial port is an
        Arduino's Serial port.*/
    private function SearchForSerialConnectionVoid(){

        #if (cpp)

            /*So how it is work here is to check which serial port is returning "HANDSHAKE".
            The first serial port is checked based on serialIndexInt if the serial port is not returning "HANDSHAKE"
                wait for 300 system tick before increment in serialIndexInt.
            Increment in serialIndexInt means this program is checking into new serial port.
            If the serialIndexInt is exceed the number of available port in the computer than this program know that
                there is no Arduino device connected to the computer that sends "HANDSHAKE" into the serial port.*/
            if(serialIndexInt >= serialLength){ return; }

            if(serialEstablishedBool == false){

                if(serialObject == null){

                    serialObject = new hxSerial.Serial(hxSerial.Serial.getDeviceList()[serialIndexInt], 9600, true);
                    trace(serialObject.portName);

                }
                else if(serialObject != null){

                    if(serialObject.available() > 0){

                        if(serialObject.readBytes(9) == "HANDSHAKE"){

                            serialEstablishedBool = true;
                            return;

                        }

                    }

                }

                serialCounterInt ++;
                if(serialCounterInt >= 300){

                    serialObject = null;
                    serialIndexInt ++;
                    serialCounterInt = 0;

                }

            }
        #end

    }
    /*========================================*/





    /*==================================================
    Update function that is executed per frame tick.
    Please to make sure a difference within this function and the constructor function.
    The constructor initiate the HaXeUI objects first then the other object.
    While, in the UpdateVoid() function I need to update the other object first
        before updating the user interface object.
    This is to prevent null pointer exception.*/
    private function UpdateVoid(event:Event){

        //UpdateAfterCompanyWordVoid();
        if(updateAfterBool == true){ UpdateAfterCompanyWordVoid(); }
        else if(updateAfterBool == false){ UpdateBeforeCompanyWordVoid(); }

    }
    /*==================================================*/





    /*==================================================
    Normal update function*/
    private function UpdateAfterCompanyWordVoid(){

        PopupManager.instance.hidePopup(uiPopupLoadingWordObject);

        /*If the HaXe program is compiled using C++ then activate serial connection.*/
        #if (cpp)

            SearchForSerialConnectionVoid();
            if(serialEstablishedBool == true && soundProgressBool == false){

                /*Check data availability in the serial port.*/
                if(serialObject.available() > 0){

                    /*Read 7 bytes within the serial port in one go.*/
                    var targetExhibitionString:String = serialObject.readBytes(7);

                    /*If the first three words is "EXH" then proceed to send instruction to Arduino Device.*/
                    if(targetExhibitionString.substring(0, 3) == "EXH"){

                        if(collectionGlobalObject.GetVisitorObjectArray()[0].GetVisitorModeEnum() == HARDWARE_MANUAL){

                            collectionGlobalObject.GetVisitorObjectArray()[0].ChangeExhibitionCurrentVoid(CollectionFunction.FindMuseumObject(collectionGlobalObject, EXH, targetExhibitionString));
                            serialObject.writeBytes("I"); /*Arduimo device start listening to instruction.*/
                            sendInstructionToArduinoStringArray.push("Y"); /*Play audio file that says "Welcome.".*/
                            sendInstructionToArduinoStringArray.push("Q"); /*Play "Exhibition".*/
                            sendInstructionToArduinoStringArray.push("W"); /*Play the index number of visitor's recent visited exhibition.*/ /*Play audio file that says "Explanation.".*/
                            sendInstructionToArduinoStringArray.push("E"); /*Play audio file that says "Explanation.".*/
                            sendInstructionToArduinoStringArray.push(Std.string(collectionGlobalObject.GetVisitorObjectArray()[0].GetExplanationCurrentIndexInt() + 1));
                            sendInstructionToArduinoStringArray.push("T"); /*Play audio file that says "Please visit and tap into.".*/
                            sendInstructionToArduinoStringArray.push("Q"); /*Play "Exhibition".*/
                            sendInstructionToArduinoStringArray.push(Std.string(collectionGlobalObject.GetVisitorObjectArray()[0].GetExhibitionTargetObjectArray()[0].GetIndexGlobalInt() + 1));
                            sendInstructionToArduinoStringArray.push("R"); /*Play audio file that says "Or.".*/
                            sendInstructionToArduinoStringArray.push("Q"); /*Play "Exhibition".*/
                            sendInstructionToArduinoStringArray.push(Std.string(collectionGlobalObject.GetVisitorObjectArray()[0].GetExhibitionTargetObjectArray()[1].GetIndexGlobalInt() + 1));
                            sendInstructionToArduinoStringArray.push("R"); /*Play audio file that says "Or.".*/
                            sendInstructionToArduinoStringArray.push("Q"); /*Play "Exhibition".*/
                            sendInstructionToArduinoStringArray.push(Std.string(collectionGlobalObject.GetVisitorObjectArray()[0].GetExhibitionTargetObjectArray()[2].GetIndexGlobalInt() + 1));
                            sendInstructionToArduinoStringArray.push("U"); /*Stop playing audio file from Arduino device.*/
                            soundProgressBool = true;

                        }

                        trace(targetExhibitionString);

                    }

                }

            }
            if(soundProgressBool == true){

                if(serialObject.available() > 0){

                    var string:String = serialObject.readBytes(1);

                    if(string == "O"){ /*If received instruction from Arduino device that this device has finished playing an audio file.*/

                        serialObject.writeBytes(sendInstructionToArduinoStringArray[0]);

                        trace(sendInstructionToArduinoStringArray[0]);

                        sendInstructionToArduinoStringArray.remove(sendInstructionToArduinoStringArray[0]);
                        if(sendInstructionToArduinoStringArray.length == 0){ soundProgressBool = false; }

                    }

                }

            }

        #end

        UpdateSlowVoid();
        uiPopupAddMuseumObject          .UpdateVoid();
        uiPopupAddTagObject             .UpdateVoid();
        uiPopupAddVisitorObject         .UpdateVoid();
        uiPopupEditMuseumObject         .UpdateVoid();
        uiPopupEditTagObject            .UpdateVoid();
        uiPopupEditVisitorObject        .UpdateVoid();
        uiPopupRemoveMuseumObject       .UpdateVoid();
        uiPopupRemoveTagObject          .UpdateVoid();
        uiPopupRemoveVisitorObject      .UpdateVoid();

    }
    /*==================================================*/




    
    /*==================================================
    This is a loading function to parse data from Wordnik API.
    However this function will only works in C++, Neko, PHP, and Python.
    Since OpenFL does not support Python and PHP I need to create a new interface for HaXe that targets
    PHP or Python.*/
    private function UpdateBeforeCompanyWordVoid(){

        var tagString:String = "";

        if(collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterCompanyWordInt] != null){

            /*Generate the company words for tag general object array.*/
            collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterCompanyWordInt].GenerateCompanyWordVoid();
            tagString = collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterCompanyWordInt].GetNameOriginalString();

        }
        /*If at certain index tag general is a null then it is the time to get into the normal tags.*/
        else if(collectionGlobalObject.GetTagGeneralObjectArray()[loopCounterCompanyWordInt] == null){

            if(collectionGlobalObject.GetTagObjectArray()[loopCounterCompanyWordInt - collectionGlobalObject.GetTagGeneralObjectArray().length] != null){

                /*Generate company words for normal tags.*/
                collectionGlobalObject.GetTagObjectArray()[loopCounterCompanyWordInt - collectionGlobalObject.GetTagGeneralObjectArray().length].GenerateCompanyWordVoid();
                tagString = collectionGlobalObject.GetTagObjectArray()[loopCounterCompanyWordInt - collectionGlobalObject.GetTagGeneralObjectArray().length].GetNameOriginalString();

            }
            else if(collectionGlobalObject.GetTagObjectArray()[loopCounterCompanyWordInt - collectionGlobalObject.GetTagGeneralObjectArray().length] == null){ updateAfterBool = true; }

        }

        /*Update the loading message accordingly.*/
        #if (!cpp && !neko && !php)

            Std.instance(
                uiPopupLoadingWordObject.content,
                SimplePopupContent
            ).SetTextControlStringVoid(
                "Wordnik API only works on CPP, Neko, and PHP target.\nCooking words!!! " +
                tagString +
                " " +
                loopCounterCompanyWordInt +
                "/" +
                tagAmountInt
            );
        
        #else

            Std.instance(
                uiPopupLoadingWordObject.content,
                SimplePopupContent
            ).SetTextControlStringVoid(
                "Cooking words!!! " +
                tagString +
                " " +
                loopCounterCompanyWordInt +
                "/" +
                tagAmountInt
            );
        
        #end

        loopCounterCompanyWordInt ++;

    }
    /*==================================================*/





    /*==================================================
    These are set of functionc to update the whole object within the application.
    The slow speed means that the objects will updated using least common multiplier, which also means that object array that is smallest will get update more often.
    The normal speed means that the objects will updated using least common multiplier but not the visitor object. This means that the visitor object will get their own loop to iterate its array.
    The fast speed is to update all the object's array in each different loop.
    These methods means that the faster the loop progress the slower (heavier) the application will be runs in a computer/device.
    CAUTION: The loop counter is reset when the user change update function process.
    CAUTION: This means there will a be a stability error (null pointer, etc) when there is change in speed when the application running.
    CAUTION: I think for testing and debugging use the fastest update speed to achieve faster result.
    CAUTION: I also personally think that the UpdateSlowVoid() is the safest update speed due to everything is updated accordingly.
    PENDING: The solution is to continue where the loop counter stop before changing the update speed.*/
    private function UpdateSlowVoid(){

        /*Loop through all objects.*/
        var leastCommonMultipleFloat:Float = CollectionFunction.GenerateLeastCommonMultipleFloat(collectionGlobalObject.GetExhibitionObjectArray().length, collectionGlobalObject.GetFloorObjectArray().length);
        leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetRoomObjectArray().length);
        leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetVisitorObjectArray().length);
        var leastCommonMultipleInt:Int = Math.round(leastCommonMultipleFloat);
        if(loopCounterMainInt > leastCommonMultipleInt){ loopCounterMainInt = 0; }
        collectionGlobalObject.GetExhibitionObjectArray()[loopCounterMainInt%collectionGlobalObject.GetExhibitionObjectArray().length].UpdateVoid();
        collectionGlobalObject.GetFloorObjectArray()[loopCounterMainInt%collectionGlobalObject.GetFloorObjectArray().length].UpdateVoid();
        collectionGlobalObject.GetRoomObjectArray()[loopCounterMainInt%collectionGlobalObject.GetRoomObjectArray().length].UpdateVoid();
        collectionGlobalObject.GetVisitorObjectArray()[loopCounterMainInt%collectionGlobalObject.GetVisitorObjectArray().length].UpdateVoid();
        loopCounterMainInt ++;

    }
    private function UpdateNormalVoid(){

        /*Loop through all objects.*/
        var leastCommonMultipleFloat:Float = CollectionFunction.GenerateLeastCommonMultipleFloat(collectionGlobalObject.GetExhibitionObjectArray().length, collectionGlobalObject.GetFloorObjectArray().length);
        leastCommonMultipleFloat = CollectionFunction.GenerateLeastCommonMultipleFloat(leastCommonMultipleFloat, collectionGlobalObject.GetRoomObjectArray().length);
        var leastCommonMultipleInt:Int = Math.round(leastCommonMultipleFloat);
        if(loopCounterMainInt > leastCommonMultipleInt){ loopCounterMainInt = 0; }
        collectionGlobalObject.GetExhibitionObjectArray()[loopCounterMainInt%collectionGlobalObject.GetExhibitionObjectArray().length].UpdateVoid();
        collectionGlobalObject.GetFloorObjectArray()[loopCounterMainInt%collectionGlobalObject.GetFloorObjectArray().length].UpdateVoid();
        collectionGlobalObject.GetRoomObjectArray()[loopCounterMainInt%collectionGlobalObject.GetRoomObjectArray().length].UpdateVoid();
        loopCounterMainInt ++;
        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){
            collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].UpdateVoid();
            loopCounter1Int ++;
        }

    }
    private function UpdateFastVoid(){

        var loopCounter1Int:Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetFloorObjectArray().length){ collectionGlobalObject.GetFloorObjectArray()[loopCounter1Int].UpdateVoid(); loopCounter1Int ++; }
        loopCounter1Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetRoomObjectArray().length){ collectionGlobalObject.GetRoomObjectArray()[loopCounter1Int].UpdateVoid(); loopCounter1Int ++; }
        loopCounter1Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetExhibitionObjectArray().length){ collectionGlobalObject.GetExhibitionObjectArray()[loopCounter1Int].UpdateVoid(); loopCounter1Int ++; }
        loopCounter1Int = 0;
        while(loopCounter1Int < collectionGlobalObject.GetVisitorObjectArray().length){ collectionGlobalObject.GetVisitorObjectArray()[loopCounter1Int].UpdateVoid(); loopCounter1Int ++; }

    }
    /*==================================================*/





}
