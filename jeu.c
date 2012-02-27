#include "SDL.h"
#include "constantes.h"
#include "prototypes.h"

void lancerPatie(SDL_Surface *ecran)
{
    SDL_Surface *mur = NULL, *joueur1 = NULL, *joueur2 = NULL;
    int carte[LARGEUR_FENETRE][HAUTEUR_FENETRE];
    SDL_Rect positionMur, positionJoueur1, positionJoueur2;

    SDL_FillRect(ecran, 0, SDL_MapRGB(ecran->format, 0, 0, 0));

    creerMur(mur, ecran, carte, &positionMur);

    //creerJoueur(ecran, joueur1, &positionJoueur1, joueur2, &positionJoueur2);

    boucleJeu(ecran, joueur1, &positionJoueur1, joueur2, &positionJoueur2, carte);

    SDL_FreeSurface(mur);
    SDL_FreeSurface(joueur1);
    SDL_FreeSurface(joueur2);
}
