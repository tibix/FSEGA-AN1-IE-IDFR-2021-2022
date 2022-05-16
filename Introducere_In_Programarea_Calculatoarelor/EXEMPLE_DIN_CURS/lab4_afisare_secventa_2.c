#include <stdio.h>

void main(void)
{
	int n,i,j;

	printf("Introdu numarul n = ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", j);
		}
		putchar('\n');
	}
}
