#include <stdio.h>

void main(void)
{
	int n,nrezerva,ninvers=0,ultcifra;
	printf("Introdu pe n = ");
	scanf("%d", &n);
	nrezerva=n;
	do{
		ultcifra = n%10;
		ninvers=ninvers*10+ultcifra;
		n/=10;
	} while(n!=0);
	if(ninvers == nrezerva)
		printf("Este palindrom\n");
	else
		printf("Nu este palindrom\n");
}
