#include <stdio.h>

int main(void)
{
	int a, n1 = 2, n2 = 2;

	a = ++n1;
	printf("n1: %d\ta: %d\n", n1, a);

	a = n2++;
	printf("n2: %d\ta: %d\n", n2, a);

	return 0;
}