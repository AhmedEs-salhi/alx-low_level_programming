#include <stdio.h>

long int recursiveAckermann(int n, int m)
{
	if (n == 0)
		return (m + 1);
	if (m == 0)
		return recursiveAckermann(n - 1, 1);
	return recursiveAckermann(n - 1, recursiveAckermann(n, m - 1));
}

int main()
{
	int n, m;
       	long int result;
	
	printf("Entrer n: ");
	scanf("%d", &n);
	printf("Entrer m: ");
	scanf("%d", &m);

	result = recursiveAckermann(n, m);
	printf("A(%d, %d) = %ld\n", n, m, result);

	return (0);
}
