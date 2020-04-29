/*
** EPITECH PROJECT, 2020
** gameplay
** File description:
** gameplay
*/

#include "my.h"

int init_gameplay_next(play_t *play)
{
    if (!play)
        return 84;
    play->heart->player_text =
    sfTexture_createFromFile("utils/imgs/player.png", NULL);
    play->player = sfSprite_create();
    play->clock = sfClock_create();
    if (!play->player || !play->heart->player_text || !play->clock)
        return 84;
    sfSprite_setOrigin(play->player, play->origin);
    sfSprite_setTexture(play->player, play->heart->player_text, sfTrue);
    return 0;
}

int init_gameplay(play_t *play)
{
    sfIntRect rect = {0, 0, 350, 300};
    sfVector2f offset = {5, 0};

    if (!play)
        return 84;
    play->heart = malloc(sizeof(heart_t));
    play->attack = malloc(sizeof(attack_t));
    if (!play->heart || !play->attack)
        return 84;
    play->life = 5;
    play->x_play = 1000;
    play->y_play = 500;
    play->origin.x = 175;
    play->origin.y = 150;
    play->col_map = 0;
    play->line_map = 0;
    if (init_gameplay_next(play) == 84)
        return 84;
    play->rect = rect;
    play->offset = offset;
    return 0;
}