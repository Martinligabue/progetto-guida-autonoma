#include <stdio.h>

void child(){
    printf("sono il figliolo e apro una shell");
    int a = system("konsole");
    printf("teoricamente sto scrivendo nella shell del figlio");

}

void babbo(){
    printf("sono il babbo e scrivo nella shell normale");
}

int componenthminterface(void){
    int a = system("/bin/sh");

    if(fork() == 0){
        child();
    }else{
        babbo();
    }
    return 0;
}



int main(){
    //send character list to componenthminterface function of Componente_Central_ECU.c
    componenthminterface();
    return 0;
}