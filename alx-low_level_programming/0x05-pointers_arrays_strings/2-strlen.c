#include "main.h"
/**
 * _strlen - returns the length of a string
 * Return: length
 * @s: string
 */
int _strlen(char *s)
  {
	int longi = 0;

	while (*s != '\0')
	{
		s++;
                longi++;
	}

	return (longi);
  }
