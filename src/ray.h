#pragma once

#include "math/vector4.h"

class Ray {
public:
    Point4 origin;
    Vector4 direction;

    Ray() = default;
    ~Ray() = default;

    Ray(const Point4& origin, const Vector4& direction);

    Point4 at(double t) const;
};
