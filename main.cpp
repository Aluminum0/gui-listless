#include <iostream>
#include <raylib.h>
int main() {
    //setup
    SetTargetFPS(30);
    InitWindow(1000,600,"raylib [core] - browser");
    float recx = 200.0;
    float recy = 20.0;
    float width = 700.0;
    float height = 30.0;


    //Main Loop
    while (WindowShouldClose() == (false)) {
        Vector2 mus = GetMousePosition();
        if (IsKeyPressed(KEY_ESCAPE)){
            CloseWindow();
        }

        //Begin Drawing stuff
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Listless Search:", 10, 20, 20, GRAY);
        Rectangle search_box = {recx,recy,width,height};

        //Border for search box
        DrawRectangleLines(200, 20, 700, 30, BLACK);

        //This bit here is to add the pop-up menu when you move your cursor on the search bar.
        //It took me 5 hours to figure out why it wasn't working.
        if (CheckCollisionPointRec(mus, search_box)){
            DrawRectangle(200, 50, 700, 200, GRAY);
        }



        EndDrawing();
    }



    CloseWindow();
}