#include<stdio.h>

void pb_2(void){
    char s[20]="BorLanD C++ 3.1";
    int j;

    for(j=0;j<strlen(s);j++)
        if((s[j]>='A')&&(s[j]<='Z'))
            s[j]-=('A'-'a');
    printf("Hello World!\n");
    puts(s);
}
