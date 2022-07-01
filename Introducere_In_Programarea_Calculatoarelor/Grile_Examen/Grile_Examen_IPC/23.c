#include<stdio.h>

void main(void)
{
    int s=0; int t=0; int x=3; int i=1; int y=1; int z=1;
    do {
        if(x>0)
            if(y>1)
                if(z>2) t=x;
            else t=x+y;
        else t=x+y+z; //1: t=5
        printf("s=%d i=%d t=%d\n", s, i, t);
        s+=i+t;
        i++;
    } while (i>7);
    printf("%d \n",s);
}
