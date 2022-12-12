#include "Rectangle_Q.h"

Rectangle_Q::Rectangle_Q(int l_a, int l_b, int l_c, int l_d, int a_a, int a_b, int a_c, int a_d, std::string name) : Quadrangle(l_a, l_b, l_a, l_b, a_a, a_b, a_c, a_d, name) {
	if (l_a != l_c || l_b != l_d) {
		throw My_exception(" �� ��� ������. �������: ������� ������� �� �����");
	}
	else {
		if (a_a != a_b || a_b != a_c || a_c != a_d) {
			throw My_exception(" �� ��� ������. �������: ���� �� ����� 90 ��������");
		}
		else {
			std::cout << " ��� ������." << std::endl;
		}
	}
}