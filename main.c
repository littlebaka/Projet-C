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
    SDL_Surface *ecran, *logo, *titre, *imageJouer;
    SDL_Rect positionLogo, posisionTitre, positionImageJouer;

    //initialisation SDL
    SDL_Init( SDL_INIT_VIDEO );
    atexit(SDL_Quit);
    ecran = SDL_SetVideoMode(LARGEUR_FENETRE, HAUTEUR_FENETRE, COULEUR_ECRAN, SDL_HWSURFACE|SDL_DOUBLEBUF);

    //Menu
    chargerMenu(ecran, &positionLogo, logo, &posisionTitre, titre, &positionImageJouer, imageJouer);
    lireMenu(ecran, &positionLogo, logo, &posisionTitre, titre, &positionImageJouer, imageJouer);

    //Fermeture
    SDL_FreeSurface(logo);
    SDL_FreeSurface(titre);
    SDL_FreeSurface(imageJouer);

    return 0;
}
