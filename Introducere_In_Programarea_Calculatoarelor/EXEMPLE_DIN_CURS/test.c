#include<stdio.h>

void main(void)
{
	int optiune;
	printf("Introdu optiunea dorita (1->4) = ");
	scanf("%d", &optiune);
	switch(optiune)
	{
		case 1:
			printf("Optiunea 1\n");
			break;
		case 2:
			printf("Optiunea 2\n");
			break;
		case 3:
			printf("Optiunea 3\n");
			break;
		case 4:
			printf("Optiunea 4\n");
			break;
		default:
			printf("Optiune invalida!\n");
	}
}
