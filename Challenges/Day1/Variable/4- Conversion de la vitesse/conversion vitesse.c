/*
Challenge 4 : Conversion de la vitesse
Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). Formule :

m/s = km/h * 0.27778
*/

#include <stdio.h>

int main(){
    float v1,v2;
    printf("taper la Vitesse en Km/h : ");
    scanf("%f",&v1);

    v2 = v1 * 0.27778;
    printf("la Vitesse en m/s est : %.5f",v2);

    return 0;
}
