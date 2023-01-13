
#include "rect.h"
#include "circle.h"

// user function 
void drawShapes(const Shape* shapes[], int nShapes);

int main(int argc, char const* argv[])
{
  /* instantiate rectangles... */
  Rect r1, r2; /* multiple instances of Rectangle */
  Rect_ctor(&r1, 0, 2, 10, 15);
  Rect_ctor(&r2, -1, 3, 5, 8);

  /* instantiate circles... */
  Circle    c1, c2; /* multiple instances of Circle */
  Circle_ctor(&c1, 1, -2, 12);
  Circle_ctor(&c2, 1, -3, 6);

  Shape* shapes[] = { /* collection of shapes */
      (Shape*)&c1,
      (Shape*)&r2,
      (Shape*)&c2,
      (Shape*)&r1
  };
  drawShapes(shapes, sizeof(shapes) / sizeof(shapes[0]));
  return 0;
}

void drawShapes(const Shape* shapes[], int nShapes)
{
  for (int i = 0; i < nShapes; ++i)
  {
    Shape_draw(shapes[i]);   // call the polymorphic function
  }

}

