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
    struct RenderQueueNode* _next;
} RenderQueueNode;


typedef struct RenderQueue
{
    RenderQueueNode* _root;
    RenderQueueNode* _tail;
} RenderQueue;

void RenderQueue_AddTexture(RenderQueue* data, Texture2D texture, Vector2 screen_position);
void RenderQueue_Render(RenderQueue* data);



// typedef struct RendererCore
// {
//     struct
//     {
//         Texture2D* array;
//     } Textures;
    
// } RendererCore;


#endif // GRAPHICS_H