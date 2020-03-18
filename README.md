![Holberton logo 2](https://www.holbertonschool.com/holberton-logo.png)
# Printf Project

This repository contains the files for the Printf Project of Holberton School. The objective of this project is to make our own printf function. 

# Requirements

### Authorized-only functions and macros:
-   `write`  (`man 2 write`)
-   `malloc`  (`man 3 malloc`)
-   `free`  (`man 3 free`)
-   `va_start`  (`man 3 va_start`)
-   `va_end`  (`man 3 va_end`)
-   `va_copy`  (`man 3 va_copy`)
-   `va_arg`  (`man 3 va_arg`)

# Instructions to Run the Code

1. Clone this repository.
2. Create the main.c file by copying this template:
```
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
```
3. Compile the code with this command:
```
gcc -Wall -Werror -Wextra -pedantic *.c
```
4. Execute the code by entering ```./a.out``` in the terminal.
5. After executing the program, the output should look something like this
```
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
```

# Files Contained in the Repository

* [**holberton.h**](./holberton.h): Contains the prototypes and a structure that later will be called.
* [**_printf.c**](./_printf.c): It will call a function according to the character that is given and then will print the result with the help of the write function.
* [**_strcpy.c**](./_strcpy.c): It includes the function that copies the string pointed to by src. It will include the null byte(\0). 
* [**_strlen.c**](./_strlen.c): It is the function that will return the lenght of a string.
* [**_strncpy.c**](./_strncpy.c): Is the function that will copy characters.
* [**_write.c**](./_write.c): The function will print a string to stdout.
* [**assign_buffer.c**](./assign_buffer.c): Is the funtion thet creates a buffer.
* [**function_opc.c**](./function_opc.c): This file contains the functions that the _printf will develop.
* [**str_concat.c**](./str_concat.c): This function will concatenate two strings
* [**validation_and_return.c**](./validation_and_return.c): The function in this file, will produce the output according to the format.

# Authors & Contact Information
- Juan Rengifo - email: 1074@holbertonschool.com - GitHub: https://github.com/juankarlos999/
- Juan Villegas - email: 1561@holbertonschool.com - GitHub: https://github.com/juanjo7890/
