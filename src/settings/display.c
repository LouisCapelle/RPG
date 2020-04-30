/*
** EPITECH PROJECT, 2020
** display
** File description:
** display
*/

#include "my.h"

int event_settings_escape(game_t *game)
{
    if (!game)
        return 84;
    if (game->utils->event.key.code == sfKeyEscape) {
        game->utils->in_settings = false;
        game->utils->in_game = true;
    }
    //return 0;
}

int highlight_settings_button(game_t *game)
{
    sfVector2i mouse_pos =
    sfMouse_getPositionRenderWindow(game->utils->window);

    if (!game)
        return 84;
    if (mouse_pos.x >= 1816 && mouse_pos.x <= 1869
            && mouse_pos.y >= 35 && mouse_pos.y <= 90) {
        sfSprite_setTexture(game->settings->settings_sprite,
                    game->settings->settings_texture_highlight, sfTrue);
    } else {
        sfSprite_setTexture(game->settings->settings_sprite,
                        game->settings->settings_texture, sfTrue);
    }
    return 0;
}

int display_settings(game_t *game)
{
    if (!game)
        return 84;
    sfRenderWindow_drawSprite(game->utils->window,
                        game->startmenu->background_sprite, NULL);
    sfRenderWindow_drawSprite(game->utils->window,
                        game->settings->bar_sprite, NULL);
    sfRenderWindow_drawSprite(game->utils->window,
                        game->settings->circle_sprite, NULL);
    sfRenderWindow_drawSprite(game->utils->window,
                        game->how_to->sprite_quit, NULL);
    sfRenderWindow_drawText(game->utils->window,
                            game->settings->title_text, NULL);
    event_sound_bar(game);
    event_how_to_quit(game->utils);
    if (event_settings_escape(game) == 84)
        return 84;
    return 0;
}

int display_settings_button(game_t *game)
{
    if (!game)
        return 84;
    if (highlight_settings_button(game) == 84)
        return 84;
    event_settings(game->utils);
    sfRenderWindow_drawSprite(game->utils->window,
                            game->settings->settings_sprite, NULL);
    return 0;
}