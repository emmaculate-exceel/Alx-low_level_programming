#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - print day left
 * @month: in number format
 * @day: days of the year
 * @year:  month of the year
 * Return:void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		if (month >= 2 && day >= 60)
		{
			day++;
		}

		printf("day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - days);
	}

	else
	{
		if (month == 2 && day == 60)
	{

		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
	}

}
