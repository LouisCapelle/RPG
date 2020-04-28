/*
** EPITECH PROJECT, 2020
** init
** File description:
** init
*/

#include "my.h"

int init_death(game_t *game)
{
    sfVector2f pos = {700, 350};

    game->death_screen->death_text = sfText_create();
    game->death_screen->font = sfFont_createFromFile("./utils/font/horrendo.ttf");
    sfText_setFont(game->death_screen->death_text, game->death_screen->font);
    sfText_setCharacterSize(game->death_screen->death_text, 150);
    sfText_setString(game->death_screen->death_text, "DEAD");
    sfText_setPosition(game->death_screen->death_text, pos);
    return 0;
}