#include<stdio.h>

void pb_4(void){
    char *s="123456789", *t,*u;
    u=&s[4],s+=3,t=&s[1];
    printf("%s  %s  %s\n", s,u,t);
    printf("%d%d%d",u==s,u==t,s==t);
}
