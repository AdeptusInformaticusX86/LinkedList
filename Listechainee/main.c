#include <stdio.h>
#include <stdlib.h>

#include "Liste.h"


int main()
{

    Liste *maListe = initialisation();

    insertion(maListe, 56);
    insertion(maListe, 8);
    insertion(maListe, 15);;

    afficherListe(maListe);


    return 0;
}

