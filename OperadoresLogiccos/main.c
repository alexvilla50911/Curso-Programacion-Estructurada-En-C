#include <stdio.h>
#include <stdlib.h>

int main()
{

    //RETO DE OPERADORES RELACIONEALES Y LOGICOS :D

    float Var1, Var2;

    printf("Si me das dos numeros enteros, te dare el menor entre ellos! Ponme a prueba: \n \n");

    printf("Ingresa el primer numero: ");
    scanf(" %f",&Var1 );

    printf("Ingresa el segundo numero: ");
    scanf(" %f", &Var2);

    printf("El numero menor es: \n");
    if(Var1 < Var2)
        printf("%f ",Var1);
    else
        printf("%f",Var2);










   //float valorA, valorB, valorC;

   //valorA = 5;
   //valorB = valorC = 10;


   //if((valorA < valorB) && (valorB == valorC))
    //{
      //  printf("Se cumplieron las dos condiciones \n");
    //}
    //else
    //{
      //  printf("No se cumplieron las condiciones \n");
    //}



    //if((valorA > valorB) || (valorA <= valorC))
    //{
      //  printf("Se cumplieron por lo menos una de las dos condiciones \n");
    //}
    //else
    //{
      //  printf("No se cumplieron las condiciones \n");
    //}
}
