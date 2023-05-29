/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_putstr.c
*/

#include "my.h"
#include <unistd.h>

void my_putstr(char *str)
{
    write(1, str ,get_len((void **) &str, STRING));
}

void my_putstr_err(char *str)
{
    write(2, str ,get_len((void **) &str, STRING));
}
