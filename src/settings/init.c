/*
** EPITECH PROJECT, 2020
** init
** File description:
** init
*/

#include "my.h"

void event_settings(utils_t *utils)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(utils->window);

    if (!utils)
        return;
    if (utils->event.type == sfEvtMouseButtonPressed &&
            (pos.x >= 1816 && pos.x <= 1869) &&
            (pos.y >= 35 && pos.y <= 90) && utils->in_start == true) {
        utils->back_to_start = true;
        utils->in_game = false;
        utils->in_settings = true;
        sfRenderWindow_clear(utils->window, sfBlack);
    }
    if (utils->event.type == sfEvtMouseButtonPressed &&
            (pos.x >= 1816 && pos.x <= 1869) &&
            (pos.y >= 35 && pos.y <= 90) && utils->in_game == true) {
        utils->in_game = false;
        utils->in_settings = true;
        sfRenderWindow_clear(utils->window, sfBlack);
    }
}

int init_game_three(game_t *game)
{
    sfVector2f scale = {0.3, 0.3};
    sfSprite_setTexture(game->settings->settings_sprite,
                        game->settings->settings_texture, sfTrue);
    sfSprite_setTexture(game->settings->circle_sprite,
                        game->settings->circle_texture, sfTrue);
    sfSprite_setScale(game->settings->settings_sprite, scale);
    sfSprite_setTexture(game->settings->bar_sprite,
                        game->settings->bar_texture, sfTrue);
    return 0;
}

int init_settings_next(game_t *game)
{
    sfVector2f scale_2 = {0.9, 0.9};
    sfVector2f scale_3 = {0.1, 0.1};

    if (!game)
        return 84;
    sfSprite_setScale(game->settings->bar_sprite, scale_2);
    sfSprite_setScale(game->settings->circle_sprite, scale_3);
    game->settings->settings_texture = sfTexture_createFromFile
                                    ("./utils/imgs/settings.png", NULL);
    game->settings->settings_texture_highlight = sfTexture_createFromFile
                            ("./utils/imgs/settings_highlight.png", NULL);
    if (!game->settings->settings_texture
    || !game->settings->settings_texture_highlight)
        return 84;
    init_game_three(game);
    return 0;
}

int init_settings(game_t *game)
{
    sfVector2f pos = {1800, 25};
    sfVector2f pos_2 = {750, 370};
    sfVector2f pos_3 = {810, 520};

    game->settings->settings_sprite = sfSprite_create();
    game->settings->bar_sprite = sfSprite_create();
    game->settings->circle_sprite = sfSprite_create();
    game->settings->bar_texture = sfTexture_createFromFile
                            ("./utils/imgs/sound_bar.png", NULL);
    game->settings->circle_texture = sfTexture_createFromFile
                            ("./utils/imgs/circle.png", NULL);
    if (!game->settings->settings_sprite || !game->settings->bar_sprite
    || !game->settings->circle_sprite || !game->settings->bar_texture
    || !game->settings->circle_texture || init_settings_next(game) == 84)
        return 84;
    sfSprite_setPosition(game->settings->bar_sprite, pos_2);
    sfSprite_setPosition(game->settings->circle_sprite, pos_3);
    sfSprite_setPosition(game->settings->settings_sprite, pos);
    return 0;
}