#include "main.h"

/**
 * width - handles width for non-custome conversion specifiers
 *@format: formatted string
 *@i: arguments
 *@list: list of arguments
 * Return: width
 *
 * This function handles the field width for non-custom specifiers
 */

int width(const char *format, int *i, va_list list)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
		return (width);
	}

	*i = curr_i - 1;
	return (width);
}