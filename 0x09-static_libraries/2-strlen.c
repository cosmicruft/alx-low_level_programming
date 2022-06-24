#include "main.h"
/**
* _strlen - returns the length of a string
* @s: input string.
* Return: length of a string.
*/
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
#include "main.h"

/**
* _strlen - Returns the length of a string.
* @str: string.
*
* Return: Length.
*/
int _strlen(char *s)
{
        int len = 0;

        while (*s++)
                len++;

        return (len);
}
#include "main.h"

/**
* _strlen - Returns the length of a string.
* @str: string.
*
* Return: Length.
*/
int _strlen(char *s)
{
        int len = 0;

        while (*s++)
                len++;

        return (len);
}
