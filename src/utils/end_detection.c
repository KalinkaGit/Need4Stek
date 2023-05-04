/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-remi.grimault
** File description:
** main
*/

/* SYSTEM INCLUDES */
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/* LOCAL INCLUDES */
#include "constants.h"
#include "n4s.h"

bool end_detection(char *line)
{
    if (strstr(line, "Track Cleared") != NULL) {
        write(1, "STOP_SIMULATION\n", 16);
        return (true);
    }

    return (false);
}
