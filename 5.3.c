/* escriba una version con apuntadores de la funcion strcat que se muestra
en el capitulo 2 strcat(s,t) copia la cadena t al fina de s */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strcat_(char *dest,  const char *src);

main()
{
    char cad1[20]="car";
    char cad2[5]="los";

    printf("%s",strcat_(cad1,cad2));
}

char *strcat_(char *dest,  const char *src)
{
    const char *p;
    char *q;

    for (q = dest; *q != '\0'; q++)
       ;

    for(p = src; *p != '\0'; p++, q++)
       *q = *p;

    *q = '\0';

    return dest;
}

/*5.4
5.5
5.6*/
