/*****************************************
 * Nombre: Desapilar
 * Argumentos: PILA *Pila:      Puntero al TAD Pila
 *             void **Elemento: Puntero de referencia al puntero del elemento que se desapila
 * Descripción: Desapila el primer elemento de la pila y guarda el puntero desapilado en *Elemento
 * Reglas de uso: 
 * Código de Retorno: Nuevo Puntero al TAD Pila
 * Programador:
 *****************************************/

#include "Pilas.h"

PILA *Desapilar(PILA *Pila,void **Elemento)
{

    // Código del Alumno
    PILA *pAux; //Creo el puntero auxiliar


    if (!EsPilaVacia(Pila)) //Si la pila no está vacía, desapilo el primero elemento
    {
        pAux = Pila; //El puntero auxiliar apunta al primer nodo de la pila
        strcpy(*Elemento, pAux->Elemento); //Copio el elemento del primer nodo al elemento del nodo auxiliar que he creado
        Pila = Pila->Siguiente; //Hago que la pila apunte al siguiente nodo para poder olvidar el nodo del cuál acabo de cojer el elemento
        free(pAux); //Libero la memoria del puntero auxiliar 
    }
}