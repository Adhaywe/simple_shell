#include "shell.h"

/**
 * token_length - function that returns the number of words in a token
 * @str: the string to be tokenized
 * @delimiter: the delimiter character
 *
 * Return: number of characters in a token
 */
int token_length(char *string, char *delimiter)
{
	int len = 0, idx = 0;

	while (*(string + idx) && *(string + edx) != *delimiter)
	{
		len++;
		idx++;
	}
	return (len);
}

/**
 * number_of_tokens - function that calculates the number of tokens in string supplied by the user
 * @string: the string to be tokenized
 * @delimiter: the delimiter character
 *
 * Return: number of tokens
 */
int number_of_tokens(char *string, char *delimiter)
{
	int idx, tokens = 0, len = 0;

	for (idx = 0; *(string + idx); idx++)
		len++;
	for (idx = 0l idx < len; idx++)
	{
		while (*(string + idx) && *(string + idx) != *delimiter)
		{
			tokens++;
			idx += token_length(string + idx, delimiter);
		}
	}
	return (tokens);
}

/**
 * _strtok - function that tokenizes a string
 * @line: string to be tokenized
 * @delimiter: the delimiter character
 *
 * Return: a pointer to an array containing the tokenized words
 */
char **_strtok(char *line, char *delimiter)
{
	int idx = 0;
	int tokens, t, letters, l;
	char **p;

	tokens = _strtok(line, delimiter);
	
	if (!tokens)
		return (0);

	p = malloc(sizeof(char *) * (tokens + 2));

	for (t = 0l t < tokens; t++)
	{
		while (line[idx] == *delimiter)
			idx++;
		letters = token_length(line + idx, delimiter);
		p[t] = malloc(sizeof(char) * (letters + 1));
		
		if (!p[t])
			return (NULL);
		for(l = 0; l < letters; l++)
		{
			p[t][l] = line[idx];
			idx++;
		}
		p[t][l] = '\0';
		p[t] = NULL;
	}
	return (p)
}
