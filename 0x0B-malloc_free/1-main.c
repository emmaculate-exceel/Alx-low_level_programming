#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for ALX School student
 *
 * Return: Always 0
 */

int main(void)
{
	char *s;
	
	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allcate memory\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);
	return (0);
}
