#include <stdio.h>

#include "Controllo/Central ECU.c"

int main(){
    //send character list to componenthminterface function of Componente_Central_ECU.c
    componenthminterface("INIZIO");
    return 0;
}