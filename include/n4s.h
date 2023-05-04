/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-remi.grimault
** File description:
** n4s
*/

#ifndef N4S_H_
    #define N4S_H_

    /* SYSTEM INCLUDES */
    #include <stdbool.h>

    /* LOCAL INCLUDES */
    #include "constants.h"

    typedef struct {
        double left;
        double front;
        double right;
        double speed;
    } vehicle_t;

    return_code_t move_vehicle(vehicle_t *info, char **lidar);
    void set_veh_speed(double speed_value);
    void set_wheels_dir(double dir_value, bool right);

#endif /* !N4S_H_ */
