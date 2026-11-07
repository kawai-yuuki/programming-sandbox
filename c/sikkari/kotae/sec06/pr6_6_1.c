#include <stdio.h>

int main(void)
{
	double x;
	int a = 10, b = 3, c = 5, d = 2;

	x = (double)a / b + (double)c / d;
	printf("x = %f\n", x);

	return 0;
}
