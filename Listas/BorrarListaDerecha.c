/*****************************************
 * Nombre: BorrarListaDerecha
 * Argumentos: LISTA *Lista:   Puntero al TAD Lista
 * Descripción: Borra un elemento de Lista a la derecha.
 * Reglas de uso: 
 * Código de Retorno: Puntero al elemento que se ha borrado o NULL si no había elementos
 * Programador:
 *****************************************/

#include "Listas.h"

void *BorrarListaDerecha(LISTA *Lista)
{
    
    // Código del Alumno
    if (!EsListaVacia(Lista) || Lista->Primero == NULL)
    {
        NODO *qAux;//Declaro el nodo auxiliar que voy a usar para guardar el nuevo elemento
        qAux = (NODO *)malloc(sizeof(NODO)); // Pido memoria para el nuevo nodo
        if (qAux != NULL)
        {   
            
        }
        free(qAux);  // Libero la memoria del puntero auxiliar
    }
    return (-1); // Algo ha salido mal
}