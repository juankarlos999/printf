#include "holberton.h"
/**
 * process_char - Funtion that print a character
 * @argv: is a va_list
 * @str: copy of format
 * @position: position inside array for concatenate.
 * Return: position plus one
 */
int process_char(va_list argv, char *str, int position)
{
	int c;
	char ch;

	c = va_arg(argv, int);
	ch = c;
	str[position] = ch;
	return (position + 1);
}
/**
 * process_str - Funtion that print string
 * @argv: is a va_list
 * @s: copy of format
 * @position: position inside array for concatenate
 * Return: position plus len of str
 */
int process_str(va_list argv, char *s, int position)
{
	char *str;

	str = va_arg(argv, char*);
	if (str == NULL)
		_write("(nil)");
	else
		_strcat(s, str);
	return (_strlen(str) + position);
}
/**
 * process_percen - Funtion that print a char percentage
 * @s: char for copy
 * @position: position inside array for concatenate
 * Return: position plus one
 */
int process_percen(char *s, int position)
{
	s[position] = '%';
	return (position + 1);
}
/**
 * process_int - Funtion that print string
 * @argv: is a va_list
 * @s: copy of format
 * @position: position inside array for concatenate
 * Return: position plus len of str
 */
int process_int(va_list argv, char *s, int position)
{
	char *aux = NULL;
	int num;

	aux = assign_buffer();
	num = va_arg(argv, int);
	if (!num)
		return (0);
	_itoa(num, aux);
	_strcat(s, aux);
	num = _strlen(aux);
	free(aux);
	return (num + position);
}
