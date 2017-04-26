#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<conio.h>
#include "funciones.h"
#define E 20


/** \brief ingresa la carga de los personass
*
* \param se declara un flag .
* \param se declara un auxiliar dni str devolviendo un char .
* \param se declara un auxiliar dni entero  .  .
* \return  .
*
*/
void cargarpersona( Epersona personas[], int tam)
{


    int flagEncontro = 0, i;
    char auxiliarDNIStr[50];
    int auxiliarDNI;
    char auxiliarNombreStr[50];

    for(i=0; i<tam; i++)
    {
        if(personas[i].estados==0)
        {


            fflush(stdin);

            if (!getStringNumeros("Ingrese el DNI: ",auxiliarDNIStr))
            {
                printf ("El DNI debe ser numerico\n");
                system("pause");
                break;

            }
            auxiliarDNI = atoi(auxiliarDNIStr);
            fflush(stdin);
            if(strlen(auxiliarDNIStr)!=7 && strlen(auxiliarDNIStr)!=8 )
            {
                printf("el DNI no contiene el campo numerico que corresponde\n");
                system("pause");
                break;
            }
            auxiliarDNI=buscarRepeticion(personas,auxiliarDNI);/*<----Aca se comprueba que no sea un DNI repetido*/
            if(auxiliarDNI==1)
            {
                system("cls");
                printf("DNI ya esta ingresado al sistema\n\n");
                system("pause");
                break;
            }



            if(personas[i].estados==1)
            {
                printf("\n\nEL DNI YA EXISTE!!!\n");
                break;
            }


            personas[i].DNI = auxiliarDNI;
            fflush(stdin);



            if (!getStringLetras("Ingrese el nombre: ",auxiliarNombreStr))
            {
                printf ("El nombre debe estar compuesto solo por letras\n");
                system("pause");
                break;
            }

            strcpy(personas[i].nombres,auxiliarNombreStr);
            fflush(stdin);

            printf("Ingrese edad de la persona : ");
            scanf("%d", &personas[i].edad);
            if(!(personas[i].edad>0 && personas[i].edad<110))
            {
               printf ("El rango de la edad debe estar estre 0 y 120 anios de edad\n");
               system("pause");
               break;
            }

            personas[i].estados = 1;
            flagEncontro = 1;


            break;
        }


    }
    if(!flagEncontro)
    {
        printf("No hay espacio suficiente!!!");
    }
}

/** \brief funcion producir la baja logica   de la personas
*
* \param se declara un flag .
* \param  se declara un auxiliar dni entero  .
* \param se declara una variable char para confirmar la baja   .  .
* \return  .
*
*/
void eliminarpersonas(Epersona personas[], int tam)
{
    int flagEncontro=0, i;
    int auxInt;
    char respuesta;
    printf("DNI    \tnombre\tedad\n");
    for(i=0; i<E; i++)
    {
        if(personas[i].estados!=0)
        {
            printf("%d\t%s\t%d\n",personas[i].DNI,personas[i].nombres,personas[i].edad);
        }

    }
    printf("Ingrese DNI a dar de baja  : ");
    scanf("%d", &auxInt);
    for(i=0; i<tam; i++)
    {
        if(personas[i].estados==1)
        {
            if(auxInt == personas[i].DNI)
            {
                printf("%d\t%s\t%d\n", personas[i].DNI,personas[i].nombres,personas[i].edad);
                fflush(stdin);
                printf("Esta seguro de eliminar el dato s/n: ");
                respuesta = getch();
                fflush(stdin);
                if(respuesta=='s')
                {
                    personas[i].estados = 0;
                }
                else
                {
                    printf("Accion cancelada por el usuario!!!");
                }

                flagEncontro=1;
                break;

            }

        }
    }
    if(flagEncontro==0)
    {
        printf("Dato inexistente");
    }
}
/** \brief ordena la el listado cargado  de los personass
*
* \param numero entero para recorrer el for .
* \param numero entero para recorrer el for .
* \param se declara una variable auxiliar   .
* \return
*
*/
void ordenarpersonas( Epersona personas[], int tam)
{

    int   i, j;
    Epersona personaaux;



    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(personas[i].nombres, personas[j].nombres)>0)
            {
                personaaux=personas[i];
                personas[i]=personas[j];
                personas[j]=personaaux;
            }

        }
    }

}
/** \brief inicializa el array .
*
* \param numero entero para recorrer el for .
* \param
* \param  .
* \return
*
*/

void inicializar(Epersona personas[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {

        personas[i].estados=0;

    }

}
/** \brief valida si un dato ingresado es numerico .
*
* \param numero entero  .
* \param
* \param  .
* \return
*
*/

int esNumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}
/** \brief valida si una cadena de caracteres es numerica  .
*
* \param numero entero  .
* \param
* \param  .
* \return
*
*/
int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}
void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}
/** \brief valida si una cadena de caracteres esta compuesta por letras  .
*
* \param numero entero  .
* \param
* \param  .
* \return
*
*/

int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}
int esSoloLetras(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 0;
        i++;
    }
    return 1;
}
/** \brief modifica la carga de los personass
*
* \param numero legajo  del tipo entero.
* \param nombres del tipo char .
* \param edad del tipo float decimal .
* \param estados indica sin el esta ocupado o no el lugar de la memoria  .
* \return la carga de los personass .
*
*/

void graficoBarras(Epersona lista[],int cantidad)
{
    int hasta18=0,de19a35=0,mayor35=0,mayor,i,flag;

    for(i=0; i<cantidad; i++)
    {
        while(lista[i].edad != -1)
        {
            if(lista[i].edad <= 18)
            {
                hasta18++;
                break;
            }
            else
            {
                if(lista[i].edad > 35)
                {
                    mayor35++;
                    break;
                }
                else
                {
                    de19a35++;
                    break;
                }
            }

        }
    }


    if(hasta18 >= de19a35 && hasta18 >= mayor35)
    {
        mayor = hasta18;
    }
    else
    {
        if(de19a35 >= hasta18 && de19a35 >= mayor35)
        {
            mayor = de19a35;
        }
        else
        {
            mayor = mayor35;
        }
    }

    for(i=mayor; i>0; i--)
    {

        if(i<= hasta18)
        {
            printf("    *");
        }
        if(i<= de19a35)
        {
            flag=1;
            printf("\t  *");
        }
        if(i<= mayor35)
        {
            if(flag==1)
            {
                printf("\t *");
            }
            else
            {
                printf("\t\t *");
            }
        }
        printf("\n");
    }

    printf("\n  |<18\t19-35\t>35");

}
int buscarRepeticion(Epersona personas[], int dato)
{
    int i=0;
    for(i=0; i<E; i++)
    {
        if(personas[i].DNI==dato && personas[i].estados==1)
        {
            return 1;
        }
    }
    return dato;
}



