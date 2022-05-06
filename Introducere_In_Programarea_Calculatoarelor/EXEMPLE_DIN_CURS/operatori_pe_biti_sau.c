#include <stdio.h>

int main(void)
{
	unsigned int n,p;
	printf("Introdu un numar natural pozitiv n = ");
	scanf("%d",&n);
	printf("Introdu pozitia de shiftare p = ");
	scanf("%d", &p);
	n|=(1<<p);
	printf("%u\n", n);

	return 0;
}
