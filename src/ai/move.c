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

static const double direction_w[7] = {0.8, 0.28, 0.22, 0.18, 0.12, 0.08, 0.01};
static const double direction_l[6] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.6};
static const int direction_r[6] = {300, 400, 500, 700, 1020, 1350};

void adapt_wheels(vehicle_t *info, bool right)
{
    int i = 0;

    while (i <= 6 && info->front >= direction_r[i]) {
        i++;
    }

    set_wheels_dir(direction_w[i], right);
    set_veh_speed(direction_l[i]);
}

return_code_t move_vehicle(vehicle_t *info, char **lidar)
{
    if (info == NULL || lidar == NULL)
        return (CRETURN_FAILURE);

    info->left = atof(lidar[3]);
    info->front = atof(lidar[19]);
    info->right = atof(lidar[34]);

    if (info->left > info->right) {
        adapt_wheels(info, false);
    } else {
        adapt_wheels(info, true);
    }

    if (end_detection(lidar[35])) {
        exit(0);
    }

    return (CRETURN_SUCCESS);
}
