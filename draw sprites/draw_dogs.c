#include "globals.h"

typedef struct dog Dog;

void new_dog()
{
        int dogID;
    int damage;
    int hp;
    int x_position;
    dog_tracking[dog_ID].dogID = dog_ID;
    dog_tracking[dog_ID].damage = 3;
    dog_tracking[dog_ID].hp = 20;
    dog_tracking[dog_ID].x_position = 30;
}

void draw_normal_dog(Dog *normal_dog)
{
    int cur_pos = normal_dog->x_position;
    int i = 0;
    for(int y = 115; y < 140; y++)
    {
        for(int x = cur_pos; x < cur_pos+25; x++)
        {
            plot_pixel(x, y, normal_dog[i]);
            i++;
        }
    }
    max_dog_pos = max(max_dog_pos, cur_pos);
    
    //stops dogs from moving if they hit the base
    if(cur_pos < 200)
    {
        normal_dog->x_position++;
    }
    //stops dogs from moving if they encounter a cat
    if(cur_pos > min_cat_pos)
    {
         normal_dog->x_position--;
    } 
    
}

