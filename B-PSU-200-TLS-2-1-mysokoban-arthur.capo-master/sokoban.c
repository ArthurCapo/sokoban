/*
** EPITECH PROJECT, 2021
** sokoban
** File description:
** projet
*/

#include "include/my.h"
#include "include/sokoban.h"

char **read_map(char *filepath)
{
    int fo;
    int size = __INT_MAX__;
    char *buffer;
    struct stat sb;
    char **tab = NULL;

    stat(filepath, &sb);
    fo = open(filepath, O_RDONLY);
    buffer = malloc(sizeof(char) * (sb.st_size + 1));
    read(fo, buffer, sb.st_size);
    buffer[sb.st_size] = 0;

    return (tab_create(buffer));
}

void help()
{
    my_printf("USAGE\n");
    my_printf("\n\t./my_sokoban map\n");
    my_printf("\nDESCRIPTION\n");
    my_printf("\n\tmap   file representing the warehouse map");
    my_printf("containing ‘#’ for walls,\n");
    my_printf("\t‘P’ for the player, ‘X’ for boxes and ‘O’ for storage locations.\n");
}

int main(int ac, char **av)
{
    char *str;
    sokoban_t so;

    if (ac != 2 && av[1][0] != '-' && av[1][1] != 'h') {
        return (84);
    }
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        help();
        else 
        game_loop(av[1], &so);
}
