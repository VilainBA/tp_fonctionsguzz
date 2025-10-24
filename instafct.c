#include "stdio.h"
#include "instafct.h"

/**
 * Cette focntion est une fonction
 * @param nbLikes
 * @param nbCommentaires
 * @param nbAbonnes
 * @return
 */
struct influenceur {
    int nbLikes;
    int nbCommentaires;
    int nbAbonnes;
    short int age;

};


float tauxEngagement(influenceur x ){
    float taux = (float)(x.nbLikes + x.nbCommentaires)/(float)x.nbAbonnes *100;
    return (taux>100) ? 100: taux;
}

void performance(float const taux){
    if(taux < 1){
        printf("Taux d'engagement %.2f %% faible", taux);
    } else if (taux < 10){
        printf("Taux d'engagement %.2f %% moyen", taux);
    } else{
        printf("Taux d'engagement %.2f %% élevé", taux);
    }
}