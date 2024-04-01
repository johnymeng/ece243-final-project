#include "globals.h"

void draw_cat_base_hp()
{
    double width = (double) (PLAYER_HP / 1000) * BASE_HP_BAR_LENGTH;

    int i = 0; 
    for(int y = 0; y < 4; y++)
    {
        for(int x = 0; x < width; x++)
            {
                plot_pixel(x, y, 0xFFE0);
                i++;
            }
    }
}

void draw_dog_base_hp()
{
    double width = (double) (ENEMY_HP / 1000) * BASE_HP_BAR_LENGTH;

    int i = 0; 
    for(int y = 0; y < 4; y++)
    {
        for(int x = 0; x < width; x++)
            {
                plot_pixel(x, y, 0xFFE0);
                i++;
            }
    }
}