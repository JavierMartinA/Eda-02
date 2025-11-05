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
    NODO *qAux;
    void *valor;

    if (!EsColaVacia(Cola) || Cola->Cabecera != NULL)
    {
        qAux = Cola->Cabecera;
        valor = qAux->Elemento;

        if (qAux->Siguiente == NULL)
        {
            Cola->Cabecera = NULL;
            Cola->Final = NULL;
        }
        else
        {
            Cola->Cabecera = Cola->Cabecera->Siguiente;
        }

        free(qAux);
        return (valor);
    }

    return NULL;
}
