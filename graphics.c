/****
** Код написан на Си с соблюдением стиля, принятого в raylib.
*/

#include <stddef.h>  // Нужен для NULL
#include "raylib.h"
#include "constants.h"
#include "graphics.h"


static RenderQueueNode _render_queue[RENDER_QUEUE_MAX_LENGTH] = { 0 };
static unsigned int _render_queue_length = 0;


void Screen_RenderSprite(Texture2D texture, Vector2 screen_position)
{
    
}


void Screen_Update()
{
    BeginDrawing();
    
    EndDrawing();
}