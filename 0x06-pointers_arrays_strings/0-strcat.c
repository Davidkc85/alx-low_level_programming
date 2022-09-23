#include "main.h"
/**
 * _strcat - function that concatenates teo strings.
 * @dest: pointer to destination string.
 *
 * Return: pointerto destination string.
 */
char *_strcat(char *dest, char *scr)
{
	int length, j; /* j will hold the lenght of the source */

	length = 0;
	while (dest[length] != '\0')
		{
			length = ++;
		}
	for (j = 0; scr[j] != '\0'; j++, length++)
	{
		dest[length] = scr[j];
	}
	dest[length] = '\0';
	return (dest);
}
