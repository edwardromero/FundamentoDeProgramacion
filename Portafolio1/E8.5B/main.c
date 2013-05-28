#include <stdio.h>
#include <stdlib.h>

int Perm(int num);
int main()
{
    int num;
    printf("este programa sirve para decir la cantidad de permutaciones dado un conjunto n\n");

    printf("cuantos elementos tiene el conjunto? ");
    scanf("%d",&num);
    printf("%d",Perm(num));
    return 0;
}

int Perm(int num)
{
    if(num==0)
        return 1;

    return num*Perm(num-1)*Perm(num-2);
}
