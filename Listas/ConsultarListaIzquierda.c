/*****************************************
 * Nombre: ConsultarListaIzquierda
 * Argumentos: Lista *Lista:   Puntero al TAD Lista
 * Descripción: Consulta el elemento a la izquierda de Lista. No se elimina el elemento
 * Reglas de uso: 
 * Código de Retorno: Puntero al elemento a la izquierda de la Lista 
 * Programador:
 *****************************************/

#include "Listas.h"

void *ConsultarListaIzquierda(LISTA *Lista)
{
    
    // Código del Alumno

    if(!EsListaVacia(Lista)) //Comprobar que la cola está creada y tiene elementos
    {
        return(Lista->Primero->Elemento); //Devolver el primer elemento de la lista (el que está más a la izquierda)
    }
    
    return NULL; //La lista no existe o no contiene nada
}