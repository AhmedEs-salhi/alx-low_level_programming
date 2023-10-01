#include <stdio.h>
#include "main.h"

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return 0;
	}
	else //if (*s != '\0')
	{
		i++;
		s++;
		return i;
		_strlen_recursion(s);
		//	return i;
	}

}
