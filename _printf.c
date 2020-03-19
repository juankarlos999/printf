#include "holberton.h"
/**
 * _printf - function that produces output according to a format
 * @format:is a character string. The format string is composed of zero or
 * more directives
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	int size = 0;
	char *str_formatted = NULL;
	int len = 0;

	if (format == NULL && ap == NULL)
		return (0);
	while (format[size] != '\0')
		size++;
	if (size > 1024)
	{
		str_formatted = malloc(sizeof(char) * size);
		if (str_formatted == NULL)
			return (1);
	}
	else
	str_formatted = assign_buffer();

	for (i = 0; i < size; i++)
		str_formatted[i] = format[i];
	str_formatted[i] = '\0';

	va_start(ap, format);
	validation_and_return(ap, str_formatted);
	va_end(ap);
	len = _strlen(str_formatted);
	_write(str_formatted);
	free(str_formatted);
	return (len);
}
