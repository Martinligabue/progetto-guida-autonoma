/*Il componente iterativamente legge i dati da una sorgente e li invia alla Central ECU. In dettaglio, ogni 1 secondo prova a leggere 8 byte da /dev/urandom. Se riesce a leggere 8 byte, questi sono trasmessi alla Central ECU. Altrimenti (se legge meno di 8 byte), non invia dati alla Central ECU. I dati inviati sono registrati nel file di log radar.log*/
#include <stdio.h>
int main()
{
    int bytes[8];
    // infinite cycle
    while (1 == 1)
    {
        // read 8 bytes from /dev/urandom
        for (int i = 0; i < 8; i++)
        {
            bytes[i] = fopen("/dev/urandom", "r");
        }
        // send 8 bytes to Central ECU
        centralECU(bytes);
        // write 8 bytes to radar.log
        FILE *fp;
        fp = fopen("radar.log", "w");
        for (int i = 0; i < 8; i++)
        {
            fprintf(fp, "%d", bytes[i]);
        }
        fclose(fp);
        // wait 1 second
        sleep(1);
    }
}