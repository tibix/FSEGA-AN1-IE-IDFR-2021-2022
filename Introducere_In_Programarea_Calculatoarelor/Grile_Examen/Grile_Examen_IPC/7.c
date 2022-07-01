#include<stdio.h>

void main(void){
    char *s[5]={"012","345","678","9AB","CDE"};
    char *t, *u; int j;
    t=&s[1][0]; // should have 5
    printf("%d\n",*t);
    printf("%d",(*(t+5)==s[2][1])); // 1 (because *(t+5) == s[2][1]
    u=&s[3][0]+1; //A
    j=0;
    while(u[j]) printf("%c",u[j++]);
}
