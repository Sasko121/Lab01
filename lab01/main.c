#include "stdio.h"
#include "math.h"

//lab01
/*
* x^a*x / e^-a*x
* a = -1.44, b = -0.12, x =	1.04
*/
int main()
{
	
	float a = 1.44f, b = -0.12f, x = 1.04f;

	float result = pow(x, a*x) / exp(-a*x);

		printf("Result: %.2f\n", result);

	return 0;
}