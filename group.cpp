#include "group.h"
#include <sstream>
#include <algorithm>

Group::Group() = default;

Group::Group(const Group& other) : Figure(), figures(other.figures) {}

void Group::add(Figure* figure) {
    figures.push_back(figure);
}

void Group::remove(Figure* figure) {
    auto it = std::remove(figures.begin(), figures.end(), figure);
    figures.erase(it, figures.end());
}

bool Group::equals(const Figure& other) const {
    const Group* otherGroup = dynamic_cast<const Group*>(&other);
    if (!otherGroup) return false;
    if (figures.size() != otherGroup->figures.size()) return false;

    std::vector<bool> matched(figures.size(), false);
    for (auto* f : figures) {
        bool found = false;
        for (size_t i = 0; i < otherGroup->figures.size(); ++i) {
            if (!matched[i] && f->equals(*otherGroup->figures[i])) {
                matched[i] = true;
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}

void Group::flip() {
    for (auto* f : figures) f->flip();
}

void Group::move(double dx, double dy) {
    for (auto* f : figures) f->move(dx, dy);
}

double Group::getSurface() const {
    double sum = 0.0;
    for (auto* f : figures) sum += f->getSurface();
    return sum;
}

std::string Group::toString() const {
    if (figures.empty()) return "Group()";
    std::ostringstream os;
    os << "Group(";
    for (auto* f : figures) {
        os << f->toString() << ", ";
    }
    os << ")";
    return os.str();
}