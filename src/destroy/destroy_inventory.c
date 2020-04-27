/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** destroy
*/

#include "my.h"

int destroy_inventory(inv_t *inv)
{
    sfSprite_destroy(inv->back);
    sfTexture_destroy(inv->back_text);
    sfSprite_destroy(inv->case1);
    sfSprite_destroy(inv->case2);
    sfTexture_destroy(inv->case_text);
    sfFont_destroy(inv->font);
    sfText_destroy(inv->gold);
    sfText_destroy(inv->keys);
    sfSprite_destroy(inv->obj1);
    sfTexture_destroy(inv->obj1_text);
    sfSprite_destroy(inv->obj2);
    sfTexture_destroy(inv->obj2_text);
    return 0;
}