class Museum_Object extends MuseumAndVisitor_Object{





    /*PENDING - DONE: Check in visitor class for the remnants of nameAlt_String.*/
    /*PENDING - DONE: Create sync value for struct variable in collection static function class.*/
    /*PENDING - DONE: Fix a function to reset museum object (create a simple comments documentation, etc).*/
    /*PENDING - DONE: Fix request changing parent in update function.*/
    /*PENDING - DONE: Make a function to determine child.*/
    /*PENDING - DONE: Make a function to determine whether an exhibition is full.*/
    /*PENDING - DONE: Make a function to update full museum class (an update heavy function).*/
    /*PENDING - DONE: Make a function to update the museum class.*/
    /*PENDING - DONE: Setter for museum mode.*/
    /*PENDING - DONE: Setter for museum type.*/
    /*PENDING - DONE: Sync array for _Child_Struct.*/
    /*PENDING: Fix museum user interface class.*/
    /*PENDING: Give comment on update whole.*/
    /*PENDING: Make sure every other class uses sync push to add child array.*/
    /*PENIDNG: Shrink update whole function into more compact function. Create smaller functions.*/





    private var _Child_Struct                       (null, null)        :Child_Struct               = {

        _Museum_Object_Array    : new Array<Museum_Object>(),
        _Visitor_Object_Array   : new Array<Visitor_Object>()

    };
    private var _MuseumMode_Enum                    (null, null)        :MuseumMode_Enum            = null;
    private var _MuseumType_Enum                    (null, null)        :MuseumType_Enum            = null;
    private var parent_Museum_Object                (null, set)         :Museum_Object              = null;





    public function new(
        __CollectionGlobal_Object   :CollectionGlobal_Object,
        __MuseumType_Enum           :MuseumType_Enum,
        __Tag_Object_Array          :Array<Tag_Object>,
        _explanation_String_Array   :Array<String>,
        _nameAlt_String             :String,
        _nameFull_String            :String,
        _parent_Museum_Object       :Museum_Object
    ):Void{

        /*Instantiate agnostic object.*/
        _MuseumAndVisitorAgnostic_Object = new MuseumAgnostic_Object();

        super(__CollectionGlobal_Object);

        /*Assign all parameter.*/
        _MuseumType_Enum        = __MuseumType_Enum;
        _Tag_Object_Array       = __Tag_Object_Array;
        parent_Museum_Object    = _parent_Museum_Object;

        /*Assign variables to agnostic object.*/
        _MuseumAndVisitorAgnostic_Object.explanation_String_Array   = _explanation_String_Array;
        _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String    = _nameAlt_String;
        _MuseumAndVisitorAgnostic_Object._Name_Struct.full_String   = _nameFull_String;

        /*Put this object into main array.*/
        if(
            _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String    != "EXH_ARC" &&
            _MuseumAndVisitorAgnostic_Object._Name_Struct.full_String   != "Exhibition Archive"
        ){ AddOrRemoveThisFromMain_MuseumAndVisitor_Object(true); }

    }





