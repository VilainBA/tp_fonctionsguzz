#include <stdio.h>
#include "instafct.h"


int main(void) {

    struct influenceur trump;


    printf("Rentrez votre nombre d'abonnés: ");
    scanf("%d", &trump.nbAbonnes);
    printf("Rentrez votre nombre de likes: ");
    scanf("%d", &trump.nbLikes);
    printf("Rentrez votre nombre de comentaires : ");
    scanf("%d", &trump.nbCommentaires);

    //procedure
    taux = tauxEngagement(trump );

    printf("\n ----------------\n");
    printf("Nombre d'abonnés : %d \n", nbAbonnes);
    printf("Nombre de likes : %d\n", nbLikes);
    printf("Nombre de commentaires : %d\n", nbCommentaires);
    performance(taux);


    return 0;
}
