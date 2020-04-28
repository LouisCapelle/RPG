/*
** EPITECH PROJECT, 2020
** display
** File description:
** display
*/

#include "my.h"

int display_death(game_t *game)
{
    sfRenderWindow_clear(game->utils->window, sfBlack);
    sfRenderWindow_drawSprite(game->utils->window,
                        game->startmenu->background_sprite, NULL);
    sfRenderWindow_drawText(game->utils->window,
                        game->death_screen->death_text, NULL);
    return 0;
}