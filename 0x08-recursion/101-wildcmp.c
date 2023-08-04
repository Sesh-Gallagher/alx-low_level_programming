#include "main.h"

/**
 * wildcmp - Compare strings and return 1 if identical
 * @s1: pointer to string thats compared
 * @s2: pointer to string thats compared to first string
 * Return: 0
 */

int wildcmp(char *sum1, char *sum2)
{
        if (*sum1 == '\0')
        {
                if (*sum2 != '\0' && *sum2 == '*')
                {
                        return (wildcmp(sum1, sum2 + 1));
                }
                return (*sum2 == '\0');
        }

	if (*sum2 == '*')
	{
		return (wildcmp(sum1 + 1, sum2) || wildcmp(sum1, sum2 + 1));
	}
	else if (*sum1 == *sum2)
	{
		return (wildcmp(sum1 + 1, sum2 + 1));
	}
	return (0);
}

