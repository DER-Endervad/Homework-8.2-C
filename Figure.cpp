#include "Figure.h"
Figure::Figure(){
	name = "Фигура";
	sides_count = 0;
}
Figure::Figure(int sides_count) {
	try {
		name = "Фигура";
		Figure::sides_count = sides_count;
		Figure::get_sides_count();
		if (sides_count != 0) {
			throw std::domain_error(" не была создана. Причина: количество сторон больше 0");
		}
		else {
			std::cout << " была создана." << std::endl;
		}
	}
	catch (std::domain_error d) {
		My_exception my_exception(d);
		/*my_exception.exception(d);*/
	}
}

void Figure::get_sides_count() {
	std::cout << name << " (стороны " << sides_count << ")";
};