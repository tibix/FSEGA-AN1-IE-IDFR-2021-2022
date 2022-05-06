#include <stdio.h>

int main()
{
	int numar,suma=0;

	printf("Introdu un numar intreg:\nnumar = ");
	scanf("%d", &numar);

	do{
		suma += numar % 10;
		numar /= 10;
	} while(numar);

	printf("%d\n", suma);

	return 0;
}
