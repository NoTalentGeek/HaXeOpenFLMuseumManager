import  CollectionEnum;
class   CollectionFunction{
    public          function new(){}
    public static   function ClearArray(_dynamicArray:Array<Dynamic>){
        #if (cpp||php)
            _dynamicArray.splice(0, _dynamicArray.length);           
        #else
            untyped _dynamicArray.length = 0;
        #end
    }
    public static   function FindMuseumObject(
        _collectionGlobalObject :CollectionGlobal,
        _enumMuseumType         :EnumMuseumType,
        _nameAlt                :String
    ){
        var tempObjectArray :Array<ObjectMuseum>                    =  new Array<ObjectMuseum>();
             if(_enumMuseumType == EXH){ tempObjectArray            =  _collectionGlobalObject.GetExhibitionObjectArray   ()  ; }
        else if(_enumMuseumType == FLR){ tempObjectArray            =  _collectionGlobalObject.GetFloorObjectArray        ()  ; }
        else if(_enumMuseumType == ROM){ tempObjectArray            =  _collectionGlobalObject.GetRoomObjectArray         ()  ; }
        var loopCounter1Int     :Int                                =  0;
        while(loopCounter1Int < tempObjectArray.length){
            if(_nameAlt == tempObjectArray[loopCounter1Int].GetNameStruct().nameAltString){ return tempObjectArray[loopCounter1Int]; break; }
            loopCounter1Int                                         ++;
        }
        return null;
    }
    public static   function FindTagStruct(
        _collectionGlobalObject :CollectionGlobal,
        _tagString              :String
    ){
        var loopCounter1Int     :Int                                = 0;
        while(loopCounter1Int   <  _collectionGlobalObject.GetTagStructArray().length){
            if(_tagString       == _collectionGlobalObject.GetTagStructArray()[loopCounter1Int].tagEntry1Struct.tagString){
                return             _collectionGlobalObject.GetTagStructArray()[loopCounter1Int];
                break;
            }
            loopCounter1Int                                         ++;
        }
        return null;
    }
    public static   function IsExistInArrayBool(_dynamicArray:Array<Dynamic>, _dynamicElement:Dynamic){
        var loopCounter1Int     :Int                                = 0;
        while(loopCounter1Int    < _dynamicArray.length)            {
            if(_dynamicArray[loopCounter1Int] == _dynamicElement)   { return true; }
            loopCounter1Int                                         ++;
        }
        return false;
    }
    public static   function PickRandomFromArrayT<T>(_tArray:Array<T>){
        var randomInt           :Int                                = Math.round(Math.random()*(_tArray.length - 1));
        var elementT            :T                                  = _tArray[randomInt];
        return                                                      elementT;
    }
}