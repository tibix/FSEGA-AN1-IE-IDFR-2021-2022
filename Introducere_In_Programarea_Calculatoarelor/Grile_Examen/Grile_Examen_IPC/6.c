#include<stdio.h>
#include<string.h>
#define TRACE { printf("Executing %s line %d\n", __FILE__, __LINE__); }

void main(void){
    char *s,*t,*u;
    int j,x;

    gets(s); //citeste input de la tastatura
    for(x=0,j=0;s[j];t=&s[j],u=t+1,u[0]==t[0]?x=1:0,j++);

    printf("%d",x);
}

