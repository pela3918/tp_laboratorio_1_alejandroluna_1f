#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int edad, estados;
    char nombres[50];
    int  DNI;
} Epersona;

int validarnum(char numero[]);
int esNumerico(char str[]) ;
int getStringNumeros(char mensaje[],char input[]);
void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int esSoloLetras(char str[]);
void inicializar( Epersona [], int tam);
int buscarRepeticion(Epersona personas[], int dato);
void cargarpersona( Epersona [], int tam);
void eliminarpersonas(Epersona [], int tam);
void ordenarpersonas( Epersona[], int tam);
void graficoBarras(Epersona lista[],int);




#endif // FUNCIONES_H_INCLUDED

