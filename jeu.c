#include "SDL.h"
#include "constantes.h"

int lancerPatier(SDL_Surface *ecran)
{
    SDL_Surface *mur, *joueur1, *joueur2;
    int carte[LARGEUR_FENETRE][HAUTEUR_FENETRE];
    int i = 0, j = 0;
    SDL_Rect positionMur, positionJoueur1, positionJoueur2;

    SDL_FillRect(ecran, 0, SDL_MapRGB(ecran->format, 0, 0, 0));

    creerMur(mur, ecran, &i, &j, carte, positionMur);

    creerJoueur(ecran, joueur1, &positionJoueur1, joueur2, &positionJoueur2);

    SDL_Flip(ecran);
    printf("3");
    SDL_Delay(300);
    printf("2");
    SDL_Delay(300);
    printf("1");
    SDL_Delay(300);
    printf("Go!");

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
                    if (event.key.keysym.sym == SDLK_ESCAPE){
                        done = 1;
                    }
                    //joueur 1
                    if (event.key.keysym.sym == SDLK_DOWN){
                        //if(carte[i][j]== 1)
                        //{
                            //printf("collision\n");
                            //done = 1;
                        //}
                        //else
                        //{
                            positionJoueur1.y += TAILLE_BLOC ;
                            //printf("%d\n", carte[0][0]);
                        //}
                    }
                    if (event.key.keysym.sym == SDLK_UP){
                        //if(positionJoueur1.x == positionMur.x && positionJoueur1.y - TAILLE_BLOC == positionMur.y)
                        //{
                            //printf("collision\n");
                            //done = 1;
                        //}
                        //else
                        //{
                            positionJoueur1.y -= TAILLE_BLOC ;
                            //printf("x: %d  |  %d  ||y: %d   |%d      bloc:%c\n", positionJoueur1.x, positionMur.x, positionJoueur1.y, positionMur.y, carte[i][j]);
                        //}
                    }
                    if (event.key.keysym.sym == SDLK_LEFT){
                        //if(positionJoueur1.x - TAILLE_BLOC == positionMur.x && positionJoueur1.y == positionMur.y)
                        //{
                            //printf("collision\n");
                            //done = 1;
                        //}
                        //else
                        //{
                            positionJoueur1.x -= TAILLE_BLOC;
                        //}
                    }
                    if (event.key.keysym.sym == SDLK_RIGHT){
                        //if(positionJoueur1.x + TAILLE_BLOC == MUR && positionJoueur1.y == MUR)
                        //{
                            //printf("collision\n");
                            //done = 1;
                        //}
                        //else
                        //{
                            positionJoueur1.x += TAILLE_BLOC ;
                        //}
                    }
                    //joueur 2
                    if (event.key.keysym.sym == SDLK_s){
                        positionJoueur2.y += TAILLE_BLOC ;
                    }
                    if (event.key.keysym.sym == SDLK_w){
                        positionJoueur2.y -= TAILLE_BLOC ;
                    }
                    if (event.key.keysym.sym == SDLK_a){
                        positionJoueur2.x -= TAILLE_BLOC ;
                    }
                    if (event.key.keysym.sym == SDLK_d){
                        positionJoueur2.x += TAILLE_BLOC ;
                    }
                    break;
                }
            }
        }
        SDL_BlitSurface(joueur1, 0, ecran, &positionJoueur2);
        SDL_BlitSurface(joueur2, 0, ecran, &positionJoueur1);

        SDL_Flip(ecran);
    }
    SDL_FreeSurface(mur);
}
