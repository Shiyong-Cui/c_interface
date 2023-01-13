#include "rect.h"
#include <stdio.h>

/// @brief compute the area of a rectangle
/// @details this is concrete implementation of the abstract 
/// function in the Shape_operation 
/// @param[in] me pointer as this
/// @return the area
double Rect_area_impl(const Shape* const me)
{
  const Rect* const rect = (Rect*)me;
  return rect->width * rect->height;
}

/// @brief draw a rectangle
/// @details this is concrete implementation of the interface 
/// function in the shape operation
/// @param[in] me pointer as this
void Rect_draw_impl(const Shape* const me)
{
  const Rect* const rect = (Rect*)me;
  printf("Rectangle_draw_(x=%d, y=%d, width=%d,height=%d)\n",
    rect->center_x, rect->center_y, rect->width, rect->height);
}

/// @brief function as constructor for rectangle

void Rect_ctor(Rect* const me, int x, int y, int w, int h)
{
  Shape_ctor(&me->base);   // call the base constructor
  static Shape_operation ops = { &Rect_area_impl, &Rect_draw_impl };  
  me->base.funcs = &ops;   // reset the operation pointer
  me->center_x = x;
  me->center_y = y;
  me->width = w;
  me->height = h;
}

