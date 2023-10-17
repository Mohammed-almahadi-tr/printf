#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	unsigned int in = 0, length = 0, ibuf = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[in] == '%' && !format[in + 1]))
		return (-1);
	if (!format[in])
		return (0);
	for (in = 0; format && format[in]; in++)
	{
		if (format[in] == '%')
		{
			if (format[in + 1] == '\0')
			{	print_bu(buffer, ibuf), free(buffer), va_end(arguments);
				return (-1);
			}
			else
			{	function = get_print_fun(format, in + 1);
				if (function == NULL)
				{
					if (format[in + 1] == ' ' && !format[in + 2])
						return (-1);
					handl_bu(buffer, format[in], ibuf), length++, in--;
				}
				else
				{
					length += function(arguments, buffer, ibuf);
					in += ev_print_fun(format, in + 1);
				}
			} in++;
		}
		else
			handl_bu(buffer, format[in], ibuf), length++;
		for (ibuf = length; ibuf > 1024; ibuf -= 1024)
			;
	}
	print_bu(buffer, ibuf), free(buffer), va_end(arguments);
	return (length);
}
