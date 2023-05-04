/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-remi.grimault
** File description:
** get_line
*/

/* SYSTEM INCLUDES */
#include <stdlib.h>
#include <stdio.h>

char *get_line(void)
{
    char *buffer = NULL;
    size_t size = 0;
    getline(&buffer, &size, stdin);
    return (buffer);
}
