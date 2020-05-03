/*
** EPITECH PROJECT, 2020
** highlight
** File description:
** highlight
*/

#include "my.h"

int new_game(game_t *game)
{
    if (!game)
        return 84;
    game->utils->death = false;
    game->utils->in_game = true;
    game->play->life = 5;
    game->achiv->gold_comp = false;
    game->achiv->keys_comp = false;
    game->achiv->kill_comp = false;
    game->achiv->lvl_complet = false;
    game->achiv->player_gold = 0;
    game->achiv->player_keys = 0;
    game->achiv->png_talked = false;
    game->achiv->player_kills = 0;
    return 0;
}

int display_highlight_death(game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->utils->window);
    if (mouse.x > 711 && mouse.x < 888 && mouse.y > 801 && mouse.y < 895) {
        sfSprite_setTexture(game->death_screen->quit_sprite,
                            game->startmenu->quit_texture_highlight, sfTrue);
        if (game->utils->event.type == sfEvtMouseButtonPressed)
            exit(0);
    } else {
        sfSprite_setTexture(game->death_screen->quit_sprite,
                            game->startmenu->quit_texture, sfTrue);
    }
    if (mouse.x > 927 && mouse.x < 1111
        && mouse.y > 802 && mouse.y < 902) {
        sfSprite_setTexture(game->death_screen->start_sprite,
                        game->death_screen->start_texture_highlight, sfTrue);
        if (game->utils->event.type == sfEvtMouseButtonPressed) {
            new_game(game);
        }
    } else {
        sfSprite_setTexture(game->death_screen->start_sprite,
                            game->death_screen->start_texture, sfTrue);
    }
    return 0;
}