/*
** EPITECH PROJECT, 2018
** my_engine.c
** File description:
**
*/

#include "pushswap.h"

void serialize(int ac, char **as, struct request *request)
{
	if (request->display_status == 1)
		ac--;
	request->len = ac - 1;
	request->list_f = malloc(sizeof(int) * request->len);
	request->list_s = malloc(sizeof(int) * request->len);

	for (int i = 1; i < ac; i++)
		request->list_f[i - 1] = my_atoi(as[i]);
	for (int i = 0; i < ac - 1; i++)
		request->list_s[i] = -1;
}

void process(struct request *req)
{
	while (1) {
		if (req->list_f[0] > get_last(req->list_f, req->len))
			rotate(req->list_f, req, 'a');
		if (req->list_f[0] > req->list_f[1])
			swap(req->list_f, 'a', req);
		req->f_sorted = list_sorted(req);
		if (req->f_sorted == 0 &&
			(req->list_f[0] < req->list_f[1])) {
			push(req->list_f, req->list_s, req, 'b');
			clean_bucket(req);
		}
		while (req->f_sorted == 1) {
			if (req->f_sorted == 1 && req->list_s[0] == -1)
				break;
			push(req->list_s, req->list_f, req, 'a');
			req->f_sorted = list_sorted(req);
		}
		if (req->f_sorted == 1 && req->list_s[0] == -1)
			break;
	}
}

void clean_bucket(struct request *request)
{
	if (request->list_s[1] != -1) {
		if (request->list_s[0] < get_last(request->list_s,
			request->len))
			rotate(request->list_s, request, 'b');
		if (request->list_s[0] < request->list_s[1])
			swap(request->list_s, 'b', request);
	}
}

void display(struct request *request)
{
	if (request->display_status == 0)
		return;
	my_put_char('\n');
	for (int i = 0; i < request->len; i++) {
		my_put_nbr(request->list_f[i]);
		if (i + 1 < request->len)
			my_put_char(' ');
	}
	my_put_char('\n');
	for (int i = 0; i < request->len; i++) {
		my_put_nbr(request->list_s[i]);
		if (i + 1 < request->len)
			my_put_char(' ');
	}
}
