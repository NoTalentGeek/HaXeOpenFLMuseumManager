/*PENDING: Change the name of this file into Enum_Collection. But do this after the program runs.*/





/*==================================================
This is an enum that control company word position.
So when you asked for company words from Wordnik API the company word can be after
    or before the primary word.
So for every company word that I received from Wordnik API I need to determine
    whether the word is after or before the primary word.
Hence this enum is for determine whether a company word is after or before the
    primary word.*/
enum CompanyWord_Enum{
    PRE;
    SUF;
}
/*==================================================*/





/*==================================================
This is an enum for controlling object museum update mode before deletion.
REQ_CH_PARENT is for any museum object that is still has children objects
    attached to it.
So the user need to remove any children of the museum object with REQ_CH_PARENT
    to a new parent.
After there is no children object anymore than this museum object changed its
    mode to MRK_DEL and then deletion of the corresponding museum object begins.*/
enum MuseumMode_Enum{
    REQ_CH_PARENT;
    MRK_DEL;
}
/*==================================================*/





/*==================================================
An enum that controls museum type.
EXH is for any museum object that is exhibition.
FLR is for any museum object that is floor.
ROM is for any museum object that is room.*/
enum MuseumType_Enum{
    EXH;
    FLR;
    ROM;
}
/*==================================================*/





/*==================================================
This enumeration is for giving emotion for every tag entered to this program*/
enum TagFeel_Enum{
    NEGATIVE;
    NEUTRAL;
    POSITIVE;
}
/*==================================================*/





/*==================================================
Enumeration for tag types.*/
enum TagType_Enum{
    ADJ;
    ADV;
    NOUN_ALIVE_ABSTRACT;
    NOUN_ALIVE_CONCRETE;
    NOUN_INANIMATE_HOLD_ABSTRACT;
    NOUN_INANIMATE_HOLD_CONCRETE;
    NOUN_INANIMATE_PLACE_ABSTRACT;
    NOUN_INANIMATE_PLACE_CONCRETE_NO_OWNER;
    NOUN_INANIMATE_PLACE_CONCRETE_OWNER;
    NOUN_INANIMATE_SEE_ABSTRACT;
    NOUN_INANIMATE_SEE_CONCRETE;
    NOUN_INANIMATE_TITLE;
    NOUN_INANIMATE_WEAR_ABSTRACT;
    NOUN_INANIMATE_WEAR_CONCRETE;
    VERB_INTRANSITIVE;
    VERB_TRANSITIVE;
}
/*==================================================*/





/*==================================================
Enumeration for tag sub types.
Used in sentence generation.*/
enum TagTypeSub_Enum{
    ADJ;
    ADV;
    NOUN;
    NOUN_POS;
    NOUN_S;
    NOUN_S_POS;
    VERB_1;
    VERB_2;
    VERB_3;
    VERB_ING;
    VERB_S;
}
/*==================================================*/





/*==================================================
An enum to control how a visitor object updated for each ticks.
HARDWARE_MANUAL is for visitor object that is controlled by hardware.
SOFTWARE_AUTO is for visitor object so that it is controlled by this program
    artificial intelligence.
SOFTWARE_MANUAL means that visitor object to be controlled manually by using
    this program.*/
enum VisitorMode_Enum{
    HARDWARE_MANUAL;
    SOFTWARE_AUTO;
    SOFTWARE_MANUAL;
}
/*==================================================*/