#include "shell.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string number one
 * @s2: string number two
 *
 * Return: the difference between the two strings
 *         positive if s1 > s2, 0 if s1 = s2, and negative if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

/**
 * _strncmp - function thta Compares two strings up to n bytes
 * @s1: Pointer to a string
 * @s2: Pointer to a string
 * @n: The first n bytes of the strings to compare
 *
 * Return: Less than 0 if s1 is shorter than s2
 *         0 if s1 and s2 match
 *         Greater than 0 if s1 is longer than s2
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	if (i == n)
		return (0);
	else
		return (-15);
}
