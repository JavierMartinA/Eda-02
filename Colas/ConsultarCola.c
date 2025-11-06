/*****************************************
 * Nombre: ConsultarCola
 * Argumentos: COLA *Cola:   Puntero al TAD Cola
 * Descripción: Devuelve un puntero al primer Elemento de la Cola.
 *              No se modifica la Cola, solo se consulta
 * Reglas de uso: 
 * Código de Retorno: Puntero al primer elemento de la Cola o NULL si la cola está vacía
 * Programador:
 *****************************************/

#include "Colas.h"

void *ConsultarCola(COLA *Cola)
{
    
    // Código del Alumno
    if(!EsColaVacia(Cola)) //Comprobar que la cola está creada
    {
        return(Cola -> Cabecera); //Si la cola está creada, se devuelve la cabecera
    }

    return NULL; //Si no existe la cola se devuelve NULL
}