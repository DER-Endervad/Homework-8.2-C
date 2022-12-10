#include "Rectangle_Q.h"

Rectangle_Q::Rectangle_Q(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d, std::string name) : Quadrangle(l_a, l_b, l_a, l_b, a_a, a_b, a_c, a_d, name) {
	try {
		if (l_a != l_c || l_b != l_d) {
			throw std::domain_error(" не был создан. ѕричина: стороны попарно не равны");
		}
		else {
			if (a_a != a_b || a_b != a_c || a_c != a_d) {
				throw std::domain_error(" не был создан. ѕричина: углы не равны 90 градусам");
			}
			else {
				std::cout << " был создан." << std::endl;
			}
		}
	}
	catch (std::domain_error d) {
		My_exception my_exception(d);
		/*my_exception.exception(err);*/
	}
}