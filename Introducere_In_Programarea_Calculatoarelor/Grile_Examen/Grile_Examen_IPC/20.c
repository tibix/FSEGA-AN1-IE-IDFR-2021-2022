#include<stdio.h>

void main(void){
    int x;int y=1;
    for(x=0;x<=30;x++)
    {
        y=y+1; //x=0,y=2;x=1,y=3;x=2,y=4;x=3,y=5;x=4,y=6;x=5,y=7;x=6,y=8//
        printf("Iter %d: y=%d\n", x,y);
        if(x<5) continue;
        if(x>5) break;
        y=y+x;
        printf("Iter %d: y=%d\n", x,y);

    }

    printf("%d", y);

}
