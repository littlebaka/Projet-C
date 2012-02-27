#include "SDL.h"
#include "constantes.h"

void creerMur(SDL_Surface *mur, SDL_Surface *ecran,  int carte[LARGEUR_FENETRE][HAUTEUR_FENETRE], SDL_Rect positionMur)
{
    int i=0, j=0;

    mur = SDL_LoadBMP("imageMur.bmp");

    for(i=0;i<LARGEUR_FENETRE;i+=TAILLE_BLOC)
    {
        for(j=0;j<HAUTEUR_FENETRE;j+=TAILLE_BLOC)
        {
            carte[i][j]= VIDE;
        }
    }

    for(i = 0 ; i < LARGEUR_FENETRE ; i += TAILLE_BLOC)
    {
        for(j = 0 ; j < HAUTEUR_FENETRE ; j += TAILLE_BLOC)
        {
            if ( i==0 || j==0 || i == LARGEUR_FENETRE-TAILLE_BLOC || j == HAUTEUR_FENETRE-TAILLE_BLOC)
            {
                printf("%d | %d\n", i, j);
                positionMur.x = i;
                positionMur.y = j;
                SDL_BlitSurface(mur, 0, ecran, &positionMur);
                carte[i][j]= MUR;
            }
        }
    }
}
