#include<stdio.h>

void main(void){
    int *ptr; int y[10]; int i;
    for (i=0;i<10;i++) y[i]=i;
    ptr=y; ptr+=8;
    printf("ptr=%d\n", *ptr);
}
