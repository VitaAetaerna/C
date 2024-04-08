#include "stdio.h"
//meow
int summe(int zahl1, int zahl2){
    return zahl1 + zahl2;
}

int differenz(int zahl1, int zahl2){
    return zahl1 - zahl2;
}

int Multiplikation(int zahl1, int zahl2){
    return zahl1 * zahl2;
}

int Division(int zahl1, int zahl2){
    return zahl1 / zahl2;
}




int main(){
    // Zahlen deklarieren 
    int zahl1 = 25;
    int Zahl2 = 5;

    //Aufrufen der Funktionen
    printf("%i \n", summe(zahl1, Zahl2));
    printf("%i \n", differenz(zahl1, Zahl2));
    printf("%i \n", Multiplikation(zahl1, Zahl2));
    printf("%i \n", Division(zahl1, Zahl2));

}