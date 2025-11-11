/*****************************************
 * Nombre: ConsultarListaDerecha
 * Argumentos: Lista *Lista:   Puntero al TAD Lista
 * Descripción: Consulta el elemento de la derecha de Lista. No se elimina de Lista
 * Reglas de uso: 
 * Código de Retorno: Puntero al elemento de la derecha de Lista
 * Programador:
 *****************************************/

#include "Listas.h"

void *ConsultarListaDerecha(LISTA *Lista)
{
    
    // Código del Alumno
    
    if(!EsListaVacia(Lista)) //Comprobar que la cola está creada y tiene elementos
    {
        return(Lista->Ultimo->Elemento); //Devolver el ultimo elemento de la lista (el que está más a la derecha)
    }
    
    return NULL; //La lista no existe o no contiene nada
}