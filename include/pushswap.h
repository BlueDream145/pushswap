/*
** EPITECH PROJECT, 2017
** file.h
** File description:
**
*/

#ifndef pushswap_
#define pushswap_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct request {
	int *list_f;
	int *list_s;
	int f_sorted;
	int s_sorted;
	int len;
	int display_status;
};

// main.c
void check(int ac, char **as, struct request *request);

// my_engine.c
void serialize(int ac, char **as, struct request *req);
void process(struct request *request);
void display(struct request *request);
void clean_bucket(struct request *request);

// my_get.c
struct request* get_request();

// my_put.c
void my_put_char(char c);
void my_put_str(const char *str);
void my_put_nbr(int nbr);
void my_put_array(int len, int *arr);

// my_sorter_basics.c
void swap(int *arr, char c, struct request *request);
void push(int *arr, int *arr2, struct request *request, char c);

// my_sorter_move.c
int remove_first_entry(int *arr, int len);
void add_to(int *arr, int value, int order, int len);

// my_sorter_rotation.c
void rotate(int *arr, struct request *request, char c);

// my_sorter.c
int list_sorted(struct request *request);
int get_last(int *arr, int len);
void end_instruction(struct request *request);

// my_string.c
int my_strcmp(const char *s1, const char *s2);
int my_atoi(char *str);
int my_str_isnum(const char *str);

#endif /* pushswap */
