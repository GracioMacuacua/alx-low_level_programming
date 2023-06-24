#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer😂
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			if (hour == 23 && minute == 59)
				_putchar('2');
			else
				_putchar('0' + hour / 10);

			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);

			if (!(hour == 23 && minute == 59))
				_putchar(10);
		}
	}
}