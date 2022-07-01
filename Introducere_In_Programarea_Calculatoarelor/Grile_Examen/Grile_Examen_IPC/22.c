#include <stdio.h>

void main(void){
    int a,b,x;
    scanf("%d %d %d",&a,&b,&x); //test case a=3 b=4 x=5
    if(!((x<=a&&x>=b))) // 1
        putchar('1');
    if(!(x<=a||x>=b)) // 0
        putchar('1');
    if(!(x<=a)&&!(x>=b)) // true & false => 0 (false)
        putchar('1');
    if(!(x<=a)||!(x>=b)) // true || false => 1 (true)
        putchar('1');
}
