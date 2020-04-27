/*
** EPITECH PROJECT, 2020
** destroy_destrooy
** File description:
** destroy
*/

#include "my.h"

int destroy_how_to_next(game_t *game)
{
    sfText_destroy(game->how_to->text_p);
    sfFont_destroy(game->how_to->font_p);
    sfSprite_destroy(game->how_to->p_sprite);
    sfTexture_destroy(game->how_to->p_texture);
    sfText_destroy(game->how_to->text_key);
    sfFont_destroy(game->how_to->font_key);
    sfSprite_destroy(game->how_to->key_sprite);
    sfTexture_destroy(game->how_to->key_texture);
    sfText_destroy(game->how_to->text);
    sfFont_destroy(game->how_to->font);
    sfText_destroy(game->how_to->text_rules_first);
    sfFont_destroy(game->how_to->font_rules_first);
    sfText_destroy(game->how_to->text_rules_second);
    sfFont_destroy(game->how_to->font_rules_second);
    return 0;
}

int destroy_how_to(game_t *game)
{
    sfSprite_destroy(game->how_to->how_to_sprite);
    sfTexture_destroy(game->how_to->how_to_texture);
    sfSprite_destroy(game->how_to->background_sprite);
    sfTexture_destroy(game->how_to->background_texture);
    sfText_destroy(game->how_to->text_rules);
    sfFont_destroy(game->how_to->font_rules);
    sfText_destroy(game->how_to->text_a);
    sfFont_destroy(game->how_to->font_a);
    sfSprite_destroy(game->how_to->a_sprite);
    sfTexture_destroy(game->how_to->a_texture);
    sfText_destroy(game->how_to->text_m);
    sfFont_destroy(game->how_to->font_m);
    sfSprite_destroy(game->how_to->m_sprite);
    sfTexture_destroy(game->how_to->m_texture);
    sfSprite_destroy(game->how_to->esc_sprite);
    sfTexture_destroy(game->how_to->esc_texture);
    sfText_destroy(game->how_to->text_esc);
    sfFont_destroy(game->how_to->font_esc);
    destroy_how_to_next(game);
    return 0;
}