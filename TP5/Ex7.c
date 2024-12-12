#include <stdio.h>

int pgcdRecursive(int a, int b)
{
	if (b == 0)
		return a;
	return pgcdRecursive(b, a % b);
}

int main()
{
	int a, b, result;

	printf("Entrer a: ");
	scanf("%d", &a);
	printf("Entrer b: ");
	scanf("%d", &b);

	result = pgcdRecursive(a, b);
	printf("pgcd(%d, %d) = %d\n", a, b, result);
	return (0);
}
