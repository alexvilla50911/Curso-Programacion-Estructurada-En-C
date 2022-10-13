#include <stdio.h>
#include <stdlib.h>

int main()
{

//USO DE IF
   // printf("Condicion IF \n");

    //float valA, valB, valC;

    //valA = valB = 100;

    //printf("Primera condicion \n");

    //if(valA == valB)                                //SI HAY SOLO 1 LIENA DE CODIGO, SE PUEDE NO!!! USAR CORCHETES
      //  printf("Ambos valores son iguales \n");


    //printf("Segunda Condicion \n");

    //if(valA == valB)
    //{
        //printf("Ambos valores son iguales \n");
        //valC = valA + valB;
      //  printf("Ademas la suma de ambos numeros es: %f", valC);         //CON MAS DE 1 LINEA DE CODIGO, ES NECESARIO LOS CORCHETES {}
    //}






    //USO DE IF ELSE / IF ELSE!!!!!!


  //  printf("Condicion if else, else if \n \n");

   // float valA, valB, valC;
   // valA = 50;
   // valB = 100;
   // valC = 150;

   // printf("Condicion: \n");

   // if(valA == valB)
     //   printf("No se va a cumplir la condicion \n");
   // else if(valB == valC)                               //SI NO
     //   printf("Tampoco se va a cumplir esta ");
    //else                                                //SI NO
    //{
      //  printf("Ninguna condicion se cumplio \n");
       // printf("Despues de esta linea el programa va a terminar");
    //}


    //RETO

    int valA;
    printf("Adivina que numero pienso del 1-10 \n \n");
    scanf(" %i",&valA);

    if(valA == 5)                                       //SI VAR A VALE 5, ENTONCES SI GANAS.         SI NO VALE 5 PIERDES!
        printf("MUY BIEN! ERES EL GANADOR \n \n");
    else //sino
        printf("No acertaste\n\n");
}

