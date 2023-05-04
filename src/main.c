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
#include "init.h"

int main(void)
{
    vehicle_t *vehicle = init_vehicle();
    if (vehicle == NULL)
        return (CRETURN_FAILURE);

    char *info = get_line();
    if (end_detection(info)) {
        free(info);
        exit(0);
    }

    free(info);

    if (init_simulation(vehicle) == CRETURN_FAILURE)
        return (CRETURN_FAILURE);

    return (CRETURN_SUCCESS);
}
