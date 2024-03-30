#pragma once

#include "vector4.h"

class Matrix4 {
public:
    Vector4 data[4];

    Matrix4() = default;
    ~Matrix4() = default;

    Matrix4(const Vector4& a, const Vector4& b, const Vector4& c, const Vector4& d);

    Matrix4 operator+(const Matrix4& other) const;
    Matrix4 operator-(const Matrix4& other) const;
    Matrix4 operator*(const Matrix4& other) const;
    Matrix4 operator*(const double&  t)     const;
};
