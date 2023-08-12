/*
Tutti i comandi inviati dalla Central ECU a qualunque componente sono inseriti in un file di log ECU.log e stampati a video tramite la HMI.
La Central ECU effettua le seguenti azioni. All’avvio del sistema, imposta la velocità attuale a 0, e ignora qualsiasi informazione ricevuta dai sensori, finchè riceve dall’HMI il comando “INIZIO”. Questo indica l’avvio del percorso.
Dopo aver ricevuto il comando INIZIO, durante la sua esecuzione, la Central ECU riceve continuamente dati dai sensori.

Per ciascuna informazione ricevuta da front windshield camera, la Central ECU effettua le seguenti azioni:
– Se l’informazione è un numero, questo valore indica la velocità desiderata del veicolo. Se necessario, la 
Central ECU interagisce con i componenti throttle control o brake-by-wire per raggiungere la velocità 
richiesta, con ciclo di 1 secondo. In altre parole, ogni secondo la Central ECU trasmette un messaggio 
INCREMENTO 5 o FRENO 5, fino al raggiungimento della velocità desiderata.
– Se l’informazione è l’istruzione DESTRA o SINISTRA, la Central ECU invia il comando corrispondente a 
steer-by-wire, per avviare la sterzata.
– Se l’informazione è PERICOLO, la Central ECU invia un segnale di arresto al componente brake-by-wire.
– Se l’informazione è PARCHEGGIO, la Central ECU avvia la procedura di parcheggio. Nella procedura di 
parcheggio, la Central ECU ignora i messaggi da front windshield camera e forward facing camera. 
Central ECU invia, con ciclo di 1 secondo, richieste di FRENO 5 a brake-by-wire. Quando la velocità 
raggiunge 0, Central ECU attiva Park assist ultrasonic sensors e Surround view cameras. Se la Central 
ECU non riceve da nessuno dei due, per 30 secondi, uno dei valori: i) 0x172A, ii) 0xD693, iii) 0x, iv)
0xBDD8, v) 0xFAEE, vi) 0x4300, l’auto è parcheggiata e l’esecuzione termina. Altrimenti, la Central ECU 
ri-avvia la procedura di PARCHEGGIO.
Se il comando ricevuto dalla HMI è invece “ARRESTO”, la Central ECU invia un segnale di arresto al 
componente brake-by-wire.
Se il comando ricevuto dalla HMI è invece “PARCHEGGIO”, la Central ECU avvia la procedura di parcheggio.
Nella procedura di parcheggio, la Central ECU ignora i messaggi da front windshield camera, forward facing 
camera e HMI. Central ECU invia, con ciclo di 1 secondo, richieste di FRENO 5 a brake-by-wire. Quando la 
velocità raggiunge 0, Central ECU attiva Park assist ultrasonic sensors e Surround view cameras. Se la 
Central ECU non riceve da nessuno dei due, per 30 secondi, uno dei valori: i) 0x172A, ii) 0xD693, iii) 0x, iv)
0xBDD8, v) 0xFAEE, vi) 0x4300, l’auto è parcheggiata e l’esecuzione termina. Altrimenti, la Central ECU riavvia la procedura di PARCHEGGIO.
Facoltativo. Il comando di PARCHEGGIO potrebbe arrivare mentre i vari attuatori stanno eseguendo 
ulteriori comandi (accelerare o sterzare). I vari attuatori interrompono le loro azioni, per avviare le 
procedure di parcheggio.
Facoltativo. Se la Central ECU riceve il segnale di fallimento accelerazione da throttle control, imposta la 
velocità a 0 e invia all’output della HMI un messaggio di totale terminazione dell’esecuzione
*/
#include <stdio.h>
#include <string.h>
#include "Actuators/SteerByWire.h"
#include "Handle/CentralECU.h"

#define READ 0
#define WRITE 1

void initSteerByWire(){
    int fd [2], bytesRead;
    char message [100];
    pipe (fd);
    if (fork() == 0){
        close(fd[WRITE]);
        run(fd[READ]);
        
    }else{
        
    }
}

int main(){
    
}