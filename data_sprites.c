/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

#include "raylib.h"
#include "constants.h"
#include "data_sprites.h"


static Sprite _sprites[_COUNT_AREA_CELL_TYPE];


void Sprites_Init()
{
    _sprites[AREA_CELL_TYPE_BLOCK].texture = LoadTexture("textures/block.png");
    _sprites[AREA_CELL_TYPE_BLOCK].origin.x = 0;
    _sprites[AREA_CELL_TYPE_BLOCK].origin.y = 0;    
    
    _sprites[AREA_CELL_TYPE_FLOOR].texture = LoadTexture("textures/floor.png");
    _sprites[AREA_CELL_TYPE_FLOOR].origin.x = 0;
    _sprites[AREA_CELL_TYPE_FLOOR].origin.y = 0;    
    
    _sprites[AREA_CELL_TYPE_PLAYER].texture = LoadTexture("textures/player.png");
    _sprites[AREA_CELL_TYPE_PLAYER].origin.x = 0;
    _sprites[AREA_CELL_TYPE_PLAYER].origin.y = 0;    
}


void Sprites_Release()
{
    UnloadTexture(_sprites[AREA_CELL_TYPE_BLOCK].texture);
    UnloadTexture(_sprites[AREA_CELL_TYPE_FLOOR].texture);
    UnloadTexture(_sprites[AREA_CELL_TYPE_PLAYER].texture);
}