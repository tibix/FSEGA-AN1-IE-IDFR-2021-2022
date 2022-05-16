#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *tablou[20], tmp[80];
	int i,n;

	printf("intr numarul de prop=");
	scanf("%d", &n);
	fflush(stdin);

	for(i=0;i<=n;i++)
	{
		gets(tmp);
		fflush(stdin);
		tablou[i] = (char*)malloc(strlen(tmp)+1);
		if (tablou[i]==NULL)
		{
			printf("Eroare: nu mai exista spatiu de memorie");
			return 0;
		}
		strcpy(tablou[i],tmp);
	}
	for(i=0;i<n;i++)
		puts(tablou[i]);
	for (i=0;i<n;i++)
	{
		free(tablou[i]);
	}
	return 0;
}
