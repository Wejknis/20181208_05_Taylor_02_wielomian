#include <stdlib.h>
#include <stdio.h>

int main(int liczba_slow, char * tablica_slow[]){
    double wynik = 0.0;
    double x;
    double potega_x = 1.0;
    int i;

    x = atof(tablica_slow[1]);

    for (i = 2; i < liczba_slow; ++i){
        wynik += potega_x * atof(tablica_slow[i]);
        potega_x *= x;
    }

        printf("Wynik: %lf\n", wynik);
    return 0;
}