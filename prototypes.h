void chargerMenu(SDL_Surface *ecran);
void lancerPatie(SDL_Surface *ecran);
void creerMur(SDL_Surface *mur, SDL_Surface *ecran, int **carte, SDL_Rect *positionMur);
void creerJoueur(SDL_Surface *ecran, SDL_Surface *joueur1, SDL_Rect *positionJoueur1, SDL_Surface *joueur2, SDL_Rect *positionJoueur2);
void boucleJeu(SDL_Surface *ecran, SDL_Surface *joueur1, SDL_Rect *positionJoueur1, SDL_Surface *joueur2, SDL_Rect *positionJoueur2, int **carte);
void regarderCollision(SDL_Rect *positionJoueur1, SDL_Rect *positionJoueur2, int *done, int **carte);
void timer( SDL_Rect *positionJoueur1, SDL_Rect *positionJoueur2, int **carte, int *directionJoueur2, int *directionJoueur1);
void deplacerJoueurs(SDL_Event event, int *directionJoueur1, int *directionJoueur2);
