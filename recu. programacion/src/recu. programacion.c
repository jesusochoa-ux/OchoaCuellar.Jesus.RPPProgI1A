/*
 ============================================================================
 Name        : .c
 Author      : 
 Version     : fecha 15/11
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define TAM 1

int main()
{

/*2.Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro
y su responsabilidad es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU*/

/*3.Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena.
Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"*/


int invertirCadena(char str[]);
int ordenarCaracteres(char str[]);

int main()
{
    char cadena[20] = "UTN-FRA";
    char cadena2[20] = "algoritmo";

    invertirCadena(cadena);
    printf("Ejercicio 2: \n");
    printf("%s\n\n", cadena);

    ordenarCaracteres(cadena2);
    printf("Ejercicio 3: \n");
    printf("%s\n\n", cadena2);

    return 0;
}

int invertirCadena(char str[])
{
    int todoOk = 0;
    char aux;
    int tam;
    if(str != NULL)
    {
        tam = strlen(str);
        for (int i = 0; i < tam / 2; i++)
        {
            aux = str[i];
            str[i] = str[tam - i - 1];
            str[tam - i - 1] = aux;
        }
        todoOk = 1;
    }
    return todoOk;
}

int ordenarCaracteres(char str[])
{
    int todoOk = 0;
    char aux;
    int tam;
    if(str != NULL)
    {
        tam = strlen(str);
        for(int i = 0 ; i < tam - 1 ; i++)
        {
            for(int j = i + 1 ; j < tam; j++)
            {
                if(str[i] > str[j])
                {
                    aux = str[i];
                    str[i] = str[j];
                    str[j] = aux;
                }
            }
        }
        todoOk = 1;
    }
    return todoOk;
}


}
