/* escriba una funcion strend(s,t) que regresa 1 si
la cadena t se presenta al final de la cadena s,
 y cero si no es asi.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strend_(char *dest,  const char *src);

main()
{
    char cad1[20]="carlos";
    char cad2[5]="los";

    printf("%s",strend_(cad1,cad2));
}

char *strend_(char *dest,  const char *src)

{
    const char *p;
    char *q;
    int len,lens,final,finals,i,j;

    for (q = dest; *q != '\0'; q++)
       ;

    for(p = src; *p != '\0'; p++, q++)
       *q = *p;

    *q = '\0';
    //for i=0;*q != '\0';

    len=strlen(dest);
    lens=strlen(src);
    final=len;
    finals=lens;
    for (i=final;i>=0;--i){
        for (j=finals;j>=0;--j){
            printf("%c\n",q[i]);
            if (q[i]==p[j]){
                //retu=1
                //printf("1");
                return "1";
                break;

            }
            /*if (q[i]!=p[j]){
                //printf("0");
                return "0";
            }*/
            else return "0";
        }
    }


    //printf("%d\n",len);

    //return dest;
}

