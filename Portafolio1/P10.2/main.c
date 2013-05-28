#include <stdio.h>
#include <stdlib.h>

int mediana(int tamano, int Arreglo[]);
int main()
{
    printf("este programa sirve para calcular la mediana de un vector\n");
    int n,i;
    printf("inserte cuantos elementos tendra el vector: ");
    scanf("%d",&n);
    int Arreglo[n];
    for(i=0;i<n;i++)
    {
        printf("inserte el elemento %d: ",i+1);
        scanf("%d",&Arreglo[i]);
    }
    printf("la mediana es %d",mediana(i,Arreglo[i+1]));
    return 0;
}

int mediana(int tamano, int Arreglo[])
{
    if(tamano==0)
        return 0;

    return Arreglo[tamano] + mediana(tamano-1,Arreglo[tamano]);
}
