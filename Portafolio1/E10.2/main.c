#include <stdio.h>
#include <stdlib.h>

int Eliminar_ (int tamano, int arreglo[]);
int Eliminar (int arreglo[],int limI, int limS);

int main()
{
    int n,i;
    printf("este programa sirve para eliminar los numeros repedidos de un arreglo!\n");
    printf("cuantos numeros tendra el arreglo? ");
    scanf("%d",&n);
    int arreglo[n];
    for(i=0;i<n;i++)
    {
        printf("inserte el %d numero: ",i+1);
        scanf("%d",&arreglo[i]);
    }

    Eliminar_(n,arreglo[n]);
    for(i=0;i<n;i++)
    {
        if(arreglo[n]==0)
            i++;
        if(i<n)
            break;
        printf("%d  ",arreglo[i]);
    }

    return 0;
}

int Eliminar_ (int tamano, int arreglo[])
{
    Eliminar(arreglo[tamano],0,tamano-1);
}

int Eliminar (int arreglo[],int limI, int limS)
{
    int pivote;
    if(limI==limS)
        return 1;

    for(pivote=limS;pivote>=limI;pivote--)
    {
        if(arreglo[limI]==arreglo[pivote])
            arreglo[pivote]=0;
    }
    Eliminar(arreglo[],limI+1,limS);
}
