#include <stdio.h>

int main()
{
	int n,i,j,a[20][20];
	printf("n=");
	scanf("%d", &n);

	for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
			if(j==0)
				a[i][j]=1;
			else a[i][j]=0;
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++)
			a[i][j]=a[i-1][j]+a[i-1][j-1];
	printf("Triunghiul lui Pascal pentru n=%d este\n", n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%5d", a[i][j]);
		putchar('\n');
	}

	return 0;
}
