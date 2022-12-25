#include "raylib.h"
#include "constants.h"
#include "texturum.h"
#include "area.h"
#include "graphics.h"


int main()
{
    TexturumManager texturum_manager;
    RenderQueue render_queue;
    Vector2 v = { 0 };
    
    InitWindow(
        SCREEN_WIDTH, SCREEN_HEIGHT,
        "Walking Game"
    );
    TexturumManager_Init(&texturum_manager);
    
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        // v.x = 10.0f;
        // v.y = 20.0f;
        // DrawTextureV(
        //     texturum_manager.texturums[AREA_CELL_TYPE_BLOCK].texture,
        //     v,
        //     WHITE
        // );
        EndDrawing();
                
        v.x = 10.0f, v.y = 20.0f;
        RenderQueue_AddTexture(
            &render_queue,
            texturum_manager.texturums[AREA_CELL_TYPE_BLOCK].texture,
            v
        );
        
        v.x = 210.0f, v.y = 20.0f;
        RenderQueue_AddTexture(
            &render_queue,
            texturum_manager.texturums[AREA_CELL_TYPE_FLOOR].texture,
            v
        );
        
        v.x = 410.0f, v.y = 20.0f;
        RenderQueue_AddTexture(
            &render_queue,
            texturum_manager.texturums[AREA_CELL_TYPE_PLAYER].texture,
            v
        );
        
        RenderQueue_Render(&render_queue);
    }
    
    
    TexturumManager_Release(&texturum_manager);
    CloseWindow();    
    
    return 0;
}


// Трюк для компиляции всех cpp-файлов пока нет скрипта для общей сборки
#include "texturum.c"
#include "area.c"
#include "graphics.c"