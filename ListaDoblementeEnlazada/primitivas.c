#include <stdio.h>
#include <stdlib.h>

#include "global.h"
#include "primitivas.h"

/* Archivo de funciones de Lista Doblemente Enlazada */

void crear_lista(t_lista *p)
{
    *p = NULL;
}

int insertar_al_comienzo(t_lista *p, const t_info *d)
{
    //CORREGIR
    t_nodo *nue = (t_nodo *)malloc(sizeof(t_nodo));

    if(nue == NULL)
        return SIN_MEM;

    nue->info = *d;

    if(*p == NULL)
    {
        nue->sig = NULL;
        nue->ant = NULL;
        *p = nue;
        return TODO_BIEN;
    }


    while((*p)->ant)
        p = &(*p)->ant;

    nue->ant = NULL;
    nue->sig = *p;
    *p = nue;

    return TODO_BIEN;
}

int insertar_al_final(t_lista *p, const t_info *d)
{
    //CORREGIR
    t_nodo *nue = (t_nodo *)malloc(sizeof(t_nodo));
    if(nue == NULL)
        return SIN_MEM;

    nue->info = *d;

    if(*p == NULL)
    {
        nue->sig = NULL;
        nue->ant = NULL;
        *p = nue;
        return TODO_BIEN;
    }

    while((*p)->sig)
        p = &(*p)->sig;

    nue->sig = NULL;
    nue->ant = *p;
    *p = nue;
    return TODO_BIEN;
}
