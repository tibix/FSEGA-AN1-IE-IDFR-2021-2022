#include<stdio.h>

void main(void){
    int i,y,x=6;
    y=x;
    while(1)
    {
        y--;
        x=x*y; //1:y=5;x=30;2:y=4;x=120;y=3;x=360;y=2;x=720;y=1;x=720;y=0;x=0 &break
        if(y==0) break;
    }
    printf("%d",x);
}
