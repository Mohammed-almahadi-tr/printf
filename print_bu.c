#include "main.h"

/**
 * print_bu - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of bytes to print
 * Return: number of bytes printed.
 */
int print_bu(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
