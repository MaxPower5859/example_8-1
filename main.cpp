/* 
Los pines asociados al modulo de control del brillo son PB_4 PA_0 PD_12

Las funciones privadas son:
static void setPeriod( lightSystem_t light, float period );
static void tickerCallbackBrightControl( );

y en clase Ticker 
objeto tickerBrightControl;

brightControlInit() es llamado por lightsysteminit
Aca se setea la interrupcion cada x tiempo

y llama a la funcion tickerCallbackBrightControl cada 1ms 
con tickRateMSBrightControl = 1

Y con esto se setea el periodo y dutycicle para cada ledcon lo
cual se logra controlar el brillos de cada uno de estos

setea el epriodo a 0.01s y el dutycicle a 0.5

El pin a0 es donde se leee la señal para regular el duty cicle según
el nivel de iluminación,esto se lee de lightlevelcontrol (sensor de luz)
y setea el duty.

la funcion light system se encarga de controlar las luces

 */
//=====[Libraries]=============================================================

#include "smart_home_system.h"

//=====[Main function, the program entry point after power on or reset]========

int main()
{
    smartHomeSystemInit();
    while (true) {
        smartHomeSystemUpdate();
    }
}