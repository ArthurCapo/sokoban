/*
** EPITECH PROJECT, 2020
** my_h
** File description:
** project
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include "sokoban.h"

#define _GNU_SOURCE

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_printf(char *str, ...);
void swap_elem(int *array, int index1, int index2);
void bubble_sort(int *array, int size);
char **tab_create(char *str);
int count_col(char *str);
int count_raw(char *str);
void tab_diplay(char **tab);
char **read_map(char *filepath);
char *my_strcp(char *src, char *dest);

#endif
