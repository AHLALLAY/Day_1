/*
Challenge 3 : Conversion de la distance
Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule :

Yards = Km * 1093.61
*/

#include <stdio.h>

int main(){
    float Km,Yd;
    printf("taper la Distance en Km : ");
    scanf("%f",&Km);

    Yd = Km + 1093.61;
    printf("la distance en Yards est : %.2f",Yd);

    return 0;
}
