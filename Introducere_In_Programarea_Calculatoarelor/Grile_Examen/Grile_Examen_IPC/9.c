#include <stdio.h>

void main(void){
    int i,n,k,x,v[7]={5,14,-3,8,-1};
    n=5; x=v[0]; //x=5
    for(k=1;k<n;k++) v[k-1]=v[k];
    printf("%d - %d\n", n,x);
    v[n-1]=x;
    for(i=0;i<7;i++){
        printf("%d ", v[i]);
    }
}
