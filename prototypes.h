int chargerMenu(SDL_Surface *ecran, SDL_Rect *positionLogo, SDL_Surface *logo, SDL_Rect *positionTitre, SDL_Surface *titre, SDL_Rect *positionImageJouer, SDL_Surface *imageJouer);
void lireMenu(SDL_Surface *ecran, SDL_Rect *positionLogo, SDL_Surface *logo, SDL_Rect *positionTitre, SDL_Surface *titre, SDL_Rect *positionImageJouer, SDL_Surface *imageJouer);
int lancerPatier(SDL_Surface *ecran);
void creerMur(SDL_Surface *mur, SDL_Surface *ecran, int i, int j, int carte);
void creerJoueur(SDL_Surface *ecran, SDL_Surface *joueur1, SDL_Rect positionJoueur1, SDL_Surface *joueur2, SDL_Rect positionJoueur2);
