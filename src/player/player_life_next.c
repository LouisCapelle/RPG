/*
** EPITECH PROJECT, 2020
** player
** File description:
** player
*/

#include "my.h"

int player_life_next(play_t *play)
{
    if (!play)
        return 84;
    play->heart->empty_texture_three =
        sfTexture_createFromFile("utils/imgs/empty_heart.png", NULL);
    play->heart->empty_texture_four
        = sfTexture_createFromFile("utils/imgs/empty_heart.png", NULL);
    play->heart->empty_texture_five
        = sfTexture_createFromFile("utils/imgs/empty_heart.png", NULL);
    if (!play->heart->texture_one  || !play->heart->texture_two
    || !play->heart->texture_three || !play->heart->texture_four
    || !play->heart->texture_five  || !play->heart->empty_texture_one
    || !play->heart->empty_texture_two || !play->heart->empty_texture_three
    || !play->heart->empty_texture_four || !play->heart->empty_texture_five)
        return 84;
    return 0;
}