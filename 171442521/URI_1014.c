#include <stdio.h>

int main()
{
	float A, B;

	scanf("%f %f", &A, &B);

	printf("%.3f km/l\n", A / B);

	return 0;
}
