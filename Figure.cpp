#include "Figure.h"
Figure::Figure() {
	name = "������";
	sides_count = 0;
}
Figure::Figure(int sides_count) {
	name = "������";
	Figure::sides_count = sides_count;
	Figure::get_sides_count();
	if (sides_count != 0) {
		throw My_exception(" �� ���� �������. �������: ���������� ������ ������ 0");
	}
	else {
		std::cout << " ���� �������." << std::endl;
	}
}

void Figure::get_sides_count() {
	std::cout << name << " (������� " << sides_count << ")";
};