#include <stdio.h>
#include "main.h"

/**
 * main - main function is the entry point
 * @argc: input prameter
 * @argv: input prameter
 * Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
