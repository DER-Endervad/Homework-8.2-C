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

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle* t = new Triangle(10, 20, 30, 50, 60, 70); 
    t->get_triangle(); std::cout << std::endl;

    Triangle* rt = new Right_triangle(10, 20, 30, 40, 50); // В задание указаны не правильные углы A=50 B=60 C=90 их сумма 200 она не равна 180.
    rt->get_triangle(); std::cout << std::endl;

    Triangle* it = new Isosceles_triangle(10, 20, 50, 80); // Тут тоже сумма углов не равна 180. (A=50 B=60 C=50 = 160)
    it->get_triangle(); std::cout << std::endl;

    Triangle* et = new Equilateral_triangle(30);
    et->get_triangle(); std::cout << std::endl;

    Quadrangle* q = new Quadrangle(10, 20, 30, 40, 50, 60, 70, 80); 
    q->get_quadrangle(); std::cout << std::endl;

    Quadrangle* r = new Rectangle_Q(10, 20);
    r->get_quadrangle(); std::cout << std::endl;

    Quadrangle* s = new Square(20);
    s->get_quadrangle(); std::cout << std::endl;

    Quadrangle* p = new Parallelogram(20, 30, 30, 40);
    p->get_quadrangle(); std::cout << std::endl;

    Quadrangle* rh = new Rhombus(30, 30, 40);
    rh->get_quadrangle(); std::cout << std::endl;
}
