#include "shape.h"
#include <assert.h>

// private internal implementation
static double Shape_area_impl(const Shape* const me)
{
  assert(0); // purely-virtual function should never be called 
  return 0; // to avoid compiler warnings 
}

// private internal implementation
static void Shape_draw_impl(const Shape* const me)
{
  assert(0); // purely-virtual function should never be called 
}

void Shape_ctor(Shape* const shape)
{
  static Shape_operation ops = { &Shape_area_impl, &Shape_draw_impl };
  shape->funcs = &ops;
}

void Shape_dtor(Shape* const shape)
{
  // nothing to destruct
}

double Shape_area(const Shape* const shape)
{
  // call whatever function in the operation table
  return (*shape->funcs->area)(shape);
}

void Shape_draw(const Shape* const shape)
{
  // call whatever function in the operation table
  (*shape->funcs->draw)(shape);
}

