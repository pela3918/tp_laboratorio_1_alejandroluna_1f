#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{

    int opcion=0;
    float num1=0, num2=0, resultado;

    while(opcion!=9)
    {
        system("cls");
        printf("******************CALCULDORA ALEJANDRO LUNA ********************************\n");
        printf("*           1- Ingresar 1er operando *******(A=%.2f)                       *\n", num1);
        printf("*           2- Ingresar 2do operando *******(B=%.2f)                       *\n", num2);
        printf("*           3- Calcular la suma ************(A+B)                          *\n");
        printf("*           4- Calcular la resta ***********(A-B)                          *\n");
        printf("*           5- Calcular la division ********(A/B)                          *\n");
        printf("*           6- Calcular la multiplicacion***(A*B)                          *\n");
        printf("*           7- Calcular el factorial *******(A!)                           *\n");
        printf("*           8- Calcular todas las operaciones                              *\n");
        printf("*                      9- Salir                                            *\n");
        printf("****************************************************************************\n");
        printf("*...................::ELIGE UNA OPCION::...................................*\n");

        printf("*OPCION :");
        scanf("%d",&opcion);



        switch(opcion)
        {
            case 1: printf("Ingrese el primer numero: ");
                    scanf("%f", &num1);
                break;
            case 2: printf("Ingrese el segundo numero: ");
                    scanf("%f", &num2);
                break;
            case 3: resultado=sumar(num1, num2);
                    printf("La suma de los numeros es : %.2f\n", resultado);
                    system("pause");
                break;
            case 4: resultado=restar(num1, num2);
                printf("La resta de los numeros es : %.2f\n", resultado);
                system("pause");
                break;
            case 5: if(num1!=0 && num2!=0)
                {
                    resultado=dividir(num1, num2);
                    printf("La division de los numeros es : %.2f\n", resultado);
                    system("pause");
                }
                else
                {
                    printf("Error. No se puede dividir si uno de los dos numeros es cero\n");
                    system("pause");
                }
                break;
            case 6: resultado=multiplicar(num1, num2);
                    printf("La multiplicacion de los numeros es : %.2f\n", resultado);
                    system("pause");
                break;
            case 7: resultado=factorial(num1);
                    printf("El factorial del numero es : %.2f\n", resultado);
                    system("pause");
                break;
            case 8: resultado=sumar(num1, num2);
                    printf("La suma es : %.2f\n", resultado);
                    resultado=restar(num1, num2);
                    printf("La resta es : %.2f\n", resultado);
                    if(num1!=0 && num2!=0)
                {
                    resultado=dividir(num1, num2);
                    printf("La division de los numeros es : %.2f\n", resultado);

                }
                else
                {
                    printf("Error. No se puede dividir si uno de los dos numeros es cero\n");
                }
                    resultado=multiplicar(num1, num2);
                    printf("La multiplicacion es : %.2f\n", resultado);
                    resultado=factorial(num1);
                    printf("El factorial es : %.2f\n", resultado);
                    system("pause");
                break;
            case 9:printf("*...................::ADIOS-SAYONARA::...................................*\n");
                break;
        }
}
    return 0;

}
