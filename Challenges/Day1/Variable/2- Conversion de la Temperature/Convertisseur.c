/*
Challenge 2 : Conversion de la température
Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :

K = C + 273.15
*/

#include <stdio.h>

int main(){
    float T,K;
    printf("taper la temperature en °C : ");
    scanf("%f",&T);

    K = T + 273.15;
    printf("la temperature en Kelven est : %.2f",K);

    return 0;
}
