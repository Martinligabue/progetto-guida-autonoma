/*
Questo componente interagisce con la Central ECU, per mostrare a video, come output, quanto comunicato dalla Central ECU, e per inviare input ricevuti dall’utente tramite la 
tastiera.
La gestione dell’input ed output avviene tramite due terminali. Un terminale è utilizzato solo per mostrare i valori di output, mentre l’altro terminale è utilizzato solo per raccogliere e inviare input alla Central ECU.
Come output, il processo stampa a schermo tutte le azioni comandate dalla Central ECU.
Gli input possibili, che l’utente può digitare sul terminale, sono:
- “INIZIO”: si richiede l’inizio della navigazione. Il veicolo si avvia il veicolo verso la sua destinazione.
- “PARCHEGGIO”: si richiede la procedura di parcheggio, che concluderà il percorso.
- “ARRESTO”: si richiede la procedura di arresto del veicolo.
*/
#include <stdio.h>

int componenthminterface(){
    
}