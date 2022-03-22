# Arrays

Un array es un conjunto de variables del mismo tipo que tienen el mismo nombre y se diferencian en el índice.

Para declarar un arreglos, definimos el tipo de dato y especificamos el nombre del arreglo seguido de unos corchetes[], para insertar datos, los separamos por comas.

Por ejemplo

```
int array[] = {1,2,3,4}; //Es una instrucción necesitamos poner ;
```
Para acceder a los datos del Array, lo hacemos por medio del indice, el indice en los arreglos comienza con 0 hasta i-1, donde i es el tamaño del arreglo, así
tambien podemos especificar solamente el tamaño del arreglo y después ingresar los valores por medio del indice.
```
int array[4];
array[0] = 25;
array[1] = 50;
array[2] = 75;
array[3] = 100;
```

## Ejercicios para la clase

1.- Escribir un programa en el cual se ingresen cuatro números, calcular e informar la suma de los dos primeros, la resta absoluta de los ultimos
y el producto de los extremos.

2.- Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero.
Print the decimal value of each fraction on a new line with 6 places after the decimal.
Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, 10^4
though answers with absolute error of up to  are acceptable.

3.- Dado un arreglo de enteros, encontrar los numeros que den la sumatoria más grande posible
