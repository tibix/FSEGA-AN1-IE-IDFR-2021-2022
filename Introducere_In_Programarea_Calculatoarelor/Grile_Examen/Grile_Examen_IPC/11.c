#include<stdio.h>
#define NEWLINE printf("\n");

void main(void){
    int nr,n,i,j,x,b[20];
    int v;
    int a[3][3]={{7,1,7},{-7,7,0},{2,4,11}};
    n=3;x=7;
    for(i=0;i<n;i++){
        nr=0;
        for(j=0;j<n;j++)
            if(a[i][j]==x) nr++;
        b[i]=nr;
        printf("%d ", b[i]);
    }


    NEWLINE

    for(v=0;v<20;v++){
        printf("%d ", b[v]);
    }
}
