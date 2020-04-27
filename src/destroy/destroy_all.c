/*
** EPITECH PROJECT, 2020
** all
** File description:
** all
*/

#include "my.h"

int destroy_all(game_t *game)
{
    destroy_achievement(game);
    destroy_ancient(game);
    return 0;
}