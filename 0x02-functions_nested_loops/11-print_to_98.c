#include "main.h"
/**
 *print_to_98 - a function that prints to 98
 *@n:the integer that iterates
 *
 *Return: Nothing.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d", i);
				printf("\n");
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
}
