/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-remi.grimault
** File description:
** simulation
*/

/* SYSTEM INCLUDES */
#include <stdlib.h>
#include <unistd.h>

/* LOCAL INCLUDES */
#include "n4s.h"

vehicle_t *init_vehicle(void)
{
    vehicle_t *vehicle = malloc(sizeof(vehicle_t));
    if (vehicle == NULL)
        return (NULL);

    vehicle->left = 0;
    vehicle->front = 0;
    vehicle->right = 0;
    vehicle->speed = 0.4;

    write(1, "START_SIMULATION\n", 17);

    return (vehicle);
}
