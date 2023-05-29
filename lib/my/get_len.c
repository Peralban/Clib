/*
** EPITECH PROJECT, 2022
** get_len.c
** File description:
** A function that counts and returns
** the number of characters found in the
** string passed as parameter.
*/

#include "my.h"
#include <stdlib.h>

int get_len(void **obj, int type)
{
    int i = 0;

    if (obj == NULL || *obj == NULL)
        return 0;
    if (type == STRING) {
        while (((char**)(obj))[0][i] != '\0')
            i++;
    } else {
        while (((char***)(obj))[0][i] != NULL)
            i++;
    }
    return i;
}
