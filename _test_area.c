#include "raylib.h"
#include "area.h"


Area area;


void pre_test();
void run_test();
void post_test();


int main()
{
    InitWindow(800, 600, "");
    pre_test();
    
    while(!WindowShouldClose())
    {
        BeginDrawing();
        run_test();
        EndDrawing();
    }
    
    post_test();
    CloseWindow();    
    
    return 0;
}


void pre_test()
{
    area = Area();
    area.init(10, 10);
}


void post_test()
{
    area.release();
}


void run_test()
{   
    DrawText(
        TextFormat("area.get_cell(2, 3).floor = %i", area.get_cell(2, 3).floor),
        10, 10,
        24,
        WHITE
    );
}


// // Трюк для компиляции всех cpp-файлов пока нет makefile
// #include "area.c"