/*
** EPITECH PROJECT, 2021
** mv_player
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"

void move_right(sokoban_t *so)
{
    if (so->map[so->y][so->x + 1] == 'X' && so->map[so->y][so->x + 2] == ' '
        || so->map[so->y][so->x + 1] == 'X' && so->map[so->y][so->x + 2] == 'O') {
        so->x = so->x + 1;
        so->map[so->y][so->x] = ' ';
        so->map[so->y][so->x + 1] = 'X';
    } else if (so->map[so->y][so->x + 1] == ' ' || so->map[so->y][so->x + 1] == 'O') {
        so->x = so->x + 1;
    }
}

void move_left(sokoban_t *so)
{
    if (so->map[so->y][so->x - 1] == 'X' && so->map[so->y][so->x - 2] == ' '
        || so->map[so->y][so->x - 1] == 'X' && so->map[so->y][so->x - 2] == 'O') {
        so->x = so->x - 1;
        so->map[so->y][so->x] = ' ';
        so->map[so->y][so->x - 1] = 'X';
    } else if (so->map[so->y][so->x - 1] == ' ' || so->map[so->y][so->x - 1] == 'O') {
        so->x = so->x - 1;
    }
}

void move_up(sokoban_t *so)
{
    if (so->map[so->y - 1][so->x] == 'X' && so->map[so->y - 2][so->x] == ' '
        || so->map[so->y - 1][so->x] == 'X' && so->map[so->y - 2][so->x] == 'O') {
        so->y = so->y - 1;
        so->map[so->y][so->x] = ' ';
        so->map[so->y - 1][so->x] = 'X';
    } else if (so->map[so->y - 1][so->x] == ' '|| so->map[so->y - 1][so->x] == 'O'){
        so->y = so->y - 1;
    }
}

void move_down(sokoban_t *so)
{
    if (so->map[so->y + 1][so->x] == 'X' && so->map[so->y + 2][so->x] == ' '
        || so->map[so->y + 1][so->x] == 'X' && so->map[so->y + 2][so->x] == 'O') {
        so->y = so->y + 1;
        so->map[so->y][so->x] = ' ';
        so->map[so->y + 1][so->x] = 'X';
    } else if (so->map[so->y + 1][so->x] == ' '|| so->map[so->y + 1][so->x] == 'O'){
        so->y = so->y + 1;
    }
}
