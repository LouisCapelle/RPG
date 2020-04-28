/*
** EPITECH PROJECT, 2020
** highlight
** File description:
** highlight
*/

#include "my.h"

int init_highlight_death(game_t *game)
{

}

int display_highlight_death(game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->utils->window);

    if (mouse.x > 711 && mouse.x < 888 && mouse.y > 801 && mouse.y < 895) {
        sfSprite_setTexture(game->death_screen->quit_sprite,
                            game->startmenu->quit_texture_highlight, NULL);
    } else {
        sfSprite_setTexture(game->death_screen->quit_sprite,
                            game->startmenu->quit_texture, NULL);
    }
}