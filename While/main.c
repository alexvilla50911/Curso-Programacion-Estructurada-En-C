#include <stdio.h>
#include <stdlib.h>

int main()
{
  int ciclo;    //NO ASIGNO VALOR ASI QUE EN SI, VALE 0

  while(ciclo < 10)    //MIEENTRAS QUE CICLO (0) SEA MENOR A 10
  {
      printf("#\n");    //IMPRIME EL # 10 VECES)
      ciclo++;          //COMO CICLO VALE 0, ENTONCES SE REPITE EL CICLO 10 VECES Y SE AGREGA 1 A LA SUMA
  }
}
