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
    destroy_death_menu(game);
    //destroy_dungeon(game);
    destroy_player(game);
    return 0;
}