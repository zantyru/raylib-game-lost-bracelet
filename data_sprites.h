/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

// Защита от множественного include одного и того же
// содержимого заголовочного файла
#ifndef TEXTURUM_H
#define TEXTURUM_H


#include "raylib.h"
#include "constants.h"


typedef struct Sprite
{
    Texture2D texture;
    Vector2 origin;
} Sprite;


void Sprites_Init();
void Sprites_Release();


#endif // TEXTURUM_H