
/*
Challenge 1 : Affichage Informations
Écrivez un programme en C qui va permettre d'afficher
vos informations personnelles : nom, prénom, âge, sexe, et adresse email.
Les données sont saisies à partir du clavier.
*/

#include <stdio.h>

int main() {
    char nom[10], prenom[10], email[50], sexe;
    int age;


    printf("Entrez votre nom : ");
    scanf("%s",&nom);

    printf("Entrez votre prenom : ");
    scanf("%s",&prenom);

    printf("Entrez votre age : ");
    scanf("%d", &age);

    printf("Entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe);

    printf("Entrez votre adresse email : ");
    scanf("%s", email);

    printf("\nInformations personnelles :\n");
    printf("Nom : %s\n", nom);
    printf("Prenom : %s\n", prenom);
    printf("Age : %d\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Email : %s\n", email);

    return 0;
}
