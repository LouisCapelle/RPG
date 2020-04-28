/*
** EPITECH PROJECT, 2020
** display
** File description:
** display
*/

#include "my.h"

int event_pausemenu(game_t *game)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(game->utils->window);

    if ((pos.x >= 830 && pos.x <= 1006) && (pos.y >= 683 && pos.y <= 774)
        && game->utils->event.type == sfEvtMouseButtonPressed) {
        game->utils->in_pause = false;
        game->utils->in_game = true;
    }
    if ((pos.x >= 830 && pos.x <= 1006) && (pos.y >= 542 && pos.y <= 634)
        && game->utils->event.type == sfEvtMouseButtonPressed) {
        exit(0);
    }
    if ((pos.x >= 830 && pos.x <= 1006) && (pos.y >= 823 && pos.y <= 916)
        && game->utils->event.type == sfEvtMouseButtonPressed) {
        new_game(game);
        game->utils->in_pause = false;
        game->utils->in_start = true;
    }
    return 0;
}

int display_pausemenu(game_t *game)
{
    sfRenderWindow_clear(game->utils->window, sfBlack);
    display_highlight(game);
    event_pausemenu(game);
    sfRenderWindow_drawSprite(game->utils->window,
                            game->pausemenu->background_sprite, NULL);
    sfRenderWindow_drawSprite(game->utils->window,
                            game->pausemenu->start_sprite, NULL);
    sfRenderWindow_drawSprite(game->utils->window,
                            game->pausemenu->quit_sprite, NULL);
    sfRenderWindow_drawSprite(game->utils->window,
                            game->pausemenu->main_sprite, NULL);
    return 0;
}