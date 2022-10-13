#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("iTERADORES FOR \n");

    int upperlIMIT, bottomLimit;

    printf("Imprimir en orden descendiente \n");


    printf("Ingresar limite superior: \n");
    scanf("%i",&upperlIMIT);

    printf("Ingresar limite inferior: \n");
    scanf("%i",&bottomLimit);


    for(int i = upperlIMIT; i >= bottomLimit; i--)      //INICIALISAMOS VARIABL I = LO QUE PONGA EL USUSARIO EN LIMITE SUPERIOR
    {                                                   //MIENTRAS QUE I SEA MAYORO IGUAL A LO QUE PUSO EL USUSARIO, SE VA A RESTAR 1
        printf("Numero: %i \n", i);
    }

    return 0;
}
