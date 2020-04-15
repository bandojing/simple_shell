
#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: returns the length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * _strcpy - copies string to another string
 * @dest: to this string
 * @src: from this string
 * Return: string copy
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= _strlen(src))
		i++;
	dest[i] = src[i];

	return (dest);
}
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if strings are the same
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * _strdup-duplicates a string
 * @str: - Char string to be copied
 * Return: pointer to dupped string
 */

char *_strdup(char *str)
{
	char *duplicate;

	int i, j;

	if (str == NULL)
		return (NULL);

	j = 0;

	for (i = 0; str[i] != '\0'; i++)
		j++;

	duplicate = malloc(sizeof(char) * j + 1);

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		duplicate[i] = str[i];

	duplicate[j] = '\0';

	return (duplicate);
}

/**
 * _strconcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: concatenated string with overwritten null byte
 */
char *_strconcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';

	return (dest);
}
