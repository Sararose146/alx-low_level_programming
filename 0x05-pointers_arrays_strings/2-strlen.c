#include "main.h"
#include <stdio.h>

/**
 *_strlen - a function that returns the length of a string.
 *
 *@s: input
 *
 *Return: return length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);

}
