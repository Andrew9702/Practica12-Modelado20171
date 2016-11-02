//incluye la libreria que permite imprimir en la pantalla
#include <stdio.h>

//Esta libreria hará que mi programa se cierre al instante
#include <stdlib.h>

//Un metodo que recorre el arreglo para imprimirlo
void imprime(int *apArreglo, int lon){
	//Declaramos un indice
	int i;
	//Recorremos el arreglo
	for ( i = 0; i < lon; i++) {
	  //Obtenemos el valor del arreglo en la posicion i
	  int valor = apArreglo[i];
	  //Imprimimos los valores
      printf("el valor del arreglo en[ %d ] es: %d\n",  i, valor);
   }
}

//Declaramos funcion para el bubble sort
void bubble_sort(int *apArreglo, int longitud){
	//Vamos a tener un indice para el arreglo
	int indice, jindice;
	//Vamos a recorrer el arreglo 
	for(indice = 0; indice<longitud; indice++){
		//Recorremos el arreglo una cantidad menor a como avance el indice
		//Si indice vale 1, un elemento(el ultimo se queda estatico) pues ya sería el mayor
		for(jindice = 0; jindice < longitud-indice; jindice++){
			//Obtenemos el valor del arreglo en la posicion del indice
			int valorEnElArreglo = apArreglo[jindice];
			//Obtenemos el valor del arreglo una posicion adelante del indice
			int valorAhead = apArreglo[jindice +1];
			//Si el valor del arreglo en la posicion del indice es mayor a
			//la que esta adelante del indice
			if(valorEnElArreglo > valorAhead){
				//modificamos el arreglo en la posicion delante del indice
				//le damos un swap con el de atras
				apArreglo[jindice] = valorAhead;
				//Al de atras lo igualamos al de adelante
				apArreglo[jindice+1] = valorEnElArreglo;
			}
		}
	}
	//Imprimimos como quedo el arreglo
	imprime(apArreglo, longitud);
}

//Declaramos la funcion principal para el programa
int main(){
	//Declaramos un arreglo gigante para probar
	int arreglo[] = {1,5,2,3,7,4,8,9,10,5,9,4,-1,9,10,66,84,-2,3,0};
	//Obtenemos el tamaño del arreglo para poder usarlo despues
	int tamanio = sizeof(arreglo)/sizeof(arreglo[0]);
	//Imprimimos el arreglo original
	imprime(arreglo,tamanio);
	//Aplicamos el algoritmo bubble sort para el mismo arreglo
	//Este lo va a imprimir una vez ordenado
	bubble_sort(arreglo,tamanio);
	//Metodo que viene del segundo include y congela el programa para que no se cierre
	//al instante
	system("PAUSE");
	//Regresamos el valor 0 por defecto en caso de que no haya habido ningun error durante la ejecucion
	return 0;
}