#include "main.h"

/**
 * is_printable - checks if a character is printable
 * @c: character to evaluate
 *
 * Return: 1 if printable, else 0
 */

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

/**
 * append_hex_code - append ascii in hexa to buffer
 * @buffer: Array of characters
 * @i: index to start appending
 * @ascii_code: ASCII code
 * Return: 3
 */

int append_hex_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - checks if a character is a digit
 * @c: character to be evaluated
 * Return: 1 or 0
 */

int is_digit(char c)
{
	if (c > '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * convert_size_number - casts number to specified size
 * @num: number to be casted
 * @size: number showing the type to be casted
 * Return: value of num
 */

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);
	return ((int)num);
}

/**
 * convert_size_unsgnd - casts a number to specified size
 * @num: number to be casted
 * @size: number showing the type to be casted
 * Return: value of num
 */

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);
	return ((unsigned int)num);
}
