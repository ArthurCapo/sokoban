/*
** EPITECH PROJECT, 2021
** key
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"

int key_pressed_right(sokoban_t *so)
{
    if (so->key == KEY_RIGHT) {
        move_right(so);
    }
    if (so->key == KEY_UP) {
        move_up(so);
    }
    if (so->key == KEY_DOWN) {
        move_down(so);
    }
    if (so->key == KEY_LEFT) {
        move_left(so);
    }
}
