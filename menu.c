#include "SDL.h"
#include "prototypes.h"

int chargerMenu(SDL_Surface *ecran, SDL_Rect *positionLogo, SDL_Surface *logo, SDL_Rect *positionTitre, SDL_Surface *titre, SDL_Rect *positionImageJouer, SDL_Surface *imageJouer){

    SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 26, 169, 185));

    logo = SDL_LoadBMP("logo.bmp");
    positionLogo->x = (ecran->w - logo->w) / 2;
    positionLogo->y = (ecran->h - logo->h) / 2;

    titre = SDL_LoadBMP("titre.bmp");
    positionTitre->x = (ecran->w - titre->w) / 2;
    positionTitre->y = (ecran->h - titre->h) / 4;

    imageJouer = SDL_LoadBMP("imageJouer.bmp");
    positionImageJouer->x = (ecran->w - imageJouer->w) / 2;
    positionImageJouer->y = 3 * ((ecran->h - imageJouer->h) / 4);

        SDL_BlitSurface(logo, 0, ecran, positionLogo);
        SDL_BlitSurface(titre, 0, ecran, positionTitre);
        SDL_BlitSurface(imageJouer, 0, ecran, positionImageJouer);
}

void lireMenu(SDL_Surface *ecran, SDL_Rect *positionLogo, SDL_Surface *logo, SDL_Rect *positionTitre, SDL_Surface *titre, SDL_Rect *positionImageJouer, SDL_Surface *imageJouer){
    printf("2.1\n");
    int done = 0;
    while (!done)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_QUIT:
                    done = 1;
                    break;
                case SDL_KEYDOWN:
                {
                    if (event.key.keysym.sym == SDLK_ESCAPE)
                    {
                        done = 1;
                    }
                    if (event.key.keysym.sym == SDLK_SPACE)
                    {
                        lancerPatier(ecran);
                    }
                    break;
                }
            }
        }
        printf("2.2\n");
        /*SDL_FillRect(ecran, 0, SDL_MapRGB(ecran->format, 26, 169, 185));

        SDL_BlitSurface(&logo, 0, ecran, positionLogo);
        SDL_BlitSurface(&titre, 0, ecran, positionTitre);
        SDL_BlitSurface(&imageJouer, 0, ecran, positionImageJouer);*/

        SDL_Flip(ecran);
    }
    printf("2.3\n");
}
