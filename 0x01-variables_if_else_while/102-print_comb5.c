#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: programe writes all the possible
 * combination between two two-digit number
 *
 * Return: 0 in success
 */

int main(void)
{
	int f, s;

	f = 0;
	while (f <= 99)
	{
		s = f;
		while (s <= 99)
		{
			if (s != f)
			{
				putchar((f / 10) + 48);
				putchar((f % 10) + 48);
				putchar(' ');
				putchar((s / 10) + 48);
				putchar((s % 10) + 48);

				if (f != 98 || s != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s++;
		}
		f++;
	}
	putchar('\n');

	return (0);
}
