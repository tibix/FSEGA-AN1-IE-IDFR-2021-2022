#include <stdio.h>

void main(void){
    int i,j,k; i=1;j=1;k=2;
    while(i<6){
        k=k+i;
        i++;
        j=j+k;
        if(k==3) j--;
        else if(j==8) break;
    }

    printf("%d--%d--%d", i,j,k);
}
