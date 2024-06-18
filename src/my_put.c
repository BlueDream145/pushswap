/*
** EPITECH PROJECT, 2018
** my_put.c
** File description:
** 
*/

#include "pushswap.h"

void my_put_char(char c)
{

	write(1, &c, 1);
}

void my_put_str(const char *str)
{
	int length = 0;

	while (str[length] != '\0') {
		my_put_char(str[length]);
		length++;
	}
}

void my_put_nbr(int nbr)
{
	if (nbr == -2147483648)
		my_put_str("-2147483648");
	else if (nbr < 0)
	{
		my_put_char('-');
		nbr *= -1;
		my_put_nbr(nbr);
	}
	else if (nbr >= 10)
	{
		my_put_nbr(nbr / 10);
		my_put_nbr(nbr % 10);
	}
	else
		my_put_char(nbr + '0');
}

void my_put_array(int len, int *arr)
{
	int i = 0;

	for (i = 0; i < len; i++) {
		my_put_nbr(arr[i]);
		my_put_char(' ');
	}
	my_put_char('\n');
}
