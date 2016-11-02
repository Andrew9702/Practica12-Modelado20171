//incluye la libreria que permite imprimir en la pantalla
#include <stdio.h>

//Esta libreria hará que mi programa se cierre al instante
#include <stdlib.h>

//Creamos funcion que no regresa nada y recibe dos apuntadores
void swap(int *apuntoAqui, int *apuntoAlla){
	//Primero obtenemos a que estan apuntando (Los parametros que recibe el metodo)(Primero apuntoAqui)
	int valorA = *apuntoAqui;
	//Luego apuntoAlla (que es el parametro que recibe el metodo)
	int valorB = *apuntoAlla;

	//Luego apuntamos el primer apuntador al segundo valor
	*apuntoAqui = *apuntoAlla;

	//Apuntamos el segundo apuntador al primer valor
	*apuntoAlla = (int*) valorA;

	//Le damos al valor A, el valor del apuntador A
	valorA = *apuntoAqui;

	//Le damos al valor B, el valor del apuntador B
	valorB = *apuntoAlla;
}

int main(){
	//Se crea entero a con un valor de 100
	int a = 100;

	//Se crea entero b con valor de 10
	int b = 10;

	//Se crea un apuntador para a
	int *teamA;

	//Se crea apuntador para b
	int *teamB;

	//Apuntamos el apuntador a la variable a
	//Se puede hacer en la misma linea
	//se ve más claro por el momento
	teamA = &a;

	//Apuntamos a la variable b
	//Lo mismo
	teamB = &b;

	//Imprimimos los valores originales
	printf("los valores originales son: el de a= %d y el de b= %d\n", a, b);

	//Mandamos a llamar a la funcion swap que modificará los valores
	swap(teamA, teamB);

	//Imprimos los valores despues de swap, para ver si efectivamente los cambio
	printf("los valores alterados son el de a= %d y el de b= %d\n", a, b);

	//Metodo que viene del segundo include y congela el programa para que no se cierre
	//al instante
	system("PAUSE");

	//Regresamos el valor 0 por defecto en caso de que no haya habido ningun error durante la ejecucion
	return 0;
}