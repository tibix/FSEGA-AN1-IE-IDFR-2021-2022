#include<stdio.h>
#include<math.h>

int main()
{
	int n,d, prim;
	prim = 1;
	printf("Introdu valoarea lui n=");
	scanf("%d", &n);

	for (d=2;d<=sqrt(n)+1;d++)
	{
		if(n%d == 0)
		{
			prim =0;
			d=n;
		}
	}
	if ((prim) || (n==2))
		printf("numarul este prim\n");
	else
		printf("numarul nu este prim\n");

	return 0;
}
