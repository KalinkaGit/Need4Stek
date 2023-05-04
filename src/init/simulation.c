/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-remi.grimault
** File description:
** vehicle
*/

/* SYSTEM INCLUDES */
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* LOCAL INCLUDES */
#include "n4s.h"
#include "utils.h"
#include "constants.h"
#include "utils.h"

return_code_t simulation_loop(vehicle_t *vehicle)
{
    write(1, "GET_INFO_LIDAR\n", 15);
    char *info = get_line();
    if (end_detection(info)) {
        free(info);
        exit(0);
    }

    char **lidar = parse_lidar(info);
    if (lidar == NULL)
        return (CRETURN_FAILURE);

    if (strcmp(lidar[1], "OK") != 0)
        return (CRETURN_FAILURE);

    if (move_vehicle(vehicle, lidar) == CRETURN_FAILURE)
        return (CRETURN_FAILURE);

    free(info);

    return (CRETURN_SUCCESS);
}

return_code_t init_simulation(vehicle_t *vehicle)
{
    set_veh_speed(vehicle->speed);

    while (true) {
        if (simulation_loop(vehicle) == CRETURN_FAILURE)
            return (CRETURN_FAILURE);
    }

    return (0);
}
