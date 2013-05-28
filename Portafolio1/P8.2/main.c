#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Palindromo_(char cadena[50], int longitud);
int Palindromo(char cadena[50], int limI,int limS);

int main()
{
    int i;
    char cadena[50];
    printf("este programa detecta si una palabra es un palindromo o no\n");

    do
    {
        printf("inserte la cadena de caracteres que desea verificar si es un palindromo\n");
        for(i=0;i<50;i++)
        {
            gets(cadena[i]);
            if(cadena[i]=='\0')
                break;
        }

        if(Palindromo_(cadena[50],strlen(cadena))==1)
        {
            printf("la cadena insertada es un palindromo");
            break;
        }
        else
            printf("error, la cadena no es un palindromo, intentelo de nuevo\n");

    }while(1);
    return 0;
}

int Palindromo_ (char cadena[50], int longitud)
{
    return Palindromo(cadena, 0, longitud-1);
}

int Palindromo(char cadena[50], int limI,int limS)
{
    printf("hola\n");
    if(limI>=limS)
        return 1;

    if(cadena[limI]==' ')
        limI++;
    if(cadena[limS]==' ')
        limS--;

    if(cadena[limI]==cadena[limS])
        return Palindromo(cadena[50], limI+1, limS-1);
}
