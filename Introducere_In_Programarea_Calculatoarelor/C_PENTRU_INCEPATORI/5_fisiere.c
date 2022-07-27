#include <stdio.h>
#define MAX 50

typedef struct {
    char tip[2];
    char den[MAX+1];
    int val;
    char unit[3];
    long cod;
    float pret;
    float cant;
} TIP_ARTICOL;

int cit(TIP_ARTICOL *str) {
    int c, nr;
    float x,y;

    while((nr = scanf("%1s %50s %3d %2s %1ld", str->tip, str->den, &str->val, str->unit, &str->cod))!=5 || scanf("%f %f",&x,&y)!=2){
        if(nr == EOF) return EOF;
        printf("Rand eronat; se reiat \n");
        while((c=getchar()) != '\n' && c != EOF);
        if(c == EOF) return EOF;
    }
    str->pret = x;; str->cant=y;
    return nr;
}

int main(int argc, char *argv[]) {
    // FILE *pf;
    // TIP_ARTICOL a[6];
    // int i, n;

    // if((pf=fopen("misc.dat", "a+"))== NULL){
    //     printf("Nu se poate deschide in creare fisierul misc.dat\n");
    //     return -1;
    // }

    // for(i=0; i<6; i++){
    //     n = cit(&a[i]);
    // }

    // if(6 != fwrite(&a, sizeof(TIP_ARTICOL),6,pf)){
    //     printf("Nu se poate scrie in fisier\n");
    //     return -1;
    // }
    // fclose(pf);

    // FILE *pf;
    // int i,n;

    // TIP_ARTICOL a[6];

    // if((pf=fopen("misc.dat", "r"))== NULL){
    //     printf("Nu se poate deschide in citire fisierul misc.dat\n");
    //     return -1;
    // }

    // printf("%60s\n\n\n","INTRARI\n\n");
    // while((n=fread(a,sizeof(TIP_ARTICOL),6,pf)) > 0)
    //     for(i=0;i<n;i++) {
    //         if(a[i].tip[0] == 'I')
    //             printf("%s %3d %s %ld %.2f %.2f\n", a[i].den, a[i].val, a[i].unit, a[i].cod, a[i].pret, a[i].cant);
    //     }
    
    // fclose(pf);
    return 0;
}