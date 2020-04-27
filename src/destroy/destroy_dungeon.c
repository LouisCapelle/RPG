/*
** EPITECH PROJECT, 2020
** dungeon
** File description:
** dungeon
*/

#include "my.h"

int destroy_map(map_t *map)
{
    sfSprite_destroy(map->mini_map);
    sfSprite_destroy(map->mini_grass);
    sfSprite_destroy(map->mini_soil);
    sfSprite_destroy(map->mini_tower);
    sfTexture_destroy(map->mini_grass_text);
    sfTexture_destroy(map->mini_soil_text);
    sfTexture_destroy(map->mini_tower_text);
    sfTexture_destroy(map->mini_map_text);
    sfTexture_destroy(map->donjon_mini_text);
    sfTexture_destroy(map->mini_stairs_text);
    return 0;
}

int destroy_dungeon(game_t *game)
{
    sfTexture_destroy(game->dungeon->text_ground);
    sfSprite_destroy(game->dungeon->ground);
    sfSprite_destroy(game->map->mini_stairs);
    sfSprite_destroy(game->map->donjon_mini);
    sfTexture_destroy(game->map->grass_text);
    sfTexture_destroy(game->map->soil_text);
    sfTexture_destroy(game->map->tower_pos_text);
    sfTexture_destroy(game->map->donjon_text);
    sfTexture_destroy(game->map->stairs_text);
    sfSprite_destroy(game->map->grass);
    sfSprite_destroy(game->map->soil);
    sfSprite_destroy(game->map->tower_pos);
    sfSprite_destroy(game->map->donjon);
    sfSprite_destroy(game->map->stairs);
    destroy_map(game->map);
    return 0;
}