    /*This is a function to determine the child object of this museum class.
    I am not sure if this function is necessary due to all children object is already assigned from the child
        object itself.*/
    private function DetermineChild_Museum_Object():Museum_Object{

        var main_MuseumAndVisitor_Object_Array:Array<MuseumAndVisitor_Object> = null;

        if(_MuseumType_Enum == EXH){

            main_MuseumAndVisitor_Object_Array = _CollectionGLobal_Object._Visitor_Object_Array;



            /*Remove all elements in this object child array and also array in the agnostic object.*/
            CollectionStaticFunction.SyncRemoveAll_T_Array(
                _Child_Struct._Visitor_Object_Array,
                _MuseumAndVisitorAgnostic_Object.childVisitorNameAlt_StringArray
            );



            /*Start adding museum object that has */
            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < main_Museum_Object_Array.length){

                if(
                    _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String ==
                        main_Museum_Object_Array[loopCounter1_Int].exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String &&
                    _MuseumAndVisitorAgnostic_Object._Name_Struct.full_String ==
                        main_Museum_Object_Array[loopCounter1_Int].exhibitionCurrent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String
                ){

                    /*Add both into array in this object and array in the agnostic object.*/
                    CollectionStaticFunction.SyncPush_T_Array(
                        main_Museum_Object_Array[loopCounter1_Int],
                        _Child_Struct._Visitor_Object_Array,
                        main_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object.name_String,
                        _MuseumAndVisitorAgnostic_Object.childVisitorNameAlt_StringArray
                    );

                }

                loopCounter1_Int ++;

            }


        }
        else if(_MuseumType_Enum != EXH){

            /*Assign the proper main array.*/
            if(_MuseumType_Enum == FLR){ main_MuseumAndVisitor_Object_Array = _CollectionGLobal_Object.room_Museum_Object_Array; }
            else if(_MuseumType_Enum == ROM){ main_MuseumAndVisitor_Object_Array = _CollectionGLobal_Object.exhibition_Museum_Object_Array; }



            /*Remove all elements in object array and the array in agnostic object.*/
            CollectionStaticFunction.SyncRemoveAll_T_Array(
                _Child_Struct._Museum_Object_Array,
                _MuseumAndVisitorAgnostic_Object.childMuseumNameAlt_String_Array
            );



            /*Start adding museum object that has */
            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < main_Museum_Object_Array.length){

                /*Check if the parent object name is the same with this object name.
                If so then add that object as this object child object.*/
                if(
                    _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String ==
                        main_Museum_Object_Array[loopCounter1_Int].parent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String &&
                    _MuseumAndVisitorAgnostic_Object._Name_Struct.full_String ==
                        main_Museum_Object_Array[loopCounter1_Int].parent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.full_String
                ){

                    /*Add both into array in this object and array in the agnostic object.*/
                    CollectionStaticFunction.SyncPush_T_Array(
                        main_Museum_Object_Array[loopCounter1_Int],
                        _Child_Struct._Museum_Object_Array,
                        main_Museum_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                        _MuseumAndVisitorAgnostic_Object.childMuseumNameAlt_String_Array
                    );

                }

                loopCounter1_Int ++;

            }

        }



        return this;

    }





    /*A function to determine whether this museum object is full or not.*/
    private function DetermineFull_Museum_Object()Museum_Object{

        if(_MuseumAndVisitorAgnostic_Object._VisitorCount_Struct.current_Int        >= _CollectionGlobal_Object.fullThreshold_Int){ full_Bool = true ; }
        else if(_MuseumAndVisitorAgnostic_Object._VisitorCount_Struct.current_Int   <  _CollectionGlobal_Object.fullThreshold_Int){ full_Bool = false; }

        return this;

    }





    /*Mini function to remove floor or room object.*/
    private function FloorAndRoomRemoveHandler_Museum_Object(_main_Museum_Object_Array:Array<Museum_Object>):Museum_Object{

        /*Check if this object still has a children museum object.*/
        if(_Child_Struct._Museum_Object_Array.length != 0){

            /*Loop through main array to check if which object is this object's children.
            PENDING: Use child object array instead from child Struct.
            PENDING: Actually make it automatically so that every museum object that is marked for deletion has its children
                requested to change parent object. If an object's parent is no longer mark for deletion then change the 
                museum mode enum to null.*/
            var loopCounter1_Int:Int = 0;
            while(loopCounter1_Int < _main_Museum_Object_Array.length){

                if(_MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String == _main_Museum_Object_Array[loopCounter1_Int].parent_Museum_Object._Name_Struct.alt_String){

                    /*Change the children object to request to change parent.*/
                    _main_Museum_Object_Array[loopCounter1_Int]._MuseumMode_Enum = REQ_CH_PARENT;
                    UpdateWhole_Museum_Object();

                }

                loopCounter1_Int ++;

            }

        }
        else if(_Child_Struct._Museum_Object_Array.length == 0){ RemoveUI_Museum_Object(); }

    }





    /*Function to remove this object from main array.*/
    private function RemoveUI_Museum_Object():Museum_Object{

        /*PENDING: To fix the hierarchy of UI object into the top of object.*/
        //_CollectionGlobal_Object._Absolute.removeChild(_MuseumUI_Object._Button);
        _CollectionGlobal_Object.exhibition_Museum_Object_Array.remove(this);
        //_MuseumUI_Object = null;
        UpdateWhole_Museum_Object();
        return this;

    }





    /*This class has these variables.
    _Child_Struct           NO      need to change.
    _MuseumMode_Enum        CHANGE  to null.
    _MuseumType_Enum        NO      need to change.
    parent_Museum_Object    NO      need to change.*/
    private function Reset_Museum_Object(){

        super.Reset_MuseumAndVisitorObject();

        _MuseumMode_Enum = null

    }





    private function set__MuseumMode_Enum(__MuseumMode_Enum:MuseumMode_Enum):MuseumMode_Enum{

        _MuseumMode_Enum = __MuseumMode_Enum
        _MuseumAndVisitorAgnostic_Object.museumMode_String = Std.string(_MuseumMode_Enum);

        return _MuseumMode_Enum;

    }





    private function set__MuseumType_Enum(__MuseumType_Enum:MuseumType_Enum):MuseumType_Enum{

        _MuseumType_Enum = __MuseumType_Enum;
        _MuseumAndVisitorAgnostic_Object.museumType_String = Std.string(_MuseumType_Enum);

        return _MuseumType_Enum;

    }





    private function set_parent_Museum_Object(_parent_Museum_Object:Museum_Object):Museum_Object{

        /*Remove this object from the previous current parent object child.*/
        if(parent_Museum_Object != null){

            CollectionStaticFunction_Object.SyncRemove_T_Array(
                this,
                parent_Museum_Object._Child_Struct._Museum_Object_Array,
                _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String,
                parent_Museum_Object._MuseumAndVisitorAgnostic_Object.childMuseumNameAlt_String_Array
            );

        }

        /*When changing the museum object parent do not forget to adjust the agnostic object as well.*/
        if(_MuseumType_Enum == FLR){

            parent_Museum_Object = null;
            _MuseumAndVisitorAgnostic_Object.parentMuseumNameAlt_String = "";

        }
        else if(_MuseumType_Enum != FLR){

            parent_Museum_Object = _parent_Museum_Object;
            _MuseumAndVisitorAgnostic_Object.parentMuseumNameAlt_String =
                parent_Museum_Object._MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String;

        }

        return parent_Museum_Object;

    }





    /*This function is to check whether or not user is requesting to delete this particular object.
    If so I need to check whether this object still has children attached to it.*/
    private function Update_Museum_Object():Museum_Object{

        /*Check if the parent object of this museum object is marked for deletion.
        If so change this object museum mode into REQ_CH_PARENT means that this museum object need to have
            its parent changed.
        PENDING - DONE: What if this object is marked for deletion and also REQ_CH_PARENT?
        PENDING - DONE: The solution is quite simple actually (at least at what I have been thinking of). Is to
            set priority for mark for deletion higher than the REQ_CH_PARENT.
        PENDING: Create UI button to remove deletion mark of a museum object.*/
        if(parent_Museum_Object._MuseumMode_Enum == MRK_DEL){

            if(_MuseumMode_Enum != MRK_DEL || _MuseumMode_Enum == null){ _MuseumMode_Enum = REQ_CH_PARENT; }

        }



        /*If the museum marked for deletion.
        Marked for deletion can only be set from user interface.*/
        if(_MuseumMode_Enum == MRK_DEL){

            /*So here the museum object is already tagged to be deleted.
            I need to do another checking whether the object has any children or not.*/
            if(_MuseumType_Enum == EXH){

                if(_Child_Struct._Visitor_Object_Array.length != 0){

                    var loopCounter1_Int:Int = 0;
                    while(loopCounter1_Int < _Child_Struct._Visitor_Object_Array.length){

                        if(_Child_Struct._Visitor_Object_Array[loopCounter1_Int]._MuseumAndVisitorAgnostic_Object.finished_Bool == true){

                            _Child_Struct._Visitor_Object_Array[loopCounter1_Int].exhibitionCurrent_Museum_Object = _CollectionGlobal_Object.exhibitionArchive_Museum_Object;
                            UpdateWhole_Museum_Object();

                        }

                        loopCounter1_Int ++;

                    }

                }
                else if(_Child_Struct._Visitor_Object_Array.length == 0){ RemoveUI_Museum_Object(); }

            }
            else if(_MuseumType_Enum == FLR){

                var main_Museum_Object_Array:Array<Museum_Object> = __CollectionGlobal_Object.floor_Museum_Object_Array;
                FloorAndRoomRemoveHandler_Museum_Object(main_Museum_Object_Array);

            }
            else if(_MuseumType_Enum == ROM){

                var main_Museum_Object_Array:Array<Museum_Object> = __CollectionGlobal_Object.exhibition_Museum_Object_Array;
                FloorAndRoomRemoveHandler_Museum_Object(main_Museum_Object_Array);

            }

        }



        /*Now I need somekind like a reset for the value contained in _MuseumMode_Enum.
        First, I need to check if this object parent is still marked for deletion or not.
        If not, then check whether this object is marked for deletion or not.
        If not, then change the _MuseumMode_Enum into null.
        Hence I reset the mode value back.*/
        if(_MuseumMode_Enum == REQ_CH_PARENT){

            if(parent_Museum_Object._MuseumMode_Enum != MRK_DEL){ _MuseumMode_Enum = null; }

        }



        return this;

    }





    private function UpdateWhole_Museum_Object():Museum_Object{

        var loopCounter1_Int    :Int = 0;
        var necessaryWidth_Int  :Int = 0; /*PENDING: Important UI variable.*/



        while(loopCounter1_Int < _CollectionGlobal_Object.floor_Museum_Object_Array.length){

            _CollectionGlobal_Object.floor_Museum_Object_Array[loopCounter1_Int].DetermineSibling_MuseumAndVisitor_Object().DetermineIndex_MuseumAndVisitor_Object();
            


            /*PENDING: User interface variables.*/
            _CollectionGlobal_Object.floor_Museum_Object_Array[loopCounter1_Int]._MuseumUI_Object.Update_MuseumUI_Object(
                _CollectionGlobal_Object.floor_Museum_Object_Array[loopCounter1_Int],
                Lib.current.stage.stageWidth
            );



            if(necessaryWidth_Int < Math.round(_CollectionGlobal_Object.floor_Museum_Object_Array[loopCounter1_Int]._MuseumUI_Object._Button.x + _CollectionGlobal_Object.floor_Museum_Object_Array[loopCounter1_Int]._MuseumUI_Object._Button.width)){

                necessaryWidth_Int = Math.round(_CollectionGlobal_Object.floor_Museum_Object_Array[loopCounter1_Int]._MuseumUI_Object._Button.x + _CollectionGlobal_Object.floor_Museum_Object_Array[loopCounter1_Int]._MuseumUI_Object._Button.width);

            }
            loopCounter1_Int ++;

        }

        if(
            _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String    != "EXH_ARC" &&
            _MuseumAndVisitorAgnostic_Object._Name_Struct.full_String   != "Exhibition Archive"
        ){ _CollectionGlobal_Object._Absolute.width = necessaryWidth_Int; }



        loopCounter1_Int = 0;
        while(loopCounter1_Int < _CollectionGlobal_Object.room_Museum_Object_Array.length){

            _CollectionGlobal_Object.room_Museum_Object_Array[loopCounter1_Int].GetParentObject().DetermineChild_Museum_Object();
            


            /*PENDING: User interface variables.*/
            _CollectionGlobal_Object.room_Museum_Object_Array[loopCounter1_Int].DetermineSibling_MuseumAndVisitor_Object().DetermineIndex_MuseumAndVisitor_Object();
            _CollectionGlobal_Object.room_Museum_Object_Array[loopCounter1_Int]._MuseumUI_Object.Update_MuseumUI_Object(
                _CollectionGlobal_Object.room_Museum_Object_Array[loopCounter1_Int],
                Lib.current.stage.stageWidth
            );
 
           loopCounter1_Int ++;

        }



        if(
            _MuseumAndVisitorAgnostic_Object._Name_Struct.alt_String    != "EXH_ARC" &&
            _MuseumAndVisitorAgnostic_Object._Name_Struct.full_String   != "Exhibition Archive"
        ){

            loopCounter1_Int = 0;
            while(loopCounter1_Int < _CollectionGlobal_Object.exhibition_Museum_Object_Array.length){

                _CollectionGlobal_Object.exhibition_Museum_Object_Array[loopCounter1_Int].GetParentObject().DetermineChild_Museum_Object();
            


                /*PENDING: User interface variables.*/
                _CollectionGlobal_Object.exhibition_Museum_Object_Array[loopCounter1_Int].DetermineSibling_MuseumAndVisitor_Object().DetermineIndex_MuseumAndVisitor_Object();
                _CollectionGlobal_Object.exhibition_Museum_Object_Array[loopCounter1_Int]._MuseumUI_Object.Update_MuseumUI_Object(
                    _CollectionGlobal_Object.exhibition_Museum_Object_Array[loopCounter1_Int],
                    Lib.current.stage.stageWidth
                );
 
               loopCounter1_Int ++;

            }

        }



        loopCounter1_Int = 0;
        while(loopCounter1_Int < _CollectionGlobal_Object.visitor_Object_Array.length){

            _CollectionGlobal_Object.visitor_Object_Array[loopCounter1_Int].DetermineIndex_MuseumAndVisitor_Object();
            _CollectionGlobal_Object.visitor_Object_Array[loopCounter1_Int].GenerateExhibitionTarget_Visitor_Object(loopCounter1_Int);
            _CollectionGlobal_Object.visitor_Object_Array[loopCounter1_Int]._VisitorUI_Object.Update_MuseumUI_Object();
            loopCounter1_Int ++;

        }



        return this;

    }





}