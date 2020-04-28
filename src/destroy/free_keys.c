/*
** EPITECH PROJECT, 2020
** my rpg
** File description:
** free_keys
*/

#include "my.h"

void free_keys(keys_t *key)
{
    keys_t *tmp;

    if (!key)
        return;
    while (key) {
        tmp = key;
        key = key->next;
        free(tmp);
    }
}