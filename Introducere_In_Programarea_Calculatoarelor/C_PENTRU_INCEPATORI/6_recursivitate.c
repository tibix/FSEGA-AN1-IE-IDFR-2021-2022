#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    if(!n) return 1;
    else return(n*fact(n-1));
}

void main(void){
    int n;
    int fact(int);
    system("clear");
    printf("Introduceti un numar: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, fact(n));
}