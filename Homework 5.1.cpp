#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Quadrangle.h"
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Количество сторон:\n";
    Figure* f = new Figure; f->get_sides_count();
    Figure* t = new Triangle; t->get_sides_count();
    Figure* q = new Quadrangle; q->get_sides_count();
}
