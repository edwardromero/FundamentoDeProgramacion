#include <stdio.h>
#include <stdlib.h>

void producto(int num1, int num2);
int main()
{
    printf("este programa multiplica con recursividad\n");
    printf("inserte el numero 1");
    scanf("%d",&num1);
    printf("inserte el numero 2");
    scanf("%d",&num2);

    producto(num1, num2);
    return 0;
}

void producto(int num1, int num2)
{
    if(num2==0)
        return 1;

    return num1 + producto(num1,num2-1);
}
