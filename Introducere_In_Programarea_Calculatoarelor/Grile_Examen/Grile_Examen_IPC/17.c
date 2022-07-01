#include<stdio.h>

void main(void){
    int i,j=0;
    for(i=1;i<11;i+=2){
        j++;
        if(i==7) break;
    }

    printf("%d", j);
}

