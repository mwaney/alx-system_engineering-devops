#include <stdio.h>

/**
* main - function to print something
* @num: the number to multiply to
* Return: Numbers
**/
void  main(int num)
{
	int i, j;

	num = 5;
	for (i = 0; i < num + 1; i++)
	{
		for (j = 0; j < num + 1; j++)
		{
			printf("%d", i * j);
			if (j < num)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
