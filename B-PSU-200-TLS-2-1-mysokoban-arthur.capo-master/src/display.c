/*
** EPITECH PROJECT, 2021
** display
** File description:
** sokoban
*/

#include "my.h"
#include "sokoban.h"

int count_raw(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (str[i] != '\n') {
            count++;
        }
        i++;
    }
    return (count);
}

int count_col(char *str)
{
    int i = 0;

    while (str[i] != '\n')
        i++;
    return (i);
}

char **tab_create(char *str)
{
    int raw = count_raw(str);
    int col = count_col(str);
    int o = 0;
    char **map = NULL;

    map = malloc(sizeof(char *) * (raw + 1));
    map[o] = malloc(sizeof(char) * (col + 1));
    for (int i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            map[o][j] = 0;
            o++;
            map[o] = malloc(sizeof(char) * (col + 1));
            j = 0;
        } else {
            map[o][j] = str[i];
            j++;
        }
    }
    map[o] = NULL;
    return (map);
}

int count_tab_row(char **tab)
{
    int i = 0;
    int count = 0;

    while (tab[i] != NULL) {
        i++;
    }
    return (i);
}