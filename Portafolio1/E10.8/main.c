#include <stdio.h>
#include <stdlib.h>
#define column 4

void Ordenar (int filas, int columnas, int Arreglo[filas][columnas],int pivote);


int main()
{
    int i,j,filas;
    printf("Este programa organiza un array con las fechas de nacimiento\n");
    printf("cuantas filas tiene el array? ");
    scanf("%d",&filas);

    int Arreglo[filas][column];

    for(i=0;i<filas;i++)
    {
        printf("inserte la %d fecha (en formado DD/MM/YYYY): ",i+1);
        scanf("%d/%d/%d",&Arreglo[filas][0],&Arreglo[filas][1],&Arreglo[filas][2]);
        Arreglo[filas][4]=(Arreglo[filas][1])+(Arreglo[filas][1]*30)+(Arreglo[filas][1]*365);
    }
    return 0;

    Ordenar(filas,column,Arreglo[filas][column], 0);
    for(i=0;i<filas;i++)
    {
        printf("%d/%d/%d\n",Arreglo[i][0],Arreglo[i][1],Arreglo[i][2]);
    }
}

void Ordenar (int filas, int columnas, int Arreglo[filas][columnas], int pivote)
{
    if(pivote==filas)
        return;
    int i;
    for(i=pivote+1;i<filas;i++)
    {
        if(Arreglo[pivote][4]<Arreglo[i][4])
        {
            int burbuja[filas];
            int j;
            for(j=0;j<4;j++)
            {
                burbuja[j]=Arreglo[pivote][j];
                Arreglo[pivote][j]=Arreglo[i][j];
                Arreglo[i][j]=burbuja[j];
            }
        }
    }
    return Ordenar(filas,columnas,Arreglo[filas][columnas],pivote+1);
}

