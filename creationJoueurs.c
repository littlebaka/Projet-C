#include "SDL.h"
#include "constantes.h"

void creerJoueur(SDL_Surface *ecran, SDL_Surface *joueur1, SDL_Rect *positionJoueur1, SDL_Surface *joueur2, SDL_Rect *positionJoueur2)
{
    joueur1 = SDL_LoadBMP("joueur1.bmp");
    positionJoueur1->x = LARGEUR_FENETRE - 5 * TAILLE_BLOC;
    positionJoueur1->y = NB_BLOCS_HAUTEUR/2 * TAILLE_BLOC;

    joueur2 = SDL_LoadBMP("joueur2.bmp");
    positionJoueur2->x = 4 * TAILLE_BLOC;
    positionJoueur2->y = NB_BLOCS_HAUTEUR/2 * TAILLE_BLOC;

    SDL_BlitSurface(joueur1, 0, ecran, positionJoueur1);
    SDL_BlitSurface(joueur2, 0, ecran, positionJoueur2);
}
