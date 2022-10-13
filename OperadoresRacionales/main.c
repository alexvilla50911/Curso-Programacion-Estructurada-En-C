#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("Operadores Relacionales \n");

    float valA, valB;
    valA = 5;
    valB = 10;

    if(valA < valB) //5 menor que
        printf("Pregunta 1: Cierto \n");
    else
    printf("Pregunta 1: Falso \n");

    if (valA <= valB) //5 menor igual que
        printf("Pregunta 2: Cierto \n");
    else
        printf("Pregunta 2: Falso \n");
    if(valA > valB)                     //5 MAYOR QUE
        printf("Pregunta 3: Cierto \n");
    else
        printf("Pregunta 3: Falso \n");

    if(valA >= valB)   //5 mayor igual
        printf("Pregunta 4: Cierto \n");
    else
        printf("Pregunta 4: Falso \n");

    if(valA == valB) //IGUAL QUE
        printf("Pregunta 5: Cierto \n");
    else
        printf("Pregunta 5: Falso \n");

    if(valA != valB)                        //SI SON DIFERENTES
        printf("Pregunta 6: Cierto \n");
    else
    printf("Pregunta 6: Falso \n");
}
