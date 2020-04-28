/*
** EPITECH PROJECT, 2020
** init
** File description:
** init
*/

#include "my.h"

int init_death(game_t *game)
{
    sfVector2f pos = {700, 350};
    sfVector2f pos_2 = {710, 800};
    sfVector2f pos_3 = {925, 800};
    sfVector2f scale = {0.7, 0.7};

    init_highlight_death(game);
    game->death_screen->death_text = sfText_create();
    game->death_screen->font = sfFont_createFromFile("./utils/font/horrendo.ttf");
    game->death_screen->start_texture = sfTexture_createFromFile("./utils/imgs/Play_Again_highlight.png", NULL);
    game->death_screen->start_texture_highlight = sfTexture_createFromFile("./utils/imgs/Play_Again.png", NULL);
    sfText_setFont(game->death_screen->death_text, game->death_screen->font);
    sfText_setCharacterSize(game->death_screen->death_text, 150);
    sfText_setString(game->death_screen->death_text, "DEAD");
    sfText_setPosition(game->death_screen->death_text, pos);
    game->death_screen->quit_sprite = sfSprite_create();
    game->death_screen->start_sprite = sfSprite_create();
    sfSprite_setTexture(game->death_screen->quit_sprite,
                        game->startmenu->quit_texture, sfTrue);
    sfSprite_setTexture(game->death_screen->start_sprite,
                        game->death_screen->start_texture, sfTrue);
    sfSprite_setPosition(game->death_screen->quit_sprite, pos_2);
    sfSprite_setPosition(game->death_screen->start_sprite, pos_3);
    sfSprite_setScale(game->death_screen->quit_sprite, scale);
    sfSprite_setScale(game->death_screen->start_sprite, scale);
    return 0;
}