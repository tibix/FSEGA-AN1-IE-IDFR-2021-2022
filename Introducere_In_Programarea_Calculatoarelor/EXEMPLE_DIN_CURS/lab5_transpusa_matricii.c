#include <stdio.h>

void main(void)
{
	int i,j,n,tmp,a[20][20];
	printf("Introduceti dimensiunea matricii=");
	scanf("%d", &n);
	printf("Introduceti elementele matricii\n");
	for(i=0;i<n;i++)
			for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=", i,j);
			scanf("%d",&a[i][j]);
		}

	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i>j)
			{
				tmp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=tmp;
			}
	printf("matricea transpusa arata astfel\n");
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++) printf("%5d", a[i][j]);
		putchar('\n');
	}
}
