#include<stdio.h>

void pb_3(void){
    char s[10]="AB6X92P3M", b[10];
    int j=0,k=0;
    while(s[j])
        if(j%2) b[k]=s[j++];
    b[k]=0;
    puts(b);
}
