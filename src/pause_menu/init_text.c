/*
** EPITECH PROJECT, 2020
** text
** File description:
** text
*/

#include "my.h"

int init_text_pause(pausemenu_t *pausemenu)
{
    sfVector2f pos_text = {800, 200};

    if (!pausemenu)
        return 84;
    pausemenu->title_text = sfText_create();
    pausemenu->title_font = sfFont_createFromFile("./utils/font/horrendo.ttf");
    if (!pausemenu->title_text || !pausemenu->title_font)
        return 84;
    sfText_setFont(pausemenu->title_text, pausemenu->title_font);
    sfText_setCharacterSize(pausemenu->title_text, 80);
    sfText_setString(pausemenu->title_text,
    "PAUSE");
    sfText_setPosition(pausemenu->title_text, pos_text);
    sfText_setColor(pausemenu->title_text, sfWhite);
    return 0;
}