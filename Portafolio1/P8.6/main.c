#include <stdio.h>
#include <stdlib.h>

void convertir(int numero, int base);

int main()
{
    int base, numero;
    printf("este programa sirve para cambiar bases desde base 2 abase 16\n");
    printf("inserte a que base desea convertir: ");
    scanf("%d",&base);
    printf("inserte el numero que desea convertir a base %d: ",base);
    scanf("%d",&numero);

    convertir(numero, base);
    return 0;
}

void convertir(int numero, int base)
{
    int residuo;

    if(numero/base==0)
        return numero%base;

    residuo=numero%base;
    numero=numero/base;

    convertir(numero,base);


}
