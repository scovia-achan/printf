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
	int count;
	int w = 0;

	for (count = *i + 1; format[count] != '\0'; count++)
	{
		if (is_digit(format[count]))
		{
			w *= 10;
			w += format[count] - '0';
		}
		else if (format[count] == '*')
		{
			count++;
			w = va_arg(list, int);
			break;
		}
		else
			break;
		return (width);
	}

	*i = count - 1;
	return (width);
}
