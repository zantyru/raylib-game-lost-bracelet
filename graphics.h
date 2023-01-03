/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

// Защита от множественного include одного и того же
// содержимого заголовочного файла
#ifndef GRAPHICS_H
#define GRAPHICS_H


#include "raylib.h"


typedef struct RenderQueueNode
{
    Texture2D texture;
    Vector2 screen_position;
} RenderQueueNode;


void Screen_RenderSprite(Texture2D texture, Vector2 screen_position);
void Screen_Update();


#endif // GRAPHICS_H