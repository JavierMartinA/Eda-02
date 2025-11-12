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
    PILA *pAux; //Declaro el puntero auxiliar

    pAux =(PILA*) malloc(sizeof(PILA)); //Pido memoria para el puntero auxiliar
    //Compruebo que se me ha dado la memoria
    if (pAux != NULL)
    {
        pAux->Elemento = (void*) malloc(strlen(Elemento)+1); //Pido memoria para el puntero Elemento 
        if (pAux->Elemento != NULL) { //Compruebo que me han dado memoria para el puntero elemento del puntero auxiliar
            strcpy(pAux->Elemento, Elemento); //Copio el valor del elemento al puntero
            pAux->Siguiente = Pila; //Encadeno el nuevo nodo al que anteriormente era el primero
            Pila = pAux; //Hago el puntero Pila apunte al primer nodo 
        }
    }
    free(pAux->Elemento); //Libero el espacio de memoria del elemento
    free(pAux); //Libero la memoria del puntero auxiliar
    return (Pila);
}