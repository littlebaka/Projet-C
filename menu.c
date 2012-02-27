#include "SDL.h"
#include "prototypes.h"

void lireMenu(SDL_Surface *ecran)
{
    SDL_Surface *logo = NULL, *titre = NULL, *imageJouer = NULL;
    SDL_Rect positionLogo, positionTitre, positionImageJouer;

    logo = SDL_LoadBMP("logo.bmp");
    positionLogo.x = (ecran->w - logo->w) / 2;
    positionLogo.y = (ecran->h - logo->h) / 2;

    titre = SDL_LoadBMP("titre.bmp");
    positionTitre.x = (ecran->w - titre->w) / 2;
    positionTitre.y = (ecran->h - titre->h) / 4;

    imageJouer = SDL_LoadBMP("imageJouer.bmp");
    positionImageJouer.x = (ecran->w - imageJouer->w) / 2;
    positionImageJouer.y = 3 * ((ecran->h - imageJouer->h) / 4);

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
                    break;
                case SDL_MOUSEBUTTONUP:
                    {
                        if(   event.button.y > positionImageJouer.y
                           && event.button.y <= positionImageJouer.y +positionImageJouer.h
                           && event.button.x > positionImageJouer.x
                           && event.button.x <= positionImageJouer.x +positionImageJouer.w)
                           {
                               lancerPatie(ecran);
                           }
                    }
                }
            }
        }
        SDL_FillRect(ecran, 0, SDL_MapRGB(ecran->format, 26, 169, 185));

        SDL_BlitSurface(logo, 0, ecran, &positionLogo);
        SDL_BlitSurface(titre, 0, ecran, &positionTitre);
        SDL_BlitSurface(imageJouer, 0, ecran, &positionImageJouer);

        SDL_Flip(ecran);
    }
    SDL_FreeSurface(logo);
    SDL_FreeSurface(titre);
    SDL_FreeSurface(imageJouer);
}
