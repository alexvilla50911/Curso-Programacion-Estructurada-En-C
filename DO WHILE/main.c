#include <stdio.h>
#include <stdlib.h>

int main()
{

    //RETO: IMPRIMIR 100 NUMEROS NATURALES CON DO WHILE


    printf("Los numeros naturales del 1-100 \n");

    int numeros = 0;

    do
    {
        printf("%i \n",numeros);
        numeros++;
    }while(numeros <= 100 );        //IMRPIME LOS 100 NUMEROS, MIENTRAS NUMEROS SEA MENOR IGUAL A 100
                                    //numeros vale 0, entonces si es menor a 100 entonces se imprimen





    //printf("Iterador DO WHIILE \n");

    //char answer = 'q';          //VARIABLE INICIALIZADA CON VALOR DE 'q'
    //char value;                 //VARIABLE A LA QUE EL USUSARIO LE DA EL VALOR DE CUALQUIER LETRA


    //do          //HAZ
    //{
      //  printf("Ingresa una letra: ");
        //scanf("%c",&value);             //LE PEDIMOS AL USUSARIO QUE DIGITE UNA LETRA
    //}while(value != answer);           //SI LA LERTRA PUESTA POR EL USUSARIO NO ES IGUAL (!=) A LA LETRA Q (variable)
                                        //SE REPITE EL CICLO HASTA QUE PONGA LA LETRA Q EN LA CONSOLA
    //printf("Coinciden as letras %c == %c",value,answer);
    //CUANDO COINCIDEN, SE IMPRIME ESTO

}
