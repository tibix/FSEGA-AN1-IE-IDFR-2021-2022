#include <stdio.h>

int main()
{
	int n;

	printf("Introdu un numar natural:\nnumar = ");
	scanf("%d", &n);

	int suma=0;

	for (int i=0; i<=n; i++)
	{
		suma += i;
	}

	printf("Suma primelor %d numere naturale este %d\n", n,suma);

	return 0;
}
