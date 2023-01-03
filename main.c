#include "raylib.h"
#include "constants.h"
#include "data_sprites.h"
#include "area.h"
#include "graphics.h"


int main()
{
    Vector2 v = { 0 };
    
    InitWindow(
        SCREEN_WIDTH, SCREEN_HEIGHT,
        "Walking Game"
    );
    Sprites_Init();
    
    
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
        Screen_RenderSprite(
            _sprites[AREA_CELL_TYPE_BLOCK].texture,
            v
        );
        
        v.x = 210.0f, v.y = 20.0f;
        Screen_RenderSprite(
            _sprites[AREA_CELL_TYPE_FLOOR].texture,
            v
        );
        
        v.x = 410.0f, v.y = 20.0f;
        Screen_RenderSprite(
            _sprites[AREA_CELL_TYPE_PLAYER].texture,
            v
        );
        
        Screen_Update();
    }
    
    
    Sprites_Release();
    CloseWindow();    
    
    return 0;
}


// Трюк для компиляции всех cpp-файлов пока нет скрипта для общей сборки
#include "data_sprites.c"
#include "area.c"
#include "graphics.c"