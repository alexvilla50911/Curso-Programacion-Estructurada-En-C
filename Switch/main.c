#include <stdio.h>
#include <stdlib.h>

int main()
{


    printf("Te encuentras en un cuento y tienes 3 caminos posibles \n");

    printf("Escribe 1 si quieres ir por el camino de dulces \n");
    printf("Escribe 2 si quieres ir por el camino de madera \n");
    printf("Escribe 3 si quieres ir por el camino de gatitos \n");

    int opciones;
    scanf(" %i",&opciones);


switch(opciones)
{
    case 1:
    printf("Escogiste el camino de dulces, agarra los que tu quiereas pinche gordo \n");
    break;

case 2:
    printf("Nmms, el de madera esta todo jodido we no te vayas a caer \n");
    break;

case 3:
    printf("Ahuevo gatitos, estan hermosos me maman jeje \n");
    break;

default:
    printf("EH DEL 1 AL 3 PENDEJO!!!! \n");
    break;
}
}

