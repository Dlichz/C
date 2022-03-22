/*
Encontrar la suma más grande posible con los elementos del arreglo
*/
#include <stdio.h>

int main(){
    int mayor, aux, num1, num2, i,j;
    int arreglo[]={18,2,9,4};
    mayor = 0;
    for (i = 0; i <4; i++)
    {
        for (j = 0; j < 4; j++)
        {
          aux = arreglo[i]+arreglo[j];
          if (aux>mayor)
          {
              mayor = aux;
              num1 = i;
              num2 = j;
          }
           
        }
                   
    }
    printf("La suma mayor es %d: ",arreglo[num1]);
    printf("La suma mayor es %d: ",arreglo[num2]);
    
}
