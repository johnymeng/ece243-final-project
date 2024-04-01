#include <globals.h>

void draw_normal_cat()
{
  int i = 0;
  for(int x = 115; x < 140; x++)
  {
      for(int y = 150+left_shift; y < 175+left_shift; y++)
      {
        plot_pixel(y, x, normal_cat[i]);
        i++;
      }
  }
}