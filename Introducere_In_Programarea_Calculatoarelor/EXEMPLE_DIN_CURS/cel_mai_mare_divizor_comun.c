#include <stdio.h>

int main() {
  int a, b, r;
  printf("Defineste valoarea lui a = ");
  scanf("%d", &a);
  printf("Defineste valoarea lui b = ");
  scanf("%d", &b);
  while (r = a % b) {
    a = b;
    b = r;
  }
  printf("CMMDC este %d\n", b);

  return 0;
}
