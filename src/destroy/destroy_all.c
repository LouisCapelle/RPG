/*
** EPITECH PROJECT, 2020
** all
** File description:
** all
*/

#include "my.h"

int destroy_score(game_t *game)
{
    sfFont_destroy(game->score->font);
    sfText_destroy(game->score->live_int);
    sfText_destroy(game->score->live_text);
    return 0;
}

int free_struct(game_t *game)
{
    free(game->play->attack);
    free(game->play->heart);
    free(game->how_to);
    free(game->inv);
    free(game->key);
    free(game->map);
    free(game->pausemenu);
    free(game->play);
    free(game->pnj);
    free(game->score);
    free(game->select);
    free(game->settings);
    free(game->startmenu);
    free(game->utils);
    return 0;
}

int destroy_all(game_t *game)
{
    destroy_achievement(game);
    destroy_ancient(game);
    destroy_menu(game);
    destroy_player(game);
    destroy_how_to(game);
    destroy_inventory(game->inv);
    destroy_dungeon(game);
    destroy_selection(game->select);
    destroy_score(game);
    free_struct(game);
    return 0;
}