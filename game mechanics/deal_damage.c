#include "globals.h"

void base_damage()
{
    for(int i = 0; i < 100; i++)
    {
        if(cat_tracking[i].x_position == ENEMY_BASE_POS)
        {
            ENEMY_HP -= cat_tracking[i].damage;
        }
        if(dog_tracking[i].x_position == PLAYER_BASE_POS)
        {
            PLAYER_HP -= dog_tracking[i].damage;
        }
    }
    game_complete();
}


