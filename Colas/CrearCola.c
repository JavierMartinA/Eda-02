/*****************************************
 * Nombre: CrearCola
 * Argumentos: N/A
 * Descripción: Crea una cola sin elementos.
 * Reglas de uso: 
 * Código de Retorno: Puntero a la Cola creada (vacía)
 *                    NULL - No se ha podido alocar espacio nuevo
 * Programador:
 *****************************************/

#include "Colas.h"

COLA *CrearCola()
{
    
    // Código del Alumno
    COLA *c;

    c = (COLA *) malloc(sizeof(COLA));

    if(c!=NULL)
    {
        c->Cabecera = (NODO*) malloc(sizeof(NODO));
        c ->Cabecera = NULL;
        c->Final = (NODO*) malloc(sizeof(NODO));
        c ->Final = NULL;

        return(c);
    }
    
    return NULL;
}