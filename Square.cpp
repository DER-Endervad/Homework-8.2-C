#include "square.h"

Square::Square(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d, std::string name) : Quadrangle(l_a, l_b, l_c, l_d, a_a, a_b, a_c, a_d, name) {
	if (l_a != l_b || l_b != l_c || l_c != l_d) {
		throw My_exception(" не был создан. ѕричина: стороны не равны");
	}
	else {
		if (a_a != a_b || a_b != a_c || a_c != a_d) {
			throw My_exception(" не был создан. ѕричина: углы не равны 90 градусам");
		}
		else {
			std::cout << " был создан." << std::endl;
		}
	}
}
