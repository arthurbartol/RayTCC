#include "ray.h"

Ray::Ray(const Point4& origin, const Vector4& direction)
    : origin(origin), direction(direction) {}


Point4 Ray::at(double t) const {
    return origin + (t * direction);
}
