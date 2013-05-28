#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int potencia(int num1, int num2);
int main()
{
    int num1, num2;
    printf("este programa eleva un numero a la potencia usando recursividad\n");
    printf("inserte el numero que desea elevar: ");
    scanf("%d",&num1);
    printf("inserte el exponente: ");
    scanf("%d",&num2);

    printf("el resultado de elevar %d a la %d es %d",num1,num2,potencia(num1,num2));

    return 0;
}

int potencia(int num1, int num2)
{
    if(num2==0)
        return 1;

    return num1 * potencia(num1,num2-1);
}
