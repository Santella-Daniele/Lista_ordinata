#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "nodo.h"

void init(Lista *l){
    l->testa = NULL;
    l->contatore = 0;
}

void stampa(Lista *l)
{
    Nodo *nodoInserito = l->testa;

    printf("[%d] ", l->contatore);

    while (nodoInserito != NULL) {
        printf("%d ---> ", nodoInserito->valore);
        nodoInserito= nodoInserito->next;
    }
    printf("NULL\n");
}



void inserisci(Lista *l, int valore)
{
    Nodo *nodoInserito;
    nodoInserito= l->testa;
    
    Nodo *vapp;
    vapp = NULL;

    Nodo *n = malloc(sizeof(Nodo));
    n->valore = valore;
    n->next = NULL;

    
    while (nodoInserito != NULL && nodoInserito->valore < valore) {
        vapp = nodoInserito;
        nodoInserito = nodoInserito->next;
    }

    if (vapp == NULL) {
        n->next = l->testa;
        l->testa = n;
        
    } else {
        vapp->next = n;
        n->next =nodoInserito;
    }

    l->contatore++;
}



void rimuovi(Lista *l, int valore)
{
    Nodo *nodoInserito = l->testa;
    Nodo *vapp = NULL;
    Nodo *n = NULL;

    
    while (nodoInserito != NULL && nodoInserito->valore < valore) {
        vapp = nodoInserito;
        nodoInserito = nodoInserito->next;
    }

   
    if (nodoInserito == NULL) {
        printf(" elemento %d non trovato\n", valore);
        return;
    }

    printf(" elemento %d trovato \n", valore);
    l->contatore--;

    
    if (vapp == NULL) {
        printf("L'elemento da eliminare e' in testa\n");
        
        n = l->testa;           
        l->testa = l->testa->next;  
        free(n);               
        return;
    }

    
    printf("L'elemento da eliminare non e' in testa\n");
    n = vapp->next;
    vapp->next = n->next;
    free(n);
}



void pulisci(Lista *l)
{
    Nodo *n;
    Nodo *nodoInserito = l->testa;

    while (nodoInserito != NULL) {
        n = nodoInserito;    
        nodoInserito = nodoInserito->next;
        
        printf("Pulisci nodo con valore %d\n", n->valore);
        free(n);
    }

    l->testa = NULL;
    l->contatore = 0;
}
