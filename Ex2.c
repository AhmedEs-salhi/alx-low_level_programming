#include <stdio.h>

int factoriel(int n)
{
	int fact;
	int i;
	
	fact = 1;
	for (i = 1; i <= n; i++)
		fact *= i;

	return fact;
}

float Coefficient_binomial(int n, int k)
{
	float coefficient;
	int a, b, c;

	a = factoriel(n);
	b = factoriel(k);
	c = factoriel(n - k);

	coefficient = a / (b * c);

	return coefficient;
}

int main()
{
	int n, k;
	float result;

	printf("Entrer n = ");
	scanf("%d", &n);
	printf("Entrer k = ");
	scanf("%d", &k);
	
	result = Coefficient_binomial(n, k);
	
	printf("Coefficient Binomial: %.2f\n", result);

	return 0;
}
