/*
** EPITECH PROJECT, 2018
** my_sorter.c
** File description:
**
*/

#include "pushswap.h"

int list_sorted(struct request *request)
{
	const int true = 1;
	const int false = 0;
	int i;

	for (i = 1; i < request->len && request->list_f[i] != -1; i++) {
		if (request->list_f[i - 1] <= request->list_f[i])
			continue;
		else
			return (false);
	}
	return (true);
}

int get_last(int *arr, int len)
{
	int i;

	for (i = len - 1; i > 0; i--)
		if (arr[i] != -1)
			return (arr[i]);
	return (-1);
}

void end_instruction(struct request *request)
{
	display(request);
	if (request->display_status == 1)
		my_put_char('\n');
	else if (!(list_sorted(request) == 1 && request->list_s[0] == -1))
		my_put_char(' ');
}
