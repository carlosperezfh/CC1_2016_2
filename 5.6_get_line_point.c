#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 1000   /*tamaño maximo de la linea de entrada*/

int getline_(char *to[], int maxline);
void copy_(char *to[], char *from[]);

/*imprime la linea de entrada mas larga*/
main()
{
	int len;		/*longitud actual de la linea*/
	int max;		/*maxima longitud vista hasta el momento*/
	char *line[MAXLINE];	/*LINEA DE ENTRADA ACTUAL*/
	char *longest[MAXLINE];	/*LA LINEA MAS LARGA SE GUARDA AQUI*/

	max=0;
	while ((len=getline_(line,MAXLINE))>0){

		if (len>max){
			max=len;
			copy_(longest,line);
		}
	}
	if(max>0)		/*hubo una linea*/
		printf("%s",longest);
	return 0;

}
/*getline: lee una linea en s, regresa su longiud*/
int getline_(char *s[],int lim)
{
	int c,i;

	for(i=0;i<lim-1 && (c=getchar()) != EOF && c!= '\n';++i){
		s[i]=c;
		//printf("%c\n",s[i]);
		//printf("%3d\n",lim);
	}
	if(c=='\n'){
		s[i]=c;
		++i;
	}

	s[i]='\0';
	printf("el valor de i es: %d\n",i);
	return i;
}
/*copy: copia from en to; supone que to es suficientemente grande*/
void copy_(char *to[], char *from[])
{
	int i;

	i=0;
	//printf("El valor de to[i] es %c\n",to[i]);
	//printf("El valor de from[i] es %c\n",to[i]);

	while ((to[i] = from[i]) != '\0'){
		//printf("El valor de to[i] es %c\n",to[i]);
		//printf("El valor de from[i] es %c\n",to[i]);
		++i;
	}
}
