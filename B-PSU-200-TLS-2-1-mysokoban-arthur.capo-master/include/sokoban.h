/*
** EPITECH PROJECT, 2021
** sokoban
** File description:
** sokoban
*/

#ifndef sokoban_
#define sokoban_
#define _GNU_SOURCE

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>

typedef struct sokoban {
    char **map;
    int x;
    int y;
    int key;
    int o;
    char *str;
} sokoban_t;

void move_right(sokoban_t *so);
int key_pressed_right(sokoban_t *so);
void game_loop(char *path, sokoban_t *so);
int count_tab_row(char **tab);
void found_player(sokoban_t *so);
int display_map(sokoban_t *so);
void win(sokoban_t *so);

#endif /* !sokoban */
