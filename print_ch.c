#include "main.h"
#include <stdio.h>
/**
 * print_ch - writes the character c to stdout
 * @arguments: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_ch(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handl_bu(buf, c, ibuf);

	return (1);
}
