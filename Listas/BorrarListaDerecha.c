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
    NODO *qAux, *l, *c; // Declaro el nodo auxiliar que voy a usar para guardar el nuevo elemento

    void *Elemento;

    int contador = 0;

    if (!EsListaVacia(Lista) || Lista->Primero == NULL)
    {
        l = NULL;
        c = Lista->Primero;
        qAux = Lista->Primero;

        while (c != NULL)
        {
            contador++;
            c = c->Siguiente;
        }

        if (contador == 1)
        {
            Elemento = qAux->Elemento;

            Lista->Primero = NULL;
            Lista->Ultimo = NULL;
        }
        else
        {
            for (int i = 0; i < contador - 1; i++)
            {
                l = qAux;
                qAux = qAux->Siguiente;
            }

            Elemento = qAux->Elemento;

            l->Siguiente = NULL;
            Lista->Ultimo = l;
        }

        // free(qAux); // Libero la memoria del puntero auxiliar
        return (Elemento);
    }
    
    return NULL; // Algo ha salido mal
}