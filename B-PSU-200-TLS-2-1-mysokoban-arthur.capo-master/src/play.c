/*
** EPITECH PROJECT, 2021
** play
** File description:
** game loop
*/

#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "my.h"
#include "sokoban.h"

int count_O(sokoban_t *so)
{
    int count_o = 0;

    for (int row = 0; so->map[row] != NULL; row++) {
        for (int col = 0; so->map[row][col] != '\0'; col++) {
            if (so->map[row][col] == 'O') {
                count_o++;
            }
        }
    }
    return (count_o);
}

void game_loop(char *path, sokoban_t *so)
{
    so->map = read_map(path);
    int lines = count_raw(path);
    int o = count_O(so);

    initscr();
	keypad(stdscr, TRUE);
    curs_set(0);
    found_player(so);
    refresh();
    while (o != 0) {
        display_map(so);
        refresh();
        so->key = getch();
        key_pressed_right(so);
        o = count_O(so);
        refresh();
    }
    endwin();
}

void found_player(sokoban_t *so)
{
    for (int row = 0; so->map[row] != NULL; row++){
        for (int col = 0; so->map[row][col] != '\0'; col++) {
            if (so->map[row][col] == 'P') {
            so->map[row][col] = ' ';
            so->y = row;
            so->x = col;
            }
        }
    }
}

int display_map(sokoban_t *so)
{
    int len = my_strlen(so->map[0]);
    int x = (COLS / 2) - (len / 2);
    int y = (LINES / 2) - (count_tab_row(so->map) / 2);

    for (int i = 0; so->map[i] != 0; i++) {
        mvprintw(y + i, x, so->map[i]);
    }
    mvprintw(so->y + y, so->x + x, "P");
    return 0;
}