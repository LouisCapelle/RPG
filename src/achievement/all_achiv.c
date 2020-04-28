/*
** EPITECH PROJECT, 2020
** my rpg
** File description:
** all achivements successfull
*/

#include "my.h"

void all_achivs_next(achiv_t *achiv, dungeon_t *dungeon, score_t *score)
{
    if (!achiv || !dungeon || !score)
        return;
    if (achiv->player_keys >= 3 && achiv->keys_comp == false) {
        score->score += 100;
        achiv->keys_comp = true;
    }
    if (achiv->player_gold >= 30 && achiv->gold_comp == false) {
        score->score += 100;
        achiv->gold_comp = true;
    }
}

void all_achivs(achiv_t *achiv, dungeon_t *dungeon, score_t *score)
{
    if (!achiv || !dungeon || !score)
        return;
    if (achiv->player_kills >= 5 && achiv->player_keys >= 3
        && achiv->player_gold >= 30)
        dungeon->all_achiv = true;
    if (achiv->player_kills >= 5 && achiv->kill_comp == false) {
        score->score += 100;
        achiv->kill_comp = true;
    }
    all_achivs_next(achiv, dungeon, score);
}