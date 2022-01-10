/*
** EPITECH PROJECT, 2021
** my_strcp
** File description:
** soko
*/

#include "my.h"

char *my_strcp(char *src, char *dest)
{
    int i = 0;

    while (src[i] != '\0') {
        src[i] = dest[i];
        i++;
    }
    dest[i] = src[i];
    return (dest);
}