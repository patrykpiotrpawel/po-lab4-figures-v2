#include "line.h"
#include <sstream>

Line::Line() : a(0,0), b(0,0) {}
Line::Line(Point a_, Point b_) : a(a_), b(b_) {}
Line::Line(const Line& other) : a(other.a), b(other.b) {}

bool Line::equals(const Figure& other) const {
    const Line* otherLine = dynamic_cast<const Line*>(&other);
    if (!otherLine) return false;
    return (a.equals(otherLine->a) && b.equals(otherLine->b)) ||
           (a.equals(otherLine->b) && b.equals(otherLine->a));
}

void Line::flip() {
    a.flip(); b.flip();
}

void Line::move(double dx, double dy) {
    a.move(dx, dy);
    b.move(dx, dy);
}

std::string Line::toString() const {
    std::ostringstream os;
    os << "Line(" << a.toString() << ", " << b.toString() << ")";
    return os.str();
}