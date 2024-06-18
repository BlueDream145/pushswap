/*
** EPITECH PROJECT, 2018
** my_sorter_basics.c
** File description:
**
*/

#include "pushswap.h"

void swap(int *arr, char c, struct request *request)
{
	int temp = arr[0];

	arr[0] = arr[1];
	arr[1] = temp;
	my_put_char('s');
	my_put_char(c);
	end_instruction(request);
}

void push(int *arr, int *arr2, struct request *request, char c)
{
	int value = remove_first_entry(arr, request->len);

	add_to(arr2, value, 0, request->len);
	my_put_char('p');
	my_put_char(c);
	end_instruction(request);
}
