/*escriba versiones de las funciones de biblioteca strncmp, que
operan con hasta los n primeros caracteres fr dud argumentos de
cadena. Por ejemplo strncpy()s,t,n) copia hasta n caracteres
de t hacia s. En el
apendice B se exponen descripciones mas completas*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main ()
{
  char *str1 = "carlos";
  char *str2 = "carlosAB";
  int ret;

  ret = strncmp(str1, str2, 8);

  /*Esto comparará las dos cadenas
  hasta 6 caracteres de largo */
}
