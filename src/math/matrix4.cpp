#include "matrix4.h"

Matrix4::Matrix4(const Vector4& a, const Vector4& b, const Vector4& c, const Vector4& d)
    : data{a, b, c, d} {}


Matrix4 Matrix4::operator+(const Matrix4& other) const {
    return Matrix4(data[0] + other.data[0],
                   data[1] + other.data[1],
                   data[2] + other.data[2],
                   data[3] + other.data[3]);
}

Matrix4 Matrix4::operator-(const Matrix4& other) const {
    return Matrix4(data[0] - other.data[0],
                   data[1] - other.data[1],
                   data[2] - other.data[2],
                   data[3] - other.data[3]);
}

Matrix4 Matrix4::operator*(const Matrix4& other) const {
    return Matrix4(data[0] * other.data[0],
                   data[1] * other.data[1],
                   data[2] * other.data[2],
                   data[3] * other.data[3]);
}

Matrix4 Matrix4::operator*(const double& t) const {
    return Matrix4(data[0] * t,
                   data[1] * t,
                   data[2] * t,
                   data[3] * t);
}
