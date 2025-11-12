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
    if (!EsListaVacia(Lista))
    {
        NODO *qAux; //Declaro el nodo auxiliar que voy a usar para guardar el nuevo elemento
        qAux = (NODO *)malloc(sizeof(NODO)); // Pido memoria para el nuevo nodo
        if (qAux != NULL){                                                  // Compruebo que me han dado memoria
            qAux->Elemento =(void*) malloc(strlen(Elemento) + 1); // Pido memoria para el puntero elemento
            if (qAux->Elemento != NULL){// Compruebo que me hayan dado memoria para el elemento
                qAux->Elemento = Elemento; // Asigno valor al puntero valor
                qAux->Siguiente = NULL;    // Inicializo el puntero que apuntará al siguiente nodo

                if (EsListaVacia(Lista)){ // Si la lista está vacía, mi nuevo nodo se mantiene apuntando a NULL                          
                    Lista->Primero = qAux; // El puntero de la lista de inicio apunta al puntero auxiliar
                    Lista->Ultimo = qAux;  // El puntero de la lista de final apunta al puntero auxiliar
                }
                else{ // El puntero Lista que apunta al último nodo no se modificará
                    qAux->Siguiente = Lista->Primero; // Mi nuevo nodo ahora será el primero de la lista y apuntará al que antes era el primero
                    Lista->Primero = qAux;            // El puntero primero de Lista debe apuntar al nuevo primer elemento que es qAux
                }
                free(qAux); // Libero la memoria del puntero auxiliar
                return (0); // Todo ha salido bien
            }
        }
        free(qAux); // Libero la memoria del puntero auxiliar
    }
    return (-1); // Algo ha salido mal
}