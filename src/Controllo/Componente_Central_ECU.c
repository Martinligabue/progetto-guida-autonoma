/*
Tutti i comandi inviati dalla Central ECU a qualunque componente sono inseriti in un file di log ECU.log e stampati a video tramite la HMI.
La Central ECU effettua le seguenti azioni. All’avvio del sistema, imposta la velocità attuale a 0, e ignora qualsiasi informazione ricevuta dai sensori, finchè riceve dall’HMI il comando “INIZIO”. Questo indica l’avvio del percorso.
Dopo aver ricevuto il comando INIZIO, durante la sua esecuzione, la Central ECU riceve continuamente dati dai sensori.
*/
#include <stdio.h>
#include <stdbool.h>

int componenthminterface(char* comando){
    while(1==1)//come si separa e si lascia girare asincronamente?
        printf(comando);

    int velocita_attuale = 0;
    bool inizio = false;

    while (inizio == false){
        if (comando == "INIZIO"){
            inizio = true;
        }
    }
    while (inizio == true){
        if (comando == "STOP"){
            inizio = false;
        }
        else{
            //main loop
        }
    }
    return 0;
}