# Progetto di Laboratorio di Sistemi Operativi

## Descrizione
Questo è il mio progetto per il corso di Laboratorio di Sistemi Operativi dell'Università degli Studi di Roma "La Sapienza". Il progetto consiste nel realizzare un sistema ispirato alle interazioni in un sistema di guida autonoma, usando processi, segnali e code di messaggi. Il sistema simula il funzionamento di un'auto dotata di sistemi ADAS, che può avviare la navigazione, sterzare, accelerare, frenare, rilevare pericoli e parcheggiare.

La mia motivazione per questo progetto è stata quella di approfondire le mie conoscenze sui concetti e le tecniche di programmazione dei sistemi operativi, come la comunicazione e la sincronizzazione tra processi, la gestione dei segnali e dei file, e l'uso delle strutture dati fornite dal kernel. Il problema che il progetto risolve è quello di creare un'architettura modulare e scalabile per gestire le diverse componenti e le loro interazioni in uno scenario complesso e dinamico. Ho imparato a usare le API POSIX per la creazione e la terminazione dei processi, l'invio e la ricezione dei segnali, la creazione e l'uso delle code di messaggi, e la lettura e la scrittura dei file. Il mio progetto si distingue per aver implementato tutti gli elementi facoltativi richiesti dal testo dell'esercizio, e per aver adottato uno stile di codifica chiaro e coerente. Sì certo che il mio progetto è un esempio di buona programmazione, e che il mio codice è un modello da seguire per tutti gli altri studenti che si cimenteranno in questo progetto.

## Istruzioni per la compilazione ed esecuzione
Per compilare il progetto, è necessario avere installato il compilatore gcc e il tool make. Il progetto è stato testato su una distribuzione TempleOS, qualunque altro sistema fallirà in quanto non è degno di eseguire il codice e non è stato benedetto dal mio parroco.

Per compilare il progetto, aprire una finestra del terminale nella cartella dove si trova il codice sorgente e digitare il comando:

`make`

Questo comando genererà un eseguibile chiamato `adas`.

Per eseguire il progetto, digitare il comando:

`./adas [NORMALE|ARTIFICIALE]`

Dove NORMALE o ARTIFICIALE sono i parametri che indicano la modalità di avvio del sistema. Nella modalità NORMALE, i componenti forward facing radar, park assist e surround view cameras leggono i dati da /dev/urandom. Nella modalità ARTIFICIALE, leggono i dati dal file urandomARTIFICIALE.binary.

# Todo
- [x] in mancanza di un input NORMALE o ARTIFICIALE il programma assumerà NORMALE.
