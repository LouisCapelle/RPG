/*
** EPITECH PROJECT, 2020
** sound
** File description:
** sound
*/

#include "my.h"

int get_value_sound(game_t *game)
{
    sfVector2f pos = sfSprite_getPosition(game->settings->circle_sprite);
    int result = 0;

    if (!game)
        return 84;
    result = pos.x - 800;
    return result;
}

int modify_sound(game_t *game)
{
    float sound = get_value_sound(game);

    if (sound >= 9 && sound <= 100)
        sfMusic_setVolume(game->utils->back_music, sound);
    if (!game)
        return 84;
    return 0;
}