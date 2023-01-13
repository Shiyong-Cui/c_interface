#ifndef circle_h__
#define circle_h__

#include "shape.h"

/// @brief circle type, a subtype of shape
/// @details if using dynamic memory, this type can be hidden as well.
struct Circle
{
  Shape base;
  int center_x;
  int center_y;
  int radius;
};

/// @brief
/// @details
typedef struct  Circle Circle;

/// @brief constructor for type circle
/// @details
/// @param[in, out] me as this pointer
/// @param[in] x coordinate of the circle
/// @param[in] y coordinate of the circle
/// @param[in] r radius of the circle
void Circle_ctor(Circle* const me, int x, int y, int r);

#endif // circle_h__

