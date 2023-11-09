//=====[Libraries]=============================================================

#include "arm_book_lib.h"

#include "smart_home_system.h"
#include "light_level_control.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

AnalogIn potentiometer(A0);
AnalogIn potentiometer2(A1);
AnalogIn potentiometer3(A2);

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void lightLevelControlInit() { }

void lightLevelControlUpdate() { }

float lightLevelControlRead()
{
    return potentiometer.read();
}

float lightLevelControlRead2()
{
    return potentiometer2.read();
}

float lightLevelControlRead3()
{
    return potentiometer3.read();
}

//=====[Implementations of private functions]==================================