#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(void)
{
	int i,n,t[3];
	printf("intr pe n=");
	scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		printf("t[%d]=",i);
		scanf("%d", &t[i]);
	}
}
