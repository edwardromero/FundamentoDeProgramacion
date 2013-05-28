#include <stdio.h>
#include <stdlib.h>

int MaxArray(int Arreglo[], int n);
int main()
{
    int n=5;
    int Arreglo[5]={1,2,3,4,5};

    printf("este programa sirve apra ver el numero mas grande en un arreglo\n");
    printf("inserte el numero que desea buscar(entre 1 y 5)");
    scanf("%d",&n);
    printf("%d",MaxArray(Arreglo[5],n));
    return 0;
}

int MaxArray(int Arreglo[], int n);
{
    if(n==1)
        return n;

    return MaxArray(Arreglo[], n-1);
}
