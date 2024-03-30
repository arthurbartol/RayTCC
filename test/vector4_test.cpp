#define BOOST_TEST_MODULE Vector4
#include <boost/test/included/unit_test.hpp>

#include "../src/math/vector4.h"

#include <iostream>
#include <cmath>

std::ostream& operator<<(std::ostream& os, const Vector4& v) {
    os << "(" << v.x << ", " << v.y << ", " << v.z << ", " << v.w << ")";
    return os;
}


BOOST_AUTO_TEST_CASE(Add) {
    Vector4 a(1.0, 2.0, 3.0);
    Vector4 b(3.0, 2.0, 1.0);

    Vector4 result = a + b;
    Vector4 expected(4.0, 4.0, 4.0);

    BOOST_TEST(result == expected);
}

BOOST_AUTO_TEST_CASE(Sub) {
    Vector4 a(1.0, 2.0, 3.0);
    Vector4 b(3.0, 2.0, 1.0);

    Vector4 result = a - b;
    Vector4 expected(-2.0, 0.0, 2.0);

    BOOST_TEST(result == expected);
}

BOOST_AUTO_TEST_CASE(Mul) {
    Vector4 a(1.0, 2.0, 3.0);
    Vector4 b(3.0, 2.0, 1.0);

    Vector4 result = a * b;
    Vector4 expected(3.0, 4.0, 3.0);

    BOOST_TEST(result == expected);
}

BOOST_AUTO_TEST_CASE(ScalarMul) {
    Vector4 a(1.0, 2.0, 3.0);

    Vector4 result = a * 2.0;
    Vector4 expected(2.0, 4.0, 6.0);

    BOOST_TEST(result == expected);
}

BOOST_AUTO_TEST_CASE(ScalarDiv) {
    Vector4 a(1.0, 2.0, 3.0);

    Vector4 result = a / 2.0;
    Vector4 expected(0.5, 1.0, 1.5);

    BOOST_TEST(result == expected);
}

BOOST_AUTO_TEST_CASE(Length) {
    Vector4 a(1.0, 2.0, 3.0);

    double result = a.length();
    double expected = std::sqrt(14.0);

    BOOST_TEST(result == expected);
}


BOOST_AUTO_TEST_CASE(Dot) {
    Vector4 a(1.0, 2.0, 3.0);
    Vector4 b(3.0, 2.0, 1.0);

    double result = math::dot(a, b);
    double expected = 10.0;

    BOOST_TEST(result == expected);
}

BOOST_AUTO_TEST_CASE(Cross) {
    Vector4 a(1.0, 2.0, 3.0);
    Vector4 b(3.0, 2.0, 1.0);

    Vector4 result = math::cross(a, b);
    Vector4 expected(-4.0, 8.0, -4.0);

    BOOST_TEST(result == expected);
}
