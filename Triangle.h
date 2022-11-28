#pragma once
#include "Figure.h"
#include <iostream>

class Triangle:public Figure
{
protected:
	int length_a;
	int length_b;
	int length_c;
	int angel_a;
	int angel_b;
	int angel_c;

public:
	Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c) {
		if ((a_a + a_b + a_c) == 180) {
			sides_count = 3;
			name = "Треугольник";
			length_a = l_a;
			length_b = l_b;
			length_c = l_c;
			angel_a = a_a;
			angel_b = a_b;
			angel_c = a_c;
		}
		else {
			std::cout << "Сумма углов в треугольнике не равна 180." << std::endl;
		}
	}

	Triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name) {
		if ((a_a + a_b + a_c) == 180) {
			sides_count = 3;
			this->name = name;
			length_a = l_a;
			length_b = l_b;
			length_c = l_c;
			angel_a = a_a;
			angel_b = a_b;
			angel_c = a_c;
		}
		else {
			std::cout << "Сумма углов в треугольнике не равна 180." << std::endl;
		}
	}

	void get_sides_count() override {
		Figure::get_sides_count();
		std::cout << "Стороны: a=" << length_a << " b=" << length_b << " c=" << length_c << std::endl;
		std::cout << "Углы: A=" << angel_a << " B=" << angel_b << " C=" << angel_c << std::endl;
	}
};

