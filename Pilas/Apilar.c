/*****************************************
 * Nombre: Apilar
 * Argumentos: PILA *Pila:      Puntero al TAD Pila
 *             void *Elemento:  Puntero al elemento a apilar
 * Descripción: Apila el elemento Elemento al comienzo de la Pila
 * Reglas de uso: 
 * Código de Retorno: Nuevo Puntero al TAD Pila
 * Programador:
 *****************************************/

#include "Pilas.h"

PILA *Apilar(PILA *Pila,void *Elemento)
{

    // Código del Alumno
    PILA *pAux;

    pAux = malloc(sizeof(PILA));
    //Compruebo que se me ha dado la memoria
    if (pAux != NULL)
    {
        strcpy(pAux->Elemento, Elemento);
        pAux->Siguiente = Pila;

        Pila = pAux;
    }
}