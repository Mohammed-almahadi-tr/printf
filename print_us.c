#include "main.h"

/**
 * print_us - prints a string and values of
 * non-printed chars
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int print_us(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned char *str;
	char *hexadecimal, *binary;
	unsigned int i, sum, op;

	str = va_arg(arguments, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			ibuf = handl_bu(buf, '\\', ibuf);
			ibuf = handl_bu(buf, 'x', ibuf);
			op = str[i];
			binary = fill_binary_arra(binary, op, 0, 32);
			hexadecimal = fill_hex_arra(binary, hexadecimal, 1, 8);
			ibuf = handl_bu(buf, hexadecimal[6], ibuf);
			ibuf = handl_bu(buf, hexadecimal[7], ibuf);
			sum += 3;
		}
		else
			ibuf = handl_bu(buf, str[i], ibuf);
	}
	free(binary);
	free(hexadecimal);
	return (i + sum);
}
