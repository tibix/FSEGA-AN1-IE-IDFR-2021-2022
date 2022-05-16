#include <stdio.h>

int main()
{
	int *a;
	int  b;

	a = &b; //axtragem adresa variabilei 'b'
	b = *a; //dereferentiem variabila 'a'

	return 0;
}
