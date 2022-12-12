#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name) : Triangle(l_a, l_b, l_c, a_a, a_b, a_c, name) {
	if (l_a != l_b || l_b != l_c) {
		throw My_exception(" не был создан. ѕричина: стороны не равны");
	}
	else {
		if (a_a != a_b || a_b != a_c) {
			throw My_exception(" не был создан. ѕричина: углы не равны 60 градусам");
		}
		else {
			std::cout << " был создан." << std::endl;
		}
	}
}
