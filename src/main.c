/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** 
*/

#include "pushswap.h"

int main(int ac, char **as)
{
	const int exit_success = 0;
	const int exit_error = 84;
	struct request *request = get_request();

	check(ac, as, request);
	if (ac > 2) {
		serialize(ac, as, request);
		if (list_sorted(request) == 1 || request->len > 2300) {
			my_put_char('\n');
			return (exit_success);
		}
		process(request);
		if (request->display_status == 0)
			my_put_char('\n');
		return (exit_success);
	}
	my_put_char('\n');
	return (exit_error);
}

void check(int ac, char **as, struct request *request)
{
	if (ac <= 2)
		return;
	if (my_strcmp(as[ac - 1], "-v") == 0 ||
		my_strcmp(as[ac - 1], "-V") == 0)
		request->display_status = 1;
}
