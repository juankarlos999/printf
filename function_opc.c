#include "holberton.h"
#include <stdio.h>
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
	printf("PROCESS_printf ch  = %c\n", ch);
/*	if (str[position - 1] != '%')
	{
		str[position - 1] = ch;
		printf("IF process_char  str[position %d] =**%c**\n", position - 1, str[position - 1]);
	}
	else*/
	str[position] = ch;
	printf("***process_char  str = %s\n", str);
	printf("process_char  str[position %d] =**%c**\n", position, str[position]);
	printf("process_char  str[position - 1 %d] =**%c**\n", position - 1, str[position - 1]);
	printf("process_char  str[position - 2 %d] =**%c**\n", position - 2, str[position - 2]);
	printf("process_char  str[position - 4 %d] =**%c**\n", position - 4, str[position - 4]);
	return (position + 1);
}
/**
 * process_str - Funtion that print string
 * @argv: is a va_list
 * @s: copy of format.
 * @position: position inside array for concatenate
 * Return: position plus len of str
 */
int process_str(va_list argv, char *s, int position)
{
	char *str;

	str = va_arg(argv, char*);
	if (str == NULL)
		return (position + 1);
	printf("process_string  s1 = %s position= %d\n", s, position);
	_strcat(s, str);
	printf("process_string  s2 = %s position = %d \n", s, position);
	if (position < 1)
	{
		printf("IF process_str position_new STR = %d \n", _strlen(str) - 2);
		return (_strlen(str) - 2);
	}
	else
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
