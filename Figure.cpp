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
			throw 0;
		}
		else {
			std::cout << " была создана." << std::endl;
		}
	}
	catch (int err) {
		My_exception my_exception;
		my_exception.exception(err);
	}
}

void Figure::get_sides_count() {
	std::cout << name << " (стороны " << sides_count << ")";
};