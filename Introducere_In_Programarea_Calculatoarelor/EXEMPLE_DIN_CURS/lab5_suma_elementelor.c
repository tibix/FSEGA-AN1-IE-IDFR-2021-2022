#include <stdio.h>

void main(void)
{
	int i,n,suma,max,a[20];

	printf("Introduceti numarul de elemente din sir=");
	scanf("%d", &n);
	printf("Introduceti elementele sirului\n");
	printf("%d", sizeof(a));
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	suma=a[0];
	max=a[0];
	for (i=1;i<n;i++)
	{
		suma+=a[i];
		if(a[i]>max)
			max=a[i];
	}

	printf("suma elementelor sirului este %d\n", suma);
	printf("maximul elementelor sirului este %d\n", max);

}
