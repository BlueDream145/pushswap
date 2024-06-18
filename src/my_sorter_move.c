/*
** EPITECH PROJECT, 2018
** my_sorter_move.c
** File description:
**
*/

#include "pushswap.h"

int remove_first_entry(int *arr, int len)
{
	int i = 0;
	int first_value;

	for (i = 0; i < len && arr[i] != -1; i++)
		if (i > 0)
			arr[i - 1] = arr[i];
		else
			first_value = arr[i];
	arr[i - 1] = -1;
	return (first_value);
}

void add_to(int *arr, int value, int order, int len)
{
	int i = 1;
	int temp = arr[0];
	int temp2 = 0;

	if (order == 0) {
		for (i = 1; i < len; i++) {
			temp2 = arr[i];
			arr[i] = temp;
			temp = temp2;
		}
		arr[0] = value;
	}
	else {
		for (i = 0; arr[i] != -1; i++);
		arr[i] = value;
	}
}
