#include<stdio.h>

void main(void)
{
	int i,n, suma=0;
	printf("introdu pe n=");
	scanf("%d", &n);

	for (i=1;i<=n;i++)
	{
		suma++;
		if (i>=5) continue;
		suma++;
	}
	printf("suma este %d\n", suma);

}
