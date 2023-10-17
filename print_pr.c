#include "main.h"
#include <stdio.h>

/**
 * print_pr - writes the character c to stdout
 * @a: input char
 * @buf: buffer pointer
 * @i: index for buffer pointer
 * Return: On success 1.
 */
int print_pr(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	handl_bu(buf, '%', i);

	return (1);
}
