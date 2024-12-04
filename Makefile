CXX = g++
CXXFLAGS = -Wall --std=c++17

comp_test_point: test_point.cpp point.cpp catch_amalgamated.cpp
	$(CXX) $(CXXFLAGS) test_point.cpp point.cpp catch_amalgamated.cpp -o test_point.o

comp_test_line: test_line.cpp point.cpp figure.cpp line.cpp catch_amalgamated.cpp
	$(CXX) $(CXXFLAGS) test_line.cpp point.cpp figure.cpp line.cpp catch_amalgamated.cpp -o test_line.o

comp_test_triangle: test_triangle.cpp point.cpp figure.cpp triangle.cpp catch_amalgamated.cpp
	$(CXX) $(CXXFLAGS) test_triangle.cpp point.cpp figure.cpp triangle.cpp catch_amalgamated.cpp -o test_triangle.o

comp_test_quadrilateral: test_quadrilateral.cpp point.cpp figure.cpp quadrilateral.cpp catch_amalgamated.cpp
	$(CXX) $(CXXFLAGS) test_quadrilateral.cpp point.cpp figure.cpp quadrilateral.cpp catch_amalgamated.cpp -o test_quadrilateral.o

comp_test_group: test_group.cpp point.cpp figure.cpp line.cpp triangle.cpp quadrilateral.cpp group.cpp catch_amalgamated.cpp
	$(CXX) $(CXXFLAGS) test_group.cpp point.cpp figure.cpp line.cpp triangle.cpp quadrilateral.cpp group.cpp catch_amalgamated.cpp -o test_group.o

test_point: comp_test_point
	./test_point.o

test_line: comp_test_line
	./test_line.o

test_triangle: comp_test_triangle
	./test_triangle.o

test_quadrilateral: comp_test_quadrilateral
	./test_quadrilateral.o

test_group: comp_test_group
	./test_group.o

clean:
	rm -f main test_point.o test_line.o test_triangle.o test_quadrilateral.o test_group.o