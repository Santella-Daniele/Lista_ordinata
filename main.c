#include <stdio.h>
#include "lista.h"

int main()
{
   Lista l;
   
   init(&l);
   
   stampa(&l);
   
   inserisci(&l,5);
   stampa(&l);
   
   inserisci(&l,6);
   stampa(&l);
   
   inserisci(&l,2);
   stampa(&l);

   inserisci(&l,4);
   stampa(&l);
   
   inserisci(&l,11);
   stampa(&l);
   
    rimuovi(&l,4);
    stampa(&l);

    rimuovi(&l,11);
    stampa(&l);

    rimuovi(&l,20);
    stampa(&l);
    
    rimuovi(&l,6);
    stampa(&l);

    pulisci(&l);
 
   

    return 0;
}
