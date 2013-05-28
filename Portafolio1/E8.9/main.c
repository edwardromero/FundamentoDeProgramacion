#include <stdio.h>
#include <stdlib.h>

int f(int n);
int main()
{
    printf("Hello world!\n");
    f(5);
    return 0;
}

int f(int n)
{
    if(n==0)
        return 1;
    else if (n==1)
        return 2;
    else
        return 2*f(n-2)+f(n-1);
}
