//
// Created by nwaszkowiak on 04.12.24.
//

#pragma once

#include <string>

class Figure {
public:
    virtual ~Figure() = default;
    virtual bool equals(const Figure& other) const = 0;
    virtual void flip() = 0;
    virtual void move(double dx, double dy) = 0;
    virtual double getSurface() const { return 0.0; }
    virtual std::string toString() const = 0;
};