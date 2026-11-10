#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 1;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i] != '\0')
	{
		int j = 0;

		while (sep[j] != '\0')
		{
			if (s[i - 1] == sep[j] &&
			    s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
