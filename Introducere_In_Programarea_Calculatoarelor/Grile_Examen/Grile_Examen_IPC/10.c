#include<stdio.h>
#define NEWLINE printf("\n");
void main(void){
    int v[]={0,1,2,0,4,5,6};
    int i=0,x=9;
    int n;
    int counter=0;
    do {
        v[i++]=x; //v[1] devine 9 in iteratia 1;
        printf("In iteratia: %d, avem v[%d] cu valaorea %d si v[%d] cu valoarea %d\n", i, i, v[i], i-1, v[i-1]);
    } while(i<6&&v[i]);

    NEWLINE

    printf("Versiunea finala a vectorului: \n");
    for(n=0;n<7;n++){
        printf("%d ",v[n]);
    }
}

