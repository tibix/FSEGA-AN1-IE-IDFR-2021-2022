#include<stdio.h>

void main(void)
{
	unsigned int n,a=1,b=1,c,afisate;
	printf("Introdu cate numere din sirul lui fibonaci afisam: n= ");
	scanf("%d", &n);
	afisate=2;
	printf("%u %u ", a,b);
	while(afisate<n){
		c=a+b;
		printf("%u ", c);
		afisate++;
		a=b;
		b=c;
	}
	printf("\n");

}
