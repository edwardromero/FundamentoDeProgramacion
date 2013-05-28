#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x;
    printf("este programa sirve para conseguir un polinomio (x+1)^n");
    do
    {
        printf("inserte un valor para N (positivo y menor que 10)\n");
        scanf("%d",&x);

        if(n>=10 || n<=0)
            printf("error");
        else
            break;
    }while(1);

    printf("el resultado es ");
    return 0;
}
