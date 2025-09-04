#pragma once
#include <string>
#include "point.h"
#include "figure.h"

class Triangle : public Figure {
    Point a;
    Point b;
    Point c;

public:
    Triangle();
    Triangle(Point a, Point b, Point c);
    Triangle(const Triangle& other);

    bool equals(const Figure& other) const override;

    void flip() override;
    void move(double x, double y) override;

    double getSurface() const override;  // Heron
    std::string toString() const override;

    // (opcjonalnie do testów)
    Point getA() const { return a; }
    Point getB() const { return b; }
    Point getC() const { return c; }
};