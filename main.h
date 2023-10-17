#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int print_pr(va_list __attribute__((unused)), char *, unsigned int);
int print_ch(va_list arguments, char *buf, unsigned int ibuf);
int print_st(va_list arguments, char *buf, unsigned int ibuf);
int print_in(va_list arguments, char *buf, unsigned int ibuf);
int print_bn(va_list arguments, char *buf, unsigned int ibuf);
int print_un(va_list arguments, char *buf, unsigned int ibuf);
int print_oc(va_list arguments, char *buf, unsigned int ibuf);
int print_he(va_list arguments, char *buf, unsigned int ibuf);
int print_up(va_list arguments, char *buf, unsigned int ibuf);
int print_us(va_list arguments, char *buf, unsigned int ibuf);
int print_ad(va_list arguments, char *buf, unsigned int ibuf);
int print_re(va_list arguments, char *buf, unsigned int ibuf);
int print_ro(va_list arguments, char *buf, unsigned int ibuf);
int prinlin(va_list arguments, char *buf, unsigned int ibuf);
int prinlun(va_list arguments, char *buf, unsigned int ibuf);
int prinloc(va_list arguments, char *buf, unsigned int ibuf);
int prinlhe(va_list arguments, char *buf, unsigned int ibuf);
int prinlup(va_list arguments, char *buf, unsigned int ibuf);
int prinhin(va_list arguments, char *buf, unsigned int ibuf);
int prinhun(va_list arguments, char *buf, unsigned int ibuf);
int prinhoc(va_list arguments, char *buf, unsigned int ibuf);
int prinhhe(va_list arguments, char *buf, unsigned int ibuf);
int prinhup(va_list arguments, char *buf, unsigned int ibuf);
int prinpin(va_list arguments, char *buf, unsigned int ibuf);
int prinnoc(va_list arguments, char *buf, unsigned int ibuf);
int prinnhe(va_list arguments, char *buf, unsigned int ibuf);
int prinnup(va_list arguments, char *buf, unsigned int ibuf);
int prinsin(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_fun(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_fun(const char *s, int index);
unsigned int handl_bu(char *buf, char c, unsigned int ibuf);
int print_bu(char *buf, unsigned int nbuf);
char *fill_binary_arra(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_arra(char *bnr, char *oct);
char *fill_long_oct_arra(char *bnr, char *oct);
char *fill_short_oct_arra(char *bnr, char *oct);
char *fill_hex_arra(char *bnr, char *hex, int isupp, int limit);

#endif
