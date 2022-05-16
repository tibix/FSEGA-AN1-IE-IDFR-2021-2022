#include <stdio.h>

void main(){
	union exemplu_uniune {
		int i;
		char ch;
	};

	union exemplu_uniune eu;

	printf("intr caracterul = ");
	scanf("%c", &eu.ch);
	printf("caracterul este %c\n", eu.ch);

	printf("intr intregul = ");
	scanf("%d", &eu.i);
	printf("Intregul este %d\n", eu.i);
	printf("Caracterul acum este %c\n", eu.ch);
}
