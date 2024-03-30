#pragma once

class Color {
public:
    double red;
    double green;
    double blue;
    double alpha;

    Color() = default;
    ~Color() = default;

    Color(double red, double green, double blue, double alpha = 1.0);

    Color operator+(const Color&  other) const;
    Color operator-(const Color&  other) const;
    Color operator*(const Color&  other) const;
    Color operator*(const double& t)     const;
};
