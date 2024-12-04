//
// Created by nwaszkowiak on 26.11.24.
//
#include "catch_amalgamated.hpp"
#include "point.h"

TEST_CASE("Point constructor and getters", "[Point]") {
    Point p1(3.0, 4.0);
    REQUIRE(p1.toString() == "Point(3.0, 4.0)");

    Point p2(-1.0, 2.5);
    REQUIRE(p2.toString() == "Point(-1.0, 2.5)");
}

TEST_CASE("Point copy constructor", "[Point]") {
    Point p1(3.0, 4.0);
    Point p2(p1);
    REQUIRE(p2.toString() == "Point(3.0, 4.0)");

    Point p3(-1.0, 2.5);
    Point p4(p3);
    REQUIRE(p4.toString() == "Point(-1.0, 2.5)");
}

TEST_CASE("Point equals method", "[Point]") {
    Point p1(3.0, 4.0);
    Point p2(3.0, 4.0);
    REQUIRE(p1.equals(p2) == true);

    Point p3(-1.0, 2.5);
    Point p4(1.0, -2.5);
    REQUIRE(p3.equals(p4) == false);
}

TEST_CASE("Point flip method", "[Point]") {
    Point p1(3.0, 4.0);
    p1.flip();
    REQUIRE(p1.toString() == "Point(-3.0, -4.0)");

    Point p2(-1.0, 2.5);
    p2.flip();
    REQUIRE(p2.toString() == "Point(1.0, -2.5)");
}

TEST_CASE("Point move method", "[Point]") {
    Point p1(3.0, 4.0);
    p1.move(1.0, 1.0);
    REQUIRE(p1.toString() == "Point(4.0, 5.0)");

    Point p2(-1.0, 2.5);
    p2.move(-1.0, -2.5);
    REQUIRE(p2.toString() == "Point(-2.0, 0.0)");
}

TEST_CASE("Point toString method", "[Point]") {
    Point p1(3.0, 4.0);
    REQUIRE(p1.toString() == "Point(3.0, 4.0)");

    Point p2(-1.0, 2.5);
    REQUIRE(p2.toString() == "Point(-1.0, 2.5)");
}