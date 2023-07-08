#include "main.h"
#include<stdio.h>
/**
 * _puts: Function
 * @str: Input
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
