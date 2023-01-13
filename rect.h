#ifndef rect_h__
#define rect_h__

#include "shape.h"

/// @brief type for rectangle, a subtype of shape
/// @details if using dynamic memory, this type can be hidden as well.
struct Rect
{
  Shape base;
  int center_x;
  int center_y;
  int width;
  int height;
};

/// @brief
/// @details
typedef struct  Rect Rect;

/// @details
/// @param[in, out] me
/// @param[in] x coordinate of the rectangle center
/// @param[in] y coordinate of the rectangle center
/// @param[in] w the width of the rectangle
/// @param[in] h the height if the rectangle
void Rect_ctor(Rect* const me, int x, int y, int w, int h);

#endif // rect_h__

