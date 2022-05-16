#include<stdio.h>
#include<stdlib.h>

void main(void)
{
	int suma=0,i,n,*p;
	printf("intr nr de elemente din tablou = ");
	scanf("%d", &n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Nu am reusit aloacare spatiului de memorie pentru tablou\n");
		return;
	}
	printf("intr elem tabloului\n");
	for(i=0;i<n;i++)
	{
		printf("t[%d]=",i);
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
			suma = suma+*(p+i);
	
	printf("Suma elementelor tabloului este %d\n", suma);
	free(p);
}
