#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function is to print two multipled numbers
 * * @argc: input argments
 * @argv: is an array to store the argments
 * Return1: 1  (error) if the argc != 3
 * Return: always 0 (success)
*/
int main(int argc, char *argv[])
{
int num1;
int num2;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 *num2);

return (0);
}
