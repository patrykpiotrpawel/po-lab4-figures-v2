#pragma once
#include <vector>
#include <string>
#include "figure.h"

class Group : public Figure {
    std::vector<Figure*> figures;

public:
    Group();
    Group(const Group& other);

    void add(Figure* figure);
    void remove(Figure* figure);

    bool equals(const Figure& other) const override;
    void flip() override;
    void move(double dx, double dy) override;
    double getSurface() const override;
    std::string toString() const override;

    const std::vector<Figure*>& getFigures() const { return figures; }
};