#include <stdio.h>
#include <stdlib.h>

#include "Liste.h"

Liste *initialisation()
{
    Liste *liste = malloc(sizeof(*liste));
    Element *element = malloc(sizeof(*element));

    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->nombre = 0;
    element->suivant = NULL;
    liste->premier = element;

    return liste;
}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

void insertion(Liste *liste, int nvNombre)
{
    /* Cr�ation du nouvel �l�ment */
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;

    /* Insertion de l'�l�ment au d�but de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}
/** \brief supprime le premier element
 *
 * \param
 * \param
 * \return
 *
 */
 void suppression(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (liste->premier != NULL)
    {
        Element *aSupprimer = liste->premier;
        liste->premier = liste->premier->suivant;
        free(aSupprimer);
    }
}
/** \brief affiche la liste
 *
 * \param
 * \param
 * \return
 *
 */
void afficherListe(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *actuel = liste->premier;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}
