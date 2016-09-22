#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1000

int getline_(char *s[], int max);

/*find: imprime lineas que coinciden con el patron del 1er argumento*/

main(int argc, char *argv[])
{
    char line[MAXLINE];
    int found=0;

    if (argc !=2)
        printf("Uso: find patrón \n");
    else
        while(getline_(line,MAXLINE)>0)
            if(strstr(line,argv[1]) != NULL){
                printf("%s",line);
                found++;
            }
    return found;
}

int getline_(char *s[], int max)
{
    int c,i;
    //c=line;

    i=0;
    while(--max > 0 && (c=getchar()) != EOF && c!='\n')
        s[i++]=c;
    if(c=='\n')
        s[i++]=c;
    s[i]='\0';
    return i;
}


