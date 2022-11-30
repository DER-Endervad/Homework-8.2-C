#pragma once
#include "Triangle.h"

class Right_triangle : public Triangle
{
public:
	Right_triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c = 90, std::string name = "Прямоугольный треугольник");
};

