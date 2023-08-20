<<<<<<< HEAD
#include <stdio.h>
=======
#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1
#define NULL_STRING "(null)"
#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED 2
/**
 * struct parameters - parameter struct
 *
 * @unsign: for unsigned value
 *
 * @plus_flag: use if plus_flag specified
 * @space_flag: use if space_flag specified
 * @hashtag_flag: use if hashtag_flag specified
 * @zero_flag: use if zero_flag specified
 * @minus_flag: use if minus_flag specified
 *
 * @width: field width specified
 * @presision: field presision specified
 *
 * @h_modifier: use if h_modifier specified
 * @l_modifier: use if l_modifier specified
 * 
*/
typedef struct parameters
{
unsigned int unsign         : 1;
unsigned int plus_flag      : 1;
unsigned int space_flag     : 1;
unsigned int hashtag_flag   : 1;
unsigned int zero_flag      : 1;
unsigned int minus_flag     : 1;
unsigned int width;
unsigned int presision;
unsigned int h_modifier     : 1;
unsigned int l_modifier     : 1;
} params_t;
/**
 * struct specifier - struct specifier
 * 
 * @specifier: format
 * @f: the function
*/
typedef struct specifier
{
char *specifier;
int (*f) (va_list, params_t *);
} specifier_t;
/* _put.c module */
int _puts(char *str);
int _putchar(int c);
/*print_functions.c module */
int print_char(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_S(va_list ap, params_t *params);
/* number.c modul */
char *convert(long int num, int base, int flags, params_t *params);
int print_unsigned(va_list ap, params_t *params);
int print_address(va_list ap, params_t *params);
/* specifier.c modul */
int (*get_specifier(char *s))(va_list ap, params_t *params);
int get_print_func(char *s, va_list ap, params_t *params);
int get_flag(char *s, params_t *params);
int get_modifier(char *s, params_t *params);
char *get_width(char *s, params_t *params, va_list ap);
/* convert_number.c module */
int print_hex(va_list ap, params_t *params);
int print_HEX(va_list ap, params_t *params);
int print_binary(va_list ap, params_t *params);
int print_octal(va_list ap, params_t *params);
/* simple_printers.c module */
int print_from_to(char *start, char *stop, char *except);
int print_rev(va_list ap, params_t *params);
int print_rot13(va_list ap, params_t *params);
/* print_number.c module */
int _isdigit(int c);
int _strlen(char *s);
int print_number(char *str, params_t *params);
int print_number_right_shift(char *str, params_t *params);
int print_number_left_shift(char *str, params_t *params);
/* params.c module */
void init_params(params_t *params, va_list ap);
/* string_field.c modul */
char *get_percision(char *p, params_t *params, va_list ap);
/* _printf.c modul */
int _printf(const char *format, ...);
#endif
>>>>>>> 80a678209ae1fb23fd399ca3d28017812ed1a227
