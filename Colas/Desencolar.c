/*****************************************
 * Nombre: Desencolar
 * Argumentos: COLA *Cola:   Puntero al TAD Cola
 * Descripción: Devuelve el puntero al primer elemento de la Cola (Cabecera) y lo elimina de la Cola
 * Reglas de uso: El puntero debe ser void *
 * Código de Retorno: Puntero al elemento desencolado
 *                    NULL si la cola no está creada o no tiene elementos
 * Programador:
 *****************************************/

#include "Colas.h"

void *Desencolar(COLA *Cola)
{

    // Código del Alumno
    NODO *qAux; // Creamos un puntero de tipo NODO
    void *valor; // Creamos un puntero void donde guardar el elemento eliminado que tenemos que retornar si todo ha salido bien

    // if (qAux != NULL) // Comprobar que se le ha asignado correctamente la memoria a qAux
    // {
        if (!EsColaVacia(Cola) || Cola->Cabecera != NULL) // Comporobamos que existe tanto la pila, como elemento dentro de la pila
        {
            qAux = Cola->Cabecera;  // Apuntamos qAux a la cabecera, porque los elementos en las colas se eliminandesde el principio
            valor = qAux->Elemento; // Apuntamos el puntero valor al elemento que vamos a eliminar

            if (qAux->Siguiente == NULL) // Comprobamos si solo existe la cabecera
            {
                Cola->Cabecera = NULL; // Inicializamos la cabecera a NULL para eliminar el elemento
                Cola->Final = NULL;    // Inizializamos el final a NULL para eliminar el elemento
            }
            else
            {
                Cola->Cabecera = Cola->Cabecera->Siguiente; // Movemos la cabecera al siguiente elemento de la cola
            }

            // free(qAux);     // Liberamos el puntero qAux, eliminando de esa forma el elemnto de la cabecera original
            return (valor); // retornamos el elemento eliminado
        }
    // }
    return NULL; // La cola no existia o no contenia nada
}
