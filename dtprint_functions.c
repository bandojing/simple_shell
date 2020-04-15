#include "holberton.h"

/**
 * _putchar - prints single characters
 * @c: The character
 * Return: the char
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * print_str - prints string
 * @s: string printed
 * Return: nothing
 */
void print_str(char *s)
{
	int length, printed_string;

	for (length = 0; s[length] != '\0'; length++)
		;

	printed_string = write(STDOUT_FILENO, s, length);
	if (printed_string == EOF)
		return;
}
