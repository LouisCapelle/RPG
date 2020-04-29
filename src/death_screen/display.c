/*
** EPITECH PROJECT, 2020
** display
** File description:
** display
*/

#include "my.h"

void draw_new_high(death_screen_t *death, char *score, utils_t *utils)
{
    sfVector2f pos = {100, 550};
    sfVector2f pos2 = {1300, 550};

    sfText_setString(death->high_text, "NEW HIGH SCORE:");
    sfText_setString(death->score, score);
    sfText_setPosition(death->high_text, pos);
    sfText_setPosition(death->score, pos2);
    sfRenderWindow_drawText(utils->window, death->high_text, NULL);
    sfRenderWindow_drawText(utils->window, death->score, NULL);
}

void draw_current(death_screen_t *death, char *score, utils_t *utils)
{
    sfVector2f pos = {100, 550};
    sfVector2f pos2 = {1300, 550};

    sfText_setString(death->high_text, "CURRENT HIGHSCORE:");
    sfText_setString(death->score, score);
    sfText_setPosition(death->high_text, pos);
    sfText_setPosition(death->score, pos2);
    sfRenderWindow_drawText(utils->window, death->high_text, NULL);
    sfRenderWindow_drawText(utils->window, death->score, NULL);
}

int display_death(game_t *game)
{
    char *score = convert_to_string(game->score->score);

    if (!game)
        return 84;
    sfRenderWindow_clear(game->utils->window, sfBlack);
    display_highlight_death(game);
    sfRenderWindow_drawSprite(game->utils->window,
                        game->startmenu->background_sprite, NULL);
    if (is_highscore(game->high, score))
        draw_new_high(game->death_screen, score, game->utils);
    else
        draw_current(game->death_screen, game->high->score, game->utils);
    sfRenderWindow_drawText(game->utils->window,
                        game->death_screen->death_text, NULL);
    sfRenderWindow_drawSprite(game->utils->window,
                        game->death_screen->quit_sprite, NULL);
    sfRenderWindow_drawSprite(game->utils->window,
                        game->death_screen->start_sprite, NULL);
    return 0;
}