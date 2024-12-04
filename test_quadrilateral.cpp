//
// Created by nwaszkowiak on 26.11.24.
//
#include "catch_amalgamated.hpp"
#include "quadrilateral.h"
#include "point.h"

TEST_CASE("Quadrilateral constructor and toString method", "[Quadrilateral]") {
    Point p1(1.0, 2.0);
    Point p2(3.0, 4.0);
    Point p3(5.0, 6.0);
    Point p4(7.0, 8.0);
    Quadrilateral quad(p1, p2, p3, p4);
    REQUIRE(quad.toString() == "Quadrilateral(Point(1.0, 2.0), Point(3.0, 4.0), Point(5.0, 6.0), Point(7.0, 8.0))");

    Point p5(9.0, 10.0);
    Point p6(11.0, 12.0);
    Point p7(13.0, 14.0);
    Point p8(15.0, 16.0);
    Quadrilateral quad2(p5, p6, p7, p8);
    REQUIRE(quad2.toString() == "Quadrilateral(Point(9.0, 10.0), Point(11.0, 12.0), Point(13.0, 14.0), Point(15.0, 16.0))");
}

TEST_CASE("Quadrilateral copy constructor", "[Quadrilateral]") {
    Point p1(1.0, 2.0);
    Point p2(3.0, 4.0);
    Point p3(5.0, 6.0);
    Point p4(7.0, 8.0);
    Quadrilateral quad1(p1, p2, p3, p4);
    Quadrilateral quad2(quad1);
    REQUIRE(quad2.toString() == "Quadrilateral(Point(1.0, 2.0), Point(3.0, 4.0), Point(5.0, 6.0), Point(7.0, 8.0))");

    Point p5(9.0, 10.0);
    Point p6(11.0, 12.0);
    Point p7(13.0, 14.0);
    Point p8(15.0, 16.0);
    Quadrilateral quad3(p5, p6, p7, p8);
    Quadrilateral quad4(quad3);
    REQUIRE(quad4.toString() == "Quadrilateral(Point(9.0, 10.0), Point(11.0, 12.0), Point(13.0, 14.0), Point(15.0, 16.0))");
}

TEST_CASE("Quadrilateral equals method", "[Quadrilateral]") {
    Point p1(1.0, 2.0);
    Point p2(3.0, 4.0);
    Point p3(5.0, 6.0);
    Point p4(7.0, 8.0);
    Quadrilateral quad1(p1, p2, p3, p4);
    Quadrilateral quad2(p1, p2, p3, p4);
    REQUIRE(quad1.equals(quad2));

    Point p5(9.0, 10.0);
    Point p6(11.0, 12.0);
    Point p7(13.0, 14.0);
    Point p8(15.0, 16.0);
    Quadrilateral quad3(p5, p6, p7, p8);
    Quadrilateral quad4(p5, p6, p7, p8);
    REQUIRE(quad3.equals(quad4));
}

TEST_CASE("Quadrilateral flip method", "[Quadrilateral]") {
    Point p1(1.0, 2.0);
    Point p2(3.0, 4.0);
    Point p3(5.0, 6.0);
    Point p4(7.0, 8.0);
    Quadrilateral quad(p1, p2, p3, p4);
    quad.flip();
    REQUIRE(quad.toString() == "Quadrilateral(Point(-1.0, -2.0), Point(-3.0, -4.0), Point(-5.0, -6.0), Point(-7.0, -8.0))");

    Point p5(9.0, 10.0);
    Point p6(11.0, 12.0);
    Point p7(13.0, 14.0);
    Point p8(15.0, 16.0);
    Quadrilateral quad2(p5, p6, p7, p8);
    quad2.flip();
    REQUIRE(quad2.toString() == "Quadrilateral(Point(-9.0, -10.0), Point(-11.0, -12.0), Point(-13.0, -14.0), Point(-15.0, -16.0))");
}

TEST_CASE("Quadrilateral move method", "[Quadrilateral]") {
    Point p1(1.0, 2.0);
    Point p2(3.0, 4.0);
    Point p3(5.0, 6.0);
    Point p4(7.0, 8.0);
    Quadrilateral quad(p1, p2, p3, p4);
    quad.move(1.0, 1.0);
    REQUIRE(quad.toString() == "Quadrilateral(Point(2.0, 3.0), Point(4.0, 5.0), Point(6.0, 7.0), Point(8.0, 9.0))");

    Point p5(9.0, 10.0);
    Point p6(11.0, 12.0);
    Point p7(13.0, 14.0);
    Point p8(15.0, 16.0);
    Quadrilateral quad2(p5, p6, p7, p8);
    quad2.move(2.0, 2.0);
    REQUIRE(quad2.toString() == "Quadrilateral(Point(11.0, 12.0), Point(13.0, 14.0), Point(15.0, 16.0), Point(17.0, 18.0))");
}

TEST_CASE("Quadrilateral getSurface method", "[Quadrilateral]") {
    Point p1(0.0, 0.0);
    Point p2(4.0, 0.0);
    Point p3(4.0, 3.0);
    Point p4(0.0, 3.0);
    Quadrilateral quad(p1, p2, p3, p4);
    REQUIRE(quad.getSurface() == Catch::Approx(12.0));

    Point p5(0.0, 0.0);
    Point p6(3.0, 0.0);
    Point p7(3.0, 4.0);
    Point p8(0.0, 4.0);
    Quadrilateral quad2(p5, p6, p7, p8);
    REQUIRE(quad2.getSurface() == Catch::Approx(12.0));
}