#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Rectangle_Q.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include <Windows.h>
#include <fstream>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure(0); Figure figure1(1); std::cout << std::endl;

    Figure* t = new Triangle(10, 20, 30, 50, 60, 70); 
    Figure* t1 = new Triangle(10, 20, 30, 50, 60, 60); 
    Figure* t2 = new Triangle(10, 20, 0, 50, 60, 70);
    delete t; delete t1; delete t2; std::cout << std::endl;

    Figure* rt = new Right_triangle(10, 20, 30, 40, 70, 70); 
    Figure* rt1 = new Right_triangle(10, 20, 30, 40, 50, 90);
    delete rt; delete rt1; std::cout << std::endl;

    Figure* it = new Isosceles_triangle(10, 20, 10, 50, 80, 50); 
    Figure* it1 = new Isosceles_triangle(20, 20, 10, 50, 80, 50); 
    Figure* it2 = new Isosceles_triangle(10, 20, 10, 40, 80, 60);
    delete it; delete it1; delete it2; std::cout << std::endl;

    Figure* et = new Equilateral_triangle(30, 30, 30, 60, 60, 60);
    Figure* et1 = new Equilateral_triangle(20, 30, 30, 60, 60, 60);
    Figure* et2 = new Equilateral_triangle(30, 30, 30, 70, 70, 40);
    delete et; delete et1; delete et2; std::cout << std::endl;

    Figure* q = new Quadrangle(10, 20, 30, 40, 80, 80, 100, 100);
    Figure* q1 = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Figure* q2 = new Quadrangle(10, 20, 30, 0, 50, 60, 70, 80);
    delete q; delete q1; delete q2; std::cout << std::endl;

    Figure* r = new Rectangle_Q(10, 20, 10, 20, 90, 90, 90, 90);
    Figure* r1 = new Rectangle_Q(10, 10, 10, 20, 90, 90, 90, 90);
    Figure* r2 = new Rectangle_Q(10, 20, 10, 20, 80, 90, 90, 100);
    delete r; delete r1; delete r2; std::cout << std::endl;

    Figure* s = new Square(20, 20, 20, 20, 90, 90, 90, 90);
    Figure* s1 = new Square(10, 20, 20, 20, 90, 90, 90, 90);
    Figure* s2 = new Square(20, 20, 20, 20, 80, 90, 90, 100);
    delete s; delete s1; delete s2; std::cout << std::endl;

    Figure* p = new Parallelogram(10, 20, 10, 20, 100, 80, 100, 80);
    Figure* p1 = new Parallelogram(10, 10, 10, 20, 100, 80, 100, 80);
    Figure* p2 = new Parallelogram(10, 20, 10, 20, 100, 100, 100, 60);
    delete p; delete p1; delete p2; std::cout << std::endl;

    Figure* rh = new Rhombus(10, 10, 10, 10, 100, 80, 100, 80);
    Figure* rh1 = new Rhombus(10, 10, 10, 20, 100, 80, 100, 80);
    Figure* rh2 = new Rhombus(10, 10, 10, 10, 100, 100, 100, 60);
    delete rh; delete rh1; delete rh2; std::cout << std::endl;
}
