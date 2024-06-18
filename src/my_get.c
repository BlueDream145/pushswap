/*
** EPITECH PROJECT, 2018
** my_get.c
** File description:
** 
*/

#include "pushswap.h"

struct request* get_request()
{
	struct request *request = malloc(sizeof(struct request));

	request->display_status = 0;
	request->f_sorted = 0;
	request->s_sorted = 0;
	return (request);
}
