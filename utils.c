#include "main.h"

int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return 1;

	return 0;
}

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	const char map_to[] = "0123456789ABCDEF";

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return 3;
}

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return 1;

	return 0;
}

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return num;
	else if (size == S_SHORT)
		return (short)num;

	return (int)num;
}

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return num;
	else if (size == S_SHORT)
		return (unsigned short)num;

	return (unsigned int)num;
}
