/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-remi.grimault
** File description:
** parser
*/

/* SYSTEM INCLUDES */
#include <stdlib.h>
#include <string.h>

/* LOCAL INCLUDES */
#include "utils.h"

char **parse_lidar(char *buffer)
{
    if (buffer == NULL)
        return (NULL);

    char **lidar = malloc(sizeof(char *) * 36);
    if (lidar == NULL)
        return (NULL);

    char *token = strtok(buffer, ":");
    for (int i = 0; token != NULL; i++) {
        lidar[i] = token;
        token = strtok(NULL, ":");
    }

    return (lidar);
}
