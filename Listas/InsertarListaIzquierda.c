/*****************************************
 * Nombre: InsertarListaIzquierda
 * Argumentos: Lista *Lista:    Puntero al TAD Lista
 *             void *Elemento:  Puntero al elemento a insertar
 * Descripción: Inserta el elemento Elemento en Lista por la Izquierda
 * Reglas de uso:
 * Código de Retorno:  0 - Éxito
 *                    -1 - La lista no está creada o no se ha podido alocar memoria nueva
 * Programador:
 *****************************************/

#include "Listas.h"

int InsertarListaIzquierda(LISTA *Lista, void *Elemento)
{

    // Código del Alumno
    // Código del Alumno
    if (!EsListaVacia(Lista))
    {
        NODO *qAux; // Declaro el nodo auxiliar que voy a usar para guardar el nuevo elemento
        qAux = Lista->Primero;
        Lista->Primero = (NODO *)malloc(sizeof(NODO));

        Lista->Primero->Elemento = Elemento; // Asigno valor al puntero valor
        Lista->Primero->Siguiente = qAux;    // Inicializo el puntero que apuntará al siguiente nodo

        
        return (0); // Todo ha salido bien
    }
    return (-1); // Algo ha salido mal
}