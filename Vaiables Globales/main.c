#include <stdio.h>
#include <stdlib.h>

char alumno [] = {"Alejandro"};
int calificacion;
int aprobaste = 70;

void carros()
{
    printf("APROBASTE!!");
}


int main ()
{
    printf("CONSULTA DE CALIFICACIONES FINALES: \n");
    printf("\n \n");

    printf("Ingresa el nombre del alumno: ");
    scanf("%c", &alumno);

    printf("Ingresa su calificacion final en banner: ");
    scanf(" %i",&calificacion);


    for(calificacion = calificacion; calificacion >= 100; calificacion == calificacion);

    if(calificacion > 70)
    {
        printf("MUY BIEN! APROBASTE CON %i \n");
    } else
    printf("Reprobaste con %i",calificacion);


}

































//}




//char publicText [] = {"Texto en una variable global"}; //VARIABLE GLOBAL

//void check() //FUNCION CHECK
//{
  //  printf("\n Imprimir desde la funcion: check");

    //printf("Variable global:");
    //printf(" %s",publicText);

    //printf("Variable local: \n");
//    printf("s",privateText);
//}

//int main() //FUNCION
//{
 //   printf("Variables Globales!\n");

  //  char privateText [] = {"Texto en variable local  \n"};

    //printf("Variable global: \n");
    //printf(" %s",publicText);

    //printf("Variable local: \n");
    //printf("%s", privateText);

    //check();

    //return 0;
//}
