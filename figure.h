//
// Created by nwaszkowiak on 04.12.24.
//

#ifndef PO_LAB3_FIGURES_V2_FIGURE_H
#define PO_LAB3_FIGURES_V2_FIGURE_H

#include "point.h"
#include <vector>

class Figure {

public:
    virtual double getSurface() = 0;
    virtual std::vector<Point> getPoints() = 0;
    virtual bool equals(Figure &other) = 0;
    virtual void flip() = 0;
    virtual void move(double x, double y) = 0;
    virtual std::string toString() = 0;
};

#endif //PO_LAB3_FIGURES_V2_FIGURE_H