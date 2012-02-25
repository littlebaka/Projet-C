#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif
#ifdef __APPLE__
#include <SDL/SDL.h>
#else
#include <SDL.h>
#endif
#include "constantes.h"

int initialserSDL(SDL_Surface *ecran)
{
    if ( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "Unable to init SDL: %s\n", SDL_GetError() );
        return 1;
    }
    atexit(SDL_Quit);

    ecran = SDL_SetVideoMode(LARGEUR_FENETRE, HAUTEUR_FENETRE, COULEUR_ECRAN, SDL_HWSURFACE|SDL_DOUBLEBUF);
    if ( !ecran ){
        printf("Unable to set 640x480 video: %s\n", SDL_GetError());
        return 1;
    }
}
