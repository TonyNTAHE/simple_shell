#include "shell.h"
/**
 * _atoi - convert ascii to int
 * @s: string to convert.
 * Return: the converted string.
 */
int _atoi(char *s)
{
	int i = 0, f = 0, result = 0, d = 0;
	int sign = 1;

	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == ' ')
		{
			i++;
			continue;
		}
		if (s[i] == '-' || s[i] == '+')
		{
			if (f)
				break;
			if (s[i++] == '-')
				sign *= -1;
			continue;
		}
		if (s[i] < '0' || s[i] > '9')
		{
			if (f)
				break;
			i++;
			continue;
		}
		f = 1;
		d = s[i++] - '0';
		if (result > (INT_MAX - d) / 10)
			return ((sign == 1) ? INT_MAX : INT_MIN);
		result = result * 10 + d;
	}
	return (result * sign);
}
