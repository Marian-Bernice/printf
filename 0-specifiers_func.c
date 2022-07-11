#include "main.h"

/**************************************PRINT CHAR*******************************************/

/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 * Return: 1.
 */
int print_char(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}

/**************************************PRINT PERCENT SIGN*********************************/

/**
 * print_porcentage - %
 * Return: 1.
 */
int print_percentage(void)
{
	_putchar('%');
	return (1);
}

/***************************************PRINT STRING**************************************/

/**
 * print_string - writes the character c to stdout
 * @s: The string to print
 * Return: 1.
 */
int print_string(va_list s)
{
	char *my_string;
	int  i = 0;

	my_string = va_arg(s, char *);
	if (my_string == NULL)
		my_string = "(null)";
	while (my_string[i])
	{
		_putchar(my_string[i]);
		i++;
	}
	return (i);
}

/*********************************************PRINT DECIMAL********************************/

/**
 * print_dec - function that prints a decimal
 * @d: integer to print
 * Descriptions: prints digit with _putchar
 * Return: size the output text
 */
int print_dec(va_list d)
{
	int len, powten, j, digit, n, count = 0, num;

	n = va_arg(d, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			n -= digit * powten;
			powten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

/**********************************PRINT INTEGER*******************************************/

/**
 * print_int - function that prints an integer
 * @i: integer to print
 * Descriptions: prints digit with _putchar
 * Return: size the output text
 */
int print_int(va_list i)
{
	int len, powten, j, digit, n, count = 0, num;

	n = va_arg(i, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			n -= digit * powten;
			powten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
