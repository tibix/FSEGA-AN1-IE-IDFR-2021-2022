#include<stdio.h>

void main(void){
    int n,i;
    i=1;
    scanf("%d", &n);
    while(n) i=i*(n--);

    printf("%d", n);
}
