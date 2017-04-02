#include "funciones.h"
/** \brief suma dos variables decimales.
 *
 * \param numero del tipo float (decimal).
 * \param numero del tipo float (decimal).
 * \return devuelve la suma de los dos valores anteriores.
 *
 */
float sumar(float x, float y)
{
    float resultado;
    resultado=x+y;
    return resultado;
}
/** \brief calcula la diferencia entre dos variables decimales respetando el signo.
 *
 * \param numero de tipo decimal.
 * \param numero de tipo decimal.
 * \return en caso de la variable minuendo nula retorna el sustraendo multiplicado por -1.
 *         en caso de la variable sustraendo nula devuelve el minuendo.
           en caso de dos variables nulas devuelve cero.
           si las dos variables son distintas de cero devuelve la sustraccion de ambos .

 */

float restar(float x, float y)
{
    float resultado;
    resultado=x-y;
    return resultado;
}

/** \brief se realiza la division de dos numero decimales.
 *
 * \param numero de tipo decimal.
 * \param numero de tipo decimal.
 * \return en el caso de denominador nulo da error y devuelve cero a la variable.
            en el caso de numerador nulo y denominador distinto de cero retorna cero.
            en el caso de ambos distintos de cero retorna el valor del calculo.
 *
 */

float dividir(float x, float y)
{
    float resultado;
    resultado=x/y;
    return resultado;
}
/** \brief realiza el producto de dos variables decimales.
 *
 * \param numero de tipo decimal.
 * \param numero de tipo decimal.
 * \return en el caso de que uno de los valores sea nulo retorna cero.
            en el caso de que ambos sean distintos de cero realiza la operacion y devuelve el producto.
 *
 */

float multiplicar(float x, float y)
{
    float resultado;
    resultado=x*y;
    return resultado;
}
/** \brief calcula el factorial de un numero (que debe ser positivo y entero).
 *
 * \param numero de tipo decimal.
 * \param solo se toma el parametro anterior.
 * \return  en caso de un parametro nulo devuelve uno.
            en caso de parametro entero positivo devuelve el calculo.
            en caso de ser otro me devuelve cero.
 *
 */

float factorial(float x)
{
    float resultado;
    resultado=x*(x-1);
    return resultado;
}
