#pragma once
#include <string>
#include "point.h"
#include "figure.h"

class Line : public Figure {
    Point a;
    Point b;

public:
    Line();
    Line(Point a, Point b);
    Line(const Line& other);

    bool equals(const Figure& other) const override;
    void flip() override;
    void move(double x, double y) override;
    double getSurface() const override { return 0.0; }
    std::string toString() const override;

    Point getA() const { return a; }
    Point getB() const { return b; }
};