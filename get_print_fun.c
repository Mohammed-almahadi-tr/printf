#include "main.h"
/**
 * get_print_fun - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
 */
int (*get_print_fun(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_ch}, {"s", print_st},
		{"i", print_in}, {"d", print_in},
		{"b", print_bn}, {"u", print_un},
		{"o", print_oc}, {"x", print_he},
		{"X", print_up}, {"S", print_us},
		{"p", print_ad}, {"li", prinlin},
		{"ld", prinlin}, {"lu", prinlun},
		{"lo", prinloc}, {"lx", prinlhe},
		{"lX", prinlup}, {"hi", prinhin},
		{"hd", prinhin}, {"hu", prinhun},
		{"ho", prinhoc}, {"hx", prinhhe},
		{"hX", prinhup}, {"#o", prinnoc},
		{"#x", prinnhe}, {"#X", prinnup},
		{"#i", print_in}, {"#d", print_in},
		{"#u", print_un}, {"+i", prinpin},
		{"+d", prinpin}, {"+u", print_un},
		{"+o", print_oc}, {"+x", print_he},
		{"+X", print_up}, {" i", prinsin},
		{" d", prinsin}, {" u", print_un},
		{" o", print_oc}, {" x", print_he},
		{" X", print_up}, {"R", print_ro},
		{"r", print_re}, {"%", print_pr},
		{"l", print_pr}, {"h", print_pr},
		{" +i", prinpin}, {" +d", prinpin},
		{"+ i", prinpin}, {"+ d", prinpin},
		{" %", print_pr}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (pr[i].f);
}
