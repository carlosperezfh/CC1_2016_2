/* escriba una funcion strend(s,t) que regresa 1 si
la cadena t se presenta al final de la cadena s,
 y cero si no es asi.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int longitud(char *cadena);
int verificar(char *cadena, char *subcadena);

main()
{
    char cad1[20]="carlos";
    char cad2[5]="kkkkk";

    //longitud(cad1);
    verificar(cad1,cad2);

}

int longitud(char *cadena)
{
   int i = 0;

   while(cadena[ i ]!='\0')
        i++;

   return i;
}

int verificar(char *cadena, char *subcadena)
{
    int i, j;
    int l_cadena = longitud(cadena);
    int l_subcadena = longitud(subcadena);

    if(l_cadena < l_subcadena)
      return 0;
    if(cadena[ 0 ]=='\0' && subcadena[ 0 ]=='\0')
       return 1;

    for(i=0; i < l_cadena; i++)
       if(cadena[ i ]==subcadena[ 0 ])
       {
           if(l_cadena-i < l_subcadena)
              return 0;

            for(j=0; j < l_subcadena; j++)
                 if(cadena[ i+j ]!=subcadena[ j ])
                    break;

            if(j==l_subcadena)
               return 1;
       }

    return 0;
}
