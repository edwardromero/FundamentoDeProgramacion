#include <stdio.h>
#include <stdlib.h>



int busqueda_binaria(int valores[] ,int valor, int tamano);
int busqueda_binaria_(int valores[], int valor, int limI, int limS);
int main()
{
    int i;
    printf("cuantos numeros desea ingresar? ");
    scanf("%d",&i);

    int valores[i];
    int valor;

    for(valor=0;valor<i;valor++)
    {
        printf("inserte el %d valor: ",valor+1);
        scanf("%d",&valores[valor]);
    }
    valor = 0;
    printf("inserte el valor que desea buscar ");
    scanf("%d",&valor);

    printf("el indice del %d es %d",valor,busqueda_binaria(valores,valor,i));


    return 0;
}

busqueda_binaria(int valores[], int valor, int tamano)
{

    return busqueda_binaria_(valores, valor, 0, tamano-1);

}

busqueda_binaria_(int valores[], int valor, int limI, int limS)
{
    int i_pivote=(limS+limI)/2;

    if (limI>limS)
        return -1;

    if(valores[i_pivote] == valor)
        return i_pivote;

    if(valores[i_pivote]<valor)
        return busqueda_binaria_(valores, valor, i_pivote+1,limS);

    return busqueda_binaria_(valores, valor, limI, i_pivote-1);
}
