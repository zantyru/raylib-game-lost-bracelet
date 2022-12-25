/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

// Защита от множественного include одного и того же
// содержимого заголовочного файла
#ifndef TEXTURUM_H
#define TEXTURUM_H


#include "raylib.h"
#include "area.h"


typedef struct Texturum
{
    Texture2D texture;
    int origin_x;
    int origin_y;
} Texturum;


typedef struct TexturumManager
{
    Texturum texturums[_COUNT_AREA_CELL_TYPE];
} TexturumManager;

void TexturumManager_Init(TexturumManager *data);
void TexturumManager_Release(TexturumManager *data);


#endif // TEXTURUM_H