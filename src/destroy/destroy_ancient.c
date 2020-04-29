/*
** EPITECH PROJECT, 2020
** ancient
** File description:
** ancient
*/

#include "my.h"

int destroy_ancient(game_t *game)
{
    if (!game)
        return 84;
    sfTexture_destroy(game->pnj->texture);
    sfSprite_destroy(game->pnj->sprite);
    sfFont_destroy(game->pnj->font);
    sfText_destroy(game->pnj->text);
    sfSprite_destroy(game->pnj->bulle);
    sfTexture_destroy(game->pnj->bulle_text);
    sfTexture_destroy(game->pnj->texture_dung);
    sfSprite_destroy(game->pnj->sprite_dung);
    sfSprite_destroy(game->pnj->not_enough);
    sfTexture_destroy(game->pnj->texture_not_enou);
    sfSprite_destroy(game->pnj->enter);
    sfTexture_destroy(game->pnj->texture_enter);
    return 0;
}