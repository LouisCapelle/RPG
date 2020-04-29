/*
** EPITECH PROJECT, 2020
** menu
** File description:
** menu
*/

#include "my.h"

int destroy_button(startmenu_t *startmenu)
{
    if (!startmenu)
        return 84;
    sfSprite_destroy(startmenu->quit_sprite);
    sfSprite_destroy(startmenu->start_sprite);
    sfTexture_destroy(startmenu->quit_texture);
    sfTexture_destroy(startmenu->start_texture);
    sfSprite_destroy(startmenu->background_sprite);
    sfTexture_destroy(startmenu->background_texture);
    return 0;
}

int destroy_menu(game_t *game)
{
    if (!game)
        return 84;
    sfTexture_destroy(game->pausemenu->main_texture);
    sfSprite_destroy(game->pausemenu->background_sprite);
    sfSprite_destroy(game->pausemenu->main_sprite);
    sfSprite_destroy(game->pausemenu->quit_sprite);
    sfSprite_destroy(game->pausemenu->start_sprite);
    sfTexture_destroy(game->pausemenu->main_texture_highlight);
    sfTexture_destroy(game->settings->settings_texture);
    sfTexture_destroy(game->settings->settings_texture_highlight);
    sfTexture_destroy(game->settings->bar_texture);
    sfSprite_destroy(game->settings->settings_sprite);
    sfSprite_destroy(game->settings->bar_sprite);
    sfSprite_destroy(game->settings->circle_sprite);
    sfTexture_destroy(game->startmenu->quit_texture_highlight);
    sfTexture_destroy(game->startmenu->start_texture_highlight);
    destroy_button(game->startmenu);
    return 0;
}