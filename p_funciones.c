//Se incluyo la libreria para imprimir y escribir en consola
#include <stdio.h>

/* Declaración de funciones */

//Se declara la funcion que regresa un entero y recibe un apuntador a una funcion
//dicha funcion regresa un entero y recibe un entero
int misterio1(int (*fun) (int), int);

//Se declara la funcion que no regresa nada y recibe un apuntador a una funcion
//dicha funcion no regresa nada y recibe un entero
void misterio2(void (*fun) (int), int);

//Se declara funcion que regresa el cuadrado de un numero
int cuadrado_num(int);

//Se declara funcion que imprime el numero más una cadena
void imprime_num(int);

//Se declara funcion principal
int main()
{

  //Se declara un apuntador a una funcion que regresa un entero (Aún no se conoce a que funcion apunta)
  //La funcion a la que apunta "fun1", recibe un entero
  int (*fun1) (int);

  //Apuntador a una funcion que no regresa nada (Aun no se conoce tampoco a que funcion apunta)
  //La funcion a la cual apunta "fun2" recibe un entero
  void (*fun2) (int);

  //Ahora apuntamos "fun1" a la funcion cuadrado_num
  //Justamente esa funcion regresa el cuadrado del numero que recibe, i.e
  //Recibe un entero, regresa un entero ;) 
  fun1 = &cuadrado_num;

  //Ahora apuntamos a "fun2" a la funcion imprime_num
  //Justamente esa funcion no regresa nada (void) 
  //Recibe un entero que posteriormente va a imprimir
  fun2 = &imprime_num;

  //Esta variable es un entero(obvio)
  //Ya que "misterio" regresa un entero
  //"misterio1" recibe a "fun1", quien es un apuntador cuadrado_num
  //Finalmente var vale 9, ya que la funcion cuadrado_num toma como su parametro a "3"
  int var = misterio1(fun1, 3);

  //No esta asociado a una variable pues no regresa nada
  //"misterio2" recibe a "fun2" quien es un apuntador a imprime_num quien no regresa nada
  //Finalmente recibe a var, quien es el entero que regresa la funcion cuadrado_num
  //Que esta asociado con fun1 quien esta asociado con misterio1, quien regresa un entero, mismo que regresa cuadrado_num
  //Esta funcion va a imprimir ese entero
  misterio2(fun2, var);
}

//Funcion que regresa un entero
//Recibe un apuntador a una funcion que regresa un entero y recibe un entero
//Tambien recibe un numero entero
int misterio1(int (*fun) (int), int num)
{
    //El apuntador "fun" se encarga de ejecutar la funcion a la cual apunta 
    //Usa como parametro el entero del parametro de "misterio"
    //Dicha funcion regresa un entero, entonces como se esta regresando lo que la funcion regresa
    //Tecnicamente tambien se está regresando un entero
    return fun(num);
}

//No regresa nada
//Recibe un apuntador a una funcion la cual no regresa nada y recibe un entero
//recibe tambien un numero entero
void misterio2(void (*fun) (int), int num)
{
    //El apuntador "fun" se encarga de ejecutar la funcion a la cual apunta
    //Funcion que desconocemos pero sabemos que regresa y que recibe
    //Ejecuta con el entero del parametro de "misterio2" como parametro de la funcion a la que "fun" apunta
    fun(num);
}

//Recibe un entero
int cuadrado_num(int num)
{
    //Regresa el cuadrado del entero parametro
    return num * num;
}

//Funcion que recibe un numero
void imprime_num(int num)
{
    //Imprime la cadena "tada" y el numero del parametro
    printf("Tada: %d\n", num);
}
