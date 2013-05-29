#include <stdio.h>
#include <stdlib.h>

int SSort_(int Arreglo[], int tamano);
void SSrot (int Arreglo[], int LimI, int LimS);
int main()
{
    printf("este programa ordena un arreglo usando seleccion sort \n");
    int n,j;
    printf("cuantos valores posee el arreglo? ");
    scanf("%d",&n);
    int Arreglo[n];
    for(j=0;j<n;j++)
    {
        printf("inserte el numero %d ",j+1);
        scanf("%d",&Arreglo[j]);
    }
    SSort_(Arreglo[n],n);

    for(j=0;j<n;j++)
        printf("%d \t",Arreglo[j]);
    return 0;
}

int SSort_(int Arreglo[], int tamano)
{

    SSrot(Arreglo[tamano],0,tamano-1);
}

void SSrot (int Arreglo[], int LimI, int LimS)
{
    if(LimI==LimS-1)
        return 1;

    int j, temporal=Arreglo[LimI], i_temporal;
    for(j=LimI+1;j<LimS;j++)
    {
        if(temporal>Arreglo[j])
        {
            temporal=Arreglo[j];
            i_temporal=j;
        }
    }
    Arreglo[i_temporal]=Arreglo[LimI];
    Arreglo[LimI]=temporal;

    SSrot(Arreglo[LimS],LimI+1,LimS);
}
