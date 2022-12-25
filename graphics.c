/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

#include <stddef.h>  // Нужен для NULL
#include "raylib.h"
#include "graphics.h"


void RenderQueue_AddTexture(RenderQueue* data, Texture2D texture, Vector2 screen_position)
{
    if (data->_root == NULL)
    {
        data->_root = (RenderQueueNode*)MemAlloc(sizeof(RenderQueueNode));
        data->_tail = data->_root;
    }
    else
    {
        data->_tail->_next = (RenderQueueNode*)MemAlloc(sizeof(RenderQueueNode));
        data->_tail = data->_tail->_next;
    }

    data->_tail->texture = texture;
    data->_tail->screen_position = screen_position;
    data->_tail->_next = NULL;
}


void RenderQueue_Render(RenderQueue* data)
{
    BeginDrawing();
    
    RenderQueueNode* old;
    
    while (data->_root != NULL)
    {
        DrawTextureV(
            data->_root->texture,
            data->_root->screen_position,
            WHITE
        );
        
        old = data->_root;
        data->_root = data->_root->_next;
        
        old->_next = NULL;
        MemFree(old);
    }
    
    data->_tail = NULL;
    
    EndDrawing();
}