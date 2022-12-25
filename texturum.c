/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

#include "raylib.h"
#include "texturum.h"
#include "area.h"


void TexturumManager_Init(TexturumManager* data)
{
    data->texturums[AREA_CELL_TYPE_BLOCK].texture = LoadTexture("textures/block.png");
    data->texturums[AREA_CELL_TYPE_BLOCK].origin_x = 0;
    data->texturums[AREA_CELL_TYPE_BLOCK].origin_y = 0;    
    
    data->texturums[AREA_CELL_TYPE_FLOOR].texture = LoadTexture("textures/floor.png");
    data->texturums[AREA_CELL_TYPE_FLOOR].origin_x = 0;
    data->texturums[AREA_CELL_TYPE_FLOOR].origin_y = 0;    
    
    data->texturums[AREA_CELL_TYPE_PLAYER].texture = LoadTexture("textures/player.png");
    data->texturums[AREA_CELL_TYPE_PLAYER].origin_x = 0;
    data->texturums[AREA_CELL_TYPE_PLAYER].origin_y = 0;    
}


void TexturumManager_Release(TexturumManager* data)
{
    UnloadTexture(data->texturums[AREA_CELL_TYPE_BLOCK].texture);
    
    UnloadTexture(data->texturums[AREA_CELL_TYPE_FLOOR].texture);
    
    UnloadTexture(data->texturums[AREA_CELL_TYPE_PLAYER].texture);
}