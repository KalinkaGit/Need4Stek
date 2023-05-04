/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-remi.grimault
** File description:
** utils
*/

#ifndef UTILS_H_
    #define UTILS_H_

    /* SYSTEM INCLUDES */
    #include <stdbool.h>

    char **parse_lidar(char *buffer);
    bool end_detection(char *line);
    char *get_line(void);

#endif /* !UTILS_H_ */
