/*
Challenge 4 : Conversion de la vitesse
�crivez un programme qui demande la vitesse en kilom�tres par heure (km/h) et la transforme en m�tres par seconde (m/s). Formule :

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
