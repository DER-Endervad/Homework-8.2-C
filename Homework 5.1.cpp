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

void print_info(Figure* figure);

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure;

    Triangle* t = new Triangle(10, 20, 30, 50, 60, 70);
    print_info(t); std::cout << std::endl; delete t;

    Triangle* rt = new Right_triangle(10, 20, 30, 40, 50); // В задание указаны не правильные углы A=50 B=60 C=90 их сумма 200 она не равна 180.
    print_info(rt); std::cout << std::endl; delete rt;

    Triangle* it = new Isosceles_triangle(10, 20, 50, 80); // Тут тоже сумма углов не равна 180. (A=50 B=60 C=50 = 160)
    print_info(it); std::cout << std::endl; delete it;

    Triangle* et = new Equilateral_triangle(30);
    print_info(et); std::cout << std::endl; delete et;

    Quadrangle* q = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80); 
    print_info(q); std::cout << std::endl; delete q;

    Quadrangle* r = new Rectangle_Q(10, 20);
    print_info(r); std::cout << std::endl; delete r;

    Quadrangle* s = new Square(20);
    print_info(s); std::cout << std::endl; delete s;

    Quadrangle* p = new Parallelogram(20, 30, 30, 40);
    print_info(p); std::cout << std::endl; delete p;

    Quadrangle* rh = new Rhombus(30, 30, 40);
    print_info(rh); std::cout << std::endl; delete rh;
}

void print_info(Figure* figure)
{
    figure->get_sides_count();
    //std::cout << figure->get_sides_count() << std::endl; тут ошибка c++ отсутствует оператор, соответствующий этим операндам типы операндов: std::ostream << void
}
