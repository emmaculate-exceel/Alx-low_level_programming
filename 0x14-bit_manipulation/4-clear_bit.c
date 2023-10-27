#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - clear bits
 * @n: parameter
 * @index: count
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
