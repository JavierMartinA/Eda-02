/*****************************************
 * Nombre: EsListaVacia
 * Argumentos: Lista *Lista:   Puntero al TAD Lista
 * Descripción: Comprueba si la Lista está vacía o tiene elementos
 * Reglas de uso:
 * Código de Retorno: true  - La lista está vacía
 *                    false - La lista tiene elementos
 * Programador:
 *****************************************/

#include "Listas.h"

bool EsListaVacia(LISTA *Lista)
{

    // Código del Alumno
    if (Lista == NULL)
    {                // si la funcion recibe un NULL a la hora de chequear el puntero lista
        return TRUE; // devuelve un TRUE si la estructura entera es NULL
    }
    return FALSE; // Si los punteros de lista tienen un valor, quiere decir que existen elementos dentro
}