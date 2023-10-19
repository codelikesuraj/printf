#include "main.h"

/**
 * _get_hex - get letter notation of
 * hexadecimal values from 10 to 15
 * @n: the hexadecimal value
 * @lower_case: get lower/upper case
 * notation
 * Return: letter notation
 */
char _get_hex(int n, int lower_case)
{
	char c;

	if (n >= 0 && n <= 9)
		return (n + '0');

	switch (n)
	{
		case 10:
			c = lower_case ? 'a' : 'A';
			break;
		case 11:
			c = lower_case ? 'b' : 'B';
			break;
		case 12:
			c = lower_case ? 'c' : 'C';
			break;
		case 13:
			c = lower_case ? 'd' : 'D';
			break;
		case 14:
			c = lower_case ? 'e' : 'E';
			break;
		case 15:
			c = lower_case ? 'f' : 'F';
			break;
		default:
			c = '\0';
			break;
	}

	return (c);
}
