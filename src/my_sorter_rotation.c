/*
** EPITECH PROJECT, 2018
** my_sorter_rotation.c
** File description:
**
*/

#include "pushswap.h"

void rotate(int *arr, struct request *request, char c)
{
	int first_entry = remove_first_entry(arr, request->len);

	add_to(arr, first_entry, request->len, request->len);
	my_put_char('r');
	my_put_char(c);
	end_instruction(request);
}
