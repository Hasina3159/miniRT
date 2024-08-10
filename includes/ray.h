#ifndef RAY_H
# define RAY_H

# include "point.h"
# include "vector.h"

typedef struct  s_ray
{
	t_point     origin;
	t_vector	direction;
	double		max_t;
}               t_ray;


#endif