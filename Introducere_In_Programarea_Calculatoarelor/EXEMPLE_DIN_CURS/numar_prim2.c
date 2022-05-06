#include <stdio.h>
#include <math.h>

int main(void)
{
	int d,n,prim=1;
	printf("Introdu un numar natural pozitiv:\nn = ");
	scanf("%d", &n);
	for(d=2;d<sqrt(n)+1;d++)
		if(!(n%d))
		{
			prim =0;
			printf("am gasit ca divizor pe %d\n", d);
			goto et1;
		}
et1:	if(prim)
	{
		printf("%d este prim\n", n);
	} else
	{
		printf("%d nu este numar prim\n", n);
	}

	return 0;
}
