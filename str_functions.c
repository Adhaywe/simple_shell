#include "shell.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: character input
 * Return: length of string
 */
int _strlen(char *s)
{
	int cnt;

	cnt = 0;
	while (*(s + cnt) != '\0')
		cnt++;
	return (cnt);
}

/**
 * *_strcat - function that concatenates two strings
 * @dest: char
 * @src: char
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}

/**
 * _strcpy - copies string from src to dest
 *
 * @dest: pointer to destination of string
 * @src: pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strncat - function that concatenates two strings
 * @dest: char
 * @src: char
 * @n: integer input
 * Return: pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
