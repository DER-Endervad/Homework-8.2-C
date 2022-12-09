#include "Rhombus.h"

Rhombus::Rhombus(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d, std::string name) : Quadrangle(l_a, l_b, l_c, l_d, a_a, a_b, a_c, a_d, name) {
	try {
		if (l_a != l_b || l_b != l_c || l_c != l_d) {
			throw 6;
		}
		else {
			if (a_a != a_c || a_b != a_d) {
				throw 12;
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