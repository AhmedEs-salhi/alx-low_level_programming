#ifndef _3_FUNCTION_LIKE_MACRO_H_
#define _3_FUNCTION_LIKE_MACRO_H_
#define ABS(x) ((x) < 0 ? x)

#include <stdio.h>

int main(void)
{

	if (ABS(x) > 0)
	{
		printf("%d\n", ABS(x));
	}
	else
	{
		printf("%d\n", ABS(-x));
	}

	return 0;
}

#endif
