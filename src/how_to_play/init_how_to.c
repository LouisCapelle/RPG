/*
** EPITECH PROJECT, 2020
** init
** File description:
** init
*/

#include "my.h"

void event_how_to_quit(utils_t *utils)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(utils->window);

    if (utils->event.type == sfEvtMouseButtonPressed &&
            (pos.x >= 1700 && pos.x <= 1865) &&
            (pos.y >= 845 && pos.y <= 940)) {
        if (utils->back_to_start == true) {
            utils->in_start = true;
            utils->back_to_start = false;
        } else 
            utils->in_game = true;
        if (utils->in_how_to == 1)
            utils->in_how_to = false;
        if (utils->in_settings == 1)
            utils->in_settings = false;
        sfRenderWindow_clear(utils->window, sfBlack);
    }
}

void event_how_to(utils_t *utils)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(utils->window);

    if (utils->event.type == sfEvtMouseButtonPressed &&
            (pos.x >= 1716 && pos.x <= 1769) &&
            (pos.y >= 45 && pos.y <= 100)) {
        if (utils->in_start == true) {
            utils->back_to_start = true;
            utils->in_start = false;
        } else 
            utils->in_game = false;
        utils->in_how_to = true;
        sfRenderWindow_clear(utils->window, sfBlack);
    }
}

int display_how_to(game_t *game)
{
    if (!game)
        return 84;
    event_how_to(game->utils);
    sfRenderWindow_drawSprite(game->utils->window,
                            game->how_to->how_to_sprite, NULL);
    return 0;
}

int init_how_to(howto_t *how_to)
{
    sfVector2f pos = {1700, 35};
    sfVector2f scale = {0.2, 0.2};

    if (!how_to)
        return 84;
    how_to->how_to_sprite = sfSprite_create();
    how_to->how_to_texture = sfTexture_createFromFile
                                    ("./utils/imgs/book.png", NULL);
    how_to->background_sprite = sfSprite_create();
    how_to->background_texture =
        sfTexture_createFromFile("./utils/imgs/white.png", NULL);
    if (!how_to->how_to_sprite || !how_to->how_to_texture
    || !how_to->background_sprite || !how_to->background_texture)
        return 84;
    sfSprite_setTexture(how_to->how_to_sprite,
                        how_to->how_to_texture, sfTrue);
    sfSprite_setTexture(how_to->background_sprite,
                        how_to->background_texture, sfTrue);
    sfSprite_setScale(how_to->how_to_sprite, scale);
    sfSprite_setPosition(how_to->how_to_sprite, pos);
    return 0;
}