#include "circle.h"
#include <stdio.h>

/// @brief compute the area of the given circle
/// @details this function is a concrete implementation of 
/// the abstract operation in shape_operation.
/// @param[in] me pointer as the this pointer
/// @return the area of the given circle
double Circ_area_impl(const Shape* const me)
{
  static const double PI = 3.14159;
  const Circle* const circ = (Circle*)me;
  return 2*PI*circ->radius;
}

/// @brief draw a given circle
/// @details this is a concrete implementation of the abstract
/// function in shape_operation
/// @param[in] me pointer as this, must be of type circle or any of its subtypes 
void Circ_draw_impl(const Shape* const me)
{
  const Circle* const circ= (Circle*)me;
  printf("Circle_draw_(x=%d, y=%d, radius=%d)\n",
    circ->center_x, circ->center_y, circ->radius);
}

void Circle_ctor(Circle* const me, int x, int y, int r)
{
  Shape_ctor(&me->base);   // call base constructor
  static Shape_operation ops = { &Circ_area_impl, &Circ_draw_impl };
  me->base.funcs = &ops;   // reset the operation pointer
  me->center_x = x;
  me->center_y = y;
  me->radius = r;
}

