/*
** EPITECH PROJECT, 2020
** settings
** File description:
** settings
*/

#include "my.h"

int init_text_setting(settings_t *settings)
{
    sfVector2f pos_text = {760, 200};

    if (!settings)
        return 84;
    settings->title_text = sfText_create();
    settings->title_font = sfFont_createFromFile("./utils/font/horrendo.ttf");
    if (!settings->title_text || !settings->title_font)
        return 84;
    sfText_setFont(settings->title_text, settings->title_font);
    sfText_setCharacterSize(settings->title_text, 70);
    sfText_setString(settings->title_text,
    "SETTINGS");
    sfText_setPosition(settings->title_text, pos_text);
    sfText_setColor(settings->title_text, sfWhite);
    return 0;
}