#include <stdio.h>
#include <stdlib.h>

float Base(int num,float total);
int factorial(int n);
int main()
{
    int numero;
    float total=1;
    printf("este programa sirve para calcular la base e\n");
    printf("a partir de un numero dado n");
    printf("inserte el numero n: ");
    scanf("%d",&numero);
    printf("el resultado es: %d",Base(numero,total));
    return 0;
}

float Base(int num,float total)
{
    if(num==1)
        return 1;

    total=total + 1/factorial(num);
    return Base(num-1,total);



}

int factorial(int n)
{
    int fact=1, i;
    for(i=1;i<n;i++)
        fact = fact * i;
    return fact;
}
