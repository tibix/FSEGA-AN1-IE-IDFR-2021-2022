#include <stdio.h>

int main(void) {
  unsigned int n, a = 1, b = 1, c, afisate;
  printf("Introdu cate numere din sirul lui fibonaci afisam: n = ");
  scanf("%d", &n);
  afisate = 2;
  printf("%u %u \n", a, b);
  while (afisate < n) {
    c = a + b;
    printf("%u \n", c);
    afisate++;
    a = b;
    b = c;
  }

  return 0;
}
