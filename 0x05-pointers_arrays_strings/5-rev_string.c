#include "main.h"

/**
 * rev_string -function that reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, c = 0;
	char temp_fil;

	while (s[len] != '\0')
		len++;
	while (c < len--)
	{
		temp_fil = s[c];
		s[c++] = s[len];
		s[len] = temp_fil;
	}
}
