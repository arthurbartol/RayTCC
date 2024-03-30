#include "color.h"

Color::Color(double red, double green, double blue, double alpha)
    : red(red), green(green), blue(blue), alpha(alpha) {}


Color Color::operator+(const Color& other) const {
    return Color(red + other.red, green + other.green, blue + other.blue, alpha + other.alpha);
}

Color Color::operator-(const Color& other) const {
    return Color(red - other.red, green - other.green, blue - other.blue, alpha - other.alpha);
}

Color Color::operator*(const Color& other) const {
    return Color(red * other.red, green * other.green, blue * other.blue, alpha * other.alpha);
}

Color Color::operator*(const double& t) const {
    return Color(red * t, green * t, blue * t, alpha * t);
}
