#include <stdio.h>

int recursivePow(int expo)
{
	int result;

	if (expo == 0)
		return (1);

	return (2 * recursivePow(expo - 1));
}

int main()
{
	int result;
	int base, expo;

	printf("Entrer l'exposant: ");
	scanf("%d", &expo);

	result = recursivePow(expo);
	printf("2^%d = %d\n", expo, result);

	return 0;
}
