//=====[Libraries]=============================================================

#include "arm_book_lib.h"

#include "light_system.h"
#include "bright_control.h"
#include "light_level_control.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

//=====[Declaration and initialization of private global objects]===============

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

static float dutyCycle = 0.5f;
static float dutyCycle2 = 0.5f;
static float dutyCycle3 = 0.5f;

//=====[Implementations of public functions]===================================

void lightSystemInit()
{
    brightControlInit();
}

void lightSystemUpdate()
{
    dutyCycle = lightLevelControlRead();
    dutyCycle2 = lightLevelControlRead2();
    dutyCycle3 = lightLevelControlRead3();

    setDutyCycle( RGB_LED_RED, dutyCycle );
    setDutyCycle( RGB_LED_GREEN, dutyCycle2 );
    setDutyCycle( RGB_LED_BLUE, dutyCycle3 );

}

//=====[Implementations of private functions]==================================
