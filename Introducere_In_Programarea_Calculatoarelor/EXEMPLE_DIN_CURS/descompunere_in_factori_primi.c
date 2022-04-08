#include<stdio.h>
#include<math.h>

void main()
{
	int n, divizor=2, putere;

	printf("Introdu valoarea lui n=");
	scanf("%d", &n);

	do {
		putere = 0;
		while( !(n%divizor))
		{
			putere++;
			n=n/divizor;
		}
		if(putere > 0)
			printf("divizorul %d cu puterea %d \n", divizor, putere);
		divizor++;

	}while (n!=1);
}
