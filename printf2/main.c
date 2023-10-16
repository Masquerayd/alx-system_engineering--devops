#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int len;
char *str = "Hello%";
char *str1 = "Coder\n";
/*char *strcomb;
*/

/*len = merstr(str, str1, 5); 
*/
/*printf("%d\n",len);
  */
/*
*_printf("hello\n");
*/
/*printstr(str, len);
*/
/* 
 * _strcom combines the string and returns a pointer to a string
 */
/*strcomb = _strcom(str, str1);
*/

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
 _printf("Character:[%c]\n", 'H');
 printf("Character:[%c]\n", 'H');
 _printf("String:[%s]\n", "I am a string !");
 printf("String:[%s]\n", "I am a string !");
 /*len = _printf("Percent:[%%]\n");
 *len2 = printf("Percent:[%%]\n");
 */
return (0);
 
}
