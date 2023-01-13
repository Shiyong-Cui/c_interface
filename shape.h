#ifndef shape_h__
#define shape_h__

// forward declaration
typedef struct Shape Shape;
typedef struct Shape_operation Shape_operation;

/// @brief shape type as a base type
/// @details it is allowed to create instance, but can do nothing with it.
/// It usually has no data members, only operations. 
struct Shape
{
    Shape_operation *funcs;
};

/// @brief function as constructor
/// @details the memory must be allocated before calling this function
/// @param[in, out] shape
void Shape_ctor(Shape* const shape);

/// @brief function as destructor
/// @details
/// @param[in, out] shape
void Shape_dtor(Shape* const shape);

/// @brief operations for shape 
/// @details
struct Shape_operation
{
    double (*area)(const Shape *const me);
    void (*draw)(const Shape *const me);
};


// interface functions for any shape

/// @brief compute the area of the shape
/// @details the given shape can be any concrete shape, like rect and circle
/// if the given shape is an abstract type like struct shape, it will trigger error.
/// @param[in] shape
/// @return the area of the shape
double Shape_area(const Shape* const shape);

/// @brief draw the shape
/// @details the given shape can be any concrete shape, like rect and circle
/// if the given shape is an abstract type like struct shape, it will trigger error.
/// @param[in] shape
void Shape_draw(const Shape* const shape);

#endif // shape_h__

