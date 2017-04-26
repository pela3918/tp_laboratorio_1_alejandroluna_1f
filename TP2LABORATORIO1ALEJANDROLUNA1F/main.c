#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define E 20



int main()
{
    Epersona personas[E];
    int   i;
    int opcion;
    char seguir ='s';

    inicializar(personas,E);
    do
    {
        system("color 97");
        system("cls");

        printf("**************TP 2 ALEJANDRO LUNA 1° F    ****************************\n");
        printf("*           1- ALTA DE PERSONA                                       *\n");
        printf("*           2- BAJA LOGICA DE PERSONAI                               *\n");
        printf("*           3- IMPRIMIR GRAFICO DE BARRARS EDADES                    *\n");
        printf("*           4- ORDENAR PERSONAS POR NOMBRE                           *\n");
        printf("*           5- MOSTRAR LISTADO DE PERSONAS                           *\n");
        printf("*                      6- SALIR                                      *\n");
        printf("**********************************************************************\n");
        printf("*...................::ELIGE UNA OPCION::.............................*\n");
        printf("OPCION : ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarpersona(personas, E);



            break;

        case 2:
            eliminarpersonas(personas, E);
            system("pause");

            break;

        case 3:
            graficoBarras(personas, E);
            system("pause");

            break;



        case 4:

            ordenarpersonas(personas, E);
            system("pause");


            break;

        case 5:
            printf("DNI    \tnombre\tedad\n");
            for(i=0; i<E; i++)
            {
                if(personas[i].estados!=0)
                {
                    printf("%d\t%s\t%d\n",personas[i].DNI,personas[i].nombres,personas[i].edad);
                }

            }
            system("pause");
            break;

        case 6:
            seguir='n';
            printf("*...................::ADIOS HASTA PRONTO::...........................*\n");

            break;

        default :

            printf("Ingrese un numero valido de opcion..\n\n ");
            system("pause");
            system("cls");
            break;

        }

    }
    while(seguir=='s');


    return 0 ;
}
