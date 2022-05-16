#include <stdio.h>

int main()
{
	int n,k,i,a[20],nrder;
	printf("Introduceti gradul polinomului: ");
	scanf("%d", &n);

	do {
		printf("Introduceti ordinul derivatei (<%d): ", n);
		scanf("%d", &k);
	} while (k>=n);
	printf("Introduceti coeficientul polinomului\n");
	for(i=0;i<=n;i++)
	{
		printf("a[%d]=", i);
		scanf("%d",&a[i]);
	}

	for(nrder=1;nrder<=k;nrder++)
	{
		for(i=0;i<=n;i++)
			a[i]=a[i]*(n-i);
		n--;
		printf("\nDerivata de ordin %d a polinomului este:\n", nrder);
		for(i=0;i<=n;i++)
		{
			if (i<n)
				printf("%d*X^%d\n",a[i],n-i);
			else
				printf("%d\n",a[i]);
		}
	}
	return 0;
}
