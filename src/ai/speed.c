/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-remi.grimault
** File description:
** main
*/

/* SYSTEM INCLUDES */
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/* LOCAL INCLUDES */
#include "constants.h"
#include "n4s.h"
#include "utils.h"

void set_veh_speed(double speed_value)
{
    dprintf(1, "CAR_FORWARD:%.2f\n", speed_value);

    char *end = get_line();
    if (end_detection(end)) {
        free(end);
        exit(0);
    }

    free(end);
}
