//añadimos la libreria para poder imprimir en consola, el .h significa HEADER (cabeza)
//std significa standart
//io significa in, out (entrada, salida)
#include <stdio.h>

//Esta libreria hará que mi programa se congele
#include <stdlib.h>

//Declaramos el metodo principal en la clase para c
int main(){

	//Declaramos una variable del tipo short, esta se usa para un int
	//Realmente no importa el valor que le demos, es solo para que se vea grande :v
	short unEntero = 1997;

	//Declaramos una variable de tipo entero, se diferencia de short por el tamaño, int es más grande
	//No importa el valor
	int otroEntero = 2005;

	//Declaramos una variable de tipo unsigned int, es decir un entero siempre mayor a 0
	//No interesa el valor
	unsigned int enteroPositivo = 2010;

	//Declaramos un apuntador a un entero
	//Valor innecesario
	int *enteroSenialado;

	//Le damos al apuntador una direccion, en este caso la del int otroEntero
	enteroSenialado = &otroEntero;

	//Declaramos una variable de tipo char (caracter)
	char palabra = 'w';

	//Declaramos una variable del tipo float (Decimal)
	float numeroDecimal = 0.3333;

	//Declaramos una variable del tipo double el cual nos permite usar enteros grandes
	double enterote = 50000000000;

	//Llamamos a la funcion printf(print format) para imprimir el tamaño en entero short según el metodo sizeof
	//sizeof regresa el tamaño que ocupa en memoria en bytes del tipo de la variable
	printf("El tipo short tiene tamanio %d\n", sizeof(unEntero));

	//Ahora llamamos denuevo a print, para imprimir el tamaño del int de la variable
	printf("El tipo int tiene tamanio %d\n", sizeof(otroEntero));

	//Ahora imprimimos al entero positivo
	//A este entero no se le puede sustraer más alla del valor de su numero
	//Aqui se cambia el d por u, ya que el d imprime un entero
	//u imprime un unsigned, basicamente lo mismo 
	//pero solo valores positivos
	printf("El tipo unsigned int tiene tamanio %u\n", sizeof(enteroPositivo));

	//Imprimimos en bytes el tamaño del apuntador
	printf("El tipo int del apuntador tiene tamanio %d\n", sizeof(enteroSenialado));

	//Imprimimos el tamaño en bytes de un char
	printf("El tipo char tiene tamanio %d\n", sizeof(palabra));

	//Imprimimos el tamaño en bytes de un tipo float
	printf("El tipo float tiene tamanio %d\n", sizeof(numeroDecimal));

	//Imprimimos el tamaño en bytes del tipo double
	printf("El tipo double tiene tamanio %d\n", sizeof(enterote));

	//Metodo que viene del segundo include y congela el programa para que no se cierre
	//al instante
	system("PAUSE");

	//Regresamos el valor 0 por defecto en caso de que no haya habido ningun error durante la ejecucion
	return 0;

}