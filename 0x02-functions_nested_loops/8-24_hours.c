#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * No arguments
 * Description: print the time in HH:MM format
 * Return: no value.
 */

void jack_bauer(void)
{
	int hour, minute, hFirstDigit, hLastDigit, mFirstDigit, mLastDigit;

	for (hour = 0; hour <= 23; hour++)
	{
		hFirstDigit = hour / 10;
		hLastDigit = hour % 10;
		for (minute = 0; minute <= 59; minute++)
		{
			mFirstDigit = minute / 10;
			mLastDigit = minute % 10;
			_putchar(hFirstDigit + '0');
			_putchar(hLastDigit + '0');
			_putchar(':');
			_putchar(mFirstDigit + '0');
			_putchar(mLastDigit + '0');
			_putchar('\n');
		}
	}
}
