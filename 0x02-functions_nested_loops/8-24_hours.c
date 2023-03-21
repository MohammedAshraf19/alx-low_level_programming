#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer
* @a: hours
* @first: first digit
* @last: last diigt
* @first2: first digit 2
* @last2: last digit 2
* @tmp: Seconds
*
* Return: On success 1.
*/
void jack_bauer(void)
{
		int a = 0, first, last, first2, last2;

		int tmp;

		while (a <= 23)
		{
			tmp = 0;
			while (tmp < 60)
			{
				if (a < 10)
				{
					if (tmp < 10)
					{
						_putchar('0');
						_putchar((a + '0'));
						_putchar(':');
						_putchar('0');
						_putchar((tmp + '0'));
					}
					else
					{
						_putchar('0');
						_putchar((a + '0'));
						_putchar(':');
						first = tmp / 10;

						_putchar((first + '0'));
						last = tmp % 10;

						_putchar((last + '0'));
					}
				}
				else
				{
					if (tmp < 10)
					{
						first = a / 10;

						last = a % 10;

						_putchar((first + '0'));
						_putchar((last + '0'));
						_putchar(':');
						_putchar('0');
						_putchar((tmp + '0'));
					}
					else
					{
						first = a / 10;

						last = a % 10;

						_putchar((first + '0'));
						_putchar((last + '0'));
						_putchar(':');
						first2 = tmp / 10;

						_putchar((first2 + '0'));
						last2 = tmp % 10;

						_putchar((last2 + '0'));
					}
				}
				tmp++;
				_putchar('\n');
			}
			a++;
		}
}

