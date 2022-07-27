#include<stdio.h>

enum culori {ROSU, GALBEN, VERDE, ALBASTRU, VIOLET, NUMAR_CULORI};
typedef enum culori TCuloare;

int main(){
    TCuloare cer, padure;
    printf("In enum sunt %d culori\n", NUMAR_CULORI);
    cer=ALBASTRU;
    padure=VERDE;
    printf("Culoarea cerului este %d\n", cer);
    printf("Culoarea padurii este %d\n", padure);

    return 0;
}