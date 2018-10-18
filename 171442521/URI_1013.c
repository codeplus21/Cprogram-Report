#include <stdio.h>

int main()
{
	int X, Y, Z, lar;

	scanf("%d %d %d", &X, &Y, &Z);

	lar = X;
	if(X < Y || X < Z){
		if(Y < Z){
			lar = Z;
		}else{
			lar = Y;
		}
	}

	printf("%d eh o maior\n", lar);

	return 0;
}
