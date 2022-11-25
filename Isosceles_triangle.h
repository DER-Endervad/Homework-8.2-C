#pragma once
#include "Triangle.h"
class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(int l_a, int l_b, int a_a, int a_b, std::string name = "Равнобедренный треугольник") : Triangle(l_a, l_b, l_a , a_a, a_b, a_a, name) {}
};

