#include<stdio.h>

void main(void){
    int a,b,c,d,i;

    //test case a=33,b=18

    scanf("%d %d", &a,&b);
    if(a>b){
        c=a;a=b;b=c; //c=33;a=18;b=33
    }
    d=0;
    for(i=a;i<=b;i++) //[18 ... 33] - 8 cases i%2==0
        if(i%2==0) d++;

    printf("%d", d);
}
