#include "SDL.h"
#include "prototypes.h"
#include "constantes.h"

int main( int argc, char** argv )
{
    //pour afficher la console
    freopen("CON", "w", stdout);
    freopen("CON", "r", stdin);
    freopen("CON", "w", stderr);

    //initialisation variables
    SDL_Surface *ecran = NULL;

    //initialisation SDL
    SDL_Init( SDL_INIT_VIDEO );
    atexit(SDL_Quit);
    SDL_WM_SetIcon(SDL_LoadBMP("logo.bmp"), NULL);
    SDL_WM_SetCaption("Tron", NULL);
    ecran = SDL_SetVideoMode(LARGEUR_FENETRE, HAUTEUR_FENETRE, COULEUR_ECRAN, SDL_HWSURFACE|SDL_DOUBLEBUF);

    lireMenu(ecran);

    return 0;
}
