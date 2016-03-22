class VisitorRemoveUIPopup_Object{





    /*==================================================*/
    var _Button                     :Button             = null;
    var _Global_Object              :Global_Object      = null;
    var _Popup                      :Popup              = null;
    var selected_Visitor_Object     :Visitor_Object     = null;
    var selectedVisitorName_String  :String             = null;
    var visitor_ListSelector        :ListSelector       = null;
    /*==================================================*/





    /*==================================================*/
    public function new(__Global_Object:Global_Object, __Root:Root):Void{

        /*Assign the parameters.*/
        _Global_Object = __Global_Object;





        /*Button object click function.*/
        _Button = __Root.findChild("visitorRemove_Button", Button, true);
        _Button.onClick = function(__Event){

            /*Button control.*/
            var buttonControl_Int:Int = 0;
            buttonControl_Int |= PopupButton.OK;
            buttonControl_Int |= PopupButton.CANCEL;





            /*Popup control.
            If button clicked this popup appears.*/
            var _IDisplayObject:IDisplayObject = Toolkit.processXmlResource("layout/VisitorRemoveUIPopup.xml");
            _Popup = PopupManager.instance.showCustom(_IDisplayObject, "Remove Visitor", buttonControl_Int, function(_button){

                if(_button == PopupButton.OK){

                    /*What happened if you click okay button in the popup.
                    PENDING: Make this a control function.*/
                    selected_Visitor_Object = StaticFunction_Collection.Find_Visitor_Object(_Global_Object, selectedVisitorName_String);
                    selected_Visitor_Object.exhibitionCurrent_Museum_Object = _Global_Object.archiveExhibition_Museum_Object;

                }

            });
            




            /*Find all object in the popup object.*/
            visitor_ListSelector = _Popup.content.findChild("VisitorRemoveUIPopup_VisitorListSelector", ListSelector, true);





            /*Fill all object in the popup object.
            And assign the default value.*/
            var loopCounter1Int:Int = 0;
            while(loopCounter1Int < _Global_Object.GetVisitorObjectArray().length){

                visitor_ListSelector.dataSource.createFromString(_Global_Object.GetVisitorObjectArray()[loopCounter1Int].GetNameString());
                loopCounter1Int ++;

            }
            visitor_ListSelector.method = "default";
            visitor_ListSelector.selectedIndex = -1;

        }

    }
    /*==================================================*/





    /*==================================================*/
    public function UpdateVoid():Void{

        /*Make sure that the popup and the list visitor object is exist.*/
        if(_Popup != null && visitor_ListSelector != null)
            { selectedVisitorName_String = visitor_ListSelector.text; }

    }
    /*==================================================*/





}