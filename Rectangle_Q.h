#pragma once
#include "Quadrangle.h"
class Rectangle_Q : public Quadrangle
{
public:
	Rectangle_Q(int l_a, int l_b, int a_a = 90, std::string name = "Прямоугольник") : Quadrangle(l_a, l_b, l_a, l_b, a_a, a_a, a_a, a_a, name) {}
};

