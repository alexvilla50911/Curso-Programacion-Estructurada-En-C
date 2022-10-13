#include <stdio.h>
#include <stdlib.h>

int main()
{

    //RETO!!!!!

  printf("Multiplicar todos los valores: \n \n");
  printf("Ingresa los valores: \n \n");

  int numerosE[5];      //DEFINIMOS QUE EL ARREGLO TIENE 5 ESPACIOS CONTANDO DEDE EL 0 AL 4
  int resultado;        //VARIABLE DE RESULTADO
  int numerito = 5;     //INICIALIZAMOS VARIABLE PARA EL FOR


  printf("Valor[0]: " );
  scanf("%i", &numerosE[0]);        //HACEMOS QYUE EL USUSARIO DIJITE EN EL TECLADO EL VALOR DE CADA VALOR

  printf("Valor[1]: " );            //HACEMOS QYUE EL USUSARIO DIJITE EN EL TECLADO EL VALOR DE CADA VALOR
  scanf("%i", &numerosE[1]);

  printf("Valor[2]: " );            //HACEMOS QYUE EL USUSARIO DIJITE EN EL TECLADO EL VALOR DE CADA VALOR
  scanf("%i", &numerosE[2]);

  printf("Valor[3]: " );            //HACEMOS QYUE EL USUSARIO DIJITE EN EL TECLADO EL VALOR DE CADA VALOR
  scanf("%i", &numerosE[3]);

  printf("Valor[4]: " );            //HACEMOS QYUE EL USUSARIO DIJITE EN EL TECLADO EL VALOR DE CADA VALOR
  scanf("%i", &numerosE[4]);

  for(int i = 0; i < numerito; i++)     //DECIMOS:   SI i VALE 0, Y SI i ES MENOR A NUMERITO (5) ENTONCES SE SUMA 1 A i que vale 0
  {
     resultado = numerosE[0] * numerosE[1] * numerosE[2] * numerosE[3] * numerosE[4];       //LA VARIABLE RESULTADO ES IGUAL A LA MULTIPLICACION DE TODOS LOS VALORES
  }

 printf("El resutlado final es: %i \n \n",resultado);       //IMPRIMIMOS EL ENTERO %i Y LA VARIABLE RESULTADO




   // printf("Arreglos unidimensionales\n");

    //int intigerList[3];  //SON 3 LUGARES DENTRO DEL ARREGLO
    //intigerList[0] = 4; //1
    //intigerList [1] = 5; //2
    //intigerList [2] = 5;  //3

    //float floatList[] = {23.4, 34.5, 45.6, 21.8, 56.7}; // 0, 1, 2, 3, 4 ULTIMO FLOTANTE 56.7
                        //0    //1   //2   //3   //4
    //char charList[4]; // HAY 4 LUGARES DENTRO DEL ARREGLO
    //charList[0] = 'A';
    //charList[1] = 'L';
    //charList[2] = 'E';
    //charList[3] = 'X';

    //printf("\n Mi primer entero: \t \t %i", intigerList[0]);    //IMPRIME EL 0 PPR QUE VALE 4 Y SE CUENTA DESDE 0
    //printf("\n Mi ultimo flotante: \t \t %f", floatList[4]);    //IMPRIME EL 56.7 POR QUE ES EL 4 EN EL ARREGLO
    //printf("\n Mi lista de caracteres: \t \t %c%c%c%c", charList[0],charList[1],charList[2],charList[3]);   //IMPRIME LOS 4 CARACTERES DEL ARREGLO DESDE 0



}
