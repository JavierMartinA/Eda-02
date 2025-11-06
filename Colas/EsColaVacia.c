/*****************************************
 * Nombre: EsColaVacía
 * Argumentos: COLA *Cola:   Puntero al TAD Cola
 * Descripción: Devuelve 'true' si la Cola está vacía o 'false' si tiene elementos
 * Reglas de uso: 
 * Código de Retorno: true  - La Cola no tiene elementos
 *                    false - La Cola tiene elementos
 * Programador:
 *****************************************/

#include "Colas.h"

bool EsColaVacia(COLA *Cola)
{
    
    // Código del Alumno
    if(Cola == NULL || Cola->Cabecera == NULL)
    {
        return(true);//La cola no tiene elementos
    }

    return(false);//La cola tiene algún elemento
    
}