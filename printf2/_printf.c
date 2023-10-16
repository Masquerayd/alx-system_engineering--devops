#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
* print_int - a function that prints integer
*
* @sep: a pointer to the separator
* @args: the values to be printed
*
* Return: returns nothing
*/
void print_int(int num)
{
	char buffer[20];
    	int i = 0;


	if (num < 0)
	{
		_putchar('-');
		num = - num;
	}
	if (num == 0) 
	{
		_putchar('0');
		return;
	}

	while (num > 0) 
	{
		buffer[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(buffer[i]);
	}
}

/**
 * _printf - Prints a formate string to the standard output
 * @format_string: a string that contains both text and spercifiers
 * Return: the total number of characters printed
 */
int _printf(const char *format, ...)
{
	const char *format_ptr = format;
	va_list args;
	int count;
/*
 * Used for keeping count of charatecters printed
 */
	int num_chars_printed = 0;

/*
 * starts the Varadic functions
 */
	va_start(args,format);



	for(count = 0; *format_ptr != '\0'; ++format_ptr)
	{
		if(*format_ptr != '%')
		{
		/* 
		 * prints the charter that the character
		 * that the pointer points to.
		 * 1 indicates how many characters from the address of the pointer 
		 * should be printed
		 */
			_putchar(*format_ptr);
			num_chars_printed++;
		}
		else
		{
		/*
		 * move past '%'
		 */
			format_ptr++;
			switch(*format_ptr)
			{
				case 'd':
					num_chars_printed++;
					print_int(va_arg(args,int));
					break;
				case 'c':
					num_chars_printed++;
					_putchar(va_arg(args,char));
					break;
				case 's':
					num_chars_printed += merstr(format,va_arg(args,char));
					break;
				case '%':
					printstr('%',1);
					break;
				default:
					printstr('%',1);
					printstr('%',1);
					numchars_printed += 2;
			}
		}
	}
	va_end(args);

	return (num_chars_printed);

					
}
