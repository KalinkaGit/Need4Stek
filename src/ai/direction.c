/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-remi.grimault
** File description:
** direction
*/

/* SYSTEM INCLUDES */
#include <stdio.h>
#include <stdlib.h>

/* LOCAL INCLUDES */
#include "constants.h"
#include "n4s.h"
#include "utils.h"

void set_wheels_dir(double dir_value, bool right)
{
    if (right)
        dprintf(1, "WHEELS_DIR:-%.2f\n", dir_value);
    else
        dprintf(1, "WHEELS_DIR:%.2f\n", dir_value);

    char *end = get_line();
    if (end_detection(end)) {
        free(end);
        exit(0);
    }

    free(end);
}
