#include <stdio.h>

int main () {
	float a,b;
	printf("Declara a si b:");
	scanf("%f %f", &a, &b);
	if (a==0){
		if (b==0){
			printf("Ecuatie nedeterminata!");
		} else {
			printf("Ecuatie imposibila!");
		}
	} else {
		printf("Necunoscuta x este %.2f\n", -b/a);
	}
}
