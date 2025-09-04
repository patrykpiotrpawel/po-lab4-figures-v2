#pragma once
#include <string>
#include "point.h"
#include "figure.h"

class Quadrilateral : public Figure {
    Point a, b, c, d;

public:
    Quadrilateral();
    Quadrilateral(Point a, Point b, Point c, Point d);
    Quadrilateral(const Quadrilateral& other);

    bool equals(const Figure& other) const override;

    void flip() override;
    void move(double x, double y) override;

    double getSurface() const override;  // shoelace (Gauss)
    std::string toString() const override;

    // do ewentualnych testów/pomocy
    Point getA() const { return a; }
    Point getB() const { return b; }
    Point getC() const { return c; }
    Point getD() const { return d; }
};