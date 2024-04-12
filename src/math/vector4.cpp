#include "vector4.h"

#include <cmath>

Vector4::Vector4(double t)
    : x(t), y(t), z(t), w(t) {}

Vector4::Vector4(double x, double y, double z, double w)
    : x(x), y(y), z(z), w(w) {}


Vector4 Vector4::operator+(const Vector4& other) const {
    return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
}

Vector4 Vector4::operator-(const Vector4& other) const {
    return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
}

Vector4 Vector4::operator*(const Vector4& other) const {
    return Vector4(x * other.x, y * other.y, z * other.z, w * other.w);
}

Vector4 Vector4::operator*(const double t) const {
    return Vector4(x * t, y * t, z * t, w * t);
}

Vector4 Vector4::operator/(const double t) const {
    return Vector4(x / t, y / t, z / t, w / t);
}

bool Vector4::operator==(const Vector4& other) const {
    return x == other.x &&
           y == other.y &&
           z == other.z &&
           w == other.w;
}


Vector4 operator*(const double t, const Vector4& v) {
    return v * t;
}


double Vector4::length() const {
    return std::sqrt(x * x + y * y + z * z + w * w);
}


double math::dot(const Vector4& u, const Vector4& v) {
    return (u.x * v.x) + (u.y * v.y) + (u.z * v.z) + (u.w * v.w);
}

Vector4 math::cross(const Vector4& u, const Vector4& v) {
    return Vector4(u.y * v.z - u.z * v.y,
                   u.z * v.x - u.x * v.z,
                   u.x * v.y - u.y * v.x);
}
