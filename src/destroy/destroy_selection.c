/*
** EPITECH PROJECT, 2020
** selection
** File description:
** selection
*/

#include "my.h"

int destroy_selection(select_t *select)
{
    sfTexture_destroy(select->back_text);
    sfSprite_destroy(select->back);
    sfTexture_destroy(select->lvls_text);
    sfSprite_destroy(select->lvls);
    sfFont_destroy(select->font);
    sfText_destroy(select->credits);
    sfText_destroy(select->version);
    sfText_destroy(select->welcomming);
    sfSprite_destroy(select->hoover);
    return 0;
}