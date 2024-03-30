#pragma once

class Vector4 {
public:
    double x;
    double y;
    double z;
    double w;

    Vector4() = default;
    ~Vector4() = default;

    Vector4(double t);
    Vector4(double x, double y, double z, double w = 0.0);

    Vector4 operator+(const Vector4& other) const;
    Vector4 operator-(const Vector4& other) const;
    Vector4 operator*(const Vector4& other) const;
    Vector4 operator*(const double&  t)     const;
    Vector4 operator/(const double&  t)     const;

    // Essential for testing purposes
    bool operator==(const Vector4& other) const;

    friend Vector4 operator*(const double& t, const Vector4& v);

    double length() const;
};

using Point4 = Vector4;

namespace math {
    double  dot  (const Vector4& u, const Vector4& v);
    Vector4 cross(const Vector4& u, const Vector4& v);
}
