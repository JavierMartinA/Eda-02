/*****************************************
 * Nombre: InsertarListaDerecha
 * Argumentos: Lista *Lista:    Puntero al TAD Lista
 *             void *Elemento:  Puntero al elemento a insertar
 * Descripción: Inserta el elemento Elemento en Lista por la Derecha
 * Reglas de uso:
 * Código de Retorno:  0 - Éxito
 *                    -1 - La lista no está creada o no se ha podido alocar memoria nueva
 * Programador:
 *****************************************/

#include "Listas.h"

int InsertarListaDerecha(LISTA *Lista, void *Elemento)
{

    // Código del Alumno
    if (!EsListaVacia(Lista))
    {
        NODO *qAux;//Declaro el nodo auxiliar que voy a usar para guardar el nuevo elemento
        qAux = (NODO *)malloc(sizeof(NODO)); // Pido memoria para el nuevo nodo
        if (qAux != NULL)
        {                                                  // Compruebo que me han dado memoria
            qAux->Elemento = (void *) malloc(strlen(Elemento) + 1); // Pido memoria para el puntero elemento
            if (qAux->Elemento != NULL)                    // Compruebo que me hayan dado memoria para el elemento
            {
                qAux->Elemento = Elemento; // Asigno valor al puntero valor
                qAux->Siguiente = NULL;    // Inicializo el puntero que apuntará al siguiente nodo

                Lista->Ultimo->Siguiente = qAux;// El puntero siguiente del último nodo de la Lista debe apuntar al nuevo último elemento que es qAux
                Lista->Ultimo = qAux; //El puntero Ultimo de Lista apunta al nuevo último nodo
                free(qAux); // Libero la memoria del puntero auxiliar
                return (0); // Todo ha salido bien
            }
        }
        free(qAux);  // Libero la memoria del puntero auxiliar
    }
    return (-1); // Algo ha salido mal
}