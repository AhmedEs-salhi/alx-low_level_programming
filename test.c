#include <stdio.h>

int factorial(int number)
{
	if (number == 1)
		return (1);
	return (factorial(number) * factorial(number - 1));
}

int main()
{
	int result, number;

	printf("Enter your number: ");
	scanf("%d", &number);
	result = factorial(number);
	printf("The factorial of %d is: %d\n", number, result);

	return (0);
}
