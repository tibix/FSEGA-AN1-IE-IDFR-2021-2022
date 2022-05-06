#include <stdio.h>

int main() {
  float a, b;
  printf("Declara valorile lui a si b:");
  scanf("%f %f", &a, &b);
  if (a == 0) {
    if (b == 0) {
      printf("Ecuatie nedeterminata!\n");
    } else {
      printf("Ecuatie imposibila!\n");
    }
  } else {
    printf("Necunoscuta x este %.2f\n", -b / a);
  }
}
