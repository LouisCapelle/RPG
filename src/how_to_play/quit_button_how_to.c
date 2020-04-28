/*
** EPITECH PROJECT, 2020
** how_to
** File description:
** how_to
*/

#include "my.h"

int display_quit_highlight(game_t *game)
{
    if (!game)
        return 84;
    return 0;
}

int quit_how_to_highlight(game_t *game)
{
    sfVector2f pos = {1700, 850};
    sfVector2f scale = {0.5, 0.5};

    if (!game)
        return 84;
    game->how_to->sprite_quit_highlight = sfSprite_create();
    game->how_to->texture_quit_highlight = sfTexture_createFromFile
        ("./utils/imgs/quit_how_to_play_highlight.png", NULL);
    if (!game->how_to->sprite_quit_highlight
    || !game->how_to->texture_quit_highlight)
        return 84;
    sfSprite_setTexture(game->how_to->sprite_quit_highlight,
                        game->how_to->texture_quit_highlight, sfTrue);
    sfSprite_setScale(game->how_to->sprite_quit_highlight, scale);
    sfSprite_setPosition(game->how_to->sprite_quit_highlight, pos);
    return 0;
}

int quit_how_to(game_t *game)
{
    sfVector2f pos = {1700, 850};
    sfVector2f scale = {0.5, 0.5};

    if (!game)
        return 84;
    game->how_to->sprite_quit = sfSprite_create();
    game->how_to->texture_quit = sfTexture_createFromFile
        ("./utils/imgs/quit_how_to_play.png", NULL);
    if (!game->how_to->sprite_quit || !game->how_to->texture_quit)
        return 84;
    sfSprite_setTexture(game->how_to->sprite_quit,
                        game->how_to->texture_quit, sfTrue);
    sfSprite_setScale(game->how_to->sprite_quit, scale);
    sfSprite_setPosition(game->how_to->sprite_quit, pos);
    return 0;
}