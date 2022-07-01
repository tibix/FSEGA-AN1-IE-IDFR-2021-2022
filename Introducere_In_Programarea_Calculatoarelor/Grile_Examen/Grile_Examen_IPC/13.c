#include<stdio.h>

void main(void){
    int v[20],i,n,E;
    scanf("%d", &n);
    for(i=0;i<n;i++) v[i]=i%2?i:-i;
    for(i=0;i<n;i++) printf("%d ", v[i]);
    printf("\n");
    for(E=1,i=0;i<n;E*=v[i++]);
    E++;
    for(i=0;i<n;i++) printf("%d ", v[i]);
    printf("%d", E);
}
