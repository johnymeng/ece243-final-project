#include "globals.h"

void end_screen()
{
    while(game_over)
    {
        draw_start_screen();
    }
}