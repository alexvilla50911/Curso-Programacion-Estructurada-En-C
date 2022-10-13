#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Apuntadores \n");


    float val;

    float *apVal;

    apVal = &val;

    *apVal =3.1416;

    printf("El valor de la variable val es: %f  \n", val);

    return 0;








}

int new main ()
{
    int *p;
/*
estamos diciendo: compu dame un espacio en memoria en donde puedo almacenar una direccion de alguna variable de tipo integer
 */

int a = 5;
/*
Aqui decimos: compu crea un espacio en la memoria del tamaño de un integer y almacena el valor 5 en el
*/

p = a;
/*
Aqui decimos: compu haz que la direccion donde esta la variable llamada a se almacene en mi variable puntero p
*/

*p = 10;
/*
Aqui lo que decimos es: compu cambia el valor que se encuentra en la direccion que aparece en p y cambialo por el valor 10
*/

printf( "%i", &a );
/*
Aqui lo que decimos es: compu imprime en pantalla la direccion en memoria de mi variable llamada a
*/
}
