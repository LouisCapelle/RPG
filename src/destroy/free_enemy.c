/*
** EPITECH PROJECT, 2020
** my rpg
** File description:
** free enemys
*/

#include "my.h"

void free_ene(enemy_t *ene)
{
    enemy_t *tmp;

    if (!ene)
        return;
    while (ene) {
        tmp = ene;
        ene = ene->next;
        free(tmp);
    }
}