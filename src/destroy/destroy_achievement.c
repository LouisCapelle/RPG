/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** destroy
*/

#include "my.h"

int destroy_achievement(game_t *game)
{
    if (!game)
        return 84;
    sfText_destroy(game->achiv->not_talked);
    sfText_destroy(game->achiv->killing);
    sfText_destroy(game->achiv->keys);
    sfText_destroy(game->achiv->golds);
    sfText_destroy(game->achiv->p_golds);
    sfText_destroy(game->achiv->p_keys);
    sfText_destroy(game->achiv->p_killing);
    sfFont_destroy(game->achiv->font);
    sfSprite_destroy(game->achiv->back);
    sfSprite_destroy(game->achiv->tick);
    sfSprite_destroy(game->achiv->cross);
    sfTexture_destroy(game->achiv->cross_text);
    sfTexture_destroy(game->achiv->tick_text);
    sfTexture_destroy(game->achiv->back_text);
    return 0;
}