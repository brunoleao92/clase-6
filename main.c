#include <stdio.h>
#include <stdlib.h>
void ordenarVectores(int[], int);
int main()
{
    int valores [10]={5,7,1,9,6,4,3,8,10,0};
    ordenarVectores(valores, 10);
    return 0;


}

void ordenarVectores(int numeros[], int tam){
    int i,j,aux;

    for(i=0;i<tam-1;i++){

    printf("para i=%d, j=%d ", numeros[i],numeros[j]);

        for(j=i+1;j<tam;j++){
            if(numeros[i]>numeros[j]){
                aux=numeros[i];
                numeros[i]=numeros[j];
                numeros[j]=aux;
            }
        }
    }



}
