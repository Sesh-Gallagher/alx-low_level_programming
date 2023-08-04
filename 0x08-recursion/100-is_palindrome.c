#include "main.h"

int check_pal(char *s, int a, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - evaluates if string is a palindrome
 * @s: string to be reversed
 *
 * Return: 1 on successs, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns length of the string
 * @s: integer to calculate the length of string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks palindrome characters recursively
 * @s: string to check
 * @a: iterator
 * @len: length of the string
 *
 * Return: 1 on success, 0 if not
 */
int check_pal(char *s, int a, int len)
{
	if (*(s + a) != *(s + len - 1))
		return (0);
	if (a >= len)
		return (1);
	return (check_pal(s, a + 1, len - 1));
}
