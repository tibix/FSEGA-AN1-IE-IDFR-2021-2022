#include <stdio.h>
#include <stdlib.h>

void main(void){
    int m,n;
    int cmmdc(int,int);
    system("clear");
    printf("Introduceti valorile m si n: ");
    scanf("%d %d", &m, &n);
    printf("cmmdc dintre %d si %d este %d\n", m,n,cmmdc(m,n));
}

int cmmdc(int m, int n){
    if(!n) return m;
    else return cmmdc(n,m%n);
}