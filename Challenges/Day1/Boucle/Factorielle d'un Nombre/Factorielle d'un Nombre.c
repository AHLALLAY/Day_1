/*
Challenge 2 : Factorielle d'un Nombre
�crivez un programme C qui calcule la factorielle d'un nombre entier positif n entr� par l�utilisateur. La factorielle de n est le produit de tous les entiers positifs inf�rieurs ou �gaux � n. Par exemple, pour n = 5, affichez : 5! = 120.
*/

#include <stdio.h>

int main(){
    int i, n, r=1;

    printf("taper un nomber : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        r = r*i;
        //r *= i;
    }
    printf("%d! = %d",n,r);

    return 0;
}
