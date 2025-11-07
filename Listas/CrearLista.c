/*****************************************
 * Nombre: CreaLista
 * Argumentos: N/A
 * Descripción: Crea una Lista vacía
 * Reglas de uso: 
 * Código de Retorno: Puntero a la Lista creada (vacía)
 * Programador:
 *****************************************/

#include "Listas.h"

LISTA *CrearLista()
{
    
    // Código del Alumno
    LISTA *n; //creamos un puntero tipo lista para inicializarle memoria dinamica
    n = (LISTA *)malloc(sizeof(LISTA));//memoria dinamica

    if(n!=NULL){ //Si se logra reservar memoria para la lista entonces
        n->Primero=NULL; //inicializamos lista vacia
        n->Ultimo=NULL;
    }

    return n;
    
}