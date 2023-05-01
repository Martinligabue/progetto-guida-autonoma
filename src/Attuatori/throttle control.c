/*
Questo componente riceve il comando di accelerazione dalla Central ECU, nel formato “INCREMENTO 5”, dove 5 indica l’aumento di velocità richiesto. Alla ricezione del 
messaggio dalla Central ECU, il componente stampa nel file di log throttle.log la data attuale, e “AUMENTO 5”
Facoltativo. Ad ogni accelerazione, c’è una probabilità di 10^-5 che l’acceleratore fallisca. In tal caso, il componente throttle control invia un segnale alla Central ECU per evidenziare tale evento, e la Central ECU avvia la procedura di ARRESTO
*/