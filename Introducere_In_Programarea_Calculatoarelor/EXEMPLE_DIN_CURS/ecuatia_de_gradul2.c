#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,d,x1,x2,re,im;
	printf("Citeste a, b si c: ");
	scanf("%f %f %f", &a, &b, &c);
	if(!a)
		if(!b)
			if(!c)
				printf("Ecuatie nedeterminata!\n");
			else
				printf("ecuatie imposibila\n");
		else printf("ecuatie de gradul 1 cu sol %f\n", -c/b);
	else
	{
		d = b*b-4*a*c;
		if (d < 0)
		{
			re=(-b)/(2*a);
			im=sqrt(-d)/(2*a);
			printf("Solutii complexe x1=%.2f+i*%.2f si x2=%.2f-i*%.2f\n", re, im, re, im);
		}
		else if(!d)
		{
			printf("Solutie reala duble x=%.2f\n", -b/(2*a));
		}
		else
		{
			x1=(-b+sqrt(d)/(2*a));
			x2=(-b-sqrt(d)/(2*a));
			printf("Solutii reale distincte x1=%.2f, x2=%.2f\n", x1,x2);
		}
	}

	return 0;
}
