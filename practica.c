#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*funcion que convierta c mayus a minus usando punteros*/

void mayusculas(char *);
void minusculas(char *);

void main(void)
{
	char string[256];

	ingreso(string);
	printf("FRASE ORIGINAL: %s\n", string);
	mayusculas(&string[0]);
	printf("MAYUSCULA: %s\n",string);
	minusculas(string);
	printf("MINUSCULA: %s\n",string);
	getch();
}

void ingreso(char *s)
{
	//clrscr();
	printf("INGRESE UNA LETRA\n");
	gets(s);
}

void mayusculas(char *s)
{
for( ;*s!='\0';s++)
	if(*s>='a' && *s<='z')
		*s-=(char)32;
}

void minusculas(char *s)
{
	while(*s!=NULL){


		if(*s>='A' && *s<='Z')
			*s+=(char)32;
			s++;
	}
}
