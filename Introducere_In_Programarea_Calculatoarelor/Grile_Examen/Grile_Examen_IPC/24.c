#include<stdio.h>

void main(void){
    int a=1;int b=2;int c=3;int d=4;int e=5;int f=6;
    a = a > b ? a : c > d ? e : f; //primul test false, deci se merge pe al doilea test care este tot fals, deci se afiseaza ultima varianta
    printf("%d", a);

}
