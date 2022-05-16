#include <stdio.h>

int main(){
	int i;
	unsigned n, bituli, afisez=0;

	printf("intr val lui n = ");
	scanf("%d", &n);

	for(i=8*sizeof(n)-1;i>=0;i--)
	{
		bituli = (n>>i)&1;
		if(bituli) afisez=1;
		if(afisez)
			printf("%d", bituli);
	}

	putchar('\n');

	return 0;
}
