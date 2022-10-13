#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Cadena de caracteres: \n");

    char nameC[50];

    int size;

    printf("Ingresa el nombre con gets: \n \n");

    gets(nameC);

    printf("El nombre es: \n \n");
    puts(nameC);                //PUTS IMPRIME TODO LO QUE ESTE DENTRO DE LA VARIABLE ( NAME C)

    size = strlen(nameC);

    printf("\n El tamaño de la cadena es: \n %i \n", size);
    return 0;
}
