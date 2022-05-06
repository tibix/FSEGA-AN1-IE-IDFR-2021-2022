#include <math.h>
#include <stdio.h>

int main() {
  int n, divizor = 2, putere;

  printf("Introduceti valoarea lui n = ");
  scanf("%d", &n);

  do {
    putere = 0;
    while (!(n % divizor)) {
      putere++;
      n = n / divizor;
    }
    if (putere > 0)
      printf("Divizorul %d cu puterea %d \n", divizor, putere);
    divizor++;

  } while (n != 1);

  return 0;
}
