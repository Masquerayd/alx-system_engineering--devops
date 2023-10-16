#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/*
 * merstr - Merges two string from skipping character defined by position
 * @format: The format string that will be merged to
 * @arg: The argument sting that will be merged into the formate sting
 * Return: The number of characters printed
 */
int merstr(const char* format, char* arg, int position)
{
	int count = 0;
	char *buffer;
	char temp;
	int buflength;


	buffer = malloc(sizeof(char)*position);
	
/*
 * decresing postion to move behind %
 */
 	position--;
 
/*
 * coping string from format to buffer until position
 */

	while (count != position)
	{
		temp = *(format + count);
		*(buffer + count) = temp;
		count++;
	}
/*
 * combining string
 */

	buffer = _strcom(buffer, arg);

/*
 * getting length
 */
	buflength = _strlen(buffer);

/* 
 * printing sting
 */
	printstr(buffer,buflength);
	free(buffer);

	return (buflength);
}
