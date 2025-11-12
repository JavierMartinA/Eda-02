/*****************************************
 * Nombre: BorrarListaIzquierda
 * Argumentos: LISTA *Lista:   Puntero al TAD Lista
 * Descripción: Borra un elemento de Lista a la izquierda.
 * Reglas de uso: 
 * Código de Retorno: Puntero al elemento que se ha borrado o NULL si no había elementos
 * Programador:
 *****************************************/

#include "Listas.h"

void *BorrarListaIzquierda(LISTA *Lista)
{
    //Codigo del alumno
    // Comprobar si la lista está vacía
    if (EsListaVacia(Lista) || Lista->Primero == NULL) {
        return -1;
    }

    // Declaramos el puntero tipo nodo al primer elemento de las listas
    NODO *qAux = Lista->Primero; //Este puntero almacena los datos del primer elemento
    void *element = qAux->Elemento;

    // El primer elemento de la lista pasa a ser el siguiente de qAux (O en otras palabras el primer elemento pasa a ser el siguiente)
    Lista->Primero = qAux->Siguiente;

    // Si la lista quedó vacía, el puntero Ultimo también debe ser NULL
    if (Lista->Primero == NULL) {
        Lista->Ultimo = NULL;
    }

    // Liberar la memoria del nodo
    free(qAux);

    return element; 
}
