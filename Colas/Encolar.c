/*****************************************
 * Nombre: Encolar
 * Argumentos: COLA *Cola:      Puntero al TAD Cola
 *             void *Elemento:  Puntero al Elemento a insertar
 * Descripción: Se inserta el elemento dado al final de la cola.
 *              Se aloca el espacio que sea necesario
 * Reglas de uso: La cola debe estar creada
 * Código de Retorno:  0 - Éxito
 *                    -1 - La Cola no está creada o no se pudo alocar espacio nuevo
 * Programador:
 *****************************************/

#include "Colas.h"

int Encolar(COLA *Cola, void *Elemento)
{

    // Código del Alumno
    NODO *qAux; //creamos un puntero de tipo NODO

    qAux = malloc(sizeof(NODO)); //Reservar memoria para qAux

    if (qAux != NULL) //Comprobar que se le ha asignado correctamente la memoria a qAux
    {
        if (!EsColaVacia(Cola)) //Comprobar que la cola existe
        {
            qAux->Elemento= Elemento; //Apuntamos el puntero elemento al elemento que queremos añadir
            qAux->Siguiente = NULL; //Como el nuevo elemento se va a poner al final de la cola, porque las cosas se añaden por el final en las colas, su puntero siguiente no apunta a nada
            if (Cola->Cabecera == NULL) //Si la pila no contiene elementos
            {
                Cola->Cabecera = qAux; //El elemento se coloca en la cabecera
            }
            else
            {
                Cola->Final->Siguiente = qAux; //Si ya hay más elemento en la cola, el nuevo elemento se coloca al final
            }

            Cola->Final = qAux; //El final de la cola ahora es qAux
            return (0); //Todo a salido bien
        }

        free(qAux); //Liberar el puntero qAux
        return (-1); //La cola no existia, por lo tanto retornamos -1
    }

    free(qAux); //Liberamos el puntero qAux
    return (-1); //No había espacio para dar a qAux, por lo tanto retornamos qAux
}