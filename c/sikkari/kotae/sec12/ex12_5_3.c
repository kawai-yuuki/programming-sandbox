// サイン、コサイン、タンジェントを求めるプログラム
#include <stdio.h>
#include <math.h>

#define PI  3.14159265358979323846	// π

int main(void)
{
	double  x, r, y1, y2, y3;

	printf( "   x	    sin(x)       cos(x)       tan(x)\n" );
	for (x = 0.0; x <= 180.0; x += 15.0) {
		r = x * PI / 180.0;
		y1 = sin(r);
		y2 = cos(r);
		y3 = tan(r);
		printf("%6.2f %12.5f %12.5f %12.5f\n", x, y1, y2, y3);
	}

	return 0;
}
