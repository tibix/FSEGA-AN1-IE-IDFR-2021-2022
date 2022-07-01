#include<stdio.h>

void main(void){
    int z; int x=5; int y=-10; int a=4; int b=2;

    z = x++ + ++y * b/a; //6 + (- 10) * 2 / 4
    printf("z=%d\n", z);
}

