#include "main.h"

/**
 * rev_string -  a function to reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int coun = 0;
	int i;

	while (s[coun] != '\0')
	coun++;
	for (i = 0; i < coun; i++)
	{
		coun--;
		rev = s[i];
		s[i] = s[coun];
		s[coun] = rev;
	}
}

