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
    NODO *qAux;

    qAux = malloc(sizeof(NODO));

    if (qAux != NULL)
    {
        if (!EsColaVacia(Cola))
        {
            strcpy(qAux->Elemento, Elemento);
            qAux->Siguiente = NULL;
            if (Cola->Cabecera == NULL)
            {
                Cola->Cabecera = qAux;
            }
            else
            {
                Cola->Final->Siguiente = qAux;
            }

            Cola->Final = qAux;
            return (0);
        }

        free(qAux);
        return (-1);
    }

    free(qAux);
    return (-1);
}