//compara las cadenas s y t. regresa negativo si s<t
//0 si  si s = t, valor positivo si s>t

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strncmp_(char *s, char *t, int n);

int main()
{
    int n;
    char s[10];
    char t[10];
    char *s_="ca";
    char *t_="car";
    n=2;


    strncmp_(s_, t_,n);
}

int strncmp_(char *s, char *t, int n)
{
    int i;
    i=0;
    for ( ; *s == *t && i<n; s++, t++, i++){

        if (*s == '\0')
        return 0;
	}
    return *s - *t;
}

