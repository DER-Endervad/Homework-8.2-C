#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int l_a, int l_b, int l_c, int a_a, int a_b, int a_c, std::string name) : Triangle(l_a, l_b, l_c, a_a, a_b, a_c, name) {
	try {
		if (l_a != l_b || l_b != l_c) {
			throw 6;
		}
		else {
			if (a_a != a_b || a_b != a_c) {
				throw 7;
			}
			else {
				std::cout << " был создан." << std::endl;
			}
		}
	}
	catch (int err) {
		My_exception my_exception;
		my_exception.exception(err);
	}
}
