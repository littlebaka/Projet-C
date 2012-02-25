#include "SDL.h"
#include "constantes.h"

int creerJoueur(SDL_Surface *ecran, SDL_Surface *joueur1, SDL_Rect positionJoueur1, SDL_Surface *joueur2, SDL_Rect positionJoueur2)
{
    joueur1 = SDL_LoadBMP("joueur1.bmp");
    positionJoueur1.x = 9 * (NB_BLOCS_LARGEUR/10) * TAILLE_BLOC; //à droite
    positionJoueur1.y = NB_BLOCS_HAUTEUR/2 * TAILLE_BLOC;

    joueur2 = SDL_LoadBMP("joueur2.bmp");
    positionJoueur2.x = NB_BLOCS_LARGEUR/10 * TAILLE_BLOC; //a gauche
    positionJoueur2.y = NB_BLOCS_HAUTEUR/2 * TAILLE_BLOC;

    SDL_BlitSurface(joueur1, 0, ecran, &positionJoueur1);
    SDL_BlitSurface(joueur2, 0, ecran, &positionJoueur2);
}
