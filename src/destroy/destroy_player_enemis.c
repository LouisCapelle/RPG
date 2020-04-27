/*
** EPITECH PROJECT, 2020
** player
** File description:
** player
*/

#include "my.h"

int destroy_player_life(game_t *game)
{
    sfSprite_destroy(game->play->heart->one);
    sfSprite_destroy(game->play->heart->two);
    sfSprite_destroy(game->play->heart->three);
    sfSprite_destroy(game->play->heart->four);
    sfSprite_destroy(game->play->heart->five);
    sfSprite_destroy(game->play->heart->empty_one);
    sfSprite_destroy(game->play->heart->empty_two);
    sfSprite_destroy(game->play->heart->empty_three);
    sfSprite_destroy(game->play->heart->empty_four);
    sfSprite_destroy(game->play->heart->empty_five);
    sfTexture_destroy(game->play->heart->texture_one);
    sfTexture_destroy(game->play->heart->texture_two);
    sfTexture_destroy(game->play->heart->texture_three);
    sfTexture_destroy(game->play->heart->texture_four);
    sfTexture_destroy(game->play->heart->texture_five);
    sfTexture_destroy(game->play->heart->empty_texture_one);
    sfTexture_destroy(game->play->heart->empty_texture_two);
    sfTexture_destroy(game->play->heart->empty_texture_three);
    sfTexture_destroy(game->play->heart->empty_texture_four);
    sfTexture_destroy(game->play->heart->empty_texture_five);
    return 0;
}

int destroy_player(game_t *game)
{
    sfSprite_destroy(game->play->player);
    sfClock_destroy(game->play->clock);
    destroy_player_life(game);
    return 0;
}