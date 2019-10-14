#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED
typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct Liste Liste;
struct Liste
{
    Element *premier;
};

Liste *initialisation();
void insertion(Liste *, int);
void afficherListe(Liste *);
void


#endif // LISTE_H_INCLUDED
