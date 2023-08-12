/*
Questo componente riceve dalla Central ECU il comando di girare a DESTRA o SINISTRA, e conseguentemente attiva lo sterzo. L’azione di girare dura 4 secondi.
Ogni secondo, il componente stampa nel file di log steer.log: “NO ACTION”, “STO GIRANDO A DESTRA”, “STO GIRANDO A SINISTRA”, sulla base dell’azione in corso
*/
#include <stdio.h>
#include "Actuators/SteerByWire.h"

void run(int fd){
    while(1){
        read(fd,buffer,10);
    }
}