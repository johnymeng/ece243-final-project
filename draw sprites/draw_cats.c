#include "globals.h"

typedef struct cat Cat;

void draw_background()
{
  int i = 0;
  for(int x = 0; x < 240; x++)
	{
		for(int y = 0; y < 320; y++)
		{
			plot_pixel(y, x, Background[i]);
			i++;
		}
	}
}

void draw_normal_cat(Cat *normal_cat)
{
    int cur_pos = normal_cat->x_position;
    int i = 0;
    for(int y = 115; y < 140; y++)
    {
        for(int x = cur_pos; x < cur_pos+25; x++)
        {
            plot_pixel(x, y, normal_cat[i]);
            i++;
        }
    }
    min_cat_pos = min(cur_pos, min_cat_pos);
    if(cur_pos > 30)
    {
        normal_cat->x_position--;
    }
    if(cur_pos < max_dog_pos)
    {
        normal_cat->x_position++;
        normal_cat->hp -= DOG_DMG;
    }
}

void draw_tank_cat(Cat *tank_cat)
{
    int cur_pos = tank_cat->x_position;
    int i = 0; 
    for(int y = 100; y < 140; y++)
    {
        for(int x = cur_pos; x < cur_pos+25; x++)
        {
            plot_pixel(x, y, tank_cat[i]);
            i++;
        }
    }
    min_cat_pos = min(cur_pos, min_cat_pos);
    if(cur_pos > 30) tank_cat->x_position--;
    if(cur_pos < max_dog_pos) 
    {
        tank_cat->x_position++;
        tank_cat->hp -= DOG_DMG;
    }
}

void draw_axe_cat(Cat *axe_cat)
{
    int cur_pos = axe_cat->x_position;
    int i = 0; 
    for(int y = 115; y < 140; y++)
    {
        for(int x = cur_pos; x < cur_pos+35; x++)
        {
            plot_pixel(x, y, axe_cat[i]);
            i++;
        }
	}
    min_cat_pos = min(cur_pos, min_cat_pos);
    if(cur_pos > 30) axe_cat->x_position--;
    if(cur_pos < max_dog_pos) 
    {
        axe_cat->x_position++;
        axe_cat->hp -= DOG_DMG;
    }
}

void draw_ninja_cat(Cat *ninja_cat)
{
    int i = 0; 
    int cur_pos = ninja_cat->x_position;
	for(int y = 118; y < 143; y++)
	{
	    for(int x = cur_pos; x < cur_pos+25; x++)
		{
			plot_pixel(x, y, ninja_cat[i]);
			i++;
		}
	}
    min_cat_pos = min(cur_pos, min_cat_pos);
    if(cur_pos > 30) ninja_cat->x_position--;
    if(cur_pos < max_dog_pos)
    {
        ninja_cat->x_position++;
        ninja_cat->hp -= DOG_DMG;
    } 
}

void draw_tall_cat(Cat *tall_cat)
{
    int i = 0;
    int cur_pos = tall_cat->x_position;
	for(int y = 75; y < 135; y++)
	{
		for(int x = cur_pos; x < cur_pos+25; x++)
		{
			plot_pixel(x, y, tall_cat[i]);
			i++;
		}
	} 
    min_cat_pos = min(cur_pos, min_cat_pos);
    //stops cats from moving if they reach the base
    if(cur_pos > 30) tall_cat->x_position--;

    //stops cat from moving forwards if they encounter a dog
    if(cur_pos < max_dog_pos)
    {
        tall_cat->x_position++;
        tall_cat->hp -= DOG_DMG;
    } 
}