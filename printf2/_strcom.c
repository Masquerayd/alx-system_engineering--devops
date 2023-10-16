#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strcom - combines two strings
 * @str1: the first string
 * @str2: the second string
 * Returns: A pointer to the combined string
 */
char *_strcom(char *str1,char *str2)
{
	char *strcombed;
	int count = 0;
	int count2 = 0;


/*
 * creating Dynamic memory for the two strings
 */
	strcombed = malloc(sizeof(char)*_strlen(str1) + sizeof(str2)*_strlen(str2));

	while (*(str1 + count) != '\0')
	{
		*(strcombed + count) = *(str1 + count);
		count++;
	}

	while (*(str2 + count2) != '\0')
	{
		*(strcombed + count) = *(str2 + count2);
		count++;
		count2++;
	}
	return (strcombed);
}
