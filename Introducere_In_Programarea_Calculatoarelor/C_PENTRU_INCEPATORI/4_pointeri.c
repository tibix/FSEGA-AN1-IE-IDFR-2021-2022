#include <stdio.h>

void schimbare(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 1, y = 2;
    schimbare(&x,&y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}