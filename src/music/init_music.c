/*
** EPITECH PROJECT, 2020
** musc
** File description:
** init_music
*/

#include "my.h"

int init_music(game_t *game)
{
    game->utils->back_music = sfMusic_createFromFile("./music/music.ogg");
    sfMusic_setLoop(game->utils->back_music, sfTrue);
    sfMusic_play(game->utils->back_music);
    return 0;
}