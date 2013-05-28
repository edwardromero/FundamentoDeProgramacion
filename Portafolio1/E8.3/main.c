#include <stdio.h>
#include <stdlib.h>

long f(int n);
int main()
{
    printf("%d \n",f(5));
    return 0;
}

long f(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return 3 * f(n-2) + 2* f(n-1);
}
