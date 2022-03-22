/*
Escribir un programa en el cual se ingresen cuatro números, calcular
e informar la suma de los dos primeros, la resta absoluta de los ultimos
y el producto de los extremos.
*/

#include <stdlib.h>
#include<stdio.h>

int main(){
    int arreglo[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%i",&arreglo[i]);
    }
    printf("Hola, estos son tus numeros\n");
    /*for (int i = 0; i < 4; i++)
    {
        printf("%d \n", arreglo[i]);
    }*/
    printf("La suma de los dos primeros numeros es: %d\n", arreglo[0]+arreglo[1]);
    printf("La resta absoluto de los dos ultimos es: %d\n", abs(arreglo[2]-arreglo[3]));
    printf("El producto de los dos ultimos es: %d\n", arreglo[2]*arreglo[3]);
}
