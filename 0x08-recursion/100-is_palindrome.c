#include "main.h"

int check_palindrome(char *s);

/**
  * is_palindrome - Return if string is indeed a palindrome
  * @s: string to be evaluated
  *
  * Return: 1 on success, 0 if not
  */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
  * check_palindrome - Check if a string is a palindrome
  * @s: the string that is to be checked
  *
  * Return: 1 on success, 0 if not
  */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
  * _strlen_recursion - calculate the length of a string and get it
  * @s: the string we need find the lenghth of
  *
  * Return: 1 on success, 0 if not
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
