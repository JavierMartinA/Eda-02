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
        pAux->Elemento = malloc(strlen(Elemento)+1); //Pido memoria para el puntero Elemento 
        strcpy(pAux->Elemento, Elemento); //Copio el valor del elemento al puntero
        pAux->Siguiente = Pila; //Encadeno el nuevo nodo al que anteriormente era el primero

        Pila = pAux; //Hago el puntero Pila apunte al primer nodo 
    }
    free(pAux); //Libero la memoria del puntero auxiliar
    return (Pila);
}