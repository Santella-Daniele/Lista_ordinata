#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

struct lista {
    Nodo *testa;
    int contatore;
};

typedef struct lista Lista;

void init(Lista *l);
void stampa(Lista *l);
void inserisci(Lista *l, int valore);
void rimuovi(Lista *l, int valore);
void pulisci(Lista *l);

#endif