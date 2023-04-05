#include "main.h"

/**
 * remove_consec_wild - moves pointer to last '*' of consecutive '*' in string
 * @s: the string
 *
 * Return: a pointer to the last '*' of consecutive '*' in string
 */
char *remove_consec_wild(char *s)
{
	if (*(s + 1) != '\0' && *(s + 1) == '*')
		return (remove_consec_wild(++s));

	return (s);
}

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string, can contain the special character '*' that can
 * replace any string including an empty string
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*(s2 + 1) != '\0' && *s2 == '*')
		s2 = remove_consec_wild(s2);

	/* make sure characters after * in s2 are present in s1 */
	if (*(s2 + 1) != '\0' && *s2 == '*' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/**
	 * if current char of s2 is *, check both ignoring and considering the
	 * current character of s1
	 */
	if (*s2 != '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